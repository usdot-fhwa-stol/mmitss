// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from carma_planning_msgs:srv/PlanTrajectory.idl
// generated code does not contain a copyright notice
#include "carma_planning_msgs/srv/detail/plan_trajectory__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `vehicle_state`
#include "carma_planning_msgs/msg/detail/vehicle_state__functions.h"
// Member `maneuver_plan`
#include "carma_planning_msgs/msg/detail/maneuver_plan__functions.h"
// Member `initial_trajectory_plan`
#include "carma_planning_msgs/msg/detail/trajectory_plan__functions.h"

bool
carma_planning_msgs__srv__PlanTrajectory_Request__init(carma_planning_msgs__srv__PlanTrajectory_Request * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    carma_planning_msgs__srv__PlanTrajectory_Request__fini(msg);
    return false;
  }
  // vehicle_state
  if (!carma_planning_msgs__msg__VehicleState__init(&msg->vehicle_state)) {
    carma_planning_msgs__srv__PlanTrajectory_Request__fini(msg);
    return false;
  }
  // maneuver_plan
  if (!carma_planning_msgs__msg__ManeuverPlan__init(&msg->maneuver_plan)) {
    carma_planning_msgs__srv__PlanTrajectory_Request__fini(msg);
    return false;
  }
  // initial_trajectory_plan
  if (!carma_planning_msgs__msg__TrajectoryPlan__init(&msg->initial_trajectory_plan)) {
    carma_planning_msgs__srv__PlanTrajectory_Request__fini(msg);
    return false;
  }
  // maneuver_index_to_plan
  return true;
}

void
carma_planning_msgs__srv__PlanTrajectory_Request__fini(carma_planning_msgs__srv__PlanTrajectory_Request * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // vehicle_state
  carma_planning_msgs__msg__VehicleState__fini(&msg->vehicle_state);
  // maneuver_plan
  carma_planning_msgs__msg__ManeuverPlan__fini(&msg->maneuver_plan);
  // initial_trajectory_plan
  carma_planning_msgs__msg__TrajectoryPlan__fini(&msg->initial_trajectory_plan);
  // maneuver_index_to_plan
}

bool
carma_planning_msgs__srv__PlanTrajectory_Request__are_equal(const carma_planning_msgs__srv__PlanTrajectory_Request * lhs, const carma_planning_msgs__srv__PlanTrajectory_Request * rhs)
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
  // vehicle_state
  if (!carma_planning_msgs__msg__VehicleState__are_equal(
      &(lhs->vehicle_state), &(rhs->vehicle_state)))
  {
    return false;
  }
  // maneuver_plan
  if (!carma_planning_msgs__msg__ManeuverPlan__are_equal(
      &(lhs->maneuver_plan), &(rhs->maneuver_plan)))
  {
    return false;
  }
  // initial_trajectory_plan
  if (!carma_planning_msgs__msg__TrajectoryPlan__are_equal(
      &(lhs->initial_trajectory_plan), &(rhs->initial_trajectory_plan)))
  {
    return false;
  }
  // maneuver_index_to_plan
  if (lhs->maneuver_index_to_plan != rhs->maneuver_index_to_plan) {
    return false;
  }
  return true;
}

bool
carma_planning_msgs__srv__PlanTrajectory_Request__copy(
  const carma_planning_msgs__srv__PlanTrajectory_Request * input,
  carma_planning_msgs__srv__PlanTrajectory_Request * output)
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
  // vehicle_state
  if (!carma_planning_msgs__msg__VehicleState__copy(
      &(input->vehicle_state), &(output->vehicle_state)))
  {
    return false;
  }
  // maneuver_plan
  if (!carma_planning_msgs__msg__ManeuverPlan__copy(
      &(input->maneuver_plan), &(output->maneuver_plan)))
  {
    return false;
  }
  // initial_trajectory_plan
  if (!carma_planning_msgs__msg__TrajectoryPlan__copy(
      &(input->initial_trajectory_plan), &(output->initial_trajectory_plan)))
  {
    return false;
  }
  // maneuver_index_to_plan
  output->maneuver_index_to_plan = input->maneuver_index_to_plan;
  return true;
}

