// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from carma_v2x_msgs:msg/DetectedObjectOptionalData.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "carma_v2x_msgs/msg/detail/detected_object_optional_data__struct.hpp"
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

void DetectedObjectOptionalData_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) carma_v2x_msgs::msg::DetectedObjectOptionalData(_init);
}

void DetectedObjectOptionalData_fini_function(void * message_memory)
{
  auto typed_message = static_cast<carma_v2x_msgs::msg::DetectedObjectOptionalData *>(message_memory);
  typed_message->~DetectedObjectOptionalData();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember DetectedObjectOptionalData_message_member_array[4] = {
  {
    "choice",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_v2x_msgs::msg::DetectedObjectOptionalData, choice),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "det_veh",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<carma_v2x_msgs::msg::DetectedVehicleData>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_v2x_msgs::msg::DetectedObjectOptionalData, det_veh),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "det_vru",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<carma_v2x_msgs::msg::DetectedVRUData>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_v2x_msgs::msg::DetectedObjectOptionalData, det_vru),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "det_obst",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<carma_v2x_msgs::msg::DetectedObstacleData>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_v2x_msgs::msg::DetectedObjectOptionalData, det_obst),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers DetectedObjectOptionalData_message_members = {
  "carma_v2x_msgs::msg",  // message namespace
  "DetectedObjectOptionalData",  // message name
  4,  // number of fields
  sizeof(carma_v2x_msgs::msg::DetectedObjectOptionalData),
  DetectedObjectOptionalData_message_member_array,  // message members
  DetectedObjectOptionalData_init_function,  // function to initialize message memory (memory has to be allocated)
  DetectedObjectOptionalData_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t DetectedObjectOptionalData_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &DetectedObjectOptionalData_message_members,
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
get_message_type_support_handle<carma_v2x_msgs::msg::DetectedObjectOptionalData>()
{
  return &::carma_v2x_msgs::msg::rosidl_typesupport_introspection_cpp::DetectedObjectOptionalData_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, carma_v2x_msgs, msg, DetectedObjectOptionalData)() {
  return &::carma_v2x_msgs::msg::rosidl_typesupport_introspection_cpp::DetectedObjectOptionalData_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
