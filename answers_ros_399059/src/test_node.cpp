#include <iostream>

#include "geometry_msgs/msg/point.hpp"
#include "geometry_msgs/msg/pose.hpp"
#include "geometry_msgs/msg/quaternion.hpp"

namespace geometry_msgs::msg {
auto make_point(double x, double y, double z) {
  geometry_msgs::msg::Point p;
  p.x = x; p.y = y; p.z = z;
  return p;
}

auto make_quaternion(double x = 0.0, double y = 0.0, double z = 0.0, double w = 1.0) {
  geometry_msgs::msg::Quaternion q;
  q.x = x; q.y = y; q.z = z; q.w = w;
  return q;
}

auto make_pose(Point p, Quaternion q) {
  geometry_msgs::msg::Pose pose;
  pose.position = p;
  pose.orientation = q;
  return pose;
}
}

int main()
{
  {
    using namespace geometry_msgs::msg;
    Pose pose = make_pose(make_point(1, 2, 3), make_quaternion(1, 0, 0, 0));
    std::cout << pose.position.y << '\n';
  }

  return 0;
}
