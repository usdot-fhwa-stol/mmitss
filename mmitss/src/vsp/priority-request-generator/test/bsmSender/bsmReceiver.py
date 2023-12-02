import socket
import json
import datetime
import time
import J2735Helper


fileName = "bsm.json"

# Read a config file into a json object:
configFile = open("/nojournal/bin/mmitss-phase3-master-config.json", 'r')
config = (json.load(configFile))
configFile.close()

hostIp = config["HostIp"]
port = config["PortNumber"]["PriorityRequestGenerator"]
s = socket.socket(socket.AF_INET, socket.SOCK_DGRAM)
s.bind((hostIp,port))

priorityRequestGeneratorPort = config["PortNumber"]["PriorityRequestGenerator"]
communicationInfo = (hostIp, priorityRequestGeneratorPort)


bsmSendingTime = 0.0
while True:
    try :
        data, address = s.recvfrom(10240)
        data = data.decode()
        receivedMessage = json.loads(data)
        print(receivedMessage)
    except:
        print('nothing')

    # if time.time()-bsmSendingTime >= 0.1:
    #     f = open(fileName, 'r')
    #     data = f.read() 
    #     s.sendto(data.encode(),communicationInfo)
    #     bsmSendingTime = time.time()
    #     # print (time.time())
    #     # print(data.encode())
    #     print("sent BSM at time", time.time())

# f.close()
s.close()