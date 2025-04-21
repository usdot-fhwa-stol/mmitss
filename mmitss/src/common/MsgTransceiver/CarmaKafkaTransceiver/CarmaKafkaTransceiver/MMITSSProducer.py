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
        msMin = msg["Spat"]["msOfMinute"]
        # Encode SPaT following J2735
        jsonObject = {"time_stamp":moy,"name":"","intersections":[]}
        id = msg["Spat"]["IntersectionState"]["intersectionID"]
        revision = msg["Spat"]["msgCnt"]
        status = int(msg["Spat"]["status"],2) # convert a binary string into integer 
        states = [{"movement_name":"",
                    "signal_group":signal["phaseNo"],
                    "state_time_speed":[{"event_state":self.event_state_convert(signal["currState"]),\
                                            "timing":{"start_time":signal["startTime"],\
                                            "min_end_time":signal["minEndTime"],\
                                            "confidence":0}}]} for signal in msg["Spat"]["phaseState"]]
        jsonObject["intersections"].append(\
            {"name":"","id":id,"revision":revision,"status":status,
            "moy":moy,"time_stamp":msMin,"states":states}
        )
        
        jsonObject= json.dumps(jsonObject)
        msg = jsonObject
        
        return msg 
    
    def event_state_convert(self, currState):
        Mapping = {'red':3,
                    'yellow':8,
                    'green':6,
                    'permissive_yellow':7,
                    'do_not_walk':3,
                    'ped_clear':8,
                    'walk':6}
        if currState in Mapping.keys():
            return Mapping[currState]
        else:
            raise ValueError('currState in SPaT can not find matched value. @CarmaKafkaTransceiver.') 

    def encodeSSM(self,msg):
        msg = json.dumps(msg)
        return msg 
