cmake_minimum_required(VERSION 3.8)
project(inertiallabs_ins)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# find dependencies
find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(tf2 REQUIRED)
find_package(rosidl_default_generators REQUIRED)
find_package(inertiallabs_msgs REQUIRED) 

# Specify the path to your message headers
include_directories(
  include
  ${ament_INCLUDE_DIRS}
  ${rclcpp_INCLUDE_DIRS}
  ${tf2_INCLUDE_DIRS}
  ${rosidl_default_generators_INCLUDE_DIRS}
  ${inertiallabs_msgs_INCLUDE_DIRS}
  ../inertiallabs_sdk/
  ./include/inertiallabs_ins/
)

set(IL_PLATFORM "linux")

# Add executable
add_executable(il_ins
  src/il_ins.cpp
  ../inertiallabs_sdk/ILDriver.cpp
  ../inertiallabs_sdk/UDDParser.cpp
  ../inertiallabs_sdk/platforms/${IL_PLATFORM}/SerialPort.cpp
  ../inertiallabs_sdk/platforms/${IL_PLATFORM}/NetClient.cpp
)

ament_target_dependencies(il_ins
  rclcpp
  tf2
  inertiallabs_msgs
)

# Install targets
install(TARGETS
  il_ins
  DESTINATION lib/${PROJECT_NAME}
)

if(BUILD_TESTING)
  find_package(ament_lint_auto REQUIRED)
  # Skip linter checks if needed
  set(ament_cmake_copyright_FOUND TRUE)
  set(ament_cmake_cpplint_FOUND TRUE)
  ament_lint_auto_find_test_dependencies()
endif()

ament_package()
