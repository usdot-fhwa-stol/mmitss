#include <memory>
#include "rclcpp/rclcpp.hpp"
#include "carma-inbound-listener.h"
#include "carma-outbound-listener.h"

int main(int argc, char **argv)
{
    InboundMsgListener inListener;

    OutboundMsgListener outListener;

    rclcpp::init(argc, argv);

    rclcpp::Node n = rclcpp::Node::make_shared("mmitss_carma_listener");

    rclcpp::Subscription<cav_msgs::ByteArray::ConstPtr>::SharedPtr inbound_subscriber = n.create_subscription<cav_msgs::ByteArray::ConstPtr>\
        ("/hardware_interface/comms/inbound_binary_msg",1000, &InboundMsgListener::inboundMsgCallback,&inListener);

    rclcpp::Subscription<cav_msgs::ByteArray::ConstPtr>::SharedPtr outbound_subscriber = n.create_subscription<cav_msgs::ByteArray::ConstPtr>\
        ("/hardware_interface/comms/inbound_binary_msg",1000, &OutboundMsgListener::outboundMsgCallback,&outListener);

    rclcpp::spin_some(n);
    
    rclcpp::shutdown();

    return 0;
}

