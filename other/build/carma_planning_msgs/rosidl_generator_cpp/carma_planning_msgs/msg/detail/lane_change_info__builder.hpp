// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from carma_planning_msgs:msg/LaneChangeInfo.idl
// generated code does not contain a copyright notice

#ifndef CARMA_PLANNING_MSGS__MSG__DETAIL__LANE_CHANGE_INFO__BUILDER_HPP_
#define CARMA_PLANNING_MSGS__MSG__DETAIL__LANE_CHANGE_INFO__BUILDER_HPP_

#include "carma_planning_msgs/msg/detail/lane_change_info__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace carma_planning_msgs
{

namespace msg
{

namespace builder
{

class Init_LaneChangeInfo_distance_to_lanechange
{
public:
  explicit Init_LaneChangeInfo_distance_to_lanechange(::carma_planning_msgs::msg::LaneChangeInfo & msg)
  : msg_(msg)
  {}
  ::carma_planning_msgs::msg::LaneChangeInfo distance_to_lanechange(::carma_planning_msgs::msg::LaneChangeInfo::_distance_to_lanechange_type arg)
  {
    msg_.distance_to_lanechange = std::move(arg);
    return std::move(msg_);
  }

private:
  ::carma_planning_msgs::msg::LaneChangeInfo msg_;
};

class Init_LaneChangeInfo_direction
{
public:
  Init_LaneChangeInfo_direction()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LaneChangeInfo_distance_to_lanechange direction(::carma_planning_msgs::msg::LaneChangeInfo::_direction_type arg)
  {
    msg_.direction = std::move(arg);
    return Init_LaneChangeInfo_distance_to_lanechange(msg_);
  }

private:
  ::carma_planning_msgs::msg::LaneChangeInfo msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::carma_planning_msgs::msg::LaneChangeInfo>()
{
  return carma_planning_msgs::msg::builder::Init_LaneChangeInfo_direction();
}

}  // namespace carma_planning_msgs

#endif  // CARMA_PLANNING_MSGS__MSG__DETAIL__LANE_CHANGE_INFO__BUILDER_HPP_
