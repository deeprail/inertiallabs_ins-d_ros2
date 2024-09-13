// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from inertiallabs_msgs:msg/GpsData.idl
// generated code does not contain a copyright notice

#ifndef INERTIALLABS_MSGS__MSG__DETAIL__GPS_DATA__STRUCT_H_
#define INERTIALLABS_MSGS__MSG__DETAIL__GPS_DATA__STRUCT_H_

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
// Member 'llh'
#include "geometry_msgs/msg/detail/vector3__struct.h"

/// Struct defined in msg/GpsData in the package inertiallabs_msgs.
typedef struct inertiallabs_msgs__msg__GpsData
{
  std_msgs__msg__Header header;
  geometry_msgs__msg__Vector3 llh;
  float horspeed;
  float speeddir;
  float verspeed;
} inertiallabs_msgs__msg__GpsData;

// Struct for a sequence of inertiallabs_msgs__msg__GpsData.
typedef struct inertiallabs_msgs__msg__GpsData__Sequence
{
  inertiallabs_msgs__msg__GpsData * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} inertiallabs_msgs__msg__GpsData__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // INERTIALLABS_MSGS__MSG__DETAIL__GPS_DATA__STRUCT_H_
