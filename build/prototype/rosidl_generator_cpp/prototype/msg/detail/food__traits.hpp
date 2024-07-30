// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from prototype:msg/Food.idl
// generated code does not contain a copyright notice

#ifndef PROTOTYPE__MSG__DETAIL__FOOD__TRAITS_HPP_
#define PROTOTYPE__MSG__DETAIL__FOOD__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "prototype/msg/detail/food__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace prototype
{

namespace msg
{

inline void to_flow_style_yaml(
  const Food & msg,
  std::ostream & out)
{
  out << "{";
  // member: table_number
  {
    out << "table_number: ";
    rosidl_generator_traits::value_to_yaml(msg.table_number, out);
    out << ", ";
  }

  // member: food_type
  {
    out << "food_type: ";
    rosidl_generator_traits::value_to_yaml(msg.food_type, out);
    out << ", ";
  }

  // member: qty
  {
    out << "qty: ";
    rosidl_generator_traits::value_to_yaml(msg.qty, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Food & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: table_number
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "table_number: ";
    rosidl_generator_traits::value_to_yaml(msg.table_number, out);
    out << "\n";
  }

  // member: food_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "food_type: ";
    rosidl_generator_traits::value_to_yaml(msg.food_type, out);
    out << "\n";
  }

  // member: qty
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "qty: ";
    rosidl_generator_traits::value_to_yaml(msg.qty, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Food & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace prototype

namespace rosidl_generator_traits
{

[[deprecated("use prototype::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const prototype::msg::Food & msg,
  std::ostream & out, size_t indentation = 0)
{
  prototype::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use prototype::msg::to_yaml() instead")]]
inline std::string to_yaml(const prototype::msg::Food & msg)
{
  return prototype::msg::to_yaml(msg);
}

template<>
inline const char * data_type<prototype::msg::Food>()
{
  return "prototype::msg::Food";
}

template<>
inline const char * name<prototype::msg::Food>()
{
  return "prototype/msg/Food";
}

template<>
struct has_fixed_size<prototype::msg::Food>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<prototype::msg::Food>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<prototype::msg::Food>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PROTOTYPE__MSG__DETAIL__FOOD__TRAITS_HPP_
