// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from inertiallabs_msgs:msg/MarineData.idl
// generated code does not contain a copyright notice

#ifndef INERTIALLABS_MSGS__MSG__DETAIL__MARINE_DATA__BUILDER_HPP_
#define INERTIALLABS_MSGS__MSG__DETAIL__MARINE_DATA__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "inertiallabs_msgs/msg/detail/marine_data__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace inertiallabs_msgs
{

namespace msg
{

namespace builder
{

class Init_MarineData_significant_wave_height
{
public:
  explicit Init_MarineData_significant_wave_height(::inertiallabs_msgs::msg::MarineData & msg)
  : msg_(msg)
  {}
  ::inertiallabs_msgs::msg::MarineData significant_wave_height(::inertiallabs_msgs::msg::MarineData::_significant_wave_height_type arg)
  {
    msg_.significant_wave_height = std::move(arg);
    return std::move(msg_);
  }

private:
  ::inertiallabs_msgs::msg::MarineData msg_;
};

class Init_MarineData_sway_velocity
{
public:
  explicit Init_MarineData_sway_velocity(::inertiallabs_msgs::msg::MarineData & msg)
  : msg_(msg)
  {}
  Init_MarineData_significant_wave_height sway_velocity(::inertiallabs_msgs::msg::MarineData::_sway_velocity_type arg)
  {
    msg_.sway_velocity = std::move(arg);
    return Init_MarineData_significant_wave_height(msg_);
  }

private:
  ::inertiallabs_msgs::msg::MarineData msg_;
};

class Init_MarineData_surge_velocity
{
public:
  explicit Init_MarineData_surge_velocity(::inertiallabs_msgs::msg::MarineData & msg)
  : msg_(msg)
  {}
  Init_MarineData_sway_velocity surge_velocity(::inertiallabs_msgs::msg::MarineData::_surge_velocity_type arg)
  {
    msg_.surge_velocity = std::move(arg);
    return Init_MarineData_sway_velocity(msg_);
  }

private:
  ::inertiallabs_msgs::msg::MarineData msg_;
};

class Init_MarineData_heave_velocity
{
public:
  explicit Init_MarineData_heave_velocity(::inertiallabs_msgs::msg::MarineData & msg)
  : msg_(msg)
  {}
  Init_MarineData_surge_velocity heave_velocity(::inertiallabs_msgs::msg::MarineData::_heave_velocity_type arg)
  {
    msg_.heave_velocity = std::move(arg);
    return Init_MarineData_surge_velocity(msg_);
  }

private:
  ::inertiallabs_msgs::msg::MarineData msg_;
};

class Init_MarineData_sway
{
public:
  explicit Init_MarineData_sway(::inertiallabs_msgs::msg::MarineData & msg)
  : msg_(msg)
  {}
  Init_MarineData_heave_velocity sway(::inertiallabs_msgs::msg::MarineData::_sway_type arg)
  {
    msg_.sway = std::move(arg);
    return Init_MarineData_heave_velocity(msg_);
  }

private:
  ::inertiallabs_msgs::msg::MarineData msg_;
};

class Init_MarineData_surge
{
public:
  explicit Init_MarineData_surge(::inertiallabs_msgs::msg::MarineData & msg)
  : msg_(msg)
  {}
  Init_MarineData_sway surge(::inertiallabs_msgs::msg::MarineData::_surge_type arg)
  {
    msg_.surge = std::move(arg);
    return Init_MarineData_sway(msg_);
  }

private:
  ::inertiallabs_msgs::msg::MarineData msg_;
};

class Init_MarineData_heave
{
public:
  explicit Init_MarineData_heave(::inertiallabs_msgs::msg::MarineData & msg)
  : msg_(msg)
  {}
  Init_MarineData_surge heave(::inertiallabs_msgs::msg::MarineData::_heave_type arg)
  {
    msg_.heave = std::move(arg);
    return Init_MarineData_surge(msg_);
  }

private:
  ::inertiallabs_msgs::msg::MarineData msg_;
};

class Init_MarineData_header
{
public:
  Init_MarineData_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MarineData_heave header(::inertiallabs_msgs::msg::MarineData::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_MarineData_heave(msg_);
  }

private:
  ::inertiallabs_msgs::msg::MarineData msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::inertiallabs_msgs::msg::MarineData>()
{
  return inertiallabs_msgs::msg::builder::Init_MarineData_header();
}

}  // namespace inertiallabs_msgs

#endif  // INERTIALLABS_MSGS__MSG__DETAIL__MARINE_DATA__BUILDER_HPP_
