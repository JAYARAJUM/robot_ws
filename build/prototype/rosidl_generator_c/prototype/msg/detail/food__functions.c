// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from prototype:msg/Food.idl
// generated code does not contain a copyright notice
#include "prototype/msg/detail/food__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `food_type`
#include "rosidl_runtime_c/string_functions.h"

bool
prototype__msg__Food__init(prototype__msg__Food * msg)
{
  if (!msg) {
    return false;
  }
  // table_number
  // food_type
  if (!rosidl_runtime_c__String__init(&msg->food_type)) {
    prototype__msg__Food__fini(msg);
    return false;
  }
  // qty
  return true;
}

void
prototype__msg__Food__fini(prototype__msg__Food * msg)
{
  if (!msg) {
    return;
  }
  // table_number
  // food_type
  rosidl_runtime_c__String__fini(&msg->food_type);
  // qty
}

bool
prototype__msg__Food__are_equal(const prototype__msg__Food * lhs, const prototype__msg__Food * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // table_number
  if (lhs->table_number != rhs->table_number) {
    return false;
  }
  // food_type
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->food_type), &(rhs->food_type)))
  {
    return false;
  }
  // qty
  if (lhs->qty != rhs->qty) {
    return false;
  }
  return true;
}

bool
prototype__msg__Food__copy(
  const prototype__msg__Food * input,
  prototype__msg__Food * output)
{
  if (!input || !output) {
    return false;
  }
  // table_number
  output->table_number = input->table_number;
  // food_type
  if (!rosidl_runtime_c__String__copy(
      &(input->food_type), &(output->food_type)))
  {
    return false;
  }
  // qty
  output->qty = input->qty;
  return true;
}

prototype__msg__Food *
prototype__msg__Food__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  prototype__msg__Food * msg = (prototype__msg__Food *)allocator.allocate(sizeof(prototype__msg__Food), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(prototype__msg__Food));
  bool success = prototype__msg__Food__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
prototype__msg__Food__destroy(prototype__msg__Food * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    prototype__msg__Food__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
prototype__msg__Food__Sequence__init(prototype__msg__Food__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  prototype__msg__Food * data = NULL;

  if (size) {
    data = (prototype__msg__Food *)allocator.zero_allocate(size, sizeof(prototype__msg__Food), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = prototype__msg__Food__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        prototype__msg__Food__fini(&data[i - 1]);
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
prototype__msg__Food__Sequence__fini(prototype__msg__Food__Sequence * array)
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
      prototype__msg__Food__fini(&array->data[i]);
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

prototype__msg__Food__Sequence *
prototype__msg__Food__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  prototype__msg__Food__Sequence * array = (prototype__msg__Food__Sequence *)allocator.allocate(sizeof(prototype__msg__Food__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = prototype__msg__Food__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
prototype__msg__Food__Sequence__destroy(prototype__msg__Food__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    prototype__msg__Food__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
prototype__msg__Food__Sequence__are_equal(const prototype__msg__Food__Sequence * lhs, const prototype__msg__Food__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!prototype__msg__Food__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
prototype__msg__Food__Sequence__copy(
  const prototype__msg__Food__Sequence * input,
  prototype__msg__Food__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(prototype__msg__Food);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    prototype__msg__Food * data =
      (prototype__msg__Food *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!prototype__msg__Food__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          prototype__msg__Food__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!prototype__msg__Food__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
