// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from carma_debug_ros2_msgs:msg/TrajectoryCurvatureSpeeds.idl
// generated code does not contain a copyright notice

#ifndef CARMA_DEBUG_ROS2_MSGS__MSG__DETAIL__TRAJECTORY_CURVATURE_SPEEDS__BUILDER_HPP_
#define CARMA_DEBUG_ROS2_MSGS__MSG__DETAIL__TRAJECTORY_CURVATURE_SPEEDS__BUILDER_HPP_

#include "carma_debug_ros2_msgs/msg/detail/trajectory_curvature_speeds__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace carma_debug_ros2_msgs
{

namespace msg
{

namespace builder
{

class Init_TrajectoryCurvatureSpeeds_starting_state
{
public:
  explicit Init_TrajectoryCurvatureSpeeds_starting_state(::carma_debug_ros2_msgs::msg::TrajectoryCurvatureSpeeds & msg)
  : msg_(msg)
  {}
  ::carma_debug_ros2_msgs::msg::TrajectoryCurvatureSpeeds starting_state(::carma_debug_ros2_msgs::msg::TrajectoryCurvatureSpeeds::_starting_state_type arg)
  {
    msg_.starting_state = std::move(arg);
    return std::move(msg_);
  }

private:
  ::carma_debug_ros2_msgs::msg::TrajectoryCurvatureSpeeds msg_;
};

class Init_TrajectoryCurvatureSpeeds_lon_accel_limit
{
public:
  explicit Init_TrajectoryCurvatureSpeeds_lon_accel_limit(::carma_debug_ros2_msgs::msg::TrajectoryCurvatureSpeeds & msg)
  : msg_(msg)
  {}
  Init_TrajectoryCurvatureSpeeds_starting_state lon_accel_limit(::carma_debug_ros2_msgs::msg::TrajectoryCurvatureSpeeds::_lon_accel_limit_type arg)
  {
    msg_.lon_accel_limit = std::move(arg);
    return Init_TrajectoryCurvatureSpeeds_starting_state(msg_);
  }

private:
  ::carma_debug_ros2_msgs::msg::TrajectoryCurvatureSpeeds msg_;
};

class Init_TrajectoryCurvatureSpeeds_lat_accel_limit
{
public:
  explicit Init_TrajectoryCurvatureSpeeds_lat_accel_limit(::carma_debug_ros2_msgs::msg::TrajectoryCurvatureSpeeds & msg)
  : msg_(msg)
  {}
  Init_TrajectoryCurvatureSpeeds_lon_accel_limit lat_accel_limit(::carma_debug_ros2_msgs::msg::TrajectoryCurvatureSpeeds::_lat_accel_limit_type arg)
  {
    msg_.lat_accel_limit = std::move(arg);
    return Init_TrajectoryCurvatureSpeeds_lon_accel_limit(msg_);
  }

private:
  ::carma_debug_ros2_msgs::msg::TrajectoryCurvatureSpeeds msg_;
};

class Init_TrajectoryCurvatureSpeeds_relative_downtrack
{
public:
  explicit Init_TrajectoryCurvatureSpeeds_relative_downtrack(::carma_debug_ros2_msgs::msg::TrajectoryCurvatureSpeeds & msg)
  : msg_(msg)
  {}
  Init_TrajectoryCurvatureSpeeds_lat_accel_limit relative_downtrack(::carma_debug_ros2_msgs::msg::TrajectoryCurvatureSpeeds::_relative_downtrack_type arg)
  {
    msg_.relative_downtrack = std::move(arg);
    return Init_TrajectoryCurvatureSpeeds_lat_accel_limit(msg_);
  }

private:
  ::carma_debug_ros2_msgs::msg::TrajectoryCurvatureSpeeds msg_;
};

class Init_TrajectoryCurvatureSpeeds_tangent_headings
{
public:
  explicit Init_TrajectoryCurvatureSpeeds_tangent_headings(::carma_debug_ros2_msgs::msg::TrajectoryCurvatureSpeeds & msg)
  : msg_(msg)
  {}
  Init_TrajectoryCurvatureSpeeds_relative_downtrack tangent_headings(::carma_debug_ros2_msgs::msg::TrajectoryCurvatureSpeeds::_tangent_headings_type arg)
  {
    msg_.tangent_headings = std::move(arg);
    return Init_TrajectoryCurvatureSpeeds_relative_downtrack(msg_);
  }

private:
  ::carma_debug_ros2_msgs::msg::TrajectoryCurvatureSpeeds msg_;
};

class Init_TrajectoryCurvatureSpeeds_velocity_profile
{
public:
  explicit Init_TrajectoryCurvatureSpeeds_velocity_profile(::carma_debug_ros2_msgs::msg::TrajectoryCurvatureSpeeds & msg)
  : msg_(msg)
  {}
  Init_TrajectoryCurvatureSpeeds_tangent_headings velocity_profile(::carma_debug_ros2_msgs::msg::TrajectoryCurvatureSpeeds::_velocity_profile_type arg)
  {
    msg_.velocity_profile = std::move(arg);
    return Init_TrajectoryCurvatureSpeeds_tangent_headings(msg_);
  }

private:
  ::carma_debug_ros2_msgs::msg::TrajectoryCurvatureSpeeds msg_;
};

class Init_TrajectoryCurvatureSpeeds_speed_limits
{
public:
  explicit Init_TrajectoryCurvatureSpeeds_speed_limits(::carma_debug_ros2_msgs::msg::TrajectoryCurvatureSpeeds & msg)
  : msg_(msg)
  {}
  Init_TrajectoryCurvatureSpeeds_velocity_profile speed_limits(::carma_debug_ros2_msgs::msg::TrajectoryCurvatureSpeeds::_speed_limits_type arg)
  {
    msg_.speed_limits = std::move(arg);
    return Init_TrajectoryCurvatureSpeeds_velocity_profile(msg_);
  }

private:
  ::carma_debug_ros2_msgs::msg::TrajectoryCurvatureSpeeds msg_;
};

class Init_TrajectoryCurvatureSpeeds_curvatures
{
public:
  explicit Init_TrajectoryCurvatureSpeeds_curvatures(::carma_debug_ros2_msgs::msg::TrajectoryCurvatureSpeeds & msg)
  : msg_(msg)
  {}
  Init_TrajectoryCurvatureSpeeds_speed_limits curvatures(::carma_debug_ros2_msgs::msg::TrajectoryCurvatureSpeeds::_curvatures_type arg)
  {
    msg_.curvatures = std::move(arg);
    return Init_TrajectoryCurvatureSpeeds_speed_limits(msg_);
  }

private:
  ::carma_debug_ros2_msgs::msg::TrajectoryCurvatureSpeeds msg_;
};

class Init_TrajectoryCurvatureSpeeds_trajectory_plan
{
public:
  Init_TrajectoryCurvatureSpeeds_trajectory_plan()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TrajectoryCurvatureSpeeds_curvatures trajectory_plan(::carma_debug_ros2_msgs::msg::TrajectoryCurvatureSpeeds::_trajectory_plan_type arg)
  {
    msg_.trajectory_plan = std::move(arg);
    return Init_TrajectoryCurvatureSpeeds_curvatures(msg_);
  }

private:
  ::carma_debug_ros2_msgs::msg::TrajectoryCurvatureSpeeds msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::carma_debug_ros2_msgs::msg::TrajectoryCurvatureSpeeds>()
{
  return carma_debug_ros2_msgs::msg::builder::Init_TrajectoryCurvatureSpeeds_trajectory_plan();
}

}  // namespace carma_debug_ros2_msgs

#endif  // CARMA_DEBUG_ROS2_MSGS__MSG__DETAIL__TRAJECTORY_CURVATURE_SPEEDS__BUILDER_HPP_
