#include <chrono>

#include "rclcpp/rclcpp.hpp"
#include "rcl_interfaces/msg/integer_range.hpp"
#include "rcl_interfaces/msg/parameter_descriptor.hpp"
#include "rcl_interfaces/msg/parameter_type.hpp"

using namespace std::chrono_literals;

int main(int argc, char * argv[])
{
	rclcpp::init(argc, argv);
	auto node = rclcpp::Node::make_shared("rclcpp_1906");

	rcl_interfaces::msg::ParameterDescriptor range_descriptor;
	range_descriptor.name = "foo";
	range_descriptor.type = rcl_interfaces::msg::ParameterType::PARAMETER_INTEGER;
	rcl_interfaces::msg::IntegerRange int_range;
	int_range.from_value = 0;
	int_range.to_value = 10;
	int_range.step = 1;
	range_descriptor.integer_range.push_back(int_range);

	node->declare_parameter("foo", rclcpp::ParameterValue(5), range_descriptor);

	rclcpp::WallRate loop_rate(500ms);
	while (rclcpp::ok()) {
		RCLCPP_INFO(node->get_logger(), "%ld", node->get_parameter("foo").get_value<int>());
		loop_rate.sleep();
	}
	rclcpp::shutdown();
	return 0;
}
