// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from inertiallabs_msgs:msg/GnssData.idl
// generated code does not contain a copyright notice
#include "inertiallabs_msgs/msg/detail/gnss_data__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "inertiallabs_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "inertiallabs_msgs/msg/detail/gnss_data__struct.h"
#include "inertiallabs_msgs/msg/detail/gnss_data__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "geometry_msgs/msg/detail/vector3__functions.h"  // pos_std
#include "std_msgs/msg/detail/header__functions.h"  // header

// forward declare type support functions
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_inertiallabs_msgs
size_t get_serialized_size_geometry_msgs__msg__Vector3(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_inertiallabs_msgs
size_t max_serialized_size_geometry_msgs__msg__Vector3(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_inertiallabs_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, geometry_msgs, msg, Vector3)();
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_inertiallabs_msgs
size_t get_serialized_size_std_msgs__msg__Header(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_inertiallabs_msgs
size_t max_serialized_size_std_msgs__msg__Header(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_inertiallabs_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, std_msgs, msg, Header)();


using _GnssData__ros_msg_type = inertiallabs_msgs__msg__GnssData;

static bool _GnssData__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _GnssData__ros_msg_type * ros_message = static_cast<const _GnssData__ros_msg_type *>(untyped_ros_message);
  // Field name: header
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, std_msgs, msg, Header
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->header, cdr))
    {
      return false;
    }
  }

  // Field name: gnss_info_1
  {
    cdr << ros_message->gnss_info_1;
  }

  // Field name: gnss_info_2
  {
    cdr << ros_message->gnss_info_2;
  }

  // Field name: number_sat
  {
    cdr << ros_message->number_sat;
  }

  // Field name: gnss_velocity_latency
  {
    cdr << ros_message->gnss_velocity_latency;
  }

  // Field name: gnss_angles_position_type
  {
    cdr << ros_message->gnss_angles_position_type;
  }

  // Field name: gnss_heading
  {
    cdr << ros_message->gnss_heading;
  }

  // Field name: gnss_pitch
  {
    cdr << ros_message->gnss_pitch;
  }

  // Field name: gnss_gdop
  {
    cdr << ros_message->gnss_gdop;
  }

  // Field name: gnss_pdop
  {
    cdr << ros_message->gnss_pdop;
  }

  // Field name: gnss_hdop
  {
    cdr << ros_message->gnss_hdop;
  }

  // Field name: gnss_vdop
  {
    cdr << ros_message->gnss_vdop;
  }

  // Field name: gnss_tdop
  {
    cdr << ros_message->gnss_tdop;
  }

  // Field name: new_gnss_flags
  {
    cdr << ros_message->new_gnss_flags;
  }

  // Field name: diff_age
  {
    cdr << ros_message->diff_age;
  }

  // Field name: pos_std
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, geometry_msgs, msg, Vector3
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->pos_std, cdr))
    {
      return false;
    }
  }

  // Field name: heading_std
  {
    cdr << ros_message->heading_std;
  }

  // Field name: pitch_std
  {
    cdr << ros_message->pitch_std;
  }

  return true;
}

