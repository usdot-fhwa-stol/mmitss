#include <iostream>
#include <fstream>
#include "carma-transceiver-decoder.h"
#include "UdpSocket.h"
#include "json/json.h"
#include "carma_driver_msgs/msg/byte_array.hpp"
#include "stdio.h"
#include <rosgraph_msgs/msg/clock.hpp>
#include "rclcpp/rclcpp.hpp"


class InboundMsgListener
{
public:
    
    // Json::Value jsonObject_config;
    // const string LOCALHOST = jsonObject_config["HostIp"].asString();
    // const string HMIControllerIP = jsonObject_config["HMIControllerIP"].asString();
    // const string messageDistributorIP = jsonObject_config["MessageDistributorIP"].asString();
    // const bool peerDataDecoding = jsonObject_config["PeerDataDecoding"].asBool();
    // const int dataCollectorPortNo = (jsonObject_config["PortNumber"]["DataCollector"]).asInt();
    // const int priorityReqGenPortNo = (jsonObject_config["PortNumber"]["PriorityRequestGenerator"]).asInt();
    // const int vehicleHmiPortNo = (jsonObject_config["PortNumber"]["HMIController"]).asInt();
    // const int messageDistributorPort = (jsonObject_config["PortNumber"]["MessageDistributor"]).asInt();

    InboundMsgListener();
    ~InboundMsgListener();
    void inboundMsgCallback(const carma_driver_msgs::msg::ByteArray::SharedPtr msg);
    void inboundClockCallback( const rosgraph_msgs::msg::Clock::SharedPtr msg );
    std::string getIP(std::string msgType);
    short unsigned int getPort(std::string msgType);
    std::string decodeType(std::vector<uint8_t> msgContent,std::string msgType);
    std::string decodeClock(const rosgraph_msgs::msg::Clock::SharedPtr msg);
};

