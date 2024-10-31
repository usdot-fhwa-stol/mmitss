// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from carma_v2x_msgs:msg/AmbientAirTemperature.idl
// generated code does not contain a copyright notice

#ifndef CARMA_V2X_MSGS__MSG__DETAIL__AMBIENT_AIR_TEMPERATURE__BUILDER_HPP_
#define CARMA_V2X_MSGS__MSG__DETAIL__AMBIENT_AIR_TEMPERATURE__BUILDER_HPP_

#include "carma_v2x_msgs/msg/detail/ambient_air_temperature__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace carma_v2x_msgs
{

namespace msg
{

namespace builder
{

class Init_AmbientAirTemperature_unavailable
{
public:
  explicit Init_AmbientAirTemperature_unavailable(::carma_v2x_msgs::msg::AmbientAirTemperature & msg)
  : msg_(msg)
  {}
  ::carma_v2x_msgs::msg::AmbientAirTemperature unavailable(::carma_v2x_msgs::msg::AmbientAirTemperature::_unavailable_type arg)
  {
    msg_.unavailable = std::move(arg);
    return std::move(msg_);
  }

private:
  ::carma_v2x_msgs::msg::AmbientAirTemperature msg_;
};

class Init_AmbientAirTemperature_temperature
{
public:
  Init_AmbientAirTemperature_temperature()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AmbientAirTemperature_unavailable temperature(::carma_v2x_msgs::msg::AmbientAirTemperature::_temperature_type arg)
  {
    msg_.temperature = std::move(arg);
    return Init_AmbientAirTemperature_unavailable(msg_);
  }

private:
  ::carma_v2x_msgs::msg::AmbientAirTemperature msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::carma_v2x_msgs::msg::AmbientAirTemperature>()
{
  return carma_v2x_msgs::msg::builder::Init_AmbientAirTemperature_temperature();
}

}  // namespace carma_v2x_msgs

#endif  // CARMA_V2X_MSGS__MSG__DETAIL__AMBIENT_AIR_TEMPERATURE__BUILDER_HPP_
