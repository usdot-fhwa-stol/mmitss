// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from carma_v2x_msgs:msg/Latitude.idl
// generated code does not contain a copyright notice

#ifndef CARMA_V2X_MSGS__MSG__DETAIL__LATITUDE__BUILDER_HPP_
#define CARMA_V2X_MSGS__MSG__DETAIL__LATITUDE__BUILDER_HPP_

#include "carma_v2x_msgs/msg/detail/latitude__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace carma_v2x_msgs
{

namespace msg
{

namespace builder
{

class Init_Latitude_unavailable
{
public:
  explicit Init_Latitude_unavailable(::carma_v2x_msgs::msg::Latitude & msg)
  : msg_(msg)
  {}
  ::carma_v2x_msgs::msg::Latitude unavailable(::carma_v2x_msgs::msg::Latitude::_unavailable_type arg)
  {
    msg_.unavailable = std::move(arg);
    return std::move(msg_);
  }

private:
  ::carma_v2x_msgs::msg::Latitude msg_;
};

class Init_Latitude_latitude
{
public:
  Init_Latitude_latitude()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Latitude_unavailable latitude(::carma_v2x_msgs::msg::Latitude::_latitude_type arg)
  {
    msg_.latitude = std::move(arg);
    return Init_Latitude_unavailable(msg_);
  }

private:
  ::carma_v2x_msgs::msg::Latitude msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::carma_v2x_msgs::msg::Latitude>()
{
  return carma_v2x_msgs::msg::builder::Init_Latitude_latitude();
}

}  // namespace carma_v2x_msgs

#endif  // CARMA_V2X_MSGS__MSG__DETAIL__LATITUDE__BUILDER_HPP_
