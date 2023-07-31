// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from carma_v2x_msgs:msg/SupplementalVehicleExtensions.idl
// generated code does not contain a copyright notice
#include "carma_v2x_msgs/msg/detail/supplemental_vehicle_extensions__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "carma_v2x_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "carma_v2x_msgs/msg/detail/supplemental_vehicle_extensions__struct.h"
#include "carma_v2x_msgs/msg/detail/supplemental_vehicle_extensions__functions.h"
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

#include "carma_v2x_msgs/msg/detail/gross_speed__functions.h"  // speed_profile
#include "carma_v2x_msgs/msg/detail/obstacle_detection__functions.h"  // obstacle
#include "carma_v2x_msgs/msg/detail/rtcm_package__functions.h"  // the_rtcm
#include "carma_v2x_msgs/msg/detail/vehicle_data__functions.h"  // vehicle_data
#include "carma_v2x_msgs/msg/detail/weather_probe__functions.h"  // weather_probe
#include "carma_v2x_msgs/msg/detail/weather_report__functions.h"  // weather_report
#include "j2735_v2x_msgs/msg/detail/basic_vehicle_class__functions.h"  // classification
#include "j2735_v2x_msgs/msg/detail/disabled_vehicle__functions.h"  // status
#include "j2735_v2x_msgs/msg/detail/vehicle_classification__functions.h"  // class_details

