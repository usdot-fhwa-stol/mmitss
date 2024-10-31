// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from carma_planning_msgs:msg/RouteState.idl
// generated code does not contain a copyright notice

#ifndef CARMA_PLANNING_MSGS__MSG__DETAIL__ROUTE_STATE__BUILDER_HPP_
#define CARMA_PLANNING_MSGS__MSG__DETAIL__ROUTE_STATE__BUILDER_HPP_

#include "carma_planning_msgs/msg/detail/route_state__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace carma_planning_msgs
{

namespace msg
{

namespace builder
{

class Init_RouteState_speed_limit
{
public:
  explicit Init_RouteState_speed_limit(::carma_planning_msgs::msg::RouteState & msg)
  : msg_(msg)
  {}
  ::carma_planning_msgs::msg::RouteState speed_limit(::carma_planning_msgs::msg::RouteState::_speed_limit_type arg)
  {
    msg_.speed_limit = std::move(arg);
    return std::move(msg_);
  }

private:
  ::carma_planning_msgs::msg::RouteState msg_;
};

class Init_RouteState_lanelet_id
{
public:
  explicit Init_RouteState_lanelet_id(::carma_planning_msgs::msg::RouteState & msg)
  : msg_(msg)
  {}
  Init_RouteState_speed_limit lanelet_id(::carma_planning_msgs::msg::RouteState::_lanelet_id_type arg)
  {
    msg_.lanelet_id = std::move(arg);
    return Init_RouteState_speed_limit(msg_);
  }

private:
  ::carma_planning_msgs::msg::RouteState msg_;
};

class Init_RouteState_lanelet_downtrack
{
public:
  explicit Init_RouteState_lanelet_downtrack(::carma_planning_msgs::msg::RouteState & msg)
  : msg_(msg)
  {}
  Init_RouteState_lanelet_id lanelet_downtrack(::carma_planning_msgs::msg::RouteState::_lanelet_downtrack_type arg)
  {
    msg_.lanelet_downtrack = std::move(arg);
    return Init_RouteState_lanelet_id(msg_);
  }

private:
  ::carma_planning_msgs::msg::RouteState msg_;
};

class Init_RouteState_down_track
{
public:
  explicit Init_RouteState_down_track(::carma_planning_msgs::msg::RouteState & msg)
  : msg_(msg)
  {}
  Init_RouteState_lanelet_downtrack down_track(::carma_planning_msgs::msg::RouteState::_down_track_type arg)
  {
    msg_.down_track = std::move(arg);
    return Init_RouteState_lanelet_downtrack(msg_);
  }

private:
  ::carma_planning_msgs::msg::RouteState msg_;
};

class Init_RouteState_cross_track
{
public:
  explicit Init_RouteState_cross_track(::carma_planning_msgs::msg::RouteState & msg)
  : msg_(msg)
  {}
  Init_RouteState_down_track cross_track(::carma_planning_msgs::msg::RouteState::_cross_track_type arg)
  {
    msg_.cross_track = std::move(arg);
    return Init_RouteState_down_track(msg_);
  }

private:
  ::carma_planning_msgs::msg::RouteState msg_;
};

class Init_RouteState_state
{
public:
  explicit Init_RouteState_state(::carma_planning_msgs::msg::RouteState & msg)
  : msg_(msg)
  {}
  Init_RouteState_cross_track state(::carma_planning_msgs::msg::RouteState::_state_type arg)
  {
    msg_.state = std::move(arg);
    return Init_RouteState_cross_track(msg_);
  }

private:
  ::carma_planning_msgs::msg::RouteState msg_;
};

class Init_RouteState_route_id
{
public:
  explicit Init_RouteState_route_id(::carma_planning_msgs::msg::RouteState & msg)
  : msg_(msg)
  {}
  Init_RouteState_state route_id(::carma_planning_msgs::msg::RouteState::_route_id_type arg)
  {
    msg_.route_id = std::move(arg);
    return Init_RouteState_state(msg_);
  }

private:
  ::carma_planning_msgs::msg::RouteState msg_;
};

class Init_RouteState_header
{
public:
  Init_RouteState_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RouteState_route_id header(::carma_planning_msgs::msg::RouteState::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_RouteState_route_id(msg_);
  }

private:
  ::carma_planning_msgs::msg::RouteState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::carma_planning_msgs::msg::RouteState>()
{
  return carma_planning_msgs::msg::builder::Init_RouteState_header();
}

}  // namespace carma_planning_msgs

#endif  // CARMA_PLANNING_MSGS__MSG__DETAIL__ROUTE_STATE__BUILDER_HPP_
