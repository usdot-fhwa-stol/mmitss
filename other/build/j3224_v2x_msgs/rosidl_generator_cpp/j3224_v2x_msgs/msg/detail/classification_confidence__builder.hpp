// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from j3224_v2x_msgs:msg/ClassificationConfidence.idl
// generated code does not contain a copyright notice

#ifndef J3224_V2X_MSGS__MSG__DETAIL__CLASSIFICATION_CONFIDENCE__BUILDER_HPP_
#define J3224_V2X_MSGS__MSG__DETAIL__CLASSIFICATION_CONFIDENCE__BUILDER_HPP_

#include "j3224_v2x_msgs/msg/detail/classification_confidence__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace j3224_v2x_msgs
{

namespace msg
{

namespace builder
{

class Init_ClassificationConfidence_classification_confidence
{
public:
  Init_ClassificationConfidence_classification_confidence()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::j3224_v2x_msgs::msg::ClassificationConfidence classification_confidence(::j3224_v2x_msgs::msg::ClassificationConfidence::_classification_confidence_type arg)
  {
    msg_.classification_confidence = std::move(arg);
    return std::move(msg_);
  }

private:
  ::j3224_v2x_msgs::msg::ClassificationConfidence msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::j3224_v2x_msgs::msg::ClassificationConfidence>()
{
  return j3224_v2x_msgs::msg::builder::Init_ClassificationConfidence_classification_confidence();
}

}  // namespace j3224_v2x_msgs

#endif  // J3224_V2X_MSGS__MSG__DETAIL__CLASSIFICATION_CONFIDENCE__BUILDER_HPP_
