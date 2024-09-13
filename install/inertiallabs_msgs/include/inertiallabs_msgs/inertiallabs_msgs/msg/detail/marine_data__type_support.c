// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from inertiallabs_msgs:msg/MarineData.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "inertiallabs_msgs/msg/detail/marine_data__rosidl_typesupport_introspection_c.h"
#include "inertiallabs_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "inertiallabs_msgs/msg/detail/marine_data__functions.h"
#include "inertiallabs_msgs/msg/detail/marine_data__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void inertiallabs_msgs__msg__MarineData__rosidl_typesupport_introspection_c__MarineData_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  inertiallabs_msgs__msg__MarineData__init(message_memory);
}

void inertiallabs_msgs__msg__MarineData__rosidl_typesupport_introspection_c__MarineData_fini_function(void * message_memory)
{
  inertiallabs_msgs__msg__MarineData__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember inertiallabs_msgs__msg__MarineData__rosidl_typesupport_introspection_c__MarineData_message_member_array[8] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(inertiallabs_msgs__msg__MarineData, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "heave",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(inertiallabs_msgs__msg__MarineData, heave),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "surge",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(inertiallabs_msgs__msg__MarineData, surge),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "sway",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(inertiallabs_msgs__msg__MarineData, sway),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "heave_velocity",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(inertiallabs_msgs__msg__MarineData, heave_velocity),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "surge_velocity",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(inertiallabs_msgs__msg__MarineData, surge_velocity),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "sway_velocity",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(inertiallabs_msgs__msg__MarineData, sway_velocity),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "significant_wave_height",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(inertiallabs_msgs__msg__MarineData, significant_wave_height),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers inertiallabs_msgs__msg__MarineData__rosidl_typesupport_introspection_c__MarineData_message_members = {
  "inertiallabs_msgs__msg",  // message namespace
  "MarineData",  // message name
  8,  // number of fields
  sizeof(inertiallabs_msgs__msg__MarineData),
  inertiallabs_msgs__msg__MarineData__rosidl_typesupport_introspection_c__MarineData_message_member_array,  // message members
  inertiallabs_msgs__msg__MarineData__rosidl_typesupport_introspection_c__MarineData_init_function,  // function to initialize message memory (memory has to be allocated)
  inertiallabs_msgs__msg__MarineData__rosidl_typesupport_introspection_c__MarineData_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t inertiallabs_msgs__msg__MarineData__rosidl_typesupport_introspection_c__MarineData_message_type_support_handle = {
  0,
  &inertiallabs_msgs__msg__MarineData__rosidl_typesupport_introspection_c__MarineData_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_inertiallabs_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, inertiallabs_msgs, msg, MarineData)() {
  inertiallabs_msgs__msg__MarineData__rosidl_typesupport_introspection_c__MarineData_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  if (!inertiallabs_msgs__msg__MarineData__rosidl_typesupport_introspection_c__MarineData_message_type_support_handle.typesupport_identifier) {
    inertiallabs_msgs__msg__MarineData__rosidl_typesupport_introspection_c__MarineData_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &inertiallabs_msgs__msg__MarineData__rosidl_typesupport_introspection_c__MarineData_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
