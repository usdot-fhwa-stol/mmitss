// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from j3224_v2x_msgs:msg/VehicleSizeConfidence.idl
// generated code does not contain a copyright notice

#ifndef J3224_V2X_MSGS__MSG__DETAIL__VEHICLE_SIZE_CONFIDENCE__BUILDER_HPP_
#define J3224_V2X_MSGS__MSG__DETAIL__VEHICLE_SIZE_CONFIDENCE__BUILDER_HPP_

#include "j3224_v2x_msgs/msg/detail/vehicle_size_confidence__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace j3224_v2x_msgs
{

namespace msg
{

namespace builder
{

class Init_VehicleSizeConfidence_vehicle_height_confidence
{
public:
  explicit Init_VehicleSizeConfidence_vehicle_height_confidence(::j3224_v2x_msgs::msg::VehicleSizeConfidence & msg)
  : msg_(msg)
  {}
  ::j3224_v2x_msgs::msg::VehicleSizeConfidence vehicle_height_confidence(::j3224_v2x_msgs::msg::VehicleSizeConfidence::_vehicle_height_confidence_type arg)
  {
    msg_.vehicle_height_confidence = std::move(arg);
    return std::move(msg_);
  }

private:
  ::j3224_v2x_msgs::msg::VehicleSizeConfidence msg_;
};

class Init_VehicleSizeConfidence_presence_vector
{
public:
  explicit Init_VehicleSizeConfidence_presence_vector(::j3224_v2x_msgs::msg::VehicleSizeConfidence & msg)
  : msg_(msg)
  {}
  Init_VehicleSizeConfidence_vehicle_height_confidence presence_vector(::j3224_v2x_msgs::msg::VehicleSizeConfidence::_presence_vector_type arg)
  {
    msg_.presence_vector = std::move(arg);
    return Init_VehicleSizeConfidence_vehicle_height_confidence(msg_);
  }

private:
  ::j3224_v2x_msgs::msg::VehicleSizeConfidence msg_;
};

class Init_VehicleSizeConfidence_vehicle_length_confidence
{
public:
  explicit Init_VehicleSizeConfidence_vehicle_length_confidence(::j3224_v2x_msgs::msg::VehicleSizeConfidence & msg)
  : msg_(msg)
  {}
  Init_VehicleSizeConfidence_presence_vector vehicle_length_confidence(::j3224_v2x_msgs::msg::VehicleSizeConfidence::_vehicle_length_confidence_type arg)
  {
    msg_.vehicle_length_confidence = std::move(arg);
    return Init_VehicleSizeConfidence_presence_vector(msg_);
  }

private:
  ::j3224_v2x_msgs::msg::VehicleSizeConfidence msg_;
};

class Init_VehicleSizeConfidence_vehicle_width_confidence
{
public:
  Init_VehicleSizeConfidence_vehicle_width_confidence()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_VehicleSizeConfidence_vehicle_length_confidence vehicle_width_confidence(::j3224_v2x_msgs::msg::VehicleSizeConfidence::_vehicle_width_confidence_type arg)
  {
    msg_.vehicle_width_confidence = std::move(arg);
    return Init_VehicleSizeConfidence_vehicle_length_confidence(msg_);
  }

private:
  ::j3224_v2x_msgs::msg::VehicleSizeConfidence msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::j3224_v2x_msgs::msg::VehicleSizeConfidence>()
{
  return j3224_v2x_msgs::msg::builder::Init_VehicleSizeConfidence_vehicle_width_confidence();
}

}  // namespace j3224_v2x_msgs

#endif  // J3224_V2X_MSGS__MSG__DETAIL__VEHICLE_SIZE_CONFIDENCE__BUILDER_HPP_
