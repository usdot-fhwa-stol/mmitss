// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from carma_v2x_msgs:msg/NodeAttributeSetXY.idl
// generated code does not contain a copyright notice
#include "carma_v2x_msgs/msg/detail/node_attribute_set_xy__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `local_node`
#include "j2735_v2x_msgs/msg/detail/node_attribute_xy__functions.h"
// Member `disabled`
// Member `enabled`
#include "j2735_v2x_msgs/msg/detail/segment_attribute_xy__functions.h"
// Member `lane_attribute_list`
#include "carma_v2x_msgs/msg/detail/lane_data_attribute__functions.h"

bool
carma_v2x_msgs__msg__NodeAttributeSetXY__init(carma_v2x_msgs__msg__NodeAttributeSetXY * msg)
{
  if (!msg) {
    return false;
  }
  // local_node
  if (!j2735_v2x_msgs__msg__NodeAttributeXY__Sequence__init(&msg->local_node, 0)) {
    carma_v2x_msgs__msg__NodeAttributeSetXY__fini(msg);
    return false;
  }
  // local_node_exists
  // disabled
  if (!j2735_v2x_msgs__msg__SegmentAttributeXY__Sequence__init(&msg->disabled, 0)) {
    carma_v2x_msgs__msg__NodeAttributeSetXY__fini(msg);
    return false;
  }
  // disabled_exists
  // enabled
  if (!j2735_v2x_msgs__msg__SegmentAttributeXY__Sequence__init(&msg->enabled, 0)) {
    carma_v2x_msgs__msg__NodeAttributeSetXY__fini(msg);
    return false;
  }
  // enabled_exists
  // lane_attribute_list
  if (!carma_v2x_msgs__msg__LaneDataAttribute__Sequence__init(&msg->lane_attribute_list, 0)) {
    carma_v2x_msgs__msg__NodeAttributeSetXY__fini(msg);
    return false;
  }
  // data_exists
  // d_width
  // d_width_exists
  // d_elevation
  // d_elevation_exists
  return true;
}

void
carma_v2x_msgs__msg__NodeAttributeSetXY__fini(carma_v2x_msgs__msg__NodeAttributeSetXY * msg)
{
  if (!msg) {
    return;
  }
  // local_node
  j2735_v2x_msgs__msg__NodeAttributeXY__Sequence__fini(&msg->local_node);
  // local_node_exists
  // disabled
  j2735_v2x_msgs__msg__SegmentAttributeXY__Sequence__fini(&msg->disabled);
  // disabled_exists
  // enabled
  j2735_v2x_msgs__msg__SegmentAttributeXY__Sequence__fini(&msg->enabled);
  // enabled_exists
  // lane_attribute_list
  carma_v2x_msgs__msg__LaneDataAttribute__Sequence__fini(&msg->lane_attribute_list);
  // data_exists
  // d_width
  // d_width_exists
  // d_elevation
  // d_elevation_exists
}

bool
carma_v2x_msgs__msg__NodeAttributeSetXY__are_equal(const carma_v2x_msgs__msg__NodeAttributeSetXY * lhs, const carma_v2x_msgs__msg__NodeAttributeSetXY * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // local_node
  if (!j2735_v2x_msgs__msg__NodeAttributeXY__Sequence__are_equal(
      &(lhs->local_node), &(rhs->local_node)))
  {
    return false;
  }
  // local_node_exists
  if (lhs->local_node_exists != rhs->local_node_exists) {
    return false;
  }
  // disabled
  if (!j2735_v2x_msgs__msg__SegmentAttributeXY__Sequence__are_equal(
      &(lhs->disabled), &(rhs->disabled)))
  {
    return false;
  }
  // disabled_exists
  if (lhs->disabled_exists != rhs->disabled_exists) {
    return false;
  }
  // enabled
  if (!j2735_v2x_msgs__msg__SegmentAttributeXY__Sequence__are_equal(
      &(lhs->enabled), &(rhs->enabled)))
  {
    return false;
  }
  // enabled_exists
  if (lhs->enabled_exists != rhs->enabled_exists) {
    return false;
  }
  // lane_attribute_list
  if (!carma_v2x_msgs__msg__LaneDataAttribute__Sequence__are_equal(
      &(lhs->lane_attribute_list), &(rhs->lane_attribute_list)))
  {
    return false;
  }
  // data_exists
  if (lhs->data_exists != rhs->data_exists) {
    return false;
  }
  // d_width
  if (lhs->d_width != rhs->d_width) {
    return false;
  }
  // d_width_exists
  if (lhs->d_width_exists != rhs->d_width_exists) {
    return false;
  }
  // d_elevation
  if (lhs->d_elevation != rhs->d_elevation) {
    return false;
  }
  // d_elevation_exists
  if (lhs->d_elevation_exists != rhs->d_elevation_exists) {
    return false;
  }
  return true;
}

