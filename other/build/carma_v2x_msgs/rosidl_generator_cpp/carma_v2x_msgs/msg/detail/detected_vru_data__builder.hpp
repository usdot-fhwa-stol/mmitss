// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from carma_v2x_msgs:msg/DetectedVRUData.idl
// generated code does not contain a copyright notice

#ifndef CARMA_V2X_MSGS__MSG__DETAIL__DETECTED_VRU_DATA__BUILDER_HPP_
#define CARMA_V2X_MSGS__MSG__DETAIL__DETECTED_VRU_DATA__BUILDER_HPP_

#include "carma_v2x_msgs/msg/detail/detected_vru_data__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace carma_v2x_msgs
{

namespace msg
{

namespace builder
{

class Init_DetectedVRUData_radius
{
public:
  explicit Init_DetectedVRUData_radius(::carma_v2x_msgs::msg::DetectedVRUData & msg)
  : msg_(msg)
  {}
  ::carma_v2x_msgs::msg::DetectedVRUData radius(::carma_v2x_msgs::msg::DetectedVRUData::_radius_type arg)
  {
    msg_.radius = std::move(arg);
    return std::move(msg_);
  }

private:
  ::carma_v2x_msgs::msg::DetectedVRUData msg_;
};

class Init_DetectedVRUData_attachment
{
public:
  explicit Init_DetectedVRUData_attachment(::carma_v2x_msgs::msg::DetectedVRUData & msg)
  : msg_(msg)
  {}
  Init_DetectedVRUData_radius attachment(::carma_v2x_msgs::msg::DetectedVRUData::_attachment_type arg)
  {
    msg_.attachment = std::move(arg);
    return Init_DetectedVRUData_radius(msg_);
  }

private:
  ::carma_v2x_msgs::msg::DetectedVRUData msg_;
};

class Init_DetectedVRUData_propulsion
{
public:
  explicit Init_DetectedVRUData_propulsion(::carma_v2x_msgs::msg::DetectedVRUData & msg)
  : msg_(msg)
  {}
  Init_DetectedVRUData_attachment propulsion(::carma_v2x_msgs::msg::DetectedVRUData::_propulsion_type arg)
  {
    msg_.propulsion = std::move(arg);
    return Init_DetectedVRUData_attachment(msg_);
  }

private:
  ::carma_v2x_msgs::msg::DetectedVRUData msg_;
};

class Init_DetectedVRUData_basic_type
{
public:
  explicit Init_DetectedVRUData_basic_type(::carma_v2x_msgs::msg::DetectedVRUData & msg)
  : msg_(msg)
  {}
  Init_DetectedVRUData_propulsion basic_type(::carma_v2x_msgs::msg::DetectedVRUData::_basic_type_type arg)
  {
    msg_.basic_type = std::move(arg);
    return Init_DetectedVRUData_propulsion(msg_);
  }

private:
  ::carma_v2x_msgs::msg::DetectedVRUData msg_;
};

class Init_DetectedVRUData_presence_vector
{
public:
  Init_DetectedVRUData_presence_vector()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DetectedVRUData_basic_type presence_vector(::carma_v2x_msgs::msg::DetectedVRUData::_presence_vector_type arg)
  {
    msg_.presence_vector = std::move(arg);
    return Init_DetectedVRUData_basic_type(msg_);
  }

private:
  ::carma_v2x_msgs::msg::DetectedVRUData msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::carma_v2x_msgs::msg::DetectedVRUData>()
{
  return carma_v2x_msgs::msg::builder::Init_DetectedVRUData_presence_vector();
}

}  // namespace carma_v2x_msgs

#endif  // CARMA_V2X_MSGS__MSG__DETAIL__DETECTED_VRU_DATA__BUILDER_HPP_
