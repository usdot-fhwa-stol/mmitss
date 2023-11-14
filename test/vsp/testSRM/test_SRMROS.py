import subprocess
import threading
from carma_driver_msgs.msg import ByteArray
import select
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

def test_countSRMROS2():
    rclpy.init()
    from subscriber import Subscriber
    subscriber = Subscriber()
    
    #set bsmReceiver in the same port that the MMITSS-ROS2 Receiver sends the json formatted hostBSM 
    configFile = open("/nojournal/bin/mmitss-phase3-master-config.json", 'r')
    config = (json.load(configFile))
    configFile.close()

    # initialize sockets for MAP and BSM broadcasting
    hostIp = config["HostIp"]
    portBSM = config["PortNumber"]["HostBsmDecoder"]
    socketBSM = socket.socket(socket.AF_INET, socket.SOCK_DGRAM)
    socketBSM.bind((hostIp,portBSM))
    portMAP = config["PortNumber"]["MessageTransceiver"]["MessageDecoder"]
    socketMAP = socket.socket(socket.AF_INET, socket.SOCK_DGRAM)
    socketMAP.bind((hostIp,portMAP))
    priorityRequestGeneratorPort = config["PortNumber"]["PriorityRequestGenerator"]
    communicationInfo = (hostIp, priorityRequestGeneratorPort)
    
    
    #Obtain messages

    fileName = "bsm.json"
    f = open(fileName,"r")
    dataBSM = f.read().encode()
    f.close()
    fileName = "map.json"
    f = open(fileName,"r")
    dataMAP = f.read().encode()
    f.close()
    
    numberMAPs = 2
    bsmSendingTime = 0.0
    MAPSendingTime = 0.0
    bsmsInMap = 0
    SRMreceived = 0


    #create ROS2 node subscribing to SRM published topic


    #receive generated SRMs on ROS2 
    SRMreceived = 0
    for i in range(numberMAPs):
        #broadcast map and bsm messages
        if time.time()-MAPSendingTime >= 1:
            socketMAP.sendto(dataMAP,communicationInfo)
            MAPSendingTime = time.time()

        if time.time()-bsmSendingTime >= 0.1:
            socketBSM.sendto(dataBSM,communicationInfo)
            bsmSendingTime = time.time()
            bsmsInMap += 1
            time.sleep(2) 
            subscriber.spin()
    SRMreceived = subscriber.SRMreceived
    subscriber.destroy_node()
    rclpy.shutdown()
    #receive generated SRMs on ROS2 
    
    #evaluate if number of SRMs is the same as number of BSMs in map
    assert(bsmsInMap == SRMreceived)


