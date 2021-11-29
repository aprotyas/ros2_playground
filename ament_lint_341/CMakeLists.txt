cmake_minimum_required(VERSION 3.8)
project(ament_lint_341)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

find_package(ament_cmake REQUIRED)
add_executable(${PROJECT_NAME} src/test.cpp)

if(BUILD_TESTING)
  set(ament_cmake_clang_format_CONFIG_FILE "${CMAKE_SOURCE_DIR}/.clang-format")
  find_package(ament_lint_auto REQUIRED)
  ament_lint_auto_find_test_dependencies()
endif()

ament_package()
