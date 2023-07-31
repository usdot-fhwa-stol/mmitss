// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from j3224_v2x_msgs:msg/AngularVelocity.idl
// generated code does not contain a copyright notice

#ifndef J3224_V2X_MSGS__MSG__DETAIL__ANGULAR_VELOCITY__BUILDER_HPP_
#define J3224_V2X_MSGS__MSG__DETAIL__ANGULAR_VELOCITY__BUILDER_HPP_

#include "j3224_v2x_msgs/msg/detail/angular_velocity__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace j3224_v2x_msgs
{

namespace msg
{

namespace builder
{

class Init_AngularVelocity_roll_rate
{
public:
  explicit Init_AngularVelocity_roll_rate(::j3224_v2x_msgs::msg::AngularVelocity & msg)
  : msg_(msg)
  {}
  ::j3224_v2x_msgs::msg::AngularVelocity roll_rate(::j3224_v2x_msgs::msg::AngularVelocity::_roll_rate_type arg)
  {
    msg_.roll_rate = std::move(arg);
    return std::move(msg_);
  }

private:
  ::j3224_v2x_msgs::msg::AngularVelocity msg_;
};

class Init_AngularVelocity_pitch_rate
{
public:
  Init_AngularVelocity_pitch_rate()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AngularVelocity_roll_rate pitch_rate(::j3224_v2x_msgs::msg::AngularVelocity::_pitch_rate_type arg)
  {
    msg_.pitch_rate = std::move(arg);
    return Init_AngularVelocity_roll_rate(msg_);
  }

private:
  ::j3224_v2x_msgs::msg::AngularVelocity msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::j3224_v2x_msgs::msg::AngularVelocity>()
{
  return j3224_v2x_msgs::msg::builder::Init_AngularVelocity_pitch_rate();
}

}  // namespace j3224_v2x_msgs

#endif  // J3224_V2X_MSGS__MSG__DETAIL__ANGULAR_VELOCITY__BUILDER_HPP_
