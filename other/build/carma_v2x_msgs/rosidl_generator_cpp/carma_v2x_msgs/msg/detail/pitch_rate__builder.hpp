// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from carma_v2x_msgs:msg/PitchRate.idl
// generated code does not contain a copyright notice

#ifndef CARMA_V2X_MSGS__MSG__DETAIL__PITCH_RATE__BUILDER_HPP_
#define CARMA_V2X_MSGS__MSG__DETAIL__PITCH_RATE__BUILDER_HPP_

#include "carma_v2x_msgs/msg/detail/pitch_rate__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace carma_v2x_msgs
{

namespace msg
{

namespace builder
{

class Init_PitchRate_unavailable
{
public:
  explicit Init_PitchRate_unavailable(::carma_v2x_msgs::msg::PitchRate & msg)
  : msg_(msg)
  {}
  ::carma_v2x_msgs::msg::PitchRate unavailable(::carma_v2x_msgs::msg::PitchRate::_unavailable_type arg)
  {
    msg_.unavailable = std::move(arg);
    return std::move(msg_);
  }

private:
  ::carma_v2x_msgs::msg::PitchRate msg_;
};

class Init_PitchRate_pitch_rate
{
public:
  Init_PitchRate_pitch_rate()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PitchRate_unavailable pitch_rate(::carma_v2x_msgs::msg::PitchRate::_pitch_rate_type arg)
  {
    msg_.pitch_rate = std::move(arg);
    return Init_PitchRate_unavailable(msg_);
  }

private:
  ::carma_v2x_msgs::msg::PitchRate msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::carma_v2x_msgs::msg::PitchRate>()
{
  return carma_v2x_msgs::msg::builder::Init_PitchRate_pitch_rate();
}

}  // namespace carma_v2x_msgs

#endif  // CARMA_V2X_MSGS__MSG__DETAIL__PITCH_RATE__BUILDER_HPP_
