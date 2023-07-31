// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from j3224_v2x_msgs:msg/RollRate.idl
// generated code does not contain a copyright notice

#ifndef J3224_V2X_MSGS__MSG__DETAIL__ROLL_RATE__BUILDER_HPP_
#define J3224_V2X_MSGS__MSG__DETAIL__ROLL_RATE__BUILDER_HPP_

#include "j3224_v2x_msgs/msg/detail/roll_rate__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace j3224_v2x_msgs
{

namespace msg
{

namespace builder
{

class Init_RollRate_roll_rate
{
public:
  Init_RollRate_roll_rate()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::j3224_v2x_msgs::msg::RollRate roll_rate(::j3224_v2x_msgs::msg::RollRate::_roll_rate_type arg)
  {
    msg_.roll_rate = std::move(arg);
    return std::move(msg_);
  }

private:
  ::j3224_v2x_msgs::msg::RollRate msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::j3224_v2x_msgs::msg::RollRate>()
{
  return j3224_v2x_msgs::msg::builder::Init_RollRate_roll_rate();
}

}  // namespace j3224_v2x_msgs

#endif  // J3224_V2X_MSGS__MSG__DETAIL__ROLL_RATE__BUILDER_HPP_
