// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from j3224_v2x_msgs:msg/SizeValueConfidence.idl
// generated code does not contain a copyright notice

#ifndef J3224_V2X_MSGS__MSG__DETAIL__SIZE_VALUE_CONFIDENCE__BUILDER_HPP_
#define J3224_V2X_MSGS__MSG__DETAIL__SIZE_VALUE_CONFIDENCE__BUILDER_HPP_

#include "j3224_v2x_msgs/msg/detail/size_value_confidence__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace j3224_v2x_msgs
{

namespace msg
{

namespace builder
{

class Init_SizeValueConfidence_size_value_confidence
{
public:
  Init_SizeValueConfidence_size_value_confidence()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::j3224_v2x_msgs::msg::SizeValueConfidence size_value_confidence(::j3224_v2x_msgs::msg::SizeValueConfidence::_size_value_confidence_type arg)
  {
    msg_.size_value_confidence = std::move(arg);
    return std::move(msg_);
  }

private:
  ::j3224_v2x_msgs::msg::SizeValueConfidence msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::j3224_v2x_msgs::msg::SizeValueConfidence>()
{
  return j3224_v2x_msgs::msg::builder::Init_SizeValueConfidence_size_value_confidence();
}

}  // namespace j3224_v2x_msgs

#endif  // J3224_V2X_MSGS__MSG__DETAIL__SIZE_VALUE_CONFIDENCE__BUILDER_HPP_
