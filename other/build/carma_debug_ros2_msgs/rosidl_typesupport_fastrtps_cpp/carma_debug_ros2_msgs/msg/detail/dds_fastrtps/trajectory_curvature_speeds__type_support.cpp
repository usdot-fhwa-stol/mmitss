// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from carma_debug_ros2_msgs:msg/TrajectoryCurvatureSpeeds.idl
// generated code does not contain a copyright notice
#include "carma_debug_ros2_msgs/msg/detail/trajectory_curvature_speeds__rosidl_typesupport_fastrtps_cpp.hpp"
#include "carma_debug_ros2_msgs/msg/detail/trajectory_curvature_speeds__struct.hpp"

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
bool cdr_serialize(
  const carma_planning_msgs::msg::TrajectoryPlan &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  carma_planning_msgs::msg::TrajectoryPlan &);
size_t get_serialized_size(
  const carma_planning_msgs::msg::TrajectoryPlan &,
  size_t current_alignment);
size_t
max_serialized_size_TrajectoryPlan(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace carma_planning_msgs

namespace carma_planning_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const carma_planning_msgs::msg::VehicleState &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  carma_planning_msgs::msg::VehicleState &);
size_t get_serialized_size(
  const carma_planning_msgs::msg::VehicleState &,
  size_t current_alignment);
size_t
max_serialized_size_VehicleState(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace carma_planning_msgs


namespace carma_debug_ros2_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_carma_debug_ros2_msgs
cdr_serialize(
  const carma_debug_ros2_msgs::msg::TrajectoryCurvatureSpeeds & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: trajectory_plan
  carma_planning_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.trajectory_plan,
    cdr);
  // Member: curvatures
  {
    cdr << ros_message.curvatures;
  }
  // Member: speed_limits
  {
    cdr << ros_message.speed_limits;
  }
  // Member: velocity_profile
  {
    cdr << ros_message.velocity_profile;
  }
  // Member: tangent_headings
  {
    cdr << ros_message.tangent_headings;
  }
  // Member: relative_downtrack
  {
    cdr << ros_message.relative_downtrack;
  }
  // Member: lat_accel_limit
  cdr << ros_message.lat_accel_limit;
  // Member: lon_accel_limit
  cdr << ros_message.lon_accel_limit;
  // Member: starting_state
  carma_planning_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.starting_state,
    cdr);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_carma_debug_ros2_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  carma_debug_ros2_msgs::msg::TrajectoryCurvatureSpeeds & ros_message)
{
  // Member: trajectory_plan
  carma_planning_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.trajectory_plan);

  // Member: curvatures
  {
    cdr >> ros_message.curvatures;
  }

  // Member: speed_limits
  {
    cdr >> ros_message.speed_limits;
  }

  // Member: velocity_profile
  {
    cdr >> ros_message.velocity_profile;
  }

  // Member: tangent_headings
  {
    cdr >> ros_message.tangent_headings;
  }

  // Member: relative_downtrack
  {
    cdr >> ros_message.relative_downtrack;
  }

  // Member: lat_accel_limit
  cdr >> ros_message.lat_accel_limit;

  // Member: lon_accel_limit
  cdr >> ros_message.lon_accel_limit;

  // Member: starting_state
  carma_planning_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.starting_state);

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_carma_debug_ros2_msgs
get_serialized_size(
  const carma_debug_ros2_msgs::msg::TrajectoryCurvatureSpeeds & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: trajectory_plan

  current_alignment +=
    carma_planning_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.trajectory_plan, current_alignment);
  // Member: curvatures
  {
    size_t array_size = ros_message.curvatures.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    size_t item_size = sizeof(ros_message.curvatures[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: speed_limits
  {
    size_t array_size = ros_message.speed_limits.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    size_t item_size = sizeof(ros_message.speed_limits[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: velocity_profile
  {
    size_t array_size = ros_message.velocity_profile.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    size_t item_size = sizeof(ros_message.velocity_profile[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: tangent_headings
  {
    size_t array_size = ros_message.tangent_headings.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    size_t item_size = sizeof(ros_message.tangent_headings[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: relative_downtrack
  {
    size_t array_size = ros_message.relative_downtrack.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    size_t item_size = sizeof(ros_message.relative_downtrack[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: lat_accel_limit
  {
    size_t item_size = sizeof(ros_message.lat_accel_limit);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: lon_accel_limit
  {
    size_t item_size = sizeof(ros_message.lon_accel_limit);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: starting_state

  current_alignment +=
    carma_planning_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.starting_state, current_alignment);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_carma_debug_ros2_msgs
max_serialized_size_TrajectoryCurvatureSpeeds(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: trajectory_plan
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        carma_planning_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_TrajectoryPlan(
        full_bounded, current_alignment);
    }
  }

  // Member: curvatures
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: speed_limits
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: velocity_profile
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: tangent_headings
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: relative_downtrack
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: lat_accel_limit
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: lon_accel_limit
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: starting_state
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        carma_planning_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_VehicleState(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static bool _TrajectoryCurvatureSpeeds__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const carma_debug_ros2_msgs::msg::TrajectoryCurvatureSpeeds *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _TrajectoryCurvatureSpeeds__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<carma_debug_ros2_msgs::msg::TrajectoryCurvatureSpeeds *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _TrajectoryCurvatureSpeeds__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const carma_debug_ros2_msgs::msg::TrajectoryCurvatureSpeeds *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _TrajectoryCurvatureSpeeds__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_TrajectoryCurvatureSpeeds(full_bounded, 0);
}

static message_type_support_callbacks_t _TrajectoryCurvatureSpeeds__callbacks = {
  "carma_debug_ros2_msgs::msg",
  "TrajectoryCurvatureSpeeds",
  _TrajectoryCurvatureSpeeds__cdr_serialize,
  _TrajectoryCurvatureSpeeds__cdr_deserialize,
  _TrajectoryCurvatureSpeeds__get_serialized_size,
  _TrajectoryCurvatureSpeeds__max_serialized_size
};

static rosidl_message_type_support_t _TrajectoryCurvatureSpeeds__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_TrajectoryCurvatureSpeeds__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace carma_debug_ros2_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_carma_debug_ros2_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<carma_debug_ros2_msgs::msg::TrajectoryCurvatureSpeeds>()
{
  return &carma_debug_ros2_msgs::msg::typesupport_fastrtps_cpp::_TrajectoryCurvatureSpeeds__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, carma_debug_ros2_msgs, msg, TrajectoryCurvatureSpeeds)() {
  return &carma_debug_ros2_msgs::msg::typesupport_fastrtps_cpp::_TrajectoryCurvatureSpeeds__handle;
}

#ifdef __cplusplus
}
#endif
