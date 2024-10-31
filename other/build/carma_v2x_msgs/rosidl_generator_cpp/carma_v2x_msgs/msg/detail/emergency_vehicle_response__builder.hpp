// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from carma_v2x_msgs:msg/EmergencyVehicleResponse.idl
// generated code does not contain a copyright notice

#ifndef CARMA_V2X_MSGS__MSG__DETAIL__EMERGENCY_VEHICLE_RESPONSE__BUILDER_HPP_
#define CARMA_V2X_MSGS__MSG__DETAIL__EMERGENCY_VEHICLE_RESPONSE__BUILDER_HPP_

#include "carma_v2x_msgs/msg/detail/emergency_vehicle_response__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace carma_v2x_msgs
{

namespace msg
{

namespace builder
{

class Init_EmergencyVehicleResponse_reason_exists
{
public:
  explicit Init_EmergencyVehicleResponse_reason_exists(::carma_v2x_msgs::msg::EmergencyVehicleResponse & msg)
  : msg_(msg)
  {}
  ::carma_v2x_msgs::msg::EmergencyVehicleResponse reason_exists(::carma_v2x_msgs::msg::EmergencyVehicleResponse::_reason_exists_type arg)
  {
    msg_.reason_exists = std::move(arg);
    return std::move(msg_);
  }

private:
  ::carma_v2x_msgs::msg::EmergencyVehicleResponse msg_;
};

class Init_EmergencyVehicleResponse_reason
{
public:
  explicit Init_EmergencyVehicleResponse_reason(::carma_v2x_msgs::msg::EmergencyVehicleResponse & msg)
  : msg_(msg)
  {}
  Init_EmergencyVehicleResponse_reason_exists reason(::carma_v2x_msgs::msg::EmergencyVehicleResponse::_reason_type arg)
  {
    msg_.reason = std::move(arg);
    return Init_EmergencyVehicleResponse_reason_exists(msg_);
  }

private:
  ::carma_v2x_msgs::msg::EmergencyVehicleResponse msg_;
};

class Init_EmergencyVehicleResponse_can_change_lanes
{
public:
  explicit Init_EmergencyVehicleResponse_can_change_lanes(::carma_v2x_msgs::msg::EmergencyVehicleResponse & msg)
  : msg_(msg)
  {}
  Init_EmergencyVehicleResponse_reason can_change_lanes(::carma_v2x_msgs::msg::EmergencyVehicleResponse::_can_change_lanes_type arg)
  {
    msg_.can_change_lanes = std::move(arg);
    return Init_EmergencyVehicleResponse_reason(msg_);
  }

private:
  ::carma_v2x_msgs::msg::EmergencyVehicleResponse msg_;
};

class Init_EmergencyVehicleResponse_m_header
{
public:
  Init_EmergencyVehicleResponse_m_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_EmergencyVehicleResponse_can_change_lanes m_header(::carma_v2x_msgs::msg::EmergencyVehicleResponse::_m_header_type arg)
  {
    msg_.m_header = std::move(arg);
    return Init_EmergencyVehicleResponse_can_change_lanes(msg_);
  }

private:
  ::carma_v2x_msgs::msg::EmergencyVehicleResponse msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::carma_v2x_msgs::msg::EmergencyVehicleResponse>()
{
  return carma_v2x_msgs::msg::builder::Init_EmergencyVehicleResponse_m_header();
}

}  // namespace carma_v2x_msgs

#endif  // CARMA_V2X_MSGS__MSG__DETAIL__EMERGENCY_VEHICLE_RESPONSE__BUILDER_HPP_
