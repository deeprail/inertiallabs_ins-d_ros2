// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from inertiallabs_msgs:msg/GnssData.idl
// generated code does not contain a copyright notice

#ifndef INERTIALLABS_MSGS__MSG__DETAIL__GNSS_DATA__STRUCT_HPP_
#define INERTIALLABS_MSGS__MSG__DETAIL__GNSS_DATA__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"
// Member 'pos_std'
#include "geometry_msgs/msg/detail/vector3__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__inertiallabs_msgs__msg__GnssData __attribute__((deprecated))
#else
# define DEPRECATED__inertiallabs_msgs__msg__GnssData __declspec(deprecated)
#endif

namespace inertiallabs_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct GnssData_
{
  using Type = GnssData_<ContainerAllocator>;

  explicit GnssData_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    pos_std(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->gnss_info_1 = 0;
      this->gnss_info_2 = 0;
      this->number_sat = 0;
      this->gnss_velocity_latency = 0.0f;
      this->gnss_angles_position_type = 0;
      this->gnss_heading = 0.0f;
      this->gnss_pitch = 0.0f;
      this->gnss_gdop = 0.0f;
      this->gnss_pdop = 0.0f;
      this->gnss_hdop = 0.0f;
      this->gnss_vdop = 0.0f;
      this->gnss_tdop = 0.0f;
      this->new_gnss_flags = 0;
      this->diff_age = 0.0;
      this->heading_std = 0.0f;
      this->pitch_std = 0.0f;
    }
  }

  explicit GnssData_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    pos_std(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->gnss_info_1 = 0;
      this->gnss_info_2 = 0;
      this->number_sat = 0;
      this->gnss_velocity_latency = 0.0f;
      this->gnss_angles_position_type = 0;
      this->gnss_heading = 0.0f;
      this->gnss_pitch = 0.0f;
      this->gnss_gdop = 0.0f;
      this->gnss_pdop = 0.0f;
      this->gnss_hdop = 0.0f;
      this->gnss_vdop = 0.0f;
      this->gnss_tdop = 0.0f;
      this->new_gnss_flags = 0;
      this->diff_age = 0.0;
      this->heading_std = 0.0f;
      this->pitch_std = 0.0f;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _gnss_info_1_type =
    int8_t;
  _gnss_info_1_type gnss_info_1;
  using _gnss_info_2_type =
    int8_t;
  _gnss_info_2_type gnss_info_2;
  using _number_sat_type =
    int8_t;
  _number_sat_type number_sat;
  using _gnss_velocity_latency_type =
    float;
  _gnss_velocity_latency_type gnss_velocity_latency;
  using _gnss_angles_position_type_type =
    int8_t;
  _gnss_angles_position_type_type gnss_angles_position_type;
  using _gnss_heading_type =
    float;
  _gnss_heading_type gnss_heading;
  using _gnss_pitch_type =
    float;
  _gnss_pitch_type gnss_pitch;
  using _gnss_gdop_type =
    float;
  _gnss_gdop_type gnss_gdop;
  using _gnss_pdop_type =
    float;
  _gnss_pdop_type gnss_pdop;
  using _gnss_hdop_type =
    float;
  _gnss_hdop_type gnss_hdop;
  using _gnss_vdop_type =
    float;
  _gnss_vdop_type gnss_vdop;
  using _gnss_tdop_type =
    float;
  _gnss_tdop_type gnss_tdop;
  using _new_gnss_flags_type =
    uint8_t;
  _new_gnss_flags_type new_gnss_flags;
  using _diff_age_type =
    double;
  _diff_age_type diff_age;
  using _pos_std_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _pos_std_type pos_std;
  using _heading_std_type =
    float;
  _heading_std_type heading_std;
  using _pitch_std_type =
    float;
  _pitch_std_type pitch_std;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__gnss_info_1(
    const int8_t & _arg)
  {
    this->gnss_info_1 = _arg;
    return *this;
  }
  Type & set__gnss_info_2(
    const int8_t & _arg)
  {
    this->gnss_info_2 = _arg;
    return *this;
  }
  Type & set__number_sat(
    const int8_t & _arg)
  {
    this->number_sat = _arg;
    return *this;
  }
  Type & set__gnss_velocity_latency(
    const float & _arg)
  {
    this->gnss_velocity_latency = _arg;
    return *this;
  }
  Type & set__gnss_angles_position_type(
    const int8_t & _arg)
  {
    this->gnss_angles_position_type = _arg;
    return *this;
  }
  Type & set__gnss_heading(
    const float & _arg)
  {
    this->gnss_heading = _arg;
    return *this;
  }
  Type & set__gnss_pitch(
    const float & _arg)
  {
    this->gnss_pitch = _arg;
    return *this;
  }
  Type & set__gnss_gdop(
    const float & _arg)
  {
    this->gnss_gdop = _arg;
    return *this;
  }
  Type & set__gnss_pdop(
    const float & _arg)
  {
    this->gnss_pdop = _arg;
    return *this;
  }
  Type & set__gnss_hdop(
    const float & _arg)
  {
    this->gnss_hdop = _arg;
    return *this;
  }
  Type & set__gnss_vdop(
    const float & _arg)
  {
    this->gnss_vdop = _arg;
    return *this;
  }
  Type & set__gnss_tdop(
    const float & _arg)
  {
    this->gnss_tdop = _arg;
    return *this;
  }
  Type & set__new_gnss_flags(
    const uint8_t & _arg)
  {
    this->new_gnss_flags = _arg;
    return *this;
  }
  Type & set__diff_age(
    const double & _arg)
  {
    this->diff_age = _arg;
    return *this;
  }
  Type & set__pos_std(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->pos_std = _arg;
    return *this;
  }
  Type & set__heading_std(
    const float & _arg)
  {
    this->heading_std = _arg;
    return *this;
  }
  Type & set__pitch_std(
    const float & _arg)
  {
    this->pitch_std = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    inertiallabs_msgs::msg::GnssData_<ContainerAllocator> *;
  using ConstRawPtr =
    const inertiallabs_msgs::msg::GnssData_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<inertiallabs_msgs::msg::GnssData_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<inertiallabs_msgs::msg::GnssData_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      inertiallabs_msgs::msg::GnssData_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<inertiallabs_msgs::msg::GnssData_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      inertiallabs_msgs::msg::GnssData_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<inertiallabs_msgs::msg::GnssData_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<inertiallabs_msgs::msg::GnssData_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<inertiallabs_msgs::msg::GnssData_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__inertiallabs_msgs__msg__GnssData
    std::shared_ptr<inertiallabs_msgs::msg::GnssData_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__inertiallabs_msgs__msg__GnssData
    std::shared_ptr<inertiallabs_msgs::msg::GnssData_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GnssData_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->gnss_info_1 != other.gnss_info_1) {
      return false;
    }
    if (this->gnss_info_2 != other.gnss_info_2) {
      return false;
    }
    if (this->number_sat != other.number_sat) {
      return false;
    }
    if (this->gnss_velocity_latency != other.gnss_velocity_latency) {
      return false;
    }
    if (this->gnss_angles_position_type != other.gnss_angles_position_type) {
      return false;
    }
    if (this->gnss_heading != other.gnss_heading) {
      return false;
    }
    if (this->gnss_pitch != other.gnss_pitch) {
      return false;
    }
    if (this->gnss_gdop != other.gnss_gdop) {
      return false;
    }
    if (this->gnss_pdop != other.gnss_pdop) {
      return false;
    }
    if (this->gnss_hdop != other.gnss_hdop) {
      return false;
    }
    if (this->gnss_vdop != other.gnss_vdop) {
      return false;
    }
    if (this->gnss_tdop != other.gnss_tdop) {
      return false;
    }
    if (this->new_gnss_flags != other.new_gnss_flags) {
      return false;
    }
    if (this->diff_age != other.diff_age) {
      return false;
    }
    if (this->pos_std != other.pos_std) {
      return false;
    }
    if (this->heading_std != other.heading_std) {
      return false;
    }
    if (this->pitch_std != other.pitch_std) {
      return false;
    }
    return true;
  }
  bool operator!=(const GnssData_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GnssData_

// alias to use template instance with default allocator
using GnssData =
  inertiallabs_msgs::msg::GnssData_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace inertiallabs_msgs

#endif  // INERTIALLABS_MSGS__MSG__DETAIL__GNSS_DATA__STRUCT_HPP_
