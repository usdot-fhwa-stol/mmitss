// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from j3224_v2x_msgs:msg/SizeValue.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "j3224_v2x_msgs/msg/detail/size_value__struct.hpp"
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

void SizeValue_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) j3224_v2x_msgs::msg::SizeValue(_init);
}

void SizeValue_fini_function(void * message_memory)
{
  auto typed_message = static_cast<j3224_v2x_msgs::msg::SizeValue *>(message_memory);
  typed_message->~SizeValue();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember SizeValue_message_member_array[1] = {
  {
    "size_value",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(j3224_v2x_msgs::msg::SizeValue, size_value),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers SizeValue_message_members = {
  "j3224_v2x_msgs::msg",  // message namespace
  "SizeValue",  // message name
  1,  // number of fields
  sizeof(j3224_v2x_msgs::msg::SizeValue),
  SizeValue_message_member_array,  // message members
  SizeValue_init_function,  // function to initialize message memory (memory has to be allocated)
  SizeValue_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t SizeValue_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &SizeValue_message_members,
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
get_message_type_support_handle<j3224_v2x_msgs::msg::SizeValue>()
{
  return &::j3224_v2x_msgs::msg::rosidl_typesupport_introspection_cpp::SizeValue_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, j3224_v2x_msgs, msg, SizeValue)() {
  return &::j3224_v2x_msgs::msg::rosidl_typesupport_introspection_cpp::SizeValue_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
