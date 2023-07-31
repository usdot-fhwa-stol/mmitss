// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from carma_v2x_msgs:msg/DetectedObjectCommonData.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "carma_v2x_msgs/msg/detail/detected_object_common_data__rosidl_typesupport_introspection_c.h"
#include "carma_v2x_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "carma_v2x_msgs/msg/detail/detected_object_common_data__functions.h"
#include "carma_v2x_msgs/msg/detail/detected_object_common_data__struct.h"


// Include directives for member types
// Member `obj_type`
#include "j3224_v2x_msgs/msg/object_type.h"
// Member `obj_type`
#include "j3224_v2x_msgs/msg/detail/object_type__rosidl_typesupport_introspection_c.h"
// Member `obj_type_cfd`
#include "j3224_v2x_msgs/msg/classification_confidence.h"
// Member `obj_type_cfd`
#include "j3224_v2x_msgs/msg/detail/classification_confidence__rosidl_typesupport_introspection_c.h"
// Member `detected_id`
#include "j3224_v2x_msgs/msg/object_id.h"
// Member `detected_id`
#include "j3224_v2x_msgs/msg/detail/object_id__rosidl_typesupport_introspection_c.h"
// Member `measurement_time`
#include "carma_v2x_msgs/msg/measurement_time_offset.h"
// Member `measurement_time`
#include "carma_v2x_msgs/msg/detail/measurement_time_offset__rosidl_typesupport_introspection_c.h"
// Member `time_confidence`
#include "j2735_v2x_msgs/msg/time_confidence.h"
// Member `time_confidence`
#include "j2735_v2x_msgs/msg/detail/time_confidence__rosidl_typesupport_introspection_c.h"
// Member `pos`
#include "carma_v2x_msgs/msg/position_offset_xyz.h"
// Member `pos`
#include "carma_v2x_msgs/msg/detail/position_offset_xyz__rosidl_typesupport_introspection_c.h"
// Member `pos_confidence`
#include "j2735_v2x_msgs/msg/position_confidence_set.h"
// Member `pos_confidence`
#include "j2735_v2x_msgs/msg/detail/position_confidence_set__rosidl_typesupport_introspection_c.h"
// Member `speed`
// Member `speed_z`
#include "carma_v2x_msgs/msg/speed.h"
// Member `speed`
// Member `speed_z`
#include "carma_v2x_msgs/msg/detail/speed__rosidl_typesupport_introspection_c.h"
// Member `speed_confidence`
// Member `speed_confidence_z`
#include "j2735_v2x_msgs/msg/speed_confidence.h"
// Member `speed_confidence`
// Member `speed_confidence_z`
#include "j2735_v2x_msgs/msg/detail/speed_confidence__rosidl_typesupport_introspection_c.h"
// Member `heading`
#include "carma_v2x_msgs/msg/heading.h"
// Member `heading`
#include "carma_v2x_msgs/msg/detail/heading__rosidl_typesupport_introspection_c.h"
// Member `heading_conf`
#include "j2735_v2x_msgs/msg/heading_confidence.h"
// Member `heading_conf`
#include "j2735_v2x_msgs/msg/detail/heading_confidence__rosidl_typesupport_introspection_c.h"
// Member `accel_4_way`
#include "carma_v2x_msgs/msg/acceleration_set4_way.h"
// Member `accel_4_way`
#include "carma_v2x_msgs/msg/detail/acceleration_set4_way__rosidl_typesupport_introspection_c.h"
// Member `acc_cfd_x`
// Member `acc_cfd_y`
// Member `acc_cfd_z`
#include "j2735_v2x_msgs/msg/acceleration_confidence.h"
// Member `acc_cfd_x`
// Member `acc_cfd_y`
// Member `acc_cfd_z`
#include "j2735_v2x_msgs/msg/detail/acceleration_confidence__rosidl_typesupport_introspection_c.h"
// Member `acc_cfd_yaw`
#include "j2735_v2x_msgs/msg/yaw_rate_confidence.h"
// Member `acc_cfd_yaw`
#include "j2735_v2x_msgs/msg/detail/yaw_rate_confidence__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void DetectedObjectCommonData__rosidl_typesupport_introspection_c__DetectedObjectCommonData_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  carma_v2x_msgs__msg__DetectedObjectCommonData__init(message_memory);
}

