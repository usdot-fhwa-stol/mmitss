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
        Json::Reader reader2;
        reader2.parse(configJsonString.c_str(), jsonObject_config);
        
        std::cout<<jsonObject_config["PortNumber"]["MessageTransceiver"]["MessageEncoder"].asInt()<<std::endl;
        UdpSocket encoderSocket(static_cast<short unsigned int>(jsonObject_config["PortNumber"]["MessageTransceiver"]["MessageEncoder"].asInt()));
        TransceiverEncoder encoder;
        std::vector<uint8_t> encodedMsg;
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
        //if not a MAP message. Map messages are already UPER encooded, the other type are JSON
        if(receivedMsgString.substr(0,4) != "0012")
        {
            
            msgType = encoder.getMessageType(receivedMsgString);
            

            if (msgType == MsgEnum::DSRCmsgID_srm)
            {

                encodedMsg = encoder.SRMEncoder(receivedMsgString);
                msg.message_type = "SRM";
                msg.content = encodedMsg;
                publisher_->publish(msg);

                //ROS_INFO("%s", msg.message_type);
                //ROS_INFO("%u", msg.content);

                //cout << "[" << fixed << showpoint << setprecision(2) << currentTime << "] Encoded SRM and sent to RSU" << endl;
            }

            else if (msgType == MsgEnum::DSRCmsgID_spat)
            {
                encodedMsg = encoder.SPaTEncoder(receivedMsgString);
                msg.message_type = "SPAT";
                msg.content = encodedMsg;
                publisher_->publish(msg);                
                //cout << "[" << fixed << showpoint << setprecision(2) << currentTime << "] Encoded SPAT and sent to RSU" << endl;
            }

            else if (msgType == MsgEnum::DSRCmsgID_ssm)
            {
                encodedMsg = encoder.SSMEncoder(receivedMsgString);
                msg.message_type = "SSM";
                msg.content = encodedMsg;
                publisher_->publish(msg);
                //cout << "[" << fixed << showpoint << setprecision(2) << currentTime << "] Encoded SSM and sent to RSU" << endl;
            }

        }
        else
        {
            //msgToRsu = rsuMsgPacket.getMsgPacket(receivedMsgString);

            msg.message_type = "MAP";
            msg.content = encodedMsg;
            publisher_->publish(msg);

            //cout << "[" << fixed << showpoint << setprecision(2) << currentTime << "] Sent MAP to RSU" << endl;
            mapMsgCount = mapMsgCount + 1;
        }
        if (encoder.sendSystemPerformanceDataLog()== true)
        {
            if (applicationPlatform == "roadside")
            {
                encoder.setMapMsgCount(mapMsgCount);
                encoderSocket.sendData(LOCALHOST, static_cast<short unsigned int>(dataCollectorPortNo), encoder.createJsonStringForSystemPerformanceDataLog("SSM"));
                encoderSocket.sendData(LOCALHOST, static_cast<short unsigned int>(dataCollectorPortNo), encoder.createJsonStringForSystemPerformanceDataLog("MAP"));
                encoderSocket.sendData(LOCALHOST, static_cast<short unsigned int>(dataCollectorPortNo), encoder.createJsonStringForSystemPerformanceDataLog("SPaT"));
                mapMsgCount = 0;
            }

            else if (applicationPlatform == "vehicle")
            {
                encoderSocket.sendData(LOCALHOST, static_cast<short unsigned int>(dataCollectorPortNo), encoder.createJsonStringForSystemPerformanceDataLog("SRM"));
            }
        }

        if (encoder.sendSystemPerformanceDataLog() == true)
            encoderSocket.sendData(LOCALHOST, static_cast<short unsigned int>(dataCollectorPortNo), encoder.createJsonStringForSystemPerformanceDataLog("SRM"));
        encoderSocket.closeSocket();
    }
        
        //message.data = "Hello, world! " + std::to_string(count_++);
        //RCLCPP_INFO(this->get_logger(), "Publishing: '%s'", message.data.c_str());
        // publisher_->publish(message);

    rclcpp::TimerBase::SharedPtr timer_;
    rclcpp::Publisher<carma_driver_msgs::msg::ByteArray>::SharedPtr publisher_;
    
    //Create Json related objects for local communication  
  
};



int main(int argc, char **argv)
{
   

    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<Publisher>());
    rclcpp::shutdown();
   
    return 0;
}
