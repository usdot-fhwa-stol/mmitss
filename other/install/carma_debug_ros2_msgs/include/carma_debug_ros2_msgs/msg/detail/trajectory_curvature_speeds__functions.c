// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from carma_debug_ros2_msgs:msg/TrajectoryCurvatureSpeeds.idl
// generated code does not contain a copyright notice
#include "carma_debug_ros2_msgs/msg/detail/trajectory_curvature_speeds__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `trajectory_plan`
#include "carma_planning_msgs/msg/detail/trajectory_plan__functions.h"
// Member `curvatures`
// Member `speed_limits`
// Member `velocity_profile`
// Member `tangent_headings`
// Member `relative_downtrack`
#include "rosidl_runtime_c/primitives_sequence_functions.h"
// Member `starting_state`
#include "carma_planning_msgs/msg/detail/vehicle_state__functions.h"

bool
carma_debug_ros2_msgs__msg__TrajectoryCurvatureSpeeds__init(carma_debug_ros2_msgs__msg__TrajectoryCurvatureSpeeds * msg)
{
  if (!msg) {
    return false;
  }
  // trajectory_plan
  if (!carma_planning_msgs__msg__TrajectoryPlan__init(&msg->trajectory_plan)) {
    carma_debug_ros2_msgs__msg__TrajectoryCurvatureSpeeds__fini(msg);
    return false;
  }
  // curvatures
  if (!rosidl_runtime_c__double__Sequence__init(&msg->curvatures, 0)) {
    carma_debug_ros2_msgs__msg__TrajectoryCurvatureSpeeds__fini(msg);
    return false;
  }
  // speed_limits
  if (!rosidl_runtime_c__double__Sequence__init(&msg->speed_limits, 0)) {
    carma_debug_ros2_msgs__msg__TrajectoryCurvatureSpeeds__fini(msg);
    return false;
  }
  // velocity_profile
  if (!rosidl_runtime_c__double__Sequence__init(&msg->velocity_profile, 0)) {
    carma_debug_ros2_msgs__msg__TrajectoryCurvatureSpeeds__fini(msg);
    return false;
  }
  // tangent_headings
  if (!rosidl_runtime_c__double__Sequence__init(&msg->tangent_headings, 0)) {
    carma_debug_ros2_msgs__msg__TrajectoryCurvatureSpeeds__fini(msg);
    return false;
  }
  // relative_downtrack
  if (!rosidl_runtime_c__double__Sequence__init(&msg->relative_downtrack, 0)) {
    carma_debug_ros2_msgs__msg__TrajectoryCurvatureSpeeds__fini(msg);
    return false;
  }
  // lat_accel_limit
  // lon_accel_limit
  // starting_state
  if (!carma_planning_msgs__msg__VehicleState__init(&msg->starting_state)) {
    carma_debug_ros2_msgs__msg__TrajectoryCurvatureSpeeds__fini(msg);
    return false;
  }
  return true;
}

void
carma_debug_ros2_msgs__msg__TrajectoryCurvatureSpeeds__fini(carma_debug_ros2_msgs__msg__TrajectoryCurvatureSpeeds * msg)
{
  if (!msg) {
    return;
  }
  // trajectory_plan
  carma_planning_msgs__msg__TrajectoryPlan__fini(&msg->trajectory_plan);
  // curvatures
  rosidl_runtime_c__double__Sequence__fini(&msg->curvatures);
  // speed_limits
  rosidl_runtime_c__double__Sequence__fini(&msg->speed_limits);
  // velocity_profile
  rosidl_runtime_c__double__Sequence__fini(&msg->velocity_profile);
  // tangent_headings
  rosidl_runtime_c__double__Sequence__fini(&msg->tangent_headings);
  // relative_downtrack
  rosidl_runtime_c__double__Sequence__fini(&msg->relative_downtrack);
  // lat_accel_limit
  // lon_accel_limit
  // starting_state
  carma_planning_msgs__msg__VehicleState__fini(&msg->starting_state);
}

bool
carma_debug_ros2_msgs__msg__TrajectoryCurvatureSpeeds__are_equal(const carma_debug_ros2_msgs__msg__TrajectoryCurvatureSpeeds * lhs, const carma_debug_ros2_msgs__msg__TrajectoryCurvatureSpeeds * rhs)
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
  // curvatures
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->curvatures), &(rhs->curvatures)))
  {
    return false;
  }
  // speed_limits
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->speed_limits), &(rhs->speed_limits)))
  {
    return false;
  }
  // velocity_profile
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->velocity_profile), &(rhs->velocity_profile)))
  {
    return false;
  }
  // tangent_headings
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->tangent_headings), &(rhs->tangent_headings)))
  {
    return false;
  }
  // relative_downtrack
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->relative_downtrack), &(rhs->relative_downtrack)))
  {
    return false;
  }
  // lat_accel_limit
  if (lhs->lat_accel_limit != rhs->lat_accel_limit) {
    return false;
  }
  // lon_accel_limit
  if (lhs->lon_accel_limit != rhs->lon_accel_limit) {
    return false;
  }
  // starting_state
  if (!carma_planning_msgs__msg__VehicleState__are_equal(
      &(lhs->starting_state), &(rhs->starting_state)))
  {
    return false;
  }
  return true;
}

