#include <iostream>
#include <fstream>
#include <UdpSocket.h>
#include "json/json.h"
#include <chrono>
#include "msgEnum.h"
#include "rclcpp/rclcpp.hpp"
#include "carma-transceiver-encoder.h"
#include "carma_driver_msgs/msg/byte_array.hpp"



class Publisher : public rclcpp::Node
{
  
    public:
    Publisher(): Node("mmitss_carma_publisher")
    {
      publisher_ = this->create_publisher<carma_driver_msgs::msg::ByteArray>("/hardware_interface/comms/outbound_binary_message", 1000);
      timer_ = this->create_wall_timer(std::chrono::milliseconds(100), std::bind(&Publisher::timer_callback,this));
      
    }
    
    void timer_callback()
    {
        Json::Value jsonObject_config;
        std::ifstream configJson("/nojournal/bin/mmitss-phase3-master-config.json");
        string configJsonString((std::istreambuf_iterator<char>(configJson)), std::istreambuf_iterator<char>());
        Json::CharReaderBuilder builder;
        Json::Reader reader;
        reader.parse(configJsonString.c_str(), jsonObject_config);
        UdpSocket encoderSocket(static_cast<short unsigned int>(jsonObject_config["PortNumber"]["MessageTransceiver"]["MessageEncoder"].asInt()));
        TransceiverEncoder encoder;
        
        char receiveBuffer[5120];
        const string LOCALHOST = jsonObject_config["HostIp"].asString();
        const int sourceDsrcDevicePort = jsonObject_config["PortNumber"]["DsrcImmediateForwarder"].asInt();
        const int dataCollectorPortNo = static_cast<short unsigned int>(jsonObject_config["PortNumber"]["DataCollector"].asInt());
        int mapMsgCount{};
        string applicationPlatform = encoder.getApplicationPlatform();
        int msgType{};
        carma_driver_msgs::msg::ByteArray msg;
        encoderSocket.receiveData(receiveBuffer, sizeof(receiveBuffer));
        string receivedMsgString(receiveBuffer);
        msgType = evalMessageType(receivedMsgString,msgType);
        msg = encodeMsg(receivedMsgString,msgType,msg);
        publisher_->publish(msg);
        
        if (encoder.sendSystemPerformanceDataLog()== true)
        {
        
            if (applicationPlatform == "vehicle")
            {
                encoderSocket.sendData(LOCALHOST, static_cast<short unsigned int>(dataCollectorPortNo), encoder.createJsonStringForSystemPerformanceDataLog("SRM"));
            }
        }

        encoderSocket.closeSocket();
    }

    int evalMessageType(std::string receivedMsgString, int msgType)
    {
        TransceiverEncoder encoder;
        msgType = encoder.getMessageType(receivedMsgString);
        return msgType;
    }
    carma_driver_msgs::msg::ByteArray encodeMsg(std::string receivedMsgString,int msgType,carma_driver_msgs::msg::ByteArray msg)
    {
        std::vector<uint8_t> encodedMsg;
        TransceiverEncoder encoder;
        if (msgType == MsgEnum::DSRCmsgID_srm)
        {

            encodedMsg = encoder.SRMEncoder(receivedMsgString);
            msg.message_type = "SRM";
            msg.content = encodedMsg;
        }

        else if (msgType == MsgEnum::DSRCmsgID_spat)
        {
            encodedMsg = encoder.SPaTEncoder(receivedMsgString);
            msg.message_type = "SPAT";
            msg.content = encodedMsg;
        }

        else if (msgType == MsgEnum::DSRCmsgID_ssm)
        {
            encodedMsg = encoder.SSMEncoder(receivedMsgString);
            msg.message_type = "SSM";
            msg.content = encodedMsg;
        }

        return msg;
    }

    

        //message.data = "Hello, world! " + std::to_string(count_++);
        //RCLCPP_INFO(this->get_logger(), "Publishing: '%s'", message.data.c_str());
        // publisher_->publish(message);

    rclcpp::TimerBase::SharedPtr timer_;
    rclcpp::Publisher<carma_driver_msgs::msg::ByteArray>::SharedPtr publisher_;
    
};



int main(int argc, char **argv)
{
   

    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<Publisher>());
    rclcpp::shutdown();
   
    return 0;
}
