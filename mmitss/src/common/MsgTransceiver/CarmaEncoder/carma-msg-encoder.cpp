#include <iostream>
#include <fstream>
#include <UdpSocket.h>
#include "json/json.h"
#include "msgEnum.h"
#include "ros/ros.h"
#include "carma-transceiver-encoder.h"
#include "carma_msgs/ByteArray.h"

int main(int argc, char **argv)
{
    Json::Value jsonObject_config;
    std::ifstream configJson("/nojournal/bin/mmitss-phase3-master-config.json");
    string configJsonString((std::istreambuf_iterator<char>(configJson)), std::istreambuf_iterator<char>());
    Json::CharReaderBuilder builder;
    Json::CharReader *reader = builder.newCharReader();
    string errors{};
    reader->parse(configJsonString.c_str(), configJsonString.c_str() + configJsonString.size(), &jsonObject_config, &errors);
    delete reader;

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

    ros::init(argc, argv, "mmitss-carma-publisher");
    ros::NodeHandle n;
    ros::Publisher outbound_msg_publisher = n.advertise<cav_msgs::ByteArray>("/hardware_interface/comms/outbound_binary_message", 1000);
    cav_msgs::ByteArray msg;

    while (true)
    {
        encoderSocket.receiveData(receiveBuffer, sizeof(receiveBuffer));
        string receivedMsgString(receiveBuffer);

        //if not a MAP message. Map messages are already UPER encooded, the other type are JSON
        if(receivedMsgString.substr(0,4) != "0012")
        {
            msgType = encoder.getMessageType(receivedMsgString);
            

            if (msgType == MsgEnum::DSRCmsgID_srm)
            {

                encodedMsg = encoder.SRMEncoder(receivedMsgString);
                msg.messageType = "SRM";
                msg.content = encodedMsg;
                outbound_msg_publisher.publish(msg);

                //ROS_INFO("%s", msg.messageType);
                //ROS_INFO("%u", msg.content);

                //cout << "[" << fixed << showpoint << setprecision(2) << currentTime << "] Encoded SRM and sent to RSU" << endl;
            }

            else if (msgType == MsgEnum::DSRCmsgID_spat)
            {
                encodedMsg = encoder.SPaTEncoder(receivedMsgString);
                msg.messageType = "SPAT";
                msg.content = encodedMsg;
                outbound_msg_publisher.publish(msg);                
                //cout << "[" << fixed << showpoint << setprecision(2) << currentTime << "] Encoded SPAT and sent to RSU" << endl;
            }

            else if (msgType == MsgEnum::DSRCmsgID_ssm)
            {
                encodedMsg = encoder.SSMEncoder(receivedMsgString);
                msg.messageType = "SSM";
                msg.content = encodedMsg;
                outbound_msg_publisher.publish(msg);
                //cout << "[" << fixed << showpoint << setprecision(2) << currentTime << "] Encoded SSM and sent to RSU" << endl;
            }

        }
        else
        {
            //msgToRsu = rsuMsgPacket.getMsgPacket(receivedMsgString);

            msg.messageType = "MAP";
            msg.content = encodedMsg;
            outbound_msg_publisher.publish(msg);

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
    }
    return 0;
}
