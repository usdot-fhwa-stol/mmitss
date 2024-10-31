// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from carma_driver_msgs:srv/GetDriversWithCapabilities.idl
// generated code does not contain a copyright notice

#ifndef CARMA_DRIVER_MSGS__SRV__DETAIL__GET_DRIVERS_WITH_CAPABILITIES__BUILDER_HPP_
#define CARMA_DRIVER_MSGS__SRV__DETAIL__GET_DRIVERS_WITH_CAPABILITIES__BUILDER_HPP_

#include "carma_driver_msgs/srv/detail/get_drivers_with_capabilities__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace carma_driver_msgs
{

namespace srv
{

namespace builder
{

class Init_GetDriversWithCapabilities_Request_capabilities
{
public:
  Init_GetDriversWithCapabilities_Request_capabilities()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::carma_driver_msgs::srv::GetDriversWithCapabilities_Request capabilities(::carma_driver_msgs::srv::GetDriversWithCapabilities_Request::_capabilities_type arg)
  {
    msg_.capabilities = std::move(arg);
    return std::move(msg_);
  }

private:
  ::carma_driver_msgs::srv::GetDriversWithCapabilities_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::carma_driver_msgs::srv::GetDriversWithCapabilities_Request>()
{
  return carma_driver_msgs::srv::builder::Init_GetDriversWithCapabilities_Request_capabilities();
}

}  // namespace carma_driver_msgs


namespace carma_driver_msgs
{

namespace srv
{

namespace builder
{

class Init_GetDriversWithCapabilities_Response_driver_data
{
public:
  Init_GetDriversWithCapabilities_Response_driver_data()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::carma_driver_msgs::srv::GetDriversWithCapabilities_Response driver_data(::carma_driver_msgs::srv::GetDriversWithCapabilities_Response::_driver_data_type arg)
  {
    msg_.driver_data = std::move(arg);
    return std::move(msg_);
  }

private:
  ::carma_driver_msgs::srv::GetDriversWithCapabilities_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::carma_driver_msgs::srv::GetDriversWithCapabilities_Response>()
{
  return carma_driver_msgs::srv::builder::Init_GetDriversWithCapabilities_Response_driver_data();
}

}  // namespace carma_driver_msgs

#endif  // CARMA_DRIVER_MSGS__SRV__DETAIL__GET_DRIVERS_WITH_CAPABILITIES__BUILDER_HPP_
