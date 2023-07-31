// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from carma_v2x_msgs:msg/Elevation.idl
// generated code does not contain a copyright notice

#ifndef CARMA_V2X_MSGS__MSG__DETAIL__ELEVATION__BUILDER_HPP_
#define CARMA_V2X_MSGS__MSG__DETAIL__ELEVATION__BUILDER_HPP_

#include "carma_v2x_msgs/msg/detail/elevation__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace carma_v2x_msgs
{

namespace msg
{

namespace builder
{

class Init_Elevation_unavailable
{
public:
  explicit Init_Elevation_unavailable(::carma_v2x_msgs::msg::Elevation & msg)
  : msg_(msg)
  {}
  ::carma_v2x_msgs::msg::Elevation unavailable(::carma_v2x_msgs::msg::Elevation::_unavailable_type arg)
  {
    msg_.unavailable = std::move(arg);
    return std::move(msg_);
  }

private:
  ::carma_v2x_msgs::msg::Elevation msg_;
};

class Init_Elevation_elevation
{
public:
  Init_Elevation_elevation()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Elevation_unavailable elevation(::carma_v2x_msgs::msg::Elevation::_elevation_type arg)
  {
    msg_.elevation = std::move(arg);
    return Init_Elevation_unavailable(msg_);
  }

private:
  ::carma_v2x_msgs::msg::Elevation msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::carma_v2x_msgs::msg::Elevation>()
{
  return carma_v2x_msgs::msg::builder::Init_Elevation_elevation();
}

}  // namespace carma_v2x_msgs

#endif  // CARMA_V2X_MSGS__MSG__DETAIL__ELEVATION__BUILDER_HPP_
