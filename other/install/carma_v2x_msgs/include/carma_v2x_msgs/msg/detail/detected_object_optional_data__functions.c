// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from carma_v2x_msgs:msg/DetectedObjectOptionalData.idl
// generated code does not contain a copyright notice
#include "carma_v2x_msgs/msg/detail/detected_object_optional_data__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `det_veh`
#include "carma_v2x_msgs/msg/detail/detected_vehicle_data__functions.h"
// Member `det_vru`
#include "carma_v2x_msgs/msg/detail/detected_vru_data__functions.h"
// Member `det_obst`
#include "carma_v2x_msgs/msg/detail/detected_obstacle_data__functions.h"

bool
carma_v2x_msgs__msg__DetectedObjectOptionalData__init(carma_v2x_msgs__msg__DetectedObjectOptionalData * msg)
{
  if (!msg) {
    return false;
  }
  // choice
  // det_veh
  if (!carma_v2x_msgs__msg__DetectedVehicleData__init(&msg->det_veh)) {
    carma_v2x_msgs__msg__DetectedObjectOptionalData__fini(msg);
    return false;
  }
  // det_vru
  if (!carma_v2x_msgs__msg__DetectedVRUData__init(&msg->det_vru)) {
    carma_v2x_msgs__msg__DetectedObjectOptionalData__fini(msg);
    return false;
  }
  // det_obst
  if (!carma_v2x_msgs__msg__DetectedObstacleData__init(&msg->det_obst)) {
    carma_v2x_msgs__msg__DetectedObjectOptionalData__fini(msg);
    return false;
  }
  return true;
}

void
carma_v2x_msgs__msg__DetectedObjectOptionalData__fini(carma_v2x_msgs__msg__DetectedObjectOptionalData * msg)
{
  if (!msg) {
    return;
  }
  // choice
  // det_veh
  carma_v2x_msgs__msg__DetectedVehicleData__fini(&msg->det_veh);
  // det_vru
  carma_v2x_msgs__msg__DetectedVRUData__fini(&msg->det_vru);
  // det_obst
  carma_v2x_msgs__msg__DetectedObstacleData__fini(&msg->det_obst);
}

bool
carma_v2x_msgs__msg__DetectedObjectOptionalData__are_equal(const carma_v2x_msgs__msg__DetectedObjectOptionalData * lhs, const carma_v2x_msgs__msg__DetectedObjectOptionalData * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // choice
  if (lhs->choice != rhs->choice) {
    return false;
  }
  // det_veh
  if (!carma_v2x_msgs__msg__DetectedVehicleData__are_equal(
      &(lhs->det_veh), &(rhs->det_veh)))
  {
    return false;
  }
  // det_vru
  if (!carma_v2x_msgs__msg__DetectedVRUData__are_equal(
      &(lhs->det_vru), &(rhs->det_vru)))
  {
    return false;
  }
  // det_obst
  if (!carma_v2x_msgs__msg__DetectedObstacleData__are_equal(
      &(lhs->det_obst), &(rhs->det_obst)))
  {
    return false;
  }
  return true;
}

bool
carma_v2x_msgs__msg__DetectedObjectOptionalData__copy(
  const carma_v2x_msgs__msg__DetectedObjectOptionalData * input,
  carma_v2x_msgs__msg__DetectedObjectOptionalData * output)
{
  if (!input || !output) {
    return false;
  }
  // choice
  output->choice = input->choice;
  // det_veh
  if (!carma_v2x_msgs__msg__DetectedVehicleData__copy(
      &(input->det_veh), &(output->det_veh)))
  {
    return false;
  }
  // det_vru
  if (!carma_v2x_msgs__msg__DetectedVRUData__copy(
      &(input->det_vru), &(output->det_vru)))
  {
    return false;
  }
  // det_obst
  if (!carma_v2x_msgs__msg__DetectedObstacleData__copy(
      &(input->det_obst), &(output->det_obst)))
  {
    return false;
  }
  return true;
}

carma_v2x_msgs__msg__DetectedObjectOptionalData *
carma_v2x_msgs__msg__DetectedObjectOptionalData__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  carma_v2x_msgs__msg__DetectedObjectOptionalData * msg = (carma_v2x_msgs__msg__DetectedObjectOptionalData *)allocator.allocate(sizeof(carma_v2x_msgs__msg__DetectedObjectOptionalData), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(carma_v2x_msgs__msg__DetectedObjectOptionalData));
  bool success = carma_v2x_msgs__msg__DetectedObjectOptionalData__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
carma_v2x_msgs__msg__DetectedObjectOptionalData__destroy(carma_v2x_msgs__msg__DetectedObjectOptionalData * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    carma_v2x_msgs__msg__DetectedObjectOptionalData__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
carma_v2x_msgs__msg__DetectedObjectOptionalData__Sequence__init(carma_v2x_msgs__msg__DetectedObjectOptionalData__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  carma_v2x_msgs__msg__DetectedObjectOptionalData * data = NULL;

  if (size) {
    data = (carma_v2x_msgs__msg__DetectedObjectOptionalData *)allocator.zero_allocate(size, sizeof(carma_v2x_msgs__msg__DetectedObjectOptionalData), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = carma_v2x_msgs__msg__DetectedObjectOptionalData__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        carma_v2x_msgs__msg__DetectedObjectOptionalData__fini(&data[i - 1]);
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
carma_v2x_msgs__msg__DetectedObjectOptionalData__Sequence__fini(carma_v2x_msgs__msg__DetectedObjectOptionalData__Sequence * array)
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
      carma_v2x_msgs__msg__DetectedObjectOptionalData__fini(&array->data[i]);
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

carma_v2x_msgs__msg__DetectedObjectOptionalData__Sequence *
carma_v2x_msgs__msg__DetectedObjectOptionalData__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  carma_v2x_msgs__msg__DetectedObjectOptionalData__Sequence * array = (carma_v2x_msgs__msg__DetectedObjectOptionalData__Sequence *)allocator.allocate(sizeof(carma_v2x_msgs__msg__DetectedObjectOptionalData__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = carma_v2x_msgs__msg__DetectedObjectOptionalData__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
carma_v2x_msgs__msg__DetectedObjectOptionalData__Sequence__destroy(carma_v2x_msgs__msg__DetectedObjectOptionalData__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    carma_v2x_msgs__msg__DetectedObjectOptionalData__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
carma_v2x_msgs__msg__DetectedObjectOptionalData__Sequence__are_equal(const carma_v2x_msgs__msg__DetectedObjectOptionalData__Sequence * lhs, const carma_v2x_msgs__msg__DetectedObjectOptionalData__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!carma_v2x_msgs__msg__DetectedObjectOptionalData__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
carma_v2x_msgs__msg__DetectedObjectOptionalData__Sequence__copy(
  const carma_v2x_msgs__msg__DetectedObjectOptionalData__Sequence * input,
  carma_v2x_msgs__msg__DetectedObjectOptionalData__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(carma_v2x_msgs__msg__DetectedObjectOptionalData);
    carma_v2x_msgs__msg__DetectedObjectOptionalData * data =
      (carma_v2x_msgs__msg__DetectedObjectOptionalData *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!carma_v2x_msgs__msg__DetectedObjectOptionalData__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          carma_v2x_msgs__msg__DetectedObjectOptionalData__fini(&data[i]);
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
    if (!carma_v2x_msgs__msg__DetectedObjectOptionalData__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
