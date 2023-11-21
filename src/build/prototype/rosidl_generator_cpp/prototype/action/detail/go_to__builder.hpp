// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from prototype:action/GoTo.idl
// generated code does not contain a copyright notice

#ifndef PROTOTYPE__ACTION__DETAIL__GO_TO__BUILDER_HPP_
#define PROTOTYPE__ACTION__DETAIL__GO_TO__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "prototype/action/detail/go_to__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace prototype
{

namespace action
{

namespace builder
{

class Init_GoTo_Goal_w
{
public:
  explicit Init_GoTo_Goal_w(::prototype::action::GoTo_Goal & msg)
  : msg_(msg)
  {}
  ::prototype::action::GoTo_Goal w(::prototype::action::GoTo_Goal::_w_type arg)
  {
    msg_.w = std::move(arg);
    return std::move(msg_);
  }

private:
  ::prototype::action::GoTo_Goal msg_;
};

class Init_GoTo_Goal_z
{
public:
  explicit Init_GoTo_Goal_z(::prototype::action::GoTo_Goal & msg)
  : msg_(msg)
  {}
  Init_GoTo_Goal_w z(::prototype::action::GoTo_Goal::_z_type arg)
  {
    msg_.z = std::move(arg);
    return Init_GoTo_Goal_w(msg_);
  }

private:
  ::prototype::action::GoTo_Goal msg_;
};

class Init_GoTo_Goal_y
{
public:
  explicit Init_GoTo_Goal_y(::prototype::action::GoTo_Goal & msg)
  : msg_(msg)
  {}
  Init_GoTo_Goal_z y(::prototype::action::GoTo_Goal::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_GoTo_Goal_z(msg_);
  }

private:
  ::prototype::action::GoTo_Goal msg_;
};

class Init_GoTo_Goal_x
{
public:
  Init_GoTo_Goal_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GoTo_Goal_y x(::prototype::action::GoTo_Goal::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_GoTo_Goal_y(msg_);
  }

private:
  ::prototype::action::GoTo_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::prototype::action::GoTo_Goal>()
{
  return prototype::action::builder::Init_GoTo_Goal_x();
}

}  // namespace prototype


namespace prototype
{

namespace action
{

namespace builder
{

class Init_GoTo_Result_success
{
public:
  Init_GoTo_Result_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::prototype::action::GoTo_Result success(::prototype::action::GoTo_Result::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::prototype::action::GoTo_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::prototype::action::GoTo_Result>()
{
  return prototype::action::builder::Init_GoTo_Result_success();
}

}  // namespace prototype


namespace prototype
{

namespace action
{

namespace builder
{

class Init_GoTo_Feedback_z
{
public:
  explicit Init_GoTo_Feedback_z(::prototype::action::GoTo_Feedback & msg)
  : msg_(msg)
  {}
  ::prototype::action::GoTo_Feedback z(::prototype::action::GoTo_Feedback::_z_type arg)
  {
    msg_.z = std::move(arg);
    return std::move(msg_);
  }

private:
  ::prototype::action::GoTo_Feedback msg_;
};

class Init_GoTo_Feedback_y
{
public:
  explicit Init_GoTo_Feedback_y(::prototype::action::GoTo_Feedback & msg)
  : msg_(msg)
  {}
  Init_GoTo_Feedback_z y(::prototype::action::GoTo_Feedback::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_GoTo_Feedback_z(msg_);
  }

private:
  ::prototype::action::GoTo_Feedback msg_;
};

class Init_GoTo_Feedback_x
{
public:
  Init_GoTo_Feedback_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GoTo_Feedback_y x(::prototype::action::GoTo_Feedback::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_GoTo_Feedback_y(msg_);
  }

private:
  ::prototype::action::GoTo_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::prototype::action::GoTo_Feedback>()
{
  return prototype::action::builder::Init_GoTo_Feedback_x();
}

}  // namespace prototype


namespace prototype
{

namespace action
{

namespace builder
{

class Init_GoTo_SendGoal_Request_goal
{
public:
  explicit Init_GoTo_SendGoal_Request_goal(::prototype::action::GoTo_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::prototype::action::GoTo_SendGoal_Request goal(::prototype::action::GoTo_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::prototype::action::GoTo_SendGoal_Request msg_;
};

class Init_GoTo_SendGoal_Request_goal_id
{
public:
  Init_GoTo_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GoTo_SendGoal_Request_goal goal_id(::prototype::action::GoTo_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_GoTo_SendGoal_Request_goal(msg_);
  }

private:
  ::prototype::action::GoTo_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::prototype::action::GoTo_SendGoal_Request>()
{
  return prototype::action::builder::Init_GoTo_SendGoal_Request_goal_id();
}

}  // namespace prototype


namespace prototype
{

namespace action
{

namespace builder
{

class Init_GoTo_SendGoal_Response_stamp
{
public:
  explicit Init_GoTo_SendGoal_Response_stamp(::prototype::action::GoTo_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::prototype::action::GoTo_SendGoal_Response stamp(::prototype::action::GoTo_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::prototype::action::GoTo_SendGoal_Response msg_;
};

class Init_GoTo_SendGoal_Response_accepted
{
public:
  Init_GoTo_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GoTo_SendGoal_Response_stamp accepted(::prototype::action::GoTo_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_GoTo_SendGoal_Response_stamp(msg_);
  }

private:
  ::prototype::action::GoTo_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::prototype::action::GoTo_SendGoal_Response>()
{
  return prototype::action::builder::Init_GoTo_SendGoal_Response_accepted();
}

}  // namespace prototype


namespace prototype
{

namespace action
{

namespace builder
{

class Init_GoTo_GetResult_Request_goal_id
{
public:
  Init_GoTo_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::prototype::action::GoTo_GetResult_Request goal_id(::prototype::action::GoTo_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::prototype::action::GoTo_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::prototype::action::GoTo_GetResult_Request>()
{
  return prototype::action::builder::Init_GoTo_GetResult_Request_goal_id();
}

}  // namespace prototype


namespace prototype
{

namespace action
{

namespace builder
{

class Init_GoTo_GetResult_Response_result
{
public:
  explicit Init_GoTo_GetResult_Response_result(::prototype::action::GoTo_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::prototype::action::GoTo_GetResult_Response result(::prototype::action::GoTo_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::prototype::action::GoTo_GetResult_Response msg_;
};

class Init_GoTo_GetResult_Response_status
{
public:
  Init_GoTo_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GoTo_GetResult_Response_result status(::prototype::action::GoTo_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_GoTo_GetResult_Response_result(msg_);
  }

private:
  ::prototype::action::GoTo_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::prototype::action::GoTo_GetResult_Response>()
{
  return prototype::action::builder::Init_GoTo_GetResult_Response_status();
}

}  // namespace prototype


namespace prototype
{

namespace action
{

namespace builder
{

class Init_GoTo_FeedbackMessage_feedback
{
public:
  explicit Init_GoTo_FeedbackMessage_feedback(::prototype::action::GoTo_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::prototype::action::GoTo_FeedbackMessage feedback(::prototype::action::GoTo_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::prototype::action::GoTo_FeedbackMessage msg_;
};

class Init_GoTo_FeedbackMessage_goal_id
{
public:
  Init_GoTo_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GoTo_FeedbackMessage_feedback goal_id(::prototype::action::GoTo_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_GoTo_FeedbackMessage_feedback(msg_);
  }

private:
  ::prototype::action::GoTo_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::prototype::action::GoTo_FeedbackMessage>()
{
  return prototype::action::builder::Init_GoTo_FeedbackMessage_goal_id();
}

}  // namespace prototype

#endif  // PROTOTYPE__ACTION__DETAIL__GO_TO__BUILDER_HPP_
