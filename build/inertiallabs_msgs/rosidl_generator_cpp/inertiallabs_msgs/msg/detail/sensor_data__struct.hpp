// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from inertiallabs_msgs:msg/SensorData.idl
// generated code does not contain a copyright notice

#ifndef INERTIALLABS_MSGS__MSG__DETAIL__SENSOR_DATA__STRUCT_HPP_
#define INERTIALLABS_MSGS__MSG__DETAIL__SENSOR_DATA__STRUCT_HPP_

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
// Member 'mag'
// Member 'accel'
// Member 'gyro'
#include "geometry_msgs/msg/detail/vector3__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__inertiallabs_msgs__msg__SensorData __attribute__((deprecated))
#else
# define DEPRECATED__inertiallabs_msgs__msg__SensorData __declspec(deprecated)
#endif

namespace inertiallabs_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SensorData_
{
  using Type = SensorData_<ContainerAllocator>;

  explicit SensorData_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    mag(_init),
    accel(_init),
    gyro(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->temp = 0.0f;
      this->vinp = 0.0f;
      this->pressure = 0.0f;
      this->barometric_height = 0.0f;
    }
  }

  explicit SensorData_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    mag(_alloc, _init),
    accel(_alloc, _init),
    gyro(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->temp = 0.0f;
      this->vinp = 0.0f;
      this->pressure = 0.0f;
      this->barometric_height = 0.0f;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _mag_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _mag_type mag;
  using _accel_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _accel_type accel;
  using _gyro_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _gyro_type gyro;
  using _temp_type =
    float;
  _temp_type temp;
  using _vinp_type =
    float;
  _vinp_type vinp;
  using _pressure_type =
    float;
  _pressure_type pressure;
  using _barometric_height_type =
    float;
  _barometric_height_type barometric_height;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__mag(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->mag = _arg;
    return *this;
  }
  Type & set__accel(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->accel = _arg;
    return *this;
  }
  Type & set__gyro(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->gyro = _arg;
    return *this;
  }
  Type & set__temp(
    const float & _arg)
  {
    this->temp = _arg;
    return *this;
  }
  Type & set__vinp(
    const float & _arg)
  {
    this->vinp = _arg;
    return *this;
  }
  Type & set__pressure(
    const float & _arg)
  {
    this->pressure = _arg;
    return *this;
  }
  Type & set__barometric_height(
    const float & _arg)
  {
    this->barometric_height = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    inertiallabs_msgs::msg::SensorData_<ContainerAllocator> *;
  using ConstRawPtr =
    const inertiallabs_msgs::msg::SensorData_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<inertiallabs_msgs::msg::SensorData_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<inertiallabs_msgs::msg::SensorData_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      inertiallabs_msgs::msg::SensorData_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<inertiallabs_msgs::msg::SensorData_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      inertiallabs_msgs::msg::SensorData_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<inertiallabs_msgs::msg::SensorData_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<inertiallabs_msgs::msg::SensorData_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<inertiallabs_msgs::msg::SensorData_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__inertiallabs_msgs__msg__SensorData
    std::shared_ptr<inertiallabs_msgs::msg::SensorData_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__inertiallabs_msgs__msg__SensorData
    std::shared_ptr<inertiallabs_msgs::msg::SensorData_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SensorData_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->mag != other.mag) {
      return false;
    }
    if (this->accel != other.accel) {
      return false;
    }
    if (this->gyro != other.gyro) {
      return false;
    }
    if (this->temp != other.temp) {
      return false;
    }
    if (this->vinp != other.vinp) {
      return false;
    }
    if (this->pressure != other.pressure) {
      return false;
    }
    if (this->barometric_height != other.barometric_height) {
      return false;
    }
    return true;
  }
  bool operator!=(const SensorData_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SensorData_

// alias to use template instance with default allocator
using SensorData =
  inertiallabs_msgs::msg::SensorData_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace inertiallabs_msgs

#endif  // INERTIALLABS_MSGS__MSG__DETAIL__SENSOR_DATA__STRUCT_HPP_
