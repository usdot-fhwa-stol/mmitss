// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from j3224_v2x_msgs:msg/RollDetected.idl
// generated code does not contain a copyright notice

#ifndef J3224_V2X_MSGS__MSG__DETAIL__ROLL_DETECTED__BUILDER_HPP_
#define J3224_V2X_MSGS__MSG__DETAIL__ROLL_DETECTED__BUILDER_HPP_

#include "j3224_v2x_msgs/msg/detail/roll_detected__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace j3224_v2x_msgs
{

namespace msg
{

namespace builder
{

class Init_RollDetected_roll_detected
{
public:
  Init_RollDetected_roll_detected()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::j3224_v2x_msgs::msg::RollDetected roll_detected(::j3224_v2x_msgs::msg::RollDetected::_roll_detected_type arg)
  {
    msg_.roll_detected = std::move(arg);
    return std::move(msg_);
  }

private:
  ::j3224_v2x_msgs::msg::RollDetected msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::j3224_v2x_msgs::msg::RollDetected>()
{
  return j3224_v2x_msgs::msg::builder::Init_RollDetected_roll_detected();
}

}  // namespace j3224_v2x_msgs

#endif  // J3224_V2X_MSGS__MSG__DETAIL__ROLL_DETECTED__BUILDER_HPP_
