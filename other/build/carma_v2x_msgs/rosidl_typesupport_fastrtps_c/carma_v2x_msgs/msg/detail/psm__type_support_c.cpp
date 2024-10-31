// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from carma_v2x_msgs:msg/PSM.idl
// generated code does not contain a copyright notice
#include "carma_v2x_msgs/msg/detail/psm__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "carma_v2x_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "carma_v2x_msgs/msg/detail/psm__struct.h"
#include "carma_v2x_msgs/msg/detail/psm__functions.h"
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

#include "carma_v2x_msgs/msg/detail/acceleration_set4_way__functions.h"  // accel_set
#include "carma_v2x_msgs/msg/detail/attachment_radius__functions.h"  // attachment_radius
#include "carma_v2x_msgs/msg/detail/heading__functions.h"  // heading
#include "carma_v2x_msgs/msg/detail/path_history__functions.h"  // path_history
#include "carma_v2x_msgs/msg/detail/path_prediction__functions.h"  // path_prediction
#include "carma_v2x_msgs/msg/detail/position3_d__functions.h"  // position
#include "carma_v2x_msgs/msg/detail/positional_accuracy__functions.h"  // accuracy
#include "carma_v2x_msgs/msg/detail/velocity__functions.h"  // speed
#include "j2735_v2x_msgs/msg/detail/animal_type__functions.h"  // animal_type
#include "j2735_v2x_msgs/msg/detail/attachment__functions.h"  // attachment
#include "j2735_v2x_msgs/msg/detail/d_second__functions.h"  // sec_mark
#include "j2735_v2x_msgs/msg/detail/msg_count__functions.h"  // msg_cnt
#include "j2735_v2x_msgs/msg/detail/number_of_participants_in_cluster__functions.h"  // cluster_size
#include "j2735_v2x_msgs/msg/detail/personal_assistive__functions.h"  // assist_type
#include "j2735_v2x_msgs/msg/detail/personal_cluster_radius__functions.h"  // cluster_radius
#include "j2735_v2x_msgs/msg/detail/personal_crossing_in_progress__functions.h"  // cross_state
#include "j2735_v2x_msgs/msg/detail/personal_crossing_request__functions.h"  // cross_request
#include "j2735_v2x_msgs/msg/detail/personal_device_usage_state__functions.h"  // use_state
#include "j2735_v2x_msgs/msg/detail/personal_device_user_type__functions.h"  // basic_type
#include "j2735_v2x_msgs/msg/detail/propelled_information__functions.h"  // propulsion
#include "j2735_v2x_msgs/msg/detail/public_safety_and_road_worker_activity__functions.h"  // activity_type
#include "j2735_v2x_msgs/msg/detail/public_safety_directing_traffic_sub_type__functions.h"  // activity_sub_type
#include "j2735_v2x_msgs/msg/detail/public_safety_event_responder_worker_type__functions.h"  // event_responder_type
#include "j2735_v2x_msgs/msg/detail/temporary_id__functions.h"  // id
#include "j2735_v2x_msgs/msg/detail/user_size_and_behaviour__functions.h"  // sizing

