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
            if "/hardware_interface/comms/outbound_binary_msg" in pair[0]:
                for msgType in pair[1]:
                    assert('carma_driver_msgs/msg/ByteArray'in msgType)
                
    except:
        print("listener node not found")
    node.destroy_node()
    rclpy.shutdown()

def test_countBsm():
   
    #set bsmReceiver in the same port that the MMITSS-ROS2 Receiver sends the json formatted hostBSM 

    configFile = open("/nojournal/bin/mmitss-phase3-master-config.json", 'r')
    config = (json.load(configFile))
    configFile.close()

    hostIp = config["HostIp"]
    port = config["PortNumber"]["PriorityRequestGenerator"]
    s = socket.socket(socket.AF_INET, socket.SOCK_DGRAM)
    s.bind((hostIp,port))

    #create ROS2 Byte Array message and broadcast 
    msg = ByteArray()
    msg.content = [0, 20, 37, 0, 29, 108, 103, 203, 144, 188, 166, 110, 65, 87, 158, 166, 245, 67, 136, 0, 127, 255, 255, 255, 143, 255, 240, 128, 253, 250, 31, 161, 0, 88, 39, 128, 0, 125, 15, 160]
    msg.message_type = "BSM"
    numMsgs = 5
    
    #initialize ROS2 and set up publisher
    try:
        #initialize roscore in case it is not initialized. 
        rclpy.init()
        
    except:
        pass
    node = rclpy.create_node("myPublisher")
    publisher = node.create_publisher(ByteArray,"/hardware_interface/comms/outbound_binary_msg",10)
    
    hostBSMReceived = 0
    for i in range(numMsgs):
        publisher.publish(msg)
        data, address = s.recvfrom(10240)
        data = data.decode()
        receivedMessage = json.loads(data)
        hostBSMReceived +=1 
    assert(numMsgs == hostBSMReceived)

test_countBsm()

# def main():
#     #Run Decoder executable in thread
#     decoderExecutable = threading.Thread(target=runExectuable)
#     fileName = "bsm.json"

#     # Read a config file into a json object:
#     configFile = open("/nojournal/bin/mmitss-phase3-master-config.json", 'r')
#     config = (json.load(configFile))
#     configFile.close()

    
#     f = open(fileName, 'r')
#     data = f.read() 
#     bsmBlob = json.loads(data).encode()
     

#     rclpy.init()
#     node = rclpy.create_node("my_publisher")

#     publisher = node.create_publisher(ByteArray, "/hardware_interface/comms/outbound_binary_msg", 10)
    
#     decoderExecutable.start()
#     msg = ByteArray
#     msg.content = bsmBlob
#     numSent = 5
#     for i in range(numSent):
#         publisher.publish(msg)
#         rclpy.spin_once(node)

#     f.close()
#     node.destroy_node()
#     rclpy.shutdown()



# if __name__=="__main__":
#     main()
    
