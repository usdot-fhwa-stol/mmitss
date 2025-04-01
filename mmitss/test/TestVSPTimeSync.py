
import subprocess
import threading
from rosgraph_msgs.msg import Clock
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
    topicCondition="/sim_clock" in str(topicList.stdout)
    assert nodeCondition and topicCondition
        
def test_countTimeSync():
   
    #set bsmReceiver in the same port that the MMITSS-ROS2 Receiver sends the json formatted hostBSM 

    configFile = open("/nojournal/bin/mmitss-phase3-master-config.json", 'r')
    config = json.load(configFile)
    configFile.close()

    hostIp = config["HostIp"]
    port = config["TimeSyncPort"]["PriorityRequestGenerator"]
    socketTimeSync = socket.socket(socket.AF_INET, socket.SOCK_DGRAM)
    socketTimeSync.bind((hostIp,port))

    # 1000 TimeSync messags each increment 100 ms is 100 seconds of simulation time  
    numMsgs = 1000
    
    #initialize ROS2 and set up publisher
    try:
        #initialize roscore in case it is not initialized. 
        rclpy.init()
        
    except:
        pass
    node = rclpy.create_node("carma_ros_transceiver")
    publisher = node.create_publisher(Clock,"/sim_clock",10)
    
    timeSyncReceived = 0
    # in milliseconds
    starting_time= 0
    #escape listening loop if after 2 seconds there is no message
    timeout = 2 

    for i in range(numMsgs):
        # Create a Clock message
        clock_msg = Clock() 
        clock_msg.clock.sec = int(starting_time/1000)
        clock_msg.clock.nanosec = int((starting_time%1000) * 1e6) 
        # Publish Clock message
        publisher.publish(clock_msg)
        
        #receive TimeSync Messages 
        readable, _, _ = select.select([socketTimeSync], [], [], timeout)
        for s in readable: 
            if s == socketTimeSync:
                data, address = socketTimeSync.recvfrom(10240)
                data = data.decode()
                receivedMessage = json.loads(data)
                # Check for expected value
                assert(receivedMessage["timestep"] == starting_time)
                timeSyncReceived += 1 
        starting_time += 1000
        
                
    print(numMsgs)
    print(timeSyncReceived)

    assert(numMsgs == timeSyncReceived)
    
test_countTimeSync()
test_listenToRos()


