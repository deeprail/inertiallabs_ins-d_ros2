// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from inertiallabs_msgs:msg/MarineData.idl
// generated code does not contain a copyright notice

#ifndef INERTIALLABS_MSGS__MSG__DETAIL__MARINE_DATA__STRUCT_H_
#define INERTIALLABS_MSGS__MSG__DETAIL__MARINE_DATA__STRUCT_H_

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

/// Struct defined in msg/MarineData in the package inertiallabs_msgs.
typedef struct inertiallabs_msgs__msg__MarineData
{
  std_msgs__msg__Header header;
  double heave;
  double surge;
  double sway;
  float heave_velocity;
  float surge_velocity;
  float sway_velocity;
  float significant_wave_height;
} inertiallabs_msgs__msg__MarineData;

// Struct for a sequence of inertiallabs_msgs__msg__MarineData.
typedef struct inertiallabs_msgs__msg__MarineData__Sequence
{
  inertiallabs_msgs__msg__MarineData * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} inertiallabs_msgs__msg__MarineData__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // INERTIALLABS_MSGS__MSG__DETAIL__MARINE_DATA__STRUCT_H_
