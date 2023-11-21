// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from prototype:msg/Food.idl
// generated code does not contain a copyright notice

#ifndef PROTOTYPE__MSG__DETAIL__FOOD__STRUCT_HPP_
#define PROTOTYPE__MSG__DETAIL__FOOD__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__prototype__msg__Food __attribute__((deprecated))
#else
# define DEPRECATED__prototype__msg__Food __declspec(deprecated)
#endif

namespace prototype
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Food_
{
  using Type = Food_<ContainerAllocator>;

  explicit Food_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->table_number = 0l;
      this->food_type = "";
      this->qty = 0l;
    }
  }

  explicit Food_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : food_type(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->table_number = 0l;
      this->food_type = "";
      this->qty = 0l;
    }
  }

  // field types and members
  using _table_number_type =
    int32_t;
  _table_number_type table_number;
  using _food_type_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _food_type_type food_type;
  using _qty_type =
    int32_t;
  _qty_type qty;

  // setters for named parameter idiom
  Type & set__table_number(
    const int32_t & _arg)
  {
    this->table_number = _arg;
    return *this;
  }
  Type & set__food_type(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->food_type = _arg;
    return *this;
  }
  Type & set__qty(
    const int32_t & _arg)
  {
    this->qty = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    prototype::msg::Food_<ContainerAllocator> *;
  using ConstRawPtr =
    const prototype::msg::Food_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<prototype::msg::Food_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<prototype::msg::Food_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      prototype::msg::Food_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<prototype::msg::Food_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      prototype::msg::Food_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<prototype::msg::Food_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<prototype::msg::Food_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<prototype::msg::Food_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__prototype__msg__Food
    std::shared_ptr<prototype::msg::Food_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__prototype__msg__Food
    std::shared_ptr<prototype::msg::Food_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Food_ & other) const
  {
    if (this->table_number != other.table_number) {
      return false;
    }
    if (this->food_type != other.food_type) {
      return false;
    }
    if (this->qty != other.qty) {
      return false;
    }
    return true;
  }
  bool operator!=(const Food_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Food_

// alias to use template instance with default allocator
using Food =
  prototype::msg::Food_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace prototype

#endif  // PROTOTYPE__MSG__DETAIL__FOOD__STRUCT_HPP_
