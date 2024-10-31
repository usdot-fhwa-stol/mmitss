// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from carma_v2x_msgs:msg/MovementState.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "carma_v2x_msgs/msg/detail/movement_state__rosidl_typesupport_introspection_c.h"
#include "carma_v2x_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "carma_v2x_msgs/msg/detail/movement_state__functions.h"
#include "carma_v2x_msgs/msg/detail/movement_state__struct.h"


// Include directives for member types
// Member `movement_name`
#include "rosidl_runtime_c/string_functions.h"
// Member `movement_event_list`
#include "carma_v2x_msgs/msg/movement_event.h"
// Member `movement_event_list`
#include "carma_v2x_msgs/msg/detail/movement_event__rosidl_typesupport_introspection_c.h"
// Member `connection_maneuver_assist_list`
#include "j2735_v2x_msgs/msg/connection_maneuver_assist.h"
// Member `connection_maneuver_assist_list`
#include "j2735_v2x_msgs/msg/detail/connection_maneuver_assist__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void MovementState__rosidl_typesupport_introspection_c__MovementState_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  carma_v2x_msgs__msg__MovementState__init(message_memory);
}

void MovementState__rosidl_typesupport_introspection_c__MovementState_fini_function(void * message_memory)
{
  carma_v2x_msgs__msg__MovementState__fini(message_memory);
}

size_t MovementState__rosidl_typesupport_introspection_c__size_function__MovementEvent__movement_event_list(
  const void * untyped_member)
{
  const carma_v2x_msgs__msg__MovementEvent__Sequence * member =
    (const carma_v2x_msgs__msg__MovementEvent__Sequence *)(untyped_member);
  return member->size;
}

const void * MovementState__rosidl_typesupport_introspection_c__get_const_function__MovementEvent__movement_event_list(
  const void * untyped_member, size_t index)
{
  const carma_v2x_msgs__msg__MovementEvent__Sequence * member =
    (const carma_v2x_msgs__msg__MovementEvent__Sequence *)(untyped_member);
  return &member->data[index];
}

void * MovementState__rosidl_typesupport_introspection_c__get_function__MovementEvent__movement_event_list(
  void * untyped_member, size_t index)
{
  carma_v2x_msgs__msg__MovementEvent__Sequence * member =
    (carma_v2x_msgs__msg__MovementEvent__Sequence *)(untyped_member);
  return &member->data[index];
}

bool MovementState__rosidl_typesupport_introspection_c__resize_function__MovementEvent__movement_event_list(
  void * untyped_member, size_t size)
{
  carma_v2x_msgs__msg__MovementEvent__Sequence * member =
    (carma_v2x_msgs__msg__MovementEvent__Sequence *)(untyped_member);
  carma_v2x_msgs__msg__MovementEvent__Sequence__fini(member);
  return carma_v2x_msgs__msg__MovementEvent__Sequence__init(member, size);
}

size_t MovementState__rosidl_typesupport_introspection_c__size_function__ConnectionManeuverAssist__connection_maneuver_assist_list(
  const void * untyped_member)
{
  const j2735_v2x_msgs__msg__ConnectionManeuverAssist__Sequence * member =
    (const j2735_v2x_msgs__msg__ConnectionManeuverAssist__Sequence *)(untyped_member);
  return member->size;
}

const void * MovementState__rosidl_typesupport_introspection_c__get_const_function__ConnectionManeuverAssist__connection_maneuver_assist_list(
  const void * untyped_member, size_t index)
{
  const j2735_v2x_msgs__msg__ConnectionManeuverAssist__Sequence * member =
    (const j2735_v2x_msgs__msg__ConnectionManeuverAssist__Sequence *)(untyped_member);
  return &member->data[index];
}

void * MovementState__rosidl_typesupport_introspection_c__get_function__ConnectionManeuverAssist__connection_maneuver_assist_list(
  void * untyped_member, size_t index)
{
  j2735_v2x_msgs__msg__ConnectionManeuverAssist__Sequence * member =
    (j2735_v2x_msgs__msg__ConnectionManeuverAssist__Sequence *)(untyped_member);
  return &member->data[index];
}

