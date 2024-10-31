// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from carma_v2x_msgs:msg/VehicleLength.idl
// generated code does not contain a copyright notice

#ifndef CARMA_V2X_MSGS__MSG__DETAIL__VEHICLE_LENGTH__BUILDER_HPP_
#define CARMA_V2X_MSGS__MSG__DETAIL__VEHICLE_LENGTH__BUILDER_HPP_

#include "carma_v2x_msgs/msg/detail/vehicle_length__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace carma_v2x_msgs
{

namespace msg
{

namespace builder
{

class Init_VehicleLength_unavailable
{
public:
  explicit Init_VehicleLength_unavailable(::carma_v2x_msgs::msg::VehicleLength & msg)
  : msg_(msg)
  {}
  ::carma_v2x_msgs::msg::VehicleLength unavailable(::carma_v2x_msgs::msg::VehicleLength::_unavailable_type arg)
  {
    msg_.unavailable = std::move(arg);
    return std::move(msg_);
  }

private:
  ::carma_v2x_msgs::msg::VehicleLength msg_;
};

class Init_VehicleLength_vehicle_length
{
public:
  Init_VehicleLength_vehicle_length()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_VehicleLength_unavailable vehicle_length(::carma_v2x_msgs::msg::VehicleLength::_vehicle_length_type arg)
  {
    msg_.vehicle_length = std::move(arg);
    return Init_VehicleLength_unavailable(msg_);
  }

private:
  ::carma_v2x_msgs::msg::VehicleLength msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::carma_v2x_msgs::msg::VehicleLength>()
{
  return carma_v2x_msgs::msg::builder::Init_VehicleLength_vehicle_length();
}

}  // namespace carma_v2x_msgs

#endif  // CARMA_V2X_MSGS__MSG__DETAIL__VEHICLE_LENGTH__BUILDER_HPP_
