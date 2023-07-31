#include "carma-outbound-listener.h"
#include "carma-transceiver-decoder.h"

#define DEBUG_DECODED_MSG

OutboundMsgListener::OutboundMsgListener()
{
    std::cout<<"in outbound listener";
    std::ifstream configJson("/nojournal/bin/mmitss-phase3-master-config.json");
    string configJsonString((std::istreambuf_iterator<char>(configJson)), std::istreambuf_iterator<char>());
    Json::CharReaderBuilder builder;
    Json::CharReader *reader = builder.newCharReader();
    string errors{};
    reader->parse(configJsonString.c_str(), configJsonString.c_str() + configJsonString.size(), &jsonObject_config, &errors);
    delete reader;
    std::cout<<"initialized outbound listener";
}

OutboundMsgListener::~OutboundMsgListener()
{
}

void OutboundMsgListener::outboundMsgCallback(const carma_driver_msgs::msg::ByteArray::SharedPtr msg)
{
    TransceiverDecoder decoder;
    UdpSocket decoderSocket(static_cast<short unsigned int>(jsonObject_config["PortNumber"]["HostBsmDecoder"].asInt()));

    std::string msgType = msg->message_type;

    if (msgType == "BSM")
    {

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
}
