// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from carma_planning_msgs:msg/PluginList.idl
// generated code does not contain a copyright notice

#ifndef CARMA_PLANNING_MSGS__MSG__DETAIL__PLUGIN_LIST__BUILDER_HPP_
#define CARMA_PLANNING_MSGS__MSG__DETAIL__PLUGIN_LIST__BUILDER_HPP_

#include "carma_planning_msgs/msg/detail/plugin_list__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace carma_planning_msgs
{

namespace msg
{

namespace builder
{

class Init_PluginList_plugins
{
public:
  explicit Init_PluginList_plugins(::carma_planning_msgs::msg::PluginList & msg)
  : msg_(msg)
  {}
  ::carma_planning_msgs::msg::PluginList plugins(::carma_planning_msgs::msg::PluginList::_plugins_type arg)
  {
    msg_.plugins = std::move(arg);
    return std::move(msg_);
  }

private:
  ::carma_planning_msgs::msg::PluginList msg_;
};

class Init_PluginList_header
{
public:
  Init_PluginList_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PluginList_plugins header(::carma_planning_msgs::msg::PluginList::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_PluginList_plugins(msg_);
  }

private:
  ::carma_planning_msgs::msg::PluginList msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::carma_planning_msgs::msg::PluginList>()
{
  return carma_planning_msgs::msg::builder::Init_PluginList_header();
}

}  // namespace carma_planning_msgs

#endif  // CARMA_PLANNING_MSGS__MSG__DETAIL__PLUGIN_LIST__BUILDER_HPP_
