// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from j3224_v2x_msgs:msg/DetectedObjectCommonData.idl
// generated code does not contain a copyright notice
#include "j3224_v2x_msgs/msg/detail/detected_object_common_data__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "j3224_v2x_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "j3224_v2x_msgs/msg/detail/detected_object_common_data__struct.h"
#include "j3224_v2x_msgs/msg/detail/detected_object_common_data__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "j2735_v2x_msgs/msg/detail/acceleration_confidence__functions.h"  // acc_cfd_x, acc_cfd_y, acc_cfd_z
#include "j2735_v2x_msgs/msg/detail/acceleration_set4_way__functions.h"  // accel_4_way
#include "j2735_v2x_msgs/msg/detail/heading__functions.h"  // heading
#include "j2735_v2x_msgs/msg/detail/heading_confidence__functions.h"  // heading_conf
#include "j2735_v2x_msgs/msg/detail/position_confidence_set__functions.h"  // pos_confidence
#include "j2735_v2x_msgs/msg/detail/speed__functions.h"  // speed, speed_z
#include "j2735_v2x_msgs/msg/detail/speed_confidence__functions.h"  // speed_confidence, speed_confidence_z
#include "j2735_v2x_msgs/msg/detail/time_confidence__functions.h"  // time_confidence
#include "j2735_v2x_msgs/msg/detail/yaw_rate_confidence__functions.h"  // acc_cfd_yaw
#include "j3224_v2x_msgs/msg/detail/classification_confidence__functions.h"  // obj_type_cfd
#include "j3224_v2x_msgs/msg/detail/measurement_time_offset__functions.h"  // measurement_time
#include "j3224_v2x_msgs/msg/detail/object_id__functions.h"  // detected_id
#include "j3224_v2x_msgs/msg/detail/object_type__functions.h"  // obj_type
#include "j3224_v2x_msgs/msg/detail/position_offset_xyz__functions.h"  // pos

