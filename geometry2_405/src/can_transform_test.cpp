#include <rclcpp/rclcpp.hpp>
#include <tf2_ros/buffer.h>
#include <tf2_ros/create_timer_interface.h>

#include <iostream>
#include <memory>
#include <string>

int main(int argc, char ** argv)
{
  (void) argc;
  (void) argv;
  rclcpp::Clock::SharedPtr clock = std::make_shared<rclcpp::Clock>(RCL_SYSTEM_TIME);
  tf2_ros::Buffer buffer(clock);
  buffer.setUsingDedicatedThread(true);
  std::string err("TEST");
  buffer.canTransform("foo", "bar", rclcpp::Time(0), tf2::durationFromSec(5.0), &err);
  std::cout << err << '\n';
  return 0;
}
