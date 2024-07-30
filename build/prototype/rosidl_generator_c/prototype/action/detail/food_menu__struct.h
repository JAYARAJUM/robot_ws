// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from prototype:action/FoodMenu.idl
// generated code does not contain a copyright notice

#ifndef PROTOTYPE__ACTION__DETAIL__FOOD_MENU__STRUCT_H_
#define PROTOTYPE__ACTION__DETAIL__FOOD_MENU__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'order'
#include "rosidl_runtime_c/string.h"

/// Struct defined in action/FoodMenu in the package prototype.
typedef struct prototype__action__FoodMenu_Goal
{
  rosidl_runtime_c__String order;
} prototype__action__FoodMenu_Goal;

// Struct for a sequence of prototype__action__FoodMenu_Goal.
typedef struct prototype__action__FoodMenu_Goal__Sequence
{
  prototype__action__FoodMenu_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} prototype__action__FoodMenu_Goal__Sequence;


// Constants defined in the message

/// Struct defined in action/FoodMenu in the package prototype.
typedef struct prototype__action__FoodMenu_Result
{
  bool done;
} prototype__action__FoodMenu_Result;

// Struct for a sequence of prototype__action__FoodMenu_Result.
typedef struct prototype__action__FoodMenu_Result__Sequence
{
  prototype__action__FoodMenu_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} prototype__action__FoodMenu_Result__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'waiting'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in action/FoodMenu in the package prototype.
typedef struct prototype__action__FoodMenu_Feedback
{
  rosidl_runtime_c__String waiting;
} prototype__action__FoodMenu_Feedback;

// Struct for a sequence of prototype__action__FoodMenu_Feedback.
typedef struct prototype__action__FoodMenu_Feedback__Sequence
{
  prototype__action__FoodMenu_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} prototype__action__FoodMenu_Feedback__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "prototype/action/detail/food_menu__struct.h"

/// Struct defined in action/FoodMenu in the package prototype.
typedef struct prototype__action__FoodMenu_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  prototype__action__FoodMenu_Goal goal;
} prototype__action__FoodMenu_SendGoal_Request;

// Struct for a sequence of prototype__action__FoodMenu_SendGoal_Request.
typedef struct prototype__action__FoodMenu_SendGoal_Request__Sequence
{
  prototype__action__FoodMenu_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} prototype__action__FoodMenu_SendGoal_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/FoodMenu in the package prototype.
typedef struct prototype__action__FoodMenu_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} prototype__action__FoodMenu_SendGoal_Response;

// Struct for a sequence of prototype__action__FoodMenu_SendGoal_Response.
typedef struct prototype__action__FoodMenu_SendGoal_Response__Sequence
{
  prototype__action__FoodMenu_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} prototype__action__FoodMenu_SendGoal_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in action/FoodMenu in the package prototype.
typedef struct prototype__action__FoodMenu_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} prototype__action__FoodMenu_GetResult_Request;

// Struct for a sequence of prototype__action__FoodMenu_GetResult_Request.
typedef struct prototype__action__FoodMenu_GetResult_Request__Sequence
{
  prototype__action__FoodMenu_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} prototype__action__FoodMenu_GetResult_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "prototype/action/detail/food_menu__struct.h"

/// Struct defined in action/FoodMenu in the package prototype.
typedef struct prototype__action__FoodMenu_GetResult_Response
{
  int8_t status;
  prototype__action__FoodMenu_Result result;
} prototype__action__FoodMenu_GetResult_Response;

// Struct for a sequence of prototype__action__FoodMenu_GetResult_Response.
typedef struct prototype__action__FoodMenu_GetResult_Response__Sequence
{
  prototype__action__FoodMenu_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} prototype__action__FoodMenu_GetResult_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "prototype/action/detail/food_menu__struct.h"

/// Struct defined in action/FoodMenu in the package prototype.
typedef struct prototype__action__FoodMenu_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  prototype__action__FoodMenu_Feedback feedback;
} prototype__action__FoodMenu_FeedbackMessage;

// Struct for a sequence of prototype__action__FoodMenu_FeedbackMessage.
typedef struct prototype__action__FoodMenu_FeedbackMessage__Sequence
{
  prototype__action__FoodMenu_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} prototype__action__FoodMenu_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PROTOTYPE__ACTION__DETAIL__FOOD_MENU__STRUCT_H_
