// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from carma_v2x_msgs:msg/EmergencyVehicleAck.idl
// generated code does not contain a copyright notice

#ifndef CARMA_V2X_MSGS__MSG__DETAIL__EMERGENCY_VEHICLE_ACK__BUILDER_HPP_
#define CARMA_V2X_MSGS__MSG__DETAIL__EMERGENCY_VEHICLE_ACK__BUILDER_HPP_

#include "carma_v2x_msgs/msg/detail/emergency_vehicle_ack__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace carma_v2x_msgs
{

namespace msg
{

namespace builder
{

class Init_EmergencyVehicleAck_acknowledgement
{
public:
  explicit Init_EmergencyVehicleAck_acknowledgement(::carma_v2x_msgs::msg::EmergencyVehicleAck & msg)
  : msg_(msg)
  {}
  ::carma_v2x_msgs::msg::EmergencyVehicleAck acknowledgement(::carma_v2x_msgs::msg::EmergencyVehicleAck::_acknowledgement_type arg)
  {
    msg_.acknowledgement = std::move(arg);
    return std::move(msg_);
  }

private:
  ::carma_v2x_msgs::msg::EmergencyVehicleAck msg_;
};

class Init_EmergencyVehicleAck_m_header
{
public:
  Init_EmergencyVehicleAck_m_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_EmergencyVehicleAck_acknowledgement m_header(::carma_v2x_msgs::msg::EmergencyVehicleAck::_m_header_type arg)
  {
    msg_.m_header = std::move(arg);
    return Init_EmergencyVehicleAck_acknowledgement(msg_);
  }

private:
  ::carma_v2x_msgs::msg::EmergencyVehicleAck msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::carma_v2x_msgs::msg::EmergencyVehicleAck>()
{
  return carma_v2x_msgs::msg::builder::Init_EmergencyVehicleAck_m_header();
}

}  // namespace carma_v2x_msgs

#endif  // CARMA_V2X_MSGS__MSG__DETAIL__EMERGENCY_VEHICLE_ACK__BUILDER_HPP_
