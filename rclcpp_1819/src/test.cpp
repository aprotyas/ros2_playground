#include "rclcpp/rclcpp.hpp"

int main(int argc, char * argv[]) {
    rclcpp::init(argc, argv);
    auto node = rclcpp::Node::make_shared("rclcpp_1819");
    std::shared_ptr<rclcpp::Logger> logger = std::make_shared<rclcpp::Logger>(node->get_logger());
    RCLCPP_INFO_STREAM(*logger, "Someday we'll find it, the rainbow connection");
    rclcpp::shutdown();
    return 0;
}
