// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from carma_debug_ros2_msgs:msg/RegulatoryElement.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "carma_debug_ros2_msgs/msg/detail/regulatory_element__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace carma_debug_ros2_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void RegulatoryElement_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) carma_debug_ros2_msgs::msg::RegulatoryElement(_init);
}

void RegulatoryElement_fini_function(void * message_memory)
{
  auto typed_message = static_cast<carma_debug_ros2_msgs::msg::RegulatoryElement *>(message_memory);
  typed_message->~RegulatoryElement();
}

size_t size_function__RegulatoryElement__participants(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return member->size();
}

const void * get_const_function__RegulatoryElement__participants(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void * get_function__RegulatoryElement__participants(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void resize_function__RegulatoryElement__participants(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<std::string> *>(untyped_member);
  member->resize(size);
}

size_t size_function__RegulatoryElement__left_participants(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return member->size();
}

const void * get_const_function__RegulatoryElement__left_participants(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void * get_function__RegulatoryElement__left_participants(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void resize_function__RegulatoryElement__left_participants(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<std::string> *>(untyped_member);
  member->resize(size);
}

size_t size_function__RegulatoryElement__right_participants(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return member->size();
}

const void * get_const_function__RegulatoryElement__right_participants(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void * get_function__RegulatoryElement__right_participants(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void resize_function__RegulatoryElement__right_participants(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<std::string> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember RegulatoryElement_message_member_array[9] = {
  {
    "rule_name",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_debug_ros2_msgs::msg::RegulatoryElement, rule_name),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "participants",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_debug_ros2_msgs::msg::RegulatoryElement, participants),  // bytes offset in struct
    nullptr,  // default value
    size_function__RegulatoryElement__participants,  // size() function pointer
    get_const_function__RegulatoryElement__participants,  // get_const(index) function pointer
    get_function__RegulatoryElement__participants,  // get(index) function pointer
    resize_function__RegulatoryElement__participants  // resize(index) function pointer
  },
  {
    "unsupported_type",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_debug_ros2_msgs::msg::RegulatoryElement, unsupported_type),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "min_gap",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_debug_ros2_msgs::msg::RegulatoryElement, min_gap),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "speed_limit",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_debug_ros2_msgs::msg::RegulatoryElement, speed_limit),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "direction",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_debug_ros2_msgs::msg::RegulatoryElement, direction),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "left_participants",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_debug_ros2_msgs::msg::RegulatoryElement, left_participants),  // bytes offset in struct
    nullptr,  // default value
    size_function__RegulatoryElement__left_participants,  // size() function pointer
    get_const_function__RegulatoryElement__left_participants,  // get_const(index) function pointer
    get_function__RegulatoryElement__left_participants,  // get(index) function pointer
    resize_function__RegulatoryElement__left_participants  // resize(index) function pointer
  },
  {
    "right_participants",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_debug_ros2_msgs::msg::RegulatoryElement, right_participants),  // bytes offset in struct
    nullptr,  // default value
    size_function__RegulatoryElement__right_participants,  // size() function pointer
    get_const_function__RegulatoryElement__right_participants,  // get_const(index) function pointer
    get_function__RegulatoryElement__right_participants,  // get(index) function pointer
    resize_function__RegulatoryElement__right_participants  // resize(index) function pointer
  },
  {
    "reason",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_debug_ros2_msgs::msg::RegulatoryElement, reason),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers RegulatoryElement_message_members = {
  "carma_debug_ros2_msgs::msg",  // message namespace
  "RegulatoryElement",  // message name
  9,  // number of fields
  sizeof(carma_debug_ros2_msgs::msg::RegulatoryElement),
  RegulatoryElement_message_member_array,  // message members
  RegulatoryElement_init_function,  // function to initialize message memory (memory has to be allocated)
  RegulatoryElement_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t RegulatoryElement_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &RegulatoryElement_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace carma_debug_ros2_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<carma_debug_ros2_msgs::msg::RegulatoryElement>()
{
  return &::carma_debug_ros2_msgs::msg::rosidl_typesupport_introspection_cpp::RegulatoryElement_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, carma_debug_ros2_msgs, msg, RegulatoryElement)() {
  return &::carma_debug_ros2_msgs::msg::rosidl_typesupport_introspection_cpp::RegulatoryElement_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
