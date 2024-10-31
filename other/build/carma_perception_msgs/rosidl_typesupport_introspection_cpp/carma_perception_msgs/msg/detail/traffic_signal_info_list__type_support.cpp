// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from carma_perception_msgs:msg/TrafficSignalInfoList.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "carma_perception_msgs/msg/detail/traffic_signal_info_list__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace carma_perception_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void TrafficSignalInfoList_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) carma_perception_msgs::msg::TrafficSignalInfoList(_init);
}

void TrafficSignalInfoList_fini_function(void * message_memory)
{
  auto typed_message = static_cast<carma_perception_msgs::msg::TrafficSignalInfoList *>(message_memory);
  typed_message->~TrafficSignalInfoList();
}

size_t size_function__TrafficSignalInfoList__traffic_signal_info_list(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<carma_perception_msgs::msg::TrafficSignalInfo> *>(untyped_member);
  return member->size();
}

const void * get_const_function__TrafficSignalInfoList__traffic_signal_info_list(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<carma_perception_msgs::msg::TrafficSignalInfo> *>(untyped_member);
  return &member[index];
}

void * get_function__TrafficSignalInfoList__traffic_signal_info_list(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<carma_perception_msgs::msg::TrafficSignalInfo> *>(untyped_member);
  return &member[index];
}

void resize_function__TrafficSignalInfoList__traffic_signal_info_list(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<carma_perception_msgs::msg::TrafficSignalInfo> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember TrafficSignalInfoList_message_member_array[1] = {
  {
    "traffic_signal_info_list",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<carma_perception_msgs::msg::TrafficSignalInfo>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_perception_msgs::msg::TrafficSignalInfoList, traffic_signal_info_list),  // bytes offset in struct
    nullptr,  // default value
    size_function__TrafficSignalInfoList__traffic_signal_info_list,  // size() function pointer
    get_const_function__TrafficSignalInfoList__traffic_signal_info_list,  // get_const(index) function pointer
    get_function__TrafficSignalInfoList__traffic_signal_info_list,  // get(index) function pointer
    resize_function__TrafficSignalInfoList__traffic_signal_info_list  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers TrafficSignalInfoList_message_members = {
  "carma_perception_msgs::msg",  // message namespace
  "TrafficSignalInfoList",  // message name
  1,  // number of fields
  sizeof(carma_perception_msgs::msg::TrafficSignalInfoList),
  TrafficSignalInfoList_message_member_array,  // message members
  TrafficSignalInfoList_init_function,  // function to initialize message memory (memory has to be allocated)
  TrafficSignalInfoList_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t TrafficSignalInfoList_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &TrafficSignalInfoList_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace carma_perception_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<carma_perception_msgs::msg::TrafficSignalInfoList>()
{
  return &::carma_perception_msgs::msg::rosidl_typesupport_introspection_cpp::TrafficSignalInfoList_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, carma_perception_msgs, msg, TrafficSignalInfoList)() {
  return &::carma_perception_msgs::msg::rosidl_typesupport_introspection_cpp::TrafficSignalInfoList_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
