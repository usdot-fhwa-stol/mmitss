#include "carma-inbound-listener.h"
#include "SignalRequest.h"


#define DEBUG_DECODED_MSG

InboundMsgListener::InboundMsgListener()
{
    Json::Value jsonObject_config;
    std::ifstream configJson("/nojournal/bin/mmitss-phase3-master-config.json");
    string configJsonString((std::istreambuf_iterator<char>(configJson)), std::istreambuf_iterator<char>());
    Json::CharReaderBuilder builder;
    JSONCPP_STRING err;
    const std::unique_ptr<Json::CharReader> reader(builder.newCharReader());
    reader->parse(configJsonString.c_str(), configJsonString.c_str()+configJsonString.length(),  &jsonObject_config, &err);
    hostIp = jsonObject_config["HostIp"].asString();
    prgTimeSyncPort = jsonObject_config["TimeSyncPort"]["PriorityRequestGenerator"].asInt();
    mtPort = jsonObject_config["PortNumber"]["MessageTransceiver"]["MessageDecoder"].asInt();
    hmiControllerIp = jsonObject_config["HMIControllerIP"].asString();
    mdIp = jsonObject_config["MessageDistributorIP"].asString();
    dcPort = jsonObject_config["PortNumber"]["DataCollector"].asInt();
    prgPort = jsonObject_config["PortNumber"]["PriorityRequestGenerator"].asInt();
    peerDecoding = jsonObject_config["PeerDataDecoding"].asBool();
    RCLCPP_DEBUG(rclcpp::get_logger("rclcpp"), "InboundMsgListener::InboundMsgListener hostIp: %s, prgTimeSyncPort: %d, mtPort: %d, hmiControllerIp: %s, mdIp: %s", 
        hostIp.c_str(), 
        prgTimeSyncPort,
        mtPort,
        hmiControllerIp.c_str(),
        mdIp.c_str());
}

InboundMsgListener::~InboundMsgListener()
{
}

void InboundMsgListener::inboundClockCallback( const rosgraph_msgs::msg::Clock::SharedPtr msg )
{
    RCLCPP_DEBUG(rclcpp::get_logger("rclcpp"), "InboundMsgListener::inboundClockCallback msg: %d.%d", 
        msg->clock.sec, 
        msg->clock.nanosec);
    std::lock_guard<std::mutex> lock(time_mutex_);
    time_msg = msg;
    std::string time_sync = decodeClock(msg);
    
    UdpSocket decoderSocket(static_cast<unsigned short>(mtPort));
    RCLCPP_DEBUG(rclcpp::get_logger("rclcpp"), "InboundMsgListener::inboundClockCallback time_sync: %s to %s:%d", 
        time_sync.c_str(), 
        hostIp.c_str(), 
        prgTimeSyncPort);
    decoderSocket.sendData(hostIp,static_cast<unsigned short>(prgTimeSyncPort),time_sync);
    decoderSocket.closeSocket();
}


void InboundMsgListener::inboundMsgCallback(const carma_driver_msgs::msg::ByteArray::SharedPtr msg)
{
    
    RCLCPP_DEBUG(rclcpp::get_logger("rclcpp"), "InboundMsgListener::inboundMsgCallback msgType: %s", 
        msg->message_type.c_str());
    std::string msgType = msg->message_type;

    if (msgType == "MAP" || msgType=="SRM" || msgType == "SSM" || msgType == "BSM") {
        UdpSocket decoderSocket(static_cast<unsigned short>(mtPort)); 

        string receiverIP = getIP(msgType); 
        short unsigned int receivingPort = getPort(msgType);
        string messageString = decodeType(msg->content,msgType);
        decoderSocket.sendData(receiverIP,receivingPort,messageString);
        decoderSocket.closeSocket();
    }
    else {
        RCLCPP_WARN(rclcpp::get_logger("rclcpp"), "InboundMsgListener::inboundMsgCallback msgType: %s not supported", 
            msg->message_type.c_str());
    }
}
std::string InboundMsgListener::getIP(const std::string &msgType)

{
    if (msgType == "MAP"||msgType=="SRM"||msgType == "SSM")
    { 
        return hostIp;
    }
    else if (msgType == "BSM")
    {
        // For BSM and SPaT messages, send to HMIControllerIP
        return hmiControllerIp;
    }
    else {
        throw std::invalid_argument("Invalid message type " + msgType);
    }
    
}



unsigned short InboundMsgListener::getPort(const std::string &msgType)
{
    
    
    if (msgType =="BSM"||msgType=="SRM"||msgType == "SSM")
    {
        return static_cast<unsigned short>(dcPort);
    }
    else if (msgType == "MAP")
    { 
        // For MAP messages, send to the priority request generator
        return static_cast<unsigned short>(prgPort);
    }
    else {
        throw std::invalid_argument("Invalid message type " + msgType);
    }
    
}

