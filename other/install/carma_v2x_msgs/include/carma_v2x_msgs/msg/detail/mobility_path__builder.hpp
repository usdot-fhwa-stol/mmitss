// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from carma_v2x_msgs:msg/MobilityPath.idl
// generated code does not contain a copyright notice

#ifndef CARMA_V2X_MSGS__MSG__DETAIL__MOBILITY_PATH__BUILDER_HPP_
#define CARMA_V2X_MSGS__MSG__DETAIL__MOBILITY_PATH__BUILDER_HPP_

#include "carma_v2x_msgs/msg/detail/mobility_path__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace carma_v2x_msgs
{

namespace msg
{

namespace builder
{

class Init_MobilityPath_trajectory
{
public:
  explicit Init_MobilityPath_trajectory(::carma_v2x_msgs::msg::MobilityPath & msg)
  : msg_(msg)
  {}
  ::carma_v2x_msgs::msg::MobilityPath trajectory(::carma_v2x_msgs::msg::MobilityPath::_trajectory_type arg)
  {
    msg_.trajectory = std::move(arg);
    return std::move(msg_);
  }

private:
  ::carma_v2x_msgs::msg::MobilityPath msg_;
};

class Init_MobilityPath_m_header
{
public:
  Init_MobilityPath_m_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MobilityPath_trajectory m_header(::carma_v2x_msgs::msg::MobilityPath::_m_header_type arg)
  {
    msg_.m_header = std::move(arg);
    return Init_MobilityPath_trajectory(msg_);
  }

private:
  ::carma_v2x_msgs::msg::MobilityPath msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::carma_v2x_msgs::msg::MobilityPath>()
{
  return carma_v2x_msgs::msg::builder::Init_MobilityPath_m_header();
}

}  // namespace carma_v2x_msgs

#endif  // CARMA_V2X_MSGS__MSG__DETAIL__MOBILITY_PATH__BUILDER_HPP_
