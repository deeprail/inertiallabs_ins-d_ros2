// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from inertiallabs_msgs:msg/GpsData.idl
// generated code does not contain a copyright notice
#include "inertiallabs_msgs/msg/detail/gps_data__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `llh`
#include "geometry_msgs/msg/detail/vector3__functions.h"

bool
inertiallabs_msgs__msg__GpsData__init(inertiallabs_msgs__msg__GpsData * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    inertiallabs_msgs__msg__GpsData__fini(msg);
    return false;
  }
  // llh
  if (!geometry_msgs__msg__Vector3__init(&msg->llh)) {
    inertiallabs_msgs__msg__GpsData__fini(msg);
    return false;
  }
  // horspeed
  // speeddir
  // verspeed
  return true;
}

void
inertiallabs_msgs__msg__GpsData__fini(inertiallabs_msgs__msg__GpsData * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // llh
  geometry_msgs__msg__Vector3__fini(&msg->llh);
  // horspeed
  // speeddir
  // verspeed
}

bool
inertiallabs_msgs__msg__GpsData__are_equal(const inertiallabs_msgs__msg__GpsData * lhs, const inertiallabs_msgs__msg__GpsData * rhs)
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
  // llh
  if (!geometry_msgs__msg__Vector3__are_equal(
      &(lhs->llh), &(rhs->llh)))
  {
    return false;
  }
  // horspeed
  if (lhs->horspeed != rhs->horspeed) {
    return false;
  }
  // speeddir
  if (lhs->speeddir != rhs->speeddir) {
    return false;
  }
  // verspeed
  if (lhs->verspeed != rhs->verspeed) {
    return false;
  }
  return true;
}

bool
inertiallabs_msgs__msg__GpsData__copy(
  const inertiallabs_msgs__msg__GpsData * input,
  inertiallabs_msgs__msg__GpsData * output)
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
  // llh
  if (!geometry_msgs__msg__Vector3__copy(
      &(input->llh), &(output->llh)))
  {
    return false;
  }
  // horspeed
  output->horspeed = input->horspeed;
  // speeddir
  output->speeddir = input->speeddir;
  // verspeed
  output->verspeed = input->verspeed;
  return true;
}

inertiallabs_msgs__msg__GpsData *
inertiallabs_msgs__msg__GpsData__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  inertiallabs_msgs__msg__GpsData * msg = (inertiallabs_msgs__msg__GpsData *)allocator.allocate(sizeof(inertiallabs_msgs__msg__GpsData), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(inertiallabs_msgs__msg__GpsData));
  bool success = inertiallabs_msgs__msg__GpsData__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
inertiallabs_msgs__msg__GpsData__destroy(inertiallabs_msgs__msg__GpsData * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    inertiallabs_msgs__msg__GpsData__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
inertiallabs_msgs__msg__GpsData__Sequence__init(inertiallabs_msgs__msg__GpsData__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  inertiallabs_msgs__msg__GpsData * data = NULL;

  if (size) {
    data = (inertiallabs_msgs__msg__GpsData *)allocator.zero_allocate(size, sizeof(inertiallabs_msgs__msg__GpsData), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = inertiallabs_msgs__msg__GpsData__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        inertiallabs_msgs__msg__GpsData__fini(&data[i - 1]);
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
inertiallabs_msgs__msg__GpsData__Sequence__fini(inertiallabs_msgs__msg__GpsData__Sequence * array)
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
      inertiallabs_msgs__msg__GpsData__fini(&array->data[i]);
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

inertiallabs_msgs__msg__GpsData__Sequence *
inertiallabs_msgs__msg__GpsData__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  inertiallabs_msgs__msg__GpsData__Sequence * array = (inertiallabs_msgs__msg__GpsData__Sequence *)allocator.allocate(sizeof(inertiallabs_msgs__msg__GpsData__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = inertiallabs_msgs__msg__GpsData__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
inertiallabs_msgs__msg__GpsData__Sequence__destroy(inertiallabs_msgs__msg__GpsData__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    inertiallabs_msgs__msg__GpsData__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
inertiallabs_msgs__msg__GpsData__Sequence__are_equal(const inertiallabs_msgs__msg__GpsData__Sequence * lhs, const inertiallabs_msgs__msg__GpsData__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!inertiallabs_msgs__msg__GpsData__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
inertiallabs_msgs__msg__GpsData__Sequence__copy(
  const inertiallabs_msgs__msg__GpsData__Sequence * input,
  inertiallabs_msgs__msg__GpsData__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(inertiallabs_msgs__msg__GpsData);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    inertiallabs_msgs__msg__GpsData * data =
      (inertiallabs_msgs__msg__GpsData *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!inertiallabs_msgs__msg__GpsData__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          inertiallabs_msgs__msg__GpsData__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!inertiallabs_msgs__msg__GpsData__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
