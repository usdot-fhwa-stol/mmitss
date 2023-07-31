// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from carma_planning_msgs:srv/GetRegisteredPlugins.idl
// generated code does not contain a copyright notice

#ifndef CARMA_PLANNING_MSGS__SRV__DETAIL__GET_REGISTERED_PLUGINS__BUILDER_HPP_
#define CARMA_PLANNING_MSGS__SRV__DETAIL__GET_REGISTERED_PLUGINS__BUILDER_HPP_

#include "carma_planning_msgs/srv/detail/get_registered_plugins__struct.hpp"
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
auto build<::carma_planning_msgs::srv::GetRegisteredPlugins_Request>()
{
  return ::carma_planning_msgs::srv::GetRegisteredPlugins_Request(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace carma_planning_msgs


namespace carma_planning_msgs
{

namespace srv
{

namespace builder
{

class Init_GetRegisteredPlugins_Response_plugins
{
public:
  Init_GetRegisteredPlugins_Response_plugins()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::carma_planning_msgs::srv::GetRegisteredPlugins_Response plugins(::carma_planning_msgs::srv::GetRegisteredPlugins_Response::_plugins_type arg)
  {
    msg_.plugins = std::move(arg);
    return std::move(msg_);
  }

private:
  ::carma_planning_msgs::srv::GetRegisteredPlugins_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::carma_planning_msgs::srv::GetRegisteredPlugins_Response>()
{
  return carma_planning_msgs::srv::builder::Init_GetRegisteredPlugins_Response_plugins();
}

}  // namespace carma_planning_msgs

#endif  // CARMA_PLANNING_MSGS__SRV__DETAIL__GET_REGISTERED_PLUGINS__BUILDER_HPP_
