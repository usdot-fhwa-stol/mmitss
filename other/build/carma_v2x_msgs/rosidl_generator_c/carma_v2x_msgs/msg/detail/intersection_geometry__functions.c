// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from carma_v2x_msgs:msg/IntersectionGeometry.idl
// generated code does not contain a copyright notice
#include "carma_v2x_msgs/msg/detail/intersection_geometry__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `name`
#include "rosidl_runtime_c/string_functions.h"
// Member `id`
#include "j2735_v2x_msgs/msg/detail/intersection_reference_id__functions.h"
// Member `ref_point`
#include "carma_v2x_msgs/msg/detail/position3_d__functions.h"
// Member `speed_limits`
#include "carma_v2x_msgs/msg/detail/regulatory_speed_limit__functions.h"
// Member `lane_list`
#include "carma_v2x_msgs/msg/detail/generic_lane__functions.h"
// Member `preempt_priority_list`
#include "j2735_v2x_msgs/msg/detail/signal_control_zone__functions.h"

bool
carma_v2x_msgs__msg__IntersectionGeometry__init(carma_v2x_msgs__msg__IntersectionGeometry * msg)
{
  if (!msg) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__init(&msg->name)) {
    carma_v2x_msgs__msg__IntersectionGeometry__fini(msg);
    return false;
  }
  // name_exists
  // id
  if (!j2735_v2x_msgs__msg__IntersectionReferenceID__init(&msg->id)) {
    carma_v2x_msgs__msg__IntersectionGeometry__fini(msg);
    return false;
  }
  // revision
  // ref_point
  if (!carma_v2x_msgs__msg__Position3D__init(&msg->ref_point)) {
    carma_v2x_msgs__msg__IntersectionGeometry__fini(msg);
    return false;
  }
  // lane_width
  // lane_width_exists
  // speed_limits
  if (!carma_v2x_msgs__msg__RegulatorySpeedLimit__Sequence__init(&msg->speed_limits, 0)) {
    carma_v2x_msgs__msg__IntersectionGeometry__fini(msg);
    return false;
  }
  // speed_limits_exists
  // lane_list
  if (!carma_v2x_msgs__msg__GenericLane__Sequence__init(&msg->lane_list, 0)) {
    carma_v2x_msgs__msg__IntersectionGeometry__fini(msg);
    return false;
  }
  // preempt_priority_list
  if (!j2735_v2x_msgs__msg__SignalControlZone__Sequence__init(&msg->preempt_priority_list, 0)) {
    carma_v2x_msgs__msg__IntersectionGeometry__fini(msg);
    return false;
  }
  // preempt_priority_data_exists
  return true;
}

void
carma_v2x_msgs__msg__IntersectionGeometry__fini(carma_v2x_msgs__msg__IntersectionGeometry * msg)
{
  if (!msg) {
    return;
  }
  // name
  rosidl_runtime_c__String__fini(&msg->name);
  // name_exists
  // id
  j2735_v2x_msgs__msg__IntersectionReferenceID__fini(&msg->id);
  // revision
  // ref_point
  carma_v2x_msgs__msg__Position3D__fini(&msg->ref_point);
  // lane_width
  // lane_width_exists
  // speed_limits
  carma_v2x_msgs__msg__RegulatorySpeedLimit__Sequence__fini(&msg->speed_limits);
  // speed_limits_exists
  // lane_list
  carma_v2x_msgs__msg__GenericLane__Sequence__fini(&msg->lane_list);
  // preempt_priority_list
  j2735_v2x_msgs__msg__SignalControlZone__Sequence__fini(&msg->preempt_priority_list);
  // preempt_priority_data_exists
}

bool
carma_v2x_msgs__msg__IntersectionGeometry__are_equal(const carma_v2x_msgs__msg__IntersectionGeometry * lhs, const carma_v2x_msgs__msg__IntersectionGeometry * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->name), &(rhs->name)))
  {
    return false;
  }
  // name_exists
  if (lhs->name_exists != rhs->name_exists) {
    return false;
  }
  // id
  if (!j2735_v2x_msgs__msg__IntersectionReferenceID__are_equal(
      &(lhs->id), &(rhs->id)))
  {
    return false;
  }
  // revision
  if (lhs->revision != rhs->revision) {
    return false;
  }
  // ref_point
  if (!carma_v2x_msgs__msg__Position3D__are_equal(
      &(lhs->ref_point), &(rhs->ref_point)))
  {
    return false;
  }
  // lane_width
  if (lhs->lane_width != rhs->lane_width) {
    return false;
  }
  // lane_width_exists
  if (lhs->lane_width_exists != rhs->lane_width_exists) {
    return false;
  }
  // speed_limits
  if (!carma_v2x_msgs__msg__RegulatorySpeedLimit__Sequence__are_equal(
      &(lhs->speed_limits), &(rhs->speed_limits)))
  {
    return false;
  }
  // speed_limits_exists
  if (lhs->speed_limits_exists != rhs->speed_limits_exists) {
    return false;
  }
  // lane_list
  if (!carma_v2x_msgs__msg__GenericLane__Sequence__are_equal(
      &(lhs->lane_list), &(rhs->lane_list)))
  {
    return false;
  }
  // preempt_priority_list
  if (!j2735_v2x_msgs__msg__SignalControlZone__Sequence__are_equal(
      &(lhs->preempt_priority_list), &(rhs->preempt_priority_list)))
  {
    return false;
  }
  // preempt_priority_data_exists
  if (lhs->preempt_priority_data_exists != rhs->preempt_priority_data_exists) {
    return false;
  }
  return true;
}

