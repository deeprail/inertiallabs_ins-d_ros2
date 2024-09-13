// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from inertiallabs_msgs:msg/GnssData.idl
// generated code does not contain a copyright notice
#include "inertiallabs_msgs/msg/detail/gnss_data__rosidl_typesupport_fastrtps_cpp.hpp"
#include "inertiallabs_msgs/msg/detail/gnss_data__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions
namespace std_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const std_msgs::msg::Header &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  std_msgs::msg::Header &);
size_t get_serialized_size(
  const std_msgs::msg::Header &,
  size_t current_alignment);
size_t
max_serialized_size_Header(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace std_msgs

namespace geometry_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const geometry_msgs::msg::Vector3 &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  geometry_msgs::msg::Vector3 &);
size_t get_serialized_size(
  const geometry_msgs::msg::Vector3 &,
  size_t current_alignment);
size_t
max_serialized_size_Vector3(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace geometry_msgs


namespace inertiallabs_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_inertiallabs_msgs
cdr_serialize(
  const inertiallabs_msgs::msg::GnssData & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: header
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.header,
    cdr);
  // Member: gnss_info_1
  cdr << ros_message.gnss_info_1;
  // Member: gnss_info_2
  cdr << ros_message.gnss_info_2;
  // Member: number_sat
  cdr << ros_message.number_sat;
  // Member: gnss_velocity_latency
  cdr << ros_message.gnss_velocity_latency;
  // Member: gnss_angles_position_type
  cdr << ros_message.gnss_angles_position_type;
  // Member: gnss_heading
  cdr << ros_message.gnss_heading;
  // Member: gnss_pitch
  cdr << ros_message.gnss_pitch;
  // Member: gnss_gdop
  cdr << ros_message.gnss_gdop;
  // Member: gnss_pdop
  cdr << ros_message.gnss_pdop;
  // Member: gnss_hdop
  cdr << ros_message.gnss_hdop;
  // Member: gnss_vdop
  cdr << ros_message.gnss_vdop;
  // Member: gnss_tdop
  cdr << ros_message.gnss_tdop;
  // Member: new_gnss_flags
  cdr << ros_message.new_gnss_flags;
  // Member: diff_age
  cdr << ros_message.diff_age;
  // Member: pos_std
  geometry_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.pos_std,
    cdr);
  // Member: heading_std
  cdr << ros_message.heading_std;
  // Member: pitch_std
  cdr << ros_message.pitch_std;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_inertiallabs_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  inertiallabs_msgs::msg::GnssData & ros_message)
{
  // Member: header
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.header);

  // Member: gnss_info_1
  cdr >> ros_message.gnss_info_1;

  // Member: gnss_info_2
  cdr >> ros_message.gnss_info_2;

  // Member: number_sat
  cdr >> ros_message.number_sat;

  // Member: gnss_velocity_latency
  cdr >> ros_message.gnss_velocity_latency;

  // Member: gnss_angles_position_type
  cdr >> ros_message.gnss_angles_position_type;

  // Member: gnss_heading
  cdr >> ros_message.gnss_heading;

  // Member: gnss_pitch
  cdr >> ros_message.gnss_pitch;

  // Member: gnss_gdop
  cdr >> ros_message.gnss_gdop;

  // Member: gnss_pdop
  cdr >> ros_message.gnss_pdop;

  // Member: gnss_hdop
  cdr >> ros_message.gnss_hdop;

  // Member: gnss_vdop
  cdr >> ros_message.gnss_vdop;

  // Member: gnss_tdop
  cdr >> ros_message.gnss_tdop;

  // Member: new_gnss_flags
  cdr >> ros_message.new_gnss_flags;

  // Member: diff_age
  cdr >> ros_message.diff_age;

  // Member: pos_std
  geometry_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.pos_std);

  // Member: heading_std
  cdr >> ros_message.heading_std;

  // Member: pitch_std
  cdr >> ros_message.pitch_std;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_inertiallabs_msgs
get_serialized_size(
  const inertiallabs_msgs::msg::GnssData & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: header

  current_alignment +=
    std_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.header, current_alignment);
  // Member: gnss_info_1
  {
    size_t item_size = sizeof(ros_message.gnss_info_1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: gnss_info_2
  {
    size_t item_size = sizeof(ros_message.gnss_info_2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: number_sat
  {
    size_t item_size = sizeof(ros_message.number_sat);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: gnss_velocity_latency
  {
    size_t item_size = sizeof(ros_message.gnss_velocity_latency);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: gnss_angles_position_type
  {
    size_t item_size = sizeof(ros_message.gnss_angles_position_type);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: gnss_heading
  {
    size_t item_size = sizeof(ros_message.gnss_heading);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: gnss_pitch
  {
    size_t item_size = sizeof(ros_message.gnss_pitch);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: gnss_gdop
  {
    size_t item_size = sizeof(ros_message.gnss_gdop);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: gnss_pdop
  {
    size_t item_size = sizeof(ros_message.gnss_pdop);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: gnss_hdop
  {
    size_t item_size = sizeof(ros_message.gnss_hdop);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: gnss_vdop
  {
    size_t item_size = sizeof(ros_message.gnss_vdop);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: gnss_tdop
  {
    size_t item_size = sizeof(ros_message.gnss_tdop);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: new_gnss_flags
  {
    size_t item_size = sizeof(ros_message.new_gnss_flags);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: diff_age
  {
    size_t item_size = sizeof(ros_message.diff_age);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: pos_std

  current_alignment +=
    geometry_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.pos_std, current_alignment);
  // Member: heading_std
  {
    size_t item_size = sizeof(ros_message.heading_std);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: pitch_std
  {
    size_t item_size = sizeof(ros_message.pitch_std);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_inertiallabs_msgs
max_serialized_size_GnssData(
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


  // Member: header
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        std_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_Header(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: gnss_info_1
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: gnss_info_2
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: number_sat
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: gnss_velocity_latency
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: gnss_angles_position_type
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: gnss_heading
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: gnss_pitch
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: gnss_gdop
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: gnss_pdop
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: gnss_hdop
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: gnss_vdop
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: gnss_tdop
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: new_gnss_flags
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: diff_age
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: pos_std
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        geometry_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_Vector3(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: heading_std
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: pitch_std
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
    using DataType = inertiallabs_msgs::msg::GnssData;
    is_plain =
      (
      offsetof(DataType, pitch_std) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _GnssData__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const inertiallabs_msgs::msg::GnssData *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _GnssData__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<inertiallabs_msgs::msg::GnssData *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _GnssData__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const inertiallabs_msgs::msg::GnssData *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _GnssData__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_GnssData(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _GnssData__callbacks = {
  "inertiallabs_msgs::msg",
  "GnssData",
  _GnssData__cdr_serialize,
  _GnssData__cdr_deserialize,
  _GnssData__get_serialized_size,
  _GnssData__max_serialized_size
};

static rosidl_message_type_support_t _GnssData__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_GnssData__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace inertiallabs_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_inertiallabs_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<inertiallabs_msgs::msg::GnssData>()
{
  return &inertiallabs_msgs::msg::typesupport_fastrtps_cpp::_GnssData__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, inertiallabs_msgs, msg, GnssData)() {
  return &inertiallabs_msgs::msg::typesupport_fastrtps_cpp::_GnssData__handle;
}

#ifdef __cplusplus
}
#endif
