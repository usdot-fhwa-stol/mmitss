// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from carma_planning_msgs:msg/IntersectionTransitLeftTurnManeuver.idl
// generated code does not contain a copyright notice

#ifndef CARMA_PLANNING_MSGS__MSG__DETAIL__INTERSECTION_TRANSIT_LEFT_TURN_MANEUVER__BUILDER_HPP_
#define CARMA_PLANNING_MSGS__MSG__DETAIL__INTERSECTION_TRANSIT_LEFT_TURN_MANEUVER__BUILDER_HPP_

#include "carma_planning_msgs/msg/detail/intersection_transit_left_turn_maneuver__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace carma_planning_msgs
{

namespace msg
{

namespace builder
{

class Init_IntersectionTransitLeftTurnManeuver_ending_lane_id
{
public:
  explicit Init_IntersectionTransitLeftTurnManeuver_ending_lane_id(::carma_planning_msgs::msg::IntersectionTransitLeftTurnManeuver & msg)
  : msg_(msg)
  {}
  ::carma_planning_msgs::msg::IntersectionTransitLeftTurnManeuver ending_lane_id(::carma_planning_msgs::msg::IntersectionTransitLeftTurnManeuver::_ending_lane_id_type arg)
  {
    msg_.ending_lane_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::carma_planning_msgs::msg::IntersectionTransitLeftTurnManeuver msg_;
};

class Init_IntersectionTransitLeftTurnManeuver_starting_lane_id
{
public:
  explicit Init_IntersectionTransitLeftTurnManeuver_starting_lane_id(::carma_planning_msgs::msg::IntersectionTransitLeftTurnManeuver & msg)
  : msg_(msg)
  {}
  Init_IntersectionTransitLeftTurnManeuver_ending_lane_id starting_lane_id(::carma_planning_msgs::msg::IntersectionTransitLeftTurnManeuver::_starting_lane_id_type arg)
  {
    msg_.starting_lane_id = std::move(arg);
    return Init_IntersectionTransitLeftTurnManeuver_ending_lane_id(msg_);
  }

private:
  ::carma_planning_msgs::msg::IntersectionTransitLeftTurnManeuver msg_;
};

class Init_IntersectionTransitLeftTurnManeuver_end_time
{
public:
  explicit Init_IntersectionTransitLeftTurnManeuver_end_time(::carma_planning_msgs::msg::IntersectionTransitLeftTurnManeuver & msg)
  : msg_(msg)
  {}
  Init_IntersectionTransitLeftTurnManeuver_starting_lane_id end_time(::carma_planning_msgs::msg::IntersectionTransitLeftTurnManeuver::_end_time_type arg)
  {
    msg_.end_time = std::move(arg);
    return Init_IntersectionTransitLeftTurnManeuver_starting_lane_id(msg_);
  }

private:
  ::carma_planning_msgs::msg::IntersectionTransitLeftTurnManeuver msg_;
};

class Init_IntersectionTransitLeftTurnManeuver_end_speed
{
public:
  explicit Init_IntersectionTransitLeftTurnManeuver_end_speed(::carma_planning_msgs::msg::IntersectionTransitLeftTurnManeuver & msg)
  : msg_(msg)
  {}
  Init_IntersectionTransitLeftTurnManeuver_end_time end_speed(::carma_planning_msgs::msg::IntersectionTransitLeftTurnManeuver::_end_speed_type arg)
  {
    msg_.end_speed = std::move(arg);
    return Init_IntersectionTransitLeftTurnManeuver_end_time(msg_);
  }

private:
  ::carma_planning_msgs::msg::IntersectionTransitLeftTurnManeuver msg_;
};

class Init_IntersectionTransitLeftTurnManeuver_end_dist
{
public:
  explicit Init_IntersectionTransitLeftTurnManeuver_end_dist(::carma_planning_msgs::msg::IntersectionTransitLeftTurnManeuver & msg)
  : msg_(msg)
  {}
  Init_IntersectionTransitLeftTurnManeuver_end_speed end_dist(::carma_planning_msgs::msg::IntersectionTransitLeftTurnManeuver::_end_dist_type arg)
  {
    msg_.end_dist = std::move(arg);
    return Init_IntersectionTransitLeftTurnManeuver_end_speed(msg_);
  }

private:
  ::carma_planning_msgs::msg::IntersectionTransitLeftTurnManeuver msg_;
};

class Init_IntersectionTransitLeftTurnManeuver_start_time
{
public:
  explicit Init_IntersectionTransitLeftTurnManeuver_start_time(::carma_planning_msgs::msg::IntersectionTransitLeftTurnManeuver & msg)
  : msg_(msg)
  {}
  Init_IntersectionTransitLeftTurnManeuver_end_dist start_time(::carma_planning_msgs::msg::IntersectionTransitLeftTurnManeuver::_start_time_type arg)
  {
    msg_.start_time = std::move(arg);
    return Init_IntersectionTransitLeftTurnManeuver_end_dist(msg_);
  }

private:
  ::carma_planning_msgs::msg::IntersectionTransitLeftTurnManeuver msg_;
};

class Init_IntersectionTransitLeftTurnManeuver_start_speed
{
public:
  explicit Init_IntersectionTransitLeftTurnManeuver_start_speed(::carma_planning_msgs::msg::IntersectionTransitLeftTurnManeuver & msg)
  : msg_(msg)
  {}
  Init_IntersectionTransitLeftTurnManeuver_start_time start_speed(::carma_planning_msgs::msg::IntersectionTransitLeftTurnManeuver::_start_speed_type arg)
  {
    msg_.start_speed = std::move(arg);
    return Init_IntersectionTransitLeftTurnManeuver_start_time(msg_);
  }

private:
  ::carma_planning_msgs::msg::IntersectionTransitLeftTurnManeuver msg_;
};

class Init_IntersectionTransitLeftTurnManeuver_start_dist
{
public:
  explicit Init_IntersectionTransitLeftTurnManeuver_start_dist(::carma_planning_msgs::msg::IntersectionTransitLeftTurnManeuver & msg)
  : msg_(msg)
  {}
  Init_IntersectionTransitLeftTurnManeuver_start_speed start_dist(::carma_planning_msgs::msg::IntersectionTransitLeftTurnManeuver::_start_dist_type arg)
  {
    msg_.start_dist = std::move(arg);
    return Init_IntersectionTransitLeftTurnManeuver_start_speed(msg_);
  }

private:
  ::carma_planning_msgs::msg::IntersectionTransitLeftTurnManeuver msg_;
};

class Init_IntersectionTransitLeftTurnManeuver_parameters
{
public:
  Init_IntersectionTransitLeftTurnManeuver_parameters()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_IntersectionTransitLeftTurnManeuver_start_dist parameters(::carma_planning_msgs::msg::IntersectionTransitLeftTurnManeuver::_parameters_type arg)
  {
    msg_.parameters = std::move(arg);
    return Init_IntersectionTransitLeftTurnManeuver_start_dist(msg_);
  }

private:
  ::carma_planning_msgs::msg::IntersectionTransitLeftTurnManeuver msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::carma_planning_msgs::msg::IntersectionTransitLeftTurnManeuver>()
{
  return carma_planning_msgs::msg::builder::Init_IntersectionTransitLeftTurnManeuver_parameters();
}

}  // namespace carma_planning_msgs

#endif  // CARMA_PLANNING_MSGS__MSG__DETAIL__INTERSECTION_TRANSIT_LEFT_TURN_MANEUVER__BUILDER_HPP_
