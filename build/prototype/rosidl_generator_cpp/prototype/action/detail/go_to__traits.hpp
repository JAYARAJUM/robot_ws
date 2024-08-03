// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from prototype:action/GoTo.idl
// generated code does not contain a copyright notice

#ifndef PROTOTYPE__ACTION__DETAIL__GO_TO__TRAITS_HPP_
#define PROTOTYPE__ACTION__DETAIL__GO_TO__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "prototype/action/detail/go_to__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace prototype
{

namespace action
{

inline void to_flow_style_yaml(
  const GoTo_Goal & msg,
  std::ostream & out)
{
  out << "{";
  // member: x
  {
    out << "x: ";
    rosidl_generator_traits::value_to_yaml(msg.x, out);
    out << ", ";
  }

  // member: y
  {
    out << "y: ";
    rosidl_generator_traits::value_to_yaml(msg.y, out);
    out << ", ";
  }

  // member: z
  {
    out << "z: ";
    rosidl_generator_traits::value_to_yaml(msg.z, out);
    out << ", ";
  }

  // member: w
  {
    out << "w: ";
    rosidl_generator_traits::value_to_yaml(msg.w, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GoTo_Goal & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "x: ";
    rosidl_generator_traits::value_to_yaml(msg.x, out);
    out << "\n";
  }

  // member: y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "y: ";
    rosidl_generator_traits::value_to_yaml(msg.y, out);
    out << "\n";
  }

  // member: z
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "z: ";
    rosidl_generator_traits::value_to_yaml(msg.z, out);
    out << "\n";
  }

  // member: w
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "w: ";
    rosidl_generator_traits::value_to_yaml(msg.w, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GoTo_Goal & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace prototype

namespace rosidl_generator_traits
{

[[deprecated("use prototype::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const prototype::action::GoTo_Goal & msg,
  std::ostream & out, size_t indentation = 0)
{
  prototype::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use prototype::action::to_yaml() instead")]]
inline std::string to_yaml(const prototype::action::GoTo_Goal & msg)
{
  return prototype::action::to_yaml(msg);
}

template<>
inline const char * data_type<prototype::action::GoTo_Goal>()
{
  return "prototype::action::GoTo_Goal";
}

template<>
inline const char * name<prototype::action::GoTo_Goal>()
{
  return "prototype/action/GoTo_Goal";
}

template<>
struct has_fixed_size<prototype::action::GoTo_Goal>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<prototype::action::GoTo_Goal>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<prototype::action::GoTo_Goal>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace prototype
{

namespace action
{

inline void to_flow_style_yaml(
  const GoTo_Result & msg,
  std::ostream & out)
{
  out << "{";
  // member: success
  {
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GoTo_Result & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: success
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GoTo_Result & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace prototype

namespace rosidl_generator_traits
{

[[deprecated("use prototype::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const prototype::action::GoTo_Result & msg,
  std::ostream & out, size_t indentation = 0)
{
  prototype::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use prototype::action::to_yaml() instead")]]
inline std::string to_yaml(const prototype::action::GoTo_Result & msg)
{
  return prototype::action::to_yaml(msg);
}

template<>
inline const char * data_type<prototype::action::GoTo_Result>()
{
  return "prototype::action::GoTo_Result";
}

template<>
inline const char * name<prototype::action::GoTo_Result>()
{
  return "prototype/action/GoTo_Result";
}

template<>
struct has_fixed_size<prototype::action::GoTo_Result>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<prototype::action::GoTo_Result>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<prototype::action::GoTo_Result>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace prototype
{

namespace action
{

inline void to_flow_style_yaml(
  const GoTo_Feedback & msg,
  std::ostream & out)
{
  out << "{";
  // member: x
  {
    out << "x: ";
    rosidl_generator_traits::value_to_yaml(msg.x, out);
    out << ", ";
  }

  // member: y
  {
    out << "y: ";
    rosidl_generator_traits::value_to_yaml(msg.y, out);
    out << ", ";
  }

  // member: z
  {
    out << "z: ";
    rosidl_generator_traits::value_to_yaml(msg.z, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GoTo_Feedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "x: ";
    rosidl_generator_traits::value_to_yaml(msg.x, out);
    out << "\n";
  }

  // member: y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "y: ";
    rosidl_generator_traits::value_to_yaml(msg.y, out);
    out << "\n";
  }

  // member: z
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "z: ";
    rosidl_generator_traits::value_to_yaml(msg.z, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GoTo_Feedback & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace prototype

namespace rosidl_generator_traits
{

[[deprecated("use prototype::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const prototype::action::GoTo_Feedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  prototype::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use prototype::action::to_yaml() instead")]]
inline std::string to_yaml(const prototype::action::GoTo_Feedback & msg)
{
  return prototype::action::to_yaml(msg);
}

template<>
inline const char * data_type<prototype::action::GoTo_Feedback>()
{
  return "prototype::action::GoTo_Feedback";
}

template<>
inline const char * name<prototype::action::GoTo_Feedback>()
{
  return "prototype/action/GoTo_Feedback";
}

template<>
struct has_fixed_size<prototype::action::GoTo_Feedback>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<prototype::action::GoTo_Feedback>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<prototype::action::GoTo_Feedback>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'goal'
#include "prototype/action/detail/go_to__traits.hpp"

namespace prototype
{

namespace action
{

inline void to_flow_style_yaml(
  const GoTo_SendGoal_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
    out << ", ";
  }

  // member: goal
  {
    out << "goal: ";
    to_flow_style_yaml(msg.goal, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GoTo_SendGoal_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }

  // member: goal
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal:\n";
    to_block_style_yaml(msg.goal, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GoTo_SendGoal_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace prototype

namespace rosidl_generator_traits
{

[[deprecated("use prototype::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const prototype::action::GoTo_SendGoal_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  prototype::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use prototype::action::to_yaml() instead")]]
inline std::string to_yaml(const prototype::action::GoTo_SendGoal_Request & msg)
{
  return prototype::action::to_yaml(msg);
}

template<>
inline const char * data_type<prototype::action::GoTo_SendGoal_Request>()
{
  return "prototype::action::GoTo_SendGoal_Request";
}

template<>
inline const char * name<prototype::action::GoTo_SendGoal_Request>()
{
  return "prototype/action/GoTo_SendGoal_Request";
}

template<>
struct has_fixed_size<prototype::action::GoTo_SendGoal_Request>
  : std::integral_constant<bool, has_fixed_size<prototype::action::GoTo_Goal>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<prototype::action::GoTo_SendGoal_Request>
  : std::integral_constant<bool, has_bounded_size<prototype::action::GoTo_Goal>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<prototype::action::GoTo_SendGoal_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace prototype
{

namespace action
{

inline void to_flow_style_yaml(
  const GoTo_SendGoal_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: accepted
  {
    out << "accepted: ";
    rosidl_generator_traits::value_to_yaml(msg.accepted, out);
    out << ", ";
  }

  // member: stamp
  {
    out << "stamp: ";
    to_flow_style_yaml(msg.stamp, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GoTo_SendGoal_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: accepted
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "accepted: ";
    rosidl_generator_traits::value_to_yaml(msg.accepted, out);
    out << "\n";
  }

  // member: stamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stamp:\n";
    to_block_style_yaml(msg.stamp, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GoTo_SendGoal_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace prototype

namespace rosidl_generator_traits
{

[[deprecated("use prototype::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const prototype::action::GoTo_SendGoal_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  prototype::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use prototype::action::to_yaml() instead")]]
inline std::string to_yaml(const prototype::action::GoTo_SendGoal_Response & msg)
{
  return prototype::action::to_yaml(msg);
}

template<>
inline const char * data_type<prototype::action::GoTo_SendGoal_Response>()
{
  return "prototype::action::GoTo_SendGoal_Response";
}

template<>
inline const char * name<prototype::action::GoTo_SendGoal_Response>()
{
  return "prototype/action/GoTo_SendGoal_Response";
}

template<>
struct has_fixed_size<prototype::action::GoTo_SendGoal_Response>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<prototype::action::GoTo_SendGoal_Response>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct is_message<prototype::action::GoTo_SendGoal_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<prototype::action::GoTo_SendGoal>()
{
  return "prototype::action::GoTo_SendGoal";
}

template<>
inline const char * name<prototype::action::GoTo_SendGoal>()
{
  return "prototype/action/GoTo_SendGoal";
}

template<>
struct has_fixed_size<prototype::action::GoTo_SendGoal>
  : std::integral_constant<
    bool,
    has_fixed_size<prototype::action::GoTo_SendGoal_Request>::value &&
    has_fixed_size<prototype::action::GoTo_SendGoal_Response>::value
  >
{
};

template<>
struct has_bounded_size<prototype::action::GoTo_SendGoal>
  : std::integral_constant<
    bool,
    has_bounded_size<prototype::action::GoTo_SendGoal_Request>::value &&
    has_bounded_size<prototype::action::GoTo_SendGoal_Response>::value
  >
{
};

template<>
struct is_service<prototype::action::GoTo_SendGoal>
  : std::true_type
{
};

template<>
struct is_service_request<prototype::action::GoTo_SendGoal_Request>
  : std::true_type
{
};

template<>
struct is_service_response<prototype::action::GoTo_SendGoal_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"

namespace prototype
{

namespace action
{

inline void to_flow_style_yaml(
  const GoTo_GetResult_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GoTo_GetResult_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GoTo_GetResult_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace prototype

namespace rosidl_generator_traits
{

[[deprecated("use prototype::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const prototype::action::GoTo_GetResult_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  prototype::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use prototype::action::to_yaml() instead")]]
inline std::string to_yaml(const prototype::action::GoTo_GetResult_Request & msg)
{
  return prototype::action::to_yaml(msg);
}

template<>
inline const char * data_type<prototype::action::GoTo_GetResult_Request>()
{
  return "prototype::action::GoTo_GetResult_Request";
}

template<>
inline const char * name<prototype::action::GoTo_GetResult_Request>()
{
  return "prototype/action/GoTo_GetResult_Request";
}

template<>
struct has_fixed_size<prototype::action::GoTo_GetResult_Request>
  : std::integral_constant<bool, has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<prototype::action::GoTo_GetResult_Request>
  : std::integral_constant<bool, has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<prototype::action::GoTo_GetResult_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'result'
// already included above
// #include "prototype/action/detail/go_to__traits.hpp"

namespace prototype
{

namespace action
{

inline void to_flow_style_yaml(
  const GoTo_GetResult_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: status
  {
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << ", ";
  }

  // member: result
  {
    out << "result: ";
    to_flow_style_yaml(msg.result, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GoTo_GetResult_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << "\n";
  }

  // member: result
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "result:\n";
    to_block_style_yaml(msg.result, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GoTo_GetResult_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace prototype

namespace rosidl_generator_traits
{

[[deprecated("use prototype::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const prototype::action::GoTo_GetResult_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  prototype::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use prototype::action::to_yaml() instead")]]
inline std::string to_yaml(const prototype::action::GoTo_GetResult_Response & msg)
{
  return prototype::action::to_yaml(msg);
}

template<>
inline const char * data_type<prototype::action::GoTo_GetResult_Response>()
{
  return "prototype::action::GoTo_GetResult_Response";
}

template<>
inline const char * name<prototype::action::GoTo_GetResult_Response>()
{
  return "prototype/action/GoTo_GetResult_Response";
}

template<>
struct has_fixed_size<prototype::action::GoTo_GetResult_Response>
  : std::integral_constant<bool, has_fixed_size<prototype::action::GoTo_Result>::value> {};

template<>
struct has_bounded_size<prototype::action::GoTo_GetResult_Response>
  : std::integral_constant<bool, has_bounded_size<prototype::action::GoTo_Result>::value> {};

template<>
struct is_message<prototype::action::GoTo_GetResult_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<prototype::action::GoTo_GetResult>()
{
  return "prototype::action::GoTo_GetResult";
}

template<>
inline const char * name<prototype::action::GoTo_GetResult>()
{
  return "prototype/action/GoTo_GetResult";
}

template<>
struct has_fixed_size<prototype::action::GoTo_GetResult>
  : std::integral_constant<
    bool,
    has_fixed_size<prototype::action::GoTo_GetResult_Request>::value &&
    has_fixed_size<prototype::action::GoTo_GetResult_Response>::value
  >
{
};

template<>
struct has_bounded_size<prototype::action::GoTo_GetResult>
  : std::integral_constant<
    bool,
    has_bounded_size<prototype::action::GoTo_GetResult_Request>::value &&
    has_bounded_size<prototype::action::GoTo_GetResult_Response>::value
  >
{
};

template<>
struct is_service<prototype::action::GoTo_GetResult>
  : std::true_type
{
};

template<>
struct is_service_request<prototype::action::GoTo_GetResult_Request>
  : std::true_type
{
};

template<>
struct is_service_response<prototype::action::GoTo_GetResult_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'feedback'
// already included above
// #include "prototype/action/detail/go_to__traits.hpp"

namespace prototype
{

namespace action
{

inline void to_flow_style_yaml(
  const GoTo_FeedbackMessage & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
    out << ", ";
  }

  // member: feedback
  {
    out << "feedback: ";
    to_flow_style_yaml(msg.feedback, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GoTo_FeedbackMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }

  // member: feedback
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "feedback:\n";
    to_block_style_yaml(msg.feedback, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GoTo_FeedbackMessage & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace prototype

namespace rosidl_generator_traits
{

[[deprecated("use prototype::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const prototype::action::GoTo_FeedbackMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  prototype::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use prototype::action::to_yaml() instead")]]
inline std::string to_yaml(const prototype::action::GoTo_FeedbackMessage & msg)
{
  return prototype::action::to_yaml(msg);
}

template<>
inline const char * data_type<prototype::action::GoTo_FeedbackMessage>()
{
  return "prototype::action::GoTo_FeedbackMessage";
}

template<>
inline const char * name<prototype::action::GoTo_FeedbackMessage>()
{
  return "prototype/action/GoTo_FeedbackMessage";
}

template<>
struct has_fixed_size<prototype::action::GoTo_FeedbackMessage>
  : std::integral_constant<bool, has_fixed_size<prototype::action::GoTo_Feedback>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<prototype::action::GoTo_FeedbackMessage>
  : std::integral_constant<bool, has_bounded_size<prototype::action::GoTo_Feedback>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<prototype::action::GoTo_FeedbackMessage>
  : std::true_type {};

}  // namespace rosidl_generator_traits


namespace rosidl_generator_traits
{

template<>
struct is_action<prototype::action::GoTo>
  : std::true_type
{
};

template<>
struct is_action_goal<prototype::action::GoTo_Goal>
  : std::true_type
{
};

template<>
struct is_action_result<prototype::action::GoTo_Result>
  : std::true_type
{
};

template<>
struct is_action_feedback<prototype::action::GoTo_Feedback>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits


#endif  // PROTOTYPE__ACTION__DETAIL__GO_TO__TRAITS_HPP_
