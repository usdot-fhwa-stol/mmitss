#include <iostream>
#include <fstream>
#include <UdpSocket.h>
#include "json/json.h"
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
    
};
