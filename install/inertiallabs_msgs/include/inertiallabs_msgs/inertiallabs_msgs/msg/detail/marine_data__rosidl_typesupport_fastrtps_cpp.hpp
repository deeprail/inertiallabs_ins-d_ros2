// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from inertiallabs_msgs:msg/MarineData.idl
// generated code does not contain a copyright notice

#ifndef INERTIALLABS_MSGS__MSG__DETAIL__MARINE_DATA__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define INERTIALLABS_MSGS__MSG__DETAIL__MARINE_DATA__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "inertiallabs_msgs/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "inertiallabs_msgs/msg/detail/marine_data__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

#include "fastcdr/Cdr.h"

namespace inertiallabs_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_inertiallabs_msgs
cdr_serialize(
  const inertiallabs_msgs::msg::MarineData & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_inertiallabs_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  inertiallabs_msgs::msg::MarineData & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_inertiallabs_msgs
get_serialized_size(
  const inertiallabs_msgs::msg::MarineData & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_inertiallabs_msgs
max_serialized_size_MarineData(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace inertiallabs_msgs

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_inertiallabs_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, inertiallabs_msgs, msg, MarineData)();

#ifdef __cplusplus
}
#endif

#endif  // INERTIALLABS_MSGS__MSG__DETAIL__MARINE_DATA__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
