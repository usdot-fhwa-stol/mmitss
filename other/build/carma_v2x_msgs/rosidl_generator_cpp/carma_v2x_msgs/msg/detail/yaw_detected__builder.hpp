// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from carma_v2x_msgs:msg/YawDetected.idl
// generated code does not contain a copyright notice

#ifndef CARMA_V2X_MSGS__MSG__DETAIL__YAW_DETECTED__BUILDER_HPP_
#define CARMA_V2X_MSGS__MSG__DETAIL__YAW_DETECTED__BUILDER_HPP_

#include "carma_v2x_msgs/msg/detail/yaw_detected__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace carma_v2x_msgs
{

namespace msg
{

namespace builder
{

class Init_YawDetected_yaw_detected
{
public:
  Init_YawDetected_yaw_detected()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::carma_v2x_msgs::msg::YawDetected yaw_detected(::carma_v2x_msgs::msg::YawDetected::_yaw_detected_type arg)
  {
    msg_.yaw_detected = std::move(arg);
    return std::move(msg_);
  }

private:
  ::carma_v2x_msgs::msg::YawDetected msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::carma_v2x_msgs::msg::YawDetected>()
{
  return carma_v2x_msgs::msg::builder::Init_YawDetected_yaw_detected();
}

}  // namespace carma_v2x_msgs

#endif  // CARMA_V2X_MSGS__MSG__DETAIL__YAW_DETECTED__BUILDER_HPP_
