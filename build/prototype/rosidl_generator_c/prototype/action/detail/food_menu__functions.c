// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from prototype:action/FoodMenu.idl
// generated code does not contain a copyright notice
#include "prototype/action/detail/food_menu__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `order`
#include "rosidl_runtime_c/string_functions.h"

bool
prototype__action__FoodMenu_Goal__init(prototype__action__FoodMenu_Goal * msg)
{
  if (!msg) {
    return false;
  }
  // order
  if (!rosidl_runtime_c__String__init(&msg->order)) {
    prototype__action__FoodMenu_Goal__fini(msg);
    return false;
  }
  return true;
}

void
prototype__action__FoodMenu_Goal__fini(prototype__action__FoodMenu_Goal * msg)
{
  if (!msg) {
    return;
  }
  // order
  rosidl_runtime_c__String__fini(&msg->order);
}

bool
prototype__action__FoodMenu_Goal__are_equal(const prototype__action__FoodMenu_Goal * lhs, const prototype__action__FoodMenu_Goal * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // order
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->order), &(rhs->order)))
  {
    return false;
  }
  return true;
}

bool
prototype__action__FoodMenu_Goal__copy(
  const prototype__action__FoodMenu_Goal * input,
  prototype__action__FoodMenu_Goal * output)
{
  if (!input || !output) {
    return false;
  }
  // order
  if (!rosidl_runtime_c__String__copy(
      &(input->order), &(output->order)))
  {
    return false;
  }
  return true;
}

prototype__action__FoodMenu_Goal *
prototype__action__FoodMenu_Goal__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  prototype__action__FoodMenu_Goal * msg = (prototype__action__FoodMenu_Goal *)allocator.allocate(sizeof(prototype__action__FoodMenu_Goal), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(prototype__action__FoodMenu_Goal));
  bool success = prototype__action__FoodMenu_Goal__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
