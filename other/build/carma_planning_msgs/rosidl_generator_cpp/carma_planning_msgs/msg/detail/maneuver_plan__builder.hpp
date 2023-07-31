// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from carma_planning_msgs:msg/ManeuverPlan.idl
// generated code does not contain a copyright notice

#ifndef CARMA_PLANNING_MSGS__MSG__DETAIL__MANEUVER_PLAN__BUILDER_HPP_
#define CARMA_PLANNING_MSGS__MSG__DETAIL__MANEUVER_PLAN__BUILDER_HPP_

#include "carma_planning_msgs/msg/detail/maneuver_plan__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace carma_planning_msgs
{

namespace msg
{

namespace builder
{

class Init_ManeuverPlan_maneuvers
{
public:
  explicit Init_ManeuverPlan_maneuvers(::carma_planning_msgs::msg::ManeuverPlan & msg)
  : msg_(msg)
  {}
  ::carma_planning_msgs::msg::ManeuverPlan maneuvers(::carma_planning_msgs::msg::ManeuverPlan::_maneuvers_type arg)
  {
    msg_.maneuvers = std::move(arg);
    return std::move(msg_);
  }

private:
  ::carma_planning_msgs::msg::ManeuverPlan msg_;
};

class Init_ManeuverPlan_planning_completion_time
{
public:
  explicit Init_ManeuverPlan_planning_completion_time(::carma_planning_msgs::msg::ManeuverPlan & msg)
  : msg_(msg)
  {}
  Init_ManeuverPlan_maneuvers planning_completion_time(::carma_planning_msgs::msg::ManeuverPlan::_planning_completion_time_type arg)
  {
    msg_.planning_completion_time = std::move(arg);
    return Init_ManeuverPlan_maneuvers(msg_);
  }

private:
  ::carma_planning_msgs::msg::ManeuverPlan msg_;
};

class Init_ManeuverPlan_planning_start_time
{
public:
  explicit Init_ManeuverPlan_planning_start_time(::carma_planning_msgs::msg::ManeuverPlan & msg)
  : msg_(msg)
  {}
  Init_ManeuverPlan_planning_completion_time planning_start_time(::carma_planning_msgs::msg::ManeuverPlan::_planning_start_time_type arg)
  {
    msg_.planning_start_time = std::move(arg);
    return Init_ManeuverPlan_planning_completion_time(msg_);
  }

private:
  ::carma_planning_msgs::msg::ManeuverPlan msg_;
};

class Init_ManeuverPlan_maneuver_plan_id
{
public:
  explicit Init_ManeuverPlan_maneuver_plan_id(::carma_planning_msgs::msg::ManeuverPlan & msg)
  : msg_(msg)
  {}
  Init_ManeuverPlan_planning_start_time maneuver_plan_id(::carma_planning_msgs::msg::ManeuverPlan::_maneuver_plan_id_type arg)
  {
    msg_.maneuver_plan_id = std::move(arg);
    return Init_ManeuverPlan_planning_start_time(msg_);
  }

private:
  ::carma_planning_msgs::msg::ManeuverPlan msg_;
};

class Init_ManeuverPlan_header
{
public:
  Init_ManeuverPlan_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ManeuverPlan_maneuver_plan_id header(::carma_planning_msgs::msg::ManeuverPlan::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_ManeuverPlan_maneuver_plan_id(msg_);
  }

private:
  ::carma_planning_msgs::msg::ManeuverPlan msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::carma_planning_msgs::msg::ManeuverPlan>()
{
  return carma_planning_msgs::msg::builder::Init_ManeuverPlan_header();
}

}  // namespace carma_planning_msgs

#endif  // CARMA_PLANNING_MSGS__MSG__DETAIL__MANEUVER_PLAN__BUILDER_HPP_