bool
carma_v2x_msgs__msg__NodeAttributeSetXY__copy(
  const carma_v2x_msgs__msg__NodeAttributeSetXY * input,
  carma_v2x_msgs__msg__NodeAttributeSetXY * output)
{
  if (!input || !output) {
    return false;
  }
  // local_node
  if (!j2735_v2x_msgs__msg__NodeAttributeXY__Sequence__copy(
      &(input->local_node), &(output->local_node)))
  {
    return false;
  }
  // local_node_exists
  output->local_node_exists = input->local_node_exists;
  // disabled
  if (!j2735_v2x_msgs__msg__SegmentAttributeXY__Sequence__copy(
      &(input->disabled), &(output->disabled)))
  {
    return false;
  }
  // disabled_exists
  output->disabled_exists = input->disabled_exists;
  // enabled
  if (!j2735_v2x_msgs__msg__SegmentAttributeXY__Sequence__copy(
      &(input->enabled), &(output->enabled)))
  {
    return false;
  }
  // enabled_exists
  output->enabled_exists = input->enabled_exists;
  // lane_attribute_list
  if (!carma_v2x_msgs__msg__LaneDataAttribute__Sequence__copy(
      &(input->lane_attribute_list), &(output->lane_attribute_list)))
  {
    return false;
  }
  // data_exists
  output->data_exists = input->data_exists;
  // d_width
  output->d_width = input->d_width;
  // d_width_exists
  output->d_width_exists = input->d_width_exists;
  // d_elevation
  output->d_elevation = input->d_elevation;
  // d_elevation_exists
  output->d_elevation_exists = input->d_elevation_exists;
  return true;
}

carma_v2x_msgs__msg__NodeAttributeSetXY *
carma_v2x_msgs__msg__NodeAttributeSetXY__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  carma_v2x_msgs__msg__NodeAttributeSetXY * msg = (carma_v2x_msgs__msg__NodeAttributeSetXY *)allocator.allocate(sizeof(carma_v2x_msgs__msg__NodeAttributeSetXY), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(carma_v2x_msgs__msg__NodeAttributeSetXY));
  bool success = carma_v2x_msgs__msg__NodeAttributeSetXY__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
carma_v2x_msgs__msg__NodeAttributeSetXY__destroy(carma_v2x_msgs__msg__NodeAttributeSetXY * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    carma_v2x_msgs__msg__NodeAttributeSetXY__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
carma_v2x_msgs__msg__NodeAttributeSetXY__Sequence__init(carma_v2x_msgs__msg__NodeAttributeSetXY__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  carma_v2x_msgs__msg__NodeAttributeSetXY * data = NULL;

  if (size) {
    data = (carma_v2x_msgs__msg__NodeAttributeSetXY *)allocator.zero_allocate(size, sizeof(carma_v2x_msgs__msg__NodeAttributeSetXY), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = carma_v2x_msgs__msg__NodeAttributeSetXY__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        carma_v2x_msgs__msg__NodeAttributeSetXY__fini(&data[i - 1]);
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
carma_v2x_msgs__msg__NodeAttributeSetXY__Sequence__fini(carma_v2x_msgs__msg__NodeAttributeSetXY__Sequence * array)
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
      carma_v2x_msgs__msg__NodeAttributeSetXY__fini(&array->data[i]);
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

carma_v2x_msgs__msg__NodeAttributeSetXY__Sequence *
carma_v2x_msgs__msg__NodeAttributeSetXY__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  carma_v2x_msgs__msg__NodeAttributeSetXY__Sequence * array = (carma_v2x_msgs__msg__NodeAttributeSetXY__Sequence *)allocator.allocate(sizeof(carma_v2x_msgs__msg__NodeAttributeSetXY__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = carma_v2x_msgs__msg__NodeAttributeSetXY__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
carma_v2x_msgs__msg__NodeAttributeSetXY__Sequence__destroy(carma_v2x_msgs__msg__NodeAttributeSetXY__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    carma_v2x_msgs__msg__NodeAttributeSetXY__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
carma_v2x_msgs__msg__NodeAttributeSetXY__Sequence__are_equal(const carma_v2x_msgs__msg__NodeAttributeSetXY__Sequence * lhs, const carma_v2x_msgs__msg__NodeAttributeSetXY__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!carma_v2x_msgs__msg__NodeAttributeSetXY__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
carma_v2x_msgs__msg__NodeAttributeSetXY__Sequence__copy(
  const carma_v2x_msgs__msg__NodeAttributeSetXY__Sequence * input,
  carma_v2x_msgs__msg__NodeAttributeSetXY__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(carma_v2x_msgs__msg__NodeAttributeSetXY);
    carma_v2x_msgs__msg__NodeAttributeSetXY * data =
      (carma_v2x_msgs__msg__NodeAttributeSetXY *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!carma_v2x_msgs__msg__NodeAttributeSetXY__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          carma_v2x_msgs__msg__NodeAttributeSetXY__fini(&data[i]);
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
    if (!carma_v2x_msgs__msg__NodeAttributeSetXY__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
