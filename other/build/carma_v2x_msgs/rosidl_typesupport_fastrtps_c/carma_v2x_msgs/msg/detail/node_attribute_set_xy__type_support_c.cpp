// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from carma_v2x_msgs:msg/NodeAttributeSetXY.idl
// generated code does not contain a copyright notice
#include "carma_v2x_msgs/msg/detail/node_attribute_set_xy__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "carma_v2x_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "carma_v2x_msgs/msg/detail/node_attribute_set_xy__struct.h"
#include "carma_v2x_msgs/msg/detail/node_attribute_set_xy__functions.h"
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

#include "carma_v2x_msgs/msg/detail/lane_data_attribute__functions.h"  // lane_attribute_list
#include "j2735_v2x_msgs/msg/detail/node_attribute_xy__functions.h"  // local_node
#include "j2735_v2x_msgs/msg/detail/segment_attribute_xy__functions.h"  // disabled, enabled

// forward declare type support functions
size_t get_serialized_size_carma_v2x_msgs__msg__LaneDataAttribute(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_carma_v2x_msgs__msg__LaneDataAttribute(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, carma_v2x_msgs, msg, LaneDataAttribute)();
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_carma_v2x_msgs
size_t get_serialized_size_j2735_v2x_msgs__msg__NodeAttributeXY(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_carma_v2x_msgs
size_t max_serialized_size_j2735_v2x_msgs__msg__NodeAttributeXY(
  bool & full_bounded,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_carma_v2x_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, NodeAttributeXY)();
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_carma_v2x_msgs
size_t get_serialized_size_j2735_v2x_msgs__msg__SegmentAttributeXY(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_carma_v2x_msgs
size_t max_serialized_size_j2735_v2x_msgs__msg__SegmentAttributeXY(
  bool & full_bounded,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_carma_v2x_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, SegmentAttributeXY)();


using _NodeAttributeSetXY__ros_msg_type = carma_v2x_msgs__msg__NodeAttributeSetXY;

static bool _NodeAttributeSetXY__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _NodeAttributeSetXY__ros_msg_type * ros_message = static_cast<const _NodeAttributeSetXY__ros_msg_type *>(untyped_ros_message);
  // Field name: local_node
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, NodeAttributeXY
      )()->data);
    size_t size = ros_message->local_node.size;
    auto array_ptr = ros_message->local_node.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  // Field name: local_node_exists
  {
    cdr << (ros_message->local_node_exists ? true : false);
  }

  // Field name: disabled
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, SegmentAttributeXY
      )()->data);
    size_t size = ros_message->disabled.size;
    auto array_ptr = ros_message->disabled.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  // Field name: disabled_exists
  {
    cdr << (ros_message->disabled_exists ? true : false);
  }

  // Field name: enabled
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, SegmentAttributeXY
      )()->data);
    size_t size = ros_message->enabled.size;
    auto array_ptr = ros_message->enabled.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  // Field name: enabled_exists
  {
    cdr << (ros_message->enabled_exists ? true : false);
  }

  // Field name: lane_attribute_list
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, carma_v2x_msgs, msg, LaneDataAttribute
      )()->data);
    size_t size = ros_message->lane_attribute_list.size;
    auto array_ptr = ros_message->lane_attribute_list.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  // Field name: data_exists
  {
    cdr << (ros_message->data_exists ? true : false);
  }

  // Field name: d_width
  {
    cdr << ros_message->d_width;
  }

  // Field name: d_width_exists
  {
    cdr << (ros_message->d_width_exists ? true : false);
  }

  // Field name: d_elevation
  {
    cdr << ros_message->d_elevation;
  }

  // Field name: d_elevation_exists
  {
    cdr << (ros_message->d_elevation_exists ? true : false);
  }

  return true;
}

