// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from carma_planning_msgs:srv/SetGuidanceActive.idl
// generated code does not contain a copyright notice

#ifndef CARMA_PLANNING_MSGS__SRV__DETAIL__SET_GUIDANCE_ACTIVE__BUILDER_HPP_
#define CARMA_PLANNING_MSGS__SRV__DETAIL__SET_GUIDANCE_ACTIVE__BUILDER_HPP_

#include "carma_planning_msgs/srv/detail/set_guidance_active__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace carma_planning_msgs
{

namespace srv
{

namespace builder
{

class Init_SetGuidanceActive_Request_guidance_active
{
public:
  Init_SetGuidanceActive_Request_guidance_active()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::carma_planning_msgs::srv::SetGuidanceActive_Request guidance_active(::carma_planning_msgs::srv::SetGuidanceActive_Request::_guidance_active_type arg)
  {
    msg_.guidance_active = std::move(arg);
    return std::move(msg_);
  }

private:
  ::carma_planning_msgs::srv::SetGuidanceActive_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::carma_planning_msgs::srv::SetGuidanceActive_Request>()
{
  return carma_planning_msgs::srv::builder::Init_SetGuidanceActive_Request_guidance_active();
}

}  // namespace carma_planning_msgs


namespace carma_planning_msgs
{

namespace srv
{

namespace builder
{

class Init_SetGuidanceActive_Response_guidance_status
{
public:
  Init_SetGuidanceActive_Response_guidance_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::carma_planning_msgs::srv::SetGuidanceActive_Response guidance_status(::carma_planning_msgs::srv::SetGuidanceActive_Response::_guidance_status_type arg)
  {
    msg_.guidance_status = std::move(arg);
    return std::move(msg_);
  }

private:
  ::carma_planning_msgs::srv::SetGuidanceActive_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::carma_planning_msgs::srv::SetGuidanceActive_Response>()
{
  return carma_planning_msgs::srv::builder::Init_SetGuidanceActive_Response_guidance_status();
}

}  // namespace carma_planning_msgs

#endif  // CARMA_PLANNING_MSGS__SRV__DETAIL__SET_GUIDANCE_ACTIVE__BUILDER_HPP_
