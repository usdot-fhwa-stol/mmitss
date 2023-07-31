// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from carma_planning_msgs:srv/PluginList.idl
// generated code does not contain a copyright notice

#ifndef CARMA_PLANNING_MSGS__SRV__DETAIL__PLUGIN_LIST__BUILDER_HPP_
#define CARMA_PLANNING_MSGS__SRV__DETAIL__PLUGIN_LIST__BUILDER_HPP_

#include "carma_planning_msgs/srv/detail/plugin_list__struct.hpp"
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
auto build<::carma_planning_msgs::srv::PluginList_Request>()
{
  return ::carma_planning_msgs::srv::PluginList_Request(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace carma_planning_msgs


namespace carma_planning_msgs
{

namespace srv
{

namespace builder
{

class Init_PluginList_Response_plugins
{
public:
  explicit Init_PluginList_Response_plugins(::carma_planning_msgs::srv::PluginList_Response & msg)
  : msg_(msg)
  {}
  ::carma_planning_msgs::srv::PluginList_Response plugins(::carma_planning_msgs::srv::PluginList_Response::_plugins_type arg)
  {
    msg_.plugins = std::move(arg);
    return std::move(msg_);
  }

private:
  ::carma_planning_msgs::srv::PluginList_Response msg_;
};

class Init_PluginList_Response_header
{
public:
  Init_PluginList_Response_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PluginList_Response_plugins header(::carma_planning_msgs::srv::PluginList_Response::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_PluginList_Response_plugins(msg_);
  }

private:
  ::carma_planning_msgs::srv::PluginList_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::carma_planning_msgs::srv::PluginList_Response>()
{
  return carma_planning_msgs::srv::builder::Init_PluginList_Response_header();
}

}  // namespace carma_planning_msgs

#endif  // CARMA_PLANNING_MSGS__SRV__DETAIL__PLUGIN_LIST__BUILDER_HPP_
