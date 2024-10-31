// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from carma_v2x_msgs:msg/Attitude.idl
// generated code does not contain a copyright notice

#ifndef CARMA_V2X_MSGS__MSG__DETAIL__ATTITUDE__BUILDER_HPP_
#define CARMA_V2X_MSGS__MSG__DETAIL__ATTITUDE__BUILDER_HPP_

#include "carma_v2x_msgs/msg/detail/attitude__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace carma_v2x_msgs
{

namespace msg
{

namespace builder
{

class Init_Attitude_yaw
{
public:
  explicit Init_Attitude_yaw(::carma_v2x_msgs::msg::Attitude & msg)
  : msg_(msg)
  {}
  ::carma_v2x_msgs::msg::Attitude yaw(::carma_v2x_msgs::msg::Attitude::_yaw_type arg)
  {
    msg_.yaw = std::move(arg);
    return std::move(msg_);
  }

private:
  ::carma_v2x_msgs::msg::Attitude msg_;
};

class Init_Attitude_roll
{
public:
  explicit Init_Attitude_roll(::carma_v2x_msgs::msg::Attitude & msg)
  : msg_(msg)
  {}
  Init_Attitude_yaw roll(::carma_v2x_msgs::msg::Attitude::_roll_type arg)
  {
    msg_.roll = std::move(arg);
    return Init_Attitude_yaw(msg_);
  }

private:
  ::carma_v2x_msgs::msg::Attitude msg_;
};

class Init_Attitude_pitch
{
public:
  Init_Attitude_pitch()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Attitude_roll pitch(::carma_v2x_msgs::msg::Attitude::_pitch_type arg)
  {
    msg_.pitch = std::move(arg);
    return Init_Attitude_roll(msg_);
  }

private:
  ::carma_v2x_msgs::msg::Attitude msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::carma_v2x_msgs::msg::Attitude>()
{
  return carma_v2x_msgs::msg::builder::Init_Attitude_pitch();
}

}  // namespace carma_v2x_msgs

#endif  // CARMA_V2X_MSGS__MSG__DETAIL__ATTITUDE__BUILDER_HPP_
