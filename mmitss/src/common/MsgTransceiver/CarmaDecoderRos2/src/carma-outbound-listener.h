#include <iostream>
#include <fstream>
#include <UdpSocket.h>
#include "json/json.h"
#include "carma_driver_msgs/msg/byte_array.hpp"

class OutboundMsgListener
{
public:

    Json::Value jsonObject_config;
    std::shared_ptr<Json::Value> jsonObject_config_test;
    const string LOCALHOST = jsonObject_config["HostIp"].asString();
    const int dataCollectorPortNo = (jsonObject_config["PortNumber"]["DataCollector"]).asInt();
    const int bsmReceiverPortNo = (jsonObject_config["PortNumber"]["PriorityRequestGenerator"]).asInt();
    
    
    OutboundMsgListener();
    ~OutboundMsgListener();
    void outboundMsgCallback(const carma_driver_msgs::msg::ByteArray::SharedPtr msg);
};