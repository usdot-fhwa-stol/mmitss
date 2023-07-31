// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from carma_v2x_msgs:msg/MovementEvent.idl
// generated code does not contain a copyright notice
#include "carma_v2x_msgs/msg/detail/movement_event__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `event_state`
#include "j2735_v2x_msgs/msg/detail/movement_phase_state__functions.h"
// Member `timing`
#include "carma_v2x_msgs/msg/detail/time_change_details__functions.h"
// Member `advisory_speed_list`
#include "carma_v2x_msgs/msg/detail/advisory_speed__functions.h"

bool
carma_v2x_msgs__msg__MovementEvent__init(carma_v2x_msgs__msg__MovementEvent * msg)
{
  if (!msg) {
    return false;
  }
  // event_state
  if (!j2735_v2x_msgs__msg__MovementPhaseState__init(&msg->event_state)) {
    carma_v2x_msgs__msg__MovementEvent__fini(msg);
    return false;
  }
  // timing
  if (!carma_v2x_msgs__msg__TimeChangeDetails__init(&msg->timing)) {
    carma_v2x_msgs__msg__MovementEvent__fini(msg);
    return false;
  }
  // timing_exists
  // advisory_speed_list
  if (!carma_v2x_msgs__msg__AdvisorySpeed__Sequence__init(&msg->advisory_speed_list, 0)) {
    carma_v2x_msgs__msg__MovementEvent__fini(msg);
    return false;
  }
  // speeds_exists
  return true;
}

void
carma_v2x_msgs__msg__MovementEvent__fini(carma_v2x_msgs__msg__MovementEvent * msg)
{
  if (!msg) {
    return;
  }
  // event_state
  j2735_v2x_msgs__msg__MovementPhaseState__fini(&msg->event_state);
  // timing
  carma_v2x_msgs__msg__TimeChangeDetails__fini(&msg->timing);
  // timing_exists
  // advisory_speed_list
  carma_v2x_msgs__msg__AdvisorySpeed__Sequence__fini(&msg->advisory_speed_list);
  // speeds_exists
}

bool
carma_v2x_msgs__msg__MovementEvent__are_equal(const carma_v2x_msgs__msg__MovementEvent * lhs, const carma_v2x_msgs__msg__MovementEvent * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // event_state
  if (!j2735_v2x_msgs__msg__MovementPhaseState__are_equal(
      &(lhs->event_state), &(rhs->event_state)))
  {
    return false;
  }
  // timing
  if (!carma_v2x_msgs__msg__TimeChangeDetails__are_equal(
      &(lhs->timing), &(rhs->timing)))
  {
    return false;
  }
  // timing_exists
  if (lhs->timing_exists != rhs->timing_exists) {
    return false;
  }
  // advisory_speed_list
  if (!carma_v2x_msgs__msg__AdvisorySpeed__Sequence__are_equal(
      &(lhs->advisory_speed_list), &(rhs->advisory_speed_list)))
  {
    return false;
  }
  // speeds_exists
  if (lhs->speeds_exists != rhs->speeds_exists) {
    return false;
  }
  return true;
}

bool
carma_v2x_msgs__msg__MovementEvent__copy(
  const carma_v2x_msgs__msg__MovementEvent * input,
  carma_v2x_msgs__msg__MovementEvent * output)
{
  if (!input || !output) {
    return false;
  }
  // event_state
  if (!j2735_v2x_msgs__msg__MovementPhaseState__copy(
      &(input->event_state), &(output->event_state)))
  {
    return false;
  }
  // timing
  if (!carma_v2x_msgs__msg__TimeChangeDetails__copy(
      &(input->timing), &(output->timing)))
  {
    return false;
  }
  // timing_exists
  output->timing_exists = input->timing_exists;
  // advisory_speed_list
  if (!carma_v2x_msgs__msg__AdvisorySpeed__Sequence__copy(
      &(input->advisory_speed_list), &(output->advisory_speed_list)))
  {
    return false;
  }
  // speeds_exists
  output->speeds_exists = input->speeds_exists;
  return true;
}

carma_v2x_msgs__msg__MovementEvent *
carma_v2x_msgs__msg__MovementEvent__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  carma_v2x_msgs__msg__MovementEvent * msg = (carma_v2x_msgs__msg__MovementEvent *)allocator.allocate(sizeof(carma_v2x_msgs__msg__MovementEvent), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(carma_v2x_msgs__msg__MovementEvent));
  bool success = carma_v2x_msgs__msg__MovementEvent__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
carma_v2x_msgs__msg__MovementEvent__destroy(carma_v2x_msgs__msg__MovementEvent * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    carma_v2x_msgs__msg__MovementEvent__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
carma_v2x_msgs__msg__MovementEvent__Sequence__init(carma_v2x_msgs__msg__MovementEvent__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  carma_v2x_msgs__msg__MovementEvent * data = NULL;

  if (size) {
    data = (carma_v2x_msgs__msg__MovementEvent *)allocator.zero_allocate(size, sizeof(carma_v2x_msgs__msg__MovementEvent), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = carma_v2x_msgs__msg__MovementEvent__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        carma_v2x_msgs__msg__MovementEvent__fini(&data[i - 1]);
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
carma_v2x_msgs__msg__MovementEvent__Sequence__fini(carma_v2x_msgs__msg__MovementEvent__Sequence * array)
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
      carma_v2x_msgs__msg__MovementEvent__fini(&array->data[i]);
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

carma_v2x_msgs__msg__MovementEvent__Sequence *
carma_v2x_msgs__msg__MovementEvent__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  carma_v2x_msgs__msg__MovementEvent__Sequence * array = (carma_v2x_msgs__msg__MovementEvent__Sequence *)allocator.allocate(sizeof(carma_v2x_msgs__msg__MovementEvent__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = carma_v2x_msgs__msg__MovementEvent__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
carma_v2x_msgs__msg__MovementEvent__Sequence__destroy(carma_v2x_msgs__msg__MovementEvent__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    carma_v2x_msgs__msg__MovementEvent__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
carma_v2x_msgs__msg__MovementEvent__Sequence__are_equal(const carma_v2x_msgs__msg__MovementEvent__Sequence * lhs, const carma_v2x_msgs__msg__MovementEvent__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!carma_v2x_msgs__msg__MovementEvent__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
carma_v2x_msgs__msg__MovementEvent__Sequence__copy(
  const carma_v2x_msgs__msg__MovementEvent__Sequence * input,
  carma_v2x_msgs__msg__MovementEvent__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(carma_v2x_msgs__msg__MovementEvent);
    carma_v2x_msgs__msg__MovementEvent * data =
      (carma_v2x_msgs__msg__MovementEvent *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!carma_v2x_msgs__msg__MovementEvent__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          carma_v2x_msgs__msg__MovementEvent__fini(&data[i]);
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
    if (!carma_v2x_msgs__msg__MovementEvent__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
