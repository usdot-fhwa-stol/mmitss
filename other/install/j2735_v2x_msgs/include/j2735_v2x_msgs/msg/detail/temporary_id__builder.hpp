// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from j2735_v2x_msgs:msg/TemporaryID.idl
// generated code does not contain a copyright notice

#ifndef J2735_V2X_MSGS__MSG__DETAIL__TEMPORARY_ID__BUILDER_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__TEMPORARY_ID__BUILDER_HPP_

#include "j2735_v2x_msgs/msg/detail/temporary_id__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace j2735_v2x_msgs
{

namespace msg
{

namespace builder
{

class Init_TemporaryID_id
{
public:
  Init_TemporaryID_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::j2735_v2x_msgs::msg::TemporaryID id(::j2735_v2x_msgs::msg::TemporaryID::_id_type arg)
  {
    msg_.id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::TemporaryID msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::j2735_v2x_msgs::msg::TemporaryID>()
{
  return j2735_v2x_msgs::msg::builder::Init_TemporaryID_id();
}

}  // namespace j2735_v2x_msgs

#endif  // J2735_V2X_MSGS__MSG__DETAIL__TEMPORARY_ID__BUILDER_HPP_
