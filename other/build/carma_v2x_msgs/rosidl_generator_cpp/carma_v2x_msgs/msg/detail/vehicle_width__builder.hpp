// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from carma_v2x_msgs:msg/VehicleWidth.idl
// generated code does not contain a copyright notice

#ifndef CARMA_V2X_MSGS__MSG__DETAIL__VEHICLE_WIDTH__BUILDER_HPP_
#define CARMA_V2X_MSGS__MSG__DETAIL__VEHICLE_WIDTH__BUILDER_HPP_

#include "carma_v2x_msgs/msg/detail/vehicle_width__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace carma_v2x_msgs
{

namespace msg
{

namespace builder
{

class Init_VehicleWidth_unavailable
{
public:
  explicit Init_VehicleWidth_unavailable(::carma_v2x_msgs::msg::VehicleWidth & msg)
  : msg_(msg)
  {}
  ::carma_v2x_msgs::msg::VehicleWidth unavailable(::carma_v2x_msgs::msg::VehicleWidth::_unavailable_type arg)
  {
    msg_.unavailable = std::move(arg);
    return std::move(msg_);
  }

private:
  ::carma_v2x_msgs::msg::VehicleWidth msg_;
};

class Init_VehicleWidth_vehicle_width
{
public:
  Init_VehicleWidth_vehicle_width()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_VehicleWidth_unavailable vehicle_width(::carma_v2x_msgs::msg::VehicleWidth::_vehicle_width_type arg)
  {
    msg_.vehicle_width = std::move(arg);
    return Init_VehicleWidth_unavailable(msg_);
  }

private:
  ::carma_v2x_msgs::msg::VehicleWidth msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::carma_v2x_msgs::msg::VehicleWidth>()
{
  return carma_v2x_msgs::msg::builder::Init_VehicleWidth_vehicle_width();
}

}  // namespace carma_v2x_msgs

#endif  // CARMA_V2X_MSGS__MSG__DETAIL__VEHICLE_WIDTH__BUILDER_HPP_
