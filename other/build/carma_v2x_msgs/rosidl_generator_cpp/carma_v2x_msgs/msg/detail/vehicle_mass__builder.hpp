// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from carma_v2x_msgs:msg/VehicleMass.idl
// generated code does not contain a copyright notice

#ifndef CARMA_V2X_MSGS__MSG__DETAIL__VEHICLE_MASS__BUILDER_HPP_
#define CARMA_V2X_MSGS__MSG__DETAIL__VEHICLE_MASS__BUILDER_HPP_

#include "carma_v2x_msgs/msg/detail/vehicle_mass__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace carma_v2x_msgs
{

namespace msg
{

namespace builder
{

class Init_VehicleMass_unavailable
{
public:
  explicit Init_VehicleMass_unavailable(::carma_v2x_msgs::msg::VehicleMass & msg)
  : msg_(msg)
  {}
  ::carma_v2x_msgs::msg::VehicleMass unavailable(::carma_v2x_msgs::msg::VehicleMass::_unavailable_type arg)
  {
    msg_.unavailable = std::move(arg);
    return std::move(msg_);
  }

private:
  ::carma_v2x_msgs::msg::VehicleMass msg_;
};

class Init_VehicleMass_vehicle_mass
{
public:
  Init_VehicleMass_vehicle_mass()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_VehicleMass_unavailable vehicle_mass(::carma_v2x_msgs::msg::VehicleMass::_vehicle_mass_type arg)
  {
    msg_.vehicle_mass = std::move(arg);
    return Init_VehicleMass_unavailable(msg_);
  }

private:
  ::carma_v2x_msgs::msg::VehicleMass msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::carma_v2x_msgs::msg::VehicleMass>()
{
  return carma_v2x_msgs::msg::builder::Init_VehicleMass_vehicle_mass();
}

}  // namespace carma_v2x_msgs

#endif  // CARMA_V2X_MSGS__MSG__DETAIL__VEHICLE_MASS__BUILDER_HPP_
