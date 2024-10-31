// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from carma_v2x_msgs:msg/OffsetB10.idl
// generated code does not contain a copyright notice

#ifndef CARMA_V2X_MSGS__MSG__DETAIL__OFFSET_B10__BUILDER_HPP_
#define CARMA_V2X_MSGS__MSG__DETAIL__OFFSET_B10__BUILDER_HPP_

#include "carma_v2x_msgs/msg/detail/offset_b10__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace carma_v2x_msgs
{

namespace msg
{

namespace builder
{

class Init_OffsetB10_unavailable
{
public:
  explicit Init_OffsetB10_unavailable(::carma_v2x_msgs::msg::OffsetB10 & msg)
  : msg_(msg)
  {}
  ::carma_v2x_msgs::msg::OffsetB10 unavailable(::carma_v2x_msgs::msg::OffsetB10::_unavailable_type arg)
  {
    msg_.unavailable = std::move(arg);
    return std::move(msg_);
  }

private:
  ::carma_v2x_msgs::msg::OffsetB10 msg_;
};

class Init_OffsetB10_offset
{
public:
  Init_OffsetB10_offset()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_OffsetB10_unavailable offset(::carma_v2x_msgs::msg::OffsetB10::_offset_type arg)
  {
    msg_.offset = std::move(arg);
    return Init_OffsetB10_unavailable(msg_);
  }

private:
  ::carma_v2x_msgs::msg::OffsetB10 msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::carma_v2x_msgs::msg::OffsetB10>()
{
  return carma_v2x_msgs::msg::builder::Init_OffsetB10_offset();
}

}  // namespace carma_v2x_msgs

#endif  // CARMA_V2X_MSGS__MSG__DETAIL__OFFSET_B10__BUILDER_HPP_
