// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from inertiallabs_msgs:msg/MarineData.idl
// generated code does not contain a copyright notice

#ifndef INERTIALLABS_MSGS__MSG__DETAIL__MARINE_DATA__TRAITS_HPP_
#define INERTIALLABS_MSGS__MSG__DETAIL__MARINE_DATA__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "inertiallabs_msgs/msg/detail/marine_data__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace inertiallabs_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const MarineData & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: heave
  {
    out << "heave: ";
    rosidl_generator_traits::value_to_yaml(msg.heave, out);
    out << ", ";
  }

  // member: surge
  {
    out << "surge: ";
    rosidl_generator_traits::value_to_yaml(msg.surge, out);
    out << ", ";
  }

  // member: sway
  {
    out << "sway: ";
    rosidl_generator_traits::value_to_yaml(msg.sway, out);
    out << ", ";
  }

  // member: heave_velocity
  {
    out << "heave_velocity: ";
    rosidl_generator_traits::value_to_yaml(msg.heave_velocity, out);
    out << ", ";
  }

  // member: surge_velocity
  {
    out << "surge_velocity: ";
    rosidl_generator_traits::value_to_yaml(msg.surge_velocity, out);
    out << ", ";
  }

  // member: sway_velocity
  {
    out << "sway_velocity: ";
    rosidl_generator_traits::value_to_yaml(msg.sway_velocity, out);
    out << ", ";
  }

  // member: significant_wave_height
  {
    out << "significant_wave_height: ";
    rosidl_generator_traits::value_to_yaml(msg.significant_wave_height, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MarineData & msg,
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

  // member: heave
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "heave: ";
    rosidl_generator_traits::value_to_yaml(msg.heave, out);
    out << "\n";
  }

  // member: surge
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "surge: ";
    rosidl_generator_traits::value_to_yaml(msg.surge, out);
    out << "\n";
  }

  // member: sway
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sway: ";
    rosidl_generator_traits::value_to_yaml(msg.sway, out);
    out << "\n";
  }

  // member: heave_velocity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "heave_velocity: ";
    rosidl_generator_traits::value_to_yaml(msg.heave_velocity, out);
    out << "\n";
  }

  // member: surge_velocity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "surge_velocity: ";
    rosidl_generator_traits::value_to_yaml(msg.surge_velocity, out);
    out << "\n";
  }

  // member: sway_velocity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sway_velocity: ";
    rosidl_generator_traits::value_to_yaml(msg.sway_velocity, out);
    out << "\n";
  }

  // member: significant_wave_height
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "significant_wave_height: ";
    rosidl_generator_traits::value_to_yaml(msg.significant_wave_height, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MarineData & msg, bool use_flow_style = false)
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
  const inertiallabs_msgs::msg::MarineData & msg,
  std::ostream & out, size_t indentation = 0)
{
  inertiallabs_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use inertiallabs_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const inertiallabs_msgs::msg::MarineData & msg)
{
  return inertiallabs_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<inertiallabs_msgs::msg::MarineData>()
{
  return "inertiallabs_msgs::msg::MarineData";
}

template<>
inline const char * name<inertiallabs_msgs::msg::MarineData>()
{
  return "inertiallabs_msgs/msg/MarineData";
}

template<>
struct has_fixed_size<inertiallabs_msgs::msg::MarineData>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<inertiallabs_msgs::msg::MarineData>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<inertiallabs_msgs::msg::MarineData>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // INERTIALLABS_MSGS__MSG__DETAIL__MARINE_DATA__TRAITS_HPP_
