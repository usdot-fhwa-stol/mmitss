// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from carma_v2x_msgs:msg/EmergencyVehicleResponse.idl
// generated code does not contain a copyright notice
#include "carma_v2x_msgs/msg/detail/emergency_vehicle_response__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `m_header`
#include "carma_v2x_msgs/msg/detail/mobility_header__functions.h"
// Member `reason`
#include "rosidl_runtime_c/string_functions.h"

bool
carma_v2x_msgs__msg__EmergencyVehicleResponse__init(carma_v2x_msgs__msg__EmergencyVehicleResponse * msg)
{
  if (!msg) {
    return false;
  }
  // m_header
  if (!carma_v2x_msgs__msg__MobilityHeader__init(&msg->m_header)) {
    carma_v2x_msgs__msg__EmergencyVehicleResponse__fini(msg);
    return false;
  }
  // can_change_lanes
  // reason
  if (!rosidl_runtime_c__String__init(&msg->reason)) {
    carma_v2x_msgs__msg__EmergencyVehicleResponse__fini(msg);
    return false;
  }
  // reason_exists
  return true;
}

void
carma_v2x_msgs__msg__EmergencyVehicleResponse__fini(carma_v2x_msgs__msg__EmergencyVehicleResponse * msg)
{
  if (!msg) {
    return;
  }
  // m_header
  carma_v2x_msgs__msg__MobilityHeader__fini(&msg->m_header);
  // can_change_lanes
  // reason
  rosidl_runtime_c__String__fini(&msg->reason);
  // reason_exists
}

bool
carma_v2x_msgs__msg__EmergencyVehicleResponse__are_equal(const carma_v2x_msgs__msg__EmergencyVehicleResponse * lhs, const carma_v2x_msgs__msg__EmergencyVehicleResponse * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // m_header
  if (!carma_v2x_msgs__msg__MobilityHeader__are_equal(
      &(lhs->m_header), &(rhs->m_header)))
  {
    return false;
  }
  // can_change_lanes
  if (lhs->can_change_lanes != rhs->can_change_lanes) {
    return false;
  }
  // reason
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->reason), &(rhs->reason)))
  {
    return false;
  }
  // reason_exists
  if (lhs->reason_exists != rhs->reason_exists) {
    return false;
  }
  return true;
}

bool
carma_v2x_msgs__msg__EmergencyVehicleResponse__copy(
  const carma_v2x_msgs__msg__EmergencyVehicleResponse * input,
  carma_v2x_msgs__msg__EmergencyVehicleResponse * output)
{
  if (!input || !output) {
    return false;
  }
  // m_header
  if (!carma_v2x_msgs__msg__MobilityHeader__copy(
      &(input->m_header), &(output->m_header)))
  {
    return false;
  }
  // can_change_lanes
  output->can_change_lanes = input->can_change_lanes;
  // reason
  if (!rosidl_runtime_c__String__copy(
      &(input->reason), &(output->reason)))
  {
    return false;
  }
  // reason_exists
  output->reason_exists = input->reason_exists;
  return true;
}

carma_v2x_msgs__msg__EmergencyVehicleResponse *
carma_v2x_msgs__msg__EmergencyVehicleResponse__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  carma_v2x_msgs__msg__EmergencyVehicleResponse * msg = (carma_v2x_msgs__msg__EmergencyVehicleResponse *)allocator.allocate(sizeof(carma_v2x_msgs__msg__EmergencyVehicleResponse), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(carma_v2x_msgs__msg__EmergencyVehicleResponse));
  bool success = carma_v2x_msgs__msg__EmergencyVehicleResponse__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
carma_v2x_msgs__msg__EmergencyVehicleResponse__destroy(carma_v2x_msgs__msg__EmergencyVehicleResponse * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    carma_v2x_msgs__msg__EmergencyVehicleResponse__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
carma_v2x_msgs__msg__EmergencyVehicleResponse__Sequence__init(carma_v2x_msgs__msg__EmergencyVehicleResponse__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  carma_v2x_msgs__msg__EmergencyVehicleResponse * data = NULL;

  if (size) {
    data = (carma_v2x_msgs__msg__EmergencyVehicleResponse *)allocator.zero_allocate(size, sizeof(carma_v2x_msgs__msg__EmergencyVehicleResponse), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = carma_v2x_msgs__msg__EmergencyVehicleResponse__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        carma_v2x_msgs__msg__EmergencyVehicleResponse__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
carma_v2x_msgs__msg__EmergencyVehicleResponse__Sequence__fini(carma_v2x_msgs__msg__EmergencyVehicleResponse__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      carma_v2x_msgs__msg__EmergencyVehicleResponse__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

carma_v2x_msgs__msg__EmergencyVehicleResponse__Sequence *
carma_v2x_msgs__msg__EmergencyVehicleResponse__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  carma_v2x_msgs__msg__EmergencyVehicleResponse__Sequence * array = (carma_v2x_msgs__msg__EmergencyVehicleResponse__Sequence *)allocator.allocate(sizeof(carma_v2x_msgs__msg__EmergencyVehicleResponse__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = carma_v2x_msgs__msg__EmergencyVehicleResponse__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
carma_v2x_msgs__msg__EmergencyVehicleResponse__Sequence__destroy(carma_v2x_msgs__msg__EmergencyVehicleResponse__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    carma_v2x_msgs__msg__EmergencyVehicleResponse__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
carma_v2x_msgs__msg__EmergencyVehicleResponse__Sequence__are_equal(const carma_v2x_msgs__msg__EmergencyVehicleResponse__Sequence * lhs, const carma_v2x_msgs__msg__EmergencyVehicleResponse__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!carma_v2x_msgs__msg__EmergencyVehicleResponse__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
carma_v2x_msgs__msg__EmergencyVehicleResponse__Sequence__copy(
  const carma_v2x_msgs__msg__EmergencyVehicleResponse__Sequence * input,
  carma_v2x_msgs__msg__EmergencyVehicleResponse__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(carma_v2x_msgs__msg__EmergencyVehicleResponse);
    carma_v2x_msgs__msg__EmergencyVehicleResponse * data =
      (carma_v2x_msgs__msg__EmergencyVehicleResponse *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!carma_v2x_msgs__msg__EmergencyVehicleResponse__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          carma_v2x_msgs__msg__EmergencyVehicleResponse__fini(&data[i]);
        }
        free(data);
        return false;
      }
    }
    output->data = data;
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!carma_v2x_msgs__msg__EmergencyVehicleResponse__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
