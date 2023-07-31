// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from carma_planning_msgs:srv/SetActiveRoute.idl
// generated code does not contain a copyright notice

#ifndef CARMA_PLANNING_MSGS__SRV__DETAIL__SET_ACTIVE_ROUTE__BUILDER_HPP_
#define CARMA_PLANNING_MSGS__SRV__DETAIL__SET_ACTIVE_ROUTE__BUILDER_HPP_

#include "carma_planning_msgs/srv/detail/set_active_route__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace carma_planning_msgs
{

namespace srv
{

namespace builder
{

class Init_SetActiveRoute_Request_destination_points
{
public:
  explicit Init_SetActiveRoute_Request_destination_points(::carma_planning_msgs::srv::SetActiveRoute_Request & msg)
  : msg_(msg)
  {}
  ::carma_planning_msgs::srv::SetActiveRoute_Request destination_points(::carma_planning_msgs::srv::SetActiveRoute_Request::_destination_points_type arg)
  {
    msg_.destination_points = std::move(arg);
    return std::move(msg_);
  }

private:
  ::carma_planning_msgs::srv::SetActiveRoute_Request msg_;
};

class Init_SetActiveRoute_Request_route_id
{
public:
  explicit Init_SetActiveRoute_Request_route_id(::carma_planning_msgs::srv::SetActiveRoute_Request & msg)
  : msg_(msg)
  {}
  Init_SetActiveRoute_Request_destination_points route_id(::carma_planning_msgs::srv::SetActiveRoute_Request::_route_id_type arg)
  {
    msg_.route_id = std::move(arg);
    return Init_SetActiveRoute_Request_destination_points(msg_);
  }

private:
  ::carma_planning_msgs::srv::SetActiveRoute_Request msg_;
};

class Init_SetActiveRoute_Request_choice
{
public:
  Init_SetActiveRoute_Request_choice()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetActiveRoute_Request_route_id choice(::carma_planning_msgs::srv::SetActiveRoute_Request::_choice_type arg)
  {
    msg_.choice = std::move(arg);
    return Init_SetActiveRoute_Request_route_id(msg_);
  }

private:
  ::carma_planning_msgs::srv::SetActiveRoute_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::carma_planning_msgs::srv::SetActiveRoute_Request>()
{
  return carma_planning_msgs::srv::builder::Init_SetActiveRoute_Request_choice();
}

}  // namespace carma_planning_msgs


namespace carma_planning_msgs
{

namespace srv
{

namespace builder
{

class Init_SetActiveRoute_Response_error_status
{
public:
  Init_SetActiveRoute_Response_error_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::carma_planning_msgs::srv::SetActiveRoute_Response error_status(::carma_planning_msgs::srv::SetActiveRoute_Response::_error_status_type arg)
  {
    msg_.error_status = std::move(arg);
    return std::move(msg_);
  }

private:
  ::carma_planning_msgs::srv::SetActiveRoute_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::carma_planning_msgs::srv::SetActiveRoute_Response>()
{
  return carma_planning_msgs::srv::builder::Init_SetActiveRoute_Response_error_status();
}

}  // namespace carma_planning_msgs

#endif  // CARMA_PLANNING_MSGS__SRV__DETAIL__SET_ACTIVE_ROUTE__BUILDER_HPP_
