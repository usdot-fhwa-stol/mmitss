// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from carma_msgs:srv/SetTrafficEvent.idl
// generated code does not contain a copyright notice

#ifndef CARMA_MSGS__SRV__DETAIL__SET_TRAFFIC_EVENT__BUILDER_HPP_
#define CARMA_MSGS__SRV__DETAIL__SET_TRAFFIC_EVENT__BUILDER_HPP_

#include "carma_msgs/srv/detail/set_traffic_event__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace carma_msgs
{

namespace srv
{

namespace builder
{

class Init_SetTrafficEvent_Request_advisory_speed
{
public:
  explicit Init_SetTrafficEvent_Request_advisory_speed(::carma_msgs::srv::SetTrafficEvent_Request & msg)
  : msg_(msg)
  {}
  ::carma_msgs::srv::SetTrafficEvent_Request advisory_speed(::carma_msgs::srv::SetTrafficEvent_Request::_advisory_speed_type arg)
  {
    msg_.advisory_speed = std::move(arg);
    return std::move(msg_);
  }

private:
  ::carma_msgs::srv::SetTrafficEvent_Request msg_;
};

class Init_SetTrafficEvent_Request_minimum_gap
{
public:
  explicit Init_SetTrafficEvent_Request_minimum_gap(::carma_msgs::srv::SetTrafficEvent_Request & msg)
  : msg_(msg)
  {}
  Init_SetTrafficEvent_Request_advisory_speed minimum_gap(::carma_msgs::srv::SetTrafficEvent_Request::_minimum_gap_type arg)
  {
    msg_.minimum_gap = std::move(arg);
    return Init_SetTrafficEvent_Request_advisory_speed(msg_);
  }

private:
  ::carma_msgs::srv::SetTrafficEvent_Request msg_;
};

class Init_SetTrafficEvent_Request_down_track
{
public:
  explicit Init_SetTrafficEvent_Request_down_track(::carma_msgs::srv::SetTrafficEvent_Request & msg)
  : msg_(msg)
  {}
  Init_SetTrafficEvent_Request_minimum_gap down_track(::carma_msgs::srv::SetTrafficEvent_Request::_down_track_type arg)
  {
    msg_.down_track = std::move(arg);
    return Init_SetTrafficEvent_Request_minimum_gap(msg_);
  }

private:
  ::carma_msgs::srv::SetTrafficEvent_Request msg_;
};

class Init_SetTrafficEvent_Request_up_track
{
public:
  Init_SetTrafficEvent_Request_up_track()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetTrafficEvent_Request_down_track up_track(::carma_msgs::srv::SetTrafficEvent_Request::_up_track_type arg)
  {
    msg_.up_track = std::move(arg);
    return Init_SetTrafficEvent_Request_down_track(msg_);
  }

private:
  ::carma_msgs::srv::SetTrafficEvent_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::carma_msgs::srv::SetTrafficEvent_Request>()
{
  return carma_msgs::srv::builder::Init_SetTrafficEvent_Request_up_track();
}

}  // namespace carma_msgs


namespace carma_msgs
{

namespace srv
{

namespace builder
{

class Init_SetTrafficEvent_Response_success
{
public:
  Init_SetTrafficEvent_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::carma_msgs::srv::SetTrafficEvent_Response success(::carma_msgs::srv::SetTrafficEvent_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::carma_msgs::srv::SetTrafficEvent_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::carma_msgs::srv::SetTrafficEvent_Response>()
{
  return carma_msgs::srv::builder::Init_SetTrafficEvent_Response_success();
}

}  // namespace carma_msgs

#endif  // CARMA_MSGS__SRV__DETAIL__SET_TRAFFIC_EVENT__BUILDER_HPP_