// forward declare type support functions
size_t get_serialized_size_carma_v2x_msgs__msg__GrossSpeed(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_carma_v2x_msgs__msg__GrossSpeed(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, carma_v2x_msgs, msg, GrossSpeed)();
size_t get_serialized_size_carma_v2x_msgs__msg__ObstacleDetection(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_carma_v2x_msgs__msg__ObstacleDetection(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, carma_v2x_msgs, msg, ObstacleDetection)();
size_t get_serialized_size_carma_v2x_msgs__msg__RTCMPackage(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_carma_v2x_msgs__msg__RTCMPackage(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, carma_v2x_msgs, msg, RTCMPackage)();
size_t get_serialized_size_carma_v2x_msgs__msg__VehicleData(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_carma_v2x_msgs__msg__VehicleData(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, carma_v2x_msgs, msg, VehicleData)();
size_t get_serialized_size_carma_v2x_msgs__msg__WeatherProbe(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_carma_v2x_msgs__msg__WeatherProbe(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, carma_v2x_msgs, msg, WeatherProbe)();
size_t get_serialized_size_carma_v2x_msgs__msg__WeatherReport(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_carma_v2x_msgs__msg__WeatherReport(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, carma_v2x_msgs, msg, WeatherReport)();
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_carma_v2x_msgs
size_t get_serialized_size_j2735_v2x_msgs__msg__BasicVehicleClass(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_carma_v2x_msgs
size_t max_serialized_size_j2735_v2x_msgs__msg__BasicVehicleClass(
  bool & full_bounded,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_carma_v2x_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, BasicVehicleClass)();
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_carma_v2x_msgs
size_t get_serialized_size_j2735_v2x_msgs__msg__DisabledVehicle(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_carma_v2x_msgs
size_t max_serialized_size_j2735_v2x_msgs__msg__DisabledVehicle(
  bool & full_bounded,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_carma_v2x_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, DisabledVehicle)();
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_carma_v2x_msgs
size_t get_serialized_size_j2735_v2x_msgs__msg__VehicleClassification(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_carma_v2x_msgs
size_t max_serialized_size_j2735_v2x_msgs__msg__VehicleClassification(
  bool & full_bounded,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_carma_v2x_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, VehicleClassification)();


using _SupplementalVehicleExtensions__ros_msg_type = carma_v2x_msgs__msg__SupplementalVehicleExtensions;

static bool _SupplementalVehicleExtensions__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _SupplementalVehicleExtensions__ros_msg_type * ros_message = static_cast<const _SupplementalVehicleExtensions__ros_msg_type *>(untyped_ros_message);
  // Field name: presence_vector
  {
    cdr << ros_message->presence_vector;
  }

  // Field name: classification
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, BasicVehicleClass
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->classification, cdr))
    {
      return false;
    }
  }

  // Field name: class_details
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, VehicleClassification
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->class_details, cdr))
    {
      return false;
    }
  }

  // Field name: vehicle_data
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, carma_v2x_msgs, msg, VehicleData
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->vehicle_data, cdr))
    {
      return false;
    }
  }

  // Field name: weather_report
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, carma_v2x_msgs, msg, WeatherReport
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->weather_report, cdr))
    {
      return false;
    }
  }

  // Field name: weather_probe
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, carma_v2x_msgs, msg, WeatherProbe
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->weather_probe, cdr))
    {
      return false;
    }
  }

  // Field name: obstacle
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, carma_v2x_msgs, msg, ObstacleDetection
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->obstacle, cdr))
    {
      return false;
    }
  }

  // Field name: status
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, DisabledVehicle
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->status, cdr))
    {
      return false;
    }
  }

  // Field name: speed_profile
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, carma_v2x_msgs, msg, GrossSpeed
      )()->data);
    size_t size = ros_message->speed_profile.size;
    auto array_ptr = ros_message->speed_profile.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  // Field name: the_rtcm
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, carma_v2x_msgs, msg, RTCMPackage
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->the_rtcm, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _SupplementalVehicleExtensions__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _SupplementalVehicleExtensions__ros_msg_type * ros_message = static_cast<_SupplementalVehicleExtensions__ros_msg_type *>(untyped_ros_message);
  // Field name: presence_vector
  {
    cdr >> ros_message->presence_vector;
  }

  // Field name: classification
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, BasicVehicleClass
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->classification))
    {
      return false;
    }
  }

  // Field name: class_details
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, VehicleClassification
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->class_details))
    {
      return false;
    }
  }

  // Field name: vehicle_data
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, carma_v2x_msgs, msg, VehicleData
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->vehicle_data))
    {
      return false;
    }
  }

  // Field name: weather_report
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, carma_v2x_msgs, msg, WeatherReport
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->weather_report))
    {
      return false;
    }
  }

  // Field name: weather_probe
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, carma_v2x_msgs, msg, WeatherProbe
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->weather_probe))
    {
      return false;
    }
  }

  // Field name: obstacle
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, carma_v2x_msgs, msg, ObstacleDetection
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->obstacle))
    {
      return false;
    }
  }

  // Field name: status
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, DisabledVehicle
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->status))
    {
      return false;
    }
  }

  // Field name: speed_profile
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, carma_v2x_msgs, msg, GrossSpeed
      )()->data);
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->speed_profile.data) {
      carma_v2x_msgs__msg__GrossSpeed__Sequence__fini(&ros_message->speed_profile);
    }
    if (!carma_v2x_msgs__msg__GrossSpeed__Sequence__init(&ros_message->speed_profile, size)) {
      return "failed to create array for field 'speed_profile'";
    }
    auto array_ptr = ros_message->speed_profile.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  // Field name: the_rtcm
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, carma_v2x_msgs, msg, RTCMPackage
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->the_rtcm))
    {
      return false;
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_carma_v2x_msgs
size_t get_serialized_size_carma_v2x_msgs__msg__SupplementalVehicleExtensions(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _SupplementalVehicleExtensions__ros_msg_type * ros_message = static_cast<const _SupplementalVehicleExtensions__ros_msg_type *>(untyped_ros_message);
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
  // field.name classification

  current_alignment += get_serialized_size_j2735_v2x_msgs__msg__BasicVehicleClass(
    &(ros_message->classification), current_alignment);
  // field.name class_details

  current_alignment += get_serialized_size_j2735_v2x_msgs__msg__VehicleClassification(
    &(ros_message->class_details), current_alignment);
  // field.name vehicle_data

  current_alignment += get_serialized_size_carma_v2x_msgs__msg__VehicleData(
    &(ros_message->vehicle_data), current_alignment);
  // field.name weather_report

  current_alignment += get_serialized_size_carma_v2x_msgs__msg__WeatherReport(
    &(ros_message->weather_report), current_alignment);
  // field.name weather_probe

  current_alignment += get_serialized_size_carma_v2x_msgs__msg__WeatherProbe(
    &(ros_message->weather_probe), current_alignment);
  // field.name obstacle

  current_alignment += get_serialized_size_carma_v2x_msgs__msg__ObstacleDetection(
    &(ros_message->obstacle), current_alignment);
  // field.name status

  current_alignment += get_serialized_size_j2735_v2x_msgs__msg__DisabledVehicle(
    &(ros_message->status), current_alignment);
  // field.name speed_profile
  {
    size_t array_size = ros_message->speed_profile.size;
    auto array_ptr = ros_message->speed_profile.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_carma_v2x_msgs__msg__GrossSpeed(
        &array_ptr[index], current_alignment);
    }
  }
  // field.name the_rtcm

  current_alignment += get_serialized_size_carma_v2x_msgs__msg__RTCMPackage(
    &(ros_message->the_rtcm), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _SupplementalVehicleExtensions__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_carma_v2x_msgs__msg__SupplementalVehicleExtensions(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_carma_v2x_msgs
size_t max_serialized_size_carma_v2x_msgs__msg__SupplementalVehicleExtensions(
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
  // member: classification
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_j2735_v2x_msgs__msg__BasicVehicleClass(
        full_bounded, current_alignment);
    }
  }
  // member: class_details
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_j2735_v2x_msgs__msg__VehicleClassification(
        full_bounded, current_alignment);
    }
  }
  // member: vehicle_data
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_carma_v2x_msgs__msg__VehicleData(
        full_bounded, current_alignment);
    }
  }
  // member: weather_report
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_carma_v2x_msgs__msg__WeatherReport(
        full_bounded, current_alignment);
    }
  }
  // member: weather_probe
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_carma_v2x_msgs__msg__WeatherProbe(
        full_bounded, current_alignment);
    }
  }
  // member: obstacle
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_carma_v2x_msgs__msg__ObstacleDetection(
        full_bounded, current_alignment);
    }
  }
  // member: status
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_j2735_v2x_msgs__msg__DisabledVehicle(
        full_bounded, current_alignment);
    }
  }
  // member: speed_profile
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_carma_v2x_msgs__msg__GrossSpeed(
        full_bounded, current_alignment);
    }
  }
  // member: the_rtcm
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_carma_v2x_msgs__msg__RTCMPackage(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _SupplementalVehicleExtensions__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_carma_v2x_msgs__msg__SupplementalVehicleExtensions(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_SupplementalVehicleExtensions = {
  "carma_v2x_msgs::msg",
  "SupplementalVehicleExtensions",
  _SupplementalVehicleExtensions__cdr_serialize,
  _SupplementalVehicleExtensions__cdr_deserialize,
  _SupplementalVehicleExtensions__get_serialized_size,
  _SupplementalVehicleExtensions__max_serialized_size
};

static rosidl_message_type_support_t _SupplementalVehicleExtensions__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_SupplementalVehicleExtensions,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, carma_v2x_msgs, msg, SupplementalVehicleExtensions)() {
  return &_SupplementalVehicleExtensions__type_support;
}

#if defined(__cplusplus)
}
#endif
