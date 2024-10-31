// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from carma_planning_msgs:srv/PlanTrajectory.idl
// generated code does not contain a copyright notice
#include "carma_planning_msgs/srv/detail/plan_trajectory__rosidl_typesupport_fastrtps_cpp.hpp"
#include "carma_planning_msgs/srv/detail/plan_trajectory__struct.hpp"

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
namespace std_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const std_msgs::msg::Header &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  std_msgs::msg::Header &);
size_t get_serialized_size(
  const std_msgs::msg::Header &,
  size_t current_alignment);
size_t
max_serialized_size_Header(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace std_msgs

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

namespace carma_planning_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const carma_planning_msgs::msg::ManeuverPlan &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  carma_planning_msgs::msg::ManeuverPlan &);
size_t get_serialized_size(
  const carma_planning_msgs::msg::ManeuverPlan &,
  size_t current_alignment);
size_t
max_serialized_size_ManeuverPlan(
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

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_carma_planning_msgs
cdr_serialize(
  const carma_planning_msgs::srv::PlanTrajectory_Request & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: header
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.header,
    cdr);
  // Member: vehicle_state
  carma_planning_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.vehicle_state,
    cdr);
  // Member: maneuver_plan
  carma_planning_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.maneuver_plan,
    cdr);
  // Member: initial_trajectory_plan
  carma_planning_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.initial_trajectory_plan,
    cdr);
  // Member: maneuver_index_to_plan
  cdr << ros_message.maneuver_index_to_plan;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_carma_planning_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  carma_planning_msgs::srv::PlanTrajectory_Request & ros_message)
{
  // Member: header
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.header);

  // Member: vehicle_state
  carma_planning_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.vehicle_state);

  // Member: maneuver_plan
  carma_planning_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.maneuver_plan);

  // Member: initial_trajectory_plan
  carma_planning_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.initial_trajectory_plan);

  // Member: maneuver_index_to_plan
  cdr >> ros_message.maneuver_index_to_plan;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_carma_planning_msgs
get_serialized_size(
  const carma_planning_msgs::srv::PlanTrajectory_Request & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: header

  current_alignment +=
    std_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.header, current_alignment);
  // Member: vehicle_state

  current_alignment +=
    carma_planning_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.vehicle_state, current_alignment);
  // Member: maneuver_plan

  current_alignment +=
    carma_planning_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.maneuver_plan, current_alignment);
  // Member: initial_trajectory_plan

  current_alignment +=
    carma_planning_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.initial_trajectory_plan, current_alignment);
  // Member: maneuver_index_to_plan
  {
    size_t item_size = sizeof(ros_message.maneuver_index_to_plan);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_carma_planning_msgs
max_serialized_size_PlanTrajectory_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: header
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        std_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_Header(
        full_bounded, current_alignment);
    }
  }

  // Member: vehicle_state
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        carma_planning_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_VehicleState(
        full_bounded, current_alignment);
    }
  }

  // Member: maneuver_plan
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        carma_planning_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_ManeuverPlan(
        full_bounded, current_alignment);
    }
  }

  // Member: initial_trajectory_plan
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        carma_planning_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_TrajectoryPlan(
        full_bounded, current_alignment);
    }
  }

  // Member: maneuver_index_to_plan
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  return current_alignment - initial_alignment;
}

static bool _PlanTrajectory_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const carma_planning_msgs::srv::PlanTrajectory_Request *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _PlanTrajectory_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<carma_planning_msgs::srv::PlanTrajectory_Request *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _PlanTrajectory_Request__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const carma_planning_msgs::srv::PlanTrajectory_Request *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _PlanTrajectory_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_PlanTrajectory_Request(full_bounded, 0);
}

static message_type_support_callbacks_t _PlanTrajectory_Request__callbacks = {
  "carma_planning_msgs::srv",
  "PlanTrajectory_Request",
  _PlanTrajectory_Request__cdr_serialize,
  _PlanTrajectory_Request__cdr_deserialize,
  _PlanTrajectory_Request__get_serialized_size,
  _PlanTrajectory_Request__max_serialized_size
};

