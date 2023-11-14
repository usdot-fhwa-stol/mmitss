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

 #create a subscriber class that will store the accumulate the number of SRM messages received
class Subscriber:
    def __init__(self):
        self.SRMreceived = 0
        self.node = rclpy.create_node("my_subscriber")
        self.subscriber = self.node.create_subscription(
            ByteArray,
            "/hardware_interface/comms/outbound_binary_message",
            self.callback,
            10  # Set the queue size
        )
        
    def callback(self, msg):
            # Callback function to process received messages
            self.SRMreceived +=1

    def spin(self):
        # Spin the node to start processing callbacks
        rclpy.spin_once(self.node)

    def destroy_node(self):
        # Cleanup when the node is shutting down
        self.node.destroy_node()



def test_countSRM():
   
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
    
    # initialize sockets for SRM receiving
    portSRM = config["PortNumber"]["MessageTransceiver"]["MessageEncoder"]
    socketSRM = socket.socket(socket.AF_INET, socket.SOCK_DGRAM)
    socketSRM.bind((hostIp,portSRM))
    
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

    #escape listening loop if after 2 seconds there is no message
    timeout = 2 
    
    for i in range(numberMAPs):
        #broadcast map and bsm messages
        if time.time()-MAPSendingTime >= 1:
            socketMAP.sendto(dataMAP,communicationInfo)
            MAPSendingTime = time.time()
        if time.time()-bsmSendingTime >= 0.1:
            socketBSM.sendto(dataBSM,communicationInfo)
            bsmSendingTime = time.time()
            bsmsInMap += 1 
        
        #receive generated SRMs 
        readable, _, _ = select.select([socketSRM], [], [], timeout)
        for s in readable: 
            if s == socketSRM:
                try:
                    dataSRM, address = socketSRM.recvfrom(10240)
                    dataSRM = dataSRM.decode()
                    receivedMessage = json.loads(dataSRM)
                    SRMreceived += 1 
                
                except:
                    pass
    #evaluate if number of SRMs is the same as number of BSMs in map
    socketBSM.close()
    socketMAP.close()
    socketSRM.close()
    assert bsmsInMap == SRMreceived
    

def test_countNoSRM():
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
    
    # initialize sockets for SRM receiving
    portSRM = config["PortNumber"]["MessageTransceiver"]["MessageEncoder"]
    socketSRM = socket.socket(socket.AF_INET, socket.SOCK_DGRAM)
    socketSRM.bind((hostIp,portSRM))
    
    #Obtain messages

    fileName = "bsm.json"
    f = open(fileName,"r")
    dataBSM = f.read().encode()
    dataBSM = json.loads(dataBSM)
    dataBSM["BasicVehicle"]["position"]["latitude_DecimalDegree"]=40
    dataBSM = json.dumps(dataBSM).encode()

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

    #escape listening loop if after 2 seconds there is no message
    timeout = 2 

    for i in range(numberMAPs):
        #broadcast map and bsm messages
        if time.time()-bsmSendingTime >= 0.1:
            socketBSM.sendto(dataBSM,communicationInfo)
            bsmSendingTime = time.time()
            bsmsInMap += 1 
        if time.time()-MAPSendingTime >= 1:
            socketMAP.sendto(dataMAP,communicationInfo)
            MAPSendingTime = time.time()
         #receive generated SRMs 
        readable, _, _ = select.select([socketSRM], [], [], timeout)
        for s in readable: 
            if s == socketSRM:
                try:
                    dataSRM, address = socketSRM.recvfrom(10240)
                    dataSRM = dataSRM.decode()
                    receivedMessage = json.loads(dataSRM)
                    SRMreceived += 1 
                
                except:
                    pass
    #evaluate if number of SRMs is the same as number of BSMs in map
    assert(0 == SRMreceived)


def test_countSRMROS2():
    rclpy.init()
    
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
            time.sleep(3) 
            subscriber.spin()
    SRMreceived = subscriber.SRMreceived
    subscriber.destroy_node()
    rclpy.shutdown()
    #receive generated SRMs on ROS2 
    
    #evaluate if number of SRMs is the same as number of BSMs in map
    assert(bsmsInMap == SRMreceived)


