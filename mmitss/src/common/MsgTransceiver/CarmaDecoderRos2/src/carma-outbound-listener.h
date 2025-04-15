#include <iostream>
#include <fstream>
#include <UdpSocket.h>
#include "json/json.h"
#include <rclcpp/rclcpp.hpp>

#include "carma_driver_msgs/msg/byte_array.hpp"

// class JsonStorage
// {
//     public:
//             string LOCALHOST;
//             int dataCollectorPortNo;
//             int bsmReceiverPortNo;
//             JsonStorage();
//             ~JsonStorage();
//             JsonStorage(Json::Value* value);
// };

class OutboundMsgListener
{
    public:

        
        
        OutboundMsgListener();
        ~OutboundMsgListener();
        void outboundMsgCallback(const carma_driver_msgs::msg::ByteArray::SharedPtr msg);
        std::string getIP(const std::string &msgType);
        short unsigned int getPort(const std::string &msgType);
        std::string decodeType(const std::vector<uint8_t> &msgContent,const std::string &msgType);
    private:
        std::string hostIp = "";
        std::string hmiControllerIp = "";
        std::string mdIp = "";
        int prgTimeSyncPort = 0;
        int mtPort = 0;
        int dcPort = 0;
        int prgPort = 0;
        bool peerDecoding = false;
        int bsmReceiverPort = 0;
        int hostBsmDecoderPort = 0;
    
};
