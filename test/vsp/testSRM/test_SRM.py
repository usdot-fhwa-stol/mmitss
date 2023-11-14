import subprocess
import threading

import select
import socket
import json
import datetime
import time
import pytest
import socket
import json
import datetime
import time


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


test_countSRM()