// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from carma_planning_msgs:srv/PlanTrajectory.idl
// generated code does not contain a copyright notice

#ifndef CARMA_PLANNING_MSGS__SRV__DETAIL__PLAN_TRAJECTORY__BUILDER_HPP_
#define CARMA_PLANNING_MSGS__SRV__DETAIL__PLAN_TRAJECTORY__BUILDER_HPP_

#include "carma_planning_msgs/srv/detail/plan_trajectory__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace carma_planning_msgs
{

namespace srv
{

namespace builder
{

class Init_PlanTrajectory_Request_maneuver_index_to_plan
{
public:
  explicit Init_PlanTrajectory_Request_maneuver_index_to_plan(::carma_planning_msgs::srv::PlanTrajectory_Request & msg)
  : msg_(msg)
  {}
  ::carma_planning_msgs::srv::PlanTrajectory_Request maneuver_index_to_plan(::carma_planning_msgs::srv::PlanTrajectory_Request::_maneuver_index_to_plan_type arg)
  {
    msg_.maneuver_index_to_plan = std::move(arg);
    return std::move(msg_);
  }

private:
  ::carma_planning_msgs::srv::PlanTrajectory_Request msg_;
};

class Init_PlanTrajectory_Request_initial_trajectory_plan
{
public:
  explicit Init_PlanTrajectory_Request_initial_trajectory_plan(::carma_planning_msgs::srv::PlanTrajectory_Request & msg)
  : msg_(msg)
  {}
  Init_PlanTrajectory_Request_maneuver_index_to_plan initial_trajectory_plan(::carma_planning_msgs::srv::PlanTrajectory_Request::_initial_trajectory_plan_type arg)
  {
    msg_.initial_trajectory_plan = std::move(arg);
    return Init_PlanTrajectory_Request_maneuver_index_to_plan(msg_);
  }

private:
  ::carma_planning_msgs::srv::PlanTrajectory_Request msg_;
};

class Init_PlanTrajectory_Request_maneuver_plan
{
public:
  explicit Init_PlanTrajectory_Request_maneuver_plan(::carma_planning_msgs::srv::PlanTrajectory_Request & msg)
  : msg_(msg)
  {}
  Init_PlanTrajectory_Request_initial_trajectory_plan maneuver_plan(::carma_planning_msgs::srv::PlanTrajectory_Request::_maneuver_plan_type arg)
  {
    msg_.maneuver_plan = std::move(arg);
    return Init_PlanTrajectory_Request_initial_trajectory_plan(msg_);
  }

private:
  ::carma_planning_msgs::srv::PlanTrajectory_Request msg_;
};

class Init_PlanTrajectory_Request_vehicle_state
{
public:
  explicit Init_PlanTrajectory_Request_vehicle_state(::carma_planning_msgs::srv::PlanTrajectory_Request & msg)
  : msg_(msg)
  {}
  Init_PlanTrajectory_Request_maneuver_plan vehicle_state(::carma_planning_msgs::srv::PlanTrajectory_Request::_vehicle_state_type arg)
  {
    msg_.vehicle_state = std::move(arg);
    return Init_PlanTrajectory_Request_maneuver_plan(msg_);
  }

private:
  ::carma_planning_msgs::srv::PlanTrajectory_Request msg_;
};

class Init_PlanTrajectory_Request_header
{
public:
  Init_PlanTrajectory_Request_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PlanTrajectory_Request_vehicle_state header(::carma_planning_msgs::srv::PlanTrajectory_Request::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_PlanTrajectory_Request_vehicle_state(msg_);
  }

private:
  ::carma_planning_msgs::srv::PlanTrajectory_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::carma_planning_msgs::srv::PlanTrajectory_Request>()
{
  return carma_planning_msgs::srv::builder::Init_PlanTrajectory_Request_header();
}

}  // namespace carma_planning_msgs


namespace carma_planning_msgs
{

namespace srv
{

namespace builder
{

class Init_PlanTrajectory_Response_maneuver_status
{
public:
  explicit Init_PlanTrajectory_Response_maneuver_status(::carma_planning_msgs::srv::PlanTrajectory_Response & msg)
  : msg_(msg)
  {}
  ::carma_planning_msgs::srv::PlanTrajectory_Response maneuver_status(::carma_planning_msgs::srv::PlanTrajectory_Response::_maneuver_status_type arg)
  {
    msg_.maneuver_status = std::move(arg);
    return std::move(msg_);
  }

private:
  ::carma_planning_msgs::srv::PlanTrajectory_Response msg_;
};

class Init_PlanTrajectory_Response_related_maneuvers
{
public:
  explicit Init_PlanTrajectory_Response_related_maneuvers(::carma_planning_msgs::srv::PlanTrajectory_Response & msg)
  : msg_(msg)
  {}
  Init_PlanTrajectory_Response_maneuver_status related_maneuvers(::carma_planning_msgs::srv::PlanTrajectory_Response::_related_maneuvers_type arg)
  {
    msg_.related_maneuvers = std::move(arg);
    return Init_PlanTrajectory_Response_maneuver_status(msg_);
  }

private:
  ::carma_planning_msgs::srv::PlanTrajectory_Response msg_;
};

class Init_PlanTrajectory_Response_trajectory_plan
{
public:
  Init_PlanTrajectory_Response_trajectory_plan()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PlanTrajectory_Response_related_maneuvers trajectory_plan(::carma_planning_msgs::srv::PlanTrajectory_Response::_trajectory_plan_type arg)
  {
    msg_.trajectory_plan = std::move(arg);
    return Init_PlanTrajectory_Response_related_maneuvers(msg_);
  }

private:
  ::carma_planning_msgs::srv::PlanTrajectory_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::carma_planning_msgs::srv::PlanTrajectory_Response>()
{
  return carma_planning_msgs::srv::builder::Init_PlanTrajectory_Response_trajectory_plan();
}

}  // namespace carma_planning_msgs

#endif  // CARMA_PLANNING_MSGS__SRV__DETAIL__PLAN_TRAJECTORY__BUILDER_HPP_
