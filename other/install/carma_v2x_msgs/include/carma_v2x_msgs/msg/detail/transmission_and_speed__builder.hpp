// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from carma_v2x_msgs:msg/TransmissionAndSpeed.idl
// generated code does not contain a copyright notice

#ifndef CARMA_V2X_MSGS__MSG__DETAIL__TRANSMISSION_AND_SPEED__BUILDER_HPP_
#define CARMA_V2X_MSGS__MSG__DETAIL__TRANSMISSION_AND_SPEED__BUILDER_HPP_

#include "carma_v2x_msgs/msg/detail/transmission_and_speed__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace carma_v2x_msgs
{

namespace msg
{

namespace builder
{

class Init_TransmissionAndSpeed_speed
{
public:
  explicit Init_TransmissionAndSpeed_speed(::carma_v2x_msgs::msg::TransmissionAndSpeed & msg)
  : msg_(msg)
  {}
  ::carma_v2x_msgs::msg::TransmissionAndSpeed speed(::carma_v2x_msgs::msg::TransmissionAndSpeed::_speed_type arg)
  {
    msg_.speed = std::move(arg);
    return std::move(msg_);
  }

private:
  ::carma_v2x_msgs::msg::TransmissionAndSpeed msg_;
};

class Init_TransmissionAndSpeed_transmission
{
public:
  Init_TransmissionAndSpeed_transmission()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TransmissionAndSpeed_speed transmission(::carma_v2x_msgs::msg::TransmissionAndSpeed::_transmission_type arg)
  {
    msg_.transmission = std::move(arg);
    return Init_TransmissionAndSpeed_speed(msg_);
  }

private:
  ::carma_v2x_msgs::msg::TransmissionAndSpeed msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::carma_v2x_msgs::msg::TransmissionAndSpeed>()
{
  return carma_v2x_msgs::msg::builder::Init_TransmissionAndSpeed_transmission();
}

}  // namespace carma_v2x_msgs

#endif  // CARMA_V2X_MSGS__MSG__DETAIL__TRANSMISSION_AND_SPEED__BUILDER_HPP_
