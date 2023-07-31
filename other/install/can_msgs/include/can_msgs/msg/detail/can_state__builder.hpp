// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from can_msgs:msg/CanState.idl
// generated code does not contain a copyright notice

#ifndef CAN_MSGS__MSG__DETAIL__CAN_STATE__BUILDER_HPP_
#define CAN_MSGS__MSG__DETAIL__CAN_STATE__BUILDER_HPP_

#include "can_msgs/msg/detail/can_state__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace can_msgs
{

namespace msg
{

namespace builder
{

class Init_CanState_driver_state
{
public:
  Init_CanState_driver_state()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::can_msgs::msg::CanState driver_state(::can_msgs::msg::CanState::_driver_state_type arg)
  {
    msg_.driver_state = std::move(arg);
    return std::move(msg_);
  }

private:
  ::can_msgs::msg::CanState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::can_msgs::msg::CanState>()
{
  return can_msgs::msg::builder::Init_CanState_driver_state();
}

}  // namespace can_msgs

#endif  // CAN_MSGS__MSG__DETAIL__CAN_STATE__BUILDER_HPP_
