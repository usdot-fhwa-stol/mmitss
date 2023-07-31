// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from carma_v2x_msgs:msg/AmbientAirPressure.idl
// generated code does not contain a copyright notice

#ifndef CARMA_V2X_MSGS__MSG__DETAIL__AMBIENT_AIR_PRESSURE__BUILDER_HPP_
#define CARMA_V2X_MSGS__MSG__DETAIL__AMBIENT_AIR_PRESSURE__BUILDER_HPP_

#include "carma_v2x_msgs/msg/detail/ambient_air_pressure__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace carma_v2x_msgs
{

namespace msg
{

namespace builder
{

class Init_AmbientAirPressure_unavailable
{
public:
  explicit Init_AmbientAirPressure_unavailable(::carma_v2x_msgs::msg::AmbientAirPressure & msg)
  : msg_(msg)
  {}
  ::carma_v2x_msgs::msg::AmbientAirPressure unavailable(::carma_v2x_msgs::msg::AmbientAirPressure::_unavailable_type arg)
  {
    msg_.unavailable = std::move(arg);
    return std::move(msg_);
  }

private:
  ::carma_v2x_msgs::msg::AmbientAirPressure msg_;
};

class Init_AmbientAirPressure_pressure
{
public:
  Init_AmbientAirPressure_pressure()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AmbientAirPressure_unavailable pressure(::carma_v2x_msgs::msg::AmbientAirPressure::_pressure_type arg)
  {
    msg_.pressure = std::move(arg);
    return Init_AmbientAirPressure_unavailable(msg_);
  }

private:
  ::carma_v2x_msgs::msg::AmbientAirPressure msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::carma_v2x_msgs::msg::AmbientAirPressure>()
{
  return carma_v2x_msgs::msg::builder::Init_AmbientAirPressure_pressure();
}

}  // namespace carma_v2x_msgs

#endif  // CARMA_V2X_MSGS__MSG__DETAIL__AMBIENT_AIR_PRESSURE__BUILDER_HPP_
