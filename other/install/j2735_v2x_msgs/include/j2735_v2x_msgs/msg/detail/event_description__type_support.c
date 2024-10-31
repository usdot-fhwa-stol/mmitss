// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from j2735_v2x_msgs:msg/EventDescription.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "j2735_v2x_msgs/msg/detail/event_description__rosidl_typesupport_introspection_c.h"
#include "j2735_v2x_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "j2735_v2x_msgs/msg/detail/event_description__functions.h"
#include "j2735_v2x_msgs/msg/detail/event_description__struct.h"


// Include directives for member types
// Member `type_event`
// Member `description`
#include "j2735_v2x_msgs/msg/iti_scodes.h"
// Member `type_event`
// Member `description`
#include "j2735_v2x_msgs/msg/detail/iti_scodes__rosidl_typesupport_introspection_c.h"
// Member `priority`
#include "j2735_v2x_msgs/msg/priority.h"
// Member `priority`
#include "j2735_v2x_msgs/msg/detail/priority__rosidl_typesupport_introspection_c.h"
// Member `heading`
#include "j2735_v2x_msgs/msg/heading_slice.h"
// Member `heading`
#include "j2735_v2x_msgs/msg/detail/heading_slice__rosidl_typesupport_introspection_c.h"
// Member `extent`
#include "j2735_v2x_msgs/msg/extent.h"
// Member `extent`
#include "j2735_v2x_msgs/msg/detail/extent__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void EventDescription__rosidl_typesupport_introspection_c__EventDescription_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  j2735_v2x_msgs__msg__EventDescription__init(message_memory);
}

void EventDescription__rosidl_typesupport_introspection_c__EventDescription_fini_function(void * message_memory)
{
  j2735_v2x_msgs__msg__EventDescription__fini(message_memory);
}

size_t EventDescription__rosidl_typesupport_introspection_c__size_function__ITIScodes__description(
  const void * untyped_member)
{
  const j2735_v2x_msgs__msg__ITIScodes__Sequence * member =
    (const j2735_v2x_msgs__msg__ITIScodes__Sequence *)(untyped_member);
  return member->size;
}

const void * EventDescription__rosidl_typesupport_introspection_c__get_const_function__ITIScodes__description(
  const void * untyped_member, size_t index)
{
  const j2735_v2x_msgs__msg__ITIScodes__Sequence * member =
    (const j2735_v2x_msgs__msg__ITIScodes__Sequence *)(untyped_member);
  return &member->data[index];
}

void * EventDescription__rosidl_typesupport_introspection_c__get_function__ITIScodes__description(
  void * untyped_member, size_t index)
{
  j2735_v2x_msgs__msg__ITIScodes__Sequence * member =
    (j2735_v2x_msgs__msg__ITIScodes__Sequence *)(untyped_member);
  return &member->data[index];
}

bool EventDescription__rosidl_typesupport_introspection_c__resize_function__ITIScodes__description(
  void * untyped_member, size_t size)
{
  j2735_v2x_msgs__msg__ITIScodes__Sequence * member =
    (j2735_v2x_msgs__msg__ITIScodes__Sequence *)(untyped_member);
  j2735_v2x_msgs__msg__ITIScodes__Sequence__fini(member);
  return j2735_v2x_msgs__msg__ITIScodes__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember EventDescription__rosidl_typesupport_introspection_c__EventDescription_message_member_array[6] = {
  {
    "presence_vector",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(j2735_v2x_msgs__msg__EventDescription, presence_vector),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "type_event",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(j2735_v2x_msgs__msg__EventDescription, type_event),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "priority",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(j2735_v2x_msgs__msg__EventDescription, priority),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "heading",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(j2735_v2x_msgs__msg__EventDescription, heading),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "extent",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(j2735_v2x_msgs__msg__EventDescription, extent),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "description",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(j2735_v2x_msgs__msg__EventDescription, description),  // bytes offset in struct
    NULL,  // default value
    EventDescription__rosidl_typesupport_introspection_c__size_function__ITIScodes__description,  // size() function pointer
    EventDescription__rosidl_typesupport_introspection_c__get_const_function__ITIScodes__description,  // get_const(index) function pointer
    EventDescription__rosidl_typesupport_introspection_c__get_function__ITIScodes__description,  // get(index) function pointer
    EventDescription__rosidl_typesupport_introspection_c__resize_function__ITIScodes__description  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers EventDescription__rosidl_typesupport_introspection_c__EventDescription_message_members = {
  "j2735_v2x_msgs__msg",  // message namespace
  "EventDescription",  // message name
  6,  // number of fields
  sizeof(j2735_v2x_msgs__msg__EventDescription),
  EventDescription__rosidl_typesupport_introspection_c__EventDescription_message_member_array,  // message members
  EventDescription__rosidl_typesupport_introspection_c__EventDescription_init_function,  // function to initialize message memory (memory has to be allocated)
  EventDescription__rosidl_typesupport_introspection_c__EventDescription_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t EventDescription__rosidl_typesupport_introspection_c__EventDescription_message_type_support_handle = {
  0,
  &EventDescription__rosidl_typesupport_introspection_c__EventDescription_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_j2735_v2x_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, j2735_v2x_msgs, msg, EventDescription)() {
  EventDescription__rosidl_typesupport_introspection_c__EventDescription_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, j2735_v2x_msgs, msg, ITIScodes)();
  EventDescription__rosidl_typesupport_introspection_c__EventDescription_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, j2735_v2x_msgs, msg, Priority)();
  EventDescription__rosidl_typesupport_introspection_c__EventDescription_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, j2735_v2x_msgs, msg, HeadingSlice)();
  EventDescription__rosidl_typesupport_introspection_c__EventDescription_message_member_array[4].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, j2735_v2x_msgs, msg, Extent)();
  EventDescription__rosidl_typesupport_introspection_c__EventDescription_message_member_array[5].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, j2735_v2x_msgs, msg, ITIScodes)();
  if (!EventDescription__rosidl_typesupport_introspection_c__EventDescription_message_type_support_handle.typesupport_identifier) {
    EventDescription__rosidl_typesupport_introspection_c__EventDescription_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &EventDescription__rosidl_typesupport_introspection_c__EventDescription_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
