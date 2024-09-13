// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from inertiallabs_msgs:msg/GnssData.idl
// generated code does not contain a copyright notice
#include "inertiallabs_msgs/msg/detail/gnss_data__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `pos_std`
#include "geometry_msgs/msg/detail/vector3__functions.h"

bool
inertiallabs_msgs__msg__GnssData__init(inertiallabs_msgs__msg__GnssData * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    inertiallabs_msgs__msg__GnssData__fini(msg);
    return false;
  }
  // gnss_info_1
  // gnss_info_2
  // number_sat
  // gnss_velocity_latency
  // gnss_angles_position_type
  // gnss_heading
  // gnss_pitch
  // gnss_gdop
  // gnss_pdop
  // gnss_hdop
  // gnss_vdop
  // gnss_tdop
  // new_gnss_flags
  // diff_age
  // pos_std
  if (!geometry_msgs__msg__Vector3__init(&msg->pos_std)) {
    inertiallabs_msgs__msg__GnssData__fini(msg);
    return false;
  }
  // heading_std
  // pitch_std
  return true;
}

void
inertiallabs_msgs__msg__GnssData__fini(inertiallabs_msgs__msg__GnssData * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // gnss_info_1
  // gnss_info_2
  // number_sat
  // gnss_velocity_latency
  // gnss_angles_position_type
  // gnss_heading
  // gnss_pitch
  // gnss_gdop
  // gnss_pdop
  // gnss_hdop
  // gnss_vdop
  // gnss_tdop
  // new_gnss_flags
  // diff_age
  // pos_std
  geometry_msgs__msg__Vector3__fini(&msg->pos_std);
  // heading_std
  // pitch_std
}

bool
inertiallabs_msgs__msg__GnssData__are_equal(const inertiallabs_msgs__msg__GnssData * lhs, const inertiallabs_msgs__msg__GnssData * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__are_equal(
      &(lhs->header), &(rhs->header)))
  {
    return false;
  }
  // gnss_info_1
  if (lhs->gnss_info_1 != rhs->gnss_info_1) {
    return false;
  }
  // gnss_info_2
  if (lhs->gnss_info_2 != rhs->gnss_info_2) {
    return false;
  }
  // number_sat
  if (lhs->number_sat != rhs->number_sat) {
    return false;
  }
  // gnss_velocity_latency
  if (lhs->gnss_velocity_latency != rhs->gnss_velocity_latency) {
    return false;
  }
  // gnss_angles_position_type
  if (lhs->gnss_angles_position_type != rhs->gnss_angles_position_type) {
    return false;
  }
  // gnss_heading
  if (lhs->gnss_heading != rhs->gnss_heading) {
    return false;
  }
  // gnss_pitch
  if (lhs->gnss_pitch != rhs->gnss_pitch) {
    return false;
  }
  // gnss_gdop
  if (lhs->gnss_gdop != rhs->gnss_gdop) {
    return false;
  }
  // gnss_pdop
  if (lhs->gnss_pdop != rhs->gnss_pdop) {
    return false;
  }
  // gnss_hdop
  if (lhs->gnss_hdop != rhs->gnss_hdop) {
    return false;
  }
  // gnss_vdop
  if (lhs->gnss_vdop != rhs->gnss_vdop) {
    return false;
  }
  // gnss_tdop
  if (lhs->gnss_tdop != rhs->gnss_tdop) {
    return false;
  }
  // new_gnss_flags
  if (lhs->new_gnss_flags != rhs->new_gnss_flags) {
    return false;
  }
  // diff_age
  if (lhs->diff_age != rhs->diff_age) {
    return false;
  }
  // pos_std
  if (!geometry_msgs__msg__Vector3__are_equal(
      &(lhs->pos_std), &(rhs->pos_std)))
  {
    return false;
  }
  // heading_std
  if (lhs->heading_std != rhs->heading_std) {
    return false;
  }
  // pitch_std
  if (lhs->pitch_std != rhs->pitch_std) {
    return false;
  }
  return true;
}

