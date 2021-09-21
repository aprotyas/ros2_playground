#include "rclcpp/rclcpp.hpp"
#include "test_interface/srv/infer_service.hpp"
#include <memory>

void do_infer(const std::shared_ptr<test_interface::srv::InferService::Request> request,
		std::shared_ptr<test_interface::srv::InferService::Response> response)
{
    static int index = 0;
    RCLCPP_INFO(rclcpp::get_logger("server"), "Incoming request: seq = %d", request->seq);

    response->seq = index++;
}

int main(int argc, char **argv)
{
    rclcpp::init(argc, argv);
    
    std::shared_ptr<rclcpp::Node> node = rclcpp::Node::make_shared("test_service");
    
    rclcpp::Service<test_interface::srv::InferService>::SharedPtr service =
	    node->create_service<test_interface::srv::InferService>("infer", &do_infer);
    
    RCLCPP_INFO(rclcpp::get_logger("test_service"), "Ready to receive infer request ...");
    
    rclcpp::spin(node);
    rclcpp::shutdown();
}

