// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from carma_v2x_msgs:msg/OffsetLLB18.idl
// generated code does not contain a copyright notice

#ifndef CARMA_V2X_MSGS__MSG__DETAIL__OFFSET_LLB18__BUILDER_HPP_
#define CARMA_V2X_MSGS__MSG__DETAIL__OFFSET_LLB18__BUILDER_HPP_

#include "carma_v2x_msgs/msg/detail/offset_llb18__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace carma_v2x_msgs
{

namespace msg
{

namespace builder
{

class Init_OffsetLLB18_unavailable
{
public:
  explicit Init_OffsetLLB18_unavailable(::carma_v2x_msgs::msg::OffsetLLB18 & msg)
  : msg_(msg)
  {}
  ::carma_v2x_msgs::msg::OffsetLLB18 unavailable(::carma_v2x_msgs::msg::OffsetLLB18::_unavailable_type arg)
  {
    msg_.unavailable = std::move(arg);
    return std::move(msg_);
  }

private:
  ::carma_v2x_msgs::msg::OffsetLLB18 msg_;
};

class Init_OffsetLLB18_offset
{
public:
  Init_OffsetLLB18_offset()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_OffsetLLB18_unavailable offset(::carma_v2x_msgs::msg::OffsetLLB18::_offset_type arg)
  {
    msg_.offset = std::move(arg);
    return Init_OffsetLLB18_unavailable(msg_);
  }

private:
  ::carma_v2x_msgs::msg::OffsetLLB18 msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::carma_v2x_msgs::msg::OffsetLLB18>()
{
  return carma_v2x_msgs::msg::builder::Init_OffsetLLB18_offset();
}

}  // namespace carma_v2x_msgs

#endif  // CARMA_V2X_MSGS__MSG__DETAIL__OFFSET_LLB18__BUILDER_HPP_
