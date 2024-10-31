// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from carma_msgs:srv/ReleaseIndicatorControl.idl
// generated code does not contain a copyright notice

#ifndef CARMA_MSGS__SRV__DETAIL__RELEASE_INDICATOR_CONTROL__BUILDER_HPP_
#define CARMA_MSGS__SRV__DETAIL__RELEASE_INDICATOR_CONTROL__BUILDER_HPP_

#include "carma_msgs/srv/detail/release_indicator_control__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace carma_msgs
{

namespace srv
{

namespace builder
{

class Init_ReleaseIndicatorControl_Request_requester_name
{
public:
  explicit Init_ReleaseIndicatorControl_Request_requester_name(::carma_msgs::srv::ReleaseIndicatorControl_Request & msg)
  : msg_(msg)
  {}
  ::carma_msgs::srv::ReleaseIndicatorControl_Request requester_name(::carma_msgs::srv::ReleaseIndicatorControl_Request::_requester_name_type arg)
  {
    msg_.requester_name = std::move(arg);
    return std::move(msg_);
  }

private:
  ::carma_msgs::srv::ReleaseIndicatorControl_Request msg_;
};

class Init_ReleaseIndicatorControl_Request_cda_list
{
public:
  explicit Init_ReleaseIndicatorControl_Request_cda_list(::carma_msgs::srv::ReleaseIndicatorControl_Request & msg)
  : msg_(msg)
  {}
  Init_ReleaseIndicatorControl_Request_requester_name cda_list(::carma_msgs::srv::ReleaseIndicatorControl_Request::_cda_list_type arg)
  {
    msg_.cda_list = std::move(arg);
    return Init_ReleaseIndicatorControl_Request_requester_name(msg_);
  }

private:
  ::carma_msgs::srv::ReleaseIndicatorControl_Request msg_;
};

class Init_ReleaseIndicatorControl_Request_ind_list
{
public:
  Init_ReleaseIndicatorControl_Request_ind_list()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ReleaseIndicatorControl_Request_cda_list ind_list(::carma_msgs::srv::ReleaseIndicatorControl_Request::_ind_list_type arg)
  {
    msg_.ind_list = std::move(arg);
    return Init_ReleaseIndicatorControl_Request_cda_list(msg_);
  }

private:
  ::carma_msgs::srv::ReleaseIndicatorControl_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::carma_msgs::srv::ReleaseIndicatorControl_Request>()
{
  return carma_msgs::srv::builder::Init_ReleaseIndicatorControl_Request_ind_list();
}

}  // namespace carma_msgs


namespace carma_msgs
{

namespace srv
{


}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::carma_msgs::srv::ReleaseIndicatorControl_Response>()
{
  return ::carma_msgs::srv::ReleaseIndicatorControl_Response(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace carma_msgs

#endif  // CARMA_MSGS__SRV__DETAIL__RELEASE_INDICATOR_CONTROL__BUILDER_HPP_
