
import subprocess
import threading
from carma_driver_msgs.msg import ByteArray
import socket
import json
import datetime
import time
import rclpy 
import pytest
from ros2node.api import get_node_names
import pytest
import socket
import json
import datetime
import time

import select


def test_listenToRos():
       
    cmdCommand = 'source /opt/ros/foxy/setup.bash;ros2 node list'
    nodeList = subprocess.run(cmdCommand,shell=True,capture_output=True)
    nodeCondition="mmitss_carma_listener" in str(nodeList.stdout)
    cmdCommand = 'source /opt/ros/foxy/setup.bash;ros2 topic list'
    topicList = subprocess.run(cmdCommand,shell=True,capture_output=True)
    topicCondition="/hardware_interface/comms/outbound_binary_msg" in str(topicList.stdout)
    assert nodeCondition and topicCondition
        
def test_countBsm():
   
    #set bsmReceiver in the same port that the MMITSS-ROS2 Receiver sends the json formatted hostBSM 

    configFile = open("nojournal/bin/mmitss-phase3-master-config.json", 'r')
    config = (json.load(configFile))
    configFile.close()

    hostIp = config["HostIp"]
    port = config["PortNumber"]["PriorityRequestGenerator"]
    socketBSM = socket.socket(socket.AF_INET, socket.SOCK_DGRAM)
    socketBSM.bind((hostIp,port))

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

    #escape listening loop if after 2 seconds there is no message
    timeout = 2 

    for i in range(numMsgs):
        publisher.publish(msg)
        #receive generated SRMs 
        readable, _, _ = select.select([socketBSM], [], [], timeout)
        for s in readable: 
            if s == socketBSM:
                try:
                    data, address = socketBSM.recvfrom(10240)
                    data = data.decode()
                    receivedMessage = json.loads(data)
                    hostBSMReceived += 1 
                
                except:
                    pass
    print(numMsgs)
    print(hostBSMReceived)

    assert(numMsgs == hostBSMReceived)
    
# test_countBsm()
# test_listenToRos()