static rosidl_message_type_support_t _PlanTrajectory_Request__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_PlanTrajectory_Request__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace carma_planning_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_carma_planning_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<carma_planning_msgs::srv::PlanTrajectory_Request>()
{
  return &carma_planning_msgs::srv::typesupport_fastrtps_cpp::_PlanTrajectory_Request__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, carma_planning_msgs, srv, PlanTrajectory_Request)() {
  return &carma_planning_msgs::srv::typesupport_fastrtps_cpp::_PlanTrajectory_Request__handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include <limits>
// already included above
// #include <stdexcept>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
// already included above
// #include "fastcdr/Cdr.h"


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

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_carma_planning_msgs
cdr_serialize(
  const carma_planning_msgs::srv::PlanTrajectory_Response & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: trajectory_plan
  carma_planning_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.trajectory_plan,
    cdr);
  // Member: related_maneuvers
  {
    cdr << ros_message.related_maneuvers;
  }
  // Member: maneuver_status
  {
    cdr << ros_message.maneuver_status;
  }
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_carma_planning_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  carma_planning_msgs::srv::PlanTrajectory_Response & ros_message)
{
  // Member: trajectory_plan
  carma_planning_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.trajectory_plan);

  // Member: related_maneuvers
  {
    cdr >> ros_message.related_maneuvers;
  }

  // Member: maneuver_status
  {
    cdr >> ros_message.maneuver_status;
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_carma_planning_msgs
get_serialized_size(
  const carma_planning_msgs::srv::PlanTrajectory_Response & ros_message,
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
  // Member: related_maneuvers
  {
    size_t array_size = ros_message.related_maneuvers.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    size_t item_size = sizeof(ros_message.related_maneuvers[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: maneuver_status
  {
    size_t array_size = ros_message.maneuver_status.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    size_t item_size = sizeof(ros_message.maneuver_status[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_carma_planning_msgs
max_serialized_size_PlanTrajectory_Response(
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

  // Member: related_maneuvers
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: maneuver_status
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static bool _PlanTrajectory_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const carma_planning_msgs::srv::PlanTrajectory_Response *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _PlanTrajectory_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<carma_planning_msgs::srv::PlanTrajectory_Response *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _PlanTrajectory_Response__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const carma_planning_msgs::srv::PlanTrajectory_Response *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _PlanTrajectory_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_PlanTrajectory_Response(full_bounded, 0);
}

static message_type_support_callbacks_t _PlanTrajectory_Response__callbacks = {
  "carma_planning_msgs::srv",
  "PlanTrajectory_Response",
  _PlanTrajectory_Response__cdr_serialize,
  _PlanTrajectory_Response__cdr_deserialize,
  _PlanTrajectory_Response__get_serialized_size,
  _PlanTrajectory_Response__max_serialized_size
};

static rosidl_message_type_support_t _PlanTrajectory_Response__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_PlanTrajectory_Response__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace carma_planning_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_carma_planning_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<carma_planning_msgs::srv::PlanTrajectory_Response>()
{
  return &carma_planning_msgs::srv::typesupport_fastrtps_cpp::_PlanTrajectory_Response__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, carma_planning_msgs, srv, PlanTrajectory_Response)() {
  return &carma_planning_msgs::srv::typesupport_fastrtps_cpp::_PlanTrajectory_Response__handle;
}

#ifdef __cplusplus
}
#endif

#include "rmw/error_handling.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/service_type_support_decl.hpp"

namespace carma_planning_msgs
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

static service_type_support_callbacks_t _PlanTrajectory__callbacks = {
  "carma_planning_msgs::srv",
  "PlanTrajectory",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, carma_planning_msgs, srv, PlanTrajectory_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, carma_planning_msgs, srv, PlanTrajectory_Response)(),
};

static rosidl_service_type_support_t _PlanTrajectory__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_PlanTrajectory__callbacks,
  get_service_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace carma_planning_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_carma_planning_msgs
const rosidl_service_type_support_t *
get_service_type_support_handle<carma_planning_msgs::srv::PlanTrajectory>()
{
  return &carma_planning_msgs::srv::typesupport_fastrtps_cpp::_PlanTrajectory__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, carma_planning_msgs, srv, PlanTrajectory)() {
  return &carma_planning_msgs::srv::typesupport_fastrtps_cpp::_PlanTrajectory__handle;
}

#ifdef __cplusplus
}
#endif
