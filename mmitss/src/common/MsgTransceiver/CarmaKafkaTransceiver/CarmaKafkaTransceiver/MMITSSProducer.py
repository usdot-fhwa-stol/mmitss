from confluent_kafka import Producer,KafkaException
import json
import socket
from datetime import datetime

class MMITSSProducer(Producer):
    def __init__(self,kind):
        producerConf = {
            'bootstrap.servers': self.bootstrap_servers,
        }
        self.kind = kind
        super().__init__(producerConf)
        self.config = self.readConfig()
        
    def readConfig(self):
        # Read a config file into a json object:
        configFile = open("/nojournal/bin/mmitss-phase3-master-config.json", 'r')
        config = (json.load(configFile))
        configFile.close()
        return config
    
    def socketLoop(self):
        
        #Define topic to publish to based on kind of producer
        configFile = open("/nojournal/bin/kafkaConfig.json", 'r')
        config = (json.load(configFile))
        configFile.close()
        topics = config["PRODUCER_TOPICS"][self.kind]

        # Configure socket:
        hostIp = self.config["HostIp"]
        
        if self.kind == "SSM":
            receivingPort = self.config["PortNumber"]["PriorityRequestServer"]
            msg = self.decodeSSM(msg)
        elif self.kind == "SPaT":
            clientsJson = json.load(open('/nojournal/bin/mmitss-data-external-clients.json','r'))
            clientsSPaTJson = clientsJson["spat"]["json"]
            receivingPort = clientsSPaTJson
            msg = self.decodeBSM(msg)
        
        s = socket.socket(socket.AF_INET, socket.SOCK_DGRAM)
        s.bind((hostIp,receivingPort))

        #Wait for message in socket and publish to specific topic
        while True:
            try :
                data, address = s.recvfrom(10240)
                data = data.decode()
                msg = json.loads(data)
                if self.kind == "SSM":
                    msg = self.encodeSSM(msg)
                elif self.kind == "SPaT":
                    msg = self.encodeSPaT(msg)
                try:
                    self.produce(topics, value=msg)
                    self.flush()
                    
                except KafkaException as e:
                    print(f"Error producing message: {e}")
            except:
                pass
            if KeyboardInterrupt:
                break
        
        s.close()
        self.close()
  
    def encodeSPaT(self,msg):
        timestamp = datetime.fromtimestamp(msg["Timestamp_posix"])
        year = timestamp.year
        remainingMinutes = int((timestamp-year).total_seconds() / 60)
        jsonObject = {"time_stamp":remainingMinutes,"name":"","intersections":[]}
        
        id = msg["Spat"]["IntersectionState"]["intersectionID"]
        revision = msg["Spat"]["msgCnt"]
        status = msg["Spat"]["status"]
        moy = 
        states = []
        maneuversAssistList = []
        jsonObject["intersections"].append()
        
        jsonObject= json.dumps(jsonObject)
        msg = jsonObject
        

        return msg 
    
    def encodeSSM(self,msg):
        
        return msg 