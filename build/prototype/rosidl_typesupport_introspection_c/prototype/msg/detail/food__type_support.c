// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from prototype:msg/Food.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "prototype/msg/detail/food__rosidl_typesupport_introspection_c.h"
#include "prototype/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "prototype/msg/detail/food__functions.h"
#include "prototype/msg/detail/food__struct.h"


// Include directives for member types
// Member `food_type`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void prototype__msg__Food__rosidl_typesupport_introspection_c__Food_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  prototype__msg__Food__init(message_memory);
}

void prototype__msg__Food__rosidl_typesupport_introspection_c__Food_fini_function(void * message_memory)
{
  prototype__msg__Food__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember prototype__msg__Food__rosidl_typesupport_introspection_c__Food_message_member_array[3] = {
  {
    "table_number",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(prototype__msg__Food, table_number),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "food_type",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(prototype__msg__Food, food_type),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "qty",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(prototype__msg__Food, qty),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers prototype__msg__Food__rosidl_typesupport_introspection_c__Food_message_members = {
  "prototype__msg",  // message namespace
  "Food",  // message name
  3,  // number of fields
  sizeof(prototype__msg__Food),
  prototype__msg__Food__rosidl_typesupport_introspection_c__Food_message_member_array,  // message members
  prototype__msg__Food__rosidl_typesupport_introspection_c__Food_init_function,  // function to initialize message memory (memory has to be allocated)
  prototype__msg__Food__rosidl_typesupport_introspection_c__Food_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t prototype__msg__Food__rosidl_typesupport_introspection_c__Food_message_type_support_handle = {
  0,
  &prototype__msg__Food__rosidl_typesupport_introspection_c__Food_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_prototype
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, prototype, msg, Food)() {
  if (!prototype__msg__Food__rosidl_typesupport_introspection_c__Food_message_type_support_handle.typesupport_identifier) {
    prototype__msg__Food__rosidl_typesupport_introspection_c__Food_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &prototype__msg__Food__rosidl_typesupport_introspection_c__Food_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
