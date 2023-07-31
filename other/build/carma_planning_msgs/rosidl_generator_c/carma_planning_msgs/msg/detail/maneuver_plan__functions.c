// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from carma_planning_msgs:msg/ManeuverPlan.idl
// generated code does not contain a copyright notice
#include "carma_planning_msgs/msg/detail/maneuver_plan__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `maneuver_plan_id`
#include "rosidl_runtime_c/string_functions.h"
// Member `planning_start_time`
// Member `planning_completion_time`
#include "builtin_interfaces/msg/detail/time__functions.h"
// Member `maneuvers`
#include "carma_planning_msgs/msg/detail/maneuver__functions.h"

bool
carma_planning_msgs__msg__ManeuverPlan__init(carma_planning_msgs__msg__ManeuverPlan * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    carma_planning_msgs__msg__ManeuverPlan__fini(msg);
    return false;
  }
  // maneuver_plan_id
  if (!rosidl_runtime_c__String__init(&msg->maneuver_plan_id)) {
    carma_planning_msgs__msg__ManeuverPlan__fini(msg);
    return false;
  }
  // planning_start_time
  if (!builtin_interfaces__msg__Time__init(&msg->planning_start_time)) {
    carma_planning_msgs__msg__ManeuverPlan__fini(msg);
    return false;
  }
  // planning_completion_time
  if (!builtin_interfaces__msg__Time__init(&msg->planning_completion_time)) {
    carma_planning_msgs__msg__ManeuverPlan__fini(msg);
    return false;
  }
  // maneuvers
  if (!carma_planning_msgs__msg__Maneuver__Sequence__init(&msg->maneuvers, 0)) {
    carma_planning_msgs__msg__ManeuverPlan__fini(msg);
    return false;
  }
  return true;
}

void
carma_planning_msgs__msg__ManeuverPlan__fini(carma_planning_msgs__msg__ManeuverPlan * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // maneuver_plan_id
  rosidl_runtime_c__String__fini(&msg->maneuver_plan_id);
  // planning_start_time
  builtin_interfaces__msg__Time__fini(&msg->planning_start_time);
  // planning_completion_time
  builtin_interfaces__msg__Time__fini(&msg->planning_completion_time);
  // maneuvers
  carma_planning_msgs__msg__Maneuver__Sequence__fini(&msg->maneuvers);
}

bool
carma_planning_msgs__msg__ManeuverPlan__are_equal(const carma_planning_msgs__msg__ManeuverPlan * lhs, const carma_planning_msgs__msg__ManeuverPlan * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__are_equal(
      &(lhs->header), &(rhs->header)))
  {
    return false;
  }
  // maneuver_plan_id
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->maneuver_plan_id), &(rhs->maneuver_plan_id)))
  {
    return false;
  }
  // planning_start_time
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->planning_start_time), &(rhs->planning_start_time)))
  {
    return false;
  }
  // planning_completion_time
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->planning_completion_time), &(rhs->planning_completion_time)))
  {
    return false;
  }
  // maneuvers
  if (!carma_planning_msgs__msg__Maneuver__Sequence__are_equal(
      &(lhs->maneuvers), &(rhs->maneuvers)))
  {
    return false;
  }
  return true;
}

bool
carma_planning_msgs__msg__ManeuverPlan__copy(
  const carma_planning_msgs__msg__ManeuverPlan * input,
  carma_planning_msgs__msg__ManeuverPlan * output)
{
  if (!input || !output) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__copy(
      &(input->header), &(output->header)))
  {
    return false;
  }
  // maneuver_plan_id
  if (!rosidl_runtime_c__String__copy(
      &(input->maneuver_plan_id), &(output->maneuver_plan_id)))
  {
    return false;
  }
  // planning_start_time
  if (!builtin_interfaces__msg__Time__copy(
      &(input->planning_start_time), &(output->planning_start_time)))
  {
    return false;
  }
  // planning_completion_time
  if (!builtin_interfaces__msg__Time__copy(
      &(input->planning_completion_time), &(output->planning_completion_time)))
  {
    return false;
  }
  // maneuvers
  if (!carma_planning_msgs__msg__Maneuver__Sequence__copy(
      &(input->maneuvers), &(output->maneuvers)))
  {
    return false;
  }
  return true;
}

carma_planning_msgs__msg__ManeuverPlan *
carma_planning_msgs__msg__ManeuverPlan__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  carma_planning_msgs__msg__ManeuverPlan * msg = (carma_planning_msgs__msg__ManeuverPlan *)allocator.allocate(sizeof(carma_planning_msgs__msg__ManeuverPlan), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(carma_planning_msgs__msg__ManeuverPlan));
  bool success = carma_planning_msgs__msg__ManeuverPlan__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
carma_planning_msgs__msg__ManeuverPlan__destroy(carma_planning_msgs__msg__ManeuverPlan * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    carma_planning_msgs__msg__ManeuverPlan__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
carma_planning_msgs__msg__ManeuverPlan__Sequence__init(carma_planning_msgs__msg__ManeuverPlan__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  carma_planning_msgs__msg__ManeuverPlan * data = NULL;

  if (size) {
    data = (carma_planning_msgs__msg__ManeuverPlan *)allocator.zero_allocate(size, sizeof(carma_planning_msgs__msg__ManeuverPlan), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = carma_planning_msgs__msg__ManeuverPlan__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        carma_planning_msgs__msg__ManeuverPlan__fini(&data[i - 1]);
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
carma_planning_msgs__msg__ManeuverPlan__Sequence__fini(carma_planning_msgs__msg__ManeuverPlan__Sequence * array)
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
      carma_planning_msgs__msg__ManeuverPlan__fini(&array->data[i]);
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

carma_planning_msgs__msg__ManeuverPlan__Sequence *
carma_planning_msgs__msg__ManeuverPlan__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  carma_planning_msgs__msg__ManeuverPlan__Sequence * array = (carma_planning_msgs__msg__ManeuverPlan__Sequence *)allocator.allocate(sizeof(carma_planning_msgs__msg__ManeuverPlan__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = carma_planning_msgs__msg__ManeuverPlan__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
carma_planning_msgs__msg__ManeuverPlan__Sequence__destroy(carma_planning_msgs__msg__ManeuverPlan__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    carma_planning_msgs__msg__ManeuverPlan__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
carma_planning_msgs__msg__ManeuverPlan__Sequence__are_equal(const carma_planning_msgs__msg__ManeuverPlan__Sequence * lhs, const carma_planning_msgs__msg__ManeuverPlan__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!carma_planning_msgs__msg__ManeuverPlan__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
carma_planning_msgs__msg__ManeuverPlan__Sequence__copy(
  const carma_planning_msgs__msg__ManeuverPlan__Sequence * input,
  carma_planning_msgs__msg__ManeuverPlan__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(carma_planning_msgs__msg__ManeuverPlan);
    carma_planning_msgs__msg__ManeuverPlan * data =
      (carma_planning_msgs__msg__ManeuverPlan *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!carma_planning_msgs__msg__ManeuverPlan__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          carma_planning_msgs__msg__ManeuverPlan__fini(&data[i]);
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
    if (!carma_planning_msgs__msg__ManeuverPlan__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
