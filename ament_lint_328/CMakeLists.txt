cmake_minimum_required(VERSION 3.5)
project(ament_lint_328)

# Default to C++14
if(NOT CMAKE_CXX_STANDARD)
  set(CMAKE_CXX_STANDARD 14)
endif()

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic -Wnon-virtual-dtor -Woverloaded-virtual)
endif()

find_package(ament_cmake)

# Tests
if(BUILD_TESTING)
  find_package(ament_cmake_copyright REQUIRED)
  find_package(ament_cmake_cppcheck REQUIRED)
  find_package(ament_cmake_cpplint REQUIRED)
  find_package(ament_cmake_lint_cmake REQUIRED)
  find_package(ament_cmake_uncrustify REQUIRED)
  find_package(ament_cmake_xmllint REQUIRED)

  # Should not lint 3rd party code
  set(
    _linter_excludes
    include/${PROJECT_NAME}/Vendor/Matrix3x3.h
    include/${PROJECT_NAME}/Vendor/MinMax.h
    include/${PROJECT_NAME}/Vendor/QuadWord.h
    include/${PROJECT_NAME}/Vendor/Quaternion.h
    include/${PROJECT_NAME}/Vendor/Scalar.h
    include/${PROJECT_NAME}/Vendor/Transform.h
    include/${PROJECT_NAME}/Vendor/Vector3.h
  )

  ament_copyright(EXCLUDE ${_linter_excludes})
  ament_cppcheck(
    LANGUAGE c++
    EXCLUDE ${_linter_excludes}
  )
  ament_cpplint(EXCLUDE ${_linter_excludes})
  ament_lint_cmake()
  #ament_uncrustify()
  ament_xmllint()
endif()

ament_package()
