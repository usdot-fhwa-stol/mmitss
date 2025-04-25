#include <iostream>
#include <fstream>
#include "carma-transceiver-decoder.h"
#include "UdpSocket.h"
#include "json/json.h"
#include "carma_driver_msgs/msg/byte_array.hpp"
#include "stdio.h"
#include <rosgraph_msgs/msg/clock.hpp>
#include <rclcpp/rclcpp.hpp>
#include <mutex>


class InboundMsgListener
{
    public:



        InboundMsgListener();
        ~InboundMsgListener();
        void inboundMsgCallback(const carma_driver_msgs::msg::ByteArray::SharedPtr msg);
        void inboundClockCallback( const rosgraph_msgs::msg::Clock::SharedPtr msg );

        std::string getIP(const std::string &msgType);
        unsigned short getPort(const std::string &msgType);
        std::string decodeType(const std::vector<uint8_t> &msgContent,const std::string &msgType);
        std::string decodeClock(const rosgraph_msgs::msg::Clock::SharedPtr msg);

    private:
        std::string hostIp = "";
        std::string hmiControllerIp = "";
        std::string mdIp = "";
        int prgTimeSyncPort = 0;
        int mtPort = 0;
        int dcPort = 0;
        int prgPort = 0;
        bool peerDecoding = false;
        std::mutex time_mutex_;
        rosgraph_msgs::msg::Clock::SharedPtr time_msg;


};

