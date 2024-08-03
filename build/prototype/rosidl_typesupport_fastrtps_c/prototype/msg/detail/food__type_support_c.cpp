// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from prototype:msg/Food.idl
// generated code does not contain a copyright notice
#include "prototype/msg/detail/food__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "prototype/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "prototype/msg/detail/food__struct.h"
#include "prototype/msg/detail/food__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "rosidl_runtime_c/string.h"  // food_type
#include "rosidl_runtime_c/string_functions.h"  // food_type

// forward declare type support functions


using _Food__ros_msg_type = prototype__msg__Food;

static bool _Food__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _Food__ros_msg_type * ros_message = static_cast<const _Food__ros_msg_type *>(untyped_ros_message);
  // Field name: table_number
  {
    cdr << ros_message->table_number;
  }

  // Field name: food_type
  {
    const rosidl_runtime_c__String * str = &ros_message->food_type;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: qty
  {
    cdr << ros_message->qty;
  }

  return true;
}

static bool _Food__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _Food__ros_msg_type * ros_message = static_cast<_Food__ros_msg_type *>(untyped_ros_message);
  // Field name: table_number
  {
    cdr >> ros_message->table_number;
  }

  // Field name: food_type
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->food_type.data) {
      rosidl_runtime_c__String__init(&ros_message->food_type);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->food_type,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'food_type'\n");
      return false;
    }
  }

  // Field name: qty
  {
    cdr >> ros_message->qty;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_prototype
size_t get_serialized_size_prototype__msg__Food(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Food__ros_msg_type * ros_message = static_cast<const _Food__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name table_number
  {
    size_t item_size = sizeof(ros_message->table_number);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name food_type
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->food_type.size + 1);
  // field.name qty
  {
    size_t item_size = sizeof(ros_message->qty);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _Food__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_prototype__msg__Food(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_prototype
size_t max_serialized_size_prototype__msg__Food(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: table_number
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: food_type
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: qty
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = prototype__msg__Food;
    is_plain =
      (
      offsetof(DataType, qty) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _Food__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_prototype__msg__Food(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_Food = {
  "prototype::msg",
  "Food",
  _Food__cdr_serialize,
  _Food__cdr_deserialize,
  _Food__get_serialized_size,
  _Food__max_serialized_size
};

static rosidl_message_type_support_t _Food__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_Food,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, prototype, msg, Food)() {
  return &_Food__type_support;
}

#if defined(__cplusplus)
}
#endif
