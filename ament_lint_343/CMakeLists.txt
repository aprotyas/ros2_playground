cmake_minimum_required(VERSION 3.8)
project(ament_lint_343)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# find dependencies
find_package(ament_cmake REQUIRED)

if(BUILD_TESTING)
  find_package(ament_lint_auto REQUIRED)

  set(
    _linter_excludes
    include/ament_lint_343/skip.hpp
    include/ament_lint_343/skip.cpp
  )
  set(AMENT_LINT_AUTO_FILE_EXCLUDE ${_linter_excludes})

  set(ament_cmake_cppcheck_LANGUAGE c++)
  set(ament_cmake_uncrustify_LANGUAGE c++)

  ament_lint_auto_find_test_dependencies()
endif()

ament_package()
