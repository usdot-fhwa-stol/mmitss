#include "carma-outbound-listener.h"
#include "carma-transceiver-decoder.h"
#include "SignalRequest.h"


#define DEBUG_DECODED_MSG

OutboundMsgListener::OutboundMsgListener()
{       
    Json::Value jsonObject_config;
    std::ifstream configJson("/nojournal/bin/mmitss-phase3-master-config.json");
    string configJsonString((std::istreambuf_iterator<char>(configJson)), std::istreambuf_iterator<char>());
    Json::CharReaderBuilder builder;
    JSONCPP_STRING err;
    const std::unique_ptr<Json::CharReader> reader(builder.newCharReader());
    reader->parse(configJsonString.c_str(), configJsonString.c_str() + configJsonString.size(), &jsonObject_config, &err);    
    hostIp = jsonObject_config["HostIp"].asString();

    bsmReceiverPort = jsonObject_config["PortNumber"]["PriorityRequestGenerator"].asInt();
    dcPort = jsonObject_config["PortNumber"]["DataCollector"].asInt();
    prgPort = jsonObject_config["PortNumber"]["PriorityRequestGenerator"].asInt();
    hmiControllerIp = jsonObject_config["HMIControllerIP"].asString();
    mdIp = jsonObject_config["MessageDistributorIP"].asString();
    peerDecoding = jsonObject_config["PeerDataDecoding"].asBool();
    hostBsmDecoderPort = jsonObject_config["PortNumber"]["HostBsmDecoder"].asInt();
    RCLCPP_DEBUG(rclcpp::get_logger("rclcpp"), "OutboundMsgListener::OutboundMsgListener hostIp: %s, bsmReceiverPort: %d, dcPort: %d, prgPort: %d, hmiControllerIp: %s, mdIp: %s", 
        hostIp.c_str(), 
        bsmReceiverPort,
        dcPort,
        prgPort,
        hmiControllerIp.c_str(),
        mdIp.c_str());
}

OutboundMsgListener::~OutboundMsgListener()
{
}
void OutboundMsgListener::outboundMsgCallback(const carma_driver_msgs::msg::ByteArray::SharedPtr msg)
{
    
    RCLCPP_DEBUG(rclcpp::get_logger("rclcpp"), "InboundMsgListener::inboundMsgCallback msgType: %s", 
    msg->message_type.c_str());
    if (msg->message_type == "MAP" || msg->message_type=="SRM" || msg->message_type == "SSM" || msg->message_type == "BSM") {
        UdpSocket decoderSocket(static_cast<short unsigned int>(hostBsmDecoderPort)); 
        std::string msgType = msg->message_type;
        string receiverIP = getIP(msgType); 
        short unsigned int receivingPort = getPort(msgType);
        string messageString = decodeType(msg->content,msgType);
        decoderSocket.sendData(receiverIP,receivingPort,messageString);
        decoderSocket.closeSocket();
    }
    else {
        RCLCPP_WARN(rclcpp::get_logger("rclcpp"), "OutboundMsgListener::outboundMsgCallback msgType: %s not supported", 
            msg->message_type.c_str());
    }
}
std::string OutboundMsgListener::getIP(const std::string &msgType)

{

    if (msgType == "MAP"||msgType=="SRM"||msgType == "SSM"||msgType =="BSM")
    { 
        return hostIp;
    }
    else {
        throw std::invalid_argument("Invalid message type " + msgType);
    }
    
}

short unsigned int OutboundMsgListener::getPort(const std::string &msgType)
{

    
    if (msgType == "MAP")
    { 
        return static_cast<short unsigned int>(prgPort);
    }
    else if (msgType =="BSM")
    {
        return static_cast<short unsigned int>(bsmReceiverPort);
    }
    else if (msgType=="SRM"||msgType == "SSM")
    {
        return static_cast<short unsigned int>(dcPort);
    }
    else {
        throw std::invalid_argument("Invalid message type " + msgType);
    }   
}

std::string OutboundMsgListener::decodeType(const std::vector<uint8_t> &msgContent,const std::string &msgType)
{
    TransceiverDecoder decoder;
    if (msgType == "MAP")
    {
        string mapString = decoder.convertMapUperToHexString(msgContent);
        string mapJsonString = decoder.createJsonStringOfMapPayload(mapString);
        RCLCPP_DEBUG(rclcpp::get_logger("rclcpp"), "OutboundMsgListener::decode MAP: %s ", mapJsonString.c_str());

        return mapJsonString;
    }
    else if (msgType == "BSM")
    {
        string bsmJsonString = decoder.bsmDecoder(msgContent);
        RCLCPP_DEBUG(rclcpp::get_logger("rclcpp"), "OutboundMsgListener::decode BSM: %s ", bsmJsonString.c_str());
        return bsmJsonString;
    }
    else if (msgType == "SRM")
    {
        if (peerDecoding)
        {
            string srmJsonString = decoder.srmDecoder(msgContent);
            RCLCPP_DEBUG(rclcpp::get_logger("rclcpp"), "OutboundMsgListener::decode SRM: %s ", srmJsonString.c_str());
            return srmJsonString;
        } 
    }
    else if (msgType == "SSM")
    {
        if (peerDecoding)
        {
            string ssmJsonString = decoder.ssmDecoder(msgContent);
            RCLCPP_DEBUG(rclcpp::get_logger("rclcpp"), "OutboundMsgListener::decode SSM: %s ", ssmJsonString.c_str());
            return ssmJsonString;
        } 
    }
    else {
        throw std::invalid_argument("Invalid message type " + msgType);
    }
    // If message type is SSM or SRM but peerDecoding is false, return empty string
    return "";
}
//     if (msgType == "BSM")
//     {
//         std::cout<<"sending bsm"<< std::endl;
//         string bsmJsonString = decoder.bsmDecoder(msg->content);
        
// #ifdef DEBUG_DECODED_MSG
//         std::cout << "Local BSM -- " << bsmJsonString << std::endl;
// #endif
//         decoderSocket.sendData(LOCALHOST, static_cast<short unsigned int>(bsmReceiverPortNo), bsmJsonString);
//         decoderSocket.sendData(LOCALHOST, static_cast<short unsigned int>(dataCollectorPortNo), bsmJsonString);

//         if (decoder.sendSystemPerformanceDataLog())
//             decoderSocket.sendData(LOCALHOST, static_cast<short unsigned int>(dataCollectorPortNo), decoder.createJsonStringForSystemPerformanceDataLog("HostBSM"));
//     }

//     decoderSocket.closeSocket();
//     std::cout<<"closed socket"<<std::endl;
    

