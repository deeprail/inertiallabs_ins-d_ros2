// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from inertiallabs_msgs:msg/GpsData.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "inertiallabs_msgs/msg/detail/gps_data__rosidl_typesupport_introspection_c.h"
#include "inertiallabs_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "inertiallabs_msgs/msg/detail/gps_data__functions.h"
#include "inertiallabs_msgs/msg/detail/gps_data__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `llh`
#include "geometry_msgs/msg/vector3.h"
// Member `llh`
#include "geometry_msgs/msg/detail/vector3__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void inertiallabs_msgs__msg__GpsData__rosidl_typesupport_introspection_c__GpsData_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  inertiallabs_msgs__msg__GpsData__init(message_memory);
}

void inertiallabs_msgs__msg__GpsData__rosidl_typesupport_introspection_c__GpsData_fini_function(void * message_memory)
{
  inertiallabs_msgs__msg__GpsData__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember inertiallabs_msgs__msg__GpsData__rosidl_typesupport_introspection_c__GpsData_message_member_array[5] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(inertiallabs_msgs__msg__GpsData, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "llh",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(inertiallabs_msgs__msg__GpsData, llh),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "horspeed",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(inertiallabs_msgs__msg__GpsData, horspeed),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "speeddir",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(inertiallabs_msgs__msg__GpsData, speeddir),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "verspeed",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(inertiallabs_msgs__msg__GpsData, verspeed),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers inertiallabs_msgs__msg__GpsData__rosidl_typesupport_introspection_c__GpsData_message_members = {
  "inertiallabs_msgs__msg",  // message namespace
  "GpsData",  // message name
  5,  // number of fields
  sizeof(inertiallabs_msgs__msg__GpsData),
  inertiallabs_msgs__msg__GpsData__rosidl_typesupport_introspection_c__GpsData_message_member_array,  // message members
  inertiallabs_msgs__msg__GpsData__rosidl_typesupport_introspection_c__GpsData_init_function,  // function to initialize message memory (memory has to be allocated)
  inertiallabs_msgs__msg__GpsData__rosidl_typesupport_introspection_c__GpsData_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t inertiallabs_msgs__msg__GpsData__rosidl_typesupport_introspection_c__GpsData_message_type_support_handle = {
  0,
  &inertiallabs_msgs__msg__GpsData__rosidl_typesupport_introspection_c__GpsData_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_inertiallabs_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, inertiallabs_msgs, msg, GpsData)() {
  inertiallabs_msgs__msg__GpsData__rosidl_typesupport_introspection_c__GpsData_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  inertiallabs_msgs__msg__GpsData__rosidl_typesupport_introspection_c__GpsData_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Vector3)();
  if (!inertiallabs_msgs__msg__GpsData__rosidl_typesupport_introspection_c__GpsData_message_type_support_handle.typesupport_identifier) {
    inertiallabs_msgs__msg__GpsData__rosidl_typesupport_introspection_c__GpsData_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &inertiallabs_msgs__msg__GpsData__rosidl_typesupport_introspection_c__GpsData_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
