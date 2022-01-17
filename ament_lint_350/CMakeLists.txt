cmake_minimum_required(VERSION 3.8)
project(ament_lint_350)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

find_package(ament_cmake REQUIRED)

add_executable(ament_lint_350 src/ament_lint_350.cpp)

install(TARGETS ament_lint_350
  DESTINATION lib/${PROJECT_NAME})

find_package(ament_lint_auto REQUIRED)
set(ament_cmake_copyright_FOUND TRUE)
ament_lint_auto_find_test_dependencies()

ament_package()
