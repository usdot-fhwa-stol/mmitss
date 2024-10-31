// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from carma_planning_msgs:srv/GetPluginApi.idl
// generated code does not contain a copyright notice

#ifndef CARMA_PLANNING_MSGS__SRV__DETAIL__GET_PLUGIN_API__BUILDER_HPP_
#define CARMA_PLANNING_MSGS__SRV__DETAIL__GET_PLUGIN_API__BUILDER_HPP_

#include "carma_planning_msgs/srv/detail/get_plugin_api__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace carma_planning_msgs
{

namespace srv
{

namespace builder
{

class Init_GetPluginApi_Request_capability
{
public:
  Init_GetPluginApi_Request_capability()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::carma_planning_msgs::srv::GetPluginApi_Request capability(::carma_planning_msgs::srv::GetPluginApi_Request::_capability_type arg)
  {
    msg_.capability = std::move(arg);
    return std::move(msg_);
  }

private:
  ::carma_planning_msgs::srv::GetPluginApi_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::carma_planning_msgs::srv::GetPluginApi_Request>()
{
  return carma_planning_msgs::srv::builder::Init_GetPluginApi_Request_capability();
}

}  // namespace carma_planning_msgs


namespace carma_planning_msgs
{

namespace srv
{

namespace builder
{

class Init_GetPluginApi_Response_plan_service
{
public:
  Init_GetPluginApi_Response_plan_service()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::carma_planning_msgs::srv::GetPluginApi_Response plan_service(::carma_planning_msgs::srv::GetPluginApi_Response::_plan_service_type arg)
  {
    msg_.plan_service = std::move(arg);
    return std::move(msg_);
  }

private:
  ::carma_planning_msgs::srv::GetPluginApi_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::carma_planning_msgs::srv::GetPluginApi_Response>()
{
  return carma_planning_msgs::srv::builder::Init_GetPluginApi_Response_plan_service();
}

}  // namespace carma_planning_msgs

#endif  // CARMA_PLANNING_MSGS__SRV__DETAIL__GET_PLUGIN_API__BUILDER_HPP_
