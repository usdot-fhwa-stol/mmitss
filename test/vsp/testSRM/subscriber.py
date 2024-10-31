from carma_driver_msgs.msg import ByteArray
import rclpy 

#create a subscriber class that will store the accumulate the number of SRM messages received
class Subscriber:
    def __init__(self):
        self.SRMreceived = 0
        self.node = rclpy.create_node("my_subscriber")
        self.subscriber = self.node.create_subscription(
            ByteArray,
            "/hardware_interface/comms/outbound_binary_message",
            self.callback,
            10  # Set the queue size
        )
        
    def callback(self, msg):
            # Callback function to process received messages
            self.SRMreceived +=1

    def spin(self):
        # Spin the node to start processing callbacks
        rclpy.spin_once(self.node)

    def destroy_node(self):
        # Cleanup when the node is shutting down
        self.node.destroy_node()