// forward declare type support functions
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_j3224_v2x_msgs
size_t get_serialized_size_j2735_v2x_msgs__msg__AccelerationConfidence(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_j3224_v2x_msgs
size_t max_serialized_size_j2735_v2x_msgs__msg__AccelerationConfidence(
  bool & full_bounded,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_j3224_v2x_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, AccelerationConfidence)();
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_j3224_v2x_msgs
size_t get_serialized_size_j2735_v2x_msgs__msg__AccelerationSet4Way(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_j3224_v2x_msgs
size_t max_serialized_size_j2735_v2x_msgs__msg__AccelerationSet4Way(
  bool & full_bounded,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_j3224_v2x_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, AccelerationSet4Way)();
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_j3224_v2x_msgs
size_t get_serialized_size_j2735_v2x_msgs__msg__Heading(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_j3224_v2x_msgs
size_t max_serialized_size_j2735_v2x_msgs__msg__Heading(
  bool & full_bounded,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_j3224_v2x_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, Heading)();
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_j3224_v2x_msgs
size_t get_serialized_size_j2735_v2x_msgs__msg__HeadingConfidence(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_j3224_v2x_msgs
size_t max_serialized_size_j2735_v2x_msgs__msg__HeadingConfidence(
  bool & full_bounded,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_j3224_v2x_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, HeadingConfidence)();
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_j3224_v2x_msgs
size_t get_serialized_size_j2735_v2x_msgs__msg__PositionConfidenceSet(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_j3224_v2x_msgs
size_t max_serialized_size_j2735_v2x_msgs__msg__PositionConfidenceSet(
  bool & full_bounded,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_j3224_v2x_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, PositionConfidenceSet)();
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_j3224_v2x_msgs
size_t get_serialized_size_j2735_v2x_msgs__msg__Speed(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_j3224_v2x_msgs
size_t max_serialized_size_j2735_v2x_msgs__msg__Speed(
  bool & full_bounded,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_j3224_v2x_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, Speed)();
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_j3224_v2x_msgs
size_t get_serialized_size_j2735_v2x_msgs__msg__SpeedConfidence(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_j3224_v2x_msgs
size_t max_serialized_size_j2735_v2x_msgs__msg__SpeedConfidence(
  bool & full_bounded,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_j3224_v2x_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, SpeedConfidence)();
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_j3224_v2x_msgs
size_t get_serialized_size_j2735_v2x_msgs__msg__TimeConfidence(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_j3224_v2x_msgs
size_t max_serialized_size_j2735_v2x_msgs__msg__TimeConfidence(
  bool & full_bounded,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_j3224_v2x_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, TimeConfidence)();
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_j3224_v2x_msgs
size_t get_serialized_size_j2735_v2x_msgs__msg__YawRateConfidence(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_j3224_v2x_msgs
size_t max_serialized_size_j2735_v2x_msgs__msg__YawRateConfidence(
  bool & full_bounded,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_j3224_v2x_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, YawRateConfidence)();
size_t get_serialized_size_j3224_v2x_msgs__msg__ClassificationConfidence(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_j3224_v2x_msgs__msg__ClassificationConfidence(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, j3224_v2x_msgs, msg, ClassificationConfidence)();
size_t get_serialized_size_j3224_v2x_msgs__msg__MeasurementTimeOffset(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_j3224_v2x_msgs__msg__MeasurementTimeOffset(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, j3224_v2x_msgs, msg, MeasurementTimeOffset)();
size_t get_serialized_size_j3224_v2x_msgs__msg__ObjectID(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_j3224_v2x_msgs__msg__ObjectID(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, j3224_v2x_msgs, msg, ObjectID)();
size_t get_serialized_size_j3224_v2x_msgs__msg__ObjectType(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_j3224_v2x_msgs__msg__ObjectType(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, j3224_v2x_msgs, msg, ObjectType)();
size_t get_serialized_size_j3224_v2x_msgs__msg__PositionOffsetXYZ(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_j3224_v2x_msgs__msg__PositionOffsetXYZ(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, j3224_v2x_msgs, msg, PositionOffsetXYZ)();


using _DetectedObjectCommonData__ros_msg_type = j3224_v2x_msgs__msg__DetectedObjectCommonData;

static bool _DetectedObjectCommonData__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _DetectedObjectCommonData__ros_msg_type * ros_message = static_cast<const _DetectedObjectCommonData__ros_msg_type *>(untyped_ros_message);
  // Field name: obj_type
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j3224_v2x_msgs, msg, ObjectType
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->obj_type, cdr))
    {
      return false;
    }
  }

  // Field name: obj_type_cfd
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j3224_v2x_msgs, msg, ClassificationConfidence
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->obj_type_cfd, cdr))
    {
      return false;
    }
  }

  // Field name: detected_id
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j3224_v2x_msgs, msg, ObjectID
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->detected_id, cdr))
    {
      return false;
    }
  }

  // Field name: measurement_time
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j3224_v2x_msgs, msg, MeasurementTimeOffset
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->measurement_time, cdr))
    {
      return false;
    }
  }

  // Field name: time_confidence
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, TimeConfidence
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->time_confidence, cdr))
    {
      return false;
    }
  }

  // Field name: pos
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j3224_v2x_msgs, msg, PositionOffsetXYZ
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->pos, cdr))
    {
      return false;
    }
  }

  // Field name: pos_confidence
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, PositionConfidenceSet
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->pos_confidence, cdr))
    {
      return false;
    }
  }

  // Field name: speed
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, Speed
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->speed, cdr))
    {
      return false;
    }
  }

  // Field name: speed_confidence
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, SpeedConfidence
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->speed_confidence, cdr))
    {
      return false;
    }
  }

  // Field name: heading
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, Heading
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->heading, cdr))
    {
      return false;
    }
  }

  // Field name: heading_conf
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, HeadingConfidence
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->heading_conf, cdr))
    {
      return false;
    }
  }

  // Field name: presence_vector
  {
    cdr << ros_message->presence_vector;
  }

  // Field name: speed_z
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, Speed
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->speed_z, cdr))
    {
      return false;
    }
  }

  // Field name: speed_confidence_z
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, SpeedConfidence
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->speed_confidence_z, cdr))
    {
      return false;
    }
  }

  // Field name: accel_4_way
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, AccelerationSet4Way
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->accel_4_way, cdr))
    {
      return false;
    }
  }

  // Field name: acc_cfd_x
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, AccelerationConfidence
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->acc_cfd_x, cdr))
    {
      return false;
    }
  }

  // Field name: acc_cfd_y
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, AccelerationConfidence
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->acc_cfd_y, cdr))
    {
      return false;
    }
  }

  // Field name: acc_cfd_z
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, AccelerationConfidence
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->acc_cfd_z, cdr))
    {
      return false;
    }
  }

  // Field name: acc_cfd_yaw
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, YawRateConfidence
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->acc_cfd_yaw, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _DetectedObjectCommonData__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _DetectedObjectCommonData__ros_msg_type * ros_message = static_cast<_DetectedObjectCommonData__ros_msg_type *>(untyped_ros_message);
  // Field name: obj_type
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j3224_v2x_msgs, msg, ObjectType
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->obj_type))
    {
      return false;
    }
  }

  // Field name: obj_type_cfd
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j3224_v2x_msgs, msg, ClassificationConfidence
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->obj_type_cfd))
    {
      return false;
    }
  }

  // Field name: detected_id
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j3224_v2x_msgs, msg, ObjectID
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->detected_id))
    {
      return false;
    }
  }

  // Field name: measurement_time
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j3224_v2x_msgs, msg, MeasurementTimeOffset
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->measurement_time))
    {
      return false;
    }
  }

  // Field name: time_confidence
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, TimeConfidence
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->time_confidence))
    {
      return false;
    }
  }

  // Field name: pos
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j3224_v2x_msgs, msg, PositionOffsetXYZ
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->pos))
    {
      return false;
    }
  }

  // Field name: pos_confidence
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, PositionConfidenceSet
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->pos_confidence))
    {
      return false;
    }
  }

  // Field name: speed
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, Speed
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->speed))
    {
      return false;
    }
  }

  // Field name: speed_confidence
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, SpeedConfidence
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->speed_confidence))
    {
      return false;
    }
  }

  // Field name: heading
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, Heading
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->heading))
    {
      return false;
    }
  }

  // Field name: heading_conf
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, HeadingConfidence
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->heading_conf))
    {
      return false;
    }
  }

  // Field name: presence_vector
  {
    cdr >> ros_message->presence_vector;
  }

  // Field name: speed_z
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, Speed
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->speed_z))
    {
      return false;
    }
  }

  // Field name: speed_confidence_z
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, SpeedConfidence
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->speed_confidence_z))
    {
      return false;
    }
  }

  // Field name: accel_4_way
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, AccelerationSet4Way
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->accel_4_way))
    {
      return false;
    }
  }

  // Field name: acc_cfd_x
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, AccelerationConfidence
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->acc_cfd_x))
    {
      return false;
    }
  }

  // Field name: acc_cfd_y
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, AccelerationConfidence
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->acc_cfd_y))
    {
      return false;
    }
  }

  // Field name: acc_cfd_z
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, AccelerationConfidence
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->acc_cfd_z))
    {
      return false;
    }
  }

  // Field name: acc_cfd_yaw
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, YawRateConfidence
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->acc_cfd_yaw))
    {
      return false;
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_j3224_v2x_msgs
size_t get_serialized_size_j3224_v2x_msgs__msg__DetectedObjectCommonData(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _DetectedObjectCommonData__ros_msg_type * ros_message = static_cast<const _DetectedObjectCommonData__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name obj_type

  current_alignment += get_serialized_size_j3224_v2x_msgs__msg__ObjectType(
    &(ros_message->obj_type), current_alignment);
  // field.name obj_type_cfd

  current_alignment += get_serialized_size_j3224_v2x_msgs__msg__ClassificationConfidence(
    &(ros_message->obj_type_cfd), current_alignment);
  // field.name detected_id

  current_alignment += get_serialized_size_j3224_v2x_msgs__msg__ObjectID(
    &(ros_message->detected_id), current_alignment);
  // field.name measurement_time

  current_alignment += get_serialized_size_j3224_v2x_msgs__msg__MeasurementTimeOffset(
    &(ros_message->measurement_time), current_alignment);
  // field.name time_confidence

  current_alignment += get_serialized_size_j2735_v2x_msgs__msg__TimeConfidence(
    &(ros_message->time_confidence), current_alignment);
  // field.name pos

  current_alignment += get_serialized_size_j3224_v2x_msgs__msg__PositionOffsetXYZ(
    &(ros_message->pos), current_alignment);
  // field.name pos_confidence

  current_alignment += get_serialized_size_j2735_v2x_msgs__msg__PositionConfidenceSet(
    &(ros_message->pos_confidence), current_alignment);
  // field.name speed

  current_alignment += get_serialized_size_j2735_v2x_msgs__msg__Speed(
    &(ros_message->speed), current_alignment);
  // field.name speed_confidence

  current_alignment += get_serialized_size_j2735_v2x_msgs__msg__SpeedConfidence(
    &(ros_message->speed_confidence), current_alignment);
  // field.name heading

  current_alignment += get_serialized_size_j2735_v2x_msgs__msg__Heading(
    &(ros_message->heading), current_alignment);
  // field.name heading_conf

  current_alignment += get_serialized_size_j2735_v2x_msgs__msg__HeadingConfidence(
    &(ros_message->heading_conf), current_alignment);
  // field.name presence_vector
  {
    size_t item_size = sizeof(ros_message->presence_vector);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name speed_z

  current_alignment += get_serialized_size_j2735_v2x_msgs__msg__Speed(
    &(ros_message->speed_z), current_alignment);
  // field.name speed_confidence_z

  current_alignment += get_serialized_size_j2735_v2x_msgs__msg__SpeedConfidence(
    &(ros_message->speed_confidence_z), current_alignment);
  // field.name accel_4_way

  current_alignment += get_serialized_size_j2735_v2x_msgs__msg__AccelerationSet4Way(
    &(ros_message->accel_4_way), current_alignment);
  // field.name acc_cfd_x

  current_alignment += get_serialized_size_j2735_v2x_msgs__msg__AccelerationConfidence(
    &(ros_message->acc_cfd_x), current_alignment);
  // field.name acc_cfd_y

  current_alignment += get_serialized_size_j2735_v2x_msgs__msg__AccelerationConfidence(
    &(ros_message->acc_cfd_y), current_alignment);
  // field.name acc_cfd_z

  current_alignment += get_serialized_size_j2735_v2x_msgs__msg__AccelerationConfidence(
    &(ros_message->acc_cfd_z), current_alignment);
  // field.name acc_cfd_yaw

  current_alignment += get_serialized_size_j2735_v2x_msgs__msg__YawRateConfidence(
    &(ros_message->acc_cfd_yaw), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _DetectedObjectCommonData__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_j3224_v2x_msgs__msg__DetectedObjectCommonData(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_j3224_v2x_msgs
size_t max_serialized_size_j3224_v2x_msgs__msg__DetectedObjectCommonData(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: obj_type
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_j3224_v2x_msgs__msg__ObjectType(
        full_bounded, current_alignment);
    }
  }
  // member: obj_type_cfd
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_j3224_v2x_msgs__msg__ClassificationConfidence(
        full_bounded, current_alignment);
    }
  }
  // member: detected_id
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_j3224_v2x_msgs__msg__ObjectID(
        full_bounded, current_alignment);
    }
  }
  // member: measurement_time
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_j3224_v2x_msgs__msg__MeasurementTimeOffset(
        full_bounded, current_alignment);
    }
  }
  // member: time_confidence
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_j2735_v2x_msgs__msg__TimeConfidence(
        full_bounded, current_alignment);
    }
  }
  // member: pos
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_j3224_v2x_msgs__msg__PositionOffsetXYZ(
        full_bounded, current_alignment);
    }
  }
  // member: pos_confidence
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_j2735_v2x_msgs__msg__PositionConfidenceSet(
        full_bounded, current_alignment);
    }
  }
  // member: speed
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_j2735_v2x_msgs__msg__Speed(
        full_bounded, current_alignment);
    }
  }
  // member: speed_confidence
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_j2735_v2x_msgs__msg__SpeedConfidence(
        full_bounded, current_alignment);
    }
  }
  // member: heading
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_j2735_v2x_msgs__msg__Heading(
        full_bounded, current_alignment);
    }
  }
  // member: heading_conf
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_j2735_v2x_msgs__msg__HeadingConfidence(
        full_bounded, current_alignment);
    }
  }
  // member: presence_vector
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: speed_z
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_j2735_v2x_msgs__msg__Speed(
        full_bounded, current_alignment);
    }
  }
  // member: speed_confidence_z
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_j2735_v2x_msgs__msg__SpeedConfidence(
        full_bounded, current_alignment);
    }
  }
  // member: accel_4_way
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_j2735_v2x_msgs__msg__AccelerationSet4Way(
        full_bounded, current_alignment);
    }
  }
  // member: acc_cfd_x
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_j2735_v2x_msgs__msg__AccelerationConfidence(
        full_bounded, current_alignment);
    }
  }
  // member: acc_cfd_y
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_j2735_v2x_msgs__msg__AccelerationConfidence(
        full_bounded, current_alignment);
    }
  }
  // member: acc_cfd_z
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_j2735_v2x_msgs__msg__AccelerationConfidence(
        full_bounded, current_alignment);
    }
  }
  // member: acc_cfd_yaw
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_j2735_v2x_msgs__msg__YawRateConfidence(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _DetectedObjectCommonData__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_j3224_v2x_msgs__msg__DetectedObjectCommonData(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_DetectedObjectCommonData = {
  "j3224_v2x_msgs::msg",
  "DetectedObjectCommonData",
  _DetectedObjectCommonData__cdr_serialize,
  _DetectedObjectCommonData__cdr_deserialize,
  _DetectedObjectCommonData__get_serialized_size,
  _DetectedObjectCommonData__max_serialized_size
};

static rosidl_message_type_support_t _DetectedObjectCommonData__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_DetectedObjectCommonData,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, j3224_v2x_msgs, msg, DetectedObjectCommonData)() {
  return &_DetectedObjectCommonData__type_support;
}

#if defined(__cplusplus)
}
#endif
