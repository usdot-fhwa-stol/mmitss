from confluent_kafka import Producer


class MMITSSProducer(Producer):
    def __init__(self):
        super().__init__()
        
