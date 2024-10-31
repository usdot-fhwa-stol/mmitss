// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from carma_planning_msgs:msg/Maneuver.idl
// generated code does not contain a copyright notice
#include "carma_planning_msgs/msg/detail/maneuver__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `lane_following_maneuver`
#include "carma_planning_msgs/msg/detail/lane_following_maneuver__functions.h"
// Member `lane_change_maneuver`
#include "carma_planning_msgs/msg/detail/lane_change_maneuver__functions.h"
// Member `intersection_transit_straight_maneuver`
#include "carma_planning_msgs/msg/detail/intersection_transit_straight_maneuver__functions.h"
// Member `intersection_transit_left_turn_maneuver`
#include "carma_planning_msgs/msg/detail/intersection_transit_left_turn_maneuver__functions.h"
// Member `intersection_transit_right_turn_maneuver`
#include "carma_planning_msgs/msg/detail/intersection_transit_right_turn_maneuver__functions.h"
// Member `stop_and_wait_maneuver`
#include "carma_planning_msgs/msg/detail/stop_and_wait_maneuver__functions.h"

bool
carma_planning_msgs__msg__Maneuver__init(carma_planning_msgs__msg__Maneuver * msg)
{
  if (!msg) {
    return false;
  }
  // type
  // lane_following_maneuver
  if (!carma_planning_msgs__msg__LaneFollowingManeuver__init(&msg->lane_following_maneuver)) {
    carma_planning_msgs__msg__Maneuver__fini(msg);
    return false;
  }
  // lane_change_maneuver
  if (!carma_planning_msgs__msg__LaneChangeManeuver__init(&msg->lane_change_maneuver)) {
    carma_planning_msgs__msg__Maneuver__fini(msg);
    return false;
  }
  // intersection_transit_straight_maneuver
  if (!carma_planning_msgs__msg__IntersectionTransitStraightManeuver__init(&msg->intersection_transit_straight_maneuver)) {
    carma_planning_msgs__msg__Maneuver__fini(msg);
    return false;
  }
  // intersection_transit_left_turn_maneuver
  if (!carma_planning_msgs__msg__IntersectionTransitLeftTurnManeuver__init(&msg->intersection_transit_left_turn_maneuver)) {
    carma_planning_msgs__msg__Maneuver__fini(msg);
    return false;
  }
  // intersection_transit_right_turn_maneuver
  if (!carma_planning_msgs__msg__IntersectionTransitRightTurnManeuver__init(&msg->intersection_transit_right_turn_maneuver)) {
    carma_planning_msgs__msg__Maneuver__fini(msg);
    return false;
  }
  // stop_and_wait_maneuver
  if (!carma_planning_msgs__msg__StopAndWaitManeuver__init(&msg->stop_and_wait_maneuver)) {
    carma_planning_msgs__msg__Maneuver__fini(msg);
    return false;
  }
  return true;
}

void
carma_planning_msgs__msg__Maneuver__fini(carma_planning_msgs__msg__Maneuver * msg)
{
  if (!msg) {
    return;
  }
  // type
  // lane_following_maneuver
  carma_planning_msgs__msg__LaneFollowingManeuver__fini(&msg->lane_following_maneuver);
  // lane_change_maneuver
  carma_planning_msgs__msg__LaneChangeManeuver__fini(&msg->lane_change_maneuver);
  // intersection_transit_straight_maneuver
  carma_planning_msgs__msg__IntersectionTransitStraightManeuver__fini(&msg->intersection_transit_straight_maneuver);
  // intersection_transit_left_turn_maneuver
  carma_planning_msgs__msg__IntersectionTransitLeftTurnManeuver__fini(&msg->intersection_transit_left_turn_maneuver);
  // intersection_transit_right_turn_maneuver
  carma_planning_msgs__msg__IntersectionTransitRightTurnManeuver__fini(&msg->intersection_transit_right_turn_maneuver);
  // stop_and_wait_maneuver
  carma_planning_msgs__msg__StopAndWaitManeuver__fini(&msg->stop_and_wait_maneuver);
}

bool
carma_planning_msgs__msg__Maneuver__are_equal(const carma_planning_msgs__msg__Maneuver * lhs, const carma_planning_msgs__msg__Maneuver * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // type
  if (lhs->type != rhs->type) {
    return false;
  }
  // lane_following_maneuver
  if (!carma_planning_msgs__msg__LaneFollowingManeuver__are_equal(
      &(lhs->lane_following_maneuver), &(rhs->lane_following_maneuver)))
  {
    return false;
  }
  // lane_change_maneuver
  if (!carma_planning_msgs__msg__LaneChangeManeuver__are_equal(
      &(lhs->lane_change_maneuver), &(rhs->lane_change_maneuver)))
  {
    return false;
  }
  // intersection_transit_straight_maneuver
  if (!carma_planning_msgs__msg__IntersectionTransitStraightManeuver__are_equal(
      &(lhs->intersection_transit_straight_maneuver), &(rhs->intersection_transit_straight_maneuver)))
  {
    return false;
  }
  // intersection_transit_left_turn_maneuver
  if (!carma_planning_msgs__msg__IntersectionTransitLeftTurnManeuver__are_equal(
      &(lhs->intersection_transit_left_turn_maneuver), &(rhs->intersection_transit_left_turn_maneuver)))
  {
    return false;
  }
  // intersection_transit_right_turn_maneuver
  if (!carma_planning_msgs__msg__IntersectionTransitRightTurnManeuver__are_equal(
      &(lhs->intersection_transit_right_turn_maneuver), &(rhs->intersection_transit_right_turn_maneuver)))
  {
    return false;
  }
  // stop_and_wait_maneuver
  if (!carma_planning_msgs__msg__StopAndWaitManeuver__are_equal(
      &(lhs->stop_and_wait_maneuver), &(rhs->stop_and_wait_maneuver)))
  {
    return false;
  }
  return true;
}

