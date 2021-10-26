cmake_minimum_required(VERSION 3.8)
project(rclcpp_1792)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# find dependencies
find_package(rosidl_default_generators REQUIRED)
find_package(ament_cmake REQUIRED)

rosidl_generate_interfaces(${PROJECT_NAME}
  "msg/Foo.msg"
)

#rosidl_target_interfaces(
rosidl_get_typesupport_target(cpp_typesupport_target
  ${PROJECT_NAME}
  "rosidl_typesupport_cpp"
)

add_executable(test_foo src/test_foo.cpp)
target_link_libraries(test_foo ${cpp_typesupport_target})

install(TARGETS
  test_foo
  DESTINATION ${CMAKE_INSTALL_BINDIR}/${PROJECT_NAME}
)

if(BUILD_TESTING)
  find_package(ament_lint_auto REQUIRED)
  ament_lint_auto_find_test_dependencies()
endif()

ament_package()
