// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from carma_driver_msgs:srv/SetEnableRobotic.idl
// generated code does not contain a copyright notice

#ifndef CARMA_DRIVER_MSGS__SRV__DETAIL__SET_ENABLE_ROBOTIC__BUILDER_HPP_
#define CARMA_DRIVER_MSGS__SRV__DETAIL__SET_ENABLE_ROBOTIC__BUILDER_HPP_

#include "carma_driver_msgs/srv/detail/set_enable_robotic__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace carma_driver_msgs
{

namespace srv
{

namespace builder
{

class Init_SetEnableRobotic_Request_set
{
public:
  Init_SetEnableRobotic_Request_set()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::carma_driver_msgs::srv::SetEnableRobotic_Request set(::carma_driver_msgs::srv::SetEnableRobotic_Request::_set_type arg)
  {
    msg_.set = std::move(arg);
    return std::move(msg_);
  }

private:
  ::carma_driver_msgs::srv::SetEnableRobotic_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::carma_driver_msgs::srv::SetEnableRobotic_Request>()
{
  return carma_driver_msgs::srv::builder::Init_SetEnableRobotic_Request_set();
}

}  // namespace carma_driver_msgs


namespace carma_driver_msgs
{

namespace srv
{


}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::carma_driver_msgs::srv::SetEnableRobotic_Response>()
{
  return ::carma_driver_msgs::srv::SetEnableRobotic_Response(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace carma_driver_msgs

#endif  // CARMA_DRIVER_MSGS__SRV__DETAIL__SET_ENABLE_ROBOTIC__BUILDER_HPP_
