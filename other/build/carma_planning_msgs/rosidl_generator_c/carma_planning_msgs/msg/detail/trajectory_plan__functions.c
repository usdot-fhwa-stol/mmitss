// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from carma_planning_msgs:msg/TrajectoryPlan.idl
// generated code does not contain a copyright notice
#include "carma_planning_msgs/msg/detail/trajectory_plan__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `trajectory_id`
#include "rosidl_runtime_c/string_functions.h"
// Member `trajectory_points`
#include "carma_planning_msgs/msg/detail/trajectory_plan_point__functions.h"

bool
carma_planning_msgs__msg__TrajectoryPlan__init(carma_planning_msgs__msg__TrajectoryPlan * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    carma_planning_msgs__msg__TrajectoryPlan__fini(msg);
    return false;
  }
  // trajectory_id
  if (!rosidl_runtime_c__String__init(&msg->trajectory_id)) {
    carma_planning_msgs__msg__TrajectoryPlan__fini(msg);
    return false;
  }
  // initial_longitudinal_velocity
  // trajectory_points
  if (!carma_planning_msgs__msg__TrajectoryPlanPoint__Sequence__init(&msg->trajectory_points, 0)) {
    carma_planning_msgs__msg__TrajectoryPlan__fini(msg);
    return false;
  }
  return true;
}

void
carma_planning_msgs__msg__TrajectoryPlan__fini(carma_planning_msgs__msg__TrajectoryPlan * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // trajectory_id
  rosidl_runtime_c__String__fini(&msg->trajectory_id);
  // initial_longitudinal_velocity
  // trajectory_points
  carma_planning_msgs__msg__TrajectoryPlanPoint__Sequence__fini(&msg->trajectory_points);
}

bool
carma_planning_msgs__msg__TrajectoryPlan__are_equal(const carma_planning_msgs__msg__TrajectoryPlan * lhs, const carma_planning_msgs__msg__TrajectoryPlan * rhs)
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
  // trajectory_id
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->trajectory_id), &(rhs->trajectory_id)))
  {
    return false;
  }
  // initial_longitudinal_velocity
  if (lhs->initial_longitudinal_velocity != rhs->initial_longitudinal_velocity) {
    return false;
  }
  // trajectory_points
  if (!carma_planning_msgs__msg__TrajectoryPlanPoint__Sequence__are_equal(
      &(lhs->trajectory_points), &(rhs->trajectory_points)))
  {
    return false;
  }
  return true;
}

bool
carma_planning_msgs__msg__TrajectoryPlan__copy(
  const carma_planning_msgs__msg__TrajectoryPlan * input,
  carma_planning_msgs__msg__TrajectoryPlan * output)
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
  // trajectory_id
  if (!rosidl_runtime_c__String__copy(
      &(input->trajectory_id), &(output->trajectory_id)))
  {
    return false;
  }
  // initial_longitudinal_velocity
  output->initial_longitudinal_velocity = input->initial_longitudinal_velocity;
  // trajectory_points
  if (!carma_planning_msgs__msg__TrajectoryPlanPoint__Sequence__copy(
      &(input->trajectory_points), &(output->trajectory_points)))
  {
    return false;
  }
  return true;
}

carma_planning_msgs__msg__TrajectoryPlan *
carma_planning_msgs__msg__TrajectoryPlan__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  carma_planning_msgs__msg__TrajectoryPlan * msg = (carma_planning_msgs__msg__TrajectoryPlan *)allocator.allocate(sizeof(carma_planning_msgs__msg__TrajectoryPlan), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(carma_planning_msgs__msg__TrajectoryPlan));
  bool success = carma_planning_msgs__msg__TrajectoryPlan__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
carma_planning_msgs__msg__TrajectoryPlan__destroy(carma_planning_msgs__msg__TrajectoryPlan * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    carma_planning_msgs__msg__TrajectoryPlan__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
carma_planning_msgs__msg__TrajectoryPlan__Sequence__init(carma_planning_msgs__msg__TrajectoryPlan__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  carma_planning_msgs__msg__TrajectoryPlan * data = NULL;

  if (size) {
    data = (carma_planning_msgs__msg__TrajectoryPlan *)allocator.zero_allocate(size, sizeof(carma_planning_msgs__msg__TrajectoryPlan), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = carma_planning_msgs__msg__TrajectoryPlan__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        carma_planning_msgs__msg__TrajectoryPlan__fini(&data[i - 1]);
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
carma_planning_msgs__msg__TrajectoryPlan__Sequence__fini(carma_planning_msgs__msg__TrajectoryPlan__Sequence * array)
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
      carma_planning_msgs__msg__TrajectoryPlan__fini(&array->data[i]);
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

carma_planning_msgs__msg__TrajectoryPlan__Sequence *
carma_planning_msgs__msg__TrajectoryPlan__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  carma_planning_msgs__msg__TrajectoryPlan__Sequence * array = (carma_planning_msgs__msg__TrajectoryPlan__Sequence *)allocator.allocate(sizeof(carma_planning_msgs__msg__TrajectoryPlan__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = carma_planning_msgs__msg__TrajectoryPlan__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
carma_planning_msgs__msg__TrajectoryPlan__Sequence__destroy(carma_planning_msgs__msg__TrajectoryPlan__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    carma_planning_msgs__msg__TrajectoryPlan__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
carma_planning_msgs__msg__TrajectoryPlan__Sequence__are_equal(const carma_planning_msgs__msg__TrajectoryPlan__Sequence * lhs, const carma_planning_msgs__msg__TrajectoryPlan__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!carma_planning_msgs__msg__TrajectoryPlan__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
carma_planning_msgs__msg__TrajectoryPlan__Sequence__copy(
  const carma_planning_msgs__msg__TrajectoryPlan__Sequence * input,
  carma_planning_msgs__msg__TrajectoryPlan__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(carma_planning_msgs__msg__TrajectoryPlan);
    carma_planning_msgs__msg__TrajectoryPlan * data =
      (carma_planning_msgs__msg__TrajectoryPlan *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!carma_planning_msgs__msg__TrajectoryPlan__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          carma_planning_msgs__msg__TrajectoryPlan__fini(&data[i]);
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
    if (!carma_planning_msgs__msg__TrajectoryPlan__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
