import socket
import json
import datetime
import time

fileName = "SRM.json"

# Read a config file into a json object:
configFile = open("/nojournal/bin/mmitss-phase3-master-config.json", 'r')
config = (json.load(configFile))
configFile.close()

hostIp = config["HostIp"]
port = config["PortNumber"]["PriorityRequestGenerator"]
s = socket.socket(socket.AF_INET, socket.SOCK_DGRAM)
s.bind((hostIp,port))

prirorityRequestServerPort = config["PortNumber"]["PriorityRequestServer"]
communicationInfo = (hostIp, prirorityRequestServerPort)

# f = open(fileName, 'r')
# data = f.read()
# s.sendto(data.encode(),communicationInfo)
# print (time.time())
# print(data.encode())
srmSendingTime = 0.0
while True:
    if time.time()-srmSendingTime >= 0.1:
        f = open(fileName, 'r')
        data = f.read() 
        s.sendto(data.encode(),communicationInfo)
        srmSendingTime = time.time()
        # print (time.time())
        # print(data.encode())
        print("sent SRM at time", time.time())

f.close()
s.close()