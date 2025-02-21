from confluent_kafka import Producer,KafkaException
import json
import socket
import logging
import time


class MMITSSProducer(Producer):
    def __init__(self,kind,producerConfigFilename=None,socketConfigFilename=None):
        # Configuration for the Kafka Producer
        self.kind = kind
        producerConf,topics = self.readProducerConfig(producerConfigFilename) 
        self.topics = topics       
        
        # Initialize the base class (Producer)

        super().__init__(producerConf)
        self.config = self.readSocketConfig(socketConfigFilename)
        
    def readSocketConfig(self,filename=None):
        if filename == None:
            # Read a config file into a json object:
            configFile = open("/nojournal/bin/mmitss-phase3-master-config.json", 'r')
        else:
            configFile = open(filename, 'r')
        config = (json.load(configFile))
        configFile.close()
        return config
    
    def readProducerConfig(self,filename=None):
        if filename == None:
            # Read a config file into a json object:
            configFile = open("/nojournal/bin/kafkaConfig.json", 'r')
        else:
            configFile = open(filename, 'r')
        config = (json.load(configFile))
        configFile.close()
        topics = config["PRODUCER_TOPICS"][self.kind]
        broker = config["BOOTSTRAP_SERVER"]
        producerConfig = {
            'bootstrap.servers': broker
            # 'socket.timeout.ms': 500,       # Socket operation timeout (e.g., connection)
            # 'request.timeout.ms': 500,      # Request timeout
            # 'message.timeout.ms': 500,     # Message timeout (5 minutes)
            # 'transaction.timeout.ms': 1500,  # Transaction timeout
            # 'reconnect.backoff.max.ms': 500, # Maximum reconnect backoff
            # 'delivery.timeout.ms': 500
          
        }   
        return producerConfig,topics
    
    def socketLoop(self,debug=False):
        
       
        # Configure socket:
        hostIp = self.config["HostIp"]
        if self.kind == "SPaT":
            receivingPort = self.config["PortNumber"]["CarmaKafkaTransceiver"]["MapSpatProducer"]
        elif self.kind == "SSM":
            receivingPort = self.config["PortNumber"]["CarmaKafkaTransceiver"]["SSMProducer"]
        
        s = socket.socket(socket.AF_INET, socket.SOCK_DGRAM)
        s.bind((hostIp,receivingPort))

        #Wait for message in socket and publish to specific topic
        messageCount = 0
        while True:
            try :
                data, address = s.recvfrom(10240)
                data = data.decode()
                msg = json.loads(data)
                if msg["MsgType"] == "SPaT":
                    msg = self.encodeSPaT(msg)
                elif msg["MessageType"] == "SSM":
                    msg = self.encodeSSM(msg)
                try:
                    logging.info(msg)
            
                    tmp = self.produce(self.topics, msg)
                    logging.info("msg produced")
                    self.flush()
                    messageCount+=1
                    if debug == True:
                        break
                except KafkaException as e:
                    print(f"Error producing message: {e}")
            except:
                pass
            time.sleep(0.1)
            
        print("here")
        # s.close()
        
  
    def encodeSPaT(self,msg):
        moy = msg["Spat"]["minuteOfYear"]
        jsonObject = {"time_stamp":moy,"name":"","intersections":[]}
        id = msg["Spat"]["IntersectionState"]["intersectionID"]
        revision = msg["Spat"]["msgCnt"]
        status = msg["Spat"]["status"]
        states = [{"signal_group":signal["phaseNo"],"state_time_speed":[{"event_state":signal["currState"],"timing":{"start_time":signal["startTime"],\
                                                                                                                     "min_end_time":signal["minEndTime"]}}]} for signal in msg["Spat"]["phaseState"]]
        jsonObject["intersections"].append(\
            [{"id":id,"revision":revision,"status":status,"states":states}]
        )
        
        jsonObject= json.dumps(jsonObject)
        msg = jsonObject
        
        return msg 
    
    def encodeSSM(self,msg):
        msg = json.dumps(msg)
        return msg 