bool
carma_planning_msgs__msg__Maneuver__copy(
  const carma_planning_msgs__msg__Maneuver * input,
  carma_planning_msgs__msg__Maneuver * output)
{
  if (!input || !output) {
    return false;
  }
  // type
  output->type = input->type;
  // lane_following_maneuver
  if (!carma_planning_msgs__msg__LaneFollowingManeuver__copy(
      &(input->lane_following_maneuver), &(output->lane_following_maneuver)))
  {
    return false;
  }
  // lane_change_maneuver
  if (!carma_planning_msgs__msg__LaneChangeManeuver__copy(
      &(input->lane_change_maneuver), &(output->lane_change_maneuver)))
  {
    return false;
  }
  // intersection_transit_straight_maneuver
  if (!carma_planning_msgs__msg__IntersectionTransitStraightManeuver__copy(
      &(input->intersection_transit_straight_maneuver), &(output->intersection_transit_straight_maneuver)))
  {
    return false;
  }
  // intersection_transit_left_turn_maneuver
  if (!carma_planning_msgs__msg__IntersectionTransitLeftTurnManeuver__copy(
      &(input->intersection_transit_left_turn_maneuver), &(output->intersection_transit_left_turn_maneuver)))
  {
    return false;
  }
  // intersection_transit_right_turn_maneuver
  if (!carma_planning_msgs__msg__IntersectionTransitRightTurnManeuver__copy(
      &(input->intersection_transit_right_turn_maneuver), &(output->intersection_transit_right_turn_maneuver)))
  {
    return false;
  }
  // stop_and_wait_maneuver
  if (!carma_planning_msgs__msg__StopAndWaitManeuver__copy(
      &(input->stop_and_wait_maneuver), &(output->stop_and_wait_maneuver)))
  {
    return false;
  }
  return true;
}

carma_planning_msgs__msg__Maneuver *
carma_planning_msgs__msg__Maneuver__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  carma_planning_msgs__msg__Maneuver * msg = (carma_planning_msgs__msg__Maneuver *)allocator.allocate(sizeof(carma_planning_msgs__msg__Maneuver), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(carma_planning_msgs__msg__Maneuver));
  bool success = carma_planning_msgs__msg__Maneuver__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
carma_planning_msgs__msg__Maneuver__destroy(carma_planning_msgs__msg__Maneuver * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    carma_planning_msgs__msg__Maneuver__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
carma_planning_msgs__msg__Maneuver__Sequence__init(carma_planning_msgs__msg__Maneuver__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  carma_planning_msgs__msg__Maneuver * data = NULL;

  if (size) {
    data = (carma_planning_msgs__msg__Maneuver *)allocator.zero_allocate(size, sizeof(carma_planning_msgs__msg__Maneuver), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = carma_planning_msgs__msg__Maneuver__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        carma_planning_msgs__msg__Maneuver__fini(&data[i - 1]);
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
carma_planning_msgs__msg__Maneuver__Sequence__fini(carma_planning_msgs__msg__Maneuver__Sequence * array)
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
      carma_planning_msgs__msg__Maneuver__fini(&array->data[i]);
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

carma_planning_msgs__msg__Maneuver__Sequence *
carma_planning_msgs__msg__Maneuver__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  carma_planning_msgs__msg__Maneuver__Sequence * array = (carma_planning_msgs__msg__Maneuver__Sequence *)allocator.allocate(sizeof(carma_planning_msgs__msg__Maneuver__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = carma_planning_msgs__msg__Maneuver__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
carma_planning_msgs__msg__Maneuver__Sequence__destroy(carma_planning_msgs__msg__Maneuver__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    carma_planning_msgs__msg__Maneuver__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
carma_planning_msgs__msg__Maneuver__Sequence__are_equal(const carma_planning_msgs__msg__Maneuver__Sequence * lhs, const carma_planning_msgs__msg__Maneuver__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!carma_planning_msgs__msg__Maneuver__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
carma_planning_msgs__msg__Maneuver__Sequence__copy(
  const carma_planning_msgs__msg__Maneuver__Sequence * input,
  carma_planning_msgs__msg__Maneuver__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(carma_planning_msgs__msg__Maneuver);
    carma_planning_msgs__msg__Maneuver * data =
      (carma_planning_msgs__msg__Maneuver *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!carma_planning_msgs__msg__Maneuver__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          carma_planning_msgs__msg__Maneuver__fini(&data[i]);
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
    if (!carma_planning_msgs__msg__Maneuver__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