static bool _GnssData__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _GnssData__ros_msg_type * ros_message = static_cast<_GnssData__ros_msg_type *>(untyped_ros_message);
  // Field name: header
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, std_msgs, msg, Header
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->header))
    {
      return false;
    }
  }

  // Field name: gnss_info_1
  {
    cdr >> ros_message->gnss_info_1;
  }

  // Field name: gnss_info_2
  {
    cdr >> ros_message->gnss_info_2;
  }

  // Field name: number_sat
  {
    cdr >> ros_message->number_sat;
  }

  // Field name: gnss_velocity_latency
  {
    cdr >> ros_message->gnss_velocity_latency;
  }

  // Field name: gnss_angles_position_type
  {
    cdr >> ros_message->gnss_angles_position_type;
  }

  // Field name: gnss_heading
  {
    cdr >> ros_message->gnss_heading;
  }

  // Field name: gnss_pitch
  {
    cdr >> ros_message->gnss_pitch;
  }

  // Field name: gnss_gdop
  {
    cdr >> ros_message->gnss_gdop;
  }

  // Field name: gnss_pdop
  {
    cdr >> ros_message->gnss_pdop;
  }

  // Field name: gnss_hdop
  {
    cdr >> ros_message->gnss_hdop;
  }

  // Field name: gnss_vdop
  {
    cdr >> ros_message->gnss_vdop;
  }

  // Field name: gnss_tdop
  {
    cdr >> ros_message->gnss_tdop;
  }

  // Field name: new_gnss_flags
  {
    cdr >> ros_message->new_gnss_flags;
  }

  // Field name: diff_age
  {
    cdr >> ros_message->diff_age;
  }

  // Field name: pos_std
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, geometry_msgs, msg, Vector3
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->pos_std))
    {
      return false;
    }
  }

  // Field name: heading_std
  {
    cdr >> ros_message->heading_std;
  }

  // Field name: pitch_std
  {
    cdr >> ros_message->pitch_std;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_inertiallabs_msgs
size_t get_serialized_size_inertiallabs_msgs__msg__GnssData(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _GnssData__ros_msg_type * ros_message = static_cast<const _GnssData__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name header

  current_alignment += get_serialized_size_std_msgs__msg__Header(
    &(ros_message->header), current_alignment);
  // field.name gnss_info_1
  {
    size_t item_size = sizeof(ros_message->gnss_info_1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name gnss_info_2
  {
    size_t item_size = sizeof(ros_message->gnss_info_2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name number_sat
  {
    size_t item_size = sizeof(ros_message->number_sat);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name gnss_velocity_latency
  {
    size_t item_size = sizeof(ros_message->gnss_velocity_latency);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name gnss_angles_position_type
  {
    size_t item_size = sizeof(ros_message->gnss_angles_position_type);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name gnss_heading
  {
    size_t item_size = sizeof(ros_message->gnss_heading);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name gnss_pitch
  {
    size_t item_size = sizeof(ros_message->gnss_pitch);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name gnss_gdop
  {
    size_t item_size = sizeof(ros_message->gnss_gdop);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name gnss_pdop
  {
    size_t item_size = sizeof(ros_message->gnss_pdop);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name gnss_hdop
  {
    size_t item_size = sizeof(ros_message->gnss_hdop);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name gnss_vdop
  {
    size_t item_size = sizeof(ros_message->gnss_vdop);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name gnss_tdop
  {
    size_t item_size = sizeof(ros_message->gnss_tdop);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name new_gnss_flags
  {
    size_t item_size = sizeof(ros_message->new_gnss_flags);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name diff_age
  {
    size_t item_size = sizeof(ros_message->diff_age);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name pos_std

  current_alignment += get_serialized_size_geometry_msgs__msg__Vector3(
    &(ros_message->pos_std), current_alignment);
  // field.name heading_std
  {
    size_t item_size = sizeof(ros_message->heading_std);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name pitch_std
  {
    size_t item_size = sizeof(ros_message->pitch_std);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _GnssData__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_inertiallabs_msgs__msg__GnssData(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_inertiallabs_msgs
size_t max_serialized_size_inertiallabs_msgs__msg__GnssData(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: header
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_std_msgs__msg__Header(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: gnss_info_1
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: gnss_info_2
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: number_sat
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: gnss_velocity_latency
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: gnss_angles_position_type
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: gnss_heading
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: gnss_pitch
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: gnss_gdop
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: gnss_pdop
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: gnss_hdop
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: gnss_vdop
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: gnss_tdop
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: new_gnss_flags
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: diff_age
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: pos_std
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_geometry_msgs__msg__Vector3(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: heading_std
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: pitch_std
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = inertiallabs_msgs__msg__GnssData;
    is_plain =
      (
      offsetof(DataType, pitch_std) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _GnssData__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_inertiallabs_msgs__msg__GnssData(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_GnssData = {
  "inertiallabs_msgs::msg",
  "GnssData",
  _GnssData__cdr_serialize,
  _GnssData__cdr_deserialize,
  _GnssData__get_serialized_size,
  _GnssData__max_serialized_size
};

static rosidl_message_type_support_t _GnssData__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_GnssData,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, inertiallabs_msgs, msg, GnssData)() {
  return &_GnssData__type_support;
}

#if defined(__cplusplus)
}
#endif
