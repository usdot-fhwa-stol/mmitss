// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from carma_v2x_msgs:msg/Angle.idl
// generated code does not contain a copyright notice

#ifndef CARMA_V2X_MSGS__MSG__DETAIL__ANGLE__BUILDER_HPP_
#define CARMA_V2X_MSGS__MSG__DETAIL__ANGLE__BUILDER_HPP_

#include "carma_v2x_msgs/msg/detail/angle__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace carma_v2x_msgs
{

namespace msg
{

namespace builder
{

class Init_Angle_unavailable
{
public:
  explicit Init_Angle_unavailable(::carma_v2x_msgs::msg::Angle & msg)
  : msg_(msg)
  {}
  ::carma_v2x_msgs::msg::Angle unavailable(::carma_v2x_msgs::msg::Angle::_unavailable_type arg)
  {
    msg_.unavailable = std::move(arg);
    return std::move(msg_);
  }

private:
  ::carma_v2x_msgs::msg::Angle msg_;
};

class Init_Angle_angle
{
public:
  Init_Angle_angle()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Angle_unavailable angle(::carma_v2x_msgs::msg::Angle::_angle_type arg)
  {
    msg_.angle = std::move(arg);
    return Init_Angle_unavailable(msg_);
  }

private:
  ::carma_v2x_msgs::msg::Angle msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::carma_v2x_msgs::msg::Angle>()
{
  return carma_v2x_msgs::msg::builder::Init_Angle_angle();
}

}  // namespace carma_v2x_msgs

#endif  // CARMA_V2X_MSGS__MSG__DETAIL__ANGLE__BUILDER_HPP_
