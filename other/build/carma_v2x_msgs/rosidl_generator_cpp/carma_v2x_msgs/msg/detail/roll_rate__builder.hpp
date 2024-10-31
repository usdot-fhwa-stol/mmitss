// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from carma_v2x_msgs:msg/RollRate.idl
// generated code does not contain a copyright notice

#ifndef CARMA_V2X_MSGS__MSG__DETAIL__ROLL_RATE__BUILDER_HPP_
#define CARMA_V2X_MSGS__MSG__DETAIL__ROLL_RATE__BUILDER_HPP_

#include "carma_v2x_msgs/msg/detail/roll_rate__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace carma_v2x_msgs
{

namespace msg
{

namespace builder
{

class Init_RollRate_unavailable
{
public:
  explicit Init_RollRate_unavailable(::carma_v2x_msgs::msg::RollRate & msg)
  : msg_(msg)
  {}
  ::carma_v2x_msgs::msg::RollRate unavailable(::carma_v2x_msgs::msg::RollRate::_unavailable_type arg)
  {
    msg_.unavailable = std::move(arg);
    return std::move(msg_);
  }

private:
  ::carma_v2x_msgs::msg::RollRate msg_;
};

class Init_RollRate_roll_rate
{
public:
  Init_RollRate_roll_rate()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RollRate_unavailable roll_rate(::carma_v2x_msgs::msg::RollRate::_roll_rate_type arg)
  {
    msg_.roll_rate = std::move(arg);
    return Init_RollRate_unavailable(msg_);
  }

private:
  ::carma_v2x_msgs::msg::RollRate msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::carma_v2x_msgs::msg::RollRate>()
{
  return carma_v2x_msgs::msg::builder::Init_RollRate_roll_rate();
}

}  // namespace carma_v2x_msgs

#endif  // CARMA_V2X_MSGS__MSG__DETAIL__ROLL_RATE__BUILDER_HPP_
