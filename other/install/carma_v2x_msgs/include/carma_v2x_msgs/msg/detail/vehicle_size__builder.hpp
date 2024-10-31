// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from carma_v2x_msgs:msg/VehicleSize.idl
// generated code does not contain a copyright notice

#ifndef CARMA_V2X_MSGS__MSG__DETAIL__VEHICLE_SIZE__BUILDER_HPP_
#define CARMA_V2X_MSGS__MSG__DETAIL__VEHICLE_SIZE__BUILDER_HPP_

#include "carma_v2x_msgs/msg/detail/vehicle_size__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace carma_v2x_msgs
{

namespace msg
{

namespace builder
{

class Init_VehicleSize_vehicle_length
{
public:
  explicit Init_VehicleSize_vehicle_length(::carma_v2x_msgs::msg::VehicleSize & msg)
  : msg_(msg)
  {}
  ::carma_v2x_msgs::msg::VehicleSize vehicle_length(::carma_v2x_msgs::msg::VehicleSize::_vehicle_length_type arg)
  {
    msg_.vehicle_length = std::move(arg);
    return std::move(msg_);
  }

private:
  ::carma_v2x_msgs::msg::VehicleSize msg_;
};

class Init_VehicleSize_vehicle_width
{
public:
  explicit Init_VehicleSize_vehicle_width(::carma_v2x_msgs::msg::VehicleSize & msg)
  : msg_(msg)
  {}
  Init_VehicleSize_vehicle_length vehicle_width(::carma_v2x_msgs::msg::VehicleSize::_vehicle_width_type arg)
  {
    msg_.vehicle_width = std::move(arg);
    return Init_VehicleSize_vehicle_length(msg_);
  }

private:
  ::carma_v2x_msgs::msg::VehicleSize msg_;
};

class Init_VehicleSize_presence_vector
{
public:
  Init_VehicleSize_presence_vector()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_VehicleSize_vehicle_width presence_vector(::carma_v2x_msgs::msg::VehicleSize::_presence_vector_type arg)
  {
    msg_.presence_vector = std::move(arg);
    return Init_VehicleSize_vehicle_width(msg_);
  }

private:
  ::carma_v2x_msgs::msg::VehicleSize msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::carma_v2x_msgs::msg::VehicleSize>()
{
  return carma_v2x_msgs::msg::builder::Init_VehicleSize_presence_vector();
}

}  // namespace carma_v2x_msgs

#endif  // CARMA_V2X_MSGS__MSG__DETAIL__VEHICLE_SIZE__BUILDER_HPP_