std::string InboundMsgListener::decodeType(const std::vector<uint8_t> &msgContent,const std::string &msgType)
{
    TransceiverDecoder decoder;
    if (msgType == "MAP")
    {
        string mapString = decoder.convertMapUperToHexString(msgContent);
        string mapJsonString = decoder.createJsonStringOfMapPayload(mapString);
        return mapJsonString;
    }
    else if (msgType == "BSM")
    {
        string bsmJsonString = decoder.bsmDecoder(msgContent);
        RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "Original BSM -- %s",
            bsmJsonString.c_str()); 
        Json::Value json_bsm;
        Json::CharReaderBuilder builder;
        JSONCPP_STRING err;
        const std::unique_ptr<Json::CharReader> reader(builder.newCharReader());
        reader->parse(bsmJsonString.c_str(), bsmJsonString.c_str()+bsmJsonString.length(),  &json_bsm, &err);
        // Correct SecMark_Seconds to account for the time offset
        if (time_msg != nullptr)
        {
            // Overwrite the SecMark_Seconds value in the json object
            std::lock_guard<std::mutex> lock(time_mutex_);
            json_bsm["SecMark_Seconds"] =  double(time_msg->clock.sec) + double(time_msg->clock.nanosec/1000000000.0);
        }
        // Convert the json object back to string
        Json::StreamWriterBuilder writer;
        std::string bsmJsonString = Json::writeString(writer, json_bsm);
        RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "Updated BSM -- %s",
            bsmJsonString.c_str());
        return bsmJsonString;
    }
    else if (msgType == "SRM")
    {
        if (peerDecoding)
        {
            string srmJsonString = decoder.srmDecoder(msgContent);
            return srmJsonString;
        } 
    }
    else if (msgType == "SSM")
    {
        if (peerDecoding)
        {
            string ssmJsonString = decoder.ssmDecoder(msgContent);
            return ssmJsonString;
        } 
    }
    else {
        throw std::invalid_argument("Invalid message type " + msgType);
    }
    // If message type is SSM or SRM but peerDecoding is false, return empty string
    return "";
    
}

std::string InboundMsgListener::decodeClock(const rosgraph_msgs::msg::Clock::SharedPtr msg)
{
    TransceiverDecoder decoder;
    std::string time_sync = decoder.decodeClock(msg);
    return time_sync;
}


//     if (msgType == "MAP")
//     {
//         string mapString = decoder.convertMapUperToHexString(msg->content);

//         // string mapString = "0012813e38023020304bda094cdcf8713d4dc41a118602dc0514f8396008a000001c000c3b33bd0075057982edb6f0d0282875567daaf1e4ff4028297a5587c813ec3d5ec85475d68b69241a000192088000c908200062c03340000038001d6e7b5888141436b4ade86e756f58dc8cd831c175b64386eb8c4722270d0e544eea5e455c9004fb12422000212044001090640008180442000002000016c415f68141436009f70b0155000000e000819dc643e337bd0186802a6b8d7313d81ad1eb083606d6416cc7a2001414b4e3ce4c0a0a5a66622c05052d0ecf690282892050000490420002484200010c03310000010000033fe4e1867549e08c0111000001000003b083835788f75281414580ee800000700008e3dd5e05cbd2b7c04fb0e61775f24824000224090001120c4000830110400000400000e77f5325c946b6604fb0";

//         string mapJsonString = decoder.createJsonStringOfMapPayload(mapString);

// #ifdef DEBUG_DECODED_MSG
//         std::cout << "MAP -- " << mapJsonString << std::endl;
// #endif
//         decoderSocket.sendData(LOCALHOST, static_cast<short unsigned int>(priorityReqGenPortNo), mapJsonString);
//     }

//     else if (msgType == "BSM")
//     {
//         string bsmJsonString = decoder.bsmDecoder(msg->content);
//         decoderSocket.sendData(HMIControllerIP, static_cast<short unsigned int>(vehicleHmiPortNo), bsmJsonString);

// #ifdef DEBUG_DECODED_MSG
//         std::cout << "Remote BSM -- " << bsmJsonString << std::endl;
// #endif
//         // message distributor is only for the simulation environment, This should be tested against a simulation conditional
//         decoderSocket.sendData(messageDistributorIP, static_cast<short unsigned int>(messageDistributorPort), bsmJsonString);
//         decoderSocket.sendData(LOCALHOST, static_cast<short unsigned int>(dataCollectorPortNo), bsmJsonString);
//     }

//     else if (msgType == "SRM")
//     {
//         if (peerDataDecoding)
//         {
//             string srmJsonString = decoder.srmDecoder(msg->content);
//             decoderSocket.sendData(LOCALHOST, static_cast<short unsigned int>(dataCollectorPortNo), srmJsonString);
//         }
//     }

//     else if (msgType == "SPAT")
//     {
// /*        
//         string spatJsonString = decoder.spatDecoder(msg->content);

// #ifdef DEBUG_DECODED_MSG
//         std::cout << "SPAT -- " << spatJsonString << std::endl;
// #endif
//         decoderSocket.sendData(HMIControllerIP, static_cast<short unsigned int>(vehicleHmiPortNo), spatJsonString);
//         decoderSocket.sendData(LOCALHOST, static_cast<short unsigned int>(dataCollectorPortNo), spatJsonString);
// */

//     }

//     else if (msgType == "SSM")
//     {
//         string ssmJsonString = decoder.ssmDecoder(msg->content);
//         decoderSocket.sendData(LOCALHOST, static_cast<short unsigned int>(priorityReqGenPortNo), ssmJsonString);
//         decoderSocket.sendData(LOCALHOST, static_cast<short unsigned int>(dataCollectorPortNo), ssmJsonString);
//     }

//     if (decoder.sendSystemPerformanceDataLog())
//     {
//         decoderSocket.sendData(LOCALHOST, static_cast<short unsigned int>(dataCollectorPortNo),
//                                decoder.createJsonStringForSystemPerformanceDataLog("RemoteBSM"));
//         decoderSocket.sendData(LOCALHOST, static_cast<short unsigned int>(dataCollectorPortNo),
//                                decoder.createJsonStringForSystemPerformanceDataLog("SSM"));
//         decoderSocket.sendData(LOCALHOST, static_cast<short unsigned int>(dataCollectorPortNo),
//                                decoder.createJsonStringForSystemPerformanceDataLog("MAP"));
//         decoderSocket.sendData(LOCALHOST, static_cast<short unsigned int>(dataCollectorPortNo),
//                                decoder.createJsonStringForSystemPerformanceDataLog("SPaT"));
//     }

//     decoderSocket.closeSocket();
    
    
// }