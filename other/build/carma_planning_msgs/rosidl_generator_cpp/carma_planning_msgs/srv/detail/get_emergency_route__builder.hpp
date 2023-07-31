// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from carma_planning_msgs:srv/GetEmergencyRoute.idl
// generated code does not contain a copyright notice

#ifndef CARMA_PLANNING_MSGS__SRV__DETAIL__GET_EMERGENCY_ROUTE__BUILDER_HPP_
#define CARMA_PLANNING_MSGS__SRV__DETAIL__GET_EMERGENCY_ROUTE__BUILDER_HPP_

#include "carma_planning_msgs/srv/detail/get_emergency_route__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace carma_planning_msgs
{

namespace srv
{


}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::carma_planning_msgs::srv::GetEmergencyRoute_Request>()
{
  return ::carma_planning_msgs::srv::GetEmergencyRoute_Request(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace carma_planning_msgs


namespace carma_planning_msgs
{

namespace srv
{

namespace builder
{

class Init_GetEmergencyRoute_Response_route_name
{
public:
  explicit Init_GetEmergencyRoute_Response_route_name(::carma_planning_msgs::srv::GetEmergencyRoute_Response & msg)
  : msg_(msg)
  {}
  ::carma_planning_msgs::srv::GetEmergencyRoute_Response route_name(::carma_planning_msgs::srv::GetEmergencyRoute_Response::_route_name_type arg)
  {
    msg_.route_name = std::move(arg);
    return std::move(msg_);
  }

private:
  ::carma_planning_msgs::srv::GetEmergencyRoute_Response msg_;
};

class Init_GetEmergencyRoute_Response_is_successful
{
public:
  Init_GetEmergencyRoute_Response_is_successful()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetEmergencyRoute_Response_route_name is_successful(::carma_planning_msgs::srv::GetEmergencyRoute_Response::_is_successful_type arg)
  {
    msg_.is_successful = std::move(arg);
    return Init_GetEmergencyRoute_Response_route_name(msg_);
  }

private:
  ::carma_planning_msgs::srv::GetEmergencyRoute_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::carma_planning_msgs::srv::GetEmergencyRoute_Response>()
{
  return carma_planning_msgs::srv::builder::Init_GetEmergencyRoute_Response_is_successful();
}

}  // namespace carma_planning_msgs

#endif  // CARMA_PLANNING_MSGS__SRV__DETAIL__GET_EMERGENCY_ROUTE__BUILDER_HPP_
