// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from inertiallabs_msgs:msg/InsData.idl
// generated code does not contain a copyright notice

#ifndef INERTIALLABS_MSGS__MSG__DETAIL__INS_DATA__TRAITS_HPP_
#define INERTIALLABS_MSGS__MSG__DETAIL__INS_DATA__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "inertiallabs_msgs/msg/detail/ins_data__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'gps_msow'
#include "std_msgs/msg/detail/u_int32__traits.hpp"
// Member 'llh'
// Member 'ypr'
// Member 'vel_enu'
// Member 'pos_std'
#include "geometry_msgs/msg/detail/vector3__traits.hpp"
// Member 'oriquat'
#include "geometry_msgs/msg/detail/quaternion__traits.hpp"
// Member 'solution_status'
#include "std_msgs/msg/detail/int8__traits.hpp"

namespace inertiallabs_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const InsData & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: gps_ins_time
  {
    out << "gps_ins_time: ";
    rosidl_generator_traits::value_to_yaml(msg.gps_ins_time, out);
    out << ", ";
  }

  // member: gps_imu_time
  {
    out << "gps_imu_time: ";
    rosidl_generator_traits::value_to_yaml(msg.gps_imu_time, out);
    out << ", ";
  }

  // member: gps_msow
  {
    out << "gps_msow: ";
    to_flow_style_yaml(msg.gps_msow, out);
    out << ", ";
  }

  // member: llh
  {
    out << "llh: ";
    to_flow_style_yaml(msg.llh, out);
    out << ", ";
  }

  // member: ypr
  {
    out << "ypr: ";
    to_flow_style_yaml(msg.ypr, out);
    out << ", ";
  }

  // member: oriquat
  {
    out << "oriquat: ";
    to_flow_style_yaml(msg.oriquat, out);
    out << ", ";
  }

  // member: vel_enu
  {
    out << "vel_enu: ";
    to_flow_style_yaml(msg.vel_enu, out);
    out << ", ";
  }

  // member: solution_status
  {
    out << "solution_status: ";
    to_flow_style_yaml(msg.solution_status, out);
    out << ", ";
  }

  // member: pos_std
  {
    out << "pos_std: ";
    to_flow_style_yaml(msg.pos_std, out);
    out << ", ";
  }

  // member: heading_std
  {
    out << "heading_std: ";
    rosidl_generator_traits::value_to_yaml(msg.heading_std, out);
    out << ", ";
  }

  // member: usw
  {
    out << "usw: ";
    rosidl_generator_traits::value_to_yaml(msg.usw, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const InsData & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "header:\n";
    to_block_style_yaml(msg.header, out, indentation + 2);
  }

  // member: gps_ins_time
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gps_ins_time: ";
    rosidl_generator_traits::value_to_yaml(msg.gps_ins_time, out);
    out << "\n";
  }

  // member: gps_imu_time
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gps_imu_time: ";
    rosidl_generator_traits::value_to_yaml(msg.gps_imu_time, out);
    out << "\n";
  }

  // member: gps_msow
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gps_msow:\n";
    to_block_style_yaml(msg.gps_msow, out, indentation + 2);
  }

  // member: llh
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "llh:\n";
    to_block_style_yaml(msg.llh, out, indentation + 2);
  }

  // member: ypr
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ypr:\n";
    to_block_style_yaml(msg.ypr, out, indentation + 2);
  }

  // member: oriquat
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "oriquat:\n";
    to_block_style_yaml(msg.oriquat, out, indentation + 2);
  }

  // member: vel_enu
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vel_enu:\n";
    to_block_style_yaml(msg.vel_enu, out, indentation + 2);
  }

  // member: solution_status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "solution_status:\n";
    to_block_style_yaml(msg.solution_status, out, indentation + 2);
  }

  // member: pos_std
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pos_std:\n";
    to_block_style_yaml(msg.pos_std, out, indentation + 2);
  }

  // member: heading_std
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "heading_std: ";
    rosidl_generator_traits::value_to_yaml(msg.heading_std, out);
    out << "\n";
  }

  // member: usw
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "usw: ";
    rosidl_generator_traits::value_to_yaml(msg.usw, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const InsData & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace inertiallabs_msgs

namespace rosidl_generator_traits
{

[[deprecated("use inertiallabs_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const inertiallabs_msgs::msg::InsData & msg,
  std::ostream & out, size_t indentation = 0)
{
  inertiallabs_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use inertiallabs_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const inertiallabs_msgs::msg::InsData & msg)
{
  return inertiallabs_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<inertiallabs_msgs::msg::InsData>()
{
  return "inertiallabs_msgs::msg::InsData";
}

template<>
inline const char * name<inertiallabs_msgs::msg::InsData>()
{
  return "inertiallabs_msgs/msg/InsData";
}

template<>
struct has_fixed_size<inertiallabs_msgs::msg::InsData>
  : std::integral_constant<bool, has_fixed_size<geometry_msgs::msg::Quaternion>::value && has_fixed_size<geometry_msgs::msg::Vector3>::value && has_fixed_size<std_msgs::msg::Header>::value && has_fixed_size<std_msgs::msg::Int8>::value && has_fixed_size<std_msgs::msg::UInt32>::value> {};

template<>
struct has_bounded_size<inertiallabs_msgs::msg::InsData>
  : std::integral_constant<bool, has_bounded_size<geometry_msgs::msg::Quaternion>::value && has_bounded_size<geometry_msgs::msg::Vector3>::value && has_bounded_size<std_msgs::msg::Header>::value && has_bounded_size<std_msgs::msg::Int8>::value && has_bounded_size<std_msgs::msg::UInt32>::value> {};

template<>
struct is_message<inertiallabs_msgs::msg::InsData>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // INERTIALLABS_MSGS__MSG__DETAIL__INS_DATA__TRAITS_HPP_
