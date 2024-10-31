// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from carma_planning_msgs:msg/RouteEvent.idl
// generated code does not contain a copyright notice

#ifndef CARMA_PLANNING_MSGS__MSG__DETAIL__ROUTE_EVENT__BUILDER_HPP_
#define CARMA_PLANNING_MSGS__MSG__DETAIL__ROUTE_EVENT__BUILDER_HPP_

#include "carma_planning_msgs/msg/detail/route_event__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace carma_planning_msgs
{

namespace msg
{

namespace builder
{

class Init_RouteEvent_event
{
public:
  explicit Init_RouteEvent_event(::carma_planning_msgs::msg::RouteEvent & msg)
  : msg_(msg)
  {}
  ::carma_planning_msgs::msg::RouteEvent event(::carma_planning_msgs::msg::RouteEvent::_event_type arg)
  {
    msg_.event = std::move(arg);
    return std::move(msg_);
  }

private:
  ::carma_planning_msgs::msg::RouteEvent msg_;
};

class Init_RouteEvent_header
{
public:
  Init_RouteEvent_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RouteEvent_event header(::carma_planning_msgs::msg::RouteEvent::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_RouteEvent_event(msg_);
  }

private:
  ::carma_planning_msgs::msg::RouteEvent msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::carma_planning_msgs::msg::RouteEvent>()
{
  return carma_planning_msgs::msg::builder::Init_RouteEvent_header();
}

}  // namespace carma_planning_msgs

#endif  // CARMA_PLANNING_MSGS__MSG__DETAIL__ROUTE_EVENT__BUILDER_HPP_
