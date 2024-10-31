// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from j3224_v2x_msgs:msg/DetectedVehicleData.idl
// generated code does not contain a copyright notice
#include "j3224_v2x_msgs/msg/detail/detected_vehicle_data__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "j3224_v2x_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "j3224_v2x_msgs/msg/detail/detected_vehicle_data__struct.h"
#include "j3224_v2x_msgs/msg/detail/detected_vehicle_data__functions.h"
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

#include "j2735_v2x_msgs/msg/detail/basic_vehicle_class__functions.h"  // vehicle_class
#include "j2735_v2x_msgs/msg/detail/exterior_lights__functions.h"  // lights
#include "j2735_v2x_msgs/msg/detail/vehicle_height__functions.h"  // height
#include "j2735_v2x_msgs/msg/detail/vehicle_size__functions.h"  // size
#include "j3224_v2x_msgs/msg/detail/angular_velocity__functions.h"  // veh_ang_vel
#include "j3224_v2x_msgs/msg/detail/angular_velocity_confidence__functions.h"  // veh_ang_vel_confidence
#include "j3224_v2x_msgs/msg/detail/attitude__functions.h"  // veh_attitude
#include "j3224_v2x_msgs/msg/detail/attitude_confidence__functions.h"  // veh_attitude_confidence
#include "j3224_v2x_msgs/msg/detail/classification_confidence__functions.h"  // class_conf
#include "j3224_v2x_msgs/msg/detail/vehicle_size_confidence__functions.h"  // vehicle_size_confidence

