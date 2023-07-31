// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from carma_planning_msgs:msg/LaneChangeStatus.idl
// generated code does not contain a copyright notice

#ifndef CARMA_PLANNING_MSGS__MSG__DETAIL__LANE_CHANGE_STATUS__BUILDER_HPP_
#define CARMA_PLANNING_MSGS__MSG__DETAIL__LANE_CHANGE_STATUS__BUILDER_HPP_

#include "carma_planning_msgs/msg/detail/lane_change_status__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace carma_planning_msgs
{

namespace msg
{

namespace builder
{

class Init_LaneChangeStatus_description
{
public:
  explicit Init_LaneChangeStatus_description(::carma_planning_msgs::msg::LaneChangeStatus & msg)
  : msg_(msg)
  {}
  ::carma_planning_msgs::msg::LaneChangeStatus description(::carma_planning_msgs::msg::LaneChangeStatus::_description_type arg)
  {
    msg_.description = std::move(arg);
    return std::move(msg_);
  }

private:
  ::carma_planning_msgs::msg::LaneChangeStatus msg_;
};

class Init_LaneChangeStatus_status
{
public:
  Init_LaneChangeStatus_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LaneChangeStatus_description status(::carma_planning_msgs::msg::LaneChangeStatus::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_LaneChangeStatus_description(msg_);
  }

private:
  ::carma_planning_msgs::msg::LaneChangeStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::carma_planning_msgs::msg::LaneChangeStatus>()
{
  return carma_planning_msgs::msg::builder::Init_LaneChangeStatus_status();
}

}  // namespace carma_planning_msgs

#endif  // CARMA_PLANNING_MSGS__MSG__DETAIL__LANE_CHANGE_STATUS__BUILDER_HPP_