carma_planning_msgs__srv__PlanTrajectory_Request *
carma_planning_msgs__srv__PlanTrajectory_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  carma_planning_msgs__srv__PlanTrajectory_Request * msg = (carma_planning_msgs__srv__PlanTrajectory_Request *)allocator.allocate(sizeof(carma_planning_msgs__srv__PlanTrajectory_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(carma_planning_msgs__srv__PlanTrajectory_Request));
  bool success = carma_planning_msgs__srv__PlanTrajectory_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
carma_planning_msgs__srv__PlanTrajectory_Request__destroy(carma_planning_msgs__srv__PlanTrajectory_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    carma_planning_msgs__srv__PlanTrajectory_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
carma_planning_msgs__srv__PlanTrajectory_Request__Sequence__init(carma_planning_msgs__srv__PlanTrajectory_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  carma_planning_msgs__srv__PlanTrajectory_Request * data = NULL;

  if (size) {
    data = (carma_planning_msgs__srv__PlanTrajectory_Request *)allocator.zero_allocate(size, sizeof(carma_planning_msgs__srv__PlanTrajectory_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = carma_planning_msgs__srv__PlanTrajectory_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        carma_planning_msgs__srv__PlanTrajectory_Request__fini(&data[i - 1]);
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
carma_planning_msgs__srv__PlanTrajectory_Request__Sequence__fini(carma_planning_msgs__srv__PlanTrajectory_Request__Sequence * array)
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
      carma_planning_msgs__srv__PlanTrajectory_Request__fini(&array->data[i]);
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

carma_planning_msgs__srv__PlanTrajectory_Request__Sequence *
carma_planning_msgs__srv__PlanTrajectory_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  carma_planning_msgs__srv__PlanTrajectory_Request__Sequence * array = (carma_planning_msgs__srv__PlanTrajectory_Request__Sequence *)allocator.allocate(sizeof(carma_planning_msgs__srv__PlanTrajectory_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = carma_planning_msgs__srv__PlanTrajectory_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
carma_planning_msgs__srv__PlanTrajectory_Request__Sequence__destroy(carma_planning_msgs__srv__PlanTrajectory_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    carma_planning_msgs__srv__PlanTrajectory_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
carma_planning_msgs__srv__PlanTrajectory_Request__Sequence__are_equal(const carma_planning_msgs__srv__PlanTrajectory_Request__Sequence * lhs, const carma_planning_msgs__srv__PlanTrajectory_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!carma_planning_msgs__srv__PlanTrajectory_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
carma_planning_msgs__srv__PlanTrajectory_Request__Sequence__copy(
  const carma_planning_msgs__srv__PlanTrajectory_Request__Sequence * input,
  carma_planning_msgs__srv__PlanTrajectory_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(carma_planning_msgs__srv__PlanTrajectory_Request);
    carma_planning_msgs__srv__PlanTrajectory_Request * data =
      (carma_planning_msgs__srv__PlanTrajectory_Request *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!carma_planning_msgs__srv__PlanTrajectory_Request__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          carma_planning_msgs__srv__PlanTrajectory_Request__fini(&data[i]);
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
    if (!carma_planning_msgs__srv__PlanTrajectory_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `trajectory_plan`
// already included above
// #include "carma_planning_msgs/msg/detail/trajectory_plan__functions.h"
// Member `related_maneuvers`
// Member `maneuver_status`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
carma_planning_msgs__srv__PlanTrajectory_Response__init(carma_planning_msgs__srv__PlanTrajectory_Response * msg)
{
  if (!msg) {
    return false;
  }
  // trajectory_plan
  if (!carma_planning_msgs__msg__TrajectoryPlan__init(&msg->trajectory_plan)) {
    carma_planning_msgs__srv__PlanTrajectory_Response__fini(msg);
    return false;
  }
  // related_maneuvers
  if (!rosidl_runtime_c__uint8__Sequence__init(&msg->related_maneuvers, 0)) {
    carma_planning_msgs__srv__PlanTrajectory_Response__fini(msg);
    return false;
  }
  // maneuver_status
  if (!rosidl_runtime_c__uint8__Sequence__init(&msg->maneuver_status, 0)) {
    carma_planning_msgs__srv__PlanTrajectory_Response__fini(msg);
    return false;
  }
  return true;
}

void
carma_planning_msgs__srv__PlanTrajectory_Response__fini(carma_planning_msgs__srv__PlanTrajectory_Response * msg)
{
  if (!msg) {
    return;
  }
  // trajectory_plan
  carma_planning_msgs__msg__TrajectoryPlan__fini(&msg->trajectory_plan);
  // related_maneuvers
  rosidl_runtime_c__uint8__Sequence__fini(&msg->related_maneuvers);
  // maneuver_status
  rosidl_runtime_c__uint8__Sequence__fini(&msg->maneuver_status);
}

bool
carma_planning_msgs__srv__PlanTrajectory_Response__are_equal(const carma_planning_msgs__srv__PlanTrajectory_Response * lhs, const carma_planning_msgs__srv__PlanTrajectory_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // trajectory_plan
  if (!carma_planning_msgs__msg__TrajectoryPlan__are_equal(
      &(lhs->trajectory_plan), &(rhs->trajectory_plan)))
  {
    return false;
  }
  // related_maneuvers
  if (!rosidl_runtime_c__uint8__Sequence__are_equal(
      &(lhs->related_maneuvers), &(rhs->related_maneuvers)))
  {
    return false;
  }
  // maneuver_status
  if (!rosidl_runtime_c__uint8__Sequence__are_equal(
      &(lhs->maneuver_status), &(rhs->maneuver_status)))
  {
    return false;
  }
  return true;
}

bool
carma_planning_msgs__srv__PlanTrajectory_Response__copy(
  const carma_planning_msgs__srv__PlanTrajectory_Response * input,
  carma_planning_msgs__srv__PlanTrajectory_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // trajectory_plan
  if (!carma_planning_msgs__msg__TrajectoryPlan__copy(
      &(input->trajectory_plan), &(output->trajectory_plan)))
  {
    return false;
  }
  // related_maneuvers
  if (!rosidl_runtime_c__uint8__Sequence__copy(
      &(input->related_maneuvers), &(output->related_maneuvers)))
  {
    return false;
  }
  // maneuver_status
  if (!rosidl_runtime_c__uint8__Sequence__copy(
      &(input->maneuver_status), &(output->maneuver_status)))
  {
    return false;
  }
  return true;
}

carma_planning_msgs__srv__PlanTrajectory_Response *
carma_planning_msgs__srv__PlanTrajectory_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  carma_planning_msgs__srv__PlanTrajectory_Response * msg = (carma_planning_msgs__srv__PlanTrajectory_Response *)allocator.allocate(sizeof(carma_planning_msgs__srv__PlanTrajectory_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(carma_planning_msgs__srv__PlanTrajectory_Response));
  bool success = carma_planning_msgs__srv__PlanTrajectory_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
carma_planning_msgs__srv__PlanTrajectory_Response__destroy(carma_planning_msgs__srv__PlanTrajectory_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    carma_planning_msgs__srv__PlanTrajectory_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
carma_planning_msgs__srv__PlanTrajectory_Response__Sequence__init(carma_planning_msgs__srv__PlanTrajectory_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  carma_planning_msgs__srv__PlanTrajectory_Response * data = NULL;

  if (size) {
    data = (carma_planning_msgs__srv__PlanTrajectory_Response *)allocator.zero_allocate(size, sizeof(carma_planning_msgs__srv__PlanTrajectory_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = carma_planning_msgs__srv__PlanTrajectory_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        carma_planning_msgs__srv__PlanTrajectory_Response__fini(&data[i - 1]);
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
carma_planning_msgs__srv__PlanTrajectory_Response__Sequence__fini(carma_planning_msgs__srv__PlanTrajectory_Response__Sequence * array)
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
      carma_planning_msgs__srv__PlanTrajectory_Response__fini(&array->data[i]);
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

carma_planning_msgs__srv__PlanTrajectory_Response__Sequence *
carma_planning_msgs__srv__PlanTrajectory_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  carma_planning_msgs__srv__PlanTrajectory_Response__Sequence * array = (carma_planning_msgs__srv__PlanTrajectory_Response__Sequence *)allocator.allocate(sizeof(carma_planning_msgs__srv__PlanTrajectory_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = carma_planning_msgs__srv__PlanTrajectory_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
carma_planning_msgs__srv__PlanTrajectory_Response__Sequence__destroy(carma_planning_msgs__srv__PlanTrajectory_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    carma_planning_msgs__srv__PlanTrajectory_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
carma_planning_msgs__srv__PlanTrajectory_Response__Sequence__are_equal(const carma_planning_msgs__srv__PlanTrajectory_Response__Sequence * lhs, const carma_planning_msgs__srv__PlanTrajectory_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!carma_planning_msgs__srv__PlanTrajectory_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
carma_planning_msgs__srv__PlanTrajectory_Response__Sequence__copy(
  const carma_planning_msgs__srv__PlanTrajectory_Response__Sequence * input,
  carma_planning_msgs__srv__PlanTrajectory_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(carma_planning_msgs__srv__PlanTrajectory_Response);
    carma_planning_msgs__srv__PlanTrajectory_Response * data =
      (carma_planning_msgs__srv__PlanTrajectory_Response *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!carma_planning_msgs__srv__PlanTrajectory_Response__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          carma_planning_msgs__srv__PlanTrajectory_Response__fini(&data[i]);
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
    if (!carma_planning_msgs__srv__PlanTrajectory_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
