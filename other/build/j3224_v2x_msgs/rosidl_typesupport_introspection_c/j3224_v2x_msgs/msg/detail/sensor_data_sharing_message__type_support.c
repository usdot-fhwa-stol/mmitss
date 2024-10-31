// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from j3224_v2x_msgs:msg/SensorDataSharingMessage.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "j3224_v2x_msgs/msg/detail/sensor_data_sharing_message__rosidl_typesupport_introspection_c.h"
#include "j3224_v2x_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "j3224_v2x_msgs/msg/detail/sensor_data_sharing_message__functions.h"
#include "j3224_v2x_msgs/msg/detail/sensor_data_sharing_message__struct.h"


// Include directives for member types
// Member `msg_cnt`
#include "j2735_v2x_msgs/msg/msg_count.h"
// Member `msg_cnt`
#include "j2735_v2x_msgs/msg/detail/msg_count__rosidl_typesupport_introspection_c.h"
// Member `source_id`
#include "j2735_v2x_msgs/msg/temporary_id.h"
// Member `source_id`
#include "j2735_v2x_msgs/msg/detail/temporary_id__rosidl_typesupport_introspection_c.h"
// Member `equipment_type`
#include "j3224_v2x_msgs/msg/equipment_type.h"
// Member `equipment_type`
#include "j3224_v2x_msgs/msg/detail/equipment_type__rosidl_typesupport_introspection_c.h"
// Member `sdsm_time_stamp`
#include "j2735_v2x_msgs/msg/d_date_time.h"
// Member `sdsm_time_stamp`
#include "j2735_v2x_msgs/msg/detail/d_date_time__rosidl_typesupport_introspection_c.h"
// Member `ref_pos`
#include "j2735_v2x_msgs/msg/position3_d.h"
// Member `ref_pos`
#include "j2735_v2x_msgs/msg/detail/position3_d__rosidl_typesupport_introspection_c.h"
// Member `ref_pos_xy_conf`
#include "j2735_v2x_msgs/msg/positional_accuracy.h"
// Member `ref_pos_xy_conf`
#include "j2735_v2x_msgs/msg/detail/positional_accuracy__rosidl_typesupport_introspection_c.h"
// Member `objects`
#include "j3224_v2x_msgs/msg/detected_object_list.h"
// Member `objects`
#include "j3224_v2x_msgs/msg/detail/detected_object_list__rosidl_typesupport_introspection_c.h"
// Member `ref_pos_el_conf`
#include "j2735_v2x_msgs/msg/elevation_confidence.h"
// Member `ref_pos_el_conf`
#include "j2735_v2x_msgs/msg/detail/elevation_confidence__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void SensorDataSharingMessage__rosidl_typesupport_introspection_c__SensorDataSharingMessage_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  j3224_v2x_msgs__msg__SensorDataSharingMessage__init(message_memory);
}

void SensorDataSharingMessage__rosidl_typesupport_introspection_c__SensorDataSharingMessage_fini_function(void * message_memory)
{
  j3224_v2x_msgs__msg__SensorDataSharingMessage__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember SensorDataSharingMessage__rosidl_typesupport_introspection_c__SensorDataSharingMessage_message_member_array[9] = {
  {
    "msg_cnt",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(j3224_v2x_msgs__msg__SensorDataSharingMessage, msg_cnt),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "source_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(j3224_v2x_msgs__msg__SensorDataSharingMessage, source_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "equipment_type",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(j3224_v2x_msgs__msg__SensorDataSharingMessage, equipment_type),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "sdsm_time_stamp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(j3224_v2x_msgs__msg__SensorDataSharingMessage, sdsm_time_stamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "ref_pos",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(j3224_v2x_msgs__msg__SensorDataSharingMessage, ref_pos),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "ref_pos_xy_conf",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(j3224_v2x_msgs__msg__SensorDataSharingMessage, ref_pos_xy_conf),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "objects",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(j3224_v2x_msgs__msg__SensorDataSharingMessage, objects),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "presence_vector",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(j3224_v2x_msgs__msg__SensorDataSharingMessage, presence_vector),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "ref_pos_el_conf",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(j3224_v2x_msgs__msg__SensorDataSharingMessage, ref_pos_el_conf),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers SensorDataSharingMessage__rosidl_typesupport_introspection_c__SensorDataSharingMessage_message_members = {
  "j3224_v2x_msgs__msg",  // message namespace
  "SensorDataSharingMessage",  // message name
  9,  // number of fields
  sizeof(j3224_v2x_msgs__msg__SensorDataSharingMessage),
  SensorDataSharingMessage__rosidl_typesupport_introspection_c__SensorDataSharingMessage_message_member_array,  // message members
  SensorDataSharingMessage__rosidl_typesupport_introspection_c__SensorDataSharingMessage_init_function,  // function to initialize message memory (memory has to be allocated)
  SensorDataSharingMessage__rosidl_typesupport_introspection_c__SensorDataSharingMessage_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t SensorDataSharingMessage__rosidl_typesupport_introspection_c__SensorDataSharingMessage_message_type_support_handle = {
  0,
  &SensorDataSharingMessage__rosidl_typesupport_introspection_c__SensorDataSharingMessage_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_j3224_v2x_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, j3224_v2x_msgs, msg, SensorDataSharingMessage)() {
  SensorDataSharingMessage__rosidl_typesupport_introspection_c__SensorDataSharingMessage_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, j2735_v2x_msgs, msg, MsgCount)();
  SensorDataSharingMessage__rosidl_typesupport_introspection_c__SensorDataSharingMessage_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, j2735_v2x_msgs, msg, TemporaryID)();
  SensorDataSharingMessage__rosidl_typesupport_introspection_c__SensorDataSharingMessage_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, j3224_v2x_msgs, msg, EquipmentType)();
  SensorDataSharingMessage__rosidl_typesupport_introspection_c__SensorDataSharingMessage_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, j2735_v2x_msgs, msg, DDateTime)();
  SensorDataSharingMessage__rosidl_typesupport_introspection_c__SensorDataSharingMessage_message_member_array[4].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, j2735_v2x_msgs, msg, Position3D)();
  SensorDataSharingMessage__rosidl_typesupport_introspection_c__SensorDataSharingMessage_message_member_array[5].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, j2735_v2x_msgs, msg, PositionalAccuracy)();
  SensorDataSharingMessage__rosidl_typesupport_introspection_c__SensorDataSharingMessage_message_member_array[6].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, j3224_v2x_msgs, msg, DetectedObjectList)();
  SensorDataSharingMessage__rosidl_typesupport_introspection_c__SensorDataSharingMessage_message_member_array[8].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, j2735_v2x_msgs, msg, ElevationConfidence)();
  if (!SensorDataSharingMessage__rosidl_typesupport_introspection_c__SensorDataSharingMessage_message_type_support_handle.typesupport_identifier) {
    SensorDataSharingMessage__rosidl_typesupport_introspection_c__SensorDataSharingMessage_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &SensorDataSharingMessage__rosidl_typesupport_introspection_c__SensorDataSharingMessage_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
