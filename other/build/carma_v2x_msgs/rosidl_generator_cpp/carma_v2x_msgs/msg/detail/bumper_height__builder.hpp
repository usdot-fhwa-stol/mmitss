// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from carma_v2x_msgs:msg/BumperHeight.idl
// generated code does not contain a copyright notice

#ifndef CARMA_V2X_MSGS__MSG__DETAIL__BUMPER_HEIGHT__BUILDER_HPP_
#define CARMA_V2X_MSGS__MSG__DETAIL__BUMPER_HEIGHT__BUILDER_HPP_

#include "carma_v2x_msgs/msg/detail/bumper_height__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace carma_v2x_msgs
{

namespace msg
{

namespace builder
{

class Init_BumperHeight_bumper_height
{
public:
  Init_BumperHeight_bumper_height()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::carma_v2x_msgs::msg::BumperHeight bumper_height(::carma_v2x_msgs::msg::BumperHeight::_bumper_height_type arg)
  {
    msg_.bumper_height = std::move(arg);
    return std::move(msg_);
  }

private:
  ::carma_v2x_msgs::msg::BumperHeight msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::carma_v2x_msgs::msg::BumperHeight>()
{
  return carma_v2x_msgs::msg::builder::Init_BumperHeight_bumper_height();
}

}  // namespace carma_v2x_msgs

#endif  // CARMA_V2X_MSGS__MSG__DETAIL__BUMPER_HEIGHT__BUILDER_HPP_