bool MovementState__rosidl_typesupport_introspection_c__resize_function__ConnectionManeuverAssist__connection_maneuver_assist_list(
  void * untyped_member, size_t size)
{
  j2735_v2x_msgs__msg__ConnectionManeuverAssist__Sequence * member =
    (j2735_v2x_msgs__msg__ConnectionManeuverAssist__Sequence *)(untyped_member);
  j2735_v2x_msgs__msg__ConnectionManeuverAssist__Sequence__fini(member);
  return j2735_v2x_msgs__msg__ConnectionManeuverAssist__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember MovementState__rosidl_typesupport_introspection_c__MovementState_message_member_array[6] = {
  {
    "movement_name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_v2x_msgs__msg__MovementState, movement_name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "movement_name_exists",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_v2x_msgs__msg__MovementState, movement_name_exists),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "signal_group",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_v2x_msgs__msg__MovementState, signal_group),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "movement_event_list",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_v2x_msgs__msg__MovementState, movement_event_list),  // bytes offset in struct
    NULL,  // default value
    MovementState__rosidl_typesupport_introspection_c__size_function__MovementEvent__movement_event_list,  // size() function pointer
    MovementState__rosidl_typesupport_introspection_c__get_const_function__MovementEvent__movement_event_list,  // get_const(index) function pointer
    MovementState__rosidl_typesupport_introspection_c__get_function__MovementEvent__movement_event_list,  // get(index) function pointer
    MovementState__rosidl_typesupport_introspection_c__resize_function__MovementEvent__movement_event_list  // resize(index) function pointer
  },
  {
    "connection_maneuver_assist_list",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_v2x_msgs__msg__MovementState, connection_maneuver_assist_list),  // bytes offset in struct
    NULL,  // default value
    MovementState__rosidl_typesupport_introspection_c__size_function__ConnectionManeuverAssist__connection_maneuver_assist_list,  // size() function pointer
    MovementState__rosidl_typesupport_introspection_c__get_const_function__ConnectionManeuverAssist__connection_maneuver_assist_list,  // get_const(index) function pointer
    MovementState__rosidl_typesupport_introspection_c__get_function__ConnectionManeuverAssist__connection_maneuver_assist_list,  // get(index) function pointer
    MovementState__rosidl_typesupport_introspection_c__resize_function__ConnectionManeuverAssist__connection_maneuver_assist_list  // resize(index) function pointer
  },
  {
    "maneuver_assist_list_exists",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_v2x_msgs__msg__MovementState, maneuver_assist_list_exists),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers MovementState__rosidl_typesupport_introspection_c__MovementState_message_members = {
  "carma_v2x_msgs__msg",  // message namespace
  "MovementState",  // message name
  6,  // number of fields
  sizeof(carma_v2x_msgs__msg__MovementState),
  MovementState__rosidl_typesupport_introspection_c__MovementState_message_member_array,  // message members
  MovementState__rosidl_typesupport_introspection_c__MovementState_init_function,  // function to initialize message memory (memory has to be allocated)
  MovementState__rosidl_typesupport_introspection_c__MovementState_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t MovementState__rosidl_typesupport_introspection_c__MovementState_message_type_support_handle = {
  0,
  &MovementState__rosidl_typesupport_introspection_c__MovementState_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_carma_v2x_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, carma_v2x_msgs, msg, MovementState)() {
  MovementState__rosidl_typesupport_introspection_c__MovementState_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, carma_v2x_msgs, msg, MovementEvent)();
  MovementState__rosidl_typesupport_introspection_c__MovementState_message_member_array[4].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, j2735_v2x_msgs, msg, ConnectionManeuverAssist)();
  if (!MovementState__rosidl_typesupport_introspection_c__MovementState_message_type_support_handle.typesupport_identifier) {
    MovementState__rosidl_typesupport_introspection_c__MovementState_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &MovementState__rosidl_typesupport_introspection_c__MovementState_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
