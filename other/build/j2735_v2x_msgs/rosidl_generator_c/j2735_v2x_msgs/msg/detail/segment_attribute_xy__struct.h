// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from j2735_v2x_msgs:msg/SegmentAttributeXY.idl
// generated code does not contain a copyright notice

#ifndef J2735_V2X_MSGS__MSG__DETAIL__SEGMENT_ATTRIBUTE_XY__STRUCT_H_
#define J2735_V2X_MSGS__MSG__DETAIL__SEGMENT_ATTRIBUTE_XY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'RESERVED'.
enum
{
  j2735_v2x_msgs__msg__SegmentAttributeXY__RESERVED = 0
};

/// Constant 'DONOTBLOCK'.
enum
{
  j2735_v2x_msgs__msg__SegmentAttributeXY__DONOTBLOCK = 1
};

/// Constant 'WHITELINE'.
enum
{
  j2735_v2x_msgs__msg__SegmentAttributeXY__WHITELINE = 2
};

/// Constant 'MERGINGLANELEFT'.
enum
{
  j2735_v2x_msgs__msg__SegmentAttributeXY__MERGINGLANELEFT = 3
};

/// Constant 'MERGINGLANERIGHT'.
enum
{
  j2735_v2x_msgs__msg__SegmentAttributeXY__MERGINGLANERIGHT = 4
};

/// Constant 'CURBONLEFT'.
enum
{
  j2735_v2x_msgs__msg__SegmentAttributeXY__CURBONLEFT = 5
};

/// Constant 'CURBONRIGHT'.
enum
{
  j2735_v2x_msgs__msg__SegmentAttributeXY__CURBONRIGHT = 6
};

/// Constant 'LOADINGZONEONLEFT'.
enum
{
  j2735_v2x_msgs__msg__SegmentAttributeXY__LOADINGZONEONLEFT = 7
};

/// Constant 'LOADINGZONEONRIGHT'.
enum
{
  j2735_v2x_msgs__msg__SegmentAttributeXY__LOADINGZONEONRIGHT = 8
};

/// Constant 'TURNOUTPOINTONLEFT'.
enum
{
  j2735_v2x_msgs__msg__SegmentAttributeXY__TURNOUTPOINTONLEFT = 9
};

/// Constant 'TURNOUTPOINTONRIGHT'.
enum
{
  j2735_v2x_msgs__msg__SegmentAttributeXY__TURNOUTPOINTONRIGHT = 10
};

/// Constant 'ADJACENTPARKINGONLEFT'.
enum
{
  j2735_v2x_msgs__msg__SegmentAttributeXY__ADJACENTPARKINGONLEFT = 11
};

/// Constant 'ADJACENTPARKINGONRIGHT'.
enum
{
  j2735_v2x_msgs__msg__SegmentAttributeXY__ADJACENTPARKINGONRIGHT = 12
};

/// Constant 'ADJACENTBIKELANEONLEFT'.
enum
{
  j2735_v2x_msgs__msg__SegmentAttributeXY__ADJACENTBIKELANEONLEFT = 13
};

/// Constant 'ADJACENTBIKELANEONRIGHT'.
enum
{
  j2735_v2x_msgs__msg__SegmentAttributeXY__ADJACENTBIKELANEONRIGHT = 14
};

/// Constant 'SHAREDBIKELANE'.
enum
{
  j2735_v2x_msgs__msg__SegmentAttributeXY__SHAREDBIKELANE = 15
};

/// Constant 'BIKEBOXINFRONT'.
enum
{
  j2735_v2x_msgs__msg__SegmentAttributeXY__BIKEBOXINFRONT = 16
};

/// Constant 'TRANSITSTOPONLEFT'.
enum
{
  j2735_v2x_msgs__msg__SegmentAttributeXY__TRANSITSTOPONLEFT = 17
};

/// Constant 'TRANSITSTOPONRIGHT'.
enum
{
  j2735_v2x_msgs__msg__SegmentAttributeXY__TRANSITSTOPONRIGHT = 18
};

