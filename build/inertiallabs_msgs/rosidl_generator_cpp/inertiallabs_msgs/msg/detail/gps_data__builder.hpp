// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from inertiallabs_msgs:msg/GpsData.idl
// generated code does not contain a copyright notice

#ifndef INERTIALLABS_MSGS__MSG__DETAIL__GPS_DATA__BUILDER_HPP_
#define INERTIALLABS_MSGS__MSG__DETAIL__GPS_DATA__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "inertiallabs_msgs/msg/detail/gps_data__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace inertiallabs_msgs
{

namespace msg
{

namespace builder
{

class Init_GpsData_verspeed
{
public:
  explicit Init_GpsData_verspeed(::inertiallabs_msgs::msg::GpsData & msg)
  : msg_(msg)
  {}
  ::inertiallabs_msgs::msg::GpsData verspeed(::inertiallabs_msgs::msg::GpsData::_verspeed_type arg)
  {
    msg_.verspeed = std::move(arg);
    return std::move(msg_);
  }

private:
  ::inertiallabs_msgs::msg::GpsData msg_;
};

class Init_GpsData_speeddir
{
public:
  explicit Init_GpsData_speeddir(::inertiallabs_msgs::msg::GpsData & msg)
  : msg_(msg)
  {}
  Init_GpsData_verspeed speeddir(::inertiallabs_msgs::msg::GpsData::_speeddir_type arg)
  {
    msg_.speeddir = std::move(arg);
    return Init_GpsData_verspeed(msg_);
  }

private:
  ::inertiallabs_msgs::msg::GpsData msg_;
};

class Init_GpsData_horspeed
{
public:
  explicit Init_GpsData_horspeed(::inertiallabs_msgs::msg::GpsData & msg)
  : msg_(msg)
  {}
  Init_GpsData_speeddir horspeed(::inertiallabs_msgs::msg::GpsData::_horspeed_type arg)
  {
    msg_.horspeed = std::move(arg);
    return Init_GpsData_speeddir(msg_);
  }

private:
  ::inertiallabs_msgs::msg::GpsData msg_;
};

class Init_GpsData_llh
{
public:
  explicit Init_GpsData_llh(::inertiallabs_msgs::msg::GpsData & msg)
  : msg_(msg)
  {}
  Init_GpsData_horspeed llh(::inertiallabs_msgs::msg::GpsData::_llh_type arg)
  {
    msg_.llh = std::move(arg);
    return Init_GpsData_horspeed(msg_);
  }

private:
  ::inertiallabs_msgs::msg::GpsData msg_;
};

class Init_GpsData_header
{
public:
  Init_GpsData_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GpsData_llh header(::inertiallabs_msgs::msg::GpsData::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_GpsData_llh(msg_);
  }

private:
  ::inertiallabs_msgs::msg::GpsData msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::inertiallabs_msgs::msg::GpsData>()
{
  return inertiallabs_msgs::msg::builder::Init_GpsData_header();
}

}  // namespace inertiallabs_msgs

#endif  // INERTIALLABS_MSGS__MSG__DETAIL__GPS_DATA__BUILDER_HPP_
