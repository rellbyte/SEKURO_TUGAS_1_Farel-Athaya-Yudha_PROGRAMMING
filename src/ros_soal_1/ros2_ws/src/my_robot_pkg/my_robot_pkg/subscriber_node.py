import rclpy
from rclpy.node import Node
from std_msgs.msg import String

class CreativeSubscriber(Node):
    def __init__(self):
        super().__init__('creative_subscriber')
        self.subscription = self.create_subscription(
            String,
            'topic',
            self.listener_callback,
            10
        )
        self.subscription  # prevent unused variable warning
        self.counter = 0

    def listener_callback(self, msg):
        self.counter += 1
        self.get_logger().info(f'Received ({self.counter}): "{msg.data}"')

def main(args=None):
    rclpy.init(args=args)
    node = CreativeSubscriber()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()
