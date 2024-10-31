// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from carma_v2x_msgs:msg/RegulatorySpeedLimit.idl
// generated code does not contain a copyright notice

#ifndef CARMA_V2X_MSGS__MSG__DETAIL__REGULATORY_SPEED_LIMIT__BUILDER_HPP_
#define CARMA_V2X_MSGS__MSG__DETAIL__REGULATORY_SPEED_LIMIT__BUILDER_HPP_

#include "carma_v2x_msgs/msg/detail/regulatory_speed_limit__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace carma_v2x_msgs
{

namespace msg
{

namespace builder
{

class Init_RegulatorySpeedLimit_speed
{
public:
  explicit Init_RegulatorySpeedLimit_speed(::carma_v2x_msgs::msg::RegulatorySpeedLimit & msg)
  : msg_(msg)
  {}
  ::carma_v2x_msgs::msg::RegulatorySpeedLimit speed(::carma_v2x_msgs::msg::RegulatorySpeedLimit::_speed_type arg)
  {
    msg_.speed = std::move(arg);
    return std::move(msg_);
  }

private:
  ::carma_v2x_msgs::msg::RegulatorySpeedLimit msg_;
};

class Init_RegulatorySpeedLimit_type
{
public:
  Init_RegulatorySpeedLimit_type()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RegulatorySpeedLimit_speed type(::carma_v2x_msgs::msg::RegulatorySpeedLimit::_type_type arg)
  {
    msg_.type = std::move(arg);
    return Init_RegulatorySpeedLimit_speed(msg_);
  }

private:
  ::carma_v2x_msgs::msg::RegulatorySpeedLimit msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::carma_v2x_msgs::msg::RegulatorySpeedLimit>()
{
  return carma_v2x_msgs::msg::builder::Init_RegulatorySpeedLimit_type();
}

}  // namespace carma_v2x_msgs

#endif  // CARMA_V2X_MSGS__MSG__DETAIL__REGULATORY_SPEED_LIMIT__BUILDER_HPP_
