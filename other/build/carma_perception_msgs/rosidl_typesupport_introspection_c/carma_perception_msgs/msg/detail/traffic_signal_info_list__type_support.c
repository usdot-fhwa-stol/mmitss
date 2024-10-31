// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from carma_perception_msgs:msg/TrafficSignalInfoList.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "carma_perception_msgs/msg/detail/traffic_signal_info_list__rosidl_typesupport_introspection_c.h"
#include "carma_perception_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "carma_perception_msgs/msg/detail/traffic_signal_info_list__functions.h"
#include "carma_perception_msgs/msg/detail/traffic_signal_info_list__struct.h"


// Include directives for member types
// Member `traffic_signal_info_list`
#include "carma_perception_msgs/msg/traffic_signal_info.h"
// Member `traffic_signal_info_list`
#include "carma_perception_msgs/msg/detail/traffic_signal_info__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void TrafficSignalInfoList__rosidl_typesupport_introspection_c__TrafficSignalInfoList_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  carma_perception_msgs__msg__TrafficSignalInfoList__init(message_memory);
}

void TrafficSignalInfoList__rosidl_typesupport_introspection_c__TrafficSignalInfoList_fini_function(void * message_memory)
{
  carma_perception_msgs__msg__TrafficSignalInfoList__fini(message_memory);
}

size_t TrafficSignalInfoList__rosidl_typesupport_introspection_c__size_function__TrafficSignalInfo__traffic_signal_info_list(
  const void * untyped_member)
{
  const carma_perception_msgs__msg__TrafficSignalInfo__Sequence * member =
    (const carma_perception_msgs__msg__TrafficSignalInfo__Sequence *)(untyped_member);
  return member->size;
}

const void * TrafficSignalInfoList__rosidl_typesupport_introspection_c__get_const_function__TrafficSignalInfo__traffic_signal_info_list(
  const void * untyped_member, size_t index)
{
  const carma_perception_msgs__msg__TrafficSignalInfo__Sequence * member =
    (const carma_perception_msgs__msg__TrafficSignalInfo__Sequence *)(untyped_member);
  return &member->data[index];
}

void * TrafficSignalInfoList__rosidl_typesupport_introspection_c__get_function__TrafficSignalInfo__traffic_signal_info_list(
  void * untyped_member, size_t index)
{
  carma_perception_msgs__msg__TrafficSignalInfo__Sequence * member =
    (carma_perception_msgs__msg__TrafficSignalInfo__Sequence *)(untyped_member);
  return &member->data[index];
}

bool TrafficSignalInfoList__rosidl_typesupport_introspection_c__resize_function__TrafficSignalInfo__traffic_signal_info_list(
  void * untyped_member, size_t size)
{
  carma_perception_msgs__msg__TrafficSignalInfo__Sequence * member =
    (carma_perception_msgs__msg__TrafficSignalInfo__Sequence *)(untyped_member);
  carma_perception_msgs__msg__TrafficSignalInfo__Sequence__fini(member);
  return carma_perception_msgs__msg__TrafficSignalInfo__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember TrafficSignalInfoList__rosidl_typesupport_introspection_c__TrafficSignalInfoList_message_member_array[1] = {
  {
    "traffic_signal_info_list",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_perception_msgs__msg__TrafficSignalInfoList, traffic_signal_info_list),  // bytes offset in struct
    NULL,  // default value
    TrafficSignalInfoList__rosidl_typesupport_introspection_c__size_function__TrafficSignalInfo__traffic_signal_info_list,  // size() function pointer
    TrafficSignalInfoList__rosidl_typesupport_introspection_c__get_const_function__TrafficSignalInfo__traffic_signal_info_list,  // get_const(index) function pointer
    TrafficSignalInfoList__rosidl_typesupport_introspection_c__get_function__TrafficSignalInfo__traffic_signal_info_list,  // get(index) function pointer
    TrafficSignalInfoList__rosidl_typesupport_introspection_c__resize_function__TrafficSignalInfo__traffic_signal_info_list  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers TrafficSignalInfoList__rosidl_typesupport_introspection_c__TrafficSignalInfoList_message_members = {
  "carma_perception_msgs__msg",  // message namespace
  "TrafficSignalInfoList",  // message name
  1,  // number of fields
  sizeof(carma_perception_msgs__msg__TrafficSignalInfoList),
  TrafficSignalInfoList__rosidl_typesupport_introspection_c__TrafficSignalInfoList_message_member_array,  // message members
  TrafficSignalInfoList__rosidl_typesupport_introspection_c__TrafficSignalInfoList_init_function,  // function to initialize message memory (memory has to be allocated)
  TrafficSignalInfoList__rosidl_typesupport_introspection_c__TrafficSignalInfoList_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t TrafficSignalInfoList__rosidl_typesupport_introspection_c__TrafficSignalInfoList_message_type_support_handle = {
  0,
  &TrafficSignalInfoList__rosidl_typesupport_introspection_c__TrafficSignalInfoList_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_carma_perception_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, carma_perception_msgs, msg, TrafficSignalInfoList)() {
  TrafficSignalInfoList__rosidl_typesupport_introspection_c__TrafficSignalInfoList_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, carma_perception_msgs, msg, TrafficSignalInfo)();
  if (!TrafficSignalInfoList__rosidl_typesupport_introspection_c__TrafficSignalInfoList_message_type_support_handle.typesupport_identifier) {
    TrafficSignalInfoList__rosidl_typesupport_introspection_c__TrafficSignalInfoList_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &TrafficSignalInfoList__rosidl_typesupport_introspection_c__TrafficSignalInfoList_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
