import subprocess
import threading
from carma_driver_msgs.msg import ByteArray
import socket
import json
import datetime
import time
import rclpy 
import pytest
import ros2node.api
import pytest
import socket
import json
import datetime
import time


def test_listenToRos():
    try:    
        rclpy.init()
    except:
        pass
    node = rclpy.create_node("list_nodes_example")
    try:
        subscribers = ros2node.api.get_subscriber_names_and_types_by_node("mmitss_carma_listener","")
        for pair in subscribers:
            if "/hardware_interface/comms/inbound_binary_msg" in pair[0]:
                for msgType in pair[1]:
                    assert('carma_driver_msgs/msg/ByteArray'in msgType)
                
    except:
        print("listener node not found")
    node.destroy_node()
    rclpy.shutdown()

def test_countMAP():
   
    #set mapReceiver in the same port that the MMITSS-ROS2 Receiver sends the json formatted MAP

    configFile = open("/nojournal/bin/mmitss-phase3-master-config.json", 'r')
    config = (json.load(configFile))
    configFile.close()

    hostIp = config["HostIp"]
    port = config["PortNumber"]["PriorityRequestGenerator"]
    s = socket.socket(socket.AF_INET, socket.SOCK_DGRAM)
    s.bind((hostIp,port))

    #create ROS2 Byte Array message and broadcast 
    msg = ByteArray()
    msg.content = [0, 18, 129, 83, 56, 17, 48, 32, 32, 75, 218, 69, 76, 220, 248, 20, 61, 77, 196, 136, 17, 134, 2, 36, 22, 72, 2, 40, 0, 8, 0, 34, 151, 212, 188, 128, 160, 160, 169, 130, 88, 37, 146, 58, 144, 178, 242, 228, 24, 152, 111, 65, 183, 0, 100, 128, 96, 84, 3, 130, 160, 32, 20, 64, 21, 72, 0, 16, 0, 69, 33, 217, 240, 1, 65, 65, 96, 199, 196, 42, 24, 121, 133, 134, 25, 80, 42, 66, 160, 96, 233, 39, 16, 6, 98, 0, 4, 0, 16, 91, 230, 191, 65, 200, 173, 237, 88, 22, 235, 192, 80, 80, 125, 203, 134, 14, 197, 122, 234, 213, 7, 158, 2, 130, 137, 0, 137, 0, 1, 0, 4, 23, 34, 58, 80, 114, 139, 117, 15, 156, 110, 169, 232, 174, 72, 10, 10, 15, 104, 116, 106, 212, 71, 192, 2, 130, 137, 0, 161, 8, 7, 8, 64, 64, 64, 128, 59, 144, 0, 32, 0, 98, 182, 141, 83, 5, 209, 249, 38, 154, 114, 80, 39, 216, 53, 47, 114, 134, 125, 108, 130, 64, 51, 64, 0, 64, 0, 197, 63, 91, 118, 26, 187, 183, 211, 93, 60, 8, 19, 236, 26, 59, 170, 193, 107, 252, 4, 128, 80, 180, 3, 5, 160, 32, 44, 64, 34, 8, 0, 16, 0, 49, 15, 229, 95, 132, 154, 205, 96, 141, 138, 206, 19, 107, 68, 0, 0, 223, 228, 128, 136, 128, 0, 128, 2, 8, 99, 101, 192, 1, 125, 22, 18, 235, 52, 2, 96, 103, 64, 72, 149, 57, 9, 7, 189, 132, 128, 80, 36, 3, 1, 32, 28, 8, 0, 36, 0, 2, 0, 0, 0, 144, 2, 97, 128, 160, 160, 242, 133, 38, 0, 20, 0, 1, 0, 0, 0, 22, 159, 193, 88, 91, 209, 218, 0, 11, 0, 0, 128, 0, 0, 10, 59, 178, 244, 57, 69, 154, 128, 6, 0, 0, 64, 0, 0, 4, 109, 85, 196, 22, 198, 127, 64]
    msg.message_type = "MAP"
    numMsgs = 5
    
    #initialize ROS2 and set up publisher
    try:
        #initialize roscore in case it is not initialized. 
        rclpy.init()
        
    except:
        pass
    node = rclpy.create_node("myPublisher")
    publisher = node.create_publisher(ByteArray,"/hardware_interface/comms/inbound_binary_msg",10)
    
    MAPReceived = 0
    for i in range(numMsgs):
        publisher.publish(msg)
        data, address = s.recvfrom(10240)
        data = data.decode()
        receivedMessage = json.loads(data)
        MAPReceived +=1 
    assert(numMsgs == MAPReceived)


