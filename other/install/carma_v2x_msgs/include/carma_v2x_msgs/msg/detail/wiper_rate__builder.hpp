// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from carma_v2x_msgs:msg/WiperRate.idl
// generated code does not contain a copyright notice

#ifndef CARMA_V2X_MSGS__MSG__DETAIL__WIPER_RATE__BUILDER_HPP_
#define CARMA_V2X_MSGS__MSG__DETAIL__WIPER_RATE__BUILDER_HPP_

#include "carma_v2x_msgs/msg/detail/wiper_rate__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace carma_v2x_msgs
{

namespace msg
{

namespace builder
{

class Init_WiperRate_wiper_rate
{
public:
  Init_WiperRate_wiper_rate()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::carma_v2x_msgs::msg::WiperRate wiper_rate(::carma_v2x_msgs::msg::WiperRate::_wiper_rate_type arg)
  {
    msg_.wiper_rate = std::move(arg);
    return std::move(msg_);
  }

private:
  ::carma_v2x_msgs::msg::WiperRate msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::carma_v2x_msgs::msg::WiperRate>()
{
  return carma_v2x_msgs::msg::builder::Init_WiperRate_wiper_rate();
}

}  // namespace carma_v2x_msgs

#endif  // CARMA_V2X_MSGS__MSG__DETAIL__WIPER_RATE__BUILDER_HPP_
