// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from carma_planning_msgs:msg/ManeuverParameters.idl
// generated code does not contain a copyright notice

#ifndef CARMA_PLANNING_MSGS__MSG__DETAIL__MANEUVER_PARAMETERS__STRUCT_H_
#define CARMA_PLANNING_MSGS__MSG__DETAIL__MANEUVER_PARAMETERS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'NO_NEGOTIATION'.
enum
{
  carma_planning_msgs__msg__ManeuverParameters__NO_NEGOTIATION = 0
};

/// Constant 'GENERAL_NEGOTIATION'.
enum
{
  carma_planning_msgs__msg__ManeuverParameters__GENERAL_NEGOTIATION = 1
};

/// Constant 'PLATOONING'.
enum
{
  carma_planning_msgs__msg__ManeuverParameters__PLATOONING = 2
};

/// Constant 'HAS_TACTICAL_PLUGIN'.
enum
{
  carma_planning_msgs__msg__ManeuverParameters__HAS_TACTICAL_PLUGIN = 1
};

/// Constant 'HAS_BOOL_META_DATA'.
enum
{
  carma_planning_msgs__msg__ManeuverParameters__HAS_BOOL_META_DATA = 2
};

/// Constant 'HAS_INT_META_DATA'.
enum
{
  carma_planning_msgs__msg__ManeuverParameters__HAS_INT_META_DATA = 4
};

/// Constant 'HAS_FLOAT_META_DATA'.
enum
{
  carma_planning_msgs__msg__ManeuverParameters__HAS_FLOAT_META_DATA = 8
};

/// Constant 'HAS_STRING_META_DATA'.
enum
{
  carma_planning_msgs__msg__ManeuverParameters__HAS_STRING_META_DATA = 16
};

/// Constant 'HAS_TIME_META_DATA'.
enum
{
  carma_planning_msgs__msg__ManeuverParameters__HAS_TIME_META_DATA = 32
};

// Include directives for member types
// Member 'maneuver_id'
// Member 'planning_strategic_plugin'
// Member 'planning_tactical_plugin'
// Member 'string_valued_meta_data'
#include "rosidl_runtime_c/string.h"
// Member 'bool_valued_meta_data'
// Member 'int_valued_meta_data'
// Member 'float_valued_meta_data'
#include "rosidl_runtime_c/primitives_sequence.h"
// Member 'time_valued_meta_data'
#include "builtin_interfaces/msg/detail/time__struct.h"

// Struct defined in msg/ManeuverParameters in the package carma_planning_msgs.
typedef struct carma_planning_msgs__msg__ManeuverParameters
{
  rosidl_runtime_c__String maneuver_id;
  uint8_t negotiation_type;
  rosidl_runtime_c__String planning_strategic_plugin;
  uint16_t presence_vector;
  rosidl_runtime_c__String planning_tactical_plugin;
  rosidl_runtime_c__boolean__Sequence bool_valued_meta_data;
  rosidl_runtime_c__int64__Sequence int_valued_meta_data;
  rosidl_runtime_c__double__Sequence float_valued_meta_data;
  rosidl_runtime_c__String__Sequence string_valued_meta_data;
  builtin_interfaces__msg__Time__Sequence time_valued_meta_data;
} carma_planning_msgs__msg__ManeuverParameters;

// Struct for a sequence of carma_planning_msgs__msg__ManeuverParameters.
typedef struct carma_planning_msgs__msg__ManeuverParameters__Sequence
{
  carma_planning_msgs__msg__ManeuverParameters * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} carma_planning_msgs__msg__ManeuverParameters__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CARMA_PLANNING_MSGS__MSG__DETAIL__MANEUVER_PARAMETERS__STRUCT_H_
