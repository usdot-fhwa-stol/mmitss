#include "carma-outbound-listener.h"
#include "carma-transceiver-decoder.h"

#define DEBUG_DECODED_MSG

OutboundMsgListener::OutboundMsgListener()
{
    std::ifstream configJson("/nojournal/bin/mmitss-phase3-master-config.json");
    string configJsonString((std::istreambuf_iterator<char>(configJson)), std::istreambuf_iterator<char>());
    Json::CharReaderBuilder builder;
    Json::CharReader *reader = builder.newCharReader();
    string errors{};
    Json::Value* rawJsonObject = jsonObject_config_test.get();
    // reader->parse(configJsonString.c_str(), configJsonString.c_str() + configJsonString.size(), &jsonObject_config, &errors);
    reader->parse(configJsonString.c_str(), configJsonString.c_str() + configJsonString.size(), rawJsonObject, &errors);
    delete reader;
    
}

OutboundMsgListener::~OutboundMsgListener()
{
}

void OutboundMsgListener::outboundMsgCallback(const carma_driver_msgs::msg::ByteArray::SharedPtr msg)
{
    
    TransceiverDecoder decoder;
    std::cout<<"here outbound callback"<<std::endl;
    int data = jsonObject_config["PortNumber"]["HostBsmDecoder"].asInt();
    UdpSocket decoderSocket(static_cast<short unsigned int>(jsonObject_config["PortNumber"]["HostBsmDecoder"].asInt()));
    std::cout<<jsonObject_config["PortNumber"]["HostBsmDecoder"].asUInt()<<std::endl;
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
