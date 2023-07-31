// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from carma_v2x_msgs:msg/VertOffsetB07.idl
// generated code does not contain a copyright notice

#ifndef CARMA_V2X_MSGS__MSG__DETAIL__VERT_OFFSET_B07__BUILDER_HPP_
#define CARMA_V2X_MSGS__MSG__DETAIL__VERT_OFFSET_B07__BUILDER_HPP_

#include "carma_v2x_msgs/msg/detail/vert_offset_b07__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace carma_v2x_msgs
{

namespace msg
{

namespace builder
{

class Init_VertOffsetB07_unavailable
{
public:
  explicit Init_VertOffsetB07_unavailable(::carma_v2x_msgs::msg::VertOffsetB07 & msg)
  : msg_(msg)
  {}
  ::carma_v2x_msgs::msg::VertOffsetB07 unavailable(::carma_v2x_msgs::msg::VertOffsetB07::_unavailable_type arg)
  {
    msg_.unavailable = std::move(arg);
    return std::move(msg_);
  }

private:
  ::carma_v2x_msgs::msg::VertOffsetB07 msg_;
};

class Init_VertOffsetB07_offset
{
public:
  Init_VertOffsetB07_offset()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_VertOffsetB07_unavailable offset(::carma_v2x_msgs::msg::VertOffsetB07::_offset_type arg)
  {
    msg_.offset = std::move(arg);
    return Init_VertOffsetB07_unavailable(msg_);
  }

private:
  ::carma_v2x_msgs::msg::VertOffsetB07 msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::carma_v2x_msgs::msg::VertOffsetB07>()
{
  return carma_v2x_msgs::msg::builder::Init_VertOffsetB07_offset();
}

}  // namespace carma_v2x_msgs

#endif  // CARMA_V2X_MSGS__MSG__DETAIL__VERT_OFFSET_B07__BUILDER_HPP_
