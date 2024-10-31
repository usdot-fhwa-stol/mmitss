// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from carma_v2x_msgs:msg/RTCMPackage.idl
// generated code does not contain a copyright notice

#ifndef CARMA_V2X_MSGS__MSG__DETAIL__RTCM_PACKAGE__BUILDER_HPP_
#define CARMA_V2X_MSGS__MSG__DETAIL__RTCM_PACKAGE__BUILDER_HPP_

#include "carma_v2x_msgs/msg/detail/rtcm_package__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace carma_v2x_msgs
{

namespace msg
{

namespace builder
{

class Init_RTCMPackage_messages
{
public:
  explicit Init_RTCMPackage_messages(::carma_v2x_msgs::msg::RTCMPackage & msg)
  : msg_(msg)
  {}
  ::carma_v2x_msgs::msg::RTCMPackage messages(::carma_v2x_msgs::msg::RTCMPackage::_messages_type arg)
  {
    msg_.messages = std::move(arg);
    return std::move(msg_);
  }

private:
  ::carma_v2x_msgs::msg::RTCMPackage msg_;
};

class Init_RTCMPackage_rtcm_header
{
public:
  explicit Init_RTCMPackage_rtcm_header(::carma_v2x_msgs::msg::RTCMPackage & msg)
  : msg_(msg)
  {}
  Init_RTCMPackage_messages rtcm_header(::carma_v2x_msgs::msg::RTCMPackage::_rtcm_header_type arg)
  {
    msg_.rtcm_header = std::move(arg);
    return Init_RTCMPackage_messages(msg_);
  }

private:
  ::carma_v2x_msgs::msg::RTCMPackage msg_;
};

class Init_RTCMPackage_presence_vector
{
public:
  Init_RTCMPackage_presence_vector()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RTCMPackage_rtcm_header presence_vector(::carma_v2x_msgs::msg::RTCMPackage::_presence_vector_type arg)
  {
    msg_.presence_vector = std::move(arg);
    return Init_RTCMPackage_rtcm_header(msg_);
  }

private:
  ::carma_v2x_msgs::msg::RTCMPackage msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::carma_v2x_msgs::msg::RTCMPackage>()
{
  return carma_v2x_msgs::msg::builder::Init_RTCMPackage_presence_vector();
}

}  // namespace carma_v2x_msgs

#endif  // CARMA_V2X_MSGS__MSG__DETAIL__RTCM_PACKAGE__BUILDER_HPP_
