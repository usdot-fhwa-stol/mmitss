// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from carma_planning_msgs:srv/PluginActivation.idl
// generated code does not contain a copyright notice

#ifndef CARMA_PLANNING_MSGS__SRV__DETAIL__PLUGIN_ACTIVATION__BUILDER_HPP_
#define CARMA_PLANNING_MSGS__SRV__DETAIL__PLUGIN_ACTIVATION__BUILDER_HPP_

#include "carma_planning_msgs/srv/detail/plugin_activation__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace carma_planning_msgs
{

namespace srv
{

namespace builder
{

class Init_PluginActivation_Request_activated
{
public:
  explicit Init_PluginActivation_Request_activated(::carma_planning_msgs::srv::PluginActivation_Request & msg)
  : msg_(msg)
  {}
  ::carma_planning_msgs::srv::PluginActivation_Request activated(::carma_planning_msgs::srv::PluginActivation_Request::_activated_type arg)
  {
    msg_.activated = std::move(arg);
    return std::move(msg_);
  }

private:
  ::carma_planning_msgs::srv::PluginActivation_Request msg_;
};

class Init_PluginActivation_Request_plugin_version
{
public:
  explicit Init_PluginActivation_Request_plugin_version(::carma_planning_msgs::srv::PluginActivation_Request & msg)
  : msg_(msg)
  {}
  Init_PluginActivation_Request_activated plugin_version(::carma_planning_msgs::srv::PluginActivation_Request::_plugin_version_type arg)
  {
    msg_.plugin_version = std::move(arg);
    return Init_PluginActivation_Request_activated(msg_);
  }

private:
  ::carma_planning_msgs::srv::PluginActivation_Request msg_;
};

class Init_PluginActivation_Request_plugin_name
{
public:
  explicit Init_PluginActivation_Request_plugin_name(::carma_planning_msgs::srv::PluginActivation_Request & msg)
  : msg_(msg)
  {}
  Init_PluginActivation_Request_plugin_version plugin_name(::carma_planning_msgs::srv::PluginActivation_Request::_plugin_name_type arg)
  {
    msg_.plugin_name = std::move(arg);
    return Init_PluginActivation_Request_plugin_version(msg_);
  }

private:
  ::carma_planning_msgs::srv::PluginActivation_Request msg_;
};

class Init_PluginActivation_Request_header
{
public:
  Init_PluginActivation_Request_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PluginActivation_Request_plugin_name header(::carma_planning_msgs::srv::PluginActivation_Request::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_PluginActivation_Request_plugin_name(msg_);
  }

private:
  ::carma_planning_msgs::srv::PluginActivation_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::carma_planning_msgs::srv::PluginActivation_Request>()
{
  return carma_planning_msgs::srv::builder::Init_PluginActivation_Request_header();
}

}  // namespace carma_planning_msgs


namespace carma_planning_msgs
{

namespace srv
{

namespace builder
{

class Init_PluginActivation_Response_newstate
{
public:
  Init_PluginActivation_Response_newstate()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::carma_planning_msgs::srv::PluginActivation_Response newstate(::carma_planning_msgs::srv::PluginActivation_Response::_newstate_type arg)
  {
    msg_.newstate = std::move(arg);
    return std::move(msg_);
  }

private:
  ::carma_planning_msgs::srv::PluginActivation_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::carma_planning_msgs::srv::PluginActivation_Response>()
{
  return carma_planning_msgs::srv::builder::Init_PluginActivation_Response_newstate();
}

}  // namespace carma_planning_msgs

#endif  // CARMA_PLANNING_MSGS__SRV__DETAIL__PLUGIN_ACTIVATION__BUILDER_HPP_
