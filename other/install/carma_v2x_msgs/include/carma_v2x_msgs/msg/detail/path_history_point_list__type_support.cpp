// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from carma_v2x_msgs:msg/PathHistoryPointList.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "carma_v2x_msgs/msg/detail/path_history_point_list__struct.hpp"
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

void PathHistoryPointList_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) carma_v2x_msgs::msg::PathHistoryPointList(_init);
}

void PathHistoryPointList_fini_function(void * message_memory)
{
  auto typed_message = static_cast<carma_v2x_msgs::msg::PathHistoryPointList *>(message_memory);
  typed_message->~PathHistoryPointList();
}

size_t size_function__PathHistoryPointList__points(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<carma_v2x_msgs::msg::PathHistoryPoint> *>(untyped_member);
  return member->size();
}

const void * get_const_function__PathHistoryPointList__points(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<carma_v2x_msgs::msg::PathHistoryPoint> *>(untyped_member);
  return &member[index];
}

void * get_function__PathHistoryPointList__points(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<carma_v2x_msgs::msg::PathHistoryPoint> *>(untyped_member);
  return &member[index];
}

void resize_function__PathHistoryPointList__points(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<carma_v2x_msgs::msg::PathHistoryPoint> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember PathHistoryPointList_message_member_array[1] = {
  {
    "points",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<carma_v2x_msgs::msg::PathHistoryPoint>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_v2x_msgs::msg::PathHistoryPointList, points),  // bytes offset in struct
    nullptr,  // default value
    size_function__PathHistoryPointList__points,  // size() function pointer
    get_const_function__PathHistoryPointList__points,  // get_const(index) function pointer
    get_function__PathHistoryPointList__points,  // get(index) function pointer
    resize_function__PathHistoryPointList__points  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers PathHistoryPointList_message_members = {
  "carma_v2x_msgs::msg",  // message namespace
  "PathHistoryPointList",  // message name
  1,  // number of fields
  sizeof(carma_v2x_msgs::msg::PathHistoryPointList),
  PathHistoryPointList_message_member_array,  // message members
  PathHistoryPointList_init_function,  // function to initialize message memory (memory has to be allocated)
  PathHistoryPointList_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t PathHistoryPointList_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &PathHistoryPointList_message_members,
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
get_message_type_support_handle<carma_v2x_msgs::msg::PathHistoryPointList>()
{
  return &::carma_v2x_msgs::msg::rosidl_typesupport_introspection_cpp::PathHistoryPointList_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, carma_v2x_msgs, msg, PathHistoryPointList)() {
  return &::carma_v2x_msgs::msg::rosidl_typesupport_introspection_cpp::PathHistoryPointList_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
