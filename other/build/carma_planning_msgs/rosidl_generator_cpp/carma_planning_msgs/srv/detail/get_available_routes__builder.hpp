// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from carma_planning_msgs:srv/GetAvailableRoutes.idl
// generated code does not contain a copyright notice

#ifndef CARMA_PLANNING_MSGS__SRV__DETAIL__GET_AVAILABLE_ROUTES__BUILDER_HPP_
#define CARMA_PLANNING_MSGS__SRV__DETAIL__GET_AVAILABLE_ROUTES__BUILDER_HPP_

#include "carma_planning_msgs/srv/detail/get_available_routes__struct.hpp"
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
auto build<::carma_planning_msgs::srv::GetAvailableRoutes_Request>()
{
  return ::carma_planning_msgs::srv::GetAvailableRoutes_Request(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace carma_planning_msgs


namespace carma_planning_msgs
{

namespace srv
{

namespace builder
{

class Init_GetAvailableRoutes_Response_available_routes
{
public:
  Init_GetAvailableRoutes_Response_available_routes()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::carma_planning_msgs::srv::GetAvailableRoutes_Response available_routes(::carma_planning_msgs::srv::GetAvailableRoutes_Response::_available_routes_type arg)
  {
    msg_.available_routes = std::move(arg);
    return std::move(msg_);
  }

private:
  ::carma_planning_msgs::srv::GetAvailableRoutes_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::carma_planning_msgs::srv::GetAvailableRoutes_Response>()
{
  return carma_planning_msgs::srv::builder::Init_GetAvailableRoutes_Response_available_routes();
}

}  // namespace carma_planning_msgs

#endif  // CARMA_PLANNING_MSGS__SRV__DETAIL__GET_AVAILABLE_ROUTES__BUILDER_HPP_