void DetectedObjectCommonData__rosidl_typesupport_introspection_c__DetectedObjectCommonData_fini_function(void * message_memory)
{
  carma_v2x_msgs__msg__DetectedObjectCommonData__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember DetectedObjectCommonData__rosidl_typesupport_introspection_c__DetectedObjectCommonData_message_member_array[19] = {
  {
    "obj_type",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_v2x_msgs__msg__DetectedObjectCommonData, obj_type),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "obj_type_cfd",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_v2x_msgs__msg__DetectedObjectCommonData, obj_type_cfd),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "detected_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_v2x_msgs__msg__DetectedObjectCommonData, detected_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "measurement_time",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_v2x_msgs__msg__DetectedObjectCommonData, measurement_time),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "time_confidence",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_v2x_msgs__msg__DetectedObjectCommonData, time_confidence),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "pos",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_v2x_msgs__msg__DetectedObjectCommonData, pos),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "pos_confidence",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_v2x_msgs__msg__DetectedObjectCommonData, pos_confidence),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "speed",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_v2x_msgs__msg__DetectedObjectCommonData, speed),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "speed_confidence",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_v2x_msgs__msg__DetectedObjectCommonData, speed_confidence),  // bytes offset in struct
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
    offsetof(carma_v2x_msgs__msg__DetectedObjectCommonData, heading),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "heading_conf",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_v2x_msgs__msg__DetectedObjectCommonData, heading_conf),  // bytes offset in struct
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
    offsetof(carma_v2x_msgs__msg__DetectedObjectCommonData, presence_vector),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "speed_z",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_v2x_msgs__msg__DetectedObjectCommonData, speed_z),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "speed_confidence_z",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_v2x_msgs__msg__DetectedObjectCommonData, speed_confidence_z),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "accel_4_way",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_v2x_msgs__msg__DetectedObjectCommonData, accel_4_way),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "acc_cfd_x",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_v2x_msgs__msg__DetectedObjectCommonData, acc_cfd_x),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "acc_cfd_y",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_v2x_msgs__msg__DetectedObjectCommonData, acc_cfd_y),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "acc_cfd_z",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_v2x_msgs__msg__DetectedObjectCommonData, acc_cfd_z),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "acc_cfd_yaw",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_v2x_msgs__msg__DetectedObjectCommonData, acc_cfd_yaw),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers DetectedObjectCommonData__rosidl_typesupport_introspection_c__DetectedObjectCommonData_message_members = {
  "carma_v2x_msgs__msg",  // message namespace
  "DetectedObjectCommonData",  // message name
  19,  // number of fields
  sizeof(carma_v2x_msgs__msg__DetectedObjectCommonData),
  DetectedObjectCommonData__rosidl_typesupport_introspection_c__DetectedObjectCommonData_message_member_array,  // message members
  DetectedObjectCommonData__rosidl_typesupport_introspection_c__DetectedObjectCommonData_init_function,  // function to initialize message memory (memory has to be allocated)
  DetectedObjectCommonData__rosidl_typesupport_introspection_c__DetectedObjectCommonData_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t DetectedObjectCommonData__rosidl_typesupport_introspection_c__DetectedObjectCommonData_message_type_support_handle = {
  0,
  &DetectedObjectCommonData__rosidl_typesupport_introspection_c__DetectedObjectCommonData_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_carma_v2x_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, carma_v2x_msgs, msg, DetectedObjectCommonData)() {
  DetectedObjectCommonData__rosidl_typesupport_introspection_c__DetectedObjectCommonData_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, j3224_v2x_msgs, msg, ObjectType)();
  DetectedObjectCommonData__rosidl_typesupport_introspection_c__DetectedObjectCommonData_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, j3224_v2x_msgs, msg, ClassificationConfidence)();
  DetectedObjectCommonData__rosidl_typesupport_introspection_c__DetectedObjectCommonData_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, j3224_v2x_msgs, msg, ObjectID)();
  DetectedObjectCommonData__rosidl_typesupport_introspection_c__DetectedObjectCommonData_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, carma_v2x_msgs, msg, MeasurementTimeOffset)();
  DetectedObjectCommonData__rosidl_typesupport_introspection_c__DetectedObjectCommonData_message_member_array[4].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, j2735_v2x_msgs, msg, TimeConfidence)();
  DetectedObjectCommonData__rosidl_typesupport_introspection_c__DetectedObjectCommonData_message_member_array[5].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, carma_v2x_msgs, msg, PositionOffsetXYZ)();
  DetectedObjectCommonData__rosidl_typesupport_introspection_c__DetectedObjectCommonData_message_member_array[6].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, j2735_v2x_msgs, msg, PositionConfidenceSet)();
  DetectedObjectCommonData__rosidl_typesupport_introspection_c__DetectedObjectCommonData_message_member_array[7].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, carma_v2x_msgs, msg, Speed)();
  DetectedObjectCommonData__rosidl_typesupport_introspection_c__DetectedObjectCommonData_message_member_array[8].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, j2735_v2x_msgs, msg, SpeedConfidence)();
  DetectedObjectCommonData__rosidl_typesupport_introspection_c__DetectedObjectCommonData_message_member_array[9].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, carma_v2x_msgs, msg, Heading)();
  DetectedObjectCommonData__rosidl_typesupport_introspection_c__DetectedObjectCommonData_message_member_array[10].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, j2735_v2x_msgs, msg, HeadingConfidence)();
  DetectedObjectCommonData__rosidl_typesupport_introspection_c__DetectedObjectCommonData_message_member_array[12].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, carma_v2x_msgs, msg, Speed)();
  DetectedObjectCommonData__rosidl_typesupport_introspection_c__DetectedObjectCommonData_message_member_array[13].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, j2735_v2x_msgs, msg, SpeedConfidence)();
  DetectedObjectCommonData__rosidl_typesupport_introspection_c__DetectedObjectCommonData_message_member_array[14].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, carma_v2x_msgs, msg, AccelerationSet4Way)();
  DetectedObjectCommonData__rosidl_typesupport_introspection_c__DetectedObjectCommonData_message_member_array[15].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, j2735_v2x_msgs, msg, AccelerationConfidence)();
  DetectedObjectCommonData__rosidl_typesupport_introspection_c__DetectedObjectCommonData_message_member_array[16].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, j2735_v2x_msgs, msg, AccelerationConfidence)();
  DetectedObjectCommonData__rosidl_typesupport_introspection_c__DetectedObjectCommonData_message_member_array[17].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, j2735_v2x_msgs, msg, AccelerationConfidence)();
  DetectedObjectCommonData__rosidl_typesupport_introspection_c__DetectedObjectCommonData_message_member_array[18].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, j2735_v2x_msgs, msg, YawRateConfidence)();
  if (!DetectedObjectCommonData__rosidl_typesupport_introspection_c__DetectedObjectCommonData_message_type_support_handle.typesupport_identifier) {
    DetectedObjectCommonData__rosidl_typesupport_introspection_c__DetectedObjectCommonData_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &DetectedObjectCommonData__rosidl_typesupport_introspection_c__DetectedObjectCommonData_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
