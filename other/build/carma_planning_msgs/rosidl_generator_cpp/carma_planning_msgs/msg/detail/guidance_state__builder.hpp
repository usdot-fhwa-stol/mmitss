// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from carma_planning_msgs:msg/GuidanceState.idl
// generated code does not contain a copyright notice

#ifndef CARMA_PLANNING_MSGS__MSG__DETAIL__GUIDANCE_STATE__BUILDER_HPP_
#define CARMA_PLANNING_MSGS__MSG__DETAIL__GUIDANCE_STATE__BUILDER_HPP_

#include "carma_planning_msgs/msg/detail/guidance_state__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace carma_planning_msgs
{

namespace msg
{

namespace builder
{

class Init_GuidanceState_state
{
public:
  Init_GuidanceState_state()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::carma_planning_msgs::msg::GuidanceState state(::carma_planning_msgs::msg::GuidanceState::_state_type arg)
  {
    msg_.state = std::move(arg);
    return std::move(msg_);
  }

private:
  ::carma_planning_msgs::msg::GuidanceState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::carma_planning_msgs::msg::GuidanceState>()
{
  return carma_planning_msgs::msg::builder::Init_GuidanceState_state();
}

}  // namespace carma_planning_msgs

#endif  // CARMA_PLANNING_MSGS__MSG__DETAIL__GUIDANCE_STATE__BUILDER_HPP_
