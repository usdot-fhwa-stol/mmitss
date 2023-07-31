// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from carma_planning_msgs:srv/ComputePlanCost.idl
// generated code does not contain a copyright notice

#ifndef CARMA_PLANNING_MSGS__SRV__DETAIL__COMPUTE_PLAN_COST__BUILDER_HPP_
#define CARMA_PLANNING_MSGS__SRV__DETAIL__COMPUTE_PLAN_COST__BUILDER_HPP_

#include "carma_planning_msgs/srv/detail/compute_plan_cost__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace carma_planning_msgs
{

namespace srv
{

namespace builder
{

class Init_ComputePlanCost_Request_maneuver_plan
{
public:
  Init_ComputePlanCost_Request_maneuver_plan()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::carma_planning_msgs::srv::ComputePlanCost_Request maneuver_plan(::carma_planning_msgs::srv::ComputePlanCost_Request::_maneuver_plan_type arg)
  {
    msg_.maneuver_plan = std::move(arg);
    return std::move(msg_);
  }

private:
  ::carma_planning_msgs::srv::ComputePlanCost_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::carma_planning_msgs::srv::ComputePlanCost_Request>()
{
  return carma_planning_msgs::srv::builder::Init_ComputePlanCost_Request_maneuver_plan();
}

}  // namespace carma_planning_msgs


namespace carma_planning_msgs
{

namespace srv
{

namespace builder
{

class Init_ComputePlanCost_Response_plan_cost
{
public:
  Init_ComputePlanCost_Response_plan_cost()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::carma_planning_msgs::srv::ComputePlanCost_Response plan_cost(::carma_planning_msgs::srv::ComputePlanCost_Response::_plan_cost_type arg)
  {
    msg_.plan_cost = std::move(arg);
    return std::move(msg_);
  }

private:
  ::carma_planning_msgs::srv::ComputePlanCost_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::carma_planning_msgs::srv::ComputePlanCost_Response>()
{
  return carma_planning_msgs::srv::builder::Init_ComputePlanCost_Response_plan_cost();
}

}  // namespace carma_planning_msgs

#endif  // CARMA_PLANNING_MSGS__SRV__DETAIL__COMPUTE_PLAN_COST__BUILDER_HPP_
