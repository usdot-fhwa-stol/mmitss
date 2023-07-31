// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from carma_v2x_msgs:msg/GenericLane.idl
// generated code does not contain a copyright notice
#include "carma_v2x_msgs/msg/detail/generic_lane__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "carma_v2x_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "carma_v2x_msgs/msg/detail/generic_lane__struct.h"
#include "carma_v2x_msgs/msg/detail/generic_lane__functions.h"
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

#include "carma_v2x_msgs/msg/detail/node_list_xy__functions.h"  // node_list
#include "j2735_v2x_msgs/msg/detail/allowed_maneuvers__functions.h"  // maneuvers
#include "j2735_v2x_msgs/msg/detail/connection__functions.h"  // connect_to_list
#include "j2735_v2x_msgs/msg/detail/lane_attributes__functions.h"  // lane_attributes
#include "rosidl_runtime_c/primitives_sequence.h"  // overlay_lane_list
#include "rosidl_runtime_c/primitives_sequence_functions.h"  // overlay_lane_list
#include "rosidl_runtime_c/string.h"  // name
#include "rosidl_runtime_c/string_functions.h"  // name

// forward declare type support functions
size_t get_serialized_size_carma_v2x_msgs__msg__NodeListXY(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_carma_v2x_msgs__msg__NodeListXY(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, carma_v2x_msgs, msg, NodeListXY)();
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_carma_v2x_msgs
size_t get_serialized_size_j2735_v2x_msgs__msg__AllowedManeuvers(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_carma_v2x_msgs
size_t max_serialized_size_j2735_v2x_msgs__msg__AllowedManeuvers(
  bool & full_bounded,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_carma_v2x_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, AllowedManeuvers)();
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_carma_v2x_msgs
size_t get_serialized_size_j2735_v2x_msgs__msg__Connection(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_carma_v2x_msgs
size_t max_serialized_size_j2735_v2x_msgs__msg__Connection(
  bool & full_bounded,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_carma_v2x_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, Connection)();
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_carma_v2x_msgs
size_t get_serialized_size_j2735_v2x_msgs__msg__LaneAttributes(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_carma_v2x_msgs
size_t max_serialized_size_j2735_v2x_msgs__msg__LaneAttributes(
  bool & full_bounded,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_carma_v2x_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, LaneAttributes)();


using _GenericLane__ros_msg_type = carma_v2x_msgs__msg__GenericLane;

static bool _GenericLane__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _GenericLane__ros_msg_type * ros_message = static_cast<const _GenericLane__ros_msg_type *>(untyped_ros_message);
  // Field name: lane_id
  {
    cdr << ros_message->lane_id;
  }

  // Field name: name
  {
    const rosidl_runtime_c__String * str = &ros_message->name;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: name_exists
  {
    cdr << (ros_message->name_exists ? true : false);
  }

  // Field name: ingress_approach
  {
    cdr << ros_message->ingress_approach;
  }

  // Field name: ingress_approach_exists
  {
    cdr << (ros_message->ingress_approach_exists ? true : false);
  }

  // Field name: egress_approach
  {
    cdr << ros_message->egress_approach;
  }

  // Field name: egress_approach_exists
  {
    cdr << (ros_message->egress_approach_exists ? true : false);
  }

  // Field name: lane_attributes
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, LaneAttributes
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->lane_attributes, cdr))
    {
      return false;
    }
  }

  // Field name: maneuvers
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, AllowedManeuvers
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->maneuvers, cdr))
    {
      return false;
    }
  }

  // Field name: maneuvers_exists
  {
    cdr << (ros_message->maneuvers_exists ? true : false);
  }

  // Field name: node_list
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, carma_v2x_msgs, msg, NodeListXY
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->node_list, cdr))
    {
      return false;
    }
  }

  // Field name: connect_to_list
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, Connection
      )()->data);
    size_t size = ros_message->connect_to_list.size;
    auto array_ptr = ros_message->connect_to_list.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  // Field name: connects_to_exists
  {
    cdr << (ros_message->connects_to_exists ? true : false);
  }

  // Field name: overlay_lane_list
  {
    size_t size = ros_message->overlay_lane_list.size;
    auto array_ptr = ros_message->overlay_lane_list.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: overlay_lane_list_exists
  {
    cdr << (ros_message->overlay_lane_list_exists ? true : false);
  }

  return true;
}

