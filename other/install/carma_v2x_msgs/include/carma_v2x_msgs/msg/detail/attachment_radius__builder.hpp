// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from carma_v2x_msgs:msg/AttachmentRadius.idl
// generated code does not contain a copyright notice

#ifndef CARMA_V2X_MSGS__MSG__DETAIL__ATTACHMENT_RADIUS__BUILDER_HPP_
#define CARMA_V2X_MSGS__MSG__DETAIL__ATTACHMENT_RADIUS__BUILDER_HPP_

#include "carma_v2x_msgs/msg/detail/attachment_radius__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace carma_v2x_msgs
{

namespace msg
{

namespace builder
{

class Init_AttachmentRadius_attachment_radius
{
public:
  Init_AttachmentRadius_attachment_radius()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::carma_v2x_msgs::msg::AttachmentRadius attachment_radius(::carma_v2x_msgs::msg::AttachmentRadius::_attachment_radius_type arg)
  {
    msg_.attachment_radius = std::move(arg);
    return std::move(msg_);
  }

private:
  ::carma_v2x_msgs::msg::AttachmentRadius msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::carma_v2x_msgs::msg::AttachmentRadius>()
{
  return carma_v2x_msgs::msg::builder::Init_AttachmentRadius_attachment_radius();
}

}  // namespace carma_v2x_msgs

#endif  // CARMA_V2X_MSGS__MSG__DETAIL__ATTACHMENT_RADIUS__BUILDER_HPP_
