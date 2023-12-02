from CarmaKafkaTransceiver.MMITSSProducer import MMITSSProducer
from unittest.mock import MagicMock
import json
import Spat


#write documentation of this test:
#test the SPaT message


def test_SPaTCount():

    #read KafkaConfig file

    fileName = '../kafkaConfig.json'
    f = open(fileName,"r")
    kafkaConfig  = json.loads(f.read())
    f.close()
    
    #generate SPaT empty objects and convert to Json
    spatObject = Spat.Spat()
    dataSPaT = spatObject.Spat2Json()


    # Mock the Kafka producer to avoid actually sending messages
    producerMock = mocker.patch('CarmaKafkaTransceiver.MMITSSProducer.MMITSSProducer')
    producerConfig = {'bootstrap.servers':kafkaConfig["BOOTSTRAP_SERVER"]}
    producerTopic = kafkaConfig["PRODUCER_TOPIC"]
    producer = MMITSSProducer(producerConfig)
    
    #send message 
    producer.produce(producerTopic,dataSPaT)
    producer.flush()

    # Assert that the Producer instance was created with the correct arguments
    producerMock.assert_called_once_with(producerConfig)

    # Assert that the produce method was called with the expected arguments
    producerInstance = producerMock.return_value
    producerInstance.produce.assert_called_once_with(producerTopic,dataSPaT)

