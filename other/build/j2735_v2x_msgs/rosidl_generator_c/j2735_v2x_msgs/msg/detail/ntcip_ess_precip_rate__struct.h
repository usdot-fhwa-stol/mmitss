// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from j2735_v2x_msgs:msg/NTCIPEssPrecipRate.idl
// generated code does not contain a copyright notice

#ifndef J2735_V2X_MSGS__MSG__DETAIL__NTCIP_ESS_PRECIP_RATE__STRUCT_H_
#define J2735_V2X_MSGS__MSG__DETAIL__NTCIP_ESS_PRECIP_RATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'ERROR_OR_MISSING_VALUE'.
enum
{
  j2735_v2x_msgs__msg__NTCIPEssPrecipRate__ERROR_OR_MISSING_VALUE = 65535
};

// Struct defined in msg/NTCIPEssPrecipRate in the package j2735_v2x_msgs.
typedef struct j2735_v2x_msgs__msg__NTCIPEssPrecipRate
{
  uint16_t precip_rate;
} j2735_v2x_msgs__msg__NTCIPEssPrecipRate;

// Struct for a sequence of j2735_v2x_msgs__msg__NTCIPEssPrecipRate.
typedef struct j2735_v2x_msgs__msg__NTCIPEssPrecipRate__Sequence
{
  j2735_v2x_msgs__msg__NTCIPEssPrecipRate * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} j2735_v2x_msgs__msg__NTCIPEssPrecipRate__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // J2735_V2X_MSGS__MSG__DETAIL__NTCIP_ESS_PRECIP_RATE__STRUCT_H_
