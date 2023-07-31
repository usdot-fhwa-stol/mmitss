// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from j3224_v2x_msgs:msg/RollRateConfidence.idl
// generated code does not contain a copyright notice

#ifndef J3224_V2X_MSGS__MSG__DETAIL__ROLL_RATE_CONFIDENCE__BUILDER_HPP_
#define J3224_V2X_MSGS__MSG__DETAIL__ROLL_RATE_CONFIDENCE__BUILDER_HPP_

#include "j3224_v2x_msgs/msg/detail/roll_rate_confidence__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace j3224_v2x_msgs
{

namespace msg
{

namespace builder
{

class Init_RollRateConfidence_roll_rate_confidence
{
public:
  Init_RollRateConfidence_roll_rate_confidence()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::j3224_v2x_msgs::msg::RollRateConfidence roll_rate_confidence(::j3224_v2x_msgs::msg::RollRateConfidence::_roll_rate_confidence_type arg)
  {
    msg_.roll_rate_confidence = std::move(arg);
    return std::move(msg_);
  }

private:
  ::j3224_v2x_msgs::msg::RollRateConfidence msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::j3224_v2x_msgs::msg::RollRateConfidence>()
{
  return j3224_v2x_msgs::msg::builder::Init_RollRateConfidence_roll_rate_confidence();
}

}  // namespace j3224_v2x_msgs

#endif  // J3224_V2X_MSGS__MSG__DETAIL__ROLL_RATE_CONFIDENCE__BUILDER_HPP_
