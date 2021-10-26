#include <iostream>

#include "rclcpp_1792/msg/foo.hpp"

int main() {
    rclcpp_1792::msg::Foo msg;
    msg.intnum = 5;
    msg.octetseq = std::vector<unsigned char>{10, 20, 30};
    msg.floatnum = 3.14;
    std::cout << to_yaml(msg) << '\n';
    return 0;
}
