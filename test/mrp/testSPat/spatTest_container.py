import json
import socket
import time

configFilename = "/nojournal/bin/mmitss-phase3-master-config.json"
configFile = open(configFilename, 'r')
config = (json.load(configFile))
configFile.close()

# hostIp = config["HostIp"]
hostIp = "127.0.0.1"
port = config["PortNumber"]["MapSPaTBroadcaster"]
s = socket.socket(socket.AF_INET, socket.SOCK_DGRAM)
s.bind((hostIp,port))


# Read external clients config in json object:
communicationInfo = (hostIp, config["PortNumber"]["CarmaKafkaTransceiver"]["MapSpatProducer"])
print (communicationInfo)

fileName = "spat.json"
f = open(fileName, 'r')
ssmData = f.read() 
f.close()   

try:
    while True:
        s.sendto(ssmData.encode(),communicationInfo)
        print("msg sent")
        time.sleep(0.1)
        #print(ssmData)
except:
    pass
finally:
    s.close()

