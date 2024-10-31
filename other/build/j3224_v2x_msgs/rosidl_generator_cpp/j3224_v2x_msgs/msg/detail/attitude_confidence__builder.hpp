// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from j3224_v2x_msgs:msg/AttitudeConfidence.idl
// generated code does not contain a copyright notice

#ifndef J3224_V2X_MSGS__MSG__DETAIL__ATTITUDE_CONFIDENCE__BUILDER_HPP_
#define J3224_V2X_MSGS__MSG__DETAIL__ATTITUDE_CONFIDENCE__BUILDER_HPP_

#include "j3224_v2x_msgs/msg/detail/attitude_confidence__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace j3224_v2x_msgs
{

namespace msg
{

namespace builder
{

class Init_AttitudeConfidence_yaw_confidence
{
public:
  explicit Init_AttitudeConfidence_yaw_confidence(::j3224_v2x_msgs::msg::AttitudeConfidence & msg)
  : msg_(msg)
  {}
  ::j3224_v2x_msgs::msg::AttitudeConfidence yaw_confidence(::j3224_v2x_msgs::msg::AttitudeConfidence::_yaw_confidence_type arg)
  {
    msg_.yaw_confidence = std::move(arg);
    return std::move(msg_);
  }

private:
  ::j3224_v2x_msgs::msg::AttitudeConfidence msg_;
};

class Init_AttitudeConfidence_roll_confidence
{
public:
  explicit Init_AttitudeConfidence_roll_confidence(::j3224_v2x_msgs::msg::AttitudeConfidence & msg)
  : msg_(msg)
  {}
  Init_AttitudeConfidence_yaw_confidence roll_confidence(::j3224_v2x_msgs::msg::AttitudeConfidence::_roll_confidence_type arg)
  {
    msg_.roll_confidence = std::move(arg);
    return Init_AttitudeConfidence_yaw_confidence(msg_);
  }

private:
  ::j3224_v2x_msgs::msg::AttitudeConfidence msg_;
};

class Init_AttitudeConfidence_pitch_confidence
{
public:
  Init_AttitudeConfidence_pitch_confidence()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AttitudeConfidence_roll_confidence pitch_confidence(::j3224_v2x_msgs::msg::AttitudeConfidence::_pitch_confidence_type arg)
  {
    msg_.pitch_confidence = std::move(arg);
    return Init_AttitudeConfidence_roll_confidence(msg_);
  }

private:
  ::j3224_v2x_msgs::msg::AttitudeConfidence msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::j3224_v2x_msgs::msg::AttitudeConfidence>()
{
  return j3224_v2x_msgs::msg::builder::Init_AttitudeConfidence_pitch_confidence();
}

}  // namespace j3224_v2x_msgs

#endif  // J3224_V2X_MSGS__MSG__DETAIL__ATTITUDE_CONFIDENCE__BUILDER_HPP_
