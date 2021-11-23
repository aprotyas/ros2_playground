#include "rclcpp/rclcpp.hpp"
#include "rclcpp_1827/msg/bounded_string.hpp"

int main(int argc, char * argv[]) {
    rclcpp::init(argc, argv);
    auto node = rclcpp::Node::make_shared("rclcpp_1827");
    auto publisher = node->create_publisher<rclcpp_1827::msg::BoundedString>("oversized", 10);
    auto message = rclcpp_1827::msg::BoundedString();
    message.bounded_string.resize(20, '.');
    publisher->publish(message);
    rclcpp::spin_some(node);
    rclcpp::shutdown();
    return 0;
}
