cmake_minimum_required(VERSION 3.8)
project(ament_lint_364)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

find_package(ament_cmake REQUIRED)
if(BUILD_TESTING)
  #set(ament_cmake_clang_format_CONFIG_FILE "${CMAKE_SOURCE_DIR}/.clang-format")
  find_package(ament_cmake_clang_format REQUIRED)
  ament_clang_format(CONFIG_FILE ${CMAKE_SOURCE_DIR}/.clang-format)
endif()
ament_package()
