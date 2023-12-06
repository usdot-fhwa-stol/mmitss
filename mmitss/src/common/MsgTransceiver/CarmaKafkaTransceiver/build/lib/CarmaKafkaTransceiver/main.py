from MMITSSConsumer import *
from MMITSSProducer import *

def main():
    consumer = MMITSSConsumer()
    producer = MMITSSProducer()
    while True:
        msg = consumer.poll(1.0)
        if msg is None:
            continue
        if msg.error():
            print("Consumer error: {}".format(msg.error()))
            continue
        print('Received message: {}'.format(msg.value().decode('utf-8')))
        producer.produce('test', msg.value().decode('utf-8'))
        producer.flush()
    consumer.close()
    producer.close()

if __name__ == '__main__':
    main()