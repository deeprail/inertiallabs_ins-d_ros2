// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from inertiallabs_msgs:msg/GpsData.idl
// generated code does not contain a copyright notice

#ifndef INERTIALLABS_MSGS__MSG__DETAIL__GPS_DATA__TRAITS_HPP_
#define INERTIALLABS_MSGS__MSG__DETAIL__GPS_DATA__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "inertiallabs_msgs/msg/detail/gps_data__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'llh'
#include "geometry_msgs/msg/detail/vector3__traits.hpp"

namespace inertiallabs_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const GpsData & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: llh
  {
    out << "llh: ";
    to_flow_style_yaml(msg.llh, out);
    out << ", ";
  }

  // member: horspeed
  {
    out << "horspeed: ";
    rosidl_generator_traits::value_to_yaml(msg.horspeed, out);
    out << ", ";
  }

  // member: speeddir
  {
    out << "speeddir: ";
    rosidl_generator_traits::value_to_yaml(msg.speeddir, out);
    out << ", ";
  }

  // member: verspeed
  {
    out << "verspeed: ";
    rosidl_generator_traits::value_to_yaml(msg.verspeed, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GpsData & msg,
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

  // member: llh
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "llh:\n";
    to_block_style_yaml(msg.llh, out, indentation + 2);
  }

  // member: horspeed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "horspeed: ";
    rosidl_generator_traits::value_to_yaml(msg.horspeed, out);
    out << "\n";
  }

  // member: speeddir
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "speeddir: ";
    rosidl_generator_traits::value_to_yaml(msg.speeddir, out);
    out << "\n";
  }

  // member: verspeed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "verspeed: ";
    rosidl_generator_traits::value_to_yaml(msg.verspeed, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GpsData & msg, bool use_flow_style = false)
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
  const inertiallabs_msgs::msg::GpsData & msg,
  std::ostream & out, size_t indentation = 0)
{
  inertiallabs_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use inertiallabs_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const inertiallabs_msgs::msg::GpsData & msg)
{
  return inertiallabs_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<inertiallabs_msgs::msg::GpsData>()
{
  return "inertiallabs_msgs::msg::GpsData";
}

template<>
inline const char * name<inertiallabs_msgs::msg::GpsData>()
{
  return "inertiallabs_msgs/msg/GpsData";
}

template<>
struct has_fixed_size<inertiallabs_msgs::msg::GpsData>
  : std::integral_constant<bool, has_fixed_size<geometry_msgs::msg::Vector3>::value && has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<inertiallabs_msgs::msg::GpsData>
  : std::integral_constant<bool, has_bounded_size<geometry_msgs::msg::Vector3>::value && has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<inertiallabs_msgs::msg::GpsData>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // INERTIALLABS_MSGS__MSG__DETAIL__GPS_DATA__TRAITS_HPP_
