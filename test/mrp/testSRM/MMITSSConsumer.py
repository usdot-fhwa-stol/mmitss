from confluent_kafka import Consumer,KafkaException
import json
import socket
import logging


class MMITSSConsumer(Consumer):
    def __init__(self,kind,consumerConfigFilename=None,socketConfigFilename=None):
        # Configuration for the Kafka consumer
        self.kind = kind
        consumerConf,topics = self.readConsumerConfig(consumerConfigFilename) 
        
        # Initialize the base class (Consumer)
        super().__init__(consumerConf)
        self.config = self.readSocketConfig(socketConfigFilename)
        self.subscribe(topics)
        logging.basicConfig(level=logging.DEBUG)

    def readSocketConfig(self,filename=None):
        # Read a config file into a json object:
        if filename is not None:
            configFile = open(filename, 'r')
        else:
            configFile = open("/nojournal/bin/mmitss-phase3-master-config.json", 'r')
        config = (json.load(configFile))
        configFile.close()
        return config
    
    def readConsumerConfig(self,filename=None):
        # Read a config file into a json object:
        if filename is not None:
            configFile = open(filename, 'r')
        else:
            configFile = open("/nojournal/bin/kafkaConfig.json", 'r')
        config = (json.load(configFile))
        configFile.close()
        topics = config["CONSUMER_TOPICS"][self.kind]
        broker = config["BOOTSTRAP_SERVER"]
        groupId = config["GROUP_ID"]
        autoOffsetReset = config["AUTO_OFFSET_RESET"]
        consumerConfig = {
            'bootstrap.servers': broker,
            'group.id': groupId,
            'auto.offset.reset': autoOffsetReset
        }
        return consumerConfig,[topics]
        
        
    def broadcastMsg(self,debug=False):

        """
        Start consuming messages and invoke the callback for each message.
        """
        messageCount = 0
        try:
            while True:
                msg = self.poll(1.0)  # Poll for messages, with a timeout of 1 second
                if msg is None:
                    continue
                if msg.error():
                    print(f"Error: {msg.error()}")
                    continue

                # Invoke the callback for each message
                
                msg = json.loads(msg.value().decode("utf-8"))
                self.callback(msg)
                messageCount+=1
                if debug==True:
                    break
        except KeyboardInterrupt:
            print("print message count: ",messageCount)
        finally:
            self.close()
        return messageCount
    def callback(self,msg):
        hostIp = self.config["HostIp"]
        port = self.config["PortNumber"]["MessageTransceiver"]["MessageDecoder"]
        if self.kind == "SRM":
            receivingPort = self.config["PortNumber"]["PriorityRequestServer"]
            msg = self.decodeSRM(msg)
        elif self.kind == "BSM":
            receivingPort = self.config["PortNumber"]["TrajectoryAware"]
            msg = self.decodeBSM(msg)

        s = socket.socket(socket.AF_INET, socket.SOCK_DGRAM)
        s.bind((hostIp,port))
        communicationInfo = (hostIp, receivingPort)
        s.sendto(msg.encode(),communicationInfo)
        s.close()
    def decodeSRM(self, msg):
        msg = json.dumps(msg)
        return msg

    def decodeBSM(self, msg):
        msg = msg["core_data"]
        tempID = int(msg["id"],16)
        secMarkSecond = int(msg["sec_mark"])
        longitudeDecimalDegree = int(msg["lat"])/1000000
        latitudeDecimalDegree = int(msg["lat"])/1000000
        elevationMeter = int(msg["elev"])
        speedMeterPerSecond = int(msg["speed"])*0.02
        headingDegree = int(msg["heading"])*0.0125
        
        #vehicle type not defined in Carma Streets BSM
        vehicleType = 0
        bsmJson = {"BasicVehicle": {"heading_Degree": headingDegree,"position": {"elevation_Meter": elevationMeter,"latitude_DecimalDegree":  latitudeDecimalDegree,\
            "longitude_DecimalDegree": longitudeDecimalDegree},"secMark_Second": secMarkSecond,"speed_MeterPerSecond": speedMeterPerSecond,"temporaryID":tempID,"type": vehicleType},"MsgType": "BSM"}

        msg = json.dumps(bsmJson)
        
        return msg
    
