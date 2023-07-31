// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from carma_v2x_msgs:msg/Longitude.idl
// generated code does not contain a copyright notice

#ifndef CARMA_V2X_MSGS__MSG__DETAIL__LONGITUDE__BUILDER_HPP_
#define CARMA_V2X_MSGS__MSG__DETAIL__LONGITUDE__BUILDER_HPP_

#include "carma_v2x_msgs/msg/detail/longitude__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace carma_v2x_msgs
{

namespace msg
{

namespace builder
{

class Init_Longitude_unavailable
{
public:
  explicit Init_Longitude_unavailable(::carma_v2x_msgs::msg::Longitude & msg)
  : msg_(msg)
  {}
  ::carma_v2x_msgs::msg::Longitude unavailable(::carma_v2x_msgs::msg::Longitude::_unavailable_type arg)
  {
    msg_.unavailable = std::move(arg);
    return std::move(msg_);
  }

private:
  ::carma_v2x_msgs::msg::Longitude msg_;
};

class Init_Longitude_longitude
{
public:
  Init_Longitude_longitude()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Longitude_unavailable longitude(::carma_v2x_msgs::msg::Longitude::_longitude_type arg)
  {
    msg_.longitude = std::move(arg);
    return Init_Longitude_unavailable(msg_);
  }

private:
  ::carma_v2x_msgs::msg::Longitude msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::carma_v2x_msgs::msg::Longitude>()
{
  return carma_v2x_msgs::msg::builder::Init_Longitude_longitude();
}

}  // namespace carma_v2x_msgs

#endif  // CARMA_V2X_MSGS__MSG__DETAIL__LONGITUDE__BUILDER_HPP_
