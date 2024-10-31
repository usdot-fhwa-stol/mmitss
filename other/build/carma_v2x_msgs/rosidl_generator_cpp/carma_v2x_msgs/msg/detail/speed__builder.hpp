// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from carma_v2x_msgs:msg/Speed.idl
// generated code does not contain a copyright notice

#ifndef CARMA_V2X_MSGS__MSG__DETAIL__SPEED__BUILDER_HPP_
#define CARMA_V2X_MSGS__MSG__DETAIL__SPEED__BUILDER_HPP_

#include "carma_v2x_msgs/msg/detail/speed__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace carma_v2x_msgs
{

namespace msg
{

namespace builder
{

class Init_Speed_unavailable
{
public:
  explicit Init_Speed_unavailable(::carma_v2x_msgs::msg::Speed & msg)
  : msg_(msg)
  {}
  ::carma_v2x_msgs::msg::Speed unavailable(::carma_v2x_msgs::msg::Speed::_unavailable_type arg)
  {
    msg_.unavailable = std::move(arg);
    return std::move(msg_);
  }

private:
  ::carma_v2x_msgs::msg::Speed msg_;
};

class Init_Speed_speed
{
public:
  Init_Speed_speed()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Speed_unavailable speed(::carma_v2x_msgs::msg::Speed::_speed_type arg)
  {
    msg_.speed = std::move(arg);
    return Init_Speed_unavailable(msg_);
  }

private:
  ::carma_v2x_msgs::msg::Speed msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::carma_v2x_msgs::msg::Speed>()
{
  return carma_v2x_msgs::msg::builder::Init_Speed_speed();
}

}  // namespace carma_v2x_msgs

#endif  // CARMA_V2X_MSGS__MSG__DETAIL__SPEED__BUILDER_HPP_
