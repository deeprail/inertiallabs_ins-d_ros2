// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from inertiallabs_msgs:msg/InsData.idl
// generated code does not contain a copyright notice

#ifndef INERTIALLABS_MSGS__MSG__DETAIL__INS_DATA__STRUCT_H_
#define INERTIALLABS_MSGS__MSG__DETAIL__INS_DATA__STRUCT_H_

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
// Member 'gps_msow'
#include "std_msgs/msg/detail/u_int32__struct.h"
// Member 'llh'
// Member 'ypr'
// Member 'vel_enu'
// Member 'pos_std'
#include "geometry_msgs/msg/detail/vector3__struct.h"
// Member 'oriquat'
#include "geometry_msgs/msg/detail/quaternion__struct.h"
// Member 'solution_status'
#include "std_msgs/msg/detail/int8__struct.h"

/// Struct defined in msg/InsData in the package inertiallabs_msgs.
typedef struct inertiallabs_msgs__msg__InsData
{
  std_msgs__msg__Header header;
  double gps_ins_time;
  double gps_imu_time;
  std_msgs__msg__UInt32 gps_msow;
  geometry_msgs__msg__Vector3 llh;
  geometry_msgs__msg__Vector3 ypr;
  geometry_msgs__msg__Quaternion oriquat;
  geometry_msgs__msg__Vector3 vel_enu;
  std_msgs__msg__Int8 solution_status;
  geometry_msgs__msg__Vector3 pos_std;
  float heading_std;
  uint16_t usw;
} inertiallabs_msgs__msg__InsData;

// Struct for a sequence of inertiallabs_msgs__msg__InsData.
typedef struct inertiallabs_msgs__msg__InsData__Sequence
{
  inertiallabs_msgs__msg__InsData * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} inertiallabs_msgs__msg__InsData__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // INERTIALLABS_MSGS__MSG__DETAIL__INS_DATA__STRUCT_H_
