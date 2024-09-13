// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from inertiallabs_msgs:msg/SensorData.idl
// generated code does not contain a copyright notice
#include "inertiallabs_msgs/msg/detail/sensor_data__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `mag`
// Member `accel`
// Member `gyro`
#include "geometry_msgs/msg/detail/vector3__functions.h"

bool
inertiallabs_msgs__msg__SensorData__init(inertiallabs_msgs__msg__SensorData * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    inertiallabs_msgs__msg__SensorData__fini(msg);
    return false;
  }
  // mag
  if (!geometry_msgs__msg__Vector3__init(&msg->mag)) {
    inertiallabs_msgs__msg__SensorData__fini(msg);
    return false;
  }
  // accel
  if (!geometry_msgs__msg__Vector3__init(&msg->accel)) {
    inertiallabs_msgs__msg__SensorData__fini(msg);
    return false;
  }
  // gyro
  if (!geometry_msgs__msg__Vector3__init(&msg->gyro)) {
    inertiallabs_msgs__msg__SensorData__fini(msg);
    return false;
  }
  // temp
  // vinp
  // pressure
  // barometric_height
  return true;
}

void
inertiallabs_msgs__msg__SensorData__fini(inertiallabs_msgs__msg__SensorData * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // mag
  geometry_msgs__msg__Vector3__fini(&msg->mag);
  // accel
  geometry_msgs__msg__Vector3__fini(&msg->accel);
  // gyro
  geometry_msgs__msg__Vector3__fini(&msg->gyro);
  // temp
  // vinp
  // pressure
  // barometric_height
}

bool
inertiallabs_msgs__msg__SensorData__are_equal(const inertiallabs_msgs__msg__SensorData * lhs, const inertiallabs_msgs__msg__SensorData * rhs)
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
  // mag
  if (!geometry_msgs__msg__Vector3__are_equal(
      &(lhs->mag), &(rhs->mag)))
  {
    return false;
  }
  // accel
  if (!geometry_msgs__msg__Vector3__are_equal(
      &(lhs->accel), &(rhs->accel)))
  {
    return false;
  }
  // gyro
  if (!geometry_msgs__msg__Vector3__are_equal(
      &(lhs->gyro), &(rhs->gyro)))
  {
    return false;
  }
  // temp
  if (lhs->temp != rhs->temp) {
    return false;
  }
  // vinp
  if (lhs->vinp != rhs->vinp) {
    return false;
  }
  // pressure
  if (lhs->pressure != rhs->pressure) {
    return false;
  }
  // barometric_height
  if (lhs->barometric_height != rhs->barometric_height) {
    return false;
  }
  return true;
}

bool
inertiallabs_msgs__msg__SensorData__copy(
  const inertiallabs_msgs__msg__SensorData * input,
  inertiallabs_msgs__msg__SensorData * output)
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
  // mag
  if (!geometry_msgs__msg__Vector3__copy(
      &(input->mag), &(output->mag)))
  {
    return false;
  }
  // accel
  if (!geometry_msgs__msg__Vector3__copy(
      &(input->accel), &(output->accel)))
  {
    return false;
  }
  // gyro
  if (!geometry_msgs__msg__Vector3__copy(
      &(input->gyro), &(output->gyro)))
  {
    return false;
  }
  // temp
  output->temp = input->temp;
  // vinp
  output->vinp = input->vinp;
  // pressure
  output->pressure = input->pressure;
  // barometric_height
  output->barometric_height = input->barometric_height;
  return true;
}

inertiallabs_msgs__msg__SensorData *
inertiallabs_msgs__msg__SensorData__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  inertiallabs_msgs__msg__SensorData * msg = (inertiallabs_msgs__msg__SensorData *)allocator.allocate(sizeof(inertiallabs_msgs__msg__SensorData), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(inertiallabs_msgs__msg__SensorData));
  bool success = inertiallabs_msgs__msg__SensorData__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
inertiallabs_msgs__msg__SensorData__destroy(inertiallabs_msgs__msg__SensorData * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    inertiallabs_msgs__msg__SensorData__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
inertiallabs_msgs__msg__SensorData__Sequence__init(inertiallabs_msgs__msg__SensorData__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  inertiallabs_msgs__msg__SensorData * data = NULL;

  if (size) {
    data = (inertiallabs_msgs__msg__SensorData *)allocator.zero_allocate(size, sizeof(inertiallabs_msgs__msg__SensorData), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = inertiallabs_msgs__msg__SensorData__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        inertiallabs_msgs__msg__SensorData__fini(&data[i - 1]);
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
inertiallabs_msgs__msg__SensorData__Sequence__fini(inertiallabs_msgs__msg__SensorData__Sequence * array)
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
      inertiallabs_msgs__msg__SensorData__fini(&array->data[i]);
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

inertiallabs_msgs__msg__SensorData__Sequence *
inertiallabs_msgs__msg__SensorData__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  inertiallabs_msgs__msg__SensorData__Sequence * array = (inertiallabs_msgs__msg__SensorData__Sequence *)allocator.allocate(sizeof(inertiallabs_msgs__msg__SensorData__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = inertiallabs_msgs__msg__SensorData__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
inertiallabs_msgs__msg__SensorData__Sequence__destroy(inertiallabs_msgs__msg__SensorData__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    inertiallabs_msgs__msg__SensorData__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
inertiallabs_msgs__msg__SensorData__Sequence__are_equal(const inertiallabs_msgs__msg__SensorData__Sequence * lhs, const inertiallabs_msgs__msg__SensorData__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!inertiallabs_msgs__msg__SensorData__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
inertiallabs_msgs__msg__SensorData__Sequence__copy(
  const inertiallabs_msgs__msg__SensorData__Sequence * input,
  inertiallabs_msgs__msg__SensorData__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(inertiallabs_msgs__msg__SensorData);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    inertiallabs_msgs__msg__SensorData * data =
      (inertiallabs_msgs__msg__SensorData *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!inertiallabs_msgs__msg__SensorData__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          inertiallabs_msgs__msg__SensorData__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!inertiallabs_msgs__msg__SensorData__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