// forward declare type support functions
size_t get_serialized_size_carma_v2x_msgs__msg__AccelerationSet4Way(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_carma_v2x_msgs__msg__AccelerationSet4Way(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, carma_v2x_msgs, msg, AccelerationSet4Way)();
size_t get_serialized_size_carma_v2x_msgs__msg__AttachmentRadius(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_carma_v2x_msgs__msg__AttachmentRadius(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, carma_v2x_msgs, msg, AttachmentRadius)();
size_t get_serialized_size_carma_v2x_msgs__msg__Heading(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_carma_v2x_msgs__msg__Heading(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, carma_v2x_msgs, msg, Heading)();
size_t get_serialized_size_carma_v2x_msgs__msg__PathHistory(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_carma_v2x_msgs__msg__PathHistory(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, carma_v2x_msgs, msg, PathHistory)();
size_t get_serialized_size_carma_v2x_msgs__msg__PathPrediction(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_carma_v2x_msgs__msg__PathPrediction(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, carma_v2x_msgs, msg, PathPrediction)();
size_t get_serialized_size_carma_v2x_msgs__msg__Position3D(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_carma_v2x_msgs__msg__Position3D(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, carma_v2x_msgs, msg, Position3D)();
size_t get_serialized_size_carma_v2x_msgs__msg__PositionalAccuracy(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_carma_v2x_msgs__msg__PositionalAccuracy(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, carma_v2x_msgs, msg, PositionalAccuracy)();
size_t get_serialized_size_carma_v2x_msgs__msg__Velocity(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_carma_v2x_msgs__msg__Velocity(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, carma_v2x_msgs, msg, Velocity)();
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_carma_v2x_msgs
size_t get_serialized_size_j2735_v2x_msgs__msg__AnimalType(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_carma_v2x_msgs
size_t max_serialized_size_j2735_v2x_msgs__msg__AnimalType(
  bool & full_bounded,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_carma_v2x_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, AnimalType)();
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_carma_v2x_msgs
size_t get_serialized_size_j2735_v2x_msgs__msg__Attachment(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_carma_v2x_msgs
size_t max_serialized_size_j2735_v2x_msgs__msg__Attachment(
  bool & full_bounded,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_carma_v2x_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, Attachment)();
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_carma_v2x_msgs
size_t get_serialized_size_j2735_v2x_msgs__msg__DSecond(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_carma_v2x_msgs
size_t max_serialized_size_j2735_v2x_msgs__msg__DSecond(
  bool & full_bounded,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_carma_v2x_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, DSecond)();
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_carma_v2x_msgs
size_t get_serialized_size_j2735_v2x_msgs__msg__MsgCount(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_carma_v2x_msgs
size_t max_serialized_size_j2735_v2x_msgs__msg__MsgCount(
  bool & full_bounded,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_carma_v2x_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, MsgCount)();
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_carma_v2x_msgs
size_t get_serialized_size_j2735_v2x_msgs__msg__NumberOfParticipantsInCluster(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_carma_v2x_msgs
size_t max_serialized_size_j2735_v2x_msgs__msg__NumberOfParticipantsInCluster(
  bool & full_bounded,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_carma_v2x_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, NumberOfParticipantsInCluster)();
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_carma_v2x_msgs
size_t get_serialized_size_j2735_v2x_msgs__msg__PersonalAssistive(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_carma_v2x_msgs
size_t max_serialized_size_j2735_v2x_msgs__msg__PersonalAssistive(
  bool & full_bounded,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_carma_v2x_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, PersonalAssistive)();
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_carma_v2x_msgs
size_t get_serialized_size_j2735_v2x_msgs__msg__PersonalClusterRadius(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_carma_v2x_msgs
size_t max_serialized_size_j2735_v2x_msgs__msg__PersonalClusterRadius(
  bool & full_bounded,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_carma_v2x_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, PersonalClusterRadius)();
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_carma_v2x_msgs
size_t get_serialized_size_j2735_v2x_msgs__msg__PersonalCrossingInProgress(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_carma_v2x_msgs
size_t max_serialized_size_j2735_v2x_msgs__msg__PersonalCrossingInProgress(
  bool & full_bounded,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_carma_v2x_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, PersonalCrossingInProgress)();
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_carma_v2x_msgs
size_t get_serialized_size_j2735_v2x_msgs__msg__PersonalCrossingRequest(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_carma_v2x_msgs
size_t max_serialized_size_j2735_v2x_msgs__msg__PersonalCrossingRequest(
  bool & full_bounded,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_carma_v2x_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, PersonalCrossingRequest)();
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_carma_v2x_msgs
size_t get_serialized_size_j2735_v2x_msgs__msg__PersonalDeviceUsageState(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_carma_v2x_msgs
size_t max_serialized_size_j2735_v2x_msgs__msg__PersonalDeviceUsageState(
  bool & full_bounded,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_carma_v2x_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, PersonalDeviceUsageState)();
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_carma_v2x_msgs
size_t get_serialized_size_j2735_v2x_msgs__msg__PersonalDeviceUserType(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_carma_v2x_msgs
size_t max_serialized_size_j2735_v2x_msgs__msg__PersonalDeviceUserType(
  bool & full_bounded,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_carma_v2x_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, PersonalDeviceUserType)();
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_carma_v2x_msgs
size_t get_serialized_size_j2735_v2x_msgs__msg__PropelledInformation(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_carma_v2x_msgs
size_t max_serialized_size_j2735_v2x_msgs__msg__PropelledInformation(
  bool & full_bounded,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_carma_v2x_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, PropelledInformation)();
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_carma_v2x_msgs
size_t get_serialized_size_j2735_v2x_msgs__msg__PublicSafetyAndRoadWorkerActivity(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_carma_v2x_msgs
size_t max_serialized_size_j2735_v2x_msgs__msg__PublicSafetyAndRoadWorkerActivity(
  bool & full_bounded,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_carma_v2x_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, PublicSafetyAndRoadWorkerActivity)();
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_carma_v2x_msgs
size_t get_serialized_size_j2735_v2x_msgs__msg__PublicSafetyDirectingTrafficSubType(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_carma_v2x_msgs
size_t max_serialized_size_j2735_v2x_msgs__msg__PublicSafetyDirectingTrafficSubType(
  bool & full_bounded,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_carma_v2x_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, PublicSafetyDirectingTrafficSubType)();
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_carma_v2x_msgs
size_t get_serialized_size_j2735_v2x_msgs__msg__PublicSafetyEventResponderWorkerType(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_carma_v2x_msgs
size_t max_serialized_size_j2735_v2x_msgs__msg__PublicSafetyEventResponderWorkerType(
  bool & full_bounded,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_carma_v2x_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, PublicSafetyEventResponderWorkerType)();
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_carma_v2x_msgs
size_t get_serialized_size_j2735_v2x_msgs__msg__TemporaryID(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_carma_v2x_msgs
size_t max_serialized_size_j2735_v2x_msgs__msg__TemporaryID(
  bool & full_bounded,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_carma_v2x_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, TemporaryID)();
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_carma_v2x_msgs
size_t get_serialized_size_j2735_v2x_msgs__msg__UserSizeAndBehaviour(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_carma_v2x_msgs
size_t max_serialized_size_j2735_v2x_msgs__msg__UserSizeAndBehaviour(
  bool & full_bounded,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_carma_v2x_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, UserSizeAndBehaviour)();


using _PSM__ros_msg_type = carma_v2x_msgs__msg__PSM;

static bool _PSM__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _PSM__ros_msg_type * ros_message = static_cast<const _PSM__ros_msg_type *>(untyped_ros_message);
  // Field name: presence_vector
  {
    cdr << ros_message->presence_vector;
  }

  // Field name: basic_type
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, PersonalDeviceUserType
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->basic_type, cdr))
    {
      return false;
    }
  }

  // Field name: sec_mark
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, DSecond
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->sec_mark, cdr))
    {
      return false;
    }
  }

  // Field name: msg_cnt
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, MsgCount
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->msg_cnt, cdr))
    {
      return false;
    }
  }

  // Field name: id
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, TemporaryID
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->id, cdr))
    {
      return false;
    }
  }

  // Field name: position
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, carma_v2x_msgs, msg, Position3D
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->position, cdr))
    {
      return false;
    }
  }

  // Field name: accuracy
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, carma_v2x_msgs, msg, PositionalAccuracy
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->accuracy, cdr))
    {
      return false;
    }
  }

  // Field name: speed
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, carma_v2x_msgs, msg, Velocity
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->speed, cdr))
    {
      return false;
    }
  }

  // Field name: heading
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, carma_v2x_msgs, msg, Heading
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->heading, cdr))
    {
      return false;
    }
  }

  // Field name: accel_set
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, carma_v2x_msgs, msg, AccelerationSet4Way
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->accel_set, cdr))
    {
      return false;
    }
  }

  // Field name: path_history
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, carma_v2x_msgs, msg, PathHistory
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->path_history, cdr))
    {
      return false;
    }
  }

  // Field name: path_prediction
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, carma_v2x_msgs, msg, PathPrediction
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->path_prediction, cdr))
    {
      return false;
    }
  }

  // Field name: propulsion
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, PropelledInformation
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->propulsion, cdr))
    {
      return false;
    }
  }

  // Field name: use_state
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, PersonalDeviceUsageState
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->use_state, cdr))
    {
      return false;
    }
  }

  // Field name: cross_request
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, PersonalCrossingRequest
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->cross_request, cdr))
    {
      return false;
    }
  }

  // Field name: cross_state
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, PersonalCrossingInProgress
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->cross_state, cdr))
    {
      return false;
    }
  }

  // Field name: cluster_size
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, NumberOfParticipantsInCluster
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->cluster_size, cdr))
    {
      return false;
    }
  }

  // Field name: cluster_radius
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, PersonalClusterRadius
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->cluster_radius, cdr))
    {
      return false;
    }
  }

  // Field name: event_responder_type
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, PublicSafetyEventResponderWorkerType
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->event_responder_type, cdr))
    {
      return false;
    }
  }

  // Field name: activity_type
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, PublicSafetyAndRoadWorkerActivity
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->activity_type, cdr))
    {
      return false;
    }
  }

  // Field name: activity_sub_type
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, PublicSafetyDirectingTrafficSubType
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->activity_sub_type, cdr))
    {
      return false;
    }
  }

  // Field name: assist_type
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, PersonalAssistive
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->assist_type, cdr))
    {
      return false;
    }
  }

  // Field name: sizing
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, UserSizeAndBehaviour
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->sizing, cdr))
    {
      return false;
    }
  }

  // Field name: attachment
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, Attachment
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->attachment, cdr))
    {
      return false;
    }
  }

  // Field name: attachment_radius
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, carma_v2x_msgs, msg, AttachmentRadius
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->attachment_radius, cdr))
    {
      return false;
    }
  }

  // Field name: animal_type
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, AnimalType
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->animal_type, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _PSM__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _PSM__ros_msg_type * ros_message = static_cast<_PSM__ros_msg_type *>(untyped_ros_message);
  // Field name: presence_vector
  {
    cdr >> ros_message->presence_vector;
  }

  // Field name: basic_type
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, PersonalDeviceUserType
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->basic_type))
    {
      return false;
    }
  }

  // Field name: sec_mark
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, DSecond
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->sec_mark))
    {
      return false;
    }
  }

  // Field name: msg_cnt
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, MsgCount
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->msg_cnt))
    {
      return false;
    }
  }

  // Field name: id
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, TemporaryID
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->id))
    {
      return false;
    }
  }

  // Field name: position
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, carma_v2x_msgs, msg, Position3D
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->position))
    {
      return false;
    }
  }

  // Field name: accuracy
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, carma_v2x_msgs, msg, PositionalAccuracy
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->accuracy))
    {
      return false;
    }
  }

  // Field name: speed
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, carma_v2x_msgs, msg, Velocity
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->speed))
    {
      return false;
    }
  }

  // Field name: heading
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, carma_v2x_msgs, msg, Heading
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->heading))
    {
      return false;
    }
  }

  // Field name: accel_set
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, carma_v2x_msgs, msg, AccelerationSet4Way
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->accel_set))
    {
      return false;
    }
  }

  // Field name: path_history
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, carma_v2x_msgs, msg, PathHistory
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->path_history))
    {
      return false;
    }
  }

  // Field name: path_prediction
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, carma_v2x_msgs, msg, PathPrediction
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->path_prediction))
    {
      return false;
    }
  }

  // Field name: propulsion
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, PropelledInformation
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->propulsion))
    {
      return false;
    }
  }

  // Field name: use_state
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, PersonalDeviceUsageState
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->use_state))
    {
      return false;
    }
  }

  // Field name: cross_request
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, PersonalCrossingRequest
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->cross_request))
    {
      return false;
    }
  }

  // Field name: cross_state
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, PersonalCrossingInProgress
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->cross_state))
    {
      return false;
    }
  }

  // Field name: cluster_size
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, NumberOfParticipantsInCluster
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->cluster_size))
    {
      return false;
    }
  }

  // Field name: cluster_radius
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, PersonalClusterRadius
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->cluster_radius))
    {
      return false;
    }
  }

  // Field name: event_responder_type
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, PublicSafetyEventResponderWorkerType
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->event_responder_type))
    {
      return false;
    }
  }

  // Field name: activity_type
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, PublicSafetyAndRoadWorkerActivity
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->activity_type))
    {
      return false;
    }
  }

  // Field name: activity_sub_type
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, PublicSafetyDirectingTrafficSubType
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->activity_sub_type))
    {
      return false;
    }
  }

  // Field name: assist_type
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, PersonalAssistive
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->assist_type))
    {
      return false;
    }
  }

  // Field name: sizing
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, UserSizeAndBehaviour
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->sizing))
    {
      return false;
    }
  }

  // Field name: attachment
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, Attachment
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->attachment))
    {
      return false;
    }
  }

  // Field name: attachment_radius
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, carma_v2x_msgs, msg, AttachmentRadius
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->attachment_radius))
    {
      return false;
    }
  }

  // Field name: animal_type
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, AnimalType
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->animal_type))
    {
      return false;
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_carma_v2x_msgs
size_t get_serialized_size_carma_v2x_msgs__msg__PSM(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _PSM__ros_msg_type * ros_message = static_cast<const _PSM__ros_msg_type *>(untyped_ros_message);
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
  // field.name basic_type

  current_alignment += get_serialized_size_j2735_v2x_msgs__msg__PersonalDeviceUserType(
    &(ros_message->basic_type), current_alignment);
  // field.name sec_mark

  current_alignment += get_serialized_size_j2735_v2x_msgs__msg__DSecond(
    &(ros_message->sec_mark), current_alignment);
  // field.name msg_cnt

  current_alignment += get_serialized_size_j2735_v2x_msgs__msg__MsgCount(
    &(ros_message->msg_cnt), current_alignment);
  // field.name id

  current_alignment += get_serialized_size_j2735_v2x_msgs__msg__TemporaryID(
    &(ros_message->id), current_alignment);
  // field.name position

  current_alignment += get_serialized_size_carma_v2x_msgs__msg__Position3D(
    &(ros_message->position), current_alignment);
  // field.name accuracy

  current_alignment += get_serialized_size_carma_v2x_msgs__msg__PositionalAccuracy(
    &(ros_message->accuracy), current_alignment);
  // field.name speed

  current_alignment += get_serialized_size_carma_v2x_msgs__msg__Velocity(
    &(ros_message->speed), current_alignment);
  // field.name heading

  current_alignment += get_serialized_size_carma_v2x_msgs__msg__Heading(
    &(ros_message->heading), current_alignment);
  // field.name accel_set

  current_alignment += get_serialized_size_carma_v2x_msgs__msg__AccelerationSet4Way(
    &(ros_message->accel_set), current_alignment);
  // field.name path_history

  current_alignment += get_serialized_size_carma_v2x_msgs__msg__PathHistory(
    &(ros_message->path_history), current_alignment);
  // field.name path_prediction

  current_alignment += get_serialized_size_carma_v2x_msgs__msg__PathPrediction(
    &(ros_message->path_prediction), current_alignment);
  // field.name propulsion

  current_alignment += get_serialized_size_j2735_v2x_msgs__msg__PropelledInformation(
    &(ros_message->propulsion), current_alignment);
  // field.name use_state

  current_alignment += get_serialized_size_j2735_v2x_msgs__msg__PersonalDeviceUsageState(
    &(ros_message->use_state), current_alignment);
  // field.name cross_request

  current_alignment += get_serialized_size_j2735_v2x_msgs__msg__PersonalCrossingRequest(
    &(ros_message->cross_request), current_alignment);
  // field.name cross_state

  current_alignment += get_serialized_size_j2735_v2x_msgs__msg__PersonalCrossingInProgress(
    &(ros_message->cross_state), current_alignment);
  // field.name cluster_size

  current_alignment += get_serialized_size_j2735_v2x_msgs__msg__NumberOfParticipantsInCluster(
    &(ros_message->cluster_size), current_alignment);
  // field.name cluster_radius

  current_alignment += get_serialized_size_j2735_v2x_msgs__msg__PersonalClusterRadius(
    &(ros_message->cluster_radius), current_alignment);
  // field.name event_responder_type

  current_alignment += get_serialized_size_j2735_v2x_msgs__msg__PublicSafetyEventResponderWorkerType(
    &(ros_message->event_responder_type), current_alignment);
  // field.name activity_type

  current_alignment += get_serialized_size_j2735_v2x_msgs__msg__PublicSafetyAndRoadWorkerActivity(
    &(ros_message->activity_type), current_alignment);
  // field.name activity_sub_type

  current_alignment += get_serialized_size_j2735_v2x_msgs__msg__PublicSafetyDirectingTrafficSubType(
    &(ros_message->activity_sub_type), current_alignment);
  // field.name assist_type

  current_alignment += get_serialized_size_j2735_v2x_msgs__msg__PersonalAssistive(
    &(ros_message->assist_type), current_alignment);
  // field.name sizing

  current_alignment += get_serialized_size_j2735_v2x_msgs__msg__UserSizeAndBehaviour(
    &(ros_message->sizing), current_alignment);
  // field.name attachment

  current_alignment += get_serialized_size_j2735_v2x_msgs__msg__Attachment(
    &(ros_message->attachment), current_alignment);
  // field.name attachment_radius

  current_alignment += get_serialized_size_carma_v2x_msgs__msg__AttachmentRadius(
    &(ros_message->attachment_radius), current_alignment);
  // field.name animal_type

  current_alignment += get_serialized_size_j2735_v2x_msgs__msg__AnimalType(
    &(ros_message->animal_type), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _PSM__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_carma_v2x_msgs__msg__PSM(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_carma_v2x_msgs
size_t max_serialized_size_carma_v2x_msgs__msg__PSM(
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

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: basic_type
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_j2735_v2x_msgs__msg__PersonalDeviceUserType(
        full_bounded, current_alignment);
    }
  }
  // member: sec_mark
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_j2735_v2x_msgs__msg__DSecond(
        full_bounded, current_alignment);
    }
  }
  // member: msg_cnt
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_j2735_v2x_msgs__msg__MsgCount(
        full_bounded, current_alignment);
    }
  }
  // member: id
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_j2735_v2x_msgs__msg__TemporaryID(
        full_bounded, current_alignment);
    }
  }
  // member: position
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_carma_v2x_msgs__msg__Position3D(
        full_bounded, current_alignment);
    }
  }
  // member: accuracy
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_carma_v2x_msgs__msg__PositionalAccuracy(
        full_bounded, current_alignment);
    }
  }
  // member: speed
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_carma_v2x_msgs__msg__Velocity(
        full_bounded, current_alignment);
    }
  }
  // member: heading
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_carma_v2x_msgs__msg__Heading(
        full_bounded, current_alignment);
    }
  }
  // member: accel_set
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_carma_v2x_msgs__msg__AccelerationSet4Way(
        full_bounded, current_alignment);
    }
  }
  // member: path_history
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_carma_v2x_msgs__msg__PathHistory(
        full_bounded, current_alignment);
    }
  }
  // member: path_prediction
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_carma_v2x_msgs__msg__PathPrediction(
        full_bounded, current_alignment);
    }
  }
  // member: propulsion
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_j2735_v2x_msgs__msg__PropelledInformation(
        full_bounded, current_alignment);
    }
  }
  // member: use_state
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_j2735_v2x_msgs__msg__PersonalDeviceUsageState(
        full_bounded, current_alignment);
    }
  }
  // member: cross_request
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_j2735_v2x_msgs__msg__PersonalCrossingRequest(
        full_bounded, current_alignment);
    }
  }
  // member: cross_state
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_j2735_v2x_msgs__msg__PersonalCrossingInProgress(
        full_bounded, current_alignment);
    }
  }
  // member: cluster_size
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_j2735_v2x_msgs__msg__NumberOfParticipantsInCluster(
        full_bounded, current_alignment);
    }
  }
  // member: cluster_radius
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_j2735_v2x_msgs__msg__PersonalClusterRadius(
        full_bounded, current_alignment);
    }
  }
  // member: event_responder_type
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_j2735_v2x_msgs__msg__PublicSafetyEventResponderWorkerType(
        full_bounded, current_alignment);
    }
  }
  // member: activity_type
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_j2735_v2x_msgs__msg__PublicSafetyAndRoadWorkerActivity(
        full_bounded, current_alignment);
    }
  }
  // member: activity_sub_type
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_j2735_v2x_msgs__msg__PublicSafetyDirectingTrafficSubType(
        full_bounded, current_alignment);
    }
  }
  // member: assist_type
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_j2735_v2x_msgs__msg__PersonalAssistive(
        full_bounded, current_alignment);
    }
  }
  // member: sizing
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_j2735_v2x_msgs__msg__UserSizeAndBehaviour(
        full_bounded, current_alignment);
    }
  }
  // member: attachment
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_j2735_v2x_msgs__msg__Attachment(
        full_bounded, current_alignment);
    }
  }
  // member: attachment_radius
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_carma_v2x_msgs__msg__AttachmentRadius(
        full_bounded, current_alignment);
    }
  }
  // member: animal_type
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_j2735_v2x_msgs__msg__AnimalType(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _PSM__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_carma_v2x_msgs__msg__PSM(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_PSM = {
  "carma_v2x_msgs::msg",
  "PSM",
  _PSM__cdr_serialize,
  _PSM__cdr_deserialize,
  _PSM__get_serialized_size,
  _PSM__max_serialized_size
};

static rosidl_message_type_support_t _PSM__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_PSM,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, carma_v2x_msgs, msg, PSM)() {
  return &_PSM__type_support;
}

#if defined(__cplusplus)
}
#endif
