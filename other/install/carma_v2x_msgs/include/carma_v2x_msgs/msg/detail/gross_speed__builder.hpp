// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from carma_v2x_msgs:msg/GrossSpeed.idl
// generated code does not contain a copyright notice

#ifndef CARMA_V2X_MSGS__MSG__DETAIL__GROSS_SPEED__BUILDER_HPP_
#define CARMA_V2X_MSGS__MSG__DETAIL__GROSS_SPEED__BUILDER_HPP_

#include "carma_v2x_msgs/msg/detail/gross_speed__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace carma_v2x_msgs
{

namespace msg
{

namespace builder
{

class Init_GrossSpeed_unavailable
{
public:
  explicit Init_GrossSpeed_unavailable(::carma_v2x_msgs::msg::GrossSpeed & msg)
  : msg_(msg)
  {}
  ::carma_v2x_msgs::msg::GrossSpeed unavailable(::carma_v2x_msgs::msg::GrossSpeed::_unavailable_type arg)
  {
    msg_.unavailable = std::move(arg);
    return std::move(msg_);
  }

private:
  ::carma_v2x_msgs::msg::GrossSpeed msg_;
};

class Init_GrossSpeed_speed
{
public:
  Init_GrossSpeed_speed()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GrossSpeed_unavailable speed(::carma_v2x_msgs::msg::GrossSpeed::_speed_type arg)
  {
    msg_.speed = std::move(arg);
    return Init_GrossSpeed_unavailable(msg_);
  }

private:
  ::carma_v2x_msgs::msg::GrossSpeed msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::carma_v2x_msgs::msg::GrossSpeed>()
{
  return carma_v2x_msgs::msg::builder::Init_GrossSpeed_speed();
}

}  // namespace carma_v2x_msgs

#endif  // CARMA_V2X_MSGS__MSG__DETAIL__GROSS_SPEED__BUILDER_HPP_
