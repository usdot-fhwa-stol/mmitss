// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from carma_planning_msgs:srv/AbortActiveRoute.idl
// generated code does not contain a copyright notice

#ifndef CARMA_PLANNING_MSGS__SRV__DETAIL__ABORT_ACTIVE_ROUTE__BUILDER_HPP_
#define CARMA_PLANNING_MSGS__SRV__DETAIL__ABORT_ACTIVE_ROUTE__BUILDER_HPP_

#include "carma_planning_msgs/srv/detail/abort_active_route__struct.hpp"
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
auto build<::carma_planning_msgs::srv::AbortActiveRoute_Request>()
{
  return ::carma_planning_msgs::srv::AbortActiveRoute_Request(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace carma_planning_msgs


namespace carma_planning_msgs
{

namespace srv
{

namespace builder
{

class Init_AbortActiveRoute_Response_error_status
{
public:
  Init_AbortActiveRoute_Response_error_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::carma_planning_msgs::srv::AbortActiveRoute_Response error_status(::carma_planning_msgs::srv::AbortActiveRoute_Response::_error_status_type arg)
  {
    msg_.error_status = std::move(arg);
    return std::move(msg_);
  }

private:
  ::carma_planning_msgs::srv::AbortActiveRoute_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::carma_planning_msgs::srv::AbortActiveRoute_Response>()
{
  return carma_planning_msgs::srv::builder::Init_AbortActiveRoute_Response_error_status();
}

}  // namespace carma_planning_msgs

#endif  // CARMA_PLANNING_MSGS__SRV__DETAIL__ABORT_ACTIVE_ROUTE__BUILDER_HPP_
