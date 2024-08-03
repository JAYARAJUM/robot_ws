// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from prototype:msg/Food.idl
// generated code does not contain a copyright notice

#ifndef PROTOTYPE__MSG__DETAIL__FOOD__FUNCTIONS_H_
#define PROTOTYPE__MSG__DETAIL__FOOD__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "prototype/msg/rosidl_generator_c__visibility_control.h"

#include "prototype/msg/detail/food__struct.h"

/// Initialize msg/Food message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * prototype__msg__Food
 * )) before or use
 * prototype__msg__Food__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_prototype
bool
prototype__msg__Food__init(prototype__msg__Food * msg);

/// Finalize msg/Food message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_prototype
void
prototype__msg__Food__fini(prototype__msg__Food * msg);

/// Create msg/Food message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * prototype__msg__Food__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_prototype
prototype__msg__Food *
prototype__msg__Food__create();

/// Destroy msg/Food message.
/**
 * It calls
 * prototype__msg__Food__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_prototype
void
prototype__msg__Food__destroy(prototype__msg__Food * msg);

/// Check for msg/Food message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_prototype
bool
prototype__msg__Food__are_equal(const prototype__msg__Food * lhs, const prototype__msg__Food * rhs);

/// Copy a msg/Food message.
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
ROSIDL_GENERATOR_C_PUBLIC_prototype
bool
prototype__msg__Food__copy(
  const prototype__msg__Food * input,
  prototype__msg__Food * output);

/// Initialize array of msg/Food messages.
/**
 * It allocates the memory for the number of elements and calls
 * prototype__msg__Food__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_prototype
bool
prototype__msg__Food__Sequence__init(prototype__msg__Food__Sequence * array, size_t size);

/// Finalize array of msg/Food messages.
/**
 * It calls
 * prototype__msg__Food__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_prototype
void
prototype__msg__Food__Sequence__fini(prototype__msg__Food__Sequence * array);

/// Create array of msg/Food messages.
/**
 * It allocates the memory for the array and calls
 * prototype__msg__Food__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_prototype
prototype__msg__Food__Sequence *
prototype__msg__Food__Sequence__create(size_t size);

/// Destroy array of msg/Food messages.
/**
 * It calls
 * prototype__msg__Food__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_prototype
void
prototype__msg__Food__Sequence__destroy(prototype__msg__Food__Sequence * array);

/// Check for msg/Food message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_prototype
bool
prototype__msg__Food__Sequence__are_equal(const prototype__msg__Food__Sequence * lhs, const prototype__msg__Food__Sequence * rhs);

/// Copy an array of msg/Food messages.
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
ROSIDL_GENERATOR_C_PUBLIC_prototype
bool
prototype__msg__Food__Sequence__copy(
  const prototype__msg__Food__Sequence * input,
  prototype__msg__Food__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // PROTOTYPE__MSG__DETAIL__FOOD__FUNCTIONS_H_
