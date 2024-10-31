// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from carma_planning_msgs:msg/TrajectoryPlan.idl
// generated code does not contain a copyright notice

#ifndef CARMA_PLANNING_MSGS__MSG__DETAIL__TRAJECTORY_PLAN__BUILDER_HPP_
#define CARMA_PLANNING_MSGS__MSG__DETAIL__TRAJECTORY_PLAN__BUILDER_HPP_

#include "carma_planning_msgs/msg/detail/trajectory_plan__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace carma_planning_msgs
{

namespace msg
{

namespace builder
{

class Init_TrajectoryPlan_trajectory_points
{
public:
  explicit Init_TrajectoryPlan_trajectory_points(::carma_planning_msgs::msg::TrajectoryPlan & msg)
  : msg_(msg)
  {}
  ::carma_planning_msgs::msg::TrajectoryPlan trajectory_points(::carma_planning_msgs::msg::TrajectoryPlan::_trajectory_points_type arg)
  {
    msg_.trajectory_points = std::move(arg);
    return std::move(msg_);
  }

private:
  ::carma_planning_msgs::msg::TrajectoryPlan msg_;
};

class Init_TrajectoryPlan_initial_longitudinal_velocity
{
public:
  explicit Init_TrajectoryPlan_initial_longitudinal_velocity(::carma_planning_msgs::msg::TrajectoryPlan & msg)
  : msg_(msg)
  {}
  Init_TrajectoryPlan_trajectory_points initial_longitudinal_velocity(::carma_planning_msgs::msg::TrajectoryPlan::_initial_longitudinal_velocity_type arg)
  {
    msg_.initial_longitudinal_velocity = std::move(arg);
    return Init_TrajectoryPlan_trajectory_points(msg_);
  }

private:
  ::carma_planning_msgs::msg::TrajectoryPlan msg_;
};

class Init_TrajectoryPlan_trajectory_id
{
public:
  explicit Init_TrajectoryPlan_trajectory_id(::carma_planning_msgs::msg::TrajectoryPlan & msg)
  : msg_(msg)
  {}
  Init_TrajectoryPlan_initial_longitudinal_velocity trajectory_id(::carma_planning_msgs::msg::TrajectoryPlan::_trajectory_id_type arg)
  {
    msg_.trajectory_id = std::move(arg);
    return Init_TrajectoryPlan_initial_longitudinal_velocity(msg_);
  }

private:
  ::carma_planning_msgs::msg::TrajectoryPlan msg_;
};

class Init_TrajectoryPlan_header
{
public:
  Init_TrajectoryPlan_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TrajectoryPlan_trajectory_id header(::carma_planning_msgs::msg::TrajectoryPlan::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_TrajectoryPlan_trajectory_id(msg_);
  }

private:
  ::carma_planning_msgs::msg::TrajectoryPlan msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::carma_planning_msgs::msg::TrajectoryPlan>()
{
  return carma_planning_msgs::msg::builder::Init_TrajectoryPlan_header();
}

}  // namespace carma_planning_msgs

#endif  // CARMA_PLANNING_MSGS__MSG__DETAIL__TRAJECTORY_PLAN__BUILDER_HPP_
