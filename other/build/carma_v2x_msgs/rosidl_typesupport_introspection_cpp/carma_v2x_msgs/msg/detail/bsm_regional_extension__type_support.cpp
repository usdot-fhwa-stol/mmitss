// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from carma_v2x_msgs:msg/BSMRegionalExtension.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "carma_v2x_msgs/msg/detail/bsm_regional_extension__struct.hpp"
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

void BSMRegionalExtension_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) carma_v2x_msgs::msg::BSMRegionalExtension(_init);
}

void BSMRegionalExtension_fini_function(void * message_memory)
{
  auto typed_message = static_cast<carma_v2x_msgs::msg::BSMRegionalExtension *>(message_memory);
  typed_message->~BSMRegionalExtension();
}

size_t size_function__BSMRegionalExtension__route_destination_points(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<carma_v2x_msgs::msg::Position3D> *>(untyped_member);
  return member->size();
}

const void * get_const_function__BSMRegionalExtension__route_destination_points(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<carma_v2x_msgs::msg::Position3D> *>(untyped_member);
  return &member[index];
}

void * get_function__BSMRegionalExtension__route_destination_points(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<carma_v2x_msgs::msg::Position3D> *>(untyped_member);
  return &member[index];
}

void resize_function__BSMRegionalExtension__route_destination_points(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<carma_v2x_msgs::msg::Position3D> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember BSMRegionalExtension_message_member_array[2] = {
  {
    "regional_extension_id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_v2x_msgs::msg::BSMRegionalExtension, regional_extension_id),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "route_destination_points",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<carma_v2x_msgs::msg::Position3D>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_v2x_msgs::msg::BSMRegionalExtension, route_destination_points),  // bytes offset in struct
    nullptr,  // default value
    size_function__BSMRegionalExtension__route_destination_points,  // size() function pointer
    get_const_function__BSMRegionalExtension__route_destination_points,  // get_const(index) function pointer
    get_function__BSMRegionalExtension__route_destination_points,  // get(index) function pointer
    resize_function__BSMRegionalExtension__route_destination_points  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers BSMRegionalExtension_message_members = {
  "carma_v2x_msgs::msg",  // message namespace
  "BSMRegionalExtension",  // message name
  2,  // number of fields
  sizeof(carma_v2x_msgs::msg::BSMRegionalExtension),
  BSMRegionalExtension_message_member_array,  // message members
  BSMRegionalExtension_init_function,  // function to initialize message memory (memory has to be allocated)
  BSMRegionalExtension_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t BSMRegionalExtension_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &BSMRegionalExtension_message_members,
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
get_message_type_support_handle<carma_v2x_msgs::msg::BSMRegionalExtension>()
{
  return &::carma_v2x_msgs::msg::rosidl_typesupport_introspection_cpp::BSMRegionalExtension_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, carma_v2x_msgs, msg, BSMRegionalExtension)() {
  return &::carma_v2x_msgs::msg::rosidl_typesupport_introspection_cpp::BSMRegionalExtension_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
