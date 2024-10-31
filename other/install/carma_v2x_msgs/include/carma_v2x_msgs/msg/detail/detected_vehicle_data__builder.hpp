// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from carma_v2x_msgs:msg/DetectedVehicleData.idl
// generated code does not contain a copyright notice

#ifndef CARMA_V2X_MSGS__MSG__DETAIL__DETECTED_VEHICLE_DATA__BUILDER_HPP_
#define CARMA_V2X_MSGS__MSG__DETAIL__DETECTED_VEHICLE_DATA__BUILDER_HPP_

#include "carma_v2x_msgs/msg/detail/detected_vehicle_data__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace carma_v2x_msgs
{

namespace msg
{

namespace builder
{

class Init_DetectedVehicleData_class_conf
{
public:
  explicit Init_DetectedVehicleData_class_conf(::carma_v2x_msgs::msg::DetectedVehicleData & msg)
  : msg_(msg)
  {}
  ::carma_v2x_msgs::msg::DetectedVehicleData class_conf(::carma_v2x_msgs::msg::DetectedVehicleData::_class_conf_type arg)
  {
    msg_.class_conf = std::move(arg);
    return std::move(msg_);
  }

private:
  ::carma_v2x_msgs::msg::DetectedVehicleData msg_;
};

class Init_DetectedVehicleData_vehicle_class
{
public:
  explicit Init_DetectedVehicleData_vehicle_class(::carma_v2x_msgs::msg::DetectedVehicleData & msg)
  : msg_(msg)
  {}
  Init_DetectedVehicleData_class_conf vehicle_class(::carma_v2x_msgs::msg::DetectedVehicleData::_vehicle_class_type arg)
  {
    msg_.vehicle_class = std::move(arg);
    return Init_DetectedVehicleData_class_conf(msg_);
  }

private:
  ::carma_v2x_msgs::msg::DetectedVehicleData msg_;
};

class Init_DetectedVehicleData_vehicle_size_confidence
{
public:
  explicit Init_DetectedVehicleData_vehicle_size_confidence(::carma_v2x_msgs::msg::DetectedVehicleData & msg)
  : msg_(msg)
  {}
  Init_DetectedVehicleData_vehicle_class vehicle_size_confidence(::carma_v2x_msgs::msg::DetectedVehicleData::_vehicle_size_confidence_type arg)
  {
    msg_.vehicle_size_confidence = std::move(arg);
    return Init_DetectedVehicleData_vehicle_class(msg_);
  }

private:
  ::carma_v2x_msgs::msg::DetectedVehicleData msg_;
};

class Init_DetectedVehicleData_height
{
public:
  explicit Init_DetectedVehicleData_height(::carma_v2x_msgs::msg::DetectedVehicleData & msg)
  : msg_(msg)
  {}
  Init_DetectedVehicleData_vehicle_size_confidence height(::carma_v2x_msgs::msg::DetectedVehicleData::_height_type arg)
  {
    msg_.height = std::move(arg);
    return Init_DetectedVehicleData_vehicle_size_confidence(msg_);
  }

private:
  ::carma_v2x_msgs::msg::DetectedVehicleData msg_;
};

class Init_DetectedVehicleData_size
{
public:
  explicit Init_DetectedVehicleData_size(::carma_v2x_msgs::msg::DetectedVehicleData & msg)
  : msg_(msg)
  {}
  Init_DetectedVehicleData_height size(::carma_v2x_msgs::msg::DetectedVehicleData::_size_type arg)
  {
    msg_.size = std::move(arg);
    return Init_DetectedVehicleData_height(msg_);
  }

private:
  ::carma_v2x_msgs::msg::DetectedVehicleData msg_;
};

class Init_DetectedVehicleData_veh_ang_vel_confidence
{
public:
  explicit Init_DetectedVehicleData_veh_ang_vel_confidence(::carma_v2x_msgs::msg::DetectedVehicleData & msg)
  : msg_(msg)
  {}
  Init_DetectedVehicleData_size veh_ang_vel_confidence(::carma_v2x_msgs::msg::DetectedVehicleData::_veh_ang_vel_confidence_type arg)
  {
    msg_.veh_ang_vel_confidence = std::move(arg);
    return Init_DetectedVehicleData_size(msg_);
  }

private:
  ::carma_v2x_msgs::msg::DetectedVehicleData msg_;
};

class Init_DetectedVehicleData_veh_ang_vel
{
public:
  explicit Init_DetectedVehicleData_veh_ang_vel(::carma_v2x_msgs::msg::DetectedVehicleData & msg)
  : msg_(msg)
  {}
  Init_DetectedVehicleData_veh_ang_vel_confidence veh_ang_vel(::carma_v2x_msgs::msg::DetectedVehicleData::_veh_ang_vel_type arg)
  {
    msg_.veh_ang_vel = std::move(arg);
    return Init_DetectedVehicleData_veh_ang_vel_confidence(msg_);
  }

private:
  ::carma_v2x_msgs::msg::DetectedVehicleData msg_;
};

class Init_DetectedVehicleData_veh_attitude_confidence
{
public:
  explicit Init_DetectedVehicleData_veh_attitude_confidence(::carma_v2x_msgs::msg::DetectedVehicleData & msg)
  : msg_(msg)
  {}
  Init_DetectedVehicleData_veh_ang_vel veh_attitude_confidence(::carma_v2x_msgs::msg::DetectedVehicleData::_veh_attitude_confidence_type arg)
  {
    msg_.veh_attitude_confidence = std::move(arg);
    return Init_DetectedVehicleData_veh_ang_vel(msg_);
  }

private:
  ::carma_v2x_msgs::msg::DetectedVehicleData msg_;
};

class Init_DetectedVehicleData_veh_attitude
{
public:
  explicit Init_DetectedVehicleData_veh_attitude(::carma_v2x_msgs::msg::DetectedVehicleData & msg)
  : msg_(msg)
  {}
  Init_DetectedVehicleData_veh_attitude_confidence veh_attitude(::carma_v2x_msgs::msg::DetectedVehicleData::_veh_attitude_type arg)
  {
    msg_.veh_attitude = std::move(arg);
    return Init_DetectedVehicleData_veh_attitude_confidence(msg_);
  }

private:
  ::carma_v2x_msgs::msg::DetectedVehicleData msg_;
};

class Init_DetectedVehicleData_lights
{
public:
  explicit Init_DetectedVehicleData_lights(::carma_v2x_msgs::msg::DetectedVehicleData & msg)
  : msg_(msg)
  {}
  Init_DetectedVehicleData_veh_attitude lights(::carma_v2x_msgs::msg::DetectedVehicleData::_lights_type arg)
  {
    msg_.lights = std::move(arg);
    return Init_DetectedVehicleData_veh_attitude(msg_);
  }

private:
  ::carma_v2x_msgs::msg::DetectedVehicleData msg_;
};

class Init_DetectedVehicleData_presence_vector
{
public:
  Init_DetectedVehicleData_presence_vector()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DetectedVehicleData_lights presence_vector(::carma_v2x_msgs::msg::DetectedVehicleData::_presence_vector_type arg)
  {
    msg_.presence_vector = std::move(arg);
    return Init_DetectedVehicleData_lights(msg_);
  }

private:
  ::carma_v2x_msgs::msg::DetectedVehicleData msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::carma_v2x_msgs::msg::DetectedVehicleData>()
{
  return carma_v2x_msgs::msg::builder::Init_DetectedVehicleData_presence_vector();
}

}  // namespace carma_v2x_msgs

#endif  // CARMA_V2X_MSGS__MSG__DETAIL__DETECTED_VEHICLE_DATA__BUILDER_HPP_
