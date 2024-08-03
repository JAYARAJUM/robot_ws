// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from prototype:action/FoodMenu.idl
// generated code does not contain a copyright notice

#ifndef PROTOTYPE__ACTION__DETAIL__FOOD_MENU__BUILDER_HPP_
#define PROTOTYPE__ACTION__DETAIL__FOOD_MENU__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "prototype/action/detail/food_menu__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace prototype
{

namespace action
{

namespace builder
{

class Init_FoodMenu_Goal_order
{
public:
  Init_FoodMenu_Goal_order()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::prototype::action::FoodMenu_Goal order(::prototype::action::FoodMenu_Goal::_order_type arg)
  {
    msg_.order = std::move(arg);
    return std::move(msg_);
  }

private:
  ::prototype::action::FoodMenu_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::prototype::action::FoodMenu_Goal>()
{
  return prototype::action::builder::Init_FoodMenu_Goal_order();
}

}  // namespace prototype


namespace prototype
{

namespace action
{

namespace builder
{

class Init_FoodMenu_Result_done
{
public:
  Init_FoodMenu_Result_done()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::prototype::action::FoodMenu_Result done(::prototype::action::FoodMenu_Result::_done_type arg)
  {
    msg_.done = std::move(arg);
    return std::move(msg_);
  }

private:
  ::prototype::action::FoodMenu_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::prototype::action::FoodMenu_Result>()
{
  return prototype::action::builder::Init_FoodMenu_Result_done();
}

}  // namespace prototype


namespace prototype
{

namespace action
{

namespace builder
{

class Init_FoodMenu_Feedback_waiting
{
public:
  Init_FoodMenu_Feedback_waiting()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::prototype::action::FoodMenu_Feedback waiting(::prototype::action::FoodMenu_Feedback::_waiting_type arg)
  {
    msg_.waiting = std::move(arg);
    return std::move(msg_);
  }

private:
  ::prototype::action::FoodMenu_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::prototype::action::FoodMenu_Feedback>()
{
  return prototype::action::builder::Init_FoodMenu_Feedback_waiting();
}

}  // namespace prototype


namespace prototype
{

namespace action
{

namespace builder
{

class Init_FoodMenu_SendGoal_Request_goal
{
public:
  explicit Init_FoodMenu_SendGoal_Request_goal(::prototype::action::FoodMenu_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::prototype::action::FoodMenu_SendGoal_Request goal(::prototype::action::FoodMenu_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::prototype::action::FoodMenu_SendGoal_Request msg_;
};

class Init_FoodMenu_SendGoal_Request_goal_id
{
public:
  Init_FoodMenu_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_FoodMenu_SendGoal_Request_goal goal_id(::prototype::action::FoodMenu_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_FoodMenu_SendGoal_Request_goal(msg_);
  }

private:
  ::prototype::action::FoodMenu_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::prototype::action::FoodMenu_SendGoal_Request>()
{
  return prototype::action::builder::Init_FoodMenu_SendGoal_Request_goal_id();
}

}  // namespace prototype


namespace prototype
{

namespace action
{

namespace builder
{

class Init_FoodMenu_SendGoal_Response_stamp
{
public:
  explicit Init_FoodMenu_SendGoal_Response_stamp(::prototype::action::FoodMenu_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::prototype::action::FoodMenu_SendGoal_Response stamp(::prototype::action::FoodMenu_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::prototype::action::FoodMenu_SendGoal_Response msg_;
};

class Init_FoodMenu_SendGoal_Response_accepted
{
public:
  Init_FoodMenu_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_FoodMenu_SendGoal_Response_stamp accepted(::prototype::action::FoodMenu_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_FoodMenu_SendGoal_Response_stamp(msg_);
  }

private:
  ::prototype::action::FoodMenu_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::prototype::action::FoodMenu_SendGoal_Response>()
{
  return prototype::action::builder::Init_FoodMenu_SendGoal_Response_accepted();
}

}  // namespace prototype


namespace prototype
{

namespace action
{

namespace builder
{

class Init_FoodMenu_GetResult_Request_goal_id
{
public:
  Init_FoodMenu_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::prototype::action::FoodMenu_GetResult_Request goal_id(::prototype::action::FoodMenu_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::prototype::action::FoodMenu_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::prototype::action::FoodMenu_GetResult_Request>()
{
  return prototype::action::builder::Init_FoodMenu_GetResult_Request_goal_id();
}

}  // namespace prototype


namespace prototype
{

namespace action
{

namespace builder
{

class Init_FoodMenu_GetResult_Response_result
{
public:
  explicit Init_FoodMenu_GetResult_Response_result(::prototype::action::FoodMenu_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::prototype::action::FoodMenu_GetResult_Response result(::prototype::action::FoodMenu_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::prototype::action::FoodMenu_GetResult_Response msg_;
};

class Init_FoodMenu_GetResult_Response_status
{
public:
  Init_FoodMenu_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_FoodMenu_GetResult_Response_result status(::prototype::action::FoodMenu_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_FoodMenu_GetResult_Response_result(msg_);
  }

private:
  ::prototype::action::FoodMenu_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::prototype::action::FoodMenu_GetResult_Response>()
{
  return prototype::action::builder::Init_FoodMenu_GetResult_Response_status();
}

}  // namespace prototype


namespace prototype
{

namespace action
{

namespace builder
{

class Init_FoodMenu_FeedbackMessage_feedback
{
public:
  explicit Init_FoodMenu_FeedbackMessage_feedback(::prototype::action::FoodMenu_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::prototype::action::FoodMenu_FeedbackMessage feedback(::prototype::action::FoodMenu_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::prototype::action::FoodMenu_FeedbackMessage msg_;
};

class Init_FoodMenu_FeedbackMessage_goal_id
{
public:
  Init_FoodMenu_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_FoodMenu_FeedbackMessage_feedback goal_id(::prototype::action::FoodMenu_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_FoodMenu_FeedbackMessage_feedback(msg_);
  }

private:
  ::prototype::action::FoodMenu_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::prototype::action::FoodMenu_FeedbackMessage>()
{
  return prototype::action::builder::Init_FoodMenu_FeedbackMessage_goal_id();
}

}  // namespace prototype

#endif  // PROTOTYPE__ACTION__DETAIL__FOOD_MENU__BUILDER_HPP_
