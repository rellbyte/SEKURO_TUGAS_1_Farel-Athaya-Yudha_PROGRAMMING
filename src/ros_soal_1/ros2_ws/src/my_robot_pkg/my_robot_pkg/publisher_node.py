import rclpy
from rclpy.node import Node
from std_msgs.msg import String
import random

class CreativePublisher(Node):
    def __init__(self):
        super().__init__('creative_publisher')
        self.publisher_ = self.create_publisher(String, 'topic', 10)
        self.timer = self.create_timer(1.0, self.timer_callback)
        self.step = 0

    def timer_callback(self):
        # Random posisi x, y dan paket status
        x = random.randint(0, 10)
        y = random.randint(0, 10)
        status = random.choice(['picked', 'waiting', 'delivered'])
        msg = String()
        msg.data = f"Step {self.step}: Robot at ({x},{y}), package status={status}"
        self.publisher_.publish(msg)
        self.get_logger().info(f'Publishing: "{msg.data}"')
        self.step += 1

def main(args=None):
    rclpy.init(args=args)
    node = CreativePublisher()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()
