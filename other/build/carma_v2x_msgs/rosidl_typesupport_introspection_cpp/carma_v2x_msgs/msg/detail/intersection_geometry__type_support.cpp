// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from carma_v2x_msgs:msg/IntersectionGeometry.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "carma_v2x_msgs/msg/detail/intersection_geometry__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace carma_v2x_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void IntersectionGeometry_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) carma_v2x_msgs::msg::IntersectionGeometry(_init);
}

void IntersectionGeometry_fini_function(void * message_memory)
{
  auto typed_message = static_cast<carma_v2x_msgs::msg::IntersectionGeometry *>(message_memory);
  typed_message->~IntersectionGeometry();
}

size_t size_function__IntersectionGeometry__speed_limits(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<carma_v2x_msgs::msg::RegulatorySpeedLimit> *>(untyped_member);
  return member->size();
}

const void * get_const_function__IntersectionGeometry__speed_limits(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<carma_v2x_msgs::msg::RegulatorySpeedLimit> *>(untyped_member);
  return &member[index];
}

void * get_function__IntersectionGeometry__speed_limits(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<carma_v2x_msgs::msg::RegulatorySpeedLimit> *>(untyped_member);
  return &member[index];
}

void resize_function__IntersectionGeometry__speed_limits(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<carma_v2x_msgs::msg::RegulatorySpeedLimit> *>(untyped_member);
  member->resize(size);
}

size_t size_function__IntersectionGeometry__lane_list(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<carma_v2x_msgs::msg::GenericLane> *>(untyped_member);
  return member->size();
}

const void * get_const_function__IntersectionGeometry__lane_list(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<carma_v2x_msgs::msg::GenericLane> *>(untyped_member);
  return &member[index];
}

void * get_function__IntersectionGeometry__lane_list(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<carma_v2x_msgs::msg::GenericLane> *>(untyped_member);
  return &member[index];
}

void resize_function__IntersectionGeometry__lane_list(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<carma_v2x_msgs::msg::GenericLane> *>(untyped_member);
  member->resize(size);
}

size_t size_function__IntersectionGeometry__preempt_priority_list(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<j2735_v2x_msgs::msg::SignalControlZone> *>(untyped_member);
  return member->size();
}

const void * get_const_function__IntersectionGeometry__preempt_priority_list(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<j2735_v2x_msgs::msg::SignalControlZone> *>(untyped_member);
  return &member[index];
}

void * get_function__IntersectionGeometry__preempt_priority_list(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<j2735_v2x_msgs::msg::SignalControlZone> *>(untyped_member);
  return &member[index];
}

void resize_function__IntersectionGeometry__preempt_priority_list(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<j2735_v2x_msgs::msg::SignalControlZone> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember IntersectionGeometry_message_member_array[12] = {
  {
    "name",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_v2x_msgs::msg::IntersectionGeometry, name),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "name_exists",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_v2x_msgs::msg::IntersectionGeometry, name_exists),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<j2735_v2x_msgs::msg::IntersectionReferenceID>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_v2x_msgs::msg::IntersectionGeometry, id),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "revision",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_v2x_msgs::msg::IntersectionGeometry, revision),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "ref_point",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<carma_v2x_msgs::msg::Position3D>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_v2x_msgs::msg::IntersectionGeometry, ref_point),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "lane_width",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_v2x_msgs::msg::IntersectionGeometry, lane_width),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "lane_width_exists",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_v2x_msgs::msg::IntersectionGeometry, lane_width_exists),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "speed_limits",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<carma_v2x_msgs::msg::RegulatorySpeedLimit>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_v2x_msgs::msg::IntersectionGeometry, speed_limits),  // bytes offset in struct
    nullptr,  // default value
    size_function__IntersectionGeometry__speed_limits,  // size() function pointer
    get_const_function__IntersectionGeometry__speed_limits,  // get_const(index) function pointer
    get_function__IntersectionGeometry__speed_limits,  // get(index) function pointer
    resize_function__IntersectionGeometry__speed_limits  // resize(index) function pointer
  },
  {
    "speed_limits_exists",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_v2x_msgs::msg::IntersectionGeometry, speed_limits_exists),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "lane_list",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<carma_v2x_msgs::msg::GenericLane>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_v2x_msgs::msg::IntersectionGeometry, lane_list),  // bytes offset in struct
    nullptr,  // default value
    size_function__IntersectionGeometry__lane_list,  // size() function pointer
    get_const_function__IntersectionGeometry__lane_list,  // get_const(index) function pointer
    get_function__IntersectionGeometry__lane_list,  // get(index) function pointer
    resize_function__IntersectionGeometry__lane_list  // resize(index) function pointer
  },
  {
    "preempt_priority_list",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<j2735_v2x_msgs::msg::SignalControlZone>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_v2x_msgs::msg::IntersectionGeometry, preempt_priority_list),  // bytes offset in struct
    nullptr,  // default value
    size_function__IntersectionGeometry__preempt_priority_list,  // size() function pointer
    get_const_function__IntersectionGeometry__preempt_priority_list,  // get_const(index) function pointer
    get_function__IntersectionGeometry__preempt_priority_list,  // get(index) function pointer
    resize_function__IntersectionGeometry__preempt_priority_list  // resize(index) function pointer
  },
  {
    "preempt_priority_data_exists",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_v2x_msgs::msg::IntersectionGeometry, preempt_priority_data_exists),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers IntersectionGeometry_message_members = {
  "carma_v2x_msgs::msg",  // message namespace
  "IntersectionGeometry",  // message name
  12,  // number of fields
  sizeof(carma_v2x_msgs::msg::IntersectionGeometry),
  IntersectionGeometry_message_member_array,  // message members
  IntersectionGeometry_init_function,  // function to initialize message memory (memory has to be allocated)
  IntersectionGeometry_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t IntersectionGeometry_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &IntersectionGeometry_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace carma_v2x_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<carma_v2x_msgs::msg::IntersectionGeometry>()
{
  return &::carma_v2x_msgs::msg::rosidl_typesupport_introspection_cpp::IntersectionGeometry_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, carma_v2x_msgs, msg, IntersectionGeometry)() {
  return &::carma_v2x_msgs::msg::rosidl_typesupport_introspection_cpp::IntersectionGeometry_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
