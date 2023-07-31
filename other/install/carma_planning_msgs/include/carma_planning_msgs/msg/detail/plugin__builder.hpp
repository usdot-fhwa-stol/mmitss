// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from carma_planning_msgs:msg/Plugin.idl
// generated code does not contain a copyright notice

#ifndef CARMA_PLANNING_MSGS__MSG__DETAIL__PLUGIN__BUILDER_HPP_
#define CARMA_PLANNING_MSGS__MSG__DETAIL__PLUGIN__BUILDER_HPP_

#include "carma_planning_msgs/msg/detail/plugin__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace carma_planning_msgs
{

namespace msg
{

namespace builder
{

class Init_Plugin_capability
{
public:
  explicit Init_Plugin_capability(::carma_planning_msgs::msg::Plugin & msg)
  : msg_(msg)
  {}
  ::carma_planning_msgs::msg::Plugin capability(::carma_planning_msgs::msg::Plugin::_capability_type arg)
  {
    msg_.capability = std::move(arg);
    return std::move(msg_);
  }

private:
  ::carma_planning_msgs::msg::Plugin msg_;
};

class Init_Plugin_activated
{
public:
  explicit Init_Plugin_activated(::carma_planning_msgs::msg::Plugin & msg)
  : msg_(msg)
  {}
  Init_Plugin_capability activated(::carma_planning_msgs::msg::Plugin::_activated_type arg)
  {
    msg_.activated = std::move(arg);
    return Init_Plugin_capability(msg_);
  }

private:
  ::carma_planning_msgs::msg::Plugin msg_;
};

class Init_Plugin_available
{
public:
  explicit Init_Plugin_available(::carma_planning_msgs::msg::Plugin & msg)
  : msg_(msg)
  {}
  Init_Plugin_activated available(::carma_planning_msgs::msg::Plugin::_available_type arg)
  {
    msg_.available = std::move(arg);
    return Init_Plugin_activated(msg_);
  }

private:
  ::carma_planning_msgs::msg::Plugin msg_;
};

class Init_Plugin_type
{
public:
  explicit Init_Plugin_type(::carma_planning_msgs::msg::Plugin & msg)
  : msg_(msg)
  {}
  Init_Plugin_available type(::carma_planning_msgs::msg::Plugin::_type_type arg)
  {
    msg_.type = std::move(arg);
    return Init_Plugin_available(msg_);
  }

private:
  ::carma_planning_msgs::msg::Plugin msg_;
};

class Init_Plugin_version_id
{
public:
  explicit Init_Plugin_version_id(::carma_planning_msgs::msg::Plugin & msg)
  : msg_(msg)
  {}
  Init_Plugin_type version_id(::carma_planning_msgs::msg::Plugin::_version_id_type arg)
  {
    msg_.version_id = std::move(arg);
    return Init_Plugin_type(msg_);
  }

private:
  ::carma_planning_msgs::msg::Plugin msg_;
};

class Init_Plugin_name
{
public:
  Init_Plugin_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Plugin_version_id name(::carma_planning_msgs::msg::Plugin::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_Plugin_version_id(msg_);
  }

private:
  ::carma_planning_msgs::msg::Plugin msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::carma_planning_msgs::msg::Plugin>()
{
  return carma_planning_msgs::msg::builder::Init_Plugin_name();
}

}  // namespace carma_planning_msgs

#endif  // CARMA_PLANNING_MSGS__MSG__DETAIL__PLUGIN__BUILDER_HPP_
