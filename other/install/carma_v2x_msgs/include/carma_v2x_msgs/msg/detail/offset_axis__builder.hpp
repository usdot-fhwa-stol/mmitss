// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from carma_v2x_msgs:msg/OffsetAxis.idl
// generated code does not contain a copyright notice

#ifndef CARMA_V2X_MSGS__MSG__DETAIL__OFFSET_AXIS__BUILDER_HPP_
#define CARMA_V2X_MSGS__MSG__DETAIL__OFFSET_AXIS__BUILDER_HPP_

#include "carma_v2x_msgs/msg/detail/offset_axis__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace carma_v2x_msgs
{

namespace msg
{

namespace builder
{

class Init_OffsetAxis_large
{
public:
  explicit Init_OffsetAxis_large(::carma_v2x_msgs::msg::OffsetAxis & msg)
  : msg_(msg)
  {}
  ::carma_v2x_msgs::msg::OffsetAxis large(::carma_v2x_msgs::msg::OffsetAxis::_large_type arg)
  {
    msg_.large = std::move(arg);
    return std::move(msg_);
  }

private:
  ::carma_v2x_msgs::msg::OffsetAxis msg_;
};

class Init_OffsetAxis_small
{
public:
  explicit Init_OffsetAxis_small(::carma_v2x_msgs::msg::OffsetAxis & msg)
  : msg_(msg)
  {}
  Init_OffsetAxis_large small(::carma_v2x_msgs::msg::OffsetAxis::_small_type arg)
  {
    msg_.small = std::move(arg);
    return Init_OffsetAxis_large(msg_);
  }

private:
  ::carma_v2x_msgs::msg::OffsetAxis msg_;
};

class Init_OffsetAxis_choice
{
public:
  Init_OffsetAxis_choice()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_OffsetAxis_small choice(::carma_v2x_msgs::msg::OffsetAxis::_choice_type arg)
  {
    msg_.choice = std::move(arg);
    return Init_OffsetAxis_small(msg_);
  }

private:
  ::carma_v2x_msgs::msg::OffsetAxis msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::carma_v2x_msgs::msg::OffsetAxis>()
{
  return carma_v2x_msgs::msg::builder::Init_OffsetAxis_choice();
}

}  // namespace carma_v2x_msgs

#endif  // CARMA_V2X_MSGS__MSG__DETAIL__OFFSET_AXIS__BUILDER_HPP_
