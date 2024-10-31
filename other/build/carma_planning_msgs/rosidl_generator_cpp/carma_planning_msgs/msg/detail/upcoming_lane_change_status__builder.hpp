// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from carma_planning_msgs:msg/UpcomingLaneChangeStatus.idl
// generated code does not contain a copyright notice

#ifndef CARMA_PLANNING_MSGS__MSG__DETAIL__UPCOMING_LANE_CHANGE_STATUS__BUILDER_HPP_
#define CARMA_PLANNING_MSGS__MSG__DETAIL__UPCOMING_LANE_CHANGE_STATUS__BUILDER_HPP_

#include "carma_planning_msgs/msg/detail/upcoming_lane_change_status__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace carma_planning_msgs
{

namespace msg
{

namespace builder
{

class Init_UpcomingLaneChangeStatus_lane_change
{
public:
  explicit Init_UpcomingLaneChangeStatus_lane_change(::carma_planning_msgs::msg::UpcomingLaneChangeStatus & msg)
  : msg_(msg)
  {}
  ::carma_planning_msgs::msg::UpcomingLaneChangeStatus lane_change(::carma_planning_msgs::msg::UpcomingLaneChangeStatus::_lane_change_type arg)
  {
    msg_.lane_change = std::move(arg);
    return std::move(msg_);
  }

private:
  ::carma_planning_msgs::msg::UpcomingLaneChangeStatus msg_;
};

class Init_UpcomingLaneChangeStatus_downtrack_until_lanechange
{
public:
  Init_UpcomingLaneChangeStatus_downtrack_until_lanechange()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_UpcomingLaneChangeStatus_lane_change downtrack_until_lanechange(::carma_planning_msgs::msg::UpcomingLaneChangeStatus::_downtrack_until_lanechange_type arg)
  {
    msg_.downtrack_until_lanechange = std::move(arg);
    return Init_UpcomingLaneChangeStatus_lane_change(msg_);
  }

private:
  ::carma_planning_msgs::msg::UpcomingLaneChangeStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::carma_planning_msgs::msg::UpcomingLaneChangeStatus>()
{
  return carma_planning_msgs::msg::builder::Init_UpcomingLaneChangeStatus_downtrack_until_lanechange();
}

}  // namespace carma_planning_msgs

#endif  // CARMA_PLANNING_MSGS__MSG__DETAIL__UPCOMING_LANE_CHANGE_STATUS__BUILDER_HPP_
