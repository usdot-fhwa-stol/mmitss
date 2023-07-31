// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from carma_planning_msgs:srv/PlanManeuvers.idl
// generated code does not contain a copyright notice
#include "carma_planning_msgs/srv/detail/plan_maneuvers__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `prior_plan`
#include "carma_planning_msgs/msg/detail/maneuver_plan__functions.h"
// Member `veh_lane_id`
#include "rosidl_runtime_c/string_functions.h"

bool
carma_planning_msgs__srv__PlanManeuvers_Request__init(carma_planning_msgs__srv__PlanManeuvers_Request * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    carma_planning_msgs__srv__PlanManeuvers_Request__fini(msg);
    return false;
  }
  // prior_plan
  if (!carma_planning_msgs__msg__ManeuverPlan__init(&msg->prior_plan)) {
    carma_planning_msgs__srv__PlanManeuvers_Request__fini(msg);
    return false;
  }
  // veh_x
  // veh_y
  // veh_downtrack
  // veh_logitudinal_velocity
  // veh_lane_id
  if (!rosidl_runtime_c__String__init(&msg->veh_lane_id)) {
    carma_planning_msgs__srv__PlanManeuvers_Request__fini(msg);
    return false;
  }
  return true;
}

void
carma_planning_msgs__srv__PlanManeuvers_Request__fini(carma_planning_msgs__srv__PlanManeuvers_Request * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // prior_plan
  carma_planning_msgs__msg__ManeuverPlan__fini(&msg->prior_plan);
  // veh_x
  // veh_y
  // veh_downtrack
  // veh_logitudinal_velocity
  // veh_lane_id
  rosidl_runtime_c__String__fini(&msg->veh_lane_id);
}

bool
carma_planning_msgs__srv__PlanManeuvers_Request__are_equal(const carma_planning_msgs__srv__PlanManeuvers_Request * lhs, const carma_planning_msgs__srv__PlanManeuvers_Request * rhs)
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
  // prior_plan
  if (!carma_planning_msgs__msg__ManeuverPlan__are_equal(
      &(lhs->prior_plan), &(rhs->prior_plan)))
  {
    return false;
  }
  // veh_x
  if (lhs->veh_x != rhs->veh_x) {
    return false;
  }
  // veh_y
  if (lhs->veh_y != rhs->veh_y) {
    return false;
  }
  // veh_downtrack
  if (lhs->veh_downtrack != rhs->veh_downtrack) {
    return false;
  }
  // veh_logitudinal_velocity
  if (lhs->veh_logitudinal_velocity != rhs->veh_logitudinal_velocity) {
    return false;
  }
  // veh_lane_id
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->veh_lane_id), &(rhs->veh_lane_id)))
  {
    return false;
  }
  return true;
}

bool
carma_planning_msgs__srv__PlanManeuvers_Request__copy(
  const carma_planning_msgs__srv__PlanManeuvers_Request * input,
  carma_planning_msgs__srv__PlanManeuvers_Request * output)
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
  // prior_plan
  if (!carma_planning_msgs__msg__ManeuverPlan__copy(
      &(input->prior_plan), &(output->prior_plan)))
  {
    return false;
  }
  // veh_x
  output->veh_x = input->veh_x;
  // veh_y
  output->veh_y = input->veh_y;
  // veh_downtrack
  output->veh_downtrack = input->veh_downtrack;
  // veh_logitudinal_velocity
  output->veh_logitudinal_velocity = input->veh_logitudinal_velocity;
  // veh_lane_id
  if (!rosidl_runtime_c__String__copy(
      &(input->veh_lane_id), &(output->veh_lane_id)))
  {
    return false;
  }
  return true;
}