static bool _NodeAttributeSetXY__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _NodeAttributeSetXY__ros_msg_type * ros_message = static_cast<_NodeAttributeSetXY__ros_msg_type *>(untyped_ros_message);
  // Field name: local_node
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, NodeAttributeXY
      )()->data);
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->local_node.data) {
      j2735_v2x_msgs__msg__NodeAttributeXY__Sequence__fini(&ros_message->local_node);
    }
    if (!j2735_v2x_msgs__msg__NodeAttributeXY__Sequence__init(&ros_message->local_node, size)) {
      return "failed to create array for field 'local_node'";
    }
    auto array_ptr = ros_message->local_node.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  // Field name: local_node_exists
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->local_node_exists = tmp ? true : false;
  }

  // Field name: disabled
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, SegmentAttributeXY
      )()->data);
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->disabled.data) {
      j2735_v2x_msgs__msg__SegmentAttributeXY__Sequence__fini(&ros_message->disabled);
    }
    if (!j2735_v2x_msgs__msg__SegmentAttributeXY__Sequence__init(&ros_message->disabled, size)) {
      return "failed to create array for field 'disabled'";
    }
    auto array_ptr = ros_message->disabled.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  // Field name: disabled_exists
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->disabled_exists = tmp ? true : false;
  }

  // Field name: enabled
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, SegmentAttributeXY
      )()->data);
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->enabled.data) {
      j2735_v2x_msgs__msg__SegmentAttributeXY__Sequence__fini(&ros_message->enabled);
    }
    if (!j2735_v2x_msgs__msg__SegmentAttributeXY__Sequence__init(&ros_message->enabled, size)) {
      return "failed to create array for field 'enabled'";
    }
    auto array_ptr = ros_message->enabled.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  // Field name: enabled_exists
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->enabled_exists = tmp ? true : false;
  }

  // Field name: lane_attribute_list
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, carma_v2x_msgs, msg, LaneDataAttribute
      )()->data);
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->lane_attribute_list.data) {
      carma_v2x_msgs__msg__LaneDataAttribute__Sequence__fini(&ros_message->lane_attribute_list);
    }
    if (!carma_v2x_msgs__msg__LaneDataAttribute__Sequence__init(&ros_message->lane_attribute_list, size)) {
      return "failed to create array for field 'lane_attribute_list'";
    }
    auto array_ptr = ros_message->lane_attribute_list.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  // Field name: data_exists
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->data_exists = tmp ? true : false;
  }

  // Field name: d_width
  {
    cdr >> ros_message->d_width;
  }

  // Field name: d_width_exists
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->d_width_exists = tmp ? true : false;
  }

  // Field name: d_elevation
  {
    cdr >> ros_message->d_elevation;
  }

  // Field name: d_elevation_exists
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->d_elevation_exists = tmp ? true : false;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_carma_v2x_msgs
size_t get_serialized_size_carma_v2x_msgs__msg__NodeAttributeSetXY(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _NodeAttributeSetXY__ros_msg_type * ros_message = static_cast<const _NodeAttributeSetXY__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name local_node
  {
    size_t array_size = ros_message->local_node.size;
    auto array_ptr = ros_message->local_node.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_j2735_v2x_msgs__msg__NodeAttributeXY(
        &array_ptr[index], current_alignment);
    }
  }
  // field.name local_node_exists
  {
    size_t item_size = sizeof(ros_message->local_node_exists);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name disabled
  {
    size_t array_size = ros_message->disabled.size;
    auto array_ptr = ros_message->disabled.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_j2735_v2x_msgs__msg__SegmentAttributeXY(
        &array_ptr[index], current_alignment);
    }
  }
  // field.name disabled_exists
  {
    size_t item_size = sizeof(ros_message->disabled_exists);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name enabled
  {
    size_t array_size = ros_message->enabled.size;
    auto array_ptr = ros_message->enabled.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_j2735_v2x_msgs__msg__SegmentAttributeXY(
        &array_ptr[index], current_alignment);
    }
  }
  // field.name enabled_exists
  {
    size_t item_size = sizeof(ros_message->enabled_exists);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name lane_attribute_list
  {
    size_t array_size = ros_message->lane_attribute_list.size;
    auto array_ptr = ros_message->lane_attribute_list.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_carma_v2x_msgs__msg__LaneDataAttribute(
        &array_ptr[index], current_alignment);
    }
  }
  // field.name data_exists
  {
    size_t item_size = sizeof(ros_message->data_exists);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name d_width
  {
    size_t item_size = sizeof(ros_message->d_width);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name d_width_exists
  {
    size_t item_size = sizeof(ros_message->d_width_exists);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name d_elevation
  {
    size_t item_size = sizeof(ros_message->d_elevation);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name d_elevation_exists
  {
    size_t item_size = sizeof(ros_message->d_elevation_exists);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _NodeAttributeSetXY__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_carma_v2x_msgs__msg__NodeAttributeSetXY(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_carma_v2x_msgs
size_t max_serialized_size_carma_v2x_msgs__msg__NodeAttributeSetXY(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: local_node
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_j2735_v2x_msgs__msg__NodeAttributeXY(
        full_bounded, current_alignment);
    }
  }
  // member: local_node_exists
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: disabled
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_j2735_v2x_msgs__msg__SegmentAttributeXY(
        full_bounded, current_alignment);
    }
  }
  // member: disabled_exists
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: enabled
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_j2735_v2x_msgs__msg__SegmentAttributeXY(
        full_bounded, current_alignment);
    }
  }
  // member: enabled_exists
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: lane_attribute_list
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_carma_v2x_msgs__msg__LaneDataAttribute(
        full_bounded, current_alignment);
    }
  }
  // member: data_exists
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: d_width
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: d_width_exists
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: d_elevation
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: d_elevation_exists
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static size_t _NodeAttributeSetXY__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_carma_v2x_msgs__msg__NodeAttributeSetXY(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_NodeAttributeSetXY = {
  "carma_v2x_msgs::msg",
  "NodeAttributeSetXY",
  _NodeAttributeSetXY__cdr_serialize,
  _NodeAttributeSetXY__cdr_deserialize,
  _NodeAttributeSetXY__get_serialized_size,
  _NodeAttributeSetXY__max_serialized_size
};

static rosidl_message_type_support_t _NodeAttributeSetXY__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_NodeAttributeSetXY,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, carma_v2x_msgs, msg, NodeAttributeSetXY)() {
  return &_NodeAttributeSetXY__type_support;
}

#if defined(__cplusplus)
}
#endif
