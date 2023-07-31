// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from carma_v2x_msgs:msg/EmergencyVehicleResponse.idl
// generated code does not contain a copyright notice

#ifndef CARMA_V2X_MSGS__MSG__DETAIL__EMERGENCY_VEHICLE_RESPONSE__FUNCTIONS_H_
#define CARMA_V2X_MSGS__MSG__DETAIL__EMERGENCY_VEHICLE_RESPONSE__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "carma_v2x_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "carma_v2x_msgs/msg/detail/emergency_vehicle_response__struct.h"

/// Initialize msg/EmergencyVehicleResponse message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * carma_v2x_msgs__msg__EmergencyVehicleResponse
 * )) before or use
 * carma_v2x_msgs__msg__EmergencyVehicleResponse__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_carma_v2x_msgs
bool
carma_v2x_msgs__msg__EmergencyVehicleResponse__init(carma_v2x_msgs__msg__EmergencyVehicleResponse * msg);

/// Finalize msg/EmergencyVehicleResponse message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_carma_v2x_msgs
void
carma_v2x_msgs__msg__EmergencyVehicleResponse__fini(carma_v2x_msgs__msg__EmergencyVehicleResponse * msg);

/// Create msg/EmergencyVehicleResponse message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * carma_v2x_msgs__msg__EmergencyVehicleResponse__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_carma_v2x_msgs
carma_v2x_msgs__msg__EmergencyVehicleResponse *
carma_v2x_msgs__msg__EmergencyVehicleResponse__create();

/// Destroy msg/EmergencyVehicleResponse message.
/**
 * It calls
 * carma_v2x_msgs__msg__EmergencyVehicleResponse__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_carma_v2x_msgs
void
carma_v2x_msgs__msg__EmergencyVehicleResponse__destroy(carma_v2x_msgs__msg__EmergencyVehicleResponse * msg);

/// Check for msg/EmergencyVehicleResponse message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_carma_v2x_msgs
bool
carma_v2x_msgs__msg__EmergencyVehicleResponse__are_equal(const carma_v2x_msgs__msg__EmergencyVehicleResponse * lhs, const carma_v2x_msgs__msg__EmergencyVehicleResponse * rhs);

/// Copy a msg/EmergencyVehicleResponse message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_carma_v2x_msgs
bool
carma_v2x_msgs__msg__EmergencyVehicleResponse__copy(
  const carma_v2x_msgs__msg__EmergencyVehicleResponse * input,
  carma_v2x_msgs__msg__EmergencyVehicleResponse * output);

/// Initialize array of msg/EmergencyVehicleResponse messages.
/**
 * It allocates the memory for the number of elements and calls
 * carma_v2x_msgs__msg__EmergencyVehicleResponse__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_carma_v2x_msgs
bool
carma_v2x_msgs__msg__EmergencyVehicleResponse__Sequence__init(carma_v2x_msgs__msg__EmergencyVehicleResponse__Sequence * array, size_t size);

/// Finalize array of msg/EmergencyVehicleResponse messages.
/**
 * It calls
 * carma_v2x_msgs__msg__EmergencyVehicleResponse__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_carma_v2x_msgs
void
carma_v2x_msgs__msg__EmergencyVehicleResponse__Sequence__fini(carma_v2x_msgs__msg__EmergencyVehicleResponse__Sequence * array);

/// Create array of msg/EmergencyVehicleResponse messages.
/**
 * It allocates the memory for the array and calls
 * carma_v2x_msgs__msg__EmergencyVehicleResponse__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_carma_v2x_msgs
carma_v2x_msgs__msg__EmergencyVehicleResponse__Sequence *
carma_v2x_msgs__msg__EmergencyVehicleResponse__Sequence__create(size_t size);

/// Destroy array of msg/EmergencyVehicleResponse messages.
/**
 * It calls
 * carma_v2x_msgs__msg__EmergencyVehicleResponse__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_carma_v2x_msgs
void
carma_v2x_msgs__msg__EmergencyVehicleResponse__Sequence__destroy(carma_v2x_msgs__msg__EmergencyVehicleResponse__Sequence * array);

/// Check for msg/EmergencyVehicleResponse message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_carma_v2x_msgs
bool
carma_v2x_msgs__msg__EmergencyVehicleResponse__Sequence__are_equal(const carma_v2x_msgs__msg__EmergencyVehicleResponse__Sequence * lhs, const carma_v2x_msgs__msg__EmergencyVehicleResponse__Sequence * rhs);

/// Copy an array of msg/EmergencyVehicleResponse messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_carma_v2x_msgs
bool
carma_v2x_msgs__msg__EmergencyVehicleResponse__Sequence__copy(
  const carma_v2x_msgs__msg__EmergencyVehicleResponse__Sequence * input,
  carma_v2x_msgs__msg__EmergencyVehicleResponse__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // CARMA_V2X_MSGS__MSG__DETAIL__EMERGENCY_VEHICLE_RESPONSE__FUNCTIONS_H_
