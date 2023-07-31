// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from carma_v2x_msgs:msg/LaneDataAttribute.idl
// generated code does not contain a copyright notice
#include "carma_v2x_msgs/msg/detail/lane_data_attribute__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `speed_limits`
#include "carma_v2x_msgs/msg/detail/regulatory_speed_limit__functions.h"

bool
carma_v2x_msgs__msg__LaneDataAttribute__init(carma_v2x_msgs__msg__LaneDataAttribute * msg)
{
  if (!msg) {
    return false;
  }
  // choice
  // path_end_point_angle
  // lane_crown_point_center
  // lane_crown_point_right
  // lane_crown_point_left
  // lane_angle
  // speed_limits
  if (!carma_v2x_msgs__msg__RegulatorySpeedLimit__Sequence__init(&msg->speed_limits, 0)) {
    carma_v2x_msgs__msg__LaneDataAttribute__fini(msg);
    return false;
  }
  return true;
}

void
carma_v2x_msgs__msg__LaneDataAttribute__fini(carma_v2x_msgs__msg__LaneDataAttribute * msg)
{
  if (!msg) {
    return;
  }
  // choice
  // path_end_point_angle
  // lane_crown_point_center
  // lane_crown_point_right
  // lane_crown_point_left
  // lane_angle
  // speed_limits
  carma_v2x_msgs__msg__RegulatorySpeedLimit__Sequence__fini(&msg->speed_limits);
}

bool
carma_v2x_msgs__msg__LaneDataAttribute__are_equal(const carma_v2x_msgs__msg__LaneDataAttribute * lhs, const carma_v2x_msgs__msg__LaneDataAttribute * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // choice
  if (lhs->choice != rhs->choice) {
    return false;
  }
  // path_end_point_angle
  if (lhs->path_end_point_angle != rhs->path_end_point_angle) {
    return false;
  }
  // lane_crown_point_center
  if (lhs->lane_crown_point_center != rhs->lane_crown_point_center) {
    return false;
  }
  // lane_crown_point_right
  if (lhs->lane_crown_point_right != rhs->lane_crown_point_right) {
    return false;
  }
  // lane_crown_point_left
  if (lhs->lane_crown_point_left != rhs->lane_crown_point_left) {
    return false;
  }
  // lane_angle
  if (lhs->lane_angle != rhs->lane_angle) {
    return false;
  }
  // speed_limits
  if (!carma_v2x_msgs__msg__RegulatorySpeedLimit__Sequence__are_equal(
      &(lhs->speed_limits), &(rhs->speed_limits)))
  {
    return false;
  }
  return true;
}

bool
carma_v2x_msgs__msg__LaneDataAttribute__copy(
  const carma_v2x_msgs__msg__LaneDataAttribute * input,
  carma_v2x_msgs__msg__LaneDataAttribute * output)
{
  if (!input || !output) {
    return false;
  }
  // choice
  output->choice = input->choice;
  // path_end_point_angle
  output->path_end_point_angle = input->path_end_point_angle;
  // lane_crown_point_center
  output->lane_crown_point_center = input->lane_crown_point_center;
  // lane_crown_point_right
  output->lane_crown_point_right = input->lane_crown_point_right;
  // lane_crown_point_left
  output->lane_crown_point_left = input->lane_crown_point_left;
  // lane_angle
  output->lane_angle = input->lane_angle;
  // speed_limits
  if (!carma_v2x_msgs__msg__RegulatorySpeedLimit__Sequence__copy(
      &(input->speed_limits), &(output->speed_limits)))
  {
    return false;
  }
  return true;
}

carma_v2x_msgs__msg__LaneDataAttribute *
carma_v2x_msgs__msg__LaneDataAttribute__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  carma_v2x_msgs__msg__LaneDataAttribute * msg = (carma_v2x_msgs__msg__LaneDataAttribute *)allocator.allocate(sizeof(carma_v2x_msgs__msg__LaneDataAttribute), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(carma_v2x_msgs__msg__LaneDataAttribute));
  bool success = carma_v2x_msgs__msg__LaneDataAttribute__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
carma_v2x_msgs__msg__LaneDataAttribute__destroy(carma_v2x_msgs__msg__LaneDataAttribute * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    carma_v2x_msgs__msg__LaneDataAttribute__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
carma_v2x_msgs__msg__LaneDataAttribute__Sequence__init(carma_v2x_msgs__msg__LaneDataAttribute__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  carma_v2x_msgs__msg__LaneDataAttribute * data = NULL;

  if (size) {
    data = (carma_v2x_msgs__msg__LaneDataAttribute *)allocator.zero_allocate(size, sizeof(carma_v2x_msgs__msg__LaneDataAttribute), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = carma_v2x_msgs__msg__LaneDataAttribute__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        carma_v2x_msgs__msg__LaneDataAttribute__fini(&data[i - 1]);
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
carma_v2x_msgs__msg__LaneDataAttribute__Sequence__fini(carma_v2x_msgs__msg__LaneDataAttribute__Sequence * array)
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
      carma_v2x_msgs__msg__LaneDataAttribute__fini(&array->data[i]);
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

carma_v2x_msgs__msg__LaneDataAttribute__Sequence *
carma_v2x_msgs__msg__LaneDataAttribute__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  carma_v2x_msgs__msg__LaneDataAttribute__Sequence * array = (carma_v2x_msgs__msg__LaneDataAttribute__Sequence *)allocator.allocate(sizeof(carma_v2x_msgs__msg__LaneDataAttribute__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = carma_v2x_msgs__msg__LaneDataAttribute__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
carma_v2x_msgs__msg__LaneDataAttribute__Sequence__destroy(carma_v2x_msgs__msg__LaneDataAttribute__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    carma_v2x_msgs__msg__LaneDataAttribute__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
carma_v2x_msgs__msg__LaneDataAttribute__Sequence__are_equal(const carma_v2x_msgs__msg__LaneDataAttribute__Sequence * lhs, const carma_v2x_msgs__msg__LaneDataAttribute__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!carma_v2x_msgs__msg__LaneDataAttribute__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
carma_v2x_msgs__msg__LaneDataAttribute__Sequence__copy(
  const carma_v2x_msgs__msg__LaneDataAttribute__Sequence * input,
  carma_v2x_msgs__msg__LaneDataAttribute__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(carma_v2x_msgs__msg__LaneDataAttribute);
    carma_v2x_msgs__msg__LaneDataAttribute * data =
      (carma_v2x_msgs__msg__LaneDataAttribute *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!carma_v2x_msgs__msg__LaneDataAttribute__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          carma_v2x_msgs__msg__LaneDataAttribute__fini(&data[i]);
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
    if (!carma_v2x_msgs__msg__LaneDataAttribute__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