/// Constant 'TRANSITSTOPINLANE'.
enum
{
  j2735_v2x_msgs__msg__SegmentAttributeXY__TRANSITSTOPINLANE = 19
};

/// Constant 'SHAREDWITHTRACKEDVEHICLE'.
enum
{
  j2735_v2x_msgs__msg__SegmentAttributeXY__SHAREDWITHTRACKEDVEHICLE = 20
};

/// Constant 'SAFEISLAND'.
enum
{
  j2735_v2x_msgs__msg__SegmentAttributeXY__SAFEISLAND = 21
};

/// Constant 'LOWCURBSPRESENT'.
enum
{
  j2735_v2x_msgs__msg__SegmentAttributeXY__LOWCURBSPRESENT = 22
};

/// Constant 'RUMBLESTRIPPRESENT'.
enum
{
  j2735_v2x_msgs__msg__SegmentAttributeXY__RUMBLESTRIPPRESENT = 23
};

/// Constant 'AUDIBLESIGNALINGPRESENT'.
enum
{
  j2735_v2x_msgs__msg__SegmentAttributeXY__AUDIBLESIGNALINGPRESENT = 24
};

/// Constant 'ADAPTIVETIMINGPRESENT'.
enum
{
  j2735_v2x_msgs__msg__SegmentAttributeXY__ADAPTIVETIMINGPRESENT = 25
};

/// Constant 'RFSIGNALREQUESTPRESENT'.
enum
{
  j2735_v2x_msgs__msg__SegmentAttributeXY__RFSIGNALREQUESTPRESENT = 26
};

/// Constant 'PARTIALCURBINTRUSION'.
enum
{
  j2735_v2x_msgs__msg__SegmentAttributeXY__PARTIALCURBINTRUSION = 27
};

/// Constant 'TAPERTOLEFT'.
enum
{
  j2735_v2x_msgs__msg__SegmentAttributeXY__TAPERTOLEFT = 28
};

/// Constant 'TAPERTORIGHT'.
enum
{
  j2735_v2x_msgs__msg__SegmentAttributeXY__TAPERTORIGHT = 29
};

/// Constant 'TAPERTOCENTERLINE'.
enum
{
  j2735_v2x_msgs__msg__SegmentAttributeXY__TAPERTOCENTERLINE = 30
};

/// Constant 'PARALLELPARKING'.
enum
{
  j2735_v2x_msgs__msg__SegmentAttributeXY__PARALLELPARKING = 31
};

/// Constant 'FREEPARKING'.
enum
{
  j2735_v2x_msgs__msg__SegmentAttributeXY__FREEPARKING = 32
};

/// Constant 'TIMERESTRICTIONSONPARKING'.
enum
{
  j2735_v2x_msgs__msg__SegmentAttributeXY__TIMERESTRICTIONSONPARKING = 33
};

/// Constant 'COSTTOPARK'.
enum
{
  j2735_v2x_msgs__msg__SegmentAttributeXY__COSTTOPARK = 34
};

/// Constant 'MIDBLOCKCURBPRESENT'.
enum
{
  j2735_v2x_msgs__msg__SegmentAttributeXY__MIDBLOCKCURBPRESENT = 35
};

/// Constant 'UNEVENPAVEMENTPRESENT'.
enum
{
  j2735_v2x_msgs__msg__SegmentAttributeXY__UNEVENPAVEMENTPRESENT = 36
};

// Struct defined in msg/SegmentAttributeXY in the package j2735_v2x_msgs.
typedef struct j2735_v2x_msgs__msg__SegmentAttributeXY
{
  uint8_t segment_attribute_xy;
} j2735_v2x_msgs__msg__SegmentAttributeXY;

// Struct for a sequence of j2735_v2x_msgs__msg__SegmentAttributeXY.
typedef struct j2735_v2x_msgs__msg__SegmentAttributeXY__Sequence
{
  j2735_v2x_msgs__msg__SegmentAttributeXY * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} j2735_v2x_msgs__msg__SegmentAttributeXY__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // J2735_V2X_MSGS__MSG__DETAIL__SEGMENT_ATTRIBUTE_XY__STRUCT_H_
