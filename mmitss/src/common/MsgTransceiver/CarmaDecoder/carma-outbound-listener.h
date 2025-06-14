#include <iostream>
#include <fstream>
#include <UdpSocket.h>
#include "json/json.h"
#include "carma_msgs/ByteArray.h"

class OutboundMsgListener
{
public:
    Json::Value jsonObject_config;
    const string LOCALHOST = jsonObject_config["HostIp"].asString();
    const int dataCollectorPortNo = (jsonObject_config["PortNumber"]["DataCollector"]).asInt();
    const int bsmReceiverPortNo = (jsonObject_config["PortNumber"]["PriorityRequestGenerator"]).asInt();

    

    OutboundMsgListener();
    ~OutboundMsgListener();
    void outboundMsgCallback(const cav_msgs::ByteArray::ConstPtr& msg);
};