// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from inertiallabs_msgs:msg/InsData.idl
// generated code does not contain a copyright notice

#ifndef INERTIALLABS_MSGS__MSG__DETAIL__INS_DATA__BUILDER_HPP_
#define INERTIALLABS_MSGS__MSG__DETAIL__INS_DATA__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "inertiallabs_msgs/msg/detail/ins_data__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace inertiallabs_msgs
{

namespace msg
{

namespace builder
{

class Init_InsData_usw
{
public:
  explicit Init_InsData_usw(::inertiallabs_msgs::msg::InsData & msg)
  : msg_(msg)
  {}
  ::inertiallabs_msgs::msg::InsData usw(::inertiallabs_msgs::msg::InsData::_usw_type arg)
  {
    msg_.usw = std::move(arg);
    return std::move(msg_);
  }

private:
  ::inertiallabs_msgs::msg::InsData msg_;
};

class Init_InsData_heading_std
{
public:
  explicit Init_InsData_heading_std(::inertiallabs_msgs::msg::InsData & msg)
  : msg_(msg)
  {}
  Init_InsData_usw heading_std(::inertiallabs_msgs::msg::InsData::_heading_std_type arg)
  {
    msg_.heading_std = std::move(arg);
    return Init_InsData_usw(msg_);
  }

private:
  ::inertiallabs_msgs::msg::InsData msg_;
};

class Init_InsData_pos_std
{
public:
  explicit Init_InsData_pos_std(::inertiallabs_msgs::msg::InsData & msg)
  : msg_(msg)
  {}
  Init_InsData_heading_std pos_std(::inertiallabs_msgs::msg::InsData::_pos_std_type arg)
  {
    msg_.pos_std = std::move(arg);
    return Init_InsData_heading_std(msg_);
  }

private:
  ::inertiallabs_msgs::msg::InsData msg_;
};

class Init_InsData_solution_status
{
public:
  explicit Init_InsData_solution_status(::inertiallabs_msgs::msg::InsData & msg)
  : msg_(msg)
  {}
  Init_InsData_pos_std solution_status(::inertiallabs_msgs::msg::InsData::_solution_status_type arg)
  {
    msg_.solution_status = std::move(arg);
    return Init_InsData_pos_std(msg_);
  }

private:
  ::inertiallabs_msgs::msg::InsData msg_;
};

class Init_InsData_vel_enu
{
public:
  explicit Init_InsData_vel_enu(::inertiallabs_msgs::msg::InsData & msg)
  : msg_(msg)
  {}
  Init_InsData_solution_status vel_enu(::inertiallabs_msgs::msg::InsData::_vel_enu_type arg)
  {
    msg_.vel_enu = std::move(arg);
    return Init_InsData_solution_status(msg_);
  }

private:
  ::inertiallabs_msgs::msg::InsData msg_;
};

class Init_InsData_oriquat
{
public:
  explicit Init_InsData_oriquat(::inertiallabs_msgs::msg::InsData & msg)
  : msg_(msg)
  {}
  Init_InsData_vel_enu oriquat(::inertiallabs_msgs::msg::InsData::_oriquat_type arg)
  {
    msg_.oriquat = std::move(arg);
    return Init_InsData_vel_enu(msg_);
  }

private:
  ::inertiallabs_msgs::msg::InsData msg_;
};

class Init_InsData_ypr
{
public:
  explicit Init_InsData_ypr(::inertiallabs_msgs::msg::InsData & msg)
  : msg_(msg)
  {}
  Init_InsData_oriquat ypr(::inertiallabs_msgs::msg::InsData::_ypr_type arg)
  {
    msg_.ypr = std::move(arg);
    return Init_InsData_oriquat(msg_);
  }

private:
  ::inertiallabs_msgs::msg::InsData msg_;
};

class Init_InsData_llh
{
public:
  explicit Init_InsData_llh(::inertiallabs_msgs::msg::InsData & msg)
  : msg_(msg)
  {}
  Init_InsData_ypr llh(::inertiallabs_msgs::msg::InsData::_llh_type arg)
  {
    msg_.llh = std::move(arg);
    return Init_InsData_ypr(msg_);
  }

private:
  ::inertiallabs_msgs::msg::InsData msg_;
};

class Init_InsData_gps_msow
{
public:
  explicit Init_InsData_gps_msow(::inertiallabs_msgs::msg::InsData & msg)
  : msg_(msg)
  {}
  Init_InsData_llh gps_msow(::inertiallabs_msgs::msg::InsData::_gps_msow_type arg)
  {
    msg_.gps_msow = std::move(arg);
    return Init_InsData_llh(msg_);
  }

private:
  ::inertiallabs_msgs::msg::InsData msg_;
};

class Init_InsData_gps_imu_time
{
public:
  explicit Init_InsData_gps_imu_time(::inertiallabs_msgs::msg::InsData & msg)
  : msg_(msg)
  {}
  Init_InsData_gps_msow gps_imu_time(::inertiallabs_msgs::msg::InsData::_gps_imu_time_type arg)
  {
    msg_.gps_imu_time = std::move(arg);
    return Init_InsData_gps_msow(msg_);
  }

private:
  ::inertiallabs_msgs::msg::InsData msg_;
};

class Init_InsData_gps_ins_time
{
public:
  explicit Init_InsData_gps_ins_time(::inertiallabs_msgs::msg::InsData & msg)
  : msg_(msg)
  {}
  Init_InsData_gps_imu_time gps_ins_time(::inertiallabs_msgs::msg::InsData::_gps_ins_time_type arg)
  {
    msg_.gps_ins_time = std::move(arg);
    return Init_InsData_gps_imu_time(msg_);
  }

private:
  ::inertiallabs_msgs::msg::InsData msg_;
};

class Init_InsData_header
{
public:
  Init_InsData_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_InsData_gps_ins_time header(::inertiallabs_msgs::msg::InsData::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_InsData_gps_ins_time(msg_);
  }

private:
  ::inertiallabs_msgs::msg::InsData msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::inertiallabs_msgs::msg::InsData>()
{
  return inertiallabs_msgs::msg::builder::Init_InsData_header();
}

}  // namespace inertiallabs_msgs

#endif  // INERTIALLABS_MSGS__MSG__DETAIL__INS_DATA__BUILDER_HPP_