static bool _GenericLane__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _GenericLane__ros_msg_type * ros_message = static_cast<_GenericLane__ros_msg_type *>(untyped_ros_message);
  // Field name: lane_id
  {
    cdr >> ros_message->lane_id;
  }

  // Field name: name
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->name.data) {
      rosidl_runtime_c__String__init(&ros_message->name);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->name,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'name'\n");
      return false;
    }
  }

  // Field name: name_exists
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->name_exists = tmp ? true : false;
  }

  // Field name: ingress_approach
  {
    cdr >> ros_message->ingress_approach;
  }

  // Field name: ingress_approach_exists
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->ingress_approach_exists = tmp ? true : false;
  }

  // Field name: egress_approach
  {
    cdr >> ros_message->egress_approach;
  }

  // Field name: egress_approach_exists
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->egress_approach_exists = tmp ? true : false;
  }

  // Field name: lane_attributes
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, LaneAttributes
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->lane_attributes))
    {
      return false;
    }
  }

  // Field name: maneuvers
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, AllowedManeuvers
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->maneuvers))
    {
      return false;
    }
  }

  // Field name: maneuvers_exists
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->maneuvers_exists = tmp ? true : false;
  }

  // Field name: node_list
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, carma_v2x_msgs, msg, NodeListXY
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->node_list))
    {
      return false;
    }
  }

  // Field name: connect_to_list
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, Connection
      )()->data);
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->connect_to_list.data) {
      j2735_v2x_msgs__msg__Connection__Sequence__fini(&ros_message->connect_to_list);
    }
    if (!j2735_v2x_msgs__msg__Connection__Sequence__init(&ros_message->connect_to_list, size)) {
      return "failed to create array for field 'connect_to_list'";
    }
    auto array_ptr = ros_message->connect_to_list.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  // Field name: connects_to_exists
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->connects_to_exists = tmp ? true : false;
  }

  // Field name: overlay_lane_list
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->overlay_lane_list.data) {
      rosidl_runtime_c__uint16__Sequence__fini(&ros_message->overlay_lane_list);
    }
    if (!rosidl_runtime_c__uint16__Sequence__init(&ros_message->overlay_lane_list, size)) {
      return "failed to create array for field 'overlay_lane_list'";
    }
    auto array_ptr = ros_message->overlay_lane_list.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: overlay_lane_list_exists
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->overlay_lane_list_exists = tmp ? true : false;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_carma_v2x_msgs
size_t get_serialized_size_carma_v2x_msgs__msg__GenericLane(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _GenericLane__ros_msg_type * ros_message = static_cast<const _GenericLane__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name lane_id
  {
    size_t item_size = sizeof(ros_message->lane_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name name
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->name.size + 1);
  // field.name name_exists
  {
    size_t item_size = sizeof(ros_message->name_exists);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ingress_approach
  {
    size_t item_size = sizeof(ros_message->ingress_approach);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ingress_approach_exists
  {
    size_t item_size = sizeof(ros_message->ingress_approach_exists);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name egress_approach
  {
    size_t item_size = sizeof(ros_message->egress_approach);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name egress_approach_exists
  {
    size_t item_size = sizeof(ros_message->egress_approach_exists);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name lane_attributes

  current_alignment += get_serialized_size_j2735_v2x_msgs__msg__LaneAttributes(
    &(ros_message->lane_attributes), current_alignment);
  // field.name maneuvers

  current_alignment += get_serialized_size_j2735_v2x_msgs__msg__AllowedManeuvers(
    &(ros_message->maneuvers), current_alignment);
  // field.name maneuvers_exists
  {
    size_t item_size = sizeof(ros_message->maneuvers_exists);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name node_list

  current_alignment += get_serialized_size_carma_v2x_msgs__msg__NodeListXY(
    &(ros_message->node_list), current_alignment);
  // field.name connect_to_list
  {
    size_t array_size = ros_message->connect_to_list.size;
    auto array_ptr = ros_message->connect_to_list.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_j2735_v2x_msgs__msg__Connection(
        &array_ptr[index], current_alignment);
    }
  }
  // field.name connects_to_exists
  {
    size_t item_size = sizeof(ros_message->connects_to_exists);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name overlay_lane_list
  {
    size_t array_size = ros_message->overlay_lane_list.size;
    auto array_ptr = ros_message->overlay_lane_list.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name overlay_lane_list_exists
  {
    size_t item_size = sizeof(ros_message->overlay_lane_list_exists);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _GenericLane__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_carma_v2x_msgs__msg__GenericLane(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_carma_v2x_msgs
size_t max_serialized_size_carma_v2x_msgs__msg__GenericLane(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: lane_id
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: name
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: name_exists
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: ingress_approach
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: ingress_approach_exists
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: egress_approach
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: egress_approach_exists
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: lane_attributes
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_j2735_v2x_msgs__msg__LaneAttributes(
        full_bounded, current_alignment);
    }
  }
  // member: maneuvers
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_j2735_v2x_msgs__msg__AllowedManeuvers(
        full_bounded, current_alignment);
    }
  }
  // member: maneuvers_exists
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: node_list
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_carma_v2x_msgs__msg__NodeListXY(
        full_bounded, current_alignment);
    }
  }
  // member: connect_to_list
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_j2735_v2x_msgs__msg__Connection(
        full_bounded, current_alignment);
    }
  }
  // member: connects_to_exists
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: overlay_lane_list
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: overlay_lane_list_exists
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static size_t _GenericLane__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_carma_v2x_msgs__msg__GenericLane(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_GenericLane = {
  "carma_v2x_msgs::msg",
  "GenericLane",
  _GenericLane__cdr_serialize,
  _GenericLane__cdr_deserialize,
  _GenericLane__get_serialized_size,
  _GenericLane__max_serialized_size
};

static rosidl_message_type_support_t _GenericLane__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_GenericLane,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, carma_v2x_msgs, msg, GenericLane)() {
  return &_GenericLane__type_support;
}

#if defined(__cplusplus)
}
#endif
