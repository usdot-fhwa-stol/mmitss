// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from j2735_v2x_msgs:msg/ElevationConfidence.idl
// generated code does not contain a copyright notice

#ifndef J2735_V2X_MSGS__MSG__DETAIL__ELEVATION_CONFIDENCE__STRUCT_H_
#define J2735_V2X_MSGS__MSG__DETAIL__ELEVATION_CONFIDENCE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'UNAVAILABLE'.
enum
{
  j2735_v2x_msgs__msg__ElevationConfidence__UNAVAILABLE = 0
};

/// Constant 'ELEV_500_00'.
enum
{
  j2735_v2x_msgs__msg__ElevationConfidence__ELEV_500_00 = 1
};

/// Constant 'ELEV_200_00'.
enum
{
  j2735_v2x_msgs__msg__ElevationConfidence__ELEV_200_00 = 2
};

/// Constant 'ELEV_100_00'.
enum
{
  j2735_v2x_msgs__msg__ElevationConfidence__ELEV_100_00 = 3
};

/// Constant 'ELEV_050_00'.
enum
{
  j2735_v2x_msgs__msg__ElevationConfidence__ELEV_050_00 = 4
};

/// Constant 'ELEV_020_00'.
enum
{
  j2735_v2x_msgs__msg__ElevationConfidence__ELEV_020_00 = 5
};

/// Constant 'ELEV_010_00'.
enum
{
  j2735_v2x_msgs__msg__ElevationConfidence__ELEV_010_00 = 6
};

/// Constant 'ELEV_005_00'.
enum
{
  j2735_v2x_msgs__msg__ElevationConfidence__ELEV_005_00 = 7
};

/// Constant 'ELEV_002_00'.
enum
{
  j2735_v2x_msgs__msg__ElevationConfidence__ELEV_002_00 = 8
};

/// Constant 'ELEV_001_00'.
enum
{
  j2735_v2x_msgs__msg__ElevationConfidence__ELEV_001_00 = 9
};

/// Constant 'ELEV_000_50'.
enum
{
  j2735_v2x_msgs__msg__ElevationConfidence__ELEV_000_50 = 10
};

/// Constant 'ELEV_000_20'.
enum
{
  j2735_v2x_msgs__msg__ElevationConfidence__ELEV_000_20 = 11
};

/// Constant 'ELEV_000_10'.
enum
{
  j2735_v2x_msgs__msg__ElevationConfidence__ELEV_000_10 = 12
};

/// Constant 'ELEV_000_05'.
enum
{
  j2735_v2x_msgs__msg__ElevationConfidence__ELEV_000_05 = 13
};

/// Constant 'ELEV_000_02'.
enum
{
  j2735_v2x_msgs__msg__ElevationConfidence__ELEV_000_02 = 14
};

/// Constant 'ELEV_000_01'.
enum
{
  j2735_v2x_msgs__msg__ElevationConfidence__ELEV_000_01 = 15
};

// Struct defined in msg/ElevationConfidence in the package j2735_v2x_msgs.
typedef struct j2735_v2x_msgs__msg__ElevationConfidence
{
  uint8_t confidence;
} j2735_v2x_msgs__msg__ElevationConfidence;

// Struct for a sequence of j2735_v2x_msgs__msg__ElevationConfidence.
typedef struct j2735_v2x_msgs__msg__ElevationConfidence__Sequence
{
  j2735_v2x_msgs__msg__ElevationConfidence * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} j2735_v2x_msgs__msg__ElevationConfidence__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // J2735_V2X_MSGS__MSG__DETAIL__ELEVATION_CONFIDENCE__STRUCT_H_
