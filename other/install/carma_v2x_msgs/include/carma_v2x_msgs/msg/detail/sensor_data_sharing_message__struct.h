// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from carma_v2x_msgs:msg/SensorDataSharingMessage.idl
// generated code does not contain a copyright notice

#ifndef CARMA_V2X_MSGS__MSG__DETAIL__SENSOR_DATA_SHARING_MESSAGE__STRUCT_H_
#define CARMA_V2X_MSGS__MSG__DETAIL__SENSOR_DATA_SHARING_MESSAGE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'HAS_REF_POS_XY_CONF'.
enum
{
  carma_v2x_msgs__msg__SensorDataSharingMessage__HAS_REF_POS_XY_CONF = 1
};

// Include directives for member types
// Member 'msg_cnt'
#include "j2735_v2x_msgs/msg/detail/msg_count__struct.h"
// Member 'source_id'
#include "j2735_v2x_msgs/msg/detail/temporary_id__struct.h"
// Member 'equipment_type'
#include "j3224_v2x_msgs/msg/detail/equipment_type__struct.h"
// Member 'sdsm_time_stamp'
#include "j2735_v2x_msgs/msg/detail/d_date_time__struct.h"
// Member 'ref_pos'
#include "carma_v2x_msgs/msg/detail/position3_d__struct.h"
// Member 'ref_pos_xy_conf'
#include "carma_v2x_msgs/msg/detail/positional_accuracy__struct.h"
// Member 'objects'
#include "carma_v2x_msgs/msg/detail/detected_object_list__struct.h"
// Member 'ref_pos_el_conf'
#include "j2735_v2x_msgs/msg/detail/elevation_confidence__struct.h"

// Struct defined in msg/SensorDataSharingMessage in the package carma_v2x_msgs.
typedef struct carma_v2x_msgs__msg__SensorDataSharingMessage
{
  j2735_v2x_msgs__msg__MsgCount msg_cnt;
  j2735_v2x_msgs__msg__TemporaryID source_id;
  j3224_v2x_msgs__msg__EquipmentType equipment_type;
  j2735_v2x_msgs__msg__DDateTime sdsm_time_stamp;
  carma_v2x_msgs__msg__Position3D ref_pos;
  carma_v2x_msgs__msg__PositionalAccuracy ref_pos_xy_conf;
  carma_v2x_msgs__msg__DetectedObjectList objects;
  uint8_t presence_vector;
  j2735_v2x_msgs__msg__ElevationConfidence ref_pos_el_conf;
} carma_v2x_msgs__msg__SensorDataSharingMessage;

// Struct for a sequence of carma_v2x_msgs__msg__SensorDataSharingMessage.
typedef struct carma_v2x_msgs__msg__SensorDataSharingMessage__Sequence
{
  carma_v2x_msgs__msg__SensorDataSharingMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} carma_v2x_msgs__msg__SensorDataSharingMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CARMA_V2X_MSGS__MSG__DETAIL__SENSOR_DATA_SHARING_MESSAGE__STRUCT_H_
