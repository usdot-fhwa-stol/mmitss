// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from carma_v2x_msgs:msg/SpeedLimitType.idl
// generated code does not contain a copyright notice

#ifndef CARMA_V2X_MSGS__MSG__DETAIL__SPEED_LIMIT_TYPE__BUILDER_HPP_
#define CARMA_V2X_MSGS__MSG__DETAIL__SPEED_LIMIT_TYPE__BUILDER_HPP_

#include "carma_v2x_msgs/msg/detail/speed_limit_type__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace carma_v2x_msgs
{

namespace msg
{

namespace builder
{

class Init_SpeedLimitType_speed_limit_type
{
public:
  Init_SpeedLimitType_speed_limit_type()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::carma_v2x_msgs::msg::SpeedLimitType speed_limit_type(::carma_v2x_msgs::msg::SpeedLimitType::_speed_limit_type_type arg)
  {
    msg_.speed_limit_type = std::move(arg);
    return std::move(msg_);
  }

private:
  ::carma_v2x_msgs::msg::SpeedLimitType msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::carma_v2x_msgs::msg::SpeedLimitType>()
{
  return carma_v2x_msgs::msg::builder::Init_SpeedLimitType_speed_limit_type();
}

}  // namespace carma_v2x_msgs

#endif  // CARMA_V2X_MSGS__MSG__DETAIL__SPEED_LIMIT_TYPE__BUILDER_HPP_
