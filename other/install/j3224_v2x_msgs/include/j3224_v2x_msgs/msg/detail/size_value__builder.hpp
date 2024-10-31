// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from j3224_v2x_msgs:msg/SizeValue.idl
// generated code does not contain a copyright notice

#ifndef J3224_V2X_MSGS__MSG__DETAIL__SIZE_VALUE__BUILDER_HPP_
#define J3224_V2X_MSGS__MSG__DETAIL__SIZE_VALUE__BUILDER_HPP_

#include "j3224_v2x_msgs/msg/detail/size_value__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace j3224_v2x_msgs
{

namespace msg
{

namespace builder
{

class Init_SizeValue_size_value
{
public:
  Init_SizeValue_size_value()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::j3224_v2x_msgs::msg::SizeValue size_value(::j3224_v2x_msgs::msg::SizeValue::_size_value_type arg)
  {
    msg_.size_value = std::move(arg);
    return std::move(msg_);
  }

private:
  ::j3224_v2x_msgs::msg::SizeValue msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::j3224_v2x_msgs::msg::SizeValue>()
{
  return j3224_v2x_msgs::msg::builder::Init_SizeValue_size_value();
}

}  // namespace j3224_v2x_msgs

#endif  // J3224_V2X_MSGS__MSG__DETAIL__SIZE_VALUE__BUILDER_HPP_
