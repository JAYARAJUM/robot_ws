// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from prototype:msg/Food.idl
// generated code does not contain a copyright notice

#ifndef PROTOTYPE__MSG__DETAIL__FOOD__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define PROTOTYPE__MSG__DETAIL__FOOD__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "prototype/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "prototype/msg/detail/food__struct.hpp"

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

#include "fastcdr/Cdr.h"

namespace prototype
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_prototype
cdr_serialize(
  const prototype::msg::Food & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_prototype
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  prototype::msg::Food & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_prototype
get_serialized_size(
  const prototype::msg::Food & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_prototype
max_serialized_size_Food(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace prototype

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_prototype
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, prototype, msg, Food)();

#ifdef __cplusplus
}
#endif

#endif  // PROTOTYPE__MSG__DETAIL__FOOD__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
