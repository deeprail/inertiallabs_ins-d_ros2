// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from inertiallabs_msgs:msg/MarineData.idl
// generated code does not contain a copyright notice

#ifndef INERTIALLABS_MSGS__MSG__DETAIL__MARINE_DATA__STRUCT_HPP_
#define INERTIALLABS_MSGS__MSG__DETAIL__MARINE_DATA__STRUCT_HPP_

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

#ifndef _WIN32
# define DEPRECATED__inertiallabs_msgs__msg__MarineData __attribute__((deprecated))
#else
# define DEPRECATED__inertiallabs_msgs__msg__MarineData __declspec(deprecated)
#endif

namespace inertiallabs_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct MarineData_
{
  using Type = MarineData_<ContainerAllocator>;

  explicit MarineData_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->heave = 0.0;
      this->surge = 0.0;
      this->sway = 0.0;
      this->heave_velocity = 0.0f;
      this->surge_velocity = 0.0f;
      this->sway_velocity = 0.0f;
      this->significant_wave_height = 0.0f;
    }
  }

  explicit MarineData_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->heave = 0.0;
      this->surge = 0.0;
      this->sway = 0.0;
      this->heave_velocity = 0.0f;
      this->surge_velocity = 0.0f;
      this->sway_velocity = 0.0f;
      this->significant_wave_height = 0.0f;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _heave_type =
    double;
  _heave_type heave;
  using _surge_type =
    double;
  _surge_type surge;
  using _sway_type =
    double;
  _sway_type sway;
  using _heave_velocity_type =
    float;
  _heave_velocity_type heave_velocity;
  using _surge_velocity_type =
    float;
  _surge_velocity_type surge_velocity;
  using _sway_velocity_type =
    float;
  _sway_velocity_type sway_velocity;
  using _significant_wave_height_type =
    float;
  _significant_wave_height_type significant_wave_height;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__heave(
    const double & _arg)
  {
    this->heave = _arg;
    return *this;
  }
  Type & set__surge(
    const double & _arg)
  {
    this->surge = _arg;
    return *this;
  }
  Type & set__sway(
    const double & _arg)
  {
    this->sway = _arg;
    return *this;
  }
  Type & set__heave_velocity(
    const float & _arg)
  {
    this->heave_velocity = _arg;
    return *this;
  }
  Type & set__surge_velocity(
    const float & _arg)
  {
    this->surge_velocity = _arg;
    return *this;
  }
  Type & set__sway_velocity(
    const float & _arg)
  {
    this->sway_velocity = _arg;
    return *this;
  }
  Type & set__significant_wave_height(
    const float & _arg)
  {
    this->significant_wave_height = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    inertiallabs_msgs::msg::MarineData_<ContainerAllocator> *;
  using ConstRawPtr =
    const inertiallabs_msgs::msg::MarineData_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<inertiallabs_msgs::msg::MarineData_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<inertiallabs_msgs::msg::MarineData_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      inertiallabs_msgs::msg::MarineData_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<inertiallabs_msgs::msg::MarineData_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      inertiallabs_msgs::msg::MarineData_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<inertiallabs_msgs::msg::MarineData_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<inertiallabs_msgs::msg::MarineData_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<inertiallabs_msgs::msg::MarineData_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__inertiallabs_msgs__msg__MarineData
    std::shared_ptr<inertiallabs_msgs::msg::MarineData_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__inertiallabs_msgs__msg__MarineData
    std::shared_ptr<inertiallabs_msgs::msg::MarineData_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MarineData_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->heave != other.heave) {
      return false;
    }
    if (this->surge != other.surge) {
      return false;
    }
    if (this->sway != other.sway) {
      return false;
    }
    if (this->heave_velocity != other.heave_velocity) {
      return false;
    }
    if (this->surge_velocity != other.surge_velocity) {
      return false;
    }
    if (this->sway_velocity != other.sway_velocity) {
      return false;
    }
    if (this->significant_wave_height != other.significant_wave_height) {
      return false;
    }
    return true;
  }
  bool operator!=(const MarineData_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MarineData_

// alias to use template instance with default allocator
using MarineData =
  inertiallabs_msgs::msg::MarineData_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace inertiallabs_msgs

#endif  // INERTIALLABS_MSGS__MSG__DETAIL__MARINE_DATA__STRUCT_HPP_
