// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from carma_planning_msgs:msg/LaneFollowingManeuver.idl
// generated code does not contain a copyright notice

#ifndef CARMA_PLANNING_MSGS__MSG__DETAIL__LANE_FOLLOWING_MANEUVER__BUILDER_HPP_
#define CARMA_PLANNING_MSGS__MSG__DETAIL__LANE_FOLLOWING_MANEUVER__BUILDER_HPP_

#include "carma_planning_msgs/msg/detail/lane_following_maneuver__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace carma_planning_msgs
{

namespace msg
{

namespace builder
{

class Init_LaneFollowingManeuver_lane_ids
{
public:
  explicit Init_LaneFollowingManeuver_lane_ids(::carma_planning_msgs::msg::LaneFollowingManeuver & msg)
  : msg_(msg)
  {}
  ::carma_planning_msgs::msg::LaneFollowingManeuver lane_ids(::carma_planning_msgs::msg::LaneFollowingManeuver::_lane_ids_type arg)
  {
    msg_.lane_ids = std::move(arg);
    return std::move(msg_);
  }

private:
  ::carma_planning_msgs::msg::LaneFollowingManeuver msg_;
};

class Init_LaneFollowingManeuver_end_time
{
public:
  explicit Init_LaneFollowingManeuver_end_time(::carma_planning_msgs::msg::LaneFollowingManeuver & msg)
  : msg_(msg)
  {}
  Init_LaneFollowingManeuver_lane_ids end_time(::carma_planning_msgs::msg::LaneFollowingManeuver::_end_time_type arg)
  {
    msg_.end_time = std::move(arg);
    return Init_LaneFollowingManeuver_lane_ids(msg_);
  }

private:
  ::carma_planning_msgs::msg::LaneFollowingManeuver msg_;
};

class Init_LaneFollowingManeuver_end_speed
{
public:
  explicit Init_LaneFollowingManeuver_end_speed(::carma_planning_msgs::msg::LaneFollowingManeuver & msg)
  : msg_(msg)
  {}
  Init_LaneFollowingManeuver_end_time end_speed(::carma_planning_msgs::msg::LaneFollowingManeuver::_end_speed_type arg)
  {
    msg_.end_speed = std::move(arg);
    return Init_LaneFollowingManeuver_end_time(msg_);
  }

private:
  ::carma_planning_msgs::msg::LaneFollowingManeuver msg_;
};

class Init_LaneFollowingManeuver_end_dist
{
public:
  explicit Init_LaneFollowingManeuver_end_dist(::carma_planning_msgs::msg::LaneFollowingManeuver & msg)
  : msg_(msg)
  {}
  Init_LaneFollowingManeuver_end_speed end_dist(::carma_planning_msgs::msg::LaneFollowingManeuver::_end_dist_type arg)
  {
    msg_.end_dist = std::move(arg);
    return Init_LaneFollowingManeuver_end_speed(msg_);
  }

private:
  ::carma_planning_msgs::msg::LaneFollowingManeuver msg_;
};

class Init_LaneFollowingManeuver_start_time
{
public:
  explicit Init_LaneFollowingManeuver_start_time(::carma_planning_msgs::msg::LaneFollowingManeuver & msg)
  : msg_(msg)
  {}
  Init_LaneFollowingManeuver_end_dist start_time(::carma_planning_msgs::msg::LaneFollowingManeuver::_start_time_type arg)
  {
    msg_.start_time = std::move(arg);
    return Init_LaneFollowingManeuver_end_dist(msg_);
  }

private:
  ::carma_planning_msgs::msg::LaneFollowingManeuver msg_;
};

class Init_LaneFollowingManeuver_start_speed
{
public:
  explicit Init_LaneFollowingManeuver_start_speed(::carma_planning_msgs::msg::LaneFollowingManeuver & msg)
  : msg_(msg)
  {}
  Init_LaneFollowingManeuver_start_time start_speed(::carma_planning_msgs::msg::LaneFollowingManeuver::_start_speed_type arg)
  {
    msg_.start_speed = std::move(arg);
    return Init_LaneFollowingManeuver_start_time(msg_);
  }

private:
  ::carma_planning_msgs::msg::LaneFollowingManeuver msg_;
};

class Init_LaneFollowingManeuver_start_dist
{
public:
  explicit Init_LaneFollowingManeuver_start_dist(::carma_planning_msgs::msg::LaneFollowingManeuver & msg)
  : msg_(msg)
  {}
  Init_LaneFollowingManeuver_start_speed start_dist(::carma_planning_msgs::msg::LaneFollowingManeuver::_start_dist_type arg)
  {
    msg_.start_dist = std::move(arg);
    return Init_LaneFollowingManeuver_start_speed(msg_);
  }

private:
  ::carma_planning_msgs::msg::LaneFollowingManeuver msg_;
};

class Init_LaneFollowingManeuver_parameters
{
public:
  Init_LaneFollowingManeuver_parameters()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LaneFollowingManeuver_start_dist parameters(::carma_planning_msgs::msg::LaneFollowingManeuver::_parameters_type arg)
  {
    msg_.parameters = std::move(arg);
    return Init_LaneFollowingManeuver_start_dist(msg_);
  }

private:
  ::carma_planning_msgs::msg::LaneFollowingManeuver msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::carma_planning_msgs::msg::LaneFollowingManeuver>()
{
  return carma_planning_msgs::msg::builder::Init_LaneFollowingManeuver_parameters();
}

}  // namespace carma_planning_msgs

#endif  // CARMA_PLANNING_MSGS__MSG__DETAIL__LANE_FOLLOWING_MANEUVER__BUILDER_HPP_
