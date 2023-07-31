// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from carma_v2x_msgs:msg/AngularVelocity.idl
// generated code does not contain a copyright notice

#ifndef CARMA_V2X_MSGS__MSG__DETAIL__ANGULAR_VELOCITY__BUILDER_HPP_
#define CARMA_V2X_MSGS__MSG__DETAIL__ANGULAR_VELOCITY__BUILDER_HPP_

#include "carma_v2x_msgs/msg/detail/angular_velocity__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace carma_v2x_msgs
{

namespace msg
{

namespace builder
{

class Init_AngularVelocity_roll_rate
{
public:
  explicit Init_AngularVelocity_roll_rate(::carma_v2x_msgs::msg::AngularVelocity & msg)
  : msg_(msg)
  {}
  ::carma_v2x_msgs::msg::AngularVelocity roll_rate(::carma_v2x_msgs::msg::AngularVelocity::_roll_rate_type arg)
  {
    msg_.roll_rate = std::move(arg);
    return std::move(msg_);
  }

private:
  ::carma_v2x_msgs::msg::AngularVelocity msg_;
};

class Init_AngularVelocity_pitch_rate
{
public:
  Init_AngularVelocity_pitch_rate()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AngularVelocity_roll_rate pitch_rate(::carma_v2x_msgs::msg::AngularVelocity::_pitch_rate_type arg)
  {
    msg_.pitch_rate = std::move(arg);
    return Init_AngularVelocity_roll_rate(msg_);
  }

private:
  ::carma_v2x_msgs::msg::AngularVelocity msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::carma_v2x_msgs::msg::AngularVelocity>()
{
  return carma_v2x_msgs::msg::builder::Init_AngularVelocity_pitch_rate();
}

}  // namespace carma_v2x_msgs

#endif  // CARMA_V2X_MSGS__MSG__DETAIL__ANGULAR_VELOCITY__BUILDER_HPP_
