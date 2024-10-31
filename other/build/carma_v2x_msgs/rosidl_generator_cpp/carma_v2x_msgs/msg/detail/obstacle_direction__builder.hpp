// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from carma_v2x_msgs:msg/ObstacleDirection.idl
// generated code does not contain a copyright notice

#ifndef CARMA_V2X_MSGS__MSG__DETAIL__OBSTACLE_DIRECTION__BUILDER_HPP_
#define CARMA_V2X_MSGS__MSG__DETAIL__OBSTACLE_DIRECTION__BUILDER_HPP_

#include "carma_v2x_msgs/msg/detail/obstacle_direction__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace carma_v2x_msgs
{

namespace msg
{

namespace builder
{

class Init_ObstacleDirection_direction
{
public:
  Init_ObstacleDirection_direction()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::carma_v2x_msgs::msg::ObstacleDirection direction(::carma_v2x_msgs::msg::ObstacleDirection::_direction_type arg)
  {
    msg_.direction = std::move(arg);
    return std::move(msg_);
  }

private:
  ::carma_v2x_msgs::msg::ObstacleDirection msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::carma_v2x_msgs::msg::ObstacleDirection>()
{
  return carma_v2x_msgs::msg::builder::Init_ObstacleDirection_direction();
}

}  // namespace carma_v2x_msgs

#endif  // CARMA_V2X_MSGS__MSG__DETAIL__OBSTACLE_DIRECTION__BUILDER_HPP_
