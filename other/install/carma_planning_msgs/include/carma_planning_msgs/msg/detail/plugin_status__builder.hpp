// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from carma_planning_msgs:msg/PluginStatus.idl
// generated code does not contain a copyright notice

#ifndef CARMA_PLANNING_MSGS__MSG__DETAIL__PLUGIN_STATUS__BUILDER_HPP_
#define CARMA_PLANNING_MSGS__MSG__DETAIL__PLUGIN_STATUS__BUILDER_HPP_

#include "carma_planning_msgs/msg/detail/plugin_status__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace carma_planning_msgs
{

namespace msg
{

namespace builder
{

class Init_PluginStatus_is_control_plugin
{
public:
  explicit Init_PluginStatus_is_control_plugin(::carma_planning_msgs::msg::PluginStatus & msg)
  : msg_(msg)
  {}
  ::carma_planning_msgs::msg::PluginStatus is_control_plugin(::carma_planning_msgs::msg::PluginStatus::_is_control_plugin_type arg)
  {
    msg_.is_control_plugin = std::move(arg);
    return std::move(msg_);
  }

private:
  ::carma_planning_msgs::msg::PluginStatus msg_;
};

class Init_PluginStatus_is_tactical_plugin
{
public:
  explicit Init_PluginStatus_is_tactical_plugin(::carma_planning_msgs::msg::PluginStatus & msg)
  : msg_(msg)
  {}
  Init_PluginStatus_is_control_plugin is_tactical_plugin(::carma_planning_msgs::msg::PluginStatus::_is_tactical_plugin_type arg)
  {
    msg_.is_tactical_plugin = std::move(arg);
    return Init_PluginStatus_is_control_plugin(msg_);
  }

private:
  ::carma_planning_msgs::msg::PluginStatus msg_;
};

class Init_PluginStatus_is_strategic_plugin
{
public:
  explicit Init_PluginStatus_is_strategic_plugin(::carma_planning_msgs::msg::PluginStatus & msg)
  : msg_(msg)
  {}
  Init_PluginStatus_is_tactical_plugin is_strategic_plugin(::carma_planning_msgs::msg::PluginStatus::_is_strategic_plugin_type arg)
  {
    msg_.is_strategic_plugin = std::move(arg);
    return Init_PluginStatus_is_tactical_plugin(msg_);
  }

private:
  ::carma_planning_msgs::msg::PluginStatus msg_;
};

class Init_PluginStatus_status
{
public:
  explicit Init_PluginStatus_status(::carma_planning_msgs::msg::PluginStatus & msg)
  : msg_(msg)
  {}
  Init_PluginStatus_is_strategic_plugin status(::carma_planning_msgs::msg::PluginStatus::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_PluginStatus_is_strategic_plugin(msg_);
  }

private:
  ::carma_planning_msgs::msg::PluginStatus msg_;
};

class Init_PluginStatus_name
{
public:
  Init_PluginStatus_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PluginStatus_status name(::carma_planning_msgs::msg::PluginStatus::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_PluginStatus_status(msg_);
  }

private:
  ::carma_planning_msgs::msg::PluginStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::carma_planning_msgs::msg::PluginStatus>()
{
  return carma_planning_msgs::msg::builder::Init_PluginStatus_name();
}

}  // namespace carma_planning_msgs

#endif  // CARMA_PLANNING_MSGS__MSG__DETAIL__PLUGIN_STATUS__BUILDER_HPP_
