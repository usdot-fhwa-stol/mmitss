// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from carma_v2x_msgs:msg/ComputedLane.idl
// generated code does not contain a copyright notice
#include "carma_v2x_msgs/msg/detail/computed_lane__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `offset_x_axis`
// Member `offset_y_axis`
#include "carma_v2x_msgs/msg/detail/offset_axis__functions.h"

bool
carma_v2x_msgs__msg__ComputedLane__init(carma_v2x_msgs__msg__ComputedLane * msg)
{
  if (!msg) {
    return false;
  }
  // reference_lane_id
  // offset_x_axis
  if (!carma_v2x_msgs__msg__OffsetAxis__init(&msg->offset_x_axis)) {
    carma_v2x_msgs__msg__ComputedLane__fini(msg);
    return false;
  }
  // offset_y_axis
  if (!carma_v2x_msgs__msg__OffsetAxis__init(&msg->offset_y_axis)) {
    carma_v2x_msgs__msg__ComputedLane__fini(msg);
    return false;
  }
  // rotate_xy
  // rotatexy_exists
  // scale_x_axis
  // scale_x_axis_exists
  // scale_y_axis
  // scale_y_axis_exists
  return true;
}

void
carma_v2x_msgs__msg__ComputedLane__fini(carma_v2x_msgs__msg__ComputedLane * msg)
{
  if (!msg) {
    return;
  }
  // reference_lane_id
  // offset_x_axis
  carma_v2x_msgs__msg__OffsetAxis__fini(&msg->offset_x_axis);
  // offset_y_axis
  carma_v2x_msgs__msg__OffsetAxis__fini(&msg->offset_y_axis);
  // rotate_xy
  // rotatexy_exists
  // scale_x_axis
  // scale_x_axis_exists
  // scale_y_axis
  // scale_y_axis_exists
}

bool
carma_v2x_msgs__msg__ComputedLane__are_equal(const carma_v2x_msgs__msg__ComputedLane * lhs, const carma_v2x_msgs__msg__ComputedLane * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // reference_lane_id
  if (lhs->reference_lane_id != rhs->reference_lane_id) {
    return false;
  }
  // offset_x_axis
  if (!carma_v2x_msgs__msg__OffsetAxis__are_equal(
      &(lhs->offset_x_axis), &(rhs->offset_x_axis)))
  {
    return false;
  }
  // offset_y_axis
  if (!carma_v2x_msgs__msg__OffsetAxis__are_equal(
      &(lhs->offset_y_axis), &(rhs->offset_y_axis)))
  {
    return false;
  }
  // rotate_xy
  if (lhs->rotate_xy != rhs->rotate_xy) {
    return false;
  }
  // rotatexy_exists
  if (lhs->rotatexy_exists != rhs->rotatexy_exists) {
    return false;
  }
  // scale_x_axis
  if (lhs->scale_x_axis != rhs->scale_x_axis) {
    return false;
  }
  // scale_x_axis_exists
  if (lhs->scale_x_axis_exists != rhs->scale_x_axis_exists) {
    return false;
  }
  // scale_y_axis
  if (lhs->scale_y_axis != rhs->scale_y_axis) {
    return false;
  }
  // scale_y_axis_exists
  if (lhs->scale_y_axis_exists != rhs->scale_y_axis_exists) {
    return false;
  }
  return true;
}

bool
carma_v2x_msgs__msg__ComputedLane__copy(
  const carma_v2x_msgs__msg__ComputedLane * input,
  carma_v2x_msgs__msg__ComputedLane * output)
{
  if (!input || !output) {
    return false;
  }
  // reference_lane_id
  output->reference_lane_id = input->reference_lane_id;
  // offset_x_axis
  if (!carma_v2x_msgs__msg__OffsetAxis__copy(
      &(input->offset_x_axis), &(output->offset_x_axis)))
  {
    return false;
  }
  // offset_y_axis
  if (!carma_v2x_msgs__msg__OffsetAxis__copy(
      &(input->offset_y_axis), &(output->offset_y_axis)))
  {
    return false;
  }
  // rotate_xy
  output->rotate_xy = input->rotate_xy;
  // rotatexy_exists
  output->rotatexy_exists = input->rotatexy_exists;
  // scale_x_axis
  output->scale_x_axis = input->scale_x_axis;
  // scale_x_axis_exists
  output->scale_x_axis_exists = input->scale_x_axis_exists;
  // scale_y_axis
  output->scale_y_axis = input->scale_y_axis;
  // scale_y_axis_exists
  output->scale_y_axis_exists = input->scale_y_axis_exists;
  return true;
}

carma_v2x_msgs__msg__ComputedLane *
carma_v2x_msgs__msg__ComputedLane__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  carma_v2x_msgs__msg__ComputedLane * msg = (carma_v2x_msgs__msg__ComputedLane *)allocator.allocate(sizeof(carma_v2x_msgs__msg__ComputedLane), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(carma_v2x_msgs__msg__ComputedLane));
  bool success = carma_v2x_msgs__msg__ComputedLane__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
carma_v2x_msgs__msg__ComputedLane__destroy(carma_v2x_msgs__msg__ComputedLane * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    carma_v2x_msgs__msg__ComputedLane__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
carma_v2x_msgs__msg__ComputedLane__Sequence__init(carma_v2x_msgs__msg__ComputedLane__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  carma_v2x_msgs__msg__ComputedLane * data = NULL;

  if (size) {
    data = (carma_v2x_msgs__msg__ComputedLane *)allocator.zero_allocate(size, sizeof(carma_v2x_msgs__msg__ComputedLane), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = carma_v2x_msgs__msg__ComputedLane__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        carma_v2x_msgs__msg__ComputedLane__fini(&data[i - 1]);
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
carma_v2x_msgs__msg__ComputedLane__Sequence__fini(carma_v2x_msgs__msg__ComputedLane__Sequence * array)
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
      carma_v2x_msgs__msg__ComputedLane__fini(&array->data[i]);
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

carma_v2x_msgs__msg__ComputedLane__Sequence *
carma_v2x_msgs__msg__ComputedLane__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  carma_v2x_msgs__msg__ComputedLane__Sequence * array = (carma_v2x_msgs__msg__ComputedLane__Sequence *)allocator.allocate(sizeof(carma_v2x_msgs__msg__ComputedLane__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = carma_v2x_msgs__msg__ComputedLane__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
carma_v2x_msgs__msg__ComputedLane__Sequence__destroy(carma_v2x_msgs__msg__ComputedLane__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    carma_v2x_msgs__msg__ComputedLane__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
carma_v2x_msgs__msg__ComputedLane__Sequence__are_equal(const carma_v2x_msgs__msg__ComputedLane__Sequence * lhs, const carma_v2x_msgs__msg__ComputedLane__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!carma_v2x_msgs__msg__ComputedLane__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
carma_v2x_msgs__msg__ComputedLane__Sequence__copy(
  const carma_v2x_msgs__msg__ComputedLane__Sequence * input,
  carma_v2x_msgs__msg__ComputedLane__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(carma_v2x_msgs__msg__ComputedLane);
    carma_v2x_msgs__msg__ComputedLane * data =
      (carma_v2x_msgs__msg__ComputedLane *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!carma_v2x_msgs__msg__ComputedLane__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          carma_v2x_msgs__msg__ComputedLane__fini(&data[i]);
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
    if (!carma_v2x_msgs__msg__ComputedLane__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
