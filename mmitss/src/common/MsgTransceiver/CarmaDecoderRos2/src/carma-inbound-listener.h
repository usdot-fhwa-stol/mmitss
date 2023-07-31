#include <iostream>
#include <fstream>
#include "carma-transceiver-decoder.h"
#include "UdpSocket.h"
#include "json/json.h"
#include "carma_driver_msgs/msg/byte_array.hpp"
#include "stdio.h"

class InboundMsgListener
{
public:
    
    Json::Value jsonObject_config;
    const string LOCALHOST = jsonObject_config["HostIp"].asString();
    const string HMIControllerIP = jsonObject_config["HMIControllerIP"].asString();
    const string messageDistributorIP = jsonObject_config["MessageDistributorIP"].asString();
    const bool peerDataDecoding = jsonObject_config["PeerDataDecoding"].asBool();
    const int dataCollectorPortNo = (jsonObject_config["PortNumber"]["DataCollector"]).asInt();
    const int priorityReqGenPortNo = (jsonObject_config["PortNumber"]["PriorityRequestGenerator"]).asInt();
    const int vehicleHmiPortNo = (jsonObject_config["PortNumber"]["HMIController"]).asInt();
    const int messageDistributorPort = (jsonObject_config["PortNumber"]["MessageDistributor"]).asInt();

    InboundMsgListener();
    ~InboundMsgListener();
    void inboundMsgCallback(const carma_driver_msgs::msg::ByteArray::SharedPtr msg);
};

