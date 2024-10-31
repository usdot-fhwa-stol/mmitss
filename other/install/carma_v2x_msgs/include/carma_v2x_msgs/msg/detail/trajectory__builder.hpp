// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from carma_v2x_msgs:msg/Trajectory.idl
// generated code does not contain a copyright notice

#ifndef CARMA_V2X_MSGS__MSG__DETAIL__TRAJECTORY__BUILDER_HPP_
#define CARMA_V2X_MSGS__MSG__DETAIL__TRAJECTORY__BUILDER_HPP_

#include "carma_v2x_msgs/msg/detail/trajectory__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace carma_v2x_msgs
{

namespace msg
{

namespace builder
{

class Init_Trajectory_offsets
{
public:
  explicit Init_Trajectory_offsets(::carma_v2x_msgs::msg::Trajectory & msg)
  : msg_(msg)
  {}
  ::carma_v2x_msgs::msg::Trajectory offsets(::carma_v2x_msgs::msg::Trajectory::_offsets_type arg)
  {
    msg_.offsets = std::move(arg);
    return std::move(msg_);
  }

private:
  ::carma_v2x_msgs::msg::Trajectory msg_;
};

class Init_Trajectory_location
{
public:
  Init_Trajectory_location()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Trajectory_offsets location(::carma_v2x_msgs::msg::Trajectory::_location_type arg)
  {
    msg_.location = std::move(arg);
    return Init_Trajectory_offsets(msg_);
  }

private:
  ::carma_v2x_msgs::msg::Trajectory msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::carma_v2x_msgs::msg::Trajectory>()
{
  return carma_v2x_msgs::msg::builder::Init_Trajectory_location();
}

}  // namespace carma_v2x_msgs

#endif  // CARMA_V2X_MSGS__MSG__DETAIL__TRAJECTORY__BUILDER_HPP_
