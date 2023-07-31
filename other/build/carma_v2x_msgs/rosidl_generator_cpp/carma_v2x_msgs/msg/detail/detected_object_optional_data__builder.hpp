// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from carma_v2x_msgs:msg/DetectedObjectOptionalData.idl
// generated code does not contain a copyright notice

#ifndef CARMA_V2X_MSGS__MSG__DETAIL__DETECTED_OBJECT_OPTIONAL_DATA__BUILDER_HPP_
#define CARMA_V2X_MSGS__MSG__DETAIL__DETECTED_OBJECT_OPTIONAL_DATA__BUILDER_HPP_

#include "carma_v2x_msgs/msg/detail/detected_object_optional_data__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace carma_v2x_msgs
{

namespace msg
{

namespace builder
{

class Init_DetectedObjectOptionalData_det_obst
{
public:
  explicit Init_DetectedObjectOptionalData_det_obst(::carma_v2x_msgs::msg::DetectedObjectOptionalData & msg)
  : msg_(msg)
  {}
  ::carma_v2x_msgs::msg::DetectedObjectOptionalData det_obst(::carma_v2x_msgs::msg::DetectedObjectOptionalData::_det_obst_type arg)
  {
    msg_.det_obst = std::move(arg);
    return std::move(msg_);
  }

private:
  ::carma_v2x_msgs::msg::DetectedObjectOptionalData msg_;
};

class Init_DetectedObjectOptionalData_det_vru
{
public:
  explicit Init_DetectedObjectOptionalData_det_vru(::carma_v2x_msgs::msg::DetectedObjectOptionalData & msg)
  : msg_(msg)
  {}
  Init_DetectedObjectOptionalData_det_obst det_vru(::carma_v2x_msgs::msg::DetectedObjectOptionalData::_det_vru_type arg)
  {
    msg_.det_vru = std::move(arg);
    return Init_DetectedObjectOptionalData_det_obst(msg_);
  }

private:
  ::carma_v2x_msgs::msg::DetectedObjectOptionalData msg_;
};

class Init_DetectedObjectOptionalData_det_veh
{
public:
  explicit Init_DetectedObjectOptionalData_det_veh(::carma_v2x_msgs::msg::DetectedObjectOptionalData & msg)
  : msg_(msg)
  {}
  Init_DetectedObjectOptionalData_det_vru det_veh(::carma_v2x_msgs::msg::DetectedObjectOptionalData::_det_veh_type arg)
  {
    msg_.det_veh = std::move(arg);
    return Init_DetectedObjectOptionalData_det_vru(msg_);
  }

private:
  ::carma_v2x_msgs::msg::DetectedObjectOptionalData msg_;
};

class Init_DetectedObjectOptionalData_choice
{
public:
  Init_DetectedObjectOptionalData_choice()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DetectedObjectOptionalData_det_veh choice(::carma_v2x_msgs::msg::DetectedObjectOptionalData::_choice_type arg)
  {
    msg_.choice = std::move(arg);
    return Init_DetectedObjectOptionalData_det_veh(msg_);
  }

private:
  ::carma_v2x_msgs::msg::DetectedObjectOptionalData msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::carma_v2x_msgs::msg::DetectedObjectOptionalData>()
{
  return carma_v2x_msgs::msg::builder::Init_DetectedObjectOptionalData_choice();
}

}  // namespace carma_v2x_msgs

#endif  // CARMA_V2X_MSGS__MSG__DETAIL__DETECTED_OBJECT_OPTIONAL_DATA__BUILDER_HPP_
