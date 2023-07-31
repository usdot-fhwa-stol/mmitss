// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from carma_planning_msgs:msg/TrajectoryPlanPoint.idl
// generated code does not contain a copyright notice
#include "carma_planning_msgs/msg/detail/trajectory_plan_point__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `target_time`
#include "builtin_interfaces/msg/detail/time__functions.h"
// Member `lane_id`
// Member `controller_plugin_name`
// Member `planner_plugin_name`
#include "rosidl_runtime_c/string_functions.h"

bool
carma_planning_msgs__msg__TrajectoryPlanPoint__init(carma_planning_msgs__msg__TrajectoryPlanPoint * msg)
{
  if (!msg) {
    return false;
  }
  // x
  // y
  // yaw
  // target_time
  if (!builtin_interfaces__msg__Time__init(&msg->target_time)) {
    carma_planning_msgs__msg__TrajectoryPlanPoint__fini(msg);
    return false;
  }
  // lane_id
  if (!rosidl_runtime_c__String__init(&msg->lane_id)) {
    carma_planning_msgs__msg__TrajectoryPlanPoint__fini(msg);
    return false;
  }
  // controller_plugin_name
  if (!rosidl_runtime_c__String__init(&msg->controller_plugin_name)) {
    carma_planning_msgs__msg__TrajectoryPlanPoint__fini(msg);
    return false;
  }
  // planner_plugin_name
  if (!rosidl_runtime_c__String__init(&msg->planner_plugin_name)) {
    carma_planning_msgs__msg__TrajectoryPlanPoint__fini(msg);
    return false;
  }
  return true;
}

void
carma_planning_msgs__msg__TrajectoryPlanPoint__fini(carma_planning_msgs__msg__TrajectoryPlanPoint * msg)
{
  if (!msg) {
    return;
  }
  // x
  // y
  // yaw
  // target_time
  builtin_interfaces__msg__Time__fini(&msg->target_time);
  // lane_id
  rosidl_runtime_c__String__fini(&msg->lane_id);
  // controller_plugin_name
  rosidl_runtime_c__String__fini(&msg->controller_plugin_name);
  // planner_plugin_name
  rosidl_runtime_c__String__fini(&msg->planner_plugin_name);
}

bool
carma_planning_msgs__msg__TrajectoryPlanPoint__are_equal(const carma_planning_msgs__msg__TrajectoryPlanPoint * lhs, const carma_planning_msgs__msg__TrajectoryPlanPoint * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // x
  if (lhs->x != rhs->x) {
    return false;
  }
  // y
  if (lhs->y != rhs->y) {
    return false;
  }
  // yaw
  if (lhs->yaw != rhs->yaw) {
    return false;
  }
  // target_time
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->target_time), &(rhs->target_time)))
  {
    return false;
  }
  // lane_id
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->lane_id), &(rhs->lane_id)))
  {
    return false;
  }
  // controller_plugin_name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->controller_plugin_name), &(rhs->controller_plugin_name)))
  {
    return false;
  }
  // planner_plugin_name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->planner_plugin_name), &(rhs->planner_plugin_name)))
  {
    return false;
  }
  return true;
}

bool
carma_planning_msgs__msg__TrajectoryPlanPoint__copy(
  const carma_planning_msgs__msg__TrajectoryPlanPoint * input,
  carma_planning_msgs__msg__TrajectoryPlanPoint * output)
{
  if (!input || !output) {
    return false;
  }
  // x
  output->x = input->x;
  // y
  output->y = input->y;
  // yaw
  output->yaw = input->yaw;
  // target_time
  if (!builtin_interfaces__msg__Time__copy(
      &(input->target_time), &(output->target_time)))
  {
    return false;
  }
  // lane_id
  if (!rosidl_runtime_c__String__copy(
      &(input->lane_id), &(output->lane_id)))
  {
    return false;
  }
  // controller_plugin_name
  if (!rosidl_runtime_c__String__copy(
      &(input->controller_plugin_name), &(output->controller_plugin_name)))
  {
    return false;
  }
  // planner_plugin_name
  if (!rosidl_runtime_c__String__copy(
      &(input->planner_plugin_name), &(output->planner_plugin_name)))
  {
    return false;
  }
  return true;
}

carma_planning_msgs__msg__TrajectoryPlanPoint *
carma_planning_msgs__msg__TrajectoryPlanPoint__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  carma_planning_msgs__msg__TrajectoryPlanPoint * msg = (carma_planning_msgs__msg__TrajectoryPlanPoint *)allocator.allocate(sizeof(carma_planning_msgs__msg__TrajectoryPlanPoint), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(carma_planning_msgs__msg__TrajectoryPlanPoint));
  bool success = carma_planning_msgs__msg__TrajectoryPlanPoint__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
carma_planning_msgs__msg__TrajectoryPlanPoint__destroy(carma_planning_msgs__msg__TrajectoryPlanPoint * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    carma_planning_msgs__msg__TrajectoryPlanPoint__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
carma_planning_msgs__msg__TrajectoryPlanPoint__Sequence__init(carma_planning_msgs__msg__TrajectoryPlanPoint__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  carma_planning_msgs__msg__TrajectoryPlanPoint * data = NULL;

  if (size) {
    data = (carma_planning_msgs__msg__TrajectoryPlanPoint *)allocator.zero_allocate(size, sizeof(carma_planning_msgs__msg__TrajectoryPlanPoint), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = carma_planning_msgs__msg__TrajectoryPlanPoint__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        carma_planning_msgs__msg__TrajectoryPlanPoint__fini(&data[i - 1]);
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
carma_planning_msgs__msg__TrajectoryPlanPoint__Sequence__fini(carma_planning_msgs__msg__TrajectoryPlanPoint__Sequence * array)
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
      carma_planning_msgs__msg__TrajectoryPlanPoint__fini(&array->data[i]);
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

carma_planning_msgs__msg__TrajectoryPlanPoint__Sequence *
carma_planning_msgs__msg__TrajectoryPlanPoint__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  carma_planning_msgs__msg__TrajectoryPlanPoint__Sequence * array = (carma_planning_msgs__msg__TrajectoryPlanPoint__Sequence *)allocator.allocate(sizeof(carma_planning_msgs__msg__TrajectoryPlanPoint__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = carma_planning_msgs__msg__TrajectoryPlanPoint__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
carma_planning_msgs__msg__TrajectoryPlanPoint__Sequence__destroy(carma_planning_msgs__msg__TrajectoryPlanPoint__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    carma_planning_msgs__msg__TrajectoryPlanPoint__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
carma_planning_msgs__msg__TrajectoryPlanPoint__Sequence__are_equal(const carma_planning_msgs__msg__TrajectoryPlanPoint__Sequence * lhs, const carma_planning_msgs__msg__TrajectoryPlanPoint__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!carma_planning_msgs__msg__TrajectoryPlanPoint__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
carma_planning_msgs__msg__TrajectoryPlanPoint__Sequence__copy(
  const carma_planning_msgs__msg__TrajectoryPlanPoint__Sequence * input,
  carma_planning_msgs__msg__TrajectoryPlanPoint__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(carma_planning_msgs__msg__TrajectoryPlanPoint);
    carma_planning_msgs__msg__TrajectoryPlanPoint * data =
      (carma_planning_msgs__msg__TrajectoryPlanPoint *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!carma_planning_msgs__msg__TrajectoryPlanPoint__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          carma_planning_msgs__msg__TrajectoryPlanPoint__fini(&data[i]);
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
    if (!carma_planning_msgs__msg__TrajectoryPlanPoint__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
