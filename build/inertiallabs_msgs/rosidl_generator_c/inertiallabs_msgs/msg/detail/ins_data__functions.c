// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from inertiallabs_msgs:msg/InsData.idl
// generated code does not contain a copyright notice
#include "inertiallabs_msgs/msg/detail/ins_data__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `gps_msow`
#include "std_msgs/msg/detail/u_int32__functions.h"
// Member `llh`
// Member `ypr`
// Member `vel_enu`
// Member `pos_std`
#include "geometry_msgs/msg/detail/vector3__functions.h"
// Member `oriquat`
#include "geometry_msgs/msg/detail/quaternion__functions.h"
// Member `solution_status`
#include "std_msgs/msg/detail/int8__functions.h"

bool
inertiallabs_msgs__msg__InsData__init(inertiallabs_msgs__msg__InsData * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    inertiallabs_msgs__msg__InsData__fini(msg);
    return false;
  }
  // gps_ins_time
  // gps_imu_time
  // gps_msow
  if (!std_msgs__msg__UInt32__init(&msg->gps_msow)) {
    inertiallabs_msgs__msg__InsData__fini(msg);
    return false;
  }
  // llh
  if (!geometry_msgs__msg__Vector3__init(&msg->llh)) {
    inertiallabs_msgs__msg__InsData__fini(msg);
    return false;
  }
  // ypr
  if (!geometry_msgs__msg__Vector3__init(&msg->ypr)) {
    inertiallabs_msgs__msg__InsData__fini(msg);
    return false;
  }
  // oriquat
  if (!geometry_msgs__msg__Quaternion__init(&msg->oriquat)) {
    inertiallabs_msgs__msg__InsData__fini(msg);
    return false;
  }
  // vel_enu
  if (!geometry_msgs__msg__Vector3__init(&msg->vel_enu)) {
    inertiallabs_msgs__msg__InsData__fini(msg);
    return false;
  }
  // solution_status
  if (!std_msgs__msg__Int8__init(&msg->solution_status)) {
    inertiallabs_msgs__msg__InsData__fini(msg);
    return false;
  }
  // pos_std
  if (!geometry_msgs__msg__Vector3__init(&msg->pos_std)) {
    inertiallabs_msgs__msg__InsData__fini(msg);
    return false;
  }
  // heading_std
  // usw
  return true;
}

void
inertiallabs_msgs__msg__InsData__fini(inertiallabs_msgs__msg__InsData * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // gps_ins_time
  // gps_imu_time
  // gps_msow
  std_msgs__msg__UInt32__fini(&msg->gps_msow);
  // llh
  geometry_msgs__msg__Vector3__fini(&msg->llh);
  // ypr
  geometry_msgs__msg__Vector3__fini(&msg->ypr);
  // oriquat
  geometry_msgs__msg__Quaternion__fini(&msg->oriquat);
  // vel_enu
  geometry_msgs__msg__Vector3__fini(&msg->vel_enu);
  // solution_status
  std_msgs__msg__Int8__fini(&msg->solution_status);
  // pos_std
  geometry_msgs__msg__Vector3__fini(&msg->pos_std);
  // heading_std
  // usw
}

bool
inertiallabs_msgs__msg__InsData__are_equal(const inertiallabs_msgs__msg__InsData * lhs, const inertiallabs_msgs__msg__InsData * rhs)
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
  // gps_ins_time
  if (lhs->gps_ins_time != rhs->gps_ins_time) {
    return false;
  }
  // gps_imu_time
  if (lhs->gps_imu_time != rhs->gps_imu_time) {
    return false;
  }
  // gps_msow
  if (!std_msgs__msg__UInt32__are_equal(
      &(lhs->gps_msow), &(rhs->gps_msow)))
  {
    return false;
  }
  // llh
  if (!geometry_msgs__msg__Vector3__are_equal(
      &(lhs->llh), &(rhs->llh)))
  {
    return false;
  }
  // ypr
  if (!geometry_msgs__msg__Vector3__are_equal(
      &(lhs->ypr), &(rhs->ypr)))
  {
    return false;
  }
  // oriquat
  if (!geometry_msgs__msg__Quaternion__are_equal(
      &(lhs->oriquat), &(rhs->oriquat)))
  {
    return false;
  }
  // vel_enu
  if (!geometry_msgs__msg__Vector3__are_equal(
      &(lhs->vel_enu), &(rhs->vel_enu)))
  {
    return false;
  }
  // solution_status
  if (!std_msgs__msg__Int8__are_equal(
      &(lhs->solution_status), &(rhs->solution_status)))
  {
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
  // usw
  if (lhs->usw != rhs->usw) {
    return false;
  }
  return true;
}

