import rclpy
from rclpy.node import Node
from rclpy.qos import QoSPresetProfiles
from std_msgs.msg import Float64

import sys

class DynamicSubscriptions(Node):

    def __init__(self):
        super().__init__("dynamic_subscriptions")

        list_of_subs_to_make = [  # Could come from a parameter, be added as the node runs, ... 
            "one",
            "two",
            "three",
        ]

        self.subscribers = {}
        self.sub_callbacks = {}
        self.pubs = {}

        for topic in list_of_subs_to_make:

            self.pubs[topic] = self.create_publisher(
                Float64,
                topic + '/republished',
                QoSPresetProfiles.SENSOR_DATA.value
            )

            new_cb = self.make_callback(topic)
            self.sub_callbacks[topic] = new_cb

            self.subscribers[topic] = self.create_subscription(
                Float64,  # Leaving these the same for all topics, for simplicity of the example
                topic,
                new_cb,
                QoSPresetProfiles.SENSOR_DATA.value
            )

        for topic, sub in self.subscribers.items():
            self.get_logger().info(f"topic {topic} subscription {sub}")

    def make_callback(self, topic_name):
        def callback(self, msg):
            self.get_logger().info(f"Inside {topic_name} callback, got {msg}")
        setattr(self, 'callback', callback.__get__(self, self.__class__))
        return self.callback


def main(args=None):
    rclpy.init(args=args)
    node = DynamicSubscriptions()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    except ExternalShutdownException:
        sys.exit(1)
    finally:
        node.destroy_node()
        rclpy.try_shutdown()


if __name__ == '__main__':
    main()
