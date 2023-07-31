// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from carma_planning_msgs:msg/Route.idl
// generated code does not contain a copyright notice

#ifndef CARMA_PLANNING_MSGS__MSG__DETAIL__ROUTE__BUILDER_HPP_
#define CARMA_PLANNING_MSGS__MSG__DETAIL__ROUTE__BUILDER_HPP_

#include "carma_planning_msgs/msg/detail/route__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace carma_planning_msgs
{

namespace msg
{

namespace builder
{

class Init_Route_end_point
{
public:
  explicit Init_Route_end_point(::carma_planning_msgs::msg::Route & msg)
  : msg_(msg)
  {}
  ::carma_planning_msgs::msg::Route end_point(::carma_planning_msgs::msg::Route::_end_point_type arg)
  {
    msg_.end_point = std::move(arg);
    return std::move(msg_);
  }

private:
  ::carma_planning_msgs::msg::Route msg_;
};

class Init_Route_route_path_lanelet_ids
{
public:
  explicit Init_Route_route_path_lanelet_ids(::carma_planning_msgs::msg::Route & msg)
  : msg_(msg)
  {}
  Init_Route_end_point route_path_lanelet_ids(::carma_planning_msgs::msg::Route::_route_path_lanelet_ids_type arg)
  {
    msg_.route_path_lanelet_ids = std::move(arg);
    return Init_Route_end_point(msg_);
  }

private:
  ::carma_planning_msgs::msg::Route msg_;
};

class Init_Route_shortest_path_lanelet_ids
{
public:
  explicit Init_Route_shortest_path_lanelet_ids(::carma_planning_msgs::msg::Route & msg)
  : msg_(msg)
  {}
  Init_Route_route_path_lanelet_ids shortest_path_lanelet_ids(::carma_planning_msgs::msg::Route::_shortest_path_lanelet_ids_type arg)
  {
    msg_.shortest_path_lanelet_ids = std::move(arg);
    return Init_Route_route_path_lanelet_ids(msg_);
  }

private:
  ::carma_planning_msgs::msg::Route msg_;
};

class Init_Route_is_rerouted
{
public:
  explicit Init_Route_is_rerouted(::carma_planning_msgs::msg::Route & msg)
  : msg_(msg)
  {}
  Init_Route_shortest_path_lanelet_ids is_rerouted(::carma_planning_msgs::msg::Route::_is_rerouted_type arg)
  {
    msg_.is_rerouted = std::move(arg);
    return Init_Route_shortest_path_lanelet_ids(msg_);
  }

private:
  ::carma_planning_msgs::msg::Route msg_;
};

class Init_Route_route_name
{
public:
  explicit Init_Route_route_name(::carma_planning_msgs::msg::Route & msg)
  : msg_(msg)
  {}
  Init_Route_is_rerouted route_name(::carma_planning_msgs::msg::Route::_route_name_type arg)
  {
    msg_.route_name = std::move(arg);
    return Init_Route_is_rerouted(msg_);
  }

private:
  ::carma_planning_msgs::msg::Route msg_;
};

class Init_Route_map_version
{
public:
  explicit Init_Route_map_version(::carma_planning_msgs::msg::Route & msg)
  : msg_(msg)
  {}
  Init_Route_route_name map_version(::carma_planning_msgs::msg::Route::_map_version_type arg)
  {
    msg_.map_version = std::move(arg);
    return Init_Route_route_name(msg_);
  }

private:
  ::carma_planning_msgs::msg::Route msg_;
};

class Init_Route_route_version
{
public:
  explicit Init_Route_route_version(::carma_planning_msgs::msg::Route & msg)
  : msg_(msg)
  {}
  Init_Route_map_version route_version(::carma_planning_msgs::msg::Route::_route_version_type arg)
  {
    msg_.route_version = std::move(arg);
    return Init_Route_map_version(msg_);
  }

private:
  ::carma_planning_msgs::msg::Route msg_;
};

class Init_Route_route_id
{
public:
  explicit Init_Route_route_id(::carma_planning_msgs::msg::Route & msg)
  : msg_(msg)
  {}
  Init_Route_route_version route_id(::carma_planning_msgs::msg::Route::_route_id_type arg)
  {
    msg_.route_id = std::move(arg);
    return Init_Route_route_version(msg_);
  }

private:
  ::carma_planning_msgs::msg::Route msg_;
};

class Init_Route_header
{
public:
  Init_Route_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Route_route_id header(::carma_planning_msgs::msg::Route::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_Route_route_id(msg_);
  }

private:
  ::carma_planning_msgs::msg::Route msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::carma_planning_msgs::msg::Route>()
{
  return carma_planning_msgs::msg::builder::Init_Route_header();
}

}  // namespace carma_planning_msgs

#endif  // CARMA_PLANNING_MSGS__MSG__DETAIL__ROUTE__BUILDER_HPP_
