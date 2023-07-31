// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from carma_v2x_msgs:msg/PositionalAccuracy.idl
// generated code does not contain a copyright notice

#ifndef CARMA_V2X_MSGS__MSG__DETAIL__POSITIONAL_ACCURACY__BUILDER_HPP_
#define CARMA_V2X_MSGS__MSG__DETAIL__POSITIONAL_ACCURACY__BUILDER_HPP_

#include "carma_v2x_msgs/msg/detail/positional_accuracy__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace carma_v2x_msgs
{

namespace msg
{

namespace builder
{

class Init_PositionalAccuracy_orientation
{
public:
  explicit Init_PositionalAccuracy_orientation(::carma_v2x_msgs::msg::PositionalAccuracy & msg)
  : msg_(msg)
  {}
  ::carma_v2x_msgs::msg::PositionalAccuracy orientation(::carma_v2x_msgs::msg::PositionalAccuracy::_orientation_type arg)
  {
    msg_.orientation = std::move(arg);
    return std::move(msg_);
  }

private:
  ::carma_v2x_msgs::msg::PositionalAccuracy msg_;
};

class Init_PositionalAccuracy_semi_minor
{
public:
  explicit Init_PositionalAccuracy_semi_minor(::carma_v2x_msgs::msg::PositionalAccuracy & msg)
  : msg_(msg)
  {}
  Init_PositionalAccuracy_orientation semi_minor(::carma_v2x_msgs::msg::PositionalAccuracy::_semi_minor_type arg)
  {
    msg_.semi_minor = std::move(arg);
    return Init_PositionalAccuracy_orientation(msg_);
  }

private:
  ::carma_v2x_msgs::msg::PositionalAccuracy msg_;
};

class Init_PositionalAccuracy_semi_major
{
public:
  explicit Init_PositionalAccuracy_semi_major(::carma_v2x_msgs::msg::PositionalAccuracy & msg)
  : msg_(msg)
  {}
  Init_PositionalAccuracy_semi_minor semi_major(::carma_v2x_msgs::msg::PositionalAccuracy::_semi_major_type arg)
  {
    msg_.semi_major = std::move(arg);
    return Init_PositionalAccuracy_semi_minor(msg_);
  }

private:
  ::carma_v2x_msgs::msg::PositionalAccuracy msg_;
};

class Init_PositionalAccuracy_presence_vector
{
public:
  Init_PositionalAccuracy_presence_vector()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PositionalAccuracy_semi_major presence_vector(::carma_v2x_msgs::msg::PositionalAccuracy::_presence_vector_type arg)
  {
    msg_.presence_vector = std::move(arg);
    return Init_PositionalAccuracy_semi_major(msg_);
  }

private:
  ::carma_v2x_msgs::msg::PositionalAccuracy msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::carma_v2x_msgs::msg::PositionalAccuracy>()
{
  return carma_v2x_msgs::msg::builder::Init_PositionalAccuracy_presence_vector();
}

}  // namespace carma_v2x_msgs

#endif  // CARMA_V2X_MSGS__MSG__DETAIL__POSITIONAL_ACCURACY__BUILDER_HPP_
