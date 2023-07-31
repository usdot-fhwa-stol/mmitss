// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from carma_v2x_msgs:msg/Velocity.idl
// generated code does not contain a copyright notice

#ifndef CARMA_V2X_MSGS__MSG__DETAIL__VELOCITY__BUILDER_HPP_
#define CARMA_V2X_MSGS__MSG__DETAIL__VELOCITY__BUILDER_HPP_

#include "carma_v2x_msgs/msg/detail/velocity__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace carma_v2x_msgs
{

namespace msg
{

namespace builder
{

class Init_Velocity_unavailable
{
public:
  explicit Init_Velocity_unavailable(::carma_v2x_msgs::msg::Velocity & msg)
  : msg_(msg)
  {}
  ::carma_v2x_msgs::msg::Velocity unavailable(::carma_v2x_msgs::msg::Velocity::_unavailable_type arg)
  {
    msg_.unavailable = std::move(arg);
    return std::move(msg_);
  }

private:
  ::carma_v2x_msgs::msg::Velocity msg_;
};

class Init_Velocity_velocity
{
public:
  Init_Velocity_velocity()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Velocity_unavailable velocity(::carma_v2x_msgs::msg::Velocity::_velocity_type arg)
  {
    msg_.velocity = std::move(arg);
    return Init_Velocity_unavailable(msg_);
  }

private:
  ::carma_v2x_msgs::msg::Velocity msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::carma_v2x_msgs::msg::Velocity>()
{
  return carma_v2x_msgs::msg::builder::Init_Velocity_velocity();
}

}  // namespace carma_v2x_msgs

#endif  // CARMA_V2X_MSGS__MSG__DETAIL__VELOCITY__BUILDER_HPP_
