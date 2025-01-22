#include "carma-inbound-listener.h"
#include "SignalRequest.h"


#define DEBUG_DECODED_MSG

InboundMsgListener::InboundMsgListener()
{
   
    
}

InboundMsgListener::~InboundMsgListener()
{
}
void InboundMsgListener::inboundMsgCallback(const carma_driver_msgs::msg::ByteArray::SharedPtr msg)
{
    
    Json::Value jsonObject_config;
    std::ifstream configJson("/nojournal/bin/mmitss-phase3-master-config.json");
    string configJsonString((std::istreambuf_iterator<char>(configJson)), std::istreambuf_iterator<char>());
    Json::Reader reader;
    string errors{};
    reader.parse(configJsonString.c_str(), jsonObject_config);
    UdpSocket decoderSocket(static_cast<short unsigned int>(jsonObject_config["PortNumber"]["MessageTransceiver"]["MessageDecoder"].asInt())); 

    std::string msgType = msg->message_type;
    string receiverIP = getIP(msgType); 
    short unsigned int receivingPort = getPort(msgType);
    string messageString = decodeType(msg->content,msgType);
    decoderSocket.sendData(receiverIP,receivingPort,messageString);
    decoderSocket.closeSocket();
}
std::string InboundMsgListener::getIP(std::string msgType)

{
    Json::Value jsonObject_config;
    std::ifstream configJson("/nojournal/bin/mmitss-phase3-master-config.json");
    string configJsonString((std::istreambuf_iterator<char>(configJson)), std::istreambuf_iterator<char>());
    Json::Reader reader;
    string errors{};
    reader.parse(configJsonString.c_str(), jsonObject_config);
    const string LOCALHOST = jsonObject_config["HostIp"].asString();
    const string HMIControllerIP = jsonObject_config["HMIControllerIP"].asString();
    const string messageDistributorIP = jsonObject_config["MessageDistributorIP"].asString();

    if (msgType == "MAP"||msgType=="SRM"||msgType == "SSM")
    { 
        return LOCALHOST;
    }
    else if (msgType =="BSM")
    {
        return HMIControllerIP;
    }
    
}

short unsigned int InboundMsgListener::getPort(std::string msgType)
{
    Json::Value jsonObject_config;
    std::ifstream configJson("/nojournal/bin/mmitss-phase3-master-config.json");
    string configJsonString((std::istreambuf_iterator<char>(configJson)), std::istreambuf_iterator<char>());
    Json::Reader reader;
    string errors{};
    reader.parse(configJsonString.c_str(), jsonObject_config);
    const int dataCollectorPortNo = (jsonObject_config["PortNumber"]["DataCollector"]).asInt();
    const int priorityReqGenPortNo = (jsonObject_config["PortNumber"]["PriorityRequestGenerator"]).asInt();
    const int vehicleHmiPortNo = (jsonObject_config["PortNumber"]["HMIController"]).asInt();
    const int messageDistributorPort = (jsonObject_config["PortNumber"]["MessageDistributor"]).asInt();
    
    if (msgType == "MAP")
    { 
        return static_cast<short unsigned int>(priorityReqGenPortNo);
    }
    else if (msgType =="BSM"||msgType=="SRM"||msgType == "SSM")
    {
        return static_cast<short unsigned int>(dataCollectorPortNo);
    }
    
}

std::string InboundMsgListener::decodeType(std::vector<uint8_t> msgContent,std::string msgType)
{
    Json::Value jsonObject_config;
    std::ifstream configJson("/nojournal/bin/mmitss-phase3-master-config.json");
    string configJsonString((std::istreambuf_iterator<char>(configJson)), std::istreambuf_iterator<char>());
    Json::Reader reader;
    string errors{};
    reader.parse(configJsonString.c_str(), jsonObject_config);
    const bool peerDataDecoding = jsonObject_config["PeerDataDecoding"].asBool();
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
        std::cout<<bsmJsonString<<std::endl;
        return bsmJsonString;
    }
    else if (msgType == "SRM")
    {
        if (peerDataDecoding)
        {
            string srmJsonString = decoder.srmDecoder(msgContent);
            return srmJsonString;
        } 
    }
    else if (msgType == "SSM")
    {
        if (peerDataDecoding)
        {
            string ssmJsonString = decoder.ssmDecoder(msgContent);
            return ssmJsonString;
        } 
    }
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