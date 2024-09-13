// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from inertiallabs_msgs:msg/SensorData.idl
// generated code does not contain a copyright notice

#ifndef INERTIALLABS_MSGS__MSG__DETAIL__SENSOR_DATA__BUILDER_HPP_
#define INERTIALLABS_MSGS__MSG__DETAIL__SENSOR_DATA__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "inertiallabs_msgs/msg/detail/sensor_data__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace inertiallabs_msgs
{

namespace msg
{

namespace builder
{

class Init_SensorData_barometric_height
{
public:
  explicit Init_SensorData_barometric_height(::inertiallabs_msgs::msg::SensorData & msg)
  : msg_(msg)
  {}
  ::inertiallabs_msgs::msg::SensorData barometric_height(::inertiallabs_msgs::msg::SensorData::_barometric_height_type arg)
  {
    msg_.barometric_height = std::move(arg);
    return std::move(msg_);
  }

private:
  ::inertiallabs_msgs::msg::SensorData msg_;
};

class Init_SensorData_pressure
{
public:
  explicit Init_SensorData_pressure(::inertiallabs_msgs::msg::SensorData & msg)
  : msg_(msg)
  {}
  Init_SensorData_barometric_height pressure(::inertiallabs_msgs::msg::SensorData::_pressure_type arg)
  {
    msg_.pressure = std::move(arg);
    return Init_SensorData_barometric_height(msg_);
  }

private:
  ::inertiallabs_msgs::msg::SensorData msg_;
};

class Init_SensorData_vinp
{
public:
  explicit Init_SensorData_vinp(::inertiallabs_msgs::msg::SensorData & msg)
  : msg_(msg)
  {}
  Init_SensorData_pressure vinp(::inertiallabs_msgs::msg::SensorData::_vinp_type arg)
  {
    msg_.vinp = std::move(arg);
    return Init_SensorData_pressure(msg_);
  }

private:
  ::inertiallabs_msgs::msg::SensorData msg_;
};

class Init_SensorData_temp
{
public:
  explicit Init_SensorData_temp(::inertiallabs_msgs::msg::SensorData & msg)
  : msg_(msg)
  {}
  Init_SensorData_vinp temp(::inertiallabs_msgs::msg::SensorData::_temp_type arg)
  {
    msg_.temp = std::move(arg);
    return Init_SensorData_vinp(msg_);
  }

private:
  ::inertiallabs_msgs::msg::SensorData msg_;
};

class Init_SensorData_gyro
{
public:
  explicit Init_SensorData_gyro(::inertiallabs_msgs::msg::SensorData & msg)
  : msg_(msg)
  {}
  Init_SensorData_temp gyro(::inertiallabs_msgs::msg::SensorData::_gyro_type arg)
  {
    msg_.gyro = std::move(arg);
    return Init_SensorData_temp(msg_);
  }

private:
  ::inertiallabs_msgs::msg::SensorData msg_;
};

class Init_SensorData_accel
{
public:
  explicit Init_SensorData_accel(::inertiallabs_msgs::msg::SensorData & msg)
  : msg_(msg)
  {}
  Init_SensorData_gyro accel(::inertiallabs_msgs::msg::SensorData::_accel_type arg)
  {
    msg_.accel = std::move(arg);
    return Init_SensorData_gyro(msg_);
  }

private:
  ::inertiallabs_msgs::msg::SensorData msg_;
};

class Init_SensorData_mag
{
public:
  explicit Init_SensorData_mag(::inertiallabs_msgs::msg::SensorData & msg)
  : msg_(msg)
  {}
  Init_SensorData_accel mag(::inertiallabs_msgs::msg::SensorData::_mag_type arg)
  {
    msg_.mag = std::move(arg);
    return Init_SensorData_accel(msg_);
  }

private:
  ::inertiallabs_msgs::msg::SensorData msg_;
};

class Init_SensorData_header
{
public:
  Init_SensorData_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SensorData_mag header(::inertiallabs_msgs::msg::SensorData::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_SensorData_mag(msg_);
  }

private:
  ::inertiallabs_msgs::msg::SensorData msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::inertiallabs_msgs::msg::SensorData>()
{
  return inertiallabs_msgs::msg::builder::Init_SensorData_header();
}

}  // namespace inertiallabs_msgs

#endif  // INERTIALLABS_MSGS__MSG__DETAIL__SENSOR_DATA__BUILDER_HPP_