bool
inertiallabs_msgs__msg__InsData__copy(
  const inertiallabs_msgs__msg__InsData * input,
  inertiallabs_msgs__msg__InsData * output)
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
  // gps_ins_time
  output->gps_ins_time = input->gps_ins_time;
  // gps_imu_time
  output->gps_imu_time = input->gps_imu_time;
  // gps_msow
  if (!std_msgs__msg__UInt32__copy(
      &(input->gps_msow), &(output->gps_msow)))
  {
    return false;
  }
  // llh
  if (!geometry_msgs__msg__Vector3__copy(
      &(input->llh), &(output->llh)))
  {
    return false;
  }
  // ypr
  if (!geometry_msgs__msg__Vector3__copy(
      &(input->ypr), &(output->ypr)))
  {
    return false;
  }
  // oriquat
  if (!geometry_msgs__msg__Quaternion__copy(
      &(input->oriquat), &(output->oriquat)))
  {
    return false;
  }
  // vel_enu
  if (!geometry_msgs__msg__Vector3__copy(
      &(input->vel_enu), &(output->vel_enu)))
  {
    return false;
  }
  // solution_status
  if (!std_msgs__msg__Int8__copy(
      &(input->solution_status), &(output->solution_status)))
  {
    return false;
  }
  // pos_std
  if (!geometry_msgs__msg__Vector3__copy(
      &(input->pos_std), &(output->pos_std)))
  {
    return false;
  }
  // heading_std
  output->heading_std = input->heading_std;
  // usw
  output->usw = input->usw;
  return true;
}

inertiallabs_msgs__msg__InsData *
inertiallabs_msgs__msg__InsData__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  inertiallabs_msgs__msg__InsData * msg = (inertiallabs_msgs__msg__InsData *)allocator.allocate(sizeof(inertiallabs_msgs__msg__InsData), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(inertiallabs_msgs__msg__InsData));
  bool success = inertiallabs_msgs__msg__InsData__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
inertiallabs_msgs__msg__InsData__destroy(inertiallabs_msgs__msg__InsData * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    inertiallabs_msgs__msg__InsData__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
inertiallabs_msgs__msg__InsData__Sequence__init(inertiallabs_msgs__msg__InsData__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  inertiallabs_msgs__msg__InsData * data = NULL;

  if (size) {
    data = (inertiallabs_msgs__msg__InsData *)allocator.zero_allocate(size, sizeof(inertiallabs_msgs__msg__InsData), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = inertiallabs_msgs__msg__InsData__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        inertiallabs_msgs__msg__InsData__fini(&data[i - 1]);
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
inertiallabs_msgs__msg__InsData__Sequence__fini(inertiallabs_msgs__msg__InsData__Sequence * array)
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
      inertiallabs_msgs__msg__InsData__fini(&array->data[i]);
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

inertiallabs_msgs__msg__InsData__Sequence *
inertiallabs_msgs__msg__InsData__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  inertiallabs_msgs__msg__InsData__Sequence * array = (inertiallabs_msgs__msg__InsData__Sequence *)allocator.allocate(sizeof(inertiallabs_msgs__msg__InsData__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = inertiallabs_msgs__msg__InsData__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
inertiallabs_msgs__msg__InsData__Sequence__destroy(inertiallabs_msgs__msg__InsData__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    inertiallabs_msgs__msg__InsData__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
inertiallabs_msgs__msg__InsData__Sequence__are_equal(const inertiallabs_msgs__msg__InsData__Sequence * lhs, const inertiallabs_msgs__msg__InsData__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!inertiallabs_msgs__msg__InsData__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
inertiallabs_msgs__msg__InsData__Sequence__copy(
  const inertiallabs_msgs__msg__InsData__Sequence * input,
  inertiallabs_msgs__msg__InsData__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(inertiallabs_msgs__msg__InsData);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    inertiallabs_msgs__msg__InsData * data =
      (inertiallabs_msgs__msg__InsData *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!inertiallabs_msgs__msg__InsData__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          inertiallabs_msgs__msg__InsData__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!inertiallabs_msgs__msg__InsData__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
