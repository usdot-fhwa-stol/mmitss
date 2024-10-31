// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from j2735_v2x_msgs:msg/GrossSpeed.idl
// generated code does not contain a copyright notice

#ifndef J2735_V2X_MSGS__MSG__DETAIL__GROSS_SPEED__BUILDER_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__GROSS_SPEED__BUILDER_HPP_

#include "j2735_v2x_msgs/msg/detail/gross_speed__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace j2735_v2x_msgs
{

namespace msg
{

namespace builder
{

class Init_GrossSpeed_speed
{
public:
  Init_GrossSpeed_speed()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::j2735_v2x_msgs::msg::GrossSpeed speed(::j2735_v2x_msgs::msg::GrossSpeed::_speed_type arg)
  {
    msg_.speed = std::move(arg);
    return std::move(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::GrossSpeed msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::j2735_v2x_msgs::msg::GrossSpeed>()
{
  return j2735_v2x_msgs::msg::builder::Init_GrossSpeed_speed();
}

}  // namespace j2735_v2x_msgs

#endif  // J2735_V2X_MSGS__MSG__DETAIL__GROSS_SPEED__BUILDER_HPP_
