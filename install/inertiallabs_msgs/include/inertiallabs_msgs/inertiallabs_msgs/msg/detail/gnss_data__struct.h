// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from inertiallabs_msgs:msg/GnssData.idl
// generated code does not contain a copyright notice

#ifndef INERTIALLABS_MSGS__MSG__DETAIL__GNSS_DATA__STRUCT_H_
#define INERTIALLABS_MSGS__MSG__DETAIL__GNSS_DATA__STRUCT_H_

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
// Member 'pos_std'
#include "geometry_msgs/msg/detail/vector3__struct.h"

/// Struct defined in msg/GnssData in the package inertiallabs_msgs.
typedef struct inertiallabs_msgs__msg__GnssData
{
  std_msgs__msg__Header header;
  int8_t gnss_info_1;
  int8_t gnss_info_2;
  int8_t number_sat;
  float gnss_velocity_latency;
  int8_t gnss_angles_position_type;
  float gnss_heading;
  float gnss_pitch;
  float gnss_gdop;
  float gnss_pdop;
  float gnss_hdop;
  float gnss_vdop;
  float gnss_tdop;
  uint8_t new_gnss_flags;
  double diff_age;
  geometry_msgs__msg__Vector3 pos_std;
  float heading_std;
  float pitch_std;
} inertiallabs_msgs__msg__GnssData;

// Struct for a sequence of inertiallabs_msgs__msg__GnssData.
typedef struct inertiallabs_msgs__msg__GnssData__Sequence
{
  inertiallabs_msgs__msg__GnssData * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} inertiallabs_msgs__msg__GnssData__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // INERTIALLABS_MSGS__MSG__DETAIL__GNSS_DATA__STRUCT_H_
