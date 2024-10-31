// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from carma_v2x_msgs:msg/MovementState.idl
// generated code does not contain a copyright notice
#include "carma_v2x_msgs/msg/detail/movement_state__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `movement_name`
#include "rosidl_runtime_c/string_functions.h"
// Member `movement_event_list`
#include "carma_v2x_msgs/msg/detail/movement_event__functions.h"
// Member `connection_maneuver_assist_list`
#include "j2735_v2x_msgs/msg/detail/connection_maneuver_assist__functions.h"

bool
carma_v2x_msgs__msg__MovementState__init(carma_v2x_msgs__msg__MovementState * msg)
{
  if (!msg) {
    return false;
  }
  // movement_name
  if (!rosidl_runtime_c__String__init(&msg->movement_name)) {
    carma_v2x_msgs__msg__MovementState__fini(msg);
    return false;
  }
  // movement_name_exists
  // signal_group
  // movement_event_list
  if (!carma_v2x_msgs__msg__MovementEvent__Sequence__init(&msg->movement_event_list, 0)) {
    carma_v2x_msgs__msg__MovementState__fini(msg);
    return false;
  }
  // connection_maneuver_assist_list
  if (!j2735_v2x_msgs__msg__ConnectionManeuverAssist__Sequence__init(&msg->connection_maneuver_assist_list, 0)) {
    carma_v2x_msgs__msg__MovementState__fini(msg);
    return false;
  }
  // maneuver_assist_list_exists
  return true;
}

void
carma_v2x_msgs__msg__MovementState__fini(carma_v2x_msgs__msg__MovementState * msg)
{
  if (!msg) {
    return;
  }
  // movement_name
  rosidl_runtime_c__String__fini(&msg->movement_name);
  // movement_name_exists
  // signal_group
  // movement_event_list
  carma_v2x_msgs__msg__MovementEvent__Sequence__fini(&msg->movement_event_list);
  // connection_maneuver_assist_list
  j2735_v2x_msgs__msg__ConnectionManeuverAssist__Sequence__fini(&msg->connection_maneuver_assist_list);
  // maneuver_assist_list_exists
}

bool
carma_v2x_msgs__msg__MovementState__are_equal(const carma_v2x_msgs__msg__MovementState * lhs, const carma_v2x_msgs__msg__MovementState * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // movement_name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->movement_name), &(rhs->movement_name)))
  {
    return false;
  }
  // movement_name_exists
  if (lhs->movement_name_exists != rhs->movement_name_exists) {
    return false;
  }
  // signal_group
  if (lhs->signal_group != rhs->signal_group) {
    return false;
  }
  // movement_event_list
  if (!carma_v2x_msgs__msg__MovementEvent__Sequence__are_equal(
      &(lhs->movement_event_list), &(rhs->movement_event_list)))
  {
    return false;
  }
  // connection_maneuver_assist_list
  if (!j2735_v2x_msgs__msg__ConnectionManeuverAssist__Sequence__are_equal(
      &(lhs->connection_maneuver_assist_list), &(rhs->connection_maneuver_assist_list)))
  {
    return false;
  }
  // maneuver_assist_list_exists
  if (lhs->maneuver_assist_list_exists != rhs->maneuver_assist_list_exists) {
    return false;
  }
  return true;
}

bool
carma_v2x_msgs__msg__MovementState__copy(
  const carma_v2x_msgs__msg__MovementState * input,
  carma_v2x_msgs__msg__MovementState * output)
{
  if (!input || !output) {
    return false;
  }
  // movement_name
  if (!rosidl_runtime_c__String__copy(
      &(input->movement_name), &(output->movement_name)))
  {
    return false;
  }
  // movement_name_exists
  output->movement_name_exists = input->movement_name_exists;
  // signal_group
  output->signal_group = input->signal_group;
  // movement_event_list
  if (!carma_v2x_msgs__msg__MovementEvent__Sequence__copy(
      &(input->movement_event_list), &(output->movement_event_list)))
  {
    return false;
  }
  // connection_maneuver_assist_list
  if (!j2735_v2x_msgs__msg__ConnectionManeuverAssist__Sequence__copy(
      &(input->connection_maneuver_assist_list), &(output->connection_maneuver_assist_list)))
  {
    return false;
  }
  // maneuver_assist_list_exists
  output->maneuver_assist_list_exists = input->maneuver_assist_list_exists;
  return true;
}

carma_v2x_msgs__msg__MovementState *
carma_v2x_msgs__msg__MovementState__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  carma_v2x_msgs__msg__MovementState * msg = (carma_v2x_msgs__msg__MovementState *)allocator.allocate(sizeof(carma_v2x_msgs__msg__MovementState), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(carma_v2x_msgs__msg__MovementState));
  bool success = carma_v2x_msgs__msg__MovementState__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
carma_v2x_msgs__msg__MovementState__destroy(carma_v2x_msgs__msg__MovementState * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    carma_v2x_msgs__msg__MovementState__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
carma_v2x_msgs__msg__MovementState__Sequence__init(carma_v2x_msgs__msg__MovementState__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  carma_v2x_msgs__msg__MovementState * data = NULL;

  if (size) {
    data = (carma_v2x_msgs__msg__MovementState *)allocator.zero_allocate(size, sizeof(carma_v2x_msgs__msg__MovementState), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = carma_v2x_msgs__msg__MovementState__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        carma_v2x_msgs__msg__MovementState__fini(&data[i - 1]);
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
carma_v2x_msgs__msg__MovementState__Sequence__fini(carma_v2x_msgs__msg__MovementState__Sequence * array)
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
      carma_v2x_msgs__msg__MovementState__fini(&array->data[i]);
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

carma_v2x_msgs__msg__MovementState__Sequence *
carma_v2x_msgs__msg__MovementState__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  carma_v2x_msgs__msg__MovementState__Sequence * array = (carma_v2x_msgs__msg__MovementState__Sequence *)allocator.allocate(sizeof(carma_v2x_msgs__msg__MovementState__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = carma_v2x_msgs__msg__MovementState__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
carma_v2x_msgs__msg__MovementState__Sequence__destroy(carma_v2x_msgs__msg__MovementState__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    carma_v2x_msgs__msg__MovementState__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
carma_v2x_msgs__msg__MovementState__Sequence__are_equal(const carma_v2x_msgs__msg__MovementState__Sequence * lhs, const carma_v2x_msgs__msg__MovementState__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!carma_v2x_msgs__msg__MovementState__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
carma_v2x_msgs__msg__MovementState__Sequence__copy(
  const carma_v2x_msgs__msg__MovementState__Sequence * input,
  carma_v2x_msgs__msg__MovementState__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(carma_v2x_msgs__msg__MovementState);
    carma_v2x_msgs__msg__MovementState * data =
      (carma_v2x_msgs__msg__MovementState *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!carma_v2x_msgs__msg__MovementState__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          carma_v2x_msgs__msg__MovementState__fini(&data[i]);
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
    if (!carma_v2x_msgs__msg__MovementState__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
