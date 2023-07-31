// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from carma_planning_msgs:srv/PlanManeuvers.idl
// generated code does not contain a copyright notice

#ifndef CARMA_PLANNING_MSGS__SRV__DETAIL__PLAN_MANEUVERS__BUILDER_HPP_
#define CARMA_PLANNING_MSGS__SRV__DETAIL__PLAN_MANEUVERS__BUILDER_HPP_

#include "carma_planning_msgs/srv/detail/plan_maneuvers__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace carma_planning_msgs
{

namespace srv
{

namespace builder
{

class Init_PlanManeuvers_Request_veh_lane_id
{
public:
  explicit Init_PlanManeuvers_Request_veh_lane_id(::carma_planning_msgs::srv::PlanManeuvers_Request & msg)
  : msg_(msg)
  {}
  ::carma_planning_msgs::srv::PlanManeuvers_Request veh_lane_id(::carma_planning_msgs::srv::PlanManeuvers_Request::_veh_lane_id_type arg)
  {
    msg_.veh_lane_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::carma_planning_msgs::srv::PlanManeuvers_Request msg_;
};

class Init_PlanManeuvers_Request_veh_logitudinal_velocity
{
public:
  explicit Init_PlanManeuvers_Request_veh_logitudinal_velocity(::carma_planning_msgs::srv::PlanManeuvers_Request & msg)
  : msg_(msg)
  {}
  Init_PlanManeuvers_Request_veh_lane_id veh_logitudinal_velocity(::carma_planning_msgs::srv::PlanManeuvers_Request::_veh_logitudinal_velocity_type arg)
  {
    msg_.veh_logitudinal_velocity = std::move(arg);
    return Init_PlanManeuvers_Request_veh_lane_id(msg_);
  }

private:
  ::carma_planning_msgs::srv::PlanManeuvers_Request msg_;
};

class Init_PlanManeuvers_Request_veh_downtrack
{
public:
  explicit Init_PlanManeuvers_Request_veh_downtrack(::carma_planning_msgs::srv::PlanManeuvers_Request & msg)
  : msg_(msg)
  {}
  Init_PlanManeuvers_Request_veh_logitudinal_velocity veh_downtrack(::carma_planning_msgs::srv::PlanManeuvers_Request::_veh_downtrack_type arg)
  {
    msg_.veh_downtrack = std::move(arg);
    return Init_PlanManeuvers_Request_veh_logitudinal_velocity(msg_);
  }

private:
  ::carma_planning_msgs::srv::PlanManeuvers_Request msg_;
};

class Init_PlanManeuvers_Request_veh_y
{
public:
  explicit Init_PlanManeuvers_Request_veh_y(::carma_planning_msgs::srv::PlanManeuvers_Request & msg)
  : msg_(msg)
  {}
  Init_PlanManeuvers_Request_veh_downtrack veh_y(::carma_planning_msgs::srv::PlanManeuvers_Request::_veh_y_type arg)
  {
    msg_.veh_y = std::move(arg);
    return Init_PlanManeuvers_Request_veh_downtrack(msg_);
  }

private:
  ::carma_planning_msgs::srv::PlanManeuvers_Request msg_;
};

class Init_PlanManeuvers_Request_veh_x
{
public:
  explicit Init_PlanManeuvers_Request_veh_x(::carma_planning_msgs::srv::PlanManeuvers_Request & msg)
  : msg_(msg)
  {}
  Init_PlanManeuvers_Request_veh_y veh_x(::carma_planning_msgs::srv::PlanManeuvers_Request::_veh_x_type arg)
  {
    msg_.veh_x = std::move(arg);
    return Init_PlanManeuvers_Request_veh_y(msg_);
  }

private:
  ::carma_planning_msgs::srv::PlanManeuvers_Request msg_;
};

class Init_PlanManeuvers_Request_prior_plan
{
public:
  explicit Init_PlanManeuvers_Request_prior_plan(::carma_planning_msgs::srv::PlanManeuvers_Request & msg)
  : msg_(msg)
  {}
  Init_PlanManeuvers_Request_veh_x prior_plan(::carma_planning_msgs::srv::PlanManeuvers_Request::_prior_plan_type arg)
  {
    msg_.prior_plan = std::move(arg);
    return Init_PlanManeuvers_Request_veh_x(msg_);
  }

private:
  ::carma_planning_msgs::srv::PlanManeuvers_Request msg_;
};

class Init_PlanManeuvers_Request_header
{
public:
  Init_PlanManeuvers_Request_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PlanManeuvers_Request_prior_plan header(::carma_planning_msgs::srv::PlanManeuvers_Request::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_PlanManeuvers_Request_prior_plan(msg_);
  }

private:
  ::carma_planning_msgs::srv::PlanManeuvers_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::carma_planning_msgs::srv::PlanManeuvers_Request>()
{
  return carma_planning_msgs::srv::builder::Init_PlanManeuvers_Request_header();
}

}  // namespace carma_planning_msgs


namespace carma_planning_msgs
{

namespace srv
{

namespace builder
{

class Init_PlanManeuvers_Response_new_plan
{
public:
  Init_PlanManeuvers_Response_new_plan()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::carma_planning_msgs::srv::PlanManeuvers_Response new_plan(::carma_planning_msgs::srv::PlanManeuvers_Response::_new_plan_type arg)
  {
    msg_.new_plan = std::move(arg);
    return std::move(msg_);
  }

private:
  ::carma_planning_msgs::srv::PlanManeuvers_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::carma_planning_msgs::srv::PlanManeuvers_Response>()
{
  return carma_planning_msgs::srv::builder::Init_PlanManeuvers_Response_new_plan();
}

}  // namespace carma_planning_msgs

#endif  // CARMA_PLANNING_MSGS__SRV__DETAIL__PLAN_MANEUVERS__BUILDER_HPP_
