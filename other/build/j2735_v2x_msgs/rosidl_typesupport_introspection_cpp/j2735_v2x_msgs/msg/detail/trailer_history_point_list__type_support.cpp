// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from j2735_v2x_msgs:msg/TrailerHistoryPointList.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "j2735_v2x_msgs/msg/detail/trailer_history_point_list__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace j2735_v2x_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void TrailerHistoryPointList_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) j2735_v2x_msgs::msg::TrailerHistoryPointList(_init);
}

void TrailerHistoryPointList_fini_function(void * message_memory)
{
  auto typed_message = static_cast<j2735_v2x_msgs::msg::TrailerHistoryPointList *>(message_memory);
  typed_message->~TrailerHistoryPointList();
}

size_t size_function__TrailerHistoryPointList__trailer_history_points(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<j2735_v2x_msgs::msg::TrailerHistoryPoint> *>(untyped_member);
  return member->size();
}

const void * get_const_function__TrailerHistoryPointList__trailer_history_points(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<j2735_v2x_msgs::msg::TrailerHistoryPoint> *>(untyped_member);
  return &member[index];
}

void * get_function__TrailerHistoryPointList__trailer_history_points(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<j2735_v2x_msgs::msg::TrailerHistoryPoint> *>(untyped_member);
  return &member[index];
}

void resize_function__TrailerHistoryPointList__trailer_history_points(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<j2735_v2x_msgs::msg::TrailerHistoryPoint> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember TrailerHistoryPointList_message_member_array[1] = {
  {
    "trailer_history_points",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<j2735_v2x_msgs::msg::TrailerHistoryPoint>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(j2735_v2x_msgs::msg::TrailerHistoryPointList, trailer_history_points),  // bytes offset in struct
    nullptr,  // default value
    size_function__TrailerHistoryPointList__trailer_history_points,  // size() function pointer
    get_const_function__TrailerHistoryPointList__trailer_history_points,  // get_const(index) function pointer
    get_function__TrailerHistoryPointList__trailer_history_points,  // get(index) function pointer
    resize_function__TrailerHistoryPointList__trailer_history_points  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers TrailerHistoryPointList_message_members = {
  "j2735_v2x_msgs::msg",  // message namespace
  "TrailerHistoryPointList",  // message name
  1,  // number of fields
  sizeof(j2735_v2x_msgs::msg::TrailerHistoryPointList),
  TrailerHistoryPointList_message_member_array,  // message members
  TrailerHistoryPointList_init_function,  // function to initialize message memory (memory has to be allocated)
  TrailerHistoryPointList_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t TrailerHistoryPointList_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &TrailerHistoryPointList_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace j2735_v2x_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<j2735_v2x_msgs::msg::TrailerHistoryPointList>()
{
  return &::j2735_v2x_msgs::msg::rosidl_typesupport_introspection_cpp::TrailerHistoryPointList_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, j2735_v2x_msgs, msg, TrailerHistoryPointList)() {
  return &::j2735_v2x_msgs::msg::rosidl_typesupport_introspection_cpp::TrailerHistoryPointList_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
