// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from carma_v2x_msgs:msg/MobilityRepeat.idl
// generated code does not contain a copyright notice

#ifndef CARMA_V2X_MSGS__MSG__DETAIL__MOBILITY_REPEAT__BUILDER_HPP_
#define CARMA_V2X_MSGS__MSG__DETAIL__MOBILITY_REPEAT__BUILDER_HPP_

#include "carma_v2x_msgs/msg/detail/mobility_repeat__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace carma_v2x_msgs
{

namespace msg
{

namespace builder
{

class Init_MobilityRepeat_repeat
{
public:
  Init_MobilityRepeat_repeat()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::carma_v2x_msgs::msg::MobilityRepeat repeat(::carma_v2x_msgs::msg::MobilityRepeat::_repeat_type arg)
  {
    msg_.repeat = std::move(arg);
    return std::move(msg_);
  }

private:
  ::carma_v2x_msgs::msg::MobilityRepeat msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::carma_v2x_msgs::msg::MobilityRepeat>()
{
  return carma_v2x_msgs::msg::builder::Init_MobilityRepeat_repeat();
}

}  // namespace carma_v2x_msgs

#endif  // CARMA_V2X_MSGS__MSG__DETAIL__MOBILITY_REPEAT__BUILDER_HPP_
