// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from carma_v2x_msgs:msg/RTCMHeader.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "carma_v2x_msgs/msg/detail/rtcm_header__struct.hpp"
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

void RTCMHeader_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) carma_v2x_msgs::msg::RTCMHeader(_init);
}

void RTCMHeader_fini_function(void * message_memory)
{
  auto typed_message = static_cast<carma_v2x_msgs::msg::RTCMHeader *>(message_memory);
  typed_message->~RTCMHeader();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember RTCMHeader_message_member_array[4] = {
  {
    "status",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<j2735_v2x_msgs::msg::GNSSStatus>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_v2x_msgs::msg::RTCMHeader, status),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "ant_offset_x",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<carma_v2x_msgs::msg::OffsetB12>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_v2x_msgs::msg::RTCMHeader, ant_offset_x),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "ant_offset_y",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<carma_v2x_msgs::msg::OffsetB09>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_v2x_msgs::msg::RTCMHeader, ant_offset_y),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "ant_offset_z",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<carma_v2x_msgs::msg::OffsetB10>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_v2x_msgs::msg::RTCMHeader, ant_offset_z),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers RTCMHeader_message_members = {
  "carma_v2x_msgs::msg",  // message namespace
  "RTCMHeader",  // message name
  4,  // number of fields
  sizeof(carma_v2x_msgs::msg::RTCMHeader),
  RTCMHeader_message_member_array,  // message members
  RTCMHeader_init_function,  // function to initialize message memory (memory has to be allocated)
  RTCMHeader_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t RTCMHeader_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &RTCMHeader_message_members,
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
get_message_type_support_handle<carma_v2x_msgs::msg::RTCMHeader>()
{
  return &::carma_v2x_msgs::msg::rosidl_typesupport_introspection_cpp::RTCMHeader_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, carma_v2x_msgs, msg, RTCMHeader)() {
  return &::carma_v2x_msgs::msg::rosidl_typesupport_introspection_cpp::RTCMHeader_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
