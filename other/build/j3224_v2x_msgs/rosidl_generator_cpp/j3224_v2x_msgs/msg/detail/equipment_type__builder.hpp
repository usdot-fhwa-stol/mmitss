// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from j3224_v2x_msgs:msg/EquipmentType.idl
// generated code does not contain a copyright notice

#ifndef J3224_V2X_MSGS__MSG__DETAIL__EQUIPMENT_TYPE__BUILDER_HPP_
#define J3224_V2X_MSGS__MSG__DETAIL__EQUIPMENT_TYPE__BUILDER_HPP_

#include "j3224_v2x_msgs/msg/detail/equipment_type__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace j3224_v2x_msgs
{

namespace msg
{

namespace builder
{

class Init_EquipmentType_equipment_type
{
public:
  Init_EquipmentType_equipment_type()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::j3224_v2x_msgs::msg::EquipmentType equipment_type(::j3224_v2x_msgs::msg::EquipmentType::_equipment_type_type arg)
  {
    msg_.equipment_type = std::move(arg);
    return std::move(msg_);
  }

private:
  ::j3224_v2x_msgs::msg::EquipmentType msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::j3224_v2x_msgs::msg::EquipmentType>()
{
  return j3224_v2x_msgs::msg::builder::Init_EquipmentType_equipment_type();
}

}  // namespace j3224_v2x_msgs

#endif  // J3224_V2X_MSGS__MSG__DETAIL__EQUIPMENT_TYPE__BUILDER_HPP_
