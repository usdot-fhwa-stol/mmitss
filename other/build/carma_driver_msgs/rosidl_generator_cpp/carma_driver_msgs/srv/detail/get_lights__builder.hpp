// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from carma_driver_msgs:srv/GetLights.idl
// generated code does not contain a copyright notice

#ifndef CARMA_DRIVER_MSGS__SRV__DETAIL__GET_LIGHTS__BUILDER_HPP_
#define CARMA_DRIVER_MSGS__SRV__DETAIL__GET_LIGHTS__BUILDER_HPP_

#include "carma_driver_msgs/srv/detail/get_lights__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace carma_driver_msgs
{

namespace srv
{


}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::carma_driver_msgs::srv::GetLights_Request>()
{
  return ::carma_driver_msgs::srv::GetLights_Request(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace carma_driver_msgs


namespace carma_driver_msgs
{

namespace srv
{

namespace builder
{

class Init_GetLights_Response_status
{
public:
  Init_GetLights_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::carma_driver_msgs::srv::GetLights_Response status(::carma_driver_msgs::srv::GetLights_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return std::move(msg_);
  }

private:
  ::carma_driver_msgs::srv::GetLights_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::carma_driver_msgs::srv::GetLights_Response>()
{
  return carma_driver_msgs::srv::builder::Init_GetLights_Response_status();
}

}  // namespace carma_driver_msgs

#endif  // CARMA_DRIVER_MSGS__SRV__DETAIL__GET_LIGHTS__BUILDER_HPP_
