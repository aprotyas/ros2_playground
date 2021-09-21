cmake_minimum_required(VERSION 3.8)
project(test_service)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(test_interface REQUIRED)

add_executable(${PROJECT_NAME} src/${PROJECT_NAME}.cpp)
ament_target_dependencies(${PROJECT_NAME} rclcpp test_interface)

install(TARGETS
  test_service
  DESTINATION lib/${PROJECT_NAME})

ament_package()
