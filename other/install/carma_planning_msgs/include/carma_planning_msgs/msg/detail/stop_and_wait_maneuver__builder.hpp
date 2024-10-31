// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from carma_planning_msgs:msg/StopAndWaitManeuver.idl
// generated code does not contain a copyright notice

#ifndef CARMA_PLANNING_MSGS__MSG__DETAIL__STOP_AND_WAIT_MANEUVER__BUILDER_HPP_
#define CARMA_PLANNING_MSGS__MSG__DETAIL__STOP_AND_WAIT_MANEUVER__BUILDER_HPP_

#include "carma_planning_msgs/msg/detail/stop_and_wait_maneuver__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace carma_planning_msgs
{

namespace msg
{

namespace builder
{

class Init_StopAndWaitManeuver_ending_lane_id
{
public:
  explicit Init_StopAndWaitManeuver_ending_lane_id(::carma_planning_msgs::msg::StopAndWaitManeuver & msg)
  : msg_(msg)
  {}
  ::carma_planning_msgs::msg::StopAndWaitManeuver ending_lane_id(::carma_planning_msgs::msg::StopAndWaitManeuver::_ending_lane_id_type arg)
  {
    msg_.ending_lane_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::carma_planning_msgs::msg::StopAndWaitManeuver msg_;
};

class Init_StopAndWaitManeuver_starting_lane_id
{
public:
  explicit Init_StopAndWaitManeuver_starting_lane_id(::carma_planning_msgs::msg::StopAndWaitManeuver & msg)
  : msg_(msg)
  {}
  Init_StopAndWaitManeuver_ending_lane_id starting_lane_id(::carma_planning_msgs::msg::StopAndWaitManeuver::_starting_lane_id_type arg)
  {
    msg_.starting_lane_id = std::move(arg);
    return Init_StopAndWaitManeuver_ending_lane_id(msg_);
  }

private:
  ::carma_planning_msgs::msg::StopAndWaitManeuver msg_;
};

class Init_StopAndWaitManeuver_end_time
{
public:
  explicit Init_StopAndWaitManeuver_end_time(::carma_planning_msgs::msg::StopAndWaitManeuver & msg)
  : msg_(msg)
  {}
  Init_StopAndWaitManeuver_starting_lane_id end_time(::carma_planning_msgs::msg::StopAndWaitManeuver::_end_time_type arg)
  {
    msg_.end_time = std::move(arg);
    return Init_StopAndWaitManeuver_starting_lane_id(msg_);
  }

private:
  ::carma_planning_msgs::msg::StopAndWaitManeuver msg_;
};

class Init_StopAndWaitManeuver_end_dist
{
public:
  explicit Init_StopAndWaitManeuver_end_dist(::carma_planning_msgs::msg::StopAndWaitManeuver & msg)
  : msg_(msg)
  {}
  Init_StopAndWaitManeuver_end_time end_dist(::carma_planning_msgs::msg::StopAndWaitManeuver::_end_dist_type arg)
  {
    msg_.end_dist = std::move(arg);
    return Init_StopAndWaitManeuver_end_time(msg_);
  }

private:
  ::carma_planning_msgs::msg::StopAndWaitManeuver msg_;
};

class Init_StopAndWaitManeuver_start_time
{
public:
  explicit Init_StopAndWaitManeuver_start_time(::carma_planning_msgs::msg::StopAndWaitManeuver & msg)
  : msg_(msg)
  {}
  Init_StopAndWaitManeuver_end_dist start_time(::carma_planning_msgs::msg::StopAndWaitManeuver::_start_time_type arg)
  {
    msg_.start_time = std::move(arg);
    return Init_StopAndWaitManeuver_end_dist(msg_);
  }

private:
  ::carma_planning_msgs::msg::StopAndWaitManeuver msg_;
};

class Init_StopAndWaitManeuver_start_speed
{
public:
  explicit Init_StopAndWaitManeuver_start_speed(::carma_planning_msgs::msg::StopAndWaitManeuver & msg)
  : msg_(msg)
  {}
  Init_StopAndWaitManeuver_start_time start_speed(::carma_planning_msgs::msg::StopAndWaitManeuver::_start_speed_type arg)
  {
    msg_.start_speed = std::move(arg);
    return Init_StopAndWaitManeuver_start_time(msg_);
  }

private:
  ::carma_planning_msgs::msg::StopAndWaitManeuver msg_;
};

class Init_StopAndWaitManeuver_start_dist
{
public:
  explicit Init_StopAndWaitManeuver_start_dist(::carma_planning_msgs::msg::StopAndWaitManeuver & msg)
  : msg_(msg)
  {}
  Init_StopAndWaitManeuver_start_speed start_dist(::carma_planning_msgs::msg::StopAndWaitManeuver::_start_dist_type arg)
  {
    msg_.start_dist = std::move(arg);
    return Init_StopAndWaitManeuver_start_speed(msg_);
  }

private:
  ::carma_planning_msgs::msg::StopAndWaitManeuver msg_;
};

class Init_StopAndWaitManeuver_parameters
{
public:
  Init_StopAndWaitManeuver_parameters()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_StopAndWaitManeuver_start_dist parameters(::carma_planning_msgs::msg::StopAndWaitManeuver::_parameters_type arg)
  {
    msg_.parameters = std::move(arg);
    return Init_StopAndWaitManeuver_start_dist(msg_);
  }

private:
  ::carma_planning_msgs::msg::StopAndWaitManeuver msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::carma_planning_msgs::msg::StopAndWaitManeuver>()
{
  return carma_planning_msgs::msg::builder::Init_StopAndWaitManeuver_parameters();
}

}  // namespace carma_planning_msgs

#endif  // CARMA_PLANNING_MSGS__MSG__DETAIL__STOP_AND_WAIT_MANEUVER__BUILDER_HPP_
