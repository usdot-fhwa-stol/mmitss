// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from carma_debug_ros2_msgs:msg/MapUpdateReadable.idl
// generated code does not contain a copyright notice

#ifndef CARMA_DEBUG_ROS2_MSGS__MSG__DETAIL__MAP_UPDATE_READABLE__BUILDER_HPP_
#define CARMA_DEBUG_ROS2_MSGS__MSG__DETAIL__MAP_UPDATE_READABLE__BUILDER_HPP_

#include "carma_debug_ros2_msgs/msg/detail/map_update_readable__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace carma_debug_ros2_msgs
{

namespace msg
{

namespace builder
{

class Init_MapUpdateReadable_remove_list
{
public:
  explicit Init_MapUpdateReadable_remove_list(::carma_debug_ros2_msgs::msg::MapUpdateReadable & msg)
  : msg_(msg)
  {}
  ::carma_debug_ros2_msgs::msg::MapUpdateReadable remove_list(::carma_debug_ros2_msgs::msg::MapUpdateReadable::_remove_list_type arg)
  {
    msg_.remove_list = std::move(arg);
    return std::move(msg_);
  }

private:
  ::carma_debug_ros2_msgs::msg::MapUpdateReadable msg_;
};

class Init_MapUpdateReadable_update_list
{
public:
  explicit Init_MapUpdateReadable_update_list(::carma_debug_ros2_msgs::msg::MapUpdateReadable & msg)
  : msg_(msg)
  {}
  Init_MapUpdateReadable_remove_list update_list(::carma_debug_ros2_msgs::msg::MapUpdateReadable::_update_list_type arg)
  {
    msg_.update_list = std::move(arg);
    return Init_MapUpdateReadable_remove_list(msg_);
  }

private:
  ::carma_debug_ros2_msgs::msg::MapUpdateReadable msg_;
};

class Init_MapUpdateReadable_traffic_control_id
{
public:
  explicit Init_MapUpdateReadable_traffic_control_id(::carma_debug_ros2_msgs::msg::MapUpdateReadable & msg)
  : msg_(msg)
  {}
  Init_MapUpdateReadable_update_list traffic_control_id(::carma_debug_ros2_msgs::msg::MapUpdateReadable::_traffic_control_id_type arg)
  {
    msg_.traffic_control_id = std::move(arg);
    return Init_MapUpdateReadable_update_list(msg_);
  }

private:
  ::carma_debug_ros2_msgs::msg::MapUpdateReadable msg_;
};

class Init_MapUpdateReadable_invalidates_route
{
public:
  explicit Init_MapUpdateReadable_invalidates_route(::carma_debug_ros2_msgs::msg::MapUpdateReadable & msg)
  : msg_(msg)
  {}
  Init_MapUpdateReadable_traffic_control_id invalidates_route(::carma_debug_ros2_msgs::msg::MapUpdateReadable::_invalidates_route_type arg)
  {
    msg_.invalidates_route = std::move(arg);
    return Init_MapUpdateReadable_traffic_control_id(msg_);
  }

private:
  ::carma_debug_ros2_msgs::msg::MapUpdateReadable msg_;
};

class Init_MapUpdateReadable_route_version
{
public:
  explicit Init_MapUpdateReadable_route_version(::carma_debug_ros2_msgs::msg::MapUpdateReadable & msg)
  : msg_(msg)
  {}
  Init_MapUpdateReadable_invalidates_route route_version(::carma_debug_ros2_msgs::msg::MapUpdateReadable::_route_version_type arg)
  {
    msg_.route_version = std::move(arg);
    return Init_MapUpdateReadable_invalidates_route(msg_);
  }

private:
  ::carma_debug_ros2_msgs::msg::MapUpdateReadable msg_;
};

class Init_MapUpdateReadable_route_id
{
public:
  explicit Init_MapUpdateReadable_route_id(::carma_debug_ros2_msgs::msg::MapUpdateReadable & msg)
  : msg_(msg)
  {}
  Init_MapUpdateReadable_route_version route_id(::carma_debug_ros2_msgs::msg::MapUpdateReadable::_route_id_type arg)
  {
    msg_.route_id = std::move(arg);
    return Init_MapUpdateReadable_route_version(msg_);
  }

private:
  ::carma_debug_ros2_msgs::msg::MapUpdateReadable msg_;
};

class Init_MapUpdateReadable_map_version
{
public:
  explicit Init_MapUpdateReadable_map_version(::carma_debug_ros2_msgs::msg::MapUpdateReadable & msg)
  : msg_(msg)
  {}
  Init_MapUpdateReadable_route_id map_version(::carma_debug_ros2_msgs::msg::MapUpdateReadable::_map_version_type arg)
  {
    msg_.map_version = std::move(arg);
    return Init_MapUpdateReadable_route_id(msg_);
  }

private:
  ::carma_debug_ros2_msgs::msg::MapUpdateReadable msg_;
};

class Init_MapUpdateReadable_format_version
{
public:
  explicit Init_MapUpdateReadable_format_version(::carma_debug_ros2_msgs::msg::MapUpdateReadable & msg)
  : msg_(msg)
  {}
  Init_MapUpdateReadable_map_version format_version(::carma_debug_ros2_msgs::msg::MapUpdateReadable::_format_version_type arg)
  {
    msg_.format_version = std::move(arg);
    return Init_MapUpdateReadable_map_version(msg_);
  }

private:
  ::carma_debug_ros2_msgs::msg::MapUpdateReadable msg_;
};

class Init_MapUpdateReadable_header
{
public:
  Init_MapUpdateReadable_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MapUpdateReadable_format_version header(::carma_debug_ros2_msgs::msg::MapUpdateReadable::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_MapUpdateReadable_format_version(msg_);
  }

private:
  ::carma_debug_ros2_msgs::msg::MapUpdateReadable msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::carma_debug_ros2_msgs::msg::MapUpdateReadable>()
{
  return carma_debug_ros2_msgs::msg::builder::Init_MapUpdateReadable_header();
}

}  // namespace carma_debug_ros2_msgs

#endif  // CARMA_DEBUG_ROS2_MSGS__MSG__DETAIL__MAP_UPDATE_READABLE__BUILDER_HPP_
