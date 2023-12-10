import json
import socket

configFilename = "mmitss-phase3-master-config.json"
configFile = open(configFilename, 'r')
config = (json.load(configFile))
configFile.close()

hostIp = config["HostIp"]
port = config["PortNumber"]["MapSPaTBroadcaster"]
s = socket.socket(socket.AF_INET, socket.SOCK_DGRAM)
s.bind((hostIp,port))

# Read external clients config in json object:
communicationInfo = (hostIp, config["PortNumber"]["MessageTransceiver"]["MessageEncoder"])

fileName = "spat.json"
f = open(fileName, 'r')
ssmData = f.read() 
f.close()   

try:
    while True:
        s.sendto(ssmData.encode(),communicationInfo)
        print(ssmData)
except:
    pass
finally:
    s.close()