carma_planning_msgs__srv__PlanManeuvers_Request *
carma_planning_msgs__srv__PlanManeuvers_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  carma_planning_msgs__srv__PlanManeuvers_Request * msg = (carma_planning_msgs__srv__PlanManeuvers_Request *)allocator.allocate(sizeof(carma_planning_msgs__srv__PlanManeuvers_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(carma_planning_msgs__srv__PlanManeuvers_Request));
  bool success = carma_planning_msgs__srv__PlanManeuvers_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
carma_planning_msgs__srv__PlanManeuvers_Request__destroy(carma_planning_msgs__srv__PlanManeuvers_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    carma_planning_msgs__srv__PlanManeuvers_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
carma_planning_msgs__srv__PlanManeuvers_Request__Sequence__init(carma_planning_msgs__srv__PlanManeuvers_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  carma_planning_msgs__srv__PlanManeuvers_Request * data = NULL;

  if (size) {
    data = (carma_planning_msgs__srv__PlanManeuvers_Request *)allocator.zero_allocate(size, sizeof(carma_planning_msgs__srv__PlanManeuvers_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = carma_planning_msgs__srv__PlanManeuvers_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        carma_planning_msgs__srv__PlanManeuvers_Request__fini(&data[i - 1]);
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
carma_planning_msgs__srv__PlanManeuvers_Request__Sequence__fini(carma_planning_msgs__srv__PlanManeuvers_Request__Sequence * array)
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
      carma_planning_msgs__srv__PlanManeuvers_Request__fini(&array->data[i]);
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

carma_planning_msgs__srv__PlanManeuvers_Request__Sequence *
carma_planning_msgs__srv__PlanManeuvers_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  carma_planning_msgs__srv__PlanManeuvers_Request__Sequence * array = (carma_planning_msgs__srv__PlanManeuvers_Request__Sequence *)allocator.allocate(sizeof(carma_planning_msgs__srv__PlanManeuvers_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = carma_planning_msgs__srv__PlanManeuvers_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
carma_planning_msgs__srv__PlanManeuvers_Request__Sequence__destroy(carma_planning_msgs__srv__PlanManeuvers_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    carma_planning_msgs__srv__PlanManeuvers_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
carma_planning_msgs__srv__PlanManeuvers_Request__Sequence__are_equal(const carma_planning_msgs__srv__PlanManeuvers_Request__Sequence * lhs, const carma_planning_msgs__srv__PlanManeuvers_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!carma_planning_msgs__srv__PlanManeuvers_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
carma_planning_msgs__srv__PlanManeuvers_Request__Sequence__copy(
  const carma_planning_msgs__srv__PlanManeuvers_Request__Sequence * input,
  carma_planning_msgs__srv__PlanManeuvers_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(carma_planning_msgs__srv__PlanManeuvers_Request);
    carma_planning_msgs__srv__PlanManeuvers_Request * data =
      (carma_planning_msgs__srv__PlanManeuvers_Request *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!carma_planning_msgs__srv__PlanManeuvers_Request__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          carma_planning_msgs__srv__PlanManeuvers_Request__fini(&data[i]);
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
    if (!carma_planning_msgs__srv__PlanManeuvers_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `new_plan`
// already included above
// #include "carma_planning_msgs/msg/detail/maneuver_plan__functions.h"

bool
carma_planning_msgs__srv__PlanManeuvers_Response__init(carma_planning_msgs__srv__PlanManeuvers_Response * msg)
{
  if (!msg) {
    return false;
  }
  // new_plan
  if (!carma_planning_msgs__msg__ManeuverPlan__init(&msg->new_plan)) {
    carma_planning_msgs__srv__PlanManeuvers_Response__fini(msg);
    return false;
  }
  return true;
}

void
carma_planning_msgs__srv__PlanManeuvers_Response__fini(carma_planning_msgs__srv__PlanManeuvers_Response * msg)
{
  if (!msg) {
    return;
  }
  // new_plan
  carma_planning_msgs__msg__ManeuverPlan__fini(&msg->new_plan);
}

bool
carma_planning_msgs__srv__PlanManeuvers_Response__are_equal(const carma_planning_msgs__srv__PlanManeuvers_Response * lhs, const carma_planning_msgs__srv__PlanManeuvers_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // new_plan
  if (!carma_planning_msgs__msg__ManeuverPlan__are_equal(
      &(lhs->new_plan), &(rhs->new_plan)))
  {
    return false;
  }
  return true;
}

bool
carma_planning_msgs__srv__PlanManeuvers_Response__copy(
  const carma_planning_msgs__srv__PlanManeuvers_Response * input,
  carma_planning_msgs__srv__PlanManeuvers_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // new_plan
  if (!carma_planning_msgs__msg__ManeuverPlan__copy(
      &(input->new_plan), &(output->new_plan)))
  {
    return false;
  }
  return true;
}

carma_planning_msgs__srv__PlanManeuvers_Response *
carma_planning_msgs__srv__PlanManeuvers_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  carma_planning_msgs__srv__PlanManeuvers_Response * msg = (carma_planning_msgs__srv__PlanManeuvers_Response *)allocator.allocate(sizeof(carma_planning_msgs__srv__PlanManeuvers_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(carma_planning_msgs__srv__PlanManeuvers_Response));
  bool success = carma_planning_msgs__srv__PlanManeuvers_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
carma_planning_msgs__srv__PlanManeuvers_Response__destroy(carma_planning_msgs__srv__PlanManeuvers_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    carma_planning_msgs__srv__PlanManeuvers_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
carma_planning_msgs__srv__PlanManeuvers_Response__Sequence__init(carma_planning_msgs__srv__PlanManeuvers_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  carma_planning_msgs__srv__PlanManeuvers_Response * data = NULL;

  if (size) {
    data = (carma_planning_msgs__srv__PlanManeuvers_Response *)allocator.zero_allocate(size, sizeof(carma_planning_msgs__srv__PlanManeuvers_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = carma_planning_msgs__srv__PlanManeuvers_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        carma_planning_msgs__srv__PlanManeuvers_Response__fini(&data[i - 1]);
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
carma_planning_msgs__srv__PlanManeuvers_Response__Sequence__fini(carma_planning_msgs__srv__PlanManeuvers_Response__Sequence * array)
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
      carma_planning_msgs__srv__PlanManeuvers_Response__fini(&array->data[i]);
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

carma_planning_msgs__srv__PlanManeuvers_Response__Sequence *
carma_planning_msgs__srv__PlanManeuvers_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  carma_planning_msgs__srv__PlanManeuvers_Response__Sequence * array = (carma_planning_msgs__srv__PlanManeuvers_Response__Sequence *)allocator.allocate(sizeof(carma_planning_msgs__srv__PlanManeuvers_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = carma_planning_msgs__srv__PlanManeuvers_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
carma_planning_msgs__srv__PlanManeuvers_Response__Sequence__destroy(carma_planning_msgs__srv__PlanManeuvers_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    carma_planning_msgs__srv__PlanManeuvers_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
carma_planning_msgs__srv__PlanManeuvers_Response__Sequence__are_equal(const carma_planning_msgs__srv__PlanManeuvers_Response__Sequence * lhs, const carma_planning_msgs__srv__PlanManeuvers_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!carma_planning_msgs__srv__PlanManeuvers_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
carma_planning_msgs__srv__PlanManeuvers_Response__Sequence__copy(
  const carma_planning_msgs__srv__PlanManeuvers_Response__Sequence * input,
  carma_planning_msgs__srv__PlanManeuvers_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(carma_planning_msgs__srv__PlanManeuvers_Response);
    carma_planning_msgs__srv__PlanManeuvers_Response * data =
      (carma_planning_msgs__srv__PlanManeuvers_Response *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!carma_planning_msgs__srv__PlanManeuvers_Response__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          carma_planning_msgs__srv__PlanManeuvers_Response__fini(&data[i]);
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
    if (!carma_planning_msgs__srv__PlanManeuvers_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
