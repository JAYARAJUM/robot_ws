// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from prototype:msg/Food.idl
// generated code does not contain a copyright notice

#ifndef PROTOTYPE__MSG__DETAIL__FOOD__STRUCT_H_
#define PROTOTYPE__MSG__DETAIL__FOOD__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'food_type'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/Food in the package prototype.
typedef struct prototype__msg__Food
{
  int32_t table_number;
  rosidl_runtime_c__String food_type;
  int32_t qty;
} prototype__msg__Food;

// Struct for a sequence of prototype__msg__Food.
typedef struct prototype__msg__Food__Sequence
{
  prototype__msg__Food * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} prototype__msg__Food__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PROTOTYPE__MSG__DETAIL__FOOD__STRUCT_H_
