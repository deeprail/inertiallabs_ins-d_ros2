// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from inertiallabs_msgs:msg/GnssData.idl
// generated code does not contain a copyright notice

#ifndef INERTIALLABS_MSGS__MSG__DETAIL__GNSS_DATA__BUILDER_HPP_
#define INERTIALLABS_MSGS__MSG__DETAIL__GNSS_DATA__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "inertiallabs_msgs/msg/detail/gnss_data__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace inertiallabs_msgs
{

namespace msg
{

namespace builder
{

class Init_GnssData_pitch_std
{
public:
  explicit Init_GnssData_pitch_std(::inertiallabs_msgs::msg::GnssData & msg)
  : msg_(msg)
  {}
  ::inertiallabs_msgs::msg::GnssData pitch_std(::inertiallabs_msgs::msg::GnssData::_pitch_std_type arg)
  {
    msg_.pitch_std = std::move(arg);
    return std::move(msg_);
  }

private:
  ::inertiallabs_msgs::msg::GnssData msg_;
};

class Init_GnssData_heading_std
{
public:
  explicit Init_GnssData_heading_std(::inertiallabs_msgs::msg::GnssData & msg)
  : msg_(msg)
  {}
  Init_GnssData_pitch_std heading_std(::inertiallabs_msgs::msg::GnssData::_heading_std_type arg)
  {
    msg_.heading_std = std::move(arg);
    return Init_GnssData_pitch_std(msg_);
  }

private:
  ::inertiallabs_msgs::msg::GnssData msg_;
};

class Init_GnssData_pos_std
{
public:
  explicit Init_GnssData_pos_std(::inertiallabs_msgs::msg::GnssData & msg)
  : msg_(msg)
  {}
  Init_GnssData_heading_std pos_std(::inertiallabs_msgs::msg::GnssData::_pos_std_type arg)
  {
    msg_.pos_std = std::move(arg);
    return Init_GnssData_heading_std(msg_);
  }

private:
  ::inertiallabs_msgs::msg::GnssData msg_;
};

class Init_GnssData_diff_age
{
public:
  explicit Init_GnssData_diff_age(::inertiallabs_msgs::msg::GnssData & msg)
  : msg_(msg)
  {}
  Init_GnssData_pos_std diff_age(::inertiallabs_msgs::msg::GnssData::_diff_age_type arg)
  {
    msg_.diff_age = std::move(arg);
    return Init_GnssData_pos_std(msg_);
  }

private:
  ::inertiallabs_msgs::msg::GnssData msg_;
};

class Init_GnssData_new_gnss_flags
{
public:
  explicit Init_GnssData_new_gnss_flags(::inertiallabs_msgs::msg::GnssData & msg)
  : msg_(msg)
  {}
  Init_GnssData_diff_age new_gnss_flags(::inertiallabs_msgs::msg::GnssData::_new_gnss_flags_type arg)
  {
    msg_.new_gnss_flags = std::move(arg);
    return Init_GnssData_diff_age(msg_);
  }

private:
  ::inertiallabs_msgs::msg::GnssData msg_;
};

class Init_GnssData_gnss_tdop
{
public:
  explicit Init_GnssData_gnss_tdop(::inertiallabs_msgs::msg::GnssData & msg)
  : msg_(msg)
  {}
  Init_GnssData_new_gnss_flags gnss_tdop(::inertiallabs_msgs::msg::GnssData::_gnss_tdop_type arg)
  {
    msg_.gnss_tdop = std::move(arg);
    return Init_GnssData_new_gnss_flags(msg_);
  }

private:
  ::inertiallabs_msgs::msg::GnssData msg_;
};

class Init_GnssData_gnss_vdop
{
public:
  explicit Init_GnssData_gnss_vdop(::inertiallabs_msgs::msg::GnssData & msg)
  : msg_(msg)
  {}
  Init_GnssData_gnss_tdop gnss_vdop(::inertiallabs_msgs::msg::GnssData::_gnss_vdop_type arg)
  {
    msg_.gnss_vdop = std::move(arg);
    return Init_GnssData_gnss_tdop(msg_);
  }

private:
  ::inertiallabs_msgs::msg::GnssData msg_;
};

class Init_GnssData_gnss_hdop
{
public:
  explicit Init_GnssData_gnss_hdop(::inertiallabs_msgs::msg::GnssData & msg)
  : msg_(msg)
  {}
  Init_GnssData_gnss_vdop gnss_hdop(::inertiallabs_msgs::msg::GnssData::_gnss_hdop_type arg)
  {
    msg_.gnss_hdop = std::move(arg);
    return Init_GnssData_gnss_vdop(msg_);
  }

private:
  ::inertiallabs_msgs::msg::GnssData msg_;
};

class Init_GnssData_gnss_pdop
{
public:
  explicit Init_GnssData_gnss_pdop(::inertiallabs_msgs::msg::GnssData & msg)
  : msg_(msg)
  {}
  Init_GnssData_gnss_hdop gnss_pdop(::inertiallabs_msgs::msg::GnssData::_gnss_pdop_type arg)
  {
    msg_.gnss_pdop = std::move(arg);
    return Init_GnssData_gnss_hdop(msg_);
  }

private:
  ::inertiallabs_msgs::msg::GnssData msg_;
};

class Init_GnssData_gnss_gdop
{
public:
  explicit Init_GnssData_gnss_gdop(::inertiallabs_msgs::msg::GnssData & msg)
  : msg_(msg)
  {}
  Init_GnssData_gnss_pdop gnss_gdop(::inertiallabs_msgs::msg::GnssData::_gnss_gdop_type arg)
  {
    msg_.gnss_gdop = std::move(arg);
    return Init_GnssData_gnss_pdop(msg_);
  }

private:
  ::inertiallabs_msgs::msg::GnssData msg_;
};

class Init_GnssData_gnss_pitch
{
public:
  explicit Init_GnssData_gnss_pitch(::inertiallabs_msgs::msg::GnssData & msg)
  : msg_(msg)
  {}
  Init_GnssData_gnss_gdop gnss_pitch(::inertiallabs_msgs::msg::GnssData::_gnss_pitch_type arg)
  {
    msg_.gnss_pitch = std::move(arg);
    return Init_GnssData_gnss_gdop(msg_);
  }

private:
  ::inertiallabs_msgs::msg::GnssData msg_;
};

class Init_GnssData_gnss_heading
{
public:
  explicit Init_GnssData_gnss_heading(::inertiallabs_msgs::msg::GnssData & msg)
  : msg_(msg)
  {}
  Init_GnssData_gnss_pitch gnss_heading(::inertiallabs_msgs::msg::GnssData::_gnss_heading_type arg)
  {
    msg_.gnss_heading = std::move(arg);
    return Init_GnssData_gnss_pitch(msg_);
  }

private:
  ::inertiallabs_msgs::msg::GnssData msg_;
};

class Init_GnssData_gnss_angles_position_type
{
public:
  explicit Init_GnssData_gnss_angles_position_type(::inertiallabs_msgs::msg::GnssData & msg)
  : msg_(msg)
  {}
  Init_GnssData_gnss_heading gnss_angles_position_type(::inertiallabs_msgs::msg::GnssData::_gnss_angles_position_type_type arg)
  {
    msg_.gnss_angles_position_type = std::move(arg);
    return Init_GnssData_gnss_heading(msg_);
  }

private:
  ::inertiallabs_msgs::msg::GnssData msg_;
};

class Init_GnssData_gnss_velocity_latency
{
public:
  explicit Init_GnssData_gnss_velocity_latency(::inertiallabs_msgs::msg::GnssData & msg)
  : msg_(msg)
  {}
  Init_GnssData_gnss_angles_position_type gnss_velocity_latency(::inertiallabs_msgs::msg::GnssData::_gnss_velocity_latency_type arg)
  {
    msg_.gnss_velocity_latency = std::move(arg);
    return Init_GnssData_gnss_angles_position_type(msg_);
  }

private:
  ::inertiallabs_msgs::msg::GnssData msg_;
};

class Init_GnssData_number_sat
{
public:
  explicit Init_GnssData_number_sat(::inertiallabs_msgs::msg::GnssData & msg)
  : msg_(msg)
  {}
  Init_GnssData_gnss_velocity_latency number_sat(::inertiallabs_msgs::msg::GnssData::_number_sat_type arg)
  {
    msg_.number_sat = std::move(arg);
    return Init_GnssData_gnss_velocity_latency(msg_);
  }

private:
  ::inertiallabs_msgs::msg::GnssData msg_;
};

class Init_GnssData_gnss_info_2
{
public:
  explicit Init_GnssData_gnss_info_2(::inertiallabs_msgs::msg::GnssData & msg)
  : msg_(msg)
  {}
  Init_GnssData_number_sat gnss_info_2(::inertiallabs_msgs::msg::GnssData::_gnss_info_2_type arg)
  {
    msg_.gnss_info_2 = std::move(arg);
    return Init_GnssData_number_sat(msg_);
  }

private:
  ::inertiallabs_msgs::msg::GnssData msg_;
};

class Init_GnssData_gnss_info_1
{
public:
  explicit Init_GnssData_gnss_info_1(::inertiallabs_msgs::msg::GnssData & msg)
  : msg_(msg)
  {}
  Init_GnssData_gnss_info_2 gnss_info_1(::inertiallabs_msgs::msg::GnssData::_gnss_info_1_type arg)
  {
    msg_.gnss_info_1 = std::move(arg);
    return Init_GnssData_gnss_info_2(msg_);
  }

private:
  ::inertiallabs_msgs::msg::GnssData msg_;
};

class Init_GnssData_header
{
public:
  Init_GnssData_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GnssData_gnss_info_1 header(::inertiallabs_msgs::msg::GnssData::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_GnssData_gnss_info_1(msg_);
  }

private:
  ::inertiallabs_msgs::msg::GnssData msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::inertiallabs_msgs::msg::GnssData>()
{
  return inertiallabs_msgs::msg::builder::Init_GnssData_header();
}

}  // namespace inertiallabs_msgs

#endif  // INERTIALLABS_MSGS__MSG__DETAIL__GNSS_DATA__BUILDER_HPP_
