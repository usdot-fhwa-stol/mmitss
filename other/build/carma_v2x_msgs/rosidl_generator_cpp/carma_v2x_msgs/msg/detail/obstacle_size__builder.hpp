// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from carma_v2x_msgs:msg/ObstacleSize.idl
// generated code does not contain a copyright notice

#ifndef CARMA_V2X_MSGS__MSG__DETAIL__OBSTACLE_SIZE__BUILDER_HPP_
#define CARMA_V2X_MSGS__MSG__DETAIL__OBSTACLE_SIZE__BUILDER_HPP_

#include "carma_v2x_msgs/msg/detail/obstacle_size__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace carma_v2x_msgs
{

namespace msg
{

namespace builder
{

class Init_ObstacleSize_height
{
public:
  explicit Init_ObstacleSize_height(::carma_v2x_msgs::msg::ObstacleSize & msg)
  : msg_(msg)
  {}
  ::carma_v2x_msgs::msg::ObstacleSize height(::carma_v2x_msgs::msg::ObstacleSize::_height_type arg)
  {
    msg_.height = std::move(arg);
    return std::move(msg_);
  }

private:
  ::carma_v2x_msgs::msg::ObstacleSize msg_;
};

class Init_ObstacleSize_presence_vector
{
public:
  explicit Init_ObstacleSize_presence_vector(::carma_v2x_msgs::msg::ObstacleSize & msg)
  : msg_(msg)
  {}
  Init_ObstacleSize_height presence_vector(::carma_v2x_msgs::msg::ObstacleSize::_presence_vector_type arg)
  {
    msg_.presence_vector = std::move(arg);
    return Init_ObstacleSize_height(msg_);
  }

private:
  ::carma_v2x_msgs::msg::ObstacleSize msg_;
};

class Init_ObstacleSize_length
{
public:
  explicit Init_ObstacleSize_length(::carma_v2x_msgs::msg::ObstacleSize & msg)
  : msg_(msg)
  {}
  Init_ObstacleSize_presence_vector length(::carma_v2x_msgs::msg::ObstacleSize::_length_type arg)
  {
    msg_.length = std::move(arg);
    return Init_ObstacleSize_presence_vector(msg_);
  }

private:
  ::carma_v2x_msgs::msg::ObstacleSize msg_;
};

class Init_ObstacleSize_width
{
public:
  Init_ObstacleSize_width()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ObstacleSize_length width(::carma_v2x_msgs::msg::ObstacleSize::_width_type arg)
  {
    msg_.width = std::move(arg);
    return Init_ObstacleSize_length(msg_);
  }

private:
  ::carma_v2x_msgs::msg::ObstacleSize msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::carma_v2x_msgs::msg::ObstacleSize>()
{
  return carma_v2x_msgs::msg::builder::Init_ObstacleSize_width();
}

}  // namespace carma_v2x_msgs

#endif  // CARMA_V2X_MSGS__MSG__DETAIL__OBSTACLE_SIZE__BUILDER_HPP_
