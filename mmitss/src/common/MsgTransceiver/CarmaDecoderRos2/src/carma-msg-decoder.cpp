#include <memory>
#include "rclcpp/rclcpp.hpp"
#include "carma-outbound-listener.h"
#include "carma-inbound-listener.h"
#include <memory>
#include "SignalRequest.h"


class Subscriber : public rclcpp::Node
{
  public:

    Subscriber(InboundMsgListener inListener,OutboundMsgListener outListener): Node("mmitss_carma_listener")
    {
      subscriptionInbound = this->create_subscription<carma_driver_msgs::msg::ByteArray>("/hardware_interface/comms/inbound_binary_msg",1000, std::bind(&InboundMsgListener::inboundMsgCallback,&inListener,std::placeholders::_1));
      subscriptionOutbound = this->create_subscription<carma_driver_msgs::msg::ByteArray>("/hardware_interface/comms/outbound_binary_msg",1000, std::bind(&OutboundMsgListener::outboundMsgCallback,&outListener,std::placeholders::_1));
    }

  private:
    
    rclcpp::Subscription<carma_driver_msgs::msg::ByteArray>::SharedPtr subscriptionInbound;
    rclcpp::Subscription<carma_driver_msgs::msg::ByteArray>::SharedPtr subscriptionOutbound;
};



int main(int argc, char * argv[])
{
    InboundMsgListener inListener;
    OutboundMsgListener outListener;
    
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<Subscriber>(inListener,outListener));
    rclcpp::shutdown();
    
    return 0;
}

    