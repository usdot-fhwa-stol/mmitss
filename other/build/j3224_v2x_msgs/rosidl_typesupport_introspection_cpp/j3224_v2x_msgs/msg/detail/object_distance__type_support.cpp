// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from j3224_v2x_msgs:msg/ObjectDistance.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "j3224_v2x_msgs/msg/detail/object_distance__struct.hpp"
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

void ObjectDistance_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) j3224_v2x_msgs::msg::ObjectDistance(_init);
}

void ObjectDistance_fini_function(void * message_memory)
{
  auto typed_message = static_cast<j3224_v2x_msgs::msg::ObjectDistance *>(message_memory);
  typed_message->~ObjectDistance();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember ObjectDistance_message_member_array[1] = {
  {
    "object_distance",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT16,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(j3224_v2x_msgs::msg::ObjectDistance, object_distance),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers ObjectDistance_message_members = {
  "j3224_v2x_msgs::msg",  // message namespace
  "ObjectDistance",  // message name
  1,  // number of fields
  sizeof(j3224_v2x_msgs::msg::ObjectDistance),
  ObjectDistance_message_member_array,  // message members
  ObjectDistance_init_function,  // function to initialize message memory (memory has to be allocated)
  ObjectDistance_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t ObjectDistance_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &ObjectDistance_message_members,
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
get_message_type_support_handle<j3224_v2x_msgs::msg::ObjectDistance>()
{
  return &::j3224_v2x_msgs::msg::rosidl_typesupport_introspection_cpp::ObjectDistance_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, j3224_v2x_msgs, msg, ObjectDistance)() {
  return &::j3224_v2x_msgs::msg::rosidl_typesupport_introspection_cpp::ObjectDistance_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
