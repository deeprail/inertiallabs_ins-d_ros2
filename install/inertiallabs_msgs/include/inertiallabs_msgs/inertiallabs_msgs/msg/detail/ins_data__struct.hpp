// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from inertiallabs_msgs:msg/InsData.idl
// generated code does not contain a copyright notice

#ifndef INERTIALLABS_MSGS__MSG__DETAIL__INS_DATA__STRUCT_HPP_
#define INERTIALLABS_MSGS__MSG__DETAIL__INS_DATA__STRUCT_HPP_

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
// Member 'gps_msow'
#include "std_msgs/msg/detail/u_int32__struct.hpp"
// Member 'llh'
// Member 'ypr'
// Member 'vel_enu'
// Member 'pos_std'
#include "geometry_msgs/msg/detail/vector3__struct.hpp"
// Member 'oriquat'
#include "geometry_msgs/msg/detail/quaternion__struct.hpp"
// Member 'solution_status'
#include "std_msgs/msg/detail/int8__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__inertiallabs_msgs__msg__InsData __attribute__((deprecated))
#else
# define DEPRECATED__inertiallabs_msgs__msg__InsData __declspec(deprecated)
#endif

namespace inertiallabs_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct InsData_
{
  using Type = InsData_<ContainerAllocator>;

  explicit InsData_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    gps_msow(_init),
    llh(_init),
    ypr(_init),
    oriquat(_init),
    vel_enu(_init),
    solution_status(_init),
    pos_std(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->gps_ins_time = 0.0;
      this->gps_imu_time = 0.0;
      this->heading_std = 0.0f;
      this->usw = 0;
    }
  }

  explicit InsData_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    gps_msow(_alloc, _init),
    llh(_alloc, _init),
    ypr(_alloc, _init),
    oriquat(_alloc, _init),
    vel_enu(_alloc, _init),
    solution_status(_alloc, _init),
    pos_std(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->gps_ins_time = 0.0;
      this->gps_imu_time = 0.0;
      this->heading_std = 0.0f;
      this->usw = 0;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _gps_ins_time_type =
    double;
  _gps_ins_time_type gps_ins_time;
  using _gps_imu_time_type =
    double;
  _gps_imu_time_type gps_imu_time;
  using _gps_msow_type =
    std_msgs::msg::UInt32_<ContainerAllocator>;
  _gps_msow_type gps_msow;
  using _llh_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _llh_type llh;
  using _ypr_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _ypr_type ypr;
  using _oriquat_type =
    geometry_msgs::msg::Quaternion_<ContainerAllocator>;
  _oriquat_type oriquat;
  using _vel_enu_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _vel_enu_type vel_enu;
  using _solution_status_type =
    std_msgs::msg::Int8_<ContainerAllocator>;
  _solution_status_type solution_status;
  using _pos_std_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _pos_std_type pos_std;
  using _heading_std_type =
    float;
  _heading_std_type heading_std;
  using _usw_type =
    uint16_t;
  _usw_type usw;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__gps_ins_time(
    const double & _arg)
  {
    this->gps_ins_time = _arg;
    return *this;
  }
  Type & set__gps_imu_time(
    const double & _arg)
  {
    this->gps_imu_time = _arg;
    return *this;
  }
  Type & set__gps_msow(
    const std_msgs::msg::UInt32_<ContainerAllocator> & _arg)
  {
    this->gps_msow = _arg;
    return *this;
  }
  Type & set__llh(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->llh = _arg;
    return *this;
  }
  Type & set__ypr(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->ypr = _arg;
    return *this;
  }
  Type & set__oriquat(
    const geometry_msgs::msg::Quaternion_<ContainerAllocator> & _arg)
  {
    this->oriquat = _arg;
    return *this;
  }
  Type & set__vel_enu(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->vel_enu = _arg;
    return *this;
  }
  Type & set__solution_status(
    const std_msgs::msg::Int8_<ContainerAllocator> & _arg)
  {
    this->solution_status = _arg;
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
  Type & set__usw(
    const uint16_t & _arg)
  {
    this->usw = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    inertiallabs_msgs::msg::InsData_<ContainerAllocator> *;
  using ConstRawPtr =
    const inertiallabs_msgs::msg::InsData_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<inertiallabs_msgs::msg::InsData_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<inertiallabs_msgs::msg::InsData_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      inertiallabs_msgs::msg::InsData_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<inertiallabs_msgs::msg::InsData_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      inertiallabs_msgs::msg::InsData_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<inertiallabs_msgs::msg::InsData_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<inertiallabs_msgs::msg::InsData_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<inertiallabs_msgs::msg::InsData_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__inertiallabs_msgs__msg__InsData
    std::shared_ptr<inertiallabs_msgs::msg::InsData_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__inertiallabs_msgs__msg__InsData
    std::shared_ptr<inertiallabs_msgs::msg::InsData_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const InsData_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->gps_ins_time != other.gps_ins_time) {
      return false;
    }
    if (this->gps_imu_time != other.gps_imu_time) {
      return false;
    }
    if (this->gps_msow != other.gps_msow) {
      return false;
    }
    if (this->llh != other.llh) {
      return false;
    }
    if (this->ypr != other.ypr) {
      return false;
    }
    if (this->oriquat != other.oriquat) {
      return false;
    }
    if (this->vel_enu != other.vel_enu) {
      return false;
    }
    if (this->solution_status != other.solution_status) {
      return false;
    }
    if (this->pos_std != other.pos_std) {
      return false;
    }
    if (this->heading_std != other.heading_std) {
      return false;
    }
    if (this->usw != other.usw) {
      return false;
    }
    return true;
  }
  bool operator!=(const InsData_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct InsData_

// alias to use template instance with default allocator
using InsData =
  inertiallabs_msgs::msg::InsData_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace inertiallabs_msgs

#endif  // INERTIALLABS_MSGS__MSG__DETAIL__INS_DATA__STRUCT_HPP_
