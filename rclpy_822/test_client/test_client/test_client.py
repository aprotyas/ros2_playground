import sys

from test_interface.srv import InferService
import rclpy
from rclpy.node import Node

import time


class MinimalClientAsync(Node):
    def __init__(self):
        super().__init__('test_client')
        self.cli = self.create_client(InferService, 'infer')
        while not self.cli.wait_for_service(timeout_sec=1.0):
            self.get_logger().info('service not available, waiting again...')
        self.req = InferService.Request()
        self.index = 0

    def send_request(self):
        self.index += 1
        self.req.seq = self.index
        self.future = self.cli.call_async(self.req)


def main(args=None):
    rclpy.init(args=args)

    minimal_client = MinimalClientAsync()
    for _ in range(100000):
        minimal_client.send_request()

        while rclpy.ok():
            rclpy.spin_once(minimal_client)
            if minimal_client.future.done():
                try:
                    response = minimal_client.future.result()
                except Exception as e:
                    minimal_client.get_logger().info(
                        'Service call failed %r' % (e,))
                else:
                    minimal_client.get_logger().info(
                        'Result of inference: resp seq %d' % (response.seq))
                break
            time.sleep(0.5)


    minimal_client.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()

