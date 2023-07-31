// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from carma_debug_ros2_msgs:msg/MapUpdateReadable.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "carma_debug_ros2_msgs/msg/detail/map_update_readable__struct.hpp"
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

void MapUpdateReadable_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) carma_debug_ros2_msgs::msg::MapUpdateReadable(_init);
}

void MapUpdateReadable_fini_function(void * message_memory)
{
  auto typed_message = static_cast<carma_debug_ros2_msgs::msg::MapUpdateReadable *>(message_memory);
  typed_message->~MapUpdateReadable();
}

size_t size_function__MapUpdateReadable__update_list(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<carma_debug_ros2_msgs::msg::LaneletIdRegulatoryElementPair> *>(untyped_member);
  return member->size();
}

const void * get_const_function__MapUpdateReadable__update_list(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<carma_debug_ros2_msgs::msg::LaneletIdRegulatoryElementPair> *>(untyped_member);
  return &member[index];
}

void * get_function__MapUpdateReadable__update_list(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<carma_debug_ros2_msgs::msg::LaneletIdRegulatoryElementPair> *>(untyped_member);
  return &member[index];
}

void resize_function__MapUpdateReadable__update_list(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<carma_debug_ros2_msgs::msg::LaneletIdRegulatoryElementPair> *>(untyped_member);
  member->resize(size);
}

size_t size_function__MapUpdateReadable__remove_list(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<carma_debug_ros2_msgs::msg::LaneletIdRegulatoryElementPair> *>(untyped_member);
  return member->size();
}

const void * get_const_function__MapUpdateReadable__remove_list(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<carma_debug_ros2_msgs::msg::LaneletIdRegulatoryElementPair> *>(untyped_member);
  return &member[index];
}

void * get_function__MapUpdateReadable__remove_list(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<carma_debug_ros2_msgs::msg::LaneletIdRegulatoryElementPair> *>(untyped_member);
  return &member[index];
}

void resize_function__MapUpdateReadable__remove_list(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<carma_debug_ros2_msgs::msg::LaneletIdRegulatoryElementPair> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember MapUpdateReadable_message_member_array[9] = {
  {
    "header",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<std_msgs::msg::Header>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_debug_ros2_msgs::msg::MapUpdateReadable, header),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "format_version",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_debug_ros2_msgs::msg::MapUpdateReadable, format_version),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "map_version",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_debug_ros2_msgs::msg::MapUpdateReadable, map_version),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "route_id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_debug_ros2_msgs::msg::MapUpdateReadable, route_id),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "route_version",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_debug_ros2_msgs::msg::MapUpdateReadable, route_version),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "invalidates_route",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_debug_ros2_msgs::msg::MapUpdateReadable, invalidates_route),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "traffic_control_id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_debug_ros2_msgs::msg::MapUpdateReadable, traffic_control_id),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "update_list",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<carma_debug_ros2_msgs::msg::LaneletIdRegulatoryElementPair>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_debug_ros2_msgs::msg::MapUpdateReadable, update_list),  // bytes offset in struct
    nullptr,  // default value
    size_function__MapUpdateReadable__update_list,  // size() function pointer
    get_const_function__MapUpdateReadable__update_list,  // get_const(index) function pointer
    get_function__MapUpdateReadable__update_list,  // get(index) function pointer
    resize_function__MapUpdateReadable__update_list  // resize(index) function pointer
  },
  {
    "remove_list",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<carma_debug_ros2_msgs::msg::LaneletIdRegulatoryElementPair>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_debug_ros2_msgs::msg::MapUpdateReadable, remove_list),  // bytes offset in struct
    nullptr,  // default value
    size_function__MapUpdateReadable__remove_list,  // size() function pointer
    get_const_function__MapUpdateReadable__remove_list,  // get_const(index) function pointer
    get_function__MapUpdateReadable__remove_list,  // get(index) function pointer
    resize_function__MapUpdateReadable__remove_list  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers MapUpdateReadable_message_members = {
  "carma_debug_ros2_msgs::msg",  // message namespace
  "MapUpdateReadable",  // message name
  9,  // number of fields
  sizeof(carma_debug_ros2_msgs::msg::MapUpdateReadable),
  MapUpdateReadable_message_member_array,  // message members
  MapUpdateReadable_init_function,  // function to initialize message memory (memory has to be allocated)
  MapUpdateReadable_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t MapUpdateReadable_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &MapUpdateReadable_message_members,
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
get_message_type_support_handle<carma_debug_ros2_msgs::msg::MapUpdateReadable>()
{
  return &::carma_debug_ros2_msgs::msg::rosidl_typesupport_introspection_cpp::MapUpdateReadable_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, carma_debug_ros2_msgs, msg, MapUpdateReadable)() {
  return &::carma_debug_ros2_msgs::msg::rosidl_typesupport_introspection_cpp::MapUpdateReadable_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
