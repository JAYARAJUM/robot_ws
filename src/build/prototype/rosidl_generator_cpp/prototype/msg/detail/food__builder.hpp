// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from prototype:msg/Food.idl
// generated code does not contain a copyright notice

#ifndef PROTOTYPE__MSG__DETAIL__FOOD__BUILDER_HPP_
#define PROTOTYPE__MSG__DETAIL__FOOD__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "prototype/msg/detail/food__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace prototype
{

namespace msg
{

namespace builder
{

class Init_Food_qty
{
public:
  explicit Init_Food_qty(::prototype::msg::Food & msg)
  : msg_(msg)
  {}
  ::prototype::msg::Food qty(::prototype::msg::Food::_qty_type arg)
  {
    msg_.qty = std::move(arg);
    return std::move(msg_);
  }

private:
  ::prototype::msg::Food msg_;
};

class Init_Food_food_type
{
public:
  explicit Init_Food_food_type(::prototype::msg::Food & msg)
  : msg_(msg)
  {}
  Init_Food_qty food_type(::prototype::msg::Food::_food_type_type arg)
  {
    msg_.food_type = std::move(arg);
    return Init_Food_qty(msg_);
  }

private:
  ::prototype::msg::Food msg_;
};

class Init_Food_table_number
{
public:
  Init_Food_table_number()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Food_food_type table_number(::prototype::msg::Food::_table_number_type arg)
  {
    msg_.table_number = std::move(arg);
    return Init_Food_food_type(msg_);
  }

private:
  ::prototype::msg::Food msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::prototype::msg::Food>()
{
  return prototype::msg::builder::Init_Food_table_number();
}

}  // namespace prototype

#endif  // PROTOTYPE__MSG__DETAIL__FOOD__BUILDER_HPP_
