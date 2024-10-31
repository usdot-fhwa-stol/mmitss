// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from carma_v2x_msgs:msg/NTCIPEssPrecipRate.idl
// generated code does not contain a copyright notice

#ifndef CARMA_V2X_MSGS__MSG__DETAIL__NTCIP_ESS_PRECIP_RATE__STRUCT_H_
#define CARMA_V2X_MSGS__MSG__DETAIL__NTCIP_ESS_PRECIP_RATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/NTCIPEssPrecipRate in the package carma_v2x_msgs.
typedef struct carma_v2x_msgs__msg__NTCIPEssPrecipRate
{
  float precip_rate;
  bool unavailable;
} carma_v2x_msgs__msg__NTCIPEssPrecipRate;

// Struct for a sequence of carma_v2x_msgs__msg__NTCIPEssPrecipRate.
typedef struct carma_v2x_msgs__msg__NTCIPEssPrecipRate__Sequence
{
  carma_v2x_msgs__msg__NTCIPEssPrecipRate * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} carma_v2x_msgs__msg__NTCIPEssPrecipRate__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CARMA_V2X_MSGS__MSG__DETAIL__NTCIP_ESS_PRECIP_RATE__STRUCT_H_
