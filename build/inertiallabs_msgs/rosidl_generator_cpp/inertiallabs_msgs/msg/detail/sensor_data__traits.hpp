// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from inertiallabs_msgs:msg/SensorData.idl
// generated code does not contain a copyright notice

#ifndef INERTIALLABS_MSGS__MSG__DETAIL__SENSOR_DATA__TRAITS_HPP_
#define INERTIALLABS_MSGS__MSG__DETAIL__SENSOR_DATA__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "inertiallabs_msgs/msg/detail/sensor_data__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'mag'
// Member 'accel'
// Member 'gyro'
#include "geometry_msgs/msg/detail/vector3__traits.hpp"

namespace inertiallabs_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const SensorData & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: mag
  {
    out << "mag: ";
    to_flow_style_yaml(msg.mag, out);
    out << ", ";
  }

  // member: accel
  {
    out << "accel: ";
    to_flow_style_yaml(msg.accel, out);
    out << ", ";
  }

  // member: gyro
  {
    out << "gyro: ";
    to_flow_style_yaml(msg.gyro, out);
    out << ", ";
  }

  // member: temp
  {
    out << "temp: ";
    rosidl_generator_traits::value_to_yaml(msg.temp, out);
    out << ", ";
  }

  // member: vinp
  {
    out << "vinp: ";
    rosidl_generator_traits::value_to_yaml(msg.vinp, out);
    out << ", ";
  }

  // member: pressure
  {
    out << "pressure: ";
    rosidl_generator_traits::value_to_yaml(msg.pressure, out);
    out << ", ";
  }

  // member: barometric_height
  {
    out << "barometric_height: ";
    rosidl_generator_traits::value_to_yaml(msg.barometric_height, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SensorData & msg,
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

  // member: mag
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mag:\n";
    to_block_style_yaml(msg.mag, out, indentation + 2);
  }

  // member: accel
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "accel:\n";
    to_block_style_yaml(msg.accel, out, indentation + 2);
  }

  // member: gyro
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gyro:\n";
    to_block_style_yaml(msg.gyro, out, indentation + 2);
  }

  // member: temp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "temp: ";
    rosidl_generator_traits::value_to_yaml(msg.temp, out);
    out << "\n";
  }

  // member: vinp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vinp: ";
    rosidl_generator_traits::value_to_yaml(msg.vinp, out);
    out << "\n";
  }

  // member: pressure
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pressure: ";
    rosidl_generator_traits::value_to_yaml(msg.pressure, out);
    out << "\n";
  }

  // member: barometric_height
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "barometric_height: ";
    rosidl_generator_traits::value_to_yaml(msg.barometric_height, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SensorData & msg, bool use_flow_style = false)
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
  const inertiallabs_msgs::msg::SensorData & msg,
  std::ostream & out, size_t indentation = 0)
{
  inertiallabs_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use inertiallabs_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const inertiallabs_msgs::msg::SensorData & msg)
{
  return inertiallabs_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<inertiallabs_msgs::msg::SensorData>()
{
  return "inertiallabs_msgs::msg::SensorData";
}

template<>
inline const char * name<inertiallabs_msgs::msg::SensorData>()
{
  return "inertiallabs_msgs/msg/SensorData";
}

template<>
struct has_fixed_size<inertiallabs_msgs::msg::SensorData>
  : std::integral_constant<bool, has_fixed_size<geometry_msgs::msg::Vector3>::value && has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<inertiallabs_msgs::msg::SensorData>
  : std::integral_constant<bool, has_bounded_size<geometry_msgs::msg::Vector3>::value && has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<inertiallabs_msgs::msg::SensorData>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // INERTIALLABS_MSGS__MSG__DETAIL__SENSOR_DATA__TRAITS_HPP_
