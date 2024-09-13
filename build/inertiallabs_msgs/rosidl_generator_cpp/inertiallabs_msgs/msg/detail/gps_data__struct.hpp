// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from inertiallabs_msgs:msg/GpsData.idl
// generated code does not contain a copyright notice

#ifndef INERTIALLABS_MSGS__MSG__DETAIL__GPS_DATA__STRUCT_HPP_
#define INERTIALLABS_MSGS__MSG__DETAIL__GPS_DATA__STRUCT_HPP_

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
// Member 'llh'
#include "geometry_msgs/msg/detail/vector3__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__inertiallabs_msgs__msg__GpsData __attribute__((deprecated))
#else
# define DEPRECATED__inertiallabs_msgs__msg__GpsData __declspec(deprecated)
#endif

namespace inertiallabs_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct GpsData_
{
  using Type = GpsData_<ContainerAllocator>;

  explicit GpsData_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    llh(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->horspeed = 0.0f;
      this->speeddir = 0.0f;
      this->verspeed = 0.0f;
    }
  }

  explicit GpsData_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    llh(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->horspeed = 0.0f;
      this->speeddir = 0.0f;
      this->verspeed = 0.0f;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _llh_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _llh_type llh;
  using _horspeed_type =
    float;
  _horspeed_type horspeed;
  using _speeddir_type =
    float;
  _speeddir_type speeddir;
  using _verspeed_type =
    float;
  _verspeed_type verspeed;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__llh(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->llh = _arg;
    return *this;
  }
  Type & set__horspeed(
    const float & _arg)
  {
    this->horspeed = _arg;
    return *this;
  }
  Type & set__speeddir(
    const float & _arg)
  {
    this->speeddir = _arg;
    return *this;
  }
  Type & set__verspeed(
    const float & _arg)
  {
    this->verspeed = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    inertiallabs_msgs::msg::GpsData_<ContainerAllocator> *;
  using ConstRawPtr =
    const inertiallabs_msgs::msg::GpsData_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<inertiallabs_msgs::msg::GpsData_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<inertiallabs_msgs::msg::GpsData_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      inertiallabs_msgs::msg::GpsData_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<inertiallabs_msgs::msg::GpsData_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      inertiallabs_msgs::msg::GpsData_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<inertiallabs_msgs::msg::GpsData_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<inertiallabs_msgs::msg::GpsData_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<inertiallabs_msgs::msg::GpsData_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__inertiallabs_msgs__msg__GpsData
    std::shared_ptr<inertiallabs_msgs::msg::GpsData_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__inertiallabs_msgs__msg__GpsData
    std::shared_ptr<inertiallabs_msgs::msg::GpsData_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GpsData_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->llh != other.llh) {
      return false;
    }
    if (this->horspeed != other.horspeed) {
      return false;
    }
    if (this->speeddir != other.speeddir) {
      return false;
    }
    if (this->verspeed != other.verspeed) {
      return false;
    }
    return true;
  }
  bool operator!=(const GpsData_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GpsData_

// alias to use template instance with default allocator
using GpsData =
  inertiallabs_msgs::msg::GpsData_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace inertiallabs_msgs

#endif  // INERTIALLABS_MSGS__MSG__DETAIL__GPS_DATA__STRUCT_HPP_
