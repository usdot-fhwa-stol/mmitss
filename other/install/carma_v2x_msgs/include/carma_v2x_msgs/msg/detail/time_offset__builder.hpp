// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from carma_v2x_msgs:msg/TimeOffset.idl
// generated code does not contain a copyright notice

#ifndef CARMA_V2X_MSGS__MSG__DETAIL__TIME_OFFSET__BUILDER_HPP_
#define CARMA_V2X_MSGS__MSG__DETAIL__TIME_OFFSET__BUILDER_HPP_

#include "carma_v2x_msgs/msg/detail/time_offset__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace carma_v2x_msgs
{

namespace msg
{

namespace builder
{

class Init_TimeOffset_unavailable
{
public:
  explicit Init_TimeOffset_unavailable(::carma_v2x_msgs::msg::TimeOffset & msg)
  : msg_(msg)
  {}
  ::carma_v2x_msgs::msg::TimeOffset unavailable(::carma_v2x_msgs::msg::TimeOffset::_unavailable_type arg)
  {
    msg_.unavailable = std::move(arg);
    return std::move(msg_);
  }

private:
  ::carma_v2x_msgs::msg::TimeOffset msg_;
};

class Init_TimeOffset_offset
{
public:
  Init_TimeOffset_offset()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TimeOffset_unavailable offset(::carma_v2x_msgs::msg::TimeOffset::_offset_type arg)
  {
    msg_.offset = std::move(arg);
    return Init_TimeOffset_unavailable(msg_);
  }

private:
  ::carma_v2x_msgs::msg::TimeOffset msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::carma_v2x_msgs::msg::TimeOffset>()
{
  return carma_v2x_msgs::msg::builder::Init_TimeOffset_offset();
}

}  // namespace carma_v2x_msgs

#endif  // CARMA_V2X_MSGS__MSG__DETAIL__TIME_OFFSET__BUILDER_HPP_
