#include "carma-outbound-listener.h"
#include "carma-transceiver-decoder.h"

#define DEBUG_DECODED_MSG
// JsonStorage::JsonStorage()
// {}
// JsonStorage::~JsonStorage()
// {}
// JsonStorage::JsonStorage(Json::Value* value)
// {
//     LOCALHOST = (*value)["HostIp"].asString();
//     dataCollectorPortNo = ((*value)["PortNumber"]["DataCollector"]).asInt();
//     bsmReceiverPortNo = ((*value)["PortNumber"]["PriorityRequestGenerator"]).asInt();
// }


OutboundMsgListener::OutboundMsgListener()
{       
    // std::ifstream configJson("/nojournal/bin/mmitss-phase3-master-config.json");
    // string configJsonString((std::istreambuf_iterator<char>(configJson)), std::istreambuf_iterator<char>());
    // Json::CharReaderBuilder builder;
    // Json::CharReader *reader = builder.newCharReader();
    // string errors{};
    // reader->parse(configJsonString.c_str(), configJsonString.c_str() + configJsonString.size(), &jsonObject_config, &errors);
    // delete reader;
}

OutboundMsgListener::~OutboundMsgListener()
{
}
void OutboundMsgListener::outboundMsgCallback(const carma_driver_msgs::msg::ByteArray::SharedPtr msg)
{
    
    std::ifstream configJson("/nojournal/bin/mmitss-phase3-master-config.json");
    string configJsonString((std::istreambuf_iterator<char>(configJson)), std::istreambuf_iterator<char>());
    Json::CharReaderBuilder builder;
    Json::CharReader *reader = builder.newCharReader();
    delete reader;
    string errors{};
    Json::Reader reader2;
    Json::Value jsonObject_config;
    
    // reader->parse(configJsonString.c_str(), configJsonString.c_str() + configJsonString.size(), &jsonObject_config, &errors);
    // reader->parse(configJsonString.c_str(), &jsonObject_config);
    reader2.parse(configJsonString.c_str(), jsonObject_config);
    const string LOCALHOST = jsonObject_config["HostIp"].asString();
    const int dataCollectorPortNo = (jsonObject_config["PortNumber"]["DataCollector"]).asInt();
    const int bsmReceiverPortNo = (jsonObject_config["PortNumber"]["PriorityRequestGenerator"]).asInt();
    
    TransceiverDecoder decoder;
    UdpSocket decoderSocket(static_cast<short unsigned int>(jsonObject_config["PortNumber"]["HostBsmDecoder"].asInt()));
    
    // UdpSocket decoderSocket(jsonObject_config["PortNumber"]["HostBsmDecoder"].asUInt());
    std::string msgType = msg->message_type;
  
    if (msgType == "BSM")
    {
        std::cout<<"sending bsm"<< std::endl;
        string bsmJsonString = decoder.bsmDecoder(msg->content);
        
#ifdef DEBUG_DECODED_MSG
        std::cout << "Local BSM -- " << bsmJsonString << std::endl;
#endif
        decoderSocket.sendData(LOCALHOST, static_cast<short unsigned int>(bsmReceiverPortNo), bsmJsonString);
        decoderSocket.sendData(LOCALHOST, static_cast<short unsigned int>(dataCollectorPortNo), bsmJsonString);

        if (decoder.sendSystemPerformanceDataLog())
            decoderSocket.sendData(LOCALHOST, static_cast<short unsigned int>(dataCollectorPortNo), decoder.createJsonStringForSystemPerformanceDataLog("HostBSM"));
    }

    decoderSocket.closeSocket();
    std::cout<<"closed socket"<<std::endl;
    
}
