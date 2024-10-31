// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from carma_planning_msgs:msg/PlatooningInfo.idl
// generated code does not contain a copyright notice
#include "carma_planning_msgs/msg/detail/platooning_info__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `platoon_id`
// Member `leader_id`
#include "rosidl_runtime_c/string_functions.h"

bool
carma_planning_msgs__msg__PlatooningInfo__init(carma_planning_msgs__msg__PlatooningInfo * msg)
{
  if (!msg) {
    return false;
  }
  // state
  // platoon_id
  if (!rosidl_runtime_c__String__init(&msg->platoon_id)) {
    carma_planning_msgs__msg__PlatooningInfo__fini(msg);
    return false;
  }
  // size
  // size_limit
  // leader_id
  if (!rosidl_runtime_c__String__init(&msg->leader_id)) {
    carma_planning_msgs__msg__PlatooningInfo__fini(msg);
    return false;
  }
  // leader_downtrack_distance
  // leader_cmd_speed
  // host_platoon_position
  // host_cmd_speed
  // desired_gap
  // actual_gap
  // current_predecessor_time_headway_sum
  // predecessor_speed
  // predecessor_position
  // is_create_gap
  // create_gap_adjuster
  return true;
}

void
carma_planning_msgs__msg__PlatooningInfo__fini(carma_planning_msgs__msg__PlatooningInfo * msg)
{
  if (!msg) {
    return;
  }
  // state
  // platoon_id
  rosidl_runtime_c__String__fini(&msg->platoon_id);
  // size
  // size_limit
  // leader_id
  rosidl_runtime_c__String__fini(&msg->leader_id);
  // leader_downtrack_distance
  // leader_cmd_speed
  // host_platoon_position
  // host_cmd_speed
  // desired_gap
  // actual_gap
  // current_predecessor_time_headway_sum
  // predecessor_speed
  // predecessor_position
  // is_create_gap
  // create_gap_adjuster
}

bool
carma_planning_msgs__msg__PlatooningInfo__are_equal(const carma_planning_msgs__msg__PlatooningInfo * lhs, const carma_planning_msgs__msg__PlatooningInfo * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // state
  if (lhs->state != rhs->state) {
    return false;
  }
  // platoon_id
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->platoon_id), &(rhs->platoon_id)))
  {
    return false;
  }
  // size
  if (lhs->size != rhs->size) {
    return false;
  }
  // size_limit
  if (lhs->size_limit != rhs->size_limit) {
    return false;
  }
  // leader_id
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->leader_id), &(rhs->leader_id)))
  {
    return false;
  }
  // leader_downtrack_distance
  if (lhs->leader_downtrack_distance != rhs->leader_downtrack_distance) {
    return false;
  }
  // leader_cmd_speed
  if (lhs->leader_cmd_speed != rhs->leader_cmd_speed) {
    return false;
  }
  // host_platoon_position
  if (lhs->host_platoon_position != rhs->host_platoon_position) {
    return false;
  }
  // host_cmd_speed
  if (lhs->host_cmd_speed != rhs->host_cmd_speed) {
    return false;
  }
  // desired_gap
  if (lhs->desired_gap != rhs->desired_gap) {
    return false;
  }
  // actual_gap
  if (lhs->actual_gap != rhs->actual_gap) {
    return false;
  }
  // current_predecessor_time_headway_sum
  if (lhs->current_predecessor_time_headway_sum != rhs->current_predecessor_time_headway_sum) {
    return false;
  }
  // predecessor_speed
  if (lhs->predecessor_speed != rhs->predecessor_speed) {
    return false;
  }
  // predecessor_position
  if (lhs->predecessor_position != rhs->predecessor_position) {
    return false;
  }
  // is_create_gap
  if (lhs->is_create_gap != rhs->is_create_gap) {
    return false;
  }
  // create_gap_adjuster
  if (lhs->create_gap_adjuster != rhs->create_gap_adjuster) {
    return false;
  }
  return true;
}