bool
carma_v2x_msgs__msg__IntersectionGeometry__copy(
  const carma_v2x_msgs__msg__IntersectionGeometry * input,
  carma_v2x_msgs__msg__IntersectionGeometry * output)
{
  if (!input || !output) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__copy(
      &(input->name), &(output->name)))
  {
    return false;
  }
  // name_exists
  output->name_exists = input->name_exists;
  // id
  if (!j2735_v2x_msgs__msg__IntersectionReferenceID__copy(
      &(input->id), &(output->id)))
  {
    return false;
  }
  // revision
  output->revision = input->revision;
  // ref_point
  if (!carma_v2x_msgs__msg__Position3D__copy(
      &(input->ref_point), &(output->ref_point)))
  {
    return false;
  }
  // lane_width
  output->lane_width = input->lane_width;
  // lane_width_exists
  output->lane_width_exists = input->lane_width_exists;
  // speed_limits
  if (!carma_v2x_msgs__msg__RegulatorySpeedLimit__Sequence__copy(
      &(input->speed_limits), &(output->speed_limits)))
  {
    return false;
  }
  // speed_limits_exists
  output->speed_limits_exists = input->speed_limits_exists;
  // lane_list
  if (!carma_v2x_msgs__msg__GenericLane__Sequence__copy(
      &(input->lane_list), &(output->lane_list)))
  {
    return false;
  }
  // preempt_priority_list
  if (!j2735_v2x_msgs__msg__SignalControlZone__Sequence__copy(
      &(input->preempt_priority_list), &(output->preempt_priority_list)))
  {
    return false;
  }
  // preempt_priority_data_exists
  output->preempt_priority_data_exists = input->preempt_priority_data_exists;
  return true;
}

carma_v2x_msgs__msg__IntersectionGeometry *
carma_v2x_msgs__msg__IntersectionGeometry__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  carma_v2x_msgs__msg__IntersectionGeometry * msg = (carma_v2x_msgs__msg__IntersectionGeometry *)allocator.allocate(sizeof(carma_v2x_msgs__msg__IntersectionGeometry), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(carma_v2x_msgs__msg__IntersectionGeometry));
  bool success = carma_v2x_msgs__msg__IntersectionGeometry__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
carma_v2x_msgs__msg__IntersectionGeometry__destroy(carma_v2x_msgs__msg__IntersectionGeometry * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    carma_v2x_msgs__msg__IntersectionGeometry__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
carma_v2x_msgs__msg__IntersectionGeometry__Sequence__init(carma_v2x_msgs__msg__IntersectionGeometry__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  carma_v2x_msgs__msg__IntersectionGeometry * data = NULL;

  if (size) {
    data = (carma_v2x_msgs__msg__IntersectionGeometry *)allocator.zero_allocate(size, sizeof(carma_v2x_msgs__msg__IntersectionGeometry), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = carma_v2x_msgs__msg__IntersectionGeometry__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        carma_v2x_msgs__msg__IntersectionGeometry__fini(&data[i - 1]);
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
carma_v2x_msgs__msg__IntersectionGeometry__Sequence__fini(carma_v2x_msgs__msg__IntersectionGeometry__Sequence * array)
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
      carma_v2x_msgs__msg__IntersectionGeometry__fini(&array->data[i]);
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

carma_v2x_msgs__msg__IntersectionGeometry__Sequence *
carma_v2x_msgs__msg__IntersectionGeometry__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  carma_v2x_msgs__msg__IntersectionGeometry__Sequence * array = (carma_v2x_msgs__msg__IntersectionGeometry__Sequence *)allocator.allocate(sizeof(carma_v2x_msgs__msg__IntersectionGeometry__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = carma_v2x_msgs__msg__IntersectionGeometry__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
carma_v2x_msgs__msg__IntersectionGeometry__Sequence__destroy(carma_v2x_msgs__msg__IntersectionGeometry__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    carma_v2x_msgs__msg__IntersectionGeometry__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
carma_v2x_msgs__msg__IntersectionGeometry__Sequence__are_equal(const carma_v2x_msgs__msg__IntersectionGeometry__Sequence * lhs, const carma_v2x_msgs__msg__IntersectionGeometry__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!carma_v2x_msgs__msg__IntersectionGeometry__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
carma_v2x_msgs__msg__IntersectionGeometry__Sequence__copy(
  const carma_v2x_msgs__msg__IntersectionGeometry__Sequence * input,
  carma_v2x_msgs__msg__IntersectionGeometry__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(carma_v2x_msgs__msg__IntersectionGeometry);
    carma_v2x_msgs__msg__IntersectionGeometry * data =
      (carma_v2x_msgs__msg__IntersectionGeometry *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!carma_v2x_msgs__msg__IntersectionGeometry__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          carma_v2x_msgs__msg__IntersectionGeometry__fini(&data[i]);
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
    if (!carma_v2x_msgs__msg__IntersectionGeometry__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
