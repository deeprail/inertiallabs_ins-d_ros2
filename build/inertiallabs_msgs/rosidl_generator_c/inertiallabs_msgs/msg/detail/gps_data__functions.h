// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from inertiallabs_msgs:msg/GpsData.idl
// generated code does not contain a copyright notice

#ifndef INERTIALLABS_MSGS__MSG__DETAIL__GPS_DATA__FUNCTIONS_H_
#define INERTIALLABS_MSGS__MSG__DETAIL__GPS_DATA__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "inertiallabs_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "inertiallabs_msgs/msg/detail/gps_data__struct.h"

/// Initialize msg/GpsData message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * inertiallabs_msgs__msg__GpsData
 * )) before or use
 * inertiallabs_msgs__msg__GpsData__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_inertiallabs_msgs
bool
inertiallabs_msgs__msg__GpsData__init(inertiallabs_msgs__msg__GpsData * msg);

/// Finalize msg/GpsData message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_inertiallabs_msgs
void
inertiallabs_msgs__msg__GpsData__fini(inertiallabs_msgs__msg__GpsData * msg);

/// Create msg/GpsData message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * inertiallabs_msgs__msg__GpsData__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_inertiallabs_msgs
inertiallabs_msgs__msg__GpsData *
inertiallabs_msgs__msg__GpsData__create();

/// Destroy msg/GpsData message.
/**
 * It calls
 * inertiallabs_msgs__msg__GpsData__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_inertiallabs_msgs
void
inertiallabs_msgs__msg__GpsData__destroy(inertiallabs_msgs__msg__GpsData * msg);

/// Check for msg/GpsData message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_inertiallabs_msgs
bool
inertiallabs_msgs__msg__GpsData__are_equal(const inertiallabs_msgs__msg__GpsData * lhs, const inertiallabs_msgs__msg__GpsData * rhs);

/// Copy a msg/GpsData message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_inertiallabs_msgs
bool
inertiallabs_msgs__msg__GpsData__copy(
  const inertiallabs_msgs__msg__GpsData * input,
  inertiallabs_msgs__msg__GpsData * output);

/// Initialize array of msg/GpsData messages.
/**
 * It allocates the memory for the number of elements and calls
 * inertiallabs_msgs__msg__GpsData__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_inertiallabs_msgs
bool
inertiallabs_msgs__msg__GpsData__Sequence__init(inertiallabs_msgs__msg__GpsData__Sequence * array, size_t size);

/// Finalize array of msg/GpsData messages.
/**
 * It calls
 * inertiallabs_msgs__msg__GpsData__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_inertiallabs_msgs
void
inertiallabs_msgs__msg__GpsData__Sequence__fini(inertiallabs_msgs__msg__GpsData__Sequence * array);

/// Create array of msg/GpsData messages.
/**
 * It allocates the memory for the array and calls
 * inertiallabs_msgs__msg__GpsData__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_inertiallabs_msgs
inertiallabs_msgs__msg__GpsData__Sequence *
inertiallabs_msgs__msg__GpsData__Sequence__create(size_t size);

/// Destroy array of msg/GpsData messages.
/**
 * It calls
 * inertiallabs_msgs__msg__GpsData__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_inertiallabs_msgs
void
inertiallabs_msgs__msg__GpsData__Sequence__destroy(inertiallabs_msgs__msg__GpsData__Sequence * array);

/// Check for msg/GpsData message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_inertiallabs_msgs
bool
inertiallabs_msgs__msg__GpsData__Sequence__are_equal(const inertiallabs_msgs__msg__GpsData__Sequence * lhs, const inertiallabs_msgs__msg__GpsData__Sequence * rhs);

/// Copy an array of msg/GpsData messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_inertiallabs_msgs
bool
inertiallabs_msgs__msg__GpsData__Sequence__copy(
  const inertiallabs_msgs__msg__GpsData__Sequence * input,
  inertiallabs_msgs__msg__GpsData__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // INERTIALLABS_MSGS__MSG__DETAIL__GPS_DATA__FUNCTIONS_H_
