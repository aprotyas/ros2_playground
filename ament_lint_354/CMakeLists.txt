cmake_minimum_required(VERSION 3.8)
project(ament_lint_354)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

find_package(ament_cmake REQUIRED)

if(BUILD_TESTING)
  find_package(ament_cmake_cpplint REQUIRED)
  find_package(ament_cmake_uncrustify REQUIRED)

  set(_linter_excludes external/foo/include/bar.hpp)
  ament_cpplint(EXCLUDE ${_linter_excludes})
  ament_uncrustify(EXCLUDE ${_linter_excludes} LANGUAGE C++)
endif()

ament_package()
