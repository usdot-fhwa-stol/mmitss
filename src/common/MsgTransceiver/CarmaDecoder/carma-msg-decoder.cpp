#include "ros/ros.h"
#include "carma-inbound-listener.h"
#include "carma-outbound-listener.h"

int main(int argc, char **argv)
{
    InboundMsgListener inListener;

    OutboundMsgListener outListener;

    ros::init(argc, argv, "mmitss_carma_listener");

    ros::NodeHandle n;

    ros::Subscriber inbound_subscriber = n.subscribe("/hardware_interface/comms/inbound_binary_msg", 1000, &InboundMsgListener::inboundMsgCallback, &inListener);

    ros::Subscriber outbound_subscriber = n.subscribe("/hardware_interface/comms/outbound_binary_msg", 1000, &OutboundMsgListener::outboundMsgCallback, &outListener);

    ros::spin();

    return 0;
}
