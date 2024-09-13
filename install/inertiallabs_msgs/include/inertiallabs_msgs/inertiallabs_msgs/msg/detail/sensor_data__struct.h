// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from inertiallabs_msgs:msg/SensorData.idl
// generated code does not contain a copyright notice

#ifndef INERTIALLABS_MSGS__MSG__DETAIL__SENSOR_DATA__STRUCT_H_
#define INERTIALLABS_MSGS__MSG__DETAIL__SENSOR_DATA__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'mag'
// Member 'accel'
// Member 'gyro'
#include "geometry_msgs/msg/detail/vector3__struct.h"

/// Struct defined in msg/SensorData in the package inertiallabs_msgs.
typedef struct inertiallabs_msgs__msg__SensorData
{
  std_msgs__msg__Header header;
  geometry_msgs__msg__Vector3 mag;
  geometry_msgs__msg__Vector3 accel;
  geometry_msgs__msg__Vector3 gyro;
  float temp;
  float vinp;
  float pressure;
  float barometric_height;
} inertiallabs_msgs__msg__SensorData;

// Struct for a sequence of inertiallabs_msgs__msg__SensorData.
typedef struct inertiallabs_msgs__msg__SensorData__Sequence
{
  inertiallabs_msgs__msg__SensorData * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} inertiallabs_msgs__msg__SensorData__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // INERTIALLABS_MSGS__MSG__DETAIL__SENSOR_DATA__STRUCT_H_
