// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from j3224_v2x_msgs:msg/AngularVelocityConfidence.idl
// generated code does not contain a copyright notice

#ifndef J3224_V2X_MSGS__MSG__DETAIL__ANGULAR_VELOCITY_CONFIDENCE__BUILDER_HPP_
#define J3224_V2X_MSGS__MSG__DETAIL__ANGULAR_VELOCITY_CONFIDENCE__BUILDER_HPP_

#include "j3224_v2x_msgs/msg/detail/angular_velocity_confidence__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace j3224_v2x_msgs
{

namespace msg
{

namespace builder
{

class Init_AngularVelocityConfidence_roll_rate_confidence
{
public:
  explicit Init_AngularVelocityConfidence_roll_rate_confidence(::j3224_v2x_msgs::msg::AngularVelocityConfidence & msg)
  : msg_(msg)
  {}
  ::j3224_v2x_msgs::msg::AngularVelocityConfidence roll_rate_confidence(::j3224_v2x_msgs::msg::AngularVelocityConfidence::_roll_rate_confidence_type arg)
  {
    msg_.roll_rate_confidence = std::move(arg);
    return std::move(msg_);
  }

private:
  ::j3224_v2x_msgs::msg::AngularVelocityConfidence msg_;
};

class Init_AngularVelocityConfidence_pitch_rate_confidence
{
public:
  explicit Init_AngularVelocityConfidence_pitch_rate_confidence(::j3224_v2x_msgs::msg::AngularVelocityConfidence & msg)
  : msg_(msg)
  {}
  Init_AngularVelocityConfidence_roll_rate_confidence pitch_rate_confidence(::j3224_v2x_msgs::msg::AngularVelocityConfidence::_pitch_rate_confidence_type arg)
  {
    msg_.pitch_rate_confidence = std::move(arg);
    return Init_AngularVelocityConfidence_roll_rate_confidence(msg_);
  }

private:
  ::j3224_v2x_msgs::msg::AngularVelocityConfidence msg_;
};

class Init_AngularVelocityConfidence_presence_vector
{
public:
  Init_AngularVelocityConfidence_presence_vector()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AngularVelocityConfidence_pitch_rate_confidence presence_vector(::j3224_v2x_msgs::msg::AngularVelocityConfidence::_presence_vector_type arg)
  {
    msg_.presence_vector = std::move(arg);
    return Init_AngularVelocityConfidence_pitch_rate_confidence(msg_);
  }

private:
  ::j3224_v2x_msgs::msg::AngularVelocityConfidence msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::j3224_v2x_msgs::msg::AngularVelocityConfidence>()
{
  return j3224_v2x_msgs::msg::builder::Init_AngularVelocityConfidence_presence_vector();
}

}  // namespace j3224_v2x_msgs

#endif  // J3224_V2X_MSGS__MSG__DETAIL__ANGULAR_VELOCITY_CONFIDENCE__BUILDER_HPP_
