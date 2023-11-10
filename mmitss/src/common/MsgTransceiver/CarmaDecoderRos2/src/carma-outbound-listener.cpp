#include "carma-outbound-listener.h"
#include "carma-transceiver-decoder.h"

#define DEBUG_DECODED_MSG

OutboundMsgListener::OutboundMsgListener()
{       
   
}

OutboundMsgListener::~OutboundMsgListener()
{
}
void OutboundMsgListener::outboundMsgCallback(const carma_driver_msgs::msg::ByteArray::SharedPtr msg)
{
    
    std::ifstream configJson("/nojournal/bin/mmitss-phase3-master-config.json");
    string configJsonString((std::istreambuf_iterator<char>(configJson)), std::istreambuf_iterator<char>());
    string errors{};
    Json::Reader reader;
    Json::Value jsonObject_config;
    reader.parse(configJsonString.c_str(), jsonObject_config);
    const string LOCALHOST = jsonObject_config["HostIp"].asString();
    const int dataCollectorPortNo = (jsonObject_config["PortNumber"]["DataCollector"]).asInt();
    const int bsmReceiverPortNo = (jsonObject_config["PortNumber"]["PriorityRequestGenerator"]).asInt();
    
    TransceiverDecoder decoder;
    UdpSocket decoderSocket(static_cast<short unsigned int>(jsonObject_config["PortNumber"]["HostBsmDecoder"].asInt()));
    
    // UdpSocket decoderSocket(jsonObject_config["PortNumber"]["HostBsmDecoder"].asUInt());
    std::string msgType = msg->message_type;
    string receiverIP = getIP(msgType); 
    short unsigned int receivingPort = getPort(msgType);
    string messageString = decodeType(msg->content,msgType);
    decoderSocket.sendData(receiverIP,receivingPort,messageString);
    decoderSocket.closeSocket();
}
std::string OutboundMsgListener::getIP(std::string msgType)

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

short unsigned int OutboundMsgListener::getPort(std::string msgType)
{
    Json::Value jsonObject_config;
    std::ifstream configJson("/nojournal/bin/mmitss-phase3-master-config.json");
    string configJsonString((std::istreambuf_iterator<char>(configJson)), std::istreambuf_iterator<char>());
    Json::Reader reader;
    string errors{};
    reader.parse(configJsonString.c_str(), jsonObject_config);
    const int bsmReceiverPortNo = (jsonObject_config["PortNumber"]["PriorityRequestGenerator"]).asInt();
    const int dataCollectorPortNo = (jsonObject_config["PortNumber"]["DataCollector"]).asInt();
    const int priorityReqGenPortNo = (jsonObject_config["PortNumber"]["PriorityRequestGenerator"]).asInt();
    const int vehicleHmiPortNo = (jsonObject_config["PortNumber"]["HMIController"]).asInt();
    const int messageDistributorPort = (jsonObject_config["PortNumber"]["MessageDistributor"]).asInt();
    
    if (msgType == "MAP")
    { 
        return static_cast<short unsigned int>(priorityReqGenPortNo);
    }
    else if (msgType =="BSM")
    {
        return static_cast<short unsigned int>(bsmReceiverPortNo);
    }
    else if (msgType=="SRM"||msgType == "SSM")
    {
        return static_cast<short unsigned int>(dataCollectorPortNo);
    }   
}

std::string OutboundMsgListener::decodeType(std::vector<uint8_t> msgContent,std::string msgType)
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
    

