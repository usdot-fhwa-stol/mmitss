// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from j3224_v2x_msgs:msg/ObstacleSizeConfidence.idl
// generated code does not contain a copyright notice

#ifndef J3224_V2X_MSGS__MSG__DETAIL__OBSTACLE_SIZE_CONFIDENCE__BUILDER_HPP_
#define J3224_V2X_MSGS__MSG__DETAIL__OBSTACLE_SIZE_CONFIDENCE__BUILDER_HPP_

#include "j3224_v2x_msgs/msg/detail/obstacle_size_confidence__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace j3224_v2x_msgs
{

namespace msg
{

namespace builder
{

class Init_ObstacleSizeConfidence_height_confidence
{
public:
  explicit Init_ObstacleSizeConfidence_height_confidence(::j3224_v2x_msgs::msg::ObstacleSizeConfidence & msg)
  : msg_(msg)
  {}
  ::j3224_v2x_msgs::msg::ObstacleSizeConfidence height_confidence(::j3224_v2x_msgs::msg::ObstacleSizeConfidence::_height_confidence_type arg)
  {
    msg_.height_confidence = std::move(arg);
    return std::move(msg_);
  }

private:
  ::j3224_v2x_msgs::msg::ObstacleSizeConfidence msg_;
};

class Init_ObstacleSizeConfidence_presence_vector
{
public:
  explicit Init_ObstacleSizeConfidence_presence_vector(::j3224_v2x_msgs::msg::ObstacleSizeConfidence & msg)
  : msg_(msg)
  {}
  Init_ObstacleSizeConfidence_height_confidence presence_vector(::j3224_v2x_msgs::msg::ObstacleSizeConfidence::_presence_vector_type arg)
  {
    msg_.presence_vector = std::move(arg);
    return Init_ObstacleSizeConfidence_height_confidence(msg_);
  }

private:
  ::j3224_v2x_msgs::msg::ObstacleSizeConfidence msg_;
};

class Init_ObstacleSizeConfidence_length_confidence
{
public:
  explicit Init_ObstacleSizeConfidence_length_confidence(::j3224_v2x_msgs::msg::ObstacleSizeConfidence & msg)
  : msg_(msg)
  {}
  Init_ObstacleSizeConfidence_presence_vector length_confidence(::j3224_v2x_msgs::msg::ObstacleSizeConfidence::_length_confidence_type arg)
  {
    msg_.length_confidence = std::move(arg);
    return Init_ObstacleSizeConfidence_presence_vector(msg_);
  }

private:
  ::j3224_v2x_msgs::msg::ObstacleSizeConfidence msg_;
};

class Init_ObstacleSizeConfidence_width_confidence
{
public:
  Init_ObstacleSizeConfidence_width_confidence()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ObstacleSizeConfidence_length_confidence width_confidence(::j3224_v2x_msgs::msg::ObstacleSizeConfidence::_width_confidence_type arg)
  {
    msg_.width_confidence = std::move(arg);
    return Init_ObstacleSizeConfidence_length_confidence(msg_);
  }

private:
  ::j3224_v2x_msgs::msg::ObstacleSizeConfidence msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::j3224_v2x_msgs::msg::ObstacleSizeConfidence>()
{
  return j3224_v2x_msgs::msg::builder::Init_ObstacleSizeConfidence_width_confidence();
}

}  // namespace j3224_v2x_msgs

#endif  // J3224_V2X_MSGS__MSG__DETAIL__OBSTACLE_SIZE_CONFIDENCE__BUILDER_HPP_
