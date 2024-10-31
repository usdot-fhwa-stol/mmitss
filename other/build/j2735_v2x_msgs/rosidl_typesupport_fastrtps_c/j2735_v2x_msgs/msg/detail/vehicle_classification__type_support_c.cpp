// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from j2735_v2x_msgs:msg/VehicleClassification.idl
// generated code does not contain a copyright notice
#include "j2735_v2x_msgs/msg/detail/vehicle_classification__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "j2735_v2x_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "j2735_v2x_msgs/msg/detail/vehicle_classification__struct.h"
#include "j2735_v2x_msgs/msg/detail/vehicle_classification__functions.h"
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

#include "j2735_v2x_msgs/msg/detail/basic_vehicle_class__functions.h"  // key_type
#include "j2735_v2x_msgs/msg/detail/basic_vehicle_role__functions.h"  // role
#include "j2735_v2x_msgs/msg/detail/fuel_type__functions.h"  // fuel_type
#include "j2735_v2x_msgs/msg/detail/itis_incident_response_equipment__functions.h"  // response_equip
#include "j2735_v2x_msgs/msg/detail/itis_responder_group_affected__functions.h"  // responder_type
#include "j2735_v2x_msgs/msg/detail/itis_vehicle_group_affected__functions.h"  // vehicle_type
#include "j2735_v2x_msgs/msg/detail/vehicle_type__functions.h"  // hpms_type