bool
carma_planning_msgs__msg__PlatooningInfo__copy(
  const carma_planning_msgs__msg__PlatooningInfo * input,
  carma_planning_msgs__msg__PlatooningInfo * output)
{
  if (!input || !output) {
    return false;
  }
  // state
  output->state = input->state;
  // platoon_id
  if (!rosidl_runtime_c__String__copy(
      &(input->platoon_id), &(output->platoon_id)))
  {
    return false;
  }
  // size
  output->size = input->size;
  // size_limit
  output->size_limit = input->size_limit;
  // leader_id
  if (!rosidl_runtime_c__String__copy(
      &(input->leader_id), &(output->leader_id)))
  {
    return false;
  }
  // leader_downtrack_distance
  output->leader_downtrack_distance = input->leader_downtrack_distance;
  // leader_cmd_speed
  output->leader_cmd_speed = input->leader_cmd_speed;
  // host_platoon_position
  output->host_platoon_position = input->host_platoon_position;
  // host_cmd_speed
  output->host_cmd_speed = input->host_cmd_speed;
  // desired_gap
  output->desired_gap = input->desired_gap;
  // actual_gap
  output->actual_gap = input->actual_gap;
  // current_predecessor_time_headway_sum
  output->current_predecessor_time_headway_sum = input->current_predecessor_time_headway_sum;
  // predecessor_speed
  output->predecessor_speed = input->predecessor_speed;
  // predecessor_position
  output->predecessor_position = input->predecessor_position;
  // is_create_gap
  output->is_create_gap = input->is_create_gap;
  // create_gap_adjuster
  output->create_gap_adjuster = input->create_gap_adjuster;
  return true;
}

carma_planning_msgs__msg__PlatooningInfo *
carma_planning_msgs__msg__PlatooningInfo__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  carma_planning_msgs__msg__PlatooningInfo * msg = (carma_planning_msgs__msg__PlatooningInfo *)allocator.allocate(sizeof(carma_planning_msgs__msg__PlatooningInfo), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(carma_planning_msgs__msg__PlatooningInfo));
  bool success = carma_planning_msgs__msg__PlatooningInfo__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
carma_planning_msgs__msg__PlatooningInfo__destroy(carma_planning_msgs__msg__PlatooningInfo * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    carma_planning_msgs__msg__PlatooningInfo__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
carma_planning_msgs__msg__PlatooningInfo__Sequence__init(carma_planning_msgs__msg__PlatooningInfo__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  carma_planning_msgs__msg__PlatooningInfo * data = NULL;

  if (size) {
    data = (carma_planning_msgs__msg__PlatooningInfo *)allocator.zero_allocate(size, sizeof(carma_planning_msgs__msg__PlatooningInfo), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = carma_planning_msgs__msg__PlatooningInfo__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        carma_planning_msgs__msg__PlatooningInfo__fini(&data[i - 1]);
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
carma_planning_msgs__msg__PlatooningInfo__Sequence__fini(carma_planning_msgs__msg__PlatooningInfo__Sequence * array)
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
      carma_planning_msgs__msg__PlatooningInfo__fini(&array->data[i]);
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

carma_planning_msgs__msg__PlatooningInfo__Sequence *
carma_planning_msgs__msg__PlatooningInfo__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  carma_planning_msgs__msg__PlatooningInfo__Sequence * array = (carma_planning_msgs__msg__PlatooningInfo__Sequence *)allocator.allocate(sizeof(carma_planning_msgs__msg__PlatooningInfo__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = carma_planning_msgs__msg__PlatooningInfo__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
carma_planning_msgs__msg__PlatooningInfo__Sequence__destroy(carma_planning_msgs__msg__PlatooningInfo__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    carma_planning_msgs__msg__PlatooningInfo__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
carma_planning_msgs__msg__PlatooningInfo__Sequence__are_equal(const carma_planning_msgs__msg__PlatooningInfo__Sequence * lhs, const carma_planning_msgs__msg__PlatooningInfo__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!carma_planning_msgs__msg__PlatooningInfo__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
carma_planning_msgs__msg__PlatooningInfo__Sequence__copy(
  const carma_planning_msgs__msg__PlatooningInfo__Sequence * input,
  carma_planning_msgs__msg__PlatooningInfo__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(carma_planning_msgs__msg__PlatooningInfo);
    carma_planning_msgs__msg__PlatooningInfo * data =
      (carma_planning_msgs__msg__PlatooningInfo *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!carma_planning_msgs__msg__PlatooningInfo__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          carma_planning_msgs__msg__PlatooningInfo__fini(&data[i]);
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
    if (!carma_planning_msgs__msg__PlatooningInfo__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