bool
inertiallabs_msgs__msg__GnssData__copy(
  const inertiallabs_msgs__msg__GnssData * input,
  inertiallabs_msgs__msg__GnssData * output)
{
  if (!input || !output) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__copy(
      &(input->header), &(output->header)))
  {
    return false;
  }
  // gnss_info_1
  output->gnss_info_1 = input->gnss_info_1;
  // gnss_info_2
  output->gnss_info_2 = input->gnss_info_2;
  // number_sat
  output->number_sat = input->number_sat;
  // gnss_velocity_latency
  output->gnss_velocity_latency = input->gnss_velocity_latency;
  // gnss_angles_position_type
  output->gnss_angles_position_type = input->gnss_angles_position_type;
  // gnss_heading
  output->gnss_heading = input->gnss_heading;
  // gnss_pitch
  output->gnss_pitch = input->gnss_pitch;
  // gnss_gdop
  output->gnss_gdop = input->gnss_gdop;
  // gnss_pdop
  output->gnss_pdop = input->gnss_pdop;
  // gnss_hdop
  output->gnss_hdop = input->gnss_hdop;
  // gnss_vdop
  output->gnss_vdop = input->gnss_vdop;
  // gnss_tdop
  output->gnss_tdop = input->gnss_tdop;
  // new_gnss_flags
  output->new_gnss_flags = input->new_gnss_flags;
  // diff_age
  output->diff_age = input->diff_age;
  // pos_std
  if (!geometry_msgs__msg__Vector3__copy(
      &(input->pos_std), &(output->pos_std)))
  {
    return false;
  }
  // heading_std
  output->heading_std = input->heading_std;
  // pitch_std
  output->pitch_std = input->pitch_std;
  return true;
}

inertiallabs_msgs__msg__GnssData *
inertiallabs_msgs__msg__GnssData__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  inertiallabs_msgs__msg__GnssData * msg = (inertiallabs_msgs__msg__GnssData *)allocator.allocate(sizeof(inertiallabs_msgs__msg__GnssData), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(inertiallabs_msgs__msg__GnssData));
  bool success = inertiallabs_msgs__msg__GnssData__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
inertiallabs_msgs__msg__GnssData__destroy(inertiallabs_msgs__msg__GnssData * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    inertiallabs_msgs__msg__GnssData__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
inertiallabs_msgs__msg__GnssData__Sequence__init(inertiallabs_msgs__msg__GnssData__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  inertiallabs_msgs__msg__GnssData * data = NULL;

  if (size) {
    data = (inertiallabs_msgs__msg__GnssData *)allocator.zero_allocate(size, sizeof(inertiallabs_msgs__msg__GnssData), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = inertiallabs_msgs__msg__GnssData__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        inertiallabs_msgs__msg__GnssData__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
inertiallabs_msgs__msg__GnssData__Sequence__fini(inertiallabs_msgs__msg__GnssData__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      inertiallabs_msgs__msg__GnssData__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

inertiallabs_msgs__msg__GnssData__Sequence *
inertiallabs_msgs__msg__GnssData__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  inertiallabs_msgs__msg__GnssData__Sequence * array = (inertiallabs_msgs__msg__GnssData__Sequence *)allocator.allocate(sizeof(inertiallabs_msgs__msg__GnssData__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = inertiallabs_msgs__msg__GnssData__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
inertiallabs_msgs__msg__GnssData__Sequence__destroy(inertiallabs_msgs__msg__GnssData__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    inertiallabs_msgs__msg__GnssData__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
inertiallabs_msgs__msg__GnssData__Sequence__are_equal(const inertiallabs_msgs__msg__GnssData__Sequence * lhs, const inertiallabs_msgs__msg__GnssData__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!inertiallabs_msgs__msg__GnssData__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
inertiallabs_msgs__msg__GnssData__Sequence__copy(
  const inertiallabs_msgs__msg__GnssData__Sequence * input,
  inertiallabs_msgs__msg__GnssData__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(inertiallabs_msgs__msg__GnssData);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    inertiallabs_msgs__msg__GnssData * data =
      (inertiallabs_msgs__msg__GnssData *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!inertiallabs_msgs__msg__GnssData__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          inertiallabs_msgs__msg__GnssData__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!inertiallabs_msgs__msg__GnssData__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
