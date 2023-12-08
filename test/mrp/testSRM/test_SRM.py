from MMITSSConsumer import *
from confluent_kafka import Producer
import json


def testSRM():
    
    #read KafkaConfig file
    fileName = 'kafkaConfig.json'
    f = open(fileName,"r")
    kafkaConfig  = json.loads(f.read())
    f.close()
    
    consumer = MMITSSConsumer("SRM",consumerConfigFilename = "kafkaConfig.json",socketConfigFilename = "mmitss-phase3-master-config.json")
    
    #create Kafka Producer message 
    producerConfig = {"bootstrap.servers":kafkaConfig["BOOTSTRAP_SERVER"]}
    producer = Producer(producerConfig)
    
    #read bsm json file
    fileName = 'srm.json'
    f = open(fileName,"r")
    dataSRM  = json.dumps(json.loads(f.read()))
    f.close()

    #send message

    producer.produce(kafkaConfig["CONSUMER_TOPICS"]["SRM"],dataSRM)
    producer.flush()

    #receive message and broadcast back to MMITSS
    assert(consumer.broadcastMsg(debug=True)==1)