// forward declare type support functions
size_t get_serialized_size_j2735_v2x_msgs__msg__BasicVehicleClass(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_j2735_v2x_msgs__msg__BasicVehicleClass(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, BasicVehicleClass)();
size_t get_serialized_size_j2735_v2x_msgs__msg__BasicVehicleRole(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_j2735_v2x_msgs__msg__BasicVehicleRole(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, BasicVehicleRole)();
size_t get_serialized_size_j2735_v2x_msgs__msg__FuelType(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_j2735_v2x_msgs__msg__FuelType(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, FuelType)();
size_t get_serialized_size_j2735_v2x_msgs__msg__ITISIncidentResponseEquipment(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_j2735_v2x_msgs__msg__ITISIncidentResponseEquipment(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, ITISIncidentResponseEquipment)();
size_t get_serialized_size_j2735_v2x_msgs__msg__ITISResponderGroupAffected(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_j2735_v2x_msgs__msg__ITISResponderGroupAffected(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, ITISResponderGroupAffected)();
size_t get_serialized_size_j2735_v2x_msgs__msg__ITISVehicleGroupAffected(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_j2735_v2x_msgs__msg__ITISVehicleGroupAffected(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, ITISVehicleGroupAffected)();
size_t get_serialized_size_j2735_v2x_msgs__msg__VehicleType(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_j2735_v2x_msgs__msg__VehicleType(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, VehicleType)();


using _VehicleClassification__ros_msg_type = j2735_v2x_msgs__msg__VehicleClassification;

static bool _VehicleClassification__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _VehicleClassification__ros_msg_type * ros_message = static_cast<const _VehicleClassification__ros_msg_type *>(untyped_ros_message);
  // Field name: presence_vector
  {
    cdr << ros_message->presence_vector;
  }

  // Field name: key_type
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, BasicVehicleClass
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->key_type, cdr))
    {
      return false;
    }
  }

  // Field name: role
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, BasicVehicleRole
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->role, cdr))
    {
      return false;
    }
  }

  // Field name: iso3833
  {
    cdr << ros_message->iso3833;
  }

  // Field name: hpms_type
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, VehicleType
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->hpms_type, cdr))
    {
      return false;
    }
  }

  // Field name: vehicle_type
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, ITISVehicleGroupAffected
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->vehicle_type, cdr))
    {
      return false;
    }
  }

  // Field name: response_equip
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, ITISIncidentResponseEquipment
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->response_equip, cdr))
    {
      return false;
    }
  }

  // Field name: responder_type
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, ITISResponderGroupAffected
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->responder_type, cdr))
    {
      return false;
    }
  }

  // Field name: fuel_type
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, FuelType
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->fuel_type, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _VehicleClassification__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _VehicleClassification__ros_msg_type * ros_message = static_cast<_VehicleClassification__ros_msg_type *>(untyped_ros_message);
  // Field name: presence_vector
  {
    cdr >> ros_message->presence_vector;
  }

  // Field name: key_type
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, BasicVehicleClass
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->key_type))
    {
      return false;
    }
  }

  // Field name: role
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, BasicVehicleRole
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->role))
    {
      return false;
    }
  }

  // Field name: iso3833
  {
    cdr >> ros_message->iso3833;
  }

  // Field name: hpms_type
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, VehicleType
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->hpms_type))
    {
      return false;
    }
  }

  // Field name: vehicle_type
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, ITISVehicleGroupAffected
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->vehicle_type))
    {
      return false;
    }
  }

  // Field name: response_equip
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, ITISIncidentResponseEquipment
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->response_equip))
    {
      return false;
    }
  }

  // Field name: responder_type
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, ITISResponderGroupAffected
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->responder_type))
    {
      return false;
    }
  }

  // Field name: fuel_type
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, FuelType
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->fuel_type))
    {
      return false;
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_j2735_v2x_msgs
size_t get_serialized_size_j2735_v2x_msgs__msg__VehicleClassification(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _VehicleClassification__ros_msg_type * ros_message = static_cast<const _VehicleClassification__ros_msg_type *>(untyped_ros_message);
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
  // field.name key_type

  current_alignment += get_serialized_size_j2735_v2x_msgs__msg__BasicVehicleClass(
    &(ros_message->key_type), current_alignment);
  // field.name role

  current_alignment += get_serialized_size_j2735_v2x_msgs__msg__BasicVehicleRole(
    &(ros_message->role), current_alignment);
  // field.name iso3833
  {
    size_t item_size = sizeof(ros_message->iso3833);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name hpms_type

  current_alignment += get_serialized_size_j2735_v2x_msgs__msg__VehicleType(
    &(ros_message->hpms_type), current_alignment);
  // field.name vehicle_type

  current_alignment += get_serialized_size_j2735_v2x_msgs__msg__ITISVehicleGroupAffected(
    &(ros_message->vehicle_type), current_alignment);
  // field.name response_equip

  current_alignment += get_serialized_size_j2735_v2x_msgs__msg__ITISIncidentResponseEquipment(
    &(ros_message->response_equip), current_alignment);
  // field.name responder_type

  current_alignment += get_serialized_size_j2735_v2x_msgs__msg__ITISResponderGroupAffected(
    &(ros_message->responder_type), current_alignment);
  // field.name fuel_type

  current_alignment += get_serialized_size_j2735_v2x_msgs__msg__FuelType(
    &(ros_message->fuel_type), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _VehicleClassification__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_j2735_v2x_msgs__msg__VehicleClassification(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_j2735_v2x_msgs
size_t max_serialized_size_j2735_v2x_msgs__msg__VehicleClassification(
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
  // member: key_type
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_j2735_v2x_msgs__msg__BasicVehicleClass(
        full_bounded, current_alignment);
    }
  }
  // member: role
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_j2735_v2x_msgs__msg__BasicVehicleRole(
        full_bounded, current_alignment);
    }
  }
  // member: iso3833
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: hpms_type
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_j2735_v2x_msgs__msg__VehicleType(
        full_bounded, current_alignment);
    }
  }
  // member: vehicle_type
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_j2735_v2x_msgs__msg__ITISVehicleGroupAffected(
        full_bounded, current_alignment);
    }
  }
  // member: response_equip
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_j2735_v2x_msgs__msg__ITISIncidentResponseEquipment(
        full_bounded, current_alignment);
    }
  }
  // member: responder_type
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_j2735_v2x_msgs__msg__ITISResponderGroupAffected(
        full_bounded, current_alignment);
    }
  }
  // member: fuel_type
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_j2735_v2x_msgs__msg__FuelType(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _VehicleClassification__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_j2735_v2x_msgs__msg__VehicleClassification(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_VehicleClassification = {
  "j2735_v2x_msgs::msg",
  "VehicleClassification",
  _VehicleClassification__cdr_serialize,
  _VehicleClassification__cdr_deserialize,
  _VehicleClassification__get_serialized_size,
  _VehicleClassification__max_serialized_size
};

static rosidl_message_type_support_t _VehicleClassification__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_VehicleClassification,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, VehicleClassification)() {
  return &_VehicleClassification__type_support;
}

#if defined(__cplusplus)
}
#endif
