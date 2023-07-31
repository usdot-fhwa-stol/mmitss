// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from j3224_v2x_msgs:msg/VehicleSizeConfidence.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "j3224_v2x_msgs/msg/detail/vehicle_size_confidence__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace j3224_v2x_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void VehicleSizeConfidence_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) j3224_v2x_msgs::msg::VehicleSizeConfidence(_init);
}

void VehicleSizeConfidence_fini_function(void * message_memory)
{
  auto typed_message = static_cast<j3224_v2x_msgs::msg::VehicleSizeConfidence *>(message_memory);
  typed_message->~VehicleSizeConfidence();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember VehicleSizeConfidence_message_member_array[4] = {
  {
    "vehicle_width_confidence",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<j3224_v2x_msgs::msg::SizeValueConfidence>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(j3224_v2x_msgs::msg::VehicleSizeConfidence, vehicle_width_confidence),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "vehicle_length_confidence",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<j3224_v2x_msgs::msg::SizeValueConfidence>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(j3224_v2x_msgs::msg::VehicleSizeConfidence, vehicle_length_confidence),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "presence_vector",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(j3224_v2x_msgs::msg::VehicleSizeConfidence, presence_vector),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "vehicle_height_confidence",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<j3224_v2x_msgs::msg::SizeValueConfidence>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(j3224_v2x_msgs::msg::VehicleSizeConfidence, vehicle_height_confidence),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers VehicleSizeConfidence_message_members = {
  "j3224_v2x_msgs::msg",  // message namespace
  "VehicleSizeConfidence",  // message name
  4,  // number of fields
  sizeof(j3224_v2x_msgs::msg::VehicleSizeConfidence),
  VehicleSizeConfidence_message_member_array,  // message members
  VehicleSizeConfidence_init_function,  // function to initialize message memory (memory has to be allocated)
  VehicleSizeConfidence_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t VehicleSizeConfidence_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &VehicleSizeConfidence_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace j3224_v2x_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<j3224_v2x_msgs::msg::VehicleSizeConfidence>()
{
  return &::j3224_v2x_msgs::msg::rosidl_typesupport_introspection_cpp::VehicleSizeConfidence_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, j3224_v2x_msgs, msg, VehicleSizeConfidence)() {
  return &::j3224_v2x_msgs::msg::rosidl_typesupport_introspection_cpp::VehicleSizeConfidence_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
