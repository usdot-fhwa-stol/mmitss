// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from carma_planning_msgs:msg/PlatooningInfo.idl
// generated code does not contain a copyright notice
#include "carma_planning_msgs/msg/detail/platooning_info__rosidl_typesupport_fastrtps_cpp.hpp"
#include "carma_planning_msgs/msg/detail/platooning_info__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace carma_planning_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_carma_planning_msgs
cdr_serialize(
  const carma_planning_msgs::msg::PlatooningInfo & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: state
  cdr << ros_message.state;
  // Member: platoon_id
  cdr << ros_message.platoon_id;
  // Member: size
  cdr << ros_message.size;
  // Member: size_limit
  cdr << ros_message.size_limit;
  // Member: leader_id
  cdr << ros_message.leader_id;
  // Member: leader_downtrack_distance
  cdr << ros_message.leader_downtrack_distance;
  // Member: leader_cmd_speed
  cdr << ros_message.leader_cmd_speed;
  // Member: host_platoon_position
  cdr << ros_message.host_platoon_position;
  // Member: host_cmd_speed
  cdr << ros_message.host_cmd_speed;
  // Member: desired_gap
  cdr << ros_message.desired_gap;
  // Member: actual_gap
  cdr << ros_message.actual_gap;
  // Member: current_predecessor_time_headway_sum
  cdr << ros_message.current_predecessor_time_headway_sum;
  // Member: predecessor_speed
  cdr << ros_message.predecessor_speed;
  // Member: predecessor_position
  cdr << ros_message.predecessor_position;
  // Member: is_create_gap
  cdr << (ros_message.is_create_gap ? true : false);
  // Member: create_gap_adjuster
  cdr << ros_message.create_gap_adjuster;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_carma_planning_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  carma_planning_msgs::msg::PlatooningInfo & ros_message)
{
  // Member: state
  cdr >> ros_message.state;

  // Member: platoon_id
  cdr >> ros_message.platoon_id;

  // Member: size
  cdr >> ros_message.size;

  // Member: size_limit
  cdr >> ros_message.size_limit;

  // Member: leader_id
  cdr >> ros_message.leader_id;

  // Member: leader_downtrack_distance
  cdr >> ros_message.leader_downtrack_distance;

  // Member: leader_cmd_speed
  cdr >> ros_message.leader_cmd_speed;

  // Member: host_platoon_position
  cdr >> ros_message.host_platoon_position;

  // Member: host_cmd_speed
  cdr >> ros_message.host_cmd_speed;

  // Member: desired_gap
  cdr >> ros_message.desired_gap;

  // Member: actual_gap
  cdr >> ros_message.actual_gap;

  // Member: current_predecessor_time_headway_sum
  cdr >> ros_message.current_predecessor_time_headway_sum;

  // Member: predecessor_speed
  cdr >> ros_message.predecessor_speed;

  // Member: predecessor_position
  cdr >> ros_message.predecessor_position;

  // Member: is_create_gap
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.is_create_gap = tmp ? true : false;
  }

  // Member: create_gap_adjuster
  cdr >> ros_message.create_gap_adjuster;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_carma_planning_msgs
get_serialized_size(
  const carma_planning_msgs::msg::PlatooningInfo & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: state
  {
    size_t item_size = sizeof(ros_message.state);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: platoon_id
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.platoon_id.size() + 1);
  // Member: size
  {
    size_t item_size = sizeof(ros_message.size);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: size_limit
  {
    size_t item_size = sizeof(ros_message.size_limit);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: leader_id
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.leader_id.size() + 1);
  // Member: leader_downtrack_distance
  {
    size_t item_size = sizeof(ros_message.leader_downtrack_distance);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: leader_cmd_speed
  {
    size_t item_size = sizeof(ros_message.leader_cmd_speed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: host_platoon_position
  {
    size_t item_size = sizeof(ros_message.host_platoon_position);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: host_cmd_speed
  {
    size_t item_size = sizeof(ros_message.host_cmd_speed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: desired_gap
  {
    size_t item_size = sizeof(ros_message.desired_gap);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: actual_gap
  {
    size_t item_size = sizeof(ros_message.actual_gap);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: current_predecessor_time_headway_sum
  {
    size_t item_size = sizeof(ros_message.current_predecessor_time_headway_sum);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: predecessor_speed
  {
    size_t item_size = sizeof(ros_message.predecessor_speed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: predecessor_position
  {
    size_t item_size = sizeof(ros_message.predecessor_position);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: is_create_gap
  {
    size_t item_size = sizeof(ros_message.is_create_gap);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: create_gap_adjuster
  {
    size_t item_size = sizeof(ros_message.create_gap_adjuster);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_carma_planning_msgs
max_serialized_size_PlatooningInfo(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: state
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: platoon_id
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: size
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: size_limit
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: leader_id
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: leader_downtrack_distance
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: leader_cmd_speed
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: host_platoon_position
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: host_cmd_speed
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: desired_gap
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: actual_gap
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: current_predecessor_time_headway_sum
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: predecessor_speed
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: predecessor_position
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: is_create_gap
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: create_gap_adjuster
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static bool _PlatooningInfo__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const carma_planning_msgs::msg::PlatooningInfo *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _PlatooningInfo__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<carma_planning_msgs::msg::PlatooningInfo *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _PlatooningInfo__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const carma_planning_msgs::msg::PlatooningInfo *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _PlatooningInfo__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_PlatooningInfo(full_bounded, 0);
}

static message_type_support_callbacks_t _PlatooningInfo__callbacks = {
  "carma_planning_msgs::msg",
  "PlatooningInfo",
  _PlatooningInfo__cdr_serialize,
  _PlatooningInfo__cdr_deserialize,
  _PlatooningInfo__get_serialized_size,
  _PlatooningInfo__max_serialized_size
};

static rosidl_message_type_support_t _PlatooningInfo__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_PlatooningInfo__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace carma_planning_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_carma_planning_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<carma_planning_msgs::msg::PlatooningInfo>()
{
  return &carma_planning_msgs::msg::typesupport_fastrtps_cpp::_PlatooningInfo__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, carma_planning_msgs, msg, PlatooningInfo)() {
  return &carma_planning_msgs::msg::typesupport_fastrtps_cpp::_PlatooningInfo__handle;
}

#ifdef __cplusplus
}
#endif
