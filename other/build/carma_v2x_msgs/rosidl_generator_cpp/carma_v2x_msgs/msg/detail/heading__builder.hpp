// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from carma_v2x_msgs:msg/Heading.idl
// generated code does not contain a copyright notice

#ifndef CARMA_V2X_MSGS__MSG__DETAIL__HEADING__BUILDER_HPP_
#define CARMA_V2X_MSGS__MSG__DETAIL__HEADING__BUILDER_HPP_

#include "carma_v2x_msgs/msg/detail/heading__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace carma_v2x_msgs
{

namespace msg
{

namespace builder
{

class Init_Heading_unavailable
{
public:
  explicit Init_Heading_unavailable(::carma_v2x_msgs::msg::Heading & msg)
  : msg_(msg)
  {}
  ::carma_v2x_msgs::msg::Heading unavailable(::carma_v2x_msgs::msg::Heading::_unavailable_type arg)
  {
    msg_.unavailable = std::move(arg);
    return std::move(msg_);
  }

private:
  ::carma_v2x_msgs::msg::Heading msg_;
};

class Init_Heading_heading
{
public:
  Init_Heading_heading()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Heading_unavailable heading(::carma_v2x_msgs::msg::Heading::_heading_type arg)
  {
    msg_.heading = std::move(arg);
    return Init_Heading_unavailable(msg_);
  }

private:
  ::carma_v2x_msgs::msg::Heading msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::carma_v2x_msgs::msg::Heading>()
{
  return carma_v2x_msgs::msg::builder::Init_Heading_heading();
}

}  // namespace carma_v2x_msgs

#endif  // CARMA_V2X_MSGS__MSG__DETAIL__HEADING__BUILDER_HPP_
