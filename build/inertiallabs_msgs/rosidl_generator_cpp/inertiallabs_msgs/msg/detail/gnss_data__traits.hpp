// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from inertiallabs_msgs:msg/GnssData.idl
// generated code does not contain a copyright notice

#ifndef INERTIALLABS_MSGS__MSG__DETAIL__GNSS_DATA__TRAITS_HPP_
#define INERTIALLABS_MSGS__MSG__DETAIL__GNSS_DATA__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "inertiallabs_msgs/msg/detail/gnss_data__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'pos_std'
#include "geometry_msgs/msg/detail/vector3__traits.hpp"

namespace inertiallabs_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const GnssData & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: gnss_info_1
  {
    out << "gnss_info_1: ";
    rosidl_generator_traits::value_to_yaml(msg.gnss_info_1, out);
    out << ", ";
  }

  // member: gnss_info_2
  {
    out << "gnss_info_2: ";
    rosidl_generator_traits::value_to_yaml(msg.gnss_info_2, out);
    out << ", ";
  }

  // member: number_sat
  {
    out << "number_sat: ";
    rosidl_generator_traits::value_to_yaml(msg.number_sat, out);
    out << ", ";
  }

  // member: gnss_velocity_latency
  {
    out << "gnss_velocity_latency: ";
    rosidl_generator_traits::value_to_yaml(msg.gnss_velocity_latency, out);
    out << ", ";
  }

  // member: gnss_angles_position_type
  {
    out << "gnss_angles_position_type: ";
    rosidl_generator_traits::value_to_yaml(msg.gnss_angles_position_type, out);
    out << ", ";
  }

  // member: gnss_heading
  {
    out << "gnss_heading: ";
    rosidl_generator_traits::value_to_yaml(msg.gnss_heading, out);
    out << ", ";
  }

  // member: gnss_pitch
  {
    out << "gnss_pitch: ";
    rosidl_generator_traits::value_to_yaml(msg.gnss_pitch, out);
    out << ", ";
  }

  // member: gnss_gdop
  {
    out << "gnss_gdop: ";
    rosidl_generator_traits::value_to_yaml(msg.gnss_gdop, out);
    out << ", ";
  }

  // member: gnss_pdop
  {
    out << "gnss_pdop: ";
    rosidl_generator_traits::value_to_yaml(msg.gnss_pdop, out);
    out << ", ";
  }

  // member: gnss_hdop
  {
    out << "gnss_hdop: ";
    rosidl_generator_traits::value_to_yaml(msg.gnss_hdop, out);
    out << ", ";
  }

  // member: gnss_vdop
  {
    out << "gnss_vdop: ";
    rosidl_generator_traits::value_to_yaml(msg.gnss_vdop, out);
    out << ", ";
  }

  // member: gnss_tdop
  {
    out << "gnss_tdop: ";
    rosidl_generator_traits::value_to_yaml(msg.gnss_tdop, out);
    out << ", ";
  }

  // member: new_gnss_flags
  {
    out << "new_gnss_flags: ";
    rosidl_generator_traits::value_to_yaml(msg.new_gnss_flags, out);
    out << ", ";
  }

  // member: diff_age
  {
    out << "diff_age: ";
    rosidl_generator_traits::value_to_yaml(msg.diff_age, out);
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

  // member: pitch_std
  {
    out << "pitch_std: ";
    rosidl_generator_traits::value_to_yaml(msg.pitch_std, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GnssData & msg,
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

  // member: gnss_info_1
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gnss_info_1: ";
    rosidl_generator_traits::value_to_yaml(msg.gnss_info_1, out);
    out << "\n";
  }

  // member: gnss_info_2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gnss_info_2: ";
    rosidl_generator_traits::value_to_yaml(msg.gnss_info_2, out);
    out << "\n";
  }

  // member: number_sat
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "number_sat: ";
    rosidl_generator_traits::value_to_yaml(msg.number_sat, out);
    out << "\n";
  }

  // member: gnss_velocity_latency
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gnss_velocity_latency: ";
    rosidl_generator_traits::value_to_yaml(msg.gnss_velocity_latency, out);
    out << "\n";
  }

  // member: gnss_angles_position_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gnss_angles_position_type: ";
    rosidl_generator_traits::value_to_yaml(msg.gnss_angles_position_type, out);
    out << "\n";
  }

  // member: gnss_heading
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gnss_heading: ";
    rosidl_generator_traits::value_to_yaml(msg.gnss_heading, out);
    out << "\n";
  }

  // member: gnss_pitch
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gnss_pitch: ";
    rosidl_generator_traits::value_to_yaml(msg.gnss_pitch, out);
    out << "\n";
  }

  // member: gnss_gdop
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gnss_gdop: ";
    rosidl_generator_traits::value_to_yaml(msg.gnss_gdop, out);
    out << "\n";
  }

  // member: gnss_pdop
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gnss_pdop: ";
    rosidl_generator_traits::value_to_yaml(msg.gnss_pdop, out);
    out << "\n";
  }

  // member: gnss_hdop
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gnss_hdop: ";
    rosidl_generator_traits::value_to_yaml(msg.gnss_hdop, out);
    out << "\n";
  }

  // member: gnss_vdop
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gnss_vdop: ";
    rosidl_generator_traits::value_to_yaml(msg.gnss_vdop, out);
    out << "\n";
  }

  // member: gnss_tdop
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gnss_tdop: ";
    rosidl_generator_traits::value_to_yaml(msg.gnss_tdop, out);
    out << "\n";
  }

  // member: new_gnss_flags
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "new_gnss_flags: ";
    rosidl_generator_traits::value_to_yaml(msg.new_gnss_flags, out);
    out << "\n";
  }

  // member: diff_age
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "diff_age: ";
    rosidl_generator_traits::value_to_yaml(msg.diff_age, out);
    out << "\n";
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

  // member: pitch_std
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pitch_std: ";
    rosidl_generator_traits::value_to_yaml(msg.pitch_std, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GnssData & msg, bool use_flow_style = false)
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
  const inertiallabs_msgs::msg::GnssData & msg,
  std::ostream & out, size_t indentation = 0)
{
  inertiallabs_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use inertiallabs_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const inertiallabs_msgs::msg::GnssData & msg)
{
  return inertiallabs_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<inertiallabs_msgs::msg::GnssData>()
{
  return "inertiallabs_msgs::msg::GnssData";
}

template<>
inline const char * name<inertiallabs_msgs::msg::GnssData>()
{
  return "inertiallabs_msgs/msg/GnssData";
}

template<>
struct has_fixed_size<inertiallabs_msgs::msg::GnssData>
  : std::integral_constant<bool, has_fixed_size<geometry_msgs::msg::Vector3>::value && has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<inertiallabs_msgs::msg::GnssData>
  : std::integral_constant<bool, has_bounded_size<geometry_msgs::msg::Vector3>::value && has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<inertiallabs_msgs::msg::GnssData>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // INERTIALLABS_MSGS__MSG__DETAIL__GNSS_DATA__TRAITS_HPP_