prototype__action__FoodMenu_Goal__destroy(prototype__action__FoodMenu_Goal * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    prototype__action__FoodMenu_Goal__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
prototype__action__FoodMenu_Goal__Sequence__init(prototype__action__FoodMenu_Goal__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  prototype__action__FoodMenu_Goal * data = NULL;

  if (size) {
    data = (prototype__action__FoodMenu_Goal *)allocator.zero_allocate(size, sizeof(prototype__action__FoodMenu_Goal), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = prototype__action__FoodMenu_Goal__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        prototype__action__FoodMenu_Goal__fini(&data[i - 1]);
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
prototype__action__FoodMenu_Goal__Sequence__fini(prototype__action__FoodMenu_Goal__Sequence * array)
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
      prototype__action__FoodMenu_Goal__fini(&array->data[i]);
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

prototype__action__FoodMenu_Goal__Sequence *
prototype__action__FoodMenu_Goal__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  prototype__action__FoodMenu_Goal__Sequence * array = (prototype__action__FoodMenu_Goal__Sequence *)allocator.allocate(sizeof(prototype__action__FoodMenu_Goal__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = prototype__action__FoodMenu_Goal__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
prototype__action__FoodMenu_Goal__Sequence__destroy(prototype__action__FoodMenu_Goal__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    prototype__action__FoodMenu_Goal__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
prototype__action__FoodMenu_Goal__Sequence__are_equal(const prototype__action__FoodMenu_Goal__Sequence * lhs, const prototype__action__FoodMenu_Goal__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!prototype__action__FoodMenu_Goal__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
prototype__action__FoodMenu_Goal__Sequence__copy(
  const prototype__action__FoodMenu_Goal__Sequence * input,
  prototype__action__FoodMenu_Goal__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(prototype__action__FoodMenu_Goal);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    prototype__action__FoodMenu_Goal * data =
      (prototype__action__FoodMenu_Goal *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!prototype__action__FoodMenu_Goal__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          prototype__action__FoodMenu_Goal__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!prototype__action__FoodMenu_Goal__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
prototype__action__FoodMenu_Result__init(prototype__action__FoodMenu_Result * msg)
{
  if (!msg) {
    return false;
  }
  // done
  return true;
}

void
prototype__action__FoodMenu_Result__fini(prototype__action__FoodMenu_Result * msg)
{
  if (!msg) {
    return;
  }
  // done
}

bool
prototype__action__FoodMenu_Result__are_equal(const prototype__action__FoodMenu_Result * lhs, const prototype__action__FoodMenu_Result * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // done
  if (lhs->done != rhs->done) {
    return false;
  }
  return true;
}

bool
prototype__action__FoodMenu_Result__copy(
  const prototype__action__FoodMenu_Result * input,
  prototype__action__FoodMenu_Result * output)
{
  if (!input || !output) {
    return false;
  }
  // done
  output->done = input->done;
  return true;
}

prototype__action__FoodMenu_Result *
prototype__action__FoodMenu_Result__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  prototype__action__FoodMenu_Result * msg = (prototype__action__FoodMenu_Result *)allocator.allocate(sizeof(prototype__action__FoodMenu_Result), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(prototype__action__FoodMenu_Result));
  bool success = prototype__action__FoodMenu_Result__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
prototype__action__FoodMenu_Result__destroy(prototype__action__FoodMenu_Result * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    prototype__action__FoodMenu_Result__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
prototype__action__FoodMenu_Result__Sequence__init(prototype__action__FoodMenu_Result__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  prototype__action__FoodMenu_Result * data = NULL;

  if (size) {
    data = (prototype__action__FoodMenu_Result *)allocator.zero_allocate(size, sizeof(prototype__action__FoodMenu_Result), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = prototype__action__FoodMenu_Result__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        prototype__action__FoodMenu_Result__fini(&data[i - 1]);
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
prototype__action__FoodMenu_Result__Sequence__fini(prototype__action__FoodMenu_Result__Sequence * array)
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
      prototype__action__FoodMenu_Result__fini(&array->data[i]);
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

prototype__action__FoodMenu_Result__Sequence *
prototype__action__FoodMenu_Result__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  prototype__action__FoodMenu_Result__Sequence * array = (prototype__action__FoodMenu_Result__Sequence *)allocator.allocate(sizeof(prototype__action__FoodMenu_Result__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = prototype__action__FoodMenu_Result__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
prototype__action__FoodMenu_Result__Sequence__destroy(prototype__action__FoodMenu_Result__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    prototype__action__FoodMenu_Result__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
prototype__action__FoodMenu_Result__Sequence__are_equal(const prototype__action__FoodMenu_Result__Sequence * lhs, const prototype__action__FoodMenu_Result__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!prototype__action__FoodMenu_Result__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
prototype__action__FoodMenu_Result__Sequence__copy(
  const prototype__action__FoodMenu_Result__Sequence * input,
  prototype__action__FoodMenu_Result__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(prototype__action__FoodMenu_Result);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    prototype__action__FoodMenu_Result * data =
      (prototype__action__FoodMenu_Result *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!prototype__action__FoodMenu_Result__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          prototype__action__FoodMenu_Result__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!prototype__action__FoodMenu_Result__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `waiting`
// already included above
// #include "rosidl_runtime_c/string_functions.h"

bool
prototype__action__FoodMenu_Feedback__init(prototype__action__FoodMenu_Feedback * msg)
{
  if (!msg) {
    return false;
  }
  // waiting
  if (!rosidl_runtime_c__String__init(&msg->waiting)) {
    prototype__action__FoodMenu_Feedback__fini(msg);
    return false;
  }
  return true;
}

void
prototype__action__FoodMenu_Feedback__fini(prototype__action__FoodMenu_Feedback * msg)
{
  if (!msg) {
    return;
  }
  // waiting
  rosidl_runtime_c__String__fini(&msg->waiting);
}

bool
prototype__action__FoodMenu_Feedback__are_equal(const prototype__action__FoodMenu_Feedback * lhs, const prototype__action__FoodMenu_Feedback * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // waiting
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->waiting), &(rhs->waiting)))
  {
    return false;
  }
  return true;
}

bool
prototype__action__FoodMenu_Feedback__copy(
  const prototype__action__FoodMenu_Feedback * input,
  prototype__action__FoodMenu_Feedback * output)
{
  if (!input || !output) {
    return false;
  }
  // waiting
  if (!rosidl_runtime_c__String__copy(
      &(input->waiting), &(output->waiting)))
  {
    return false;
  }
  return true;
}

prototype__action__FoodMenu_Feedback *
prototype__action__FoodMenu_Feedback__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  prototype__action__FoodMenu_Feedback * msg = (prototype__action__FoodMenu_Feedback *)allocator.allocate(sizeof(prototype__action__FoodMenu_Feedback), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(prototype__action__FoodMenu_Feedback));
  bool success = prototype__action__FoodMenu_Feedback__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
prototype__action__FoodMenu_Feedback__destroy(prototype__action__FoodMenu_Feedback * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    prototype__action__FoodMenu_Feedback__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
prototype__action__FoodMenu_Feedback__Sequence__init(prototype__action__FoodMenu_Feedback__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  prototype__action__FoodMenu_Feedback * data = NULL;

  if (size) {
    data = (prototype__action__FoodMenu_Feedback *)allocator.zero_allocate(size, sizeof(prototype__action__FoodMenu_Feedback), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = prototype__action__FoodMenu_Feedback__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        prototype__action__FoodMenu_Feedback__fini(&data[i - 1]);
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
prototype__action__FoodMenu_Feedback__Sequence__fini(prototype__action__FoodMenu_Feedback__Sequence * array)
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
      prototype__action__FoodMenu_Feedback__fini(&array->data[i]);
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

prototype__action__FoodMenu_Feedback__Sequence *
prototype__action__FoodMenu_Feedback__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  prototype__action__FoodMenu_Feedback__Sequence * array = (prototype__action__FoodMenu_Feedback__Sequence *)allocator.allocate(sizeof(prototype__action__FoodMenu_Feedback__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = prototype__action__FoodMenu_Feedback__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
prototype__action__FoodMenu_Feedback__Sequence__destroy(prototype__action__FoodMenu_Feedback__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    prototype__action__FoodMenu_Feedback__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
prototype__action__FoodMenu_Feedback__Sequence__are_equal(const prototype__action__FoodMenu_Feedback__Sequence * lhs, const prototype__action__FoodMenu_Feedback__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!prototype__action__FoodMenu_Feedback__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
prototype__action__FoodMenu_Feedback__Sequence__copy(
  const prototype__action__FoodMenu_Feedback__Sequence * input,
  prototype__action__FoodMenu_Feedback__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(prototype__action__FoodMenu_Feedback);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    prototype__action__FoodMenu_Feedback * data =
      (prototype__action__FoodMenu_Feedback *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!prototype__action__FoodMenu_Feedback__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          prototype__action__FoodMenu_Feedback__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!prototype__action__FoodMenu_Feedback__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
#include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `goal`
// already included above
// #include "prototype/action/detail/food_menu__functions.h"

bool
prototype__action__FoodMenu_SendGoal_Request__init(prototype__action__FoodMenu_SendGoal_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    prototype__action__FoodMenu_SendGoal_Request__fini(msg);
    return false;
  }
  // goal
  if (!prototype__action__FoodMenu_Goal__init(&msg->goal)) {
    prototype__action__FoodMenu_SendGoal_Request__fini(msg);
    return false;
  }
  return true;
}

void
prototype__action__FoodMenu_SendGoal_Request__fini(prototype__action__FoodMenu_SendGoal_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // goal
  prototype__action__FoodMenu_Goal__fini(&msg->goal);
}

bool
prototype__action__FoodMenu_SendGoal_Request__are_equal(const prototype__action__FoodMenu_SendGoal_Request * lhs, const prototype__action__FoodMenu_SendGoal_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  // goal
  if (!prototype__action__FoodMenu_Goal__are_equal(
      &(lhs->goal), &(rhs->goal)))
  {
    return false;
  }
  return true;
}

bool
prototype__action__FoodMenu_SendGoal_Request__copy(
  const prototype__action__FoodMenu_SendGoal_Request * input,
  prototype__action__FoodMenu_SendGoal_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  // goal
  if (!prototype__action__FoodMenu_Goal__copy(
      &(input->goal), &(output->goal)))
  {
    return false;
  }
  return true;
}

prototype__action__FoodMenu_SendGoal_Request *
prototype__action__FoodMenu_SendGoal_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  prototype__action__FoodMenu_SendGoal_Request * msg = (prototype__action__FoodMenu_SendGoal_Request *)allocator.allocate(sizeof(prototype__action__FoodMenu_SendGoal_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(prototype__action__FoodMenu_SendGoal_Request));
  bool success = prototype__action__FoodMenu_SendGoal_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
prototype__action__FoodMenu_SendGoal_Request__destroy(prototype__action__FoodMenu_SendGoal_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    prototype__action__FoodMenu_SendGoal_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
prototype__action__FoodMenu_SendGoal_Request__Sequence__init(prototype__action__FoodMenu_SendGoal_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  prototype__action__FoodMenu_SendGoal_Request * data = NULL;

  if (size) {
    data = (prototype__action__FoodMenu_SendGoal_Request *)allocator.zero_allocate(size, sizeof(prototype__action__FoodMenu_SendGoal_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = prototype__action__FoodMenu_SendGoal_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        prototype__action__FoodMenu_SendGoal_Request__fini(&data[i - 1]);
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
prototype__action__FoodMenu_SendGoal_Request__Sequence__fini(prototype__action__FoodMenu_SendGoal_Request__Sequence * array)
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
      prototype__action__FoodMenu_SendGoal_Request__fini(&array->data[i]);
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

prototype__action__FoodMenu_SendGoal_Request__Sequence *
prototype__action__FoodMenu_SendGoal_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  prototype__action__FoodMenu_SendGoal_Request__Sequence * array = (prototype__action__FoodMenu_SendGoal_Request__Sequence *)allocator.allocate(sizeof(prototype__action__FoodMenu_SendGoal_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = prototype__action__FoodMenu_SendGoal_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
prototype__action__FoodMenu_SendGoal_Request__Sequence__destroy(prototype__action__FoodMenu_SendGoal_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    prototype__action__FoodMenu_SendGoal_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
prototype__action__FoodMenu_SendGoal_Request__Sequence__are_equal(const prototype__action__FoodMenu_SendGoal_Request__Sequence * lhs, const prototype__action__FoodMenu_SendGoal_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!prototype__action__FoodMenu_SendGoal_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
prototype__action__FoodMenu_SendGoal_Request__Sequence__copy(
  const prototype__action__FoodMenu_SendGoal_Request__Sequence * input,
  prototype__action__FoodMenu_SendGoal_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(prototype__action__FoodMenu_SendGoal_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    prototype__action__FoodMenu_SendGoal_Request * data =
      (prototype__action__FoodMenu_SendGoal_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!prototype__action__FoodMenu_SendGoal_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          prototype__action__FoodMenu_SendGoal_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!prototype__action__FoodMenu_SendGoal_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__functions.h"

bool
prototype__action__FoodMenu_SendGoal_Response__init(prototype__action__FoodMenu_SendGoal_Response * msg)
{
  if (!msg) {
    return false;
  }
  // accepted
  // stamp
  if (!builtin_interfaces__msg__Time__init(&msg->stamp)) {
    prototype__action__FoodMenu_SendGoal_Response__fini(msg);
    return false;
  }
  return true;
}

void
prototype__action__FoodMenu_SendGoal_Response__fini(prototype__action__FoodMenu_SendGoal_Response * msg)
{
  if (!msg) {
    return;
  }
  // accepted
  // stamp
  builtin_interfaces__msg__Time__fini(&msg->stamp);
}

bool
prototype__action__FoodMenu_SendGoal_Response__are_equal(const prototype__action__FoodMenu_SendGoal_Response * lhs, const prototype__action__FoodMenu_SendGoal_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // accepted
  if (lhs->accepted != rhs->accepted) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->stamp), &(rhs->stamp)))
  {
    return false;
  }
  return true;
}

bool
prototype__action__FoodMenu_SendGoal_Response__copy(
  const prototype__action__FoodMenu_SendGoal_Response * input,
  prototype__action__FoodMenu_SendGoal_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // accepted
  output->accepted = input->accepted;
  // stamp
  if (!builtin_interfaces__msg__Time__copy(
      &(input->stamp), &(output->stamp)))
  {
    return false;
  }
  return true;
}

prototype__action__FoodMenu_SendGoal_Response *
prototype__action__FoodMenu_SendGoal_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  prototype__action__FoodMenu_SendGoal_Response * msg = (prototype__action__FoodMenu_SendGoal_Response *)allocator.allocate(sizeof(prototype__action__FoodMenu_SendGoal_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(prototype__action__FoodMenu_SendGoal_Response));
  bool success = prototype__action__FoodMenu_SendGoal_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
prototype__action__FoodMenu_SendGoal_Response__destroy(prototype__action__FoodMenu_SendGoal_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    prototype__action__FoodMenu_SendGoal_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
prototype__action__FoodMenu_SendGoal_Response__Sequence__init(prototype__action__FoodMenu_SendGoal_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  prototype__action__FoodMenu_SendGoal_Response * data = NULL;

  if (size) {
    data = (prototype__action__FoodMenu_SendGoal_Response *)allocator.zero_allocate(size, sizeof(prototype__action__FoodMenu_SendGoal_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = prototype__action__FoodMenu_SendGoal_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        prototype__action__FoodMenu_SendGoal_Response__fini(&data[i - 1]);
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
prototype__action__FoodMenu_SendGoal_Response__Sequence__fini(prototype__action__FoodMenu_SendGoal_Response__Sequence * array)
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
      prototype__action__FoodMenu_SendGoal_Response__fini(&array->data[i]);
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

prototype__action__FoodMenu_SendGoal_Response__Sequence *
prototype__action__FoodMenu_SendGoal_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  prototype__action__FoodMenu_SendGoal_Response__Sequence * array = (prototype__action__FoodMenu_SendGoal_Response__Sequence *)allocator.allocate(sizeof(prototype__action__FoodMenu_SendGoal_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = prototype__action__FoodMenu_SendGoal_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
prototype__action__FoodMenu_SendGoal_Response__Sequence__destroy(prototype__action__FoodMenu_SendGoal_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    prototype__action__FoodMenu_SendGoal_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
prototype__action__FoodMenu_SendGoal_Response__Sequence__are_equal(const prototype__action__FoodMenu_SendGoal_Response__Sequence * lhs, const prototype__action__FoodMenu_SendGoal_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!prototype__action__FoodMenu_SendGoal_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
prototype__action__FoodMenu_SendGoal_Response__Sequence__copy(
  const prototype__action__FoodMenu_SendGoal_Response__Sequence * input,
  prototype__action__FoodMenu_SendGoal_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(prototype__action__FoodMenu_SendGoal_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    prototype__action__FoodMenu_SendGoal_Response * data =
      (prototype__action__FoodMenu_SendGoal_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!prototype__action__FoodMenu_SendGoal_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          prototype__action__FoodMenu_SendGoal_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!prototype__action__FoodMenu_SendGoal_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"

bool
prototype__action__FoodMenu_GetResult_Request__init(prototype__action__FoodMenu_GetResult_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    prototype__action__FoodMenu_GetResult_Request__fini(msg);
    return false;
  }
  return true;
}

void
prototype__action__FoodMenu_GetResult_Request__fini(prototype__action__FoodMenu_GetResult_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
}

bool
prototype__action__FoodMenu_GetResult_Request__are_equal(const prototype__action__FoodMenu_GetResult_Request * lhs, const prototype__action__FoodMenu_GetResult_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  return true;
}

bool
prototype__action__FoodMenu_GetResult_Request__copy(
  const prototype__action__FoodMenu_GetResult_Request * input,
  prototype__action__FoodMenu_GetResult_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  return true;
}

prototype__action__FoodMenu_GetResult_Request *
prototype__action__FoodMenu_GetResult_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  prototype__action__FoodMenu_GetResult_Request * msg = (prototype__action__FoodMenu_GetResult_Request *)allocator.allocate(sizeof(prototype__action__FoodMenu_GetResult_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(prototype__action__FoodMenu_GetResult_Request));
  bool success = prototype__action__FoodMenu_GetResult_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
prototype__action__FoodMenu_GetResult_Request__destroy(prototype__action__FoodMenu_GetResult_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    prototype__action__FoodMenu_GetResult_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
prototype__action__FoodMenu_GetResult_Request__Sequence__init(prototype__action__FoodMenu_GetResult_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  prototype__action__FoodMenu_GetResult_Request * data = NULL;

  if (size) {
    data = (prototype__action__FoodMenu_GetResult_Request *)allocator.zero_allocate(size, sizeof(prototype__action__FoodMenu_GetResult_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = prototype__action__FoodMenu_GetResult_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        prototype__action__FoodMenu_GetResult_Request__fini(&data[i - 1]);
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
prototype__action__FoodMenu_GetResult_Request__Sequence__fini(prototype__action__FoodMenu_GetResult_Request__Sequence * array)
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
      prototype__action__FoodMenu_GetResult_Request__fini(&array->data[i]);
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

prototype__action__FoodMenu_GetResult_Request__Sequence *
prototype__action__FoodMenu_GetResult_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  prototype__action__FoodMenu_GetResult_Request__Sequence * array = (prototype__action__FoodMenu_GetResult_Request__Sequence *)allocator.allocate(sizeof(prototype__action__FoodMenu_GetResult_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = prototype__action__FoodMenu_GetResult_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
prototype__action__FoodMenu_GetResult_Request__Sequence__destroy(prototype__action__FoodMenu_GetResult_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    prototype__action__FoodMenu_GetResult_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
prototype__action__FoodMenu_GetResult_Request__Sequence__are_equal(const prototype__action__FoodMenu_GetResult_Request__Sequence * lhs, const prototype__action__FoodMenu_GetResult_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!prototype__action__FoodMenu_GetResult_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
prototype__action__FoodMenu_GetResult_Request__Sequence__copy(
  const prototype__action__FoodMenu_GetResult_Request__Sequence * input,
  prototype__action__FoodMenu_GetResult_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(prototype__action__FoodMenu_GetResult_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    prototype__action__FoodMenu_GetResult_Request * data =
      (prototype__action__FoodMenu_GetResult_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!prototype__action__FoodMenu_GetResult_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          prototype__action__FoodMenu_GetResult_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!prototype__action__FoodMenu_GetResult_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `result`
// already included above
// #include "prototype/action/detail/food_menu__functions.h"

bool
prototype__action__FoodMenu_GetResult_Response__init(prototype__action__FoodMenu_GetResult_Response * msg)
{
  if (!msg) {
    return false;
  }
  // status
  // result
  if (!prototype__action__FoodMenu_Result__init(&msg->result)) {
    prototype__action__FoodMenu_GetResult_Response__fini(msg);
    return false;
  }
  return true;
}

void
prototype__action__FoodMenu_GetResult_Response__fini(prototype__action__FoodMenu_GetResult_Response * msg)
{
  if (!msg) {
    return;
  }
  // status
  // result
  prototype__action__FoodMenu_Result__fini(&msg->result);
}

bool
prototype__action__FoodMenu_GetResult_Response__are_equal(const prototype__action__FoodMenu_GetResult_Response * lhs, const prototype__action__FoodMenu_GetResult_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // status
  if (lhs->status != rhs->status) {
    return false;
  }
  // result
  if (!prototype__action__FoodMenu_Result__are_equal(
      &(lhs->result), &(rhs->result)))
  {
    return false;
  }
  return true;
}

bool
prototype__action__FoodMenu_GetResult_Response__copy(
  const prototype__action__FoodMenu_GetResult_Response * input,
  prototype__action__FoodMenu_GetResult_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // status
  output->status = input->status;
  // result
  if (!prototype__action__FoodMenu_Result__copy(
      &(input->result), &(output->result)))
  {
    return false;
  }
  return true;
}

prototype__action__FoodMenu_GetResult_Response *
prototype__action__FoodMenu_GetResult_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  prototype__action__FoodMenu_GetResult_Response * msg = (prototype__action__FoodMenu_GetResult_Response *)allocator.allocate(sizeof(prototype__action__FoodMenu_GetResult_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(prototype__action__FoodMenu_GetResult_Response));
  bool success = prototype__action__FoodMenu_GetResult_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
prototype__action__FoodMenu_GetResult_Response__destroy(prototype__action__FoodMenu_GetResult_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    prototype__action__FoodMenu_GetResult_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
prototype__action__FoodMenu_GetResult_Response__Sequence__init(prototype__action__FoodMenu_GetResult_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  prototype__action__FoodMenu_GetResult_Response * data = NULL;

  if (size) {
    data = (prototype__action__FoodMenu_GetResult_Response *)allocator.zero_allocate(size, sizeof(prototype__action__FoodMenu_GetResult_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = prototype__action__FoodMenu_GetResult_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        prototype__action__FoodMenu_GetResult_Response__fini(&data[i - 1]);
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
prototype__action__FoodMenu_GetResult_Response__Sequence__fini(prototype__action__FoodMenu_GetResult_Response__Sequence * array)
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
      prototype__action__FoodMenu_GetResult_Response__fini(&array->data[i]);
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

prototype__action__FoodMenu_GetResult_Response__Sequence *
prototype__action__FoodMenu_GetResult_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  prototype__action__FoodMenu_GetResult_Response__Sequence * array = (prototype__action__FoodMenu_GetResult_Response__Sequence *)allocator.allocate(sizeof(prototype__action__FoodMenu_GetResult_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = prototype__action__FoodMenu_GetResult_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
prototype__action__FoodMenu_GetResult_Response__Sequence__destroy(prototype__action__FoodMenu_GetResult_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    prototype__action__FoodMenu_GetResult_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
prototype__action__FoodMenu_GetResult_Response__Sequence__are_equal(const prototype__action__FoodMenu_GetResult_Response__Sequence * lhs, const prototype__action__FoodMenu_GetResult_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!prototype__action__FoodMenu_GetResult_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
prototype__action__FoodMenu_GetResult_Response__Sequence__copy(
  const prototype__action__FoodMenu_GetResult_Response__Sequence * input,
  prototype__action__FoodMenu_GetResult_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(prototype__action__FoodMenu_GetResult_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    prototype__action__FoodMenu_GetResult_Response * data =
      (prototype__action__FoodMenu_GetResult_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!prototype__action__FoodMenu_GetResult_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          prototype__action__FoodMenu_GetResult_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!prototype__action__FoodMenu_GetResult_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `feedback`
// already included above
// #include "prototype/action/detail/food_menu__functions.h"

bool
prototype__action__FoodMenu_FeedbackMessage__init(prototype__action__FoodMenu_FeedbackMessage * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    prototype__action__FoodMenu_FeedbackMessage__fini(msg);
    return false;
  }
  // feedback
  if (!prototype__action__FoodMenu_Feedback__init(&msg->feedback)) {
    prototype__action__FoodMenu_FeedbackMessage__fini(msg);
    return false;
  }
  return true;
}

void
prototype__action__FoodMenu_FeedbackMessage__fini(prototype__action__FoodMenu_FeedbackMessage * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // feedback
  prototype__action__FoodMenu_Feedback__fini(&msg->feedback);
}

bool
prototype__action__FoodMenu_FeedbackMessage__are_equal(const prototype__action__FoodMenu_FeedbackMessage * lhs, const prototype__action__FoodMenu_FeedbackMessage * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  // feedback
  if (!prototype__action__FoodMenu_Feedback__are_equal(
      &(lhs->feedback), &(rhs->feedback)))
  {
    return false;
  }
  return true;
}

bool
prototype__action__FoodMenu_FeedbackMessage__copy(
  const prototype__action__FoodMenu_FeedbackMessage * input,
  prototype__action__FoodMenu_FeedbackMessage * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  // feedback
  if (!prototype__action__FoodMenu_Feedback__copy(
      &(input->feedback), &(output->feedback)))
  {
    return false;
  }
  return true;
}

prototype__action__FoodMenu_FeedbackMessage *
prototype__action__FoodMenu_FeedbackMessage__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  prototype__action__FoodMenu_FeedbackMessage * msg = (prototype__action__FoodMenu_FeedbackMessage *)allocator.allocate(sizeof(prototype__action__FoodMenu_FeedbackMessage), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(prototype__action__FoodMenu_FeedbackMessage));
  bool success = prototype__action__FoodMenu_FeedbackMessage__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
prototype__action__FoodMenu_FeedbackMessage__destroy(prototype__action__FoodMenu_FeedbackMessage * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    prototype__action__FoodMenu_FeedbackMessage__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
prototype__action__FoodMenu_FeedbackMessage__Sequence__init(prototype__action__FoodMenu_FeedbackMessage__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  prototype__action__FoodMenu_FeedbackMessage * data = NULL;

  if (size) {
    data = (prototype__action__FoodMenu_FeedbackMessage *)allocator.zero_allocate(size, sizeof(prototype__action__FoodMenu_FeedbackMessage), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = prototype__action__FoodMenu_FeedbackMessage__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        prototype__action__FoodMenu_FeedbackMessage__fini(&data[i - 1]);
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
prototype__action__FoodMenu_FeedbackMessage__Sequence__fini(prototype__action__FoodMenu_FeedbackMessage__Sequence * array)
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
      prototype__action__FoodMenu_FeedbackMessage__fini(&array->data[i]);
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

prototype__action__FoodMenu_FeedbackMessage__Sequence *
prototype__action__FoodMenu_FeedbackMessage__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  prototype__action__FoodMenu_FeedbackMessage__Sequence * array = (prototype__action__FoodMenu_FeedbackMessage__Sequence *)allocator.allocate(sizeof(prototype__action__FoodMenu_FeedbackMessage__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = prototype__action__FoodMenu_FeedbackMessage__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
prototype__action__FoodMenu_FeedbackMessage__Sequence__destroy(prototype__action__FoodMenu_FeedbackMessage__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    prototype__action__FoodMenu_FeedbackMessage__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
prototype__action__FoodMenu_FeedbackMessage__Sequence__are_equal(const prototype__action__FoodMenu_FeedbackMessage__Sequence * lhs, const prototype__action__FoodMenu_FeedbackMessage__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!prototype__action__FoodMenu_FeedbackMessage__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
prototype__action__FoodMenu_FeedbackMessage__Sequence__copy(
  const prototype__action__FoodMenu_FeedbackMessage__Sequence * input,
  prototype__action__FoodMenu_FeedbackMessage__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(prototype__action__FoodMenu_FeedbackMessage);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    prototype__action__FoodMenu_FeedbackMessage * data =
      (prototype__action__FoodMenu_FeedbackMessage *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!prototype__action__FoodMenu_FeedbackMessage__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          prototype__action__FoodMenu_FeedbackMessage__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!prototype__action__FoodMenu_FeedbackMessage__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
