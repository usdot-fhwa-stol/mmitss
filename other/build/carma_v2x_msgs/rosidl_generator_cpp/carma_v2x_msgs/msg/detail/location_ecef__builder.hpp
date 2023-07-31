// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from carma_v2x_msgs:msg/LocationECEF.idl
// generated code does not contain a copyright notice

#ifndef CARMA_V2X_MSGS__MSG__DETAIL__LOCATION_ECEF__BUILDER_HPP_
#define CARMA_V2X_MSGS__MSG__DETAIL__LOCATION_ECEF__BUILDER_HPP_

#include "carma_v2x_msgs/msg/detail/location_ecef__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace carma_v2x_msgs
{

namespace msg
{

namespace builder
{

class Init_LocationECEF_timestamp
{
public:
  explicit Init_LocationECEF_timestamp(::carma_v2x_msgs::msg::LocationECEF & msg)
  : msg_(msg)
  {}
  ::carma_v2x_msgs::msg::LocationECEF timestamp(::carma_v2x_msgs::msg::LocationECEF::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::carma_v2x_msgs::msg::LocationECEF msg_;
};

class Init_LocationECEF_ecef_z
{
public:
  explicit Init_LocationECEF_ecef_z(::carma_v2x_msgs::msg::LocationECEF & msg)
  : msg_(msg)
  {}
  Init_LocationECEF_timestamp ecef_z(::carma_v2x_msgs::msg::LocationECEF::_ecef_z_type arg)
  {
    msg_.ecef_z = std::move(arg);
    return Init_LocationECEF_timestamp(msg_);
  }

private:
  ::carma_v2x_msgs::msg::LocationECEF msg_;
};

class Init_LocationECEF_ecef_y
{
public:
  explicit Init_LocationECEF_ecef_y(::carma_v2x_msgs::msg::LocationECEF & msg)
  : msg_(msg)
  {}
  Init_LocationECEF_ecef_z ecef_y(::carma_v2x_msgs::msg::LocationECEF::_ecef_y_type arg)
  {
    msg_.ecef_y = std::move(arg);
    return Init_LocationECEF_ecef_z(msg_);
  }

private:
  ::carma_v2x_msgs::msg::LocationECEF msg_;
};

class Init_LocationECEF_ecef_x
{
public:
  Init_LocationECEF_ecef_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LocationECEF_ecef_y ecef_x(::carma_v2x_msgs::msg::LocationECEF::_ecef_x_type arg)
  {
    msg_.ecef_x = std::move(arg);
    return Init_LocationECEF_ecef_y(msg_);
  }

private:
  ::carma_v2x_msgs::msg::LocationECEF msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::carma_v2x_msgs::msg::LocationECEF>()
{
  return carma_v2x_msgs::msg::builder::Init_LocationECEF_ecef_x();
}

}  // namespace carma_v2x_msgs

#endif  // CARMA_V2X_MSGS__MSG__DETAIL__LOCATION_ECEF__BUILDER_HPP_