bool
carma_debug_ros2_msgs__msg__TrajectoryCurvatureSpeeds__copy(
  const carma_debug_ros2_msgs__msg__TrajectoryCurvatureSpeeds * input,
  carma_debug_ros2_msgs__msg__TrajectoryCurvatureSpeeds * output)
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
  // curvatures
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->curvatures), &(output->curvatures)))
  {
    return false;
  }
  // speed_limits
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->speed_limits), &(output->speed_limits)))
  {
    return false;
  }
  // velocity_profile
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->velocity_profile), &(output->velocity_profile)))
  {
    return false;
  }
  // tangent_headings
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->tangent_headings), &(output->tangent_headings)))
  {
    return false;
  }
  // relative_downtrack
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->relative_downtrack), &(output->relative_downtrack)))
  {
    return false;
  }
  // lat_accel_limit
  output->lat_accel_limit = input->lat_accel_limit;
  // lon_accel_limit
  output->lon_accel_limit = input->lon_accel_limit;
  // starting_state
  if (!carma_planning_msgs__msg__VehicleState__copy(
      &(input->starting_state), &(output->starting_state)))
  {
    return false;
  }
  return true;
}

carma_debug_ros2_msgs__msg__TrajectoryCurvatureSpeeds *
carma_debug_ros2_msgs__msg__TrajectoryCurvatureSpeeds__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  carma_debug_ros2_msgs__msg__TrajectoryCurvatureSpeeds * msg = (carma_debug_ros2_msgs__msg__TrajectoryCurvatureSpeeds *)allocator.allocate(sizeof(carma_debug_ros2_msgs__msg__TrajectoryCurvatureSpeeds), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(carma_debug_ros2_msgs__msg__TrajectoryCurvatureSpeeds));
  bool success = carma_debug_ros2_msgs__msg__TrajectoryCurvatureSpeeds__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
carma_debug_ros2_msgs__msg__TrajectoryCurvatureSpeeds__destroy(carma_debug_ros2_msgs__msg__TrajectoryCurvatureSpeeds * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    carma_debug_ros2_msgs__msg__TrajectoryCurvatureSpeeds__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
carma_debug_ros2_msgs__msg__TrajectoryCurvatureSpeeds__Sequence__init(carma_debug_ros2_msgs__msg__TrajectoryCurvatureSpeeds__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  carma_debug_ros2_msgs__msg__TrajectoryCurvatureSpeeds * data = NULL;

  if (size) {
    data = (carma_debug_ros2_msgs__msg__TrajectoryCurvatureSpeeds *)allocator.zero_allocate(size, sizeof(carma_debug_ros2_msgs__msg__TrajectoryCurvatureSpeeds), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = carma_debug_ros2_msgs__msg__TrajectoryCurvatureSpeeds__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        carma_debug_ros2_msgs__msg__TrajectoryCurvatureSpeeds__fini(&data[i - 1]);
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
carma_debug_ros2_msgs__msg__TrajectoryCurvatureSpeeds__Sequence__fini(carma_debug_ros2_msgs__msg__TrajectoryCurvatureSpeeds__Sequence * array)
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
      carma_debug_ros2_msgs__msg__TrajectoryCurvatureSpeeds__fini(&array->data[i]);
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

carma_debug_ros2_msgs__msg__TrajectoryCurvatureSpeeds__Sequence *
carma_debug_ros2_msgs__msg__TrajectoryCurvatureSpeeds__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  carma_debug_ros2_msgs__msg__TrajectoryCurvatureSpeeds__Sequence * array = (carma_debug_ros2_msgs__msg__TrajectoryCurvatureSpeeds__Sequence *)allocator.allocate(sizeof(carma_debug_ros2_msgs__msg__TrajectoryCurvatureSpeeds__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = carma_debug_ros2_msgs__msg__TrajectoryCurvatureSpeeds__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
carma_debug_ros2_msgs__msg__TrajectoryCurvatureSpeeds__Sequence__destroy(carma_debug_ros2_msgs__msg__TrajectoryCurvatureSpeeds__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    carma_debug_ros2_msgs__msg__TrajectoryCurvatureSpeeds__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
carma_debug_ros2_msgs__msg__TrajectoryCurvatureSpeeds__Sequence__are_equal(const carma_debug_ros2_msgs__msg__TrajectoryCurvatureSpeeds__Sequence * lhs, const carma_debug_ros2_msgs__msg__TrajectoryCurvatureSpeeds__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!carma_debug_ros2_msgs__msg__TrajectoryCurvatureSpeeds__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
carma_debug_ros2_msgs__msg__TrajectoryCurvatureSpeeds__Sequence__copy(
  const carma_debug_ros2_msgs__msg__TrajectoryCurvatureSpeeds__Sequence * input,
  carma_debug_ros2_msgs__msg__TrajectoryCurvatureSpeeds__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(carma_debug_ros2_msgs__msg__TrajectoryCurvatureSpeeds);
    carma_debug_ros2_msgs__msg__TrajectoryCurvatureSpeeds * data =
      (carma_debug_ros2_msgs__msg__TrajectoryCurvatureSpeeds *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!carma_debug_ros2_msgs__msg__TrajectoryCurvatureSpeeds__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          carma_debug_ros2_msgs__msg__TrajectoryCurvatureSpeeds__fini(&data[i]);
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
    if (!carma_debug_ros2_msgs__msg__TrajectoryCurvatureSpeeds__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