// forward declare type support functions
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_j3224_v2x_msgs
size_t get_serialized_size_j2735_v2x_msgs__msg__BasicVehicleClass(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_j3224_v2x_msgs
size_t max_serialized_size_j2735_v2x_msgs__msg__BasicVehicleClass(
  bool & full_bounded,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_j3224_v2x_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, BasicVehicleClass)();
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_j3224_v2x_msgs
size_t get_serialized_size_j2735_v2x_msgs__msg__ExteriorLights(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_j3224_v2x_msgs
size_t max_serialized_size_j2735_v2x_msgs__msg__ExteriorLights(
  bool & full_bounded,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_j3224_v2x_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, ExteriorLights)();
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_j3224_v2x_msgs
size_t get_serialized_size_j2735_v2x_msgs__msg__VehicleHeight(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_j3224_v2x_msgs
size_t max_serialized_size_j2735_v2x_msgs__msg__VehicleHeight(
  bool & full_bounded,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_j3224_v2x_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, VehicleHeight)();
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_j3224_v2x_msgs
size_t get_serialized_size_j2735_v2x_msgs__msg__VehicleSize(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_j3224_v2x_msgs
size_t max_serialized_size_j2735_v2x_msgs__msg__VehicleSize(
  bool & full_bounded,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_j3224_v2x_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, VehicleSize)();
size_t get_serialized_size_j3224_v2x_msgs__msg__AngularVelocity(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_j3224_v2x_msgs__msg__AngularVelocity(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, j3224_v2x_msgs, msg, AngularVelocity)();
size_t get_serialized_size_j3224_v2x_msgs__msg__AngularVelocityConfidence(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_j3224_v2x_msgs__msg__AngularVelocityConfidence(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, j3224_v2x_msgs, msg, AngularVelocityConfidence)();
size_t get_serialized_size_j3224_v2x_msgs__msg__Attitude(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_j3224_v2x_msgs__msg__Attitude(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, j3224_v2x_msgs, msg, Attitude)();
size_t get_serialized_size_j3224_v2x_msgs__msg__AttitudeConfidence(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_j3224_v2x_msgs__msg__AttitudeConfidence(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, j3224_v2x_msgs, msg, AttitudeConfidence)();
size_t get_serialized_size_j3224_v2x_msgs__msg__ClassificationConfidence(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_j3224_v2x_msgs__msg__ClassificationConfidence(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, j3224_v2x_msgs, msg, ClassificationConfidence)();
size_t get_serialized_size_j3224_v2x_msgs__msg__VehicleSizeConfidence(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_j3224_v2x_msgs__msg__VehicleSizeConfidence(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, j3224_v2x_msgs, msg, VehicleSizeConfidence)();


using _DetectedVehicleData__ros_msg_type = j3224_v2x_msgs__msg__DetectedVehicleData;

static bool _DetectedVehicleData__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _DetectedVehicleData__ros_msg_type * ros_message = static_cast<const _DetectedVehicleData__ros_msg_type *>(untyped_ros_message);
  // Field name: presence_vector
  {
    cdr << ros_message->presence_vector;
  }

  // Field name: lights
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, ExteriorLights
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->lights, cdr))
    {
      return false;
    }
  }

  // Field name: veh_attitude
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j3224_v2x_msgs, msg, Attitude
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->veh_attitude, cdr))
    {
      return false;
    }
  }

  // Field name: veh_attitude_confidence
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j3224_v2x_msgs, msg, AttitudeConfidence
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->veh_attitude_confidence, cdr))
    {
      return false;
    }
  }

  // Field name: veh_ang_vel
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j3224_v2x_msgs, msg, AngularVelocity
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->veh_ang_vel, cdr))
    {
      return false;
    }
  }

  // Field name: veh_ang_vel_confidence
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j3224_v2x_msgs, msg, AngularVelocityConfidence
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->veh_ang_vel_confidence, cdr))
    {
      return false;
    }
  }

  // Field name: size
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, VehicleSize
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->size, cdr))
    {
      return false;
    }
  }

  // Field name: height
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, VehicleHeight
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->height, cdr))
    {
      return false;
    }
  }

  // Field name: vehicle_size_confidence
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j3224_v2x_msgs, msg, VehicleSizeConfidence
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->vehicle_size_confidence, cdr))
    {
      return false;
    }
  }

  // Field name: vehicle_class
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, BasicVehicleClass
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->vehicle_class, cdr))
    {
      return false;
    }
  }

  // Field name: class_conf
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j3224_v2x_msgs, msg, ClassificationConfidence
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->class_conf, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _DetectedVehicleData__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _DetectedVehicleData__ros_msg_type * ros_message = static_cast<_DetectedVehicleData__ros_msg_type *>(untyped_ros_message);
  // Field name: presence_vector
  {
    cdr >> ros_message->presence_vector;
  }

  // Field name: lights
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, ExteriorLights
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->lights))
    {
      return false;
    }
  }

  // Field name: veh_attitude
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j3224_v2x_msgs, msg, Attitude
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->veh_attitude))
    {
      return false;
    }
  }

  // Field name: veh_attitude_confidence
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j3224_v2x_msgs, msg, AttitudeConfidence
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->veh_attitude_confidence))
    {
      return false;
    }
  }

  // Field name: veh_ang_vel
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j3224_v2x_msgs, msg, AngularVelocity
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->veh_ang_vel))
    {
      return false;
    }
  }

  // Field name: veh_ang_vel_confidence
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j3224_v2x_msgs, msg, AngularVelocityConfidence
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->veh_ang_vel_confidence))
    {
      return false;
    }
  }

  // Field name: size
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, VehicleSize
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->size))
    {
      return false;
    }
  }

  // Field name: height
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, VehicleHeight
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->height))
    {
      return false;
    }
  }

  // Field name: vehicle_size_confidence
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j3224_v2x_msgs, msg, VehicleSizeConfidence
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->vehicle_size_confidence))
    {
      return false;
    }
  }

  // Field name: vehicle_class
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, BasicVehicleClass
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->vehicle_class))
    {
      return false;
    }
  }

  // Field name: class_conf
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j3224_v2x_msgs, msg, ClassificationConfidence
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->class_conf))
    {
      return false;
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_j3224_v2x_msgs
size_t get_serialized_size_j3224_v2x_msgs__msg__DetectedVehicleData(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _DetectedVehicleData__ros_msg_type * ros_message = static_cast<const _DetectedVehicleData__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name presence_vector
  {
    size_t item_size = sizeof(ros_message->presence_vector);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name lights

  current_alignment += get_serialized_size_j2735_v2x_msgs__msg__ExteriorLights(
    &(ros_message->lights), current_alignment);
  // field.name veh_attitude

  current_alignment += get_serialized_size_j3224_v2x_msgs__msg__Attitude(
    &(ros_message->veh_attitude), current_alignment);
  // field.name veh_attitude_confidence

  current_alignment += get_serialized_size_j3224_v2x_msgs__msg__AttitudeConfidence(
    &(ros_message->veh_attitude_confidence), current_alignment);
  // field.name veh_ang_vel

  current_alignment += get_serialized_size_j3224_v2x_msgs__msg__AngularVelocity(
    &(ros_message->veh_ang_vel), current_alignment);
  // field.name veh_ang_vel_confidence

  current_alignment += get_serialized_size_j3224_v2x_msgs__msg__AngularVelocityConfidence(
    &(ros_message->veh_ang_vel_confidence), current_alignment);
  // field.name size

  current_alignment += get_serialized_size_j2735_v2x_msgs__msg__VehicleSize(
    &(ros_message->size), current_alignment);
  // field.name height

  current_alignment += get_serialized_size_j2735_v2x_msgs__msg__VehicleHeight(
    &(ros_message->height), current_alignment);
  // field.name vehicle_size_confidence

  current_alignment += get_serialized_size_j3224_v2x_msgs__msg__VehicleSizeConfidence(
    &(ros_message->vehicle_size_confidence), current_alignment);
  // field.name vehicle_class

  current_alignment += get_serialized_size_j2735_v2x_msgs__msg__BasicVehicleClass(
    &(ros_message->vehicle_class), current_alignment);
  // field.name class_conf

  current_alignment += get_serialized_size_j3224_v2x_msgs__msg__ClassificationConfidence(
    &(ros_message->class_conf), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _DetectedVehicleData__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_j3224_v2x_msgs__msg__DetectedVehicleData(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_j3224_v2x_msgs
size_t max_serialized_size_j3224_v2x_msgs__msg__DetectedVehicleData(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: presence_vector
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: lights
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_j2735_v2x_msgs__msg__ExteriorLights(
        full_bounded, current_alignment);
    }
  }
  // member: veh_attitude
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_j3224_v2x_msgs__msg__Attitude(
        full_bounded, current_alignment);
    }
  }
  // member: veh_attitude_confidence
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_j3224_v2x_msgs__msg__AttitudeConfidence(
        full_bounded, current_alignment);
    }
  }
  // member: veh_ang_vel
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_j3224_v2x_msgs__msg__AngularVelocity(
        full_bounded, current_alignment);
    }
  }
  // member: veh_ang_vel_confidence
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_j3224_v2x_msgs__msg__AngularVelocityConfidence(
        full_bounded, current_alignment);
    }
  }
  // member: size
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_j2735_v2x_msgs__msg__VehicleSize(
        full_bounded, current_alignment);
    }
  }
  // member: height
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_j2735_v2x_msgs__msg__VehicleHeight(
        full_bounded, current_alignment);
    }
  }
  // member: vehicle_size_confidence
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_j3224_v2x_msgs__msg__VehicleSizeConfidence(
        full_bounded, current_alignment);
    }
  }
  // member: vehicle_class
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_j2735_v2x_msgs__msg__BasicVehicleClass(
        full_bounded, current_alignment);
    }
  }
  // member: class_conf
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_j3224_v2x_msgs__msg__ClassificationConfidence(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _DetectedVehicleData__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_j3224_v2x_msgs__msg__DetectedVehicleData(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_DetectedVehicleData = {
  "j3224_v2x_msgs::msg",
  "DetectedVehicleData",
  _DetectedVehicleData__cdr_serialize,
  _DetectedVehicleData__cdr_deserialize,
  _DetectedVehicleData__get_serialized_size,
  _DetectedVehicleData__max_serialized_size
};

static rosidl_message_type_support_t _DetectedVehicleData__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_DetectedVehicleData,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, j3224_v2x_msgs, msg, DetectedVehicleData)() {
  return &_DetectedVehicleData__type_support;
}

#if defined(__cplusplus)
}
#endif
