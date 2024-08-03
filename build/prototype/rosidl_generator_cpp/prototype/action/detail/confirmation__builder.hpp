// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from prototype:action/Confirmation.idl
// generated code does not contain a copyright notice

#ifndef PROTOTYPE__ACTION__DETAIL__CONFIRMATION__BUILDER_HPP_
#define PROTOTYPE__ACTION__DETAIL__CONFIRMATION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "prototype/action/detail/confirmation__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace prototype
{

namespace action
{

namespace builder
{

class Init_Confirmation_Goal_location
{
public:
  Init_Confirmation_Goal_location()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::prototype::action::Confirmation_Goal location(::prototype::action::Confirmation_Goal::_location_type arg)
  {
    msg_.location = std::move(arg);
    return std::move(msg_);
  }

private:
  ::prototype::action::Confirmation_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::prototype::action::Confirmation_Goal>()
{
  return prototype::action::builder::Init_Confirmation_Goal_location();
}

}  // namespace prototype


namespace prototype
{

namespace action
{

namespace builder
{

class Init_Confirmation_Result_confirmed
{
public:
  Init_Confirmation_Result_confirmed()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::prototype::action::Confirmation_Result confirmed(::prototype::action::Confirmation_Result::_confirmed_type arg)
  {
    msg_.confirmed = std::move(arg);
    return std::move(msg_);
  }

private:
  ::prototype::action::Confirmation_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::prototype::action::Confirmation_Result>()
{
  return prototype::action::builder::Init_Confirmation_Result_confirmed();
}

}  // namespace prototype


namespace prototype
{

namespace action
{


}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::prototype::action::Confirmation_Feedback>()
{
  return ::prototype::action::Confirmation_Feedback(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace prototype


namespace prototype
{

namespace action
{

namespace builder
{

class Init_Confirmation_SendGoal_Request_goal
{
public:
  explicit Init_Confirmation_SendGoal_Request_goal(::prototype::action::Confirmation_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::prototype::action::Confirmation_SendGoal_Request goal(::prototype::action::Confirmation_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::prototype::action::Confirmation_SendGoal_Request msg_;
};

class Init_Confirmation_SendGoal_Request_goal_id
{
public:
  Init_Confirmation_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Confirmation_SendGoal_Request_goal goal_id(::prototype::action::Confirmation_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_Confirmation_SendGoal_Request_goal(msg_);
  }

private:
  ::prototype::action::Confirmation_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::prototype::action::Confirmation_SendGoal_Request>()
{
  return prototype::action::builder::Init_Confirmation_SendGoal_Request_goal_id();
}

}  // namespace prototype


namespace prototype
{

namespace action
{

namespace builder
{

class Init_Confirmation_SendGoal_Response_stamp
{
public:
  explicit Init_Confirmation_SendGoal_Response_stamp(::prototype::action::Confirmation_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::prototype::action::Confirmation_SendGoal_Response stamp(::prototype::action::Confirmation_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::prototype::action::Confirmation_SendGoal_Response msg_;
};

class Init_Confirmation_SendGoal_Response_accepted
{
public:
  Init_Confirmation_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Confirmation_SendGoal_Response_stamp accepted(::prototype::action::Confirmation_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_Confirmation_SendGoal_Response_stamp(msg_);
  }

private:
  ::prototype::action::Confirmation_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::prototype::action::Confirmation_SendGoal_Response>()
{
  return prototype::action::builder::Init_Confirmation_SendGoal_Response_accepted();
}

}  // namespace prototype


namespace prototype
{

namespace action
{

namespace builder
{

class Init_Confirmation_GetResult_Request_goal_id
{
public:
  Init_Confirmation_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::prototype::action::Confirmation_GetResult_Request goal_id(::prototype::action::Confirmation_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::prototype::action::Confirmation_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::prototype::action::Confirmation_GetResult_Request>()
{
  return prototype::action::builder::Init_Confirmation_GetResult_Request_goal_id();
}

}  // namespace prototype


namespace prototype
{

namespace action
{

namespace builder
{

class Init_Confirmation_GetResult_Response_result
{
public:
  explicit Init_Confirmation_GetResult_Response_result(::prototype::action::Confirmation_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::prototype::action::Confirmation_GetResult_Response result(::prototype::action::Confirmation_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::prototype::action::Confirmation_GetResult_Response msg_;
};

class Init_Confirmation_GetResult_Response_status
{
public:
  Init_Confirmation_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Confirmation_GetResult_Response_result status(::prototype::action::Confirmation_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_Confirmation_GetResult_Response_result(msg_);
  }

private:
  ::prototype::action::Confirmation_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::prototype::action::Confirmation_GetResult_Response>()
{
  return prototype::action::builder::Init_Confirmation_GetResult_Response_status();
}

}  // namespace prototype


namespace prototype
{

namespace action
{

namespace builder
{

class Init_Confirmation_FeedbackMessage_feedback
{
public:
  explicit Init_Confirmation_FeedbackMessage_feedback(::prototype::action::Confirmation_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::prototype::action::Confirmation_FeedbackMessage feedback(::prototype::action::Confirmation_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::prototype::action::Confirmation_FeedbackMessage msg_;
};

class Init_Confirmation_FeedbackMessage_goal_id
{
public:
  Init_Confirmation_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Confirmation_FeedbackMessage_feedback goal_id(::prototype::action::Confirmation_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_Confirmation_FeedbackMessage_feedback(msg_);
  }

private:
  ::prototype::action::Confirmation_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::prototype::action::Confirmation_FeedbackMessage>()
{
  return prototype::action::builder::Init_Confirmation_FeedbackMessage_goal_id();
}

}  // namespace prototype

#endif  // PROTOTYPE__ACTION__DETAIL__CONFIRMATION__BUILDER_HPP_
