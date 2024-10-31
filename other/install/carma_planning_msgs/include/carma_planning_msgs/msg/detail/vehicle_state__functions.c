// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from carma_planning_msgs:msg/VehicleState.idl
// generated code does not contain a copyright notice
#include "carma_planning_msgs/msg/detail/vehicle_state__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
carma_planning_msgs__msg__VehicleState__init(carma_planning_msgs__msg__VehicleState * msg)
{
  if (!msg) {
    return false;
  }
  // x_pos_global
  // y_pos_global
  // orientation
  // longitudinal_vel
  // lateral_vel
  // yaw_rate
  // front_wheel_rotation_rate
  // rear_wheel_rotation_rate
  // steering_angle
  // trailer_angle
  // prev_vel_cmd
  // prev_steering_cmd
  return true;
}

void
carma_planning_msgs__msg__VehicleState__fini(carma_planning_msgs__msg__VehicleState * msg)
{
  if (!msg) {
    return;
  }
  // x_pos_global
  // y_pos_global
  // orientation
  // longitudinal_vel
  // lateral_vel
  // yaw_rate
  // front_wheel_rotation_rate
  // rear_wheel_rotation_rate
  // steering_angle
  // trailer_angle
  // prev_vel_cmd
  // prev_steering_cmd
}

bool
carma_planning_msgs__msg__VehicleState__are_equal(const carma_planning_msgs__msg__VehicleState * lhs, const carma_planning_msgs__msg__VehicleState * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // x_pos_global
  if (lhs->x_pos_global != rhs->x_pos_global) {
    return false;
  }
  // y_pos_global
  if (lhs->y_pos_global != rhs->y_pos_global) {
    return false;
  }
  // orientation
  if (lhs->orientation != rhs->orientation) {
    return false;
  }
  // longitudinal_vel
  if (lhs->longitudinal_vel != rhs->longitudinal_vel) {
    return false;
  }
  // lateral_vel
  if (lhs->lateral_vel != rhs->lateral_vel) {
    return false;
  }
  // yaw_rate
  if (lhs->yaw_rate != rhs->yaw_rate) {
    return false;
  }
  // front_wheel_rotation_rate
  if (lhs->front_wheel_rotation_rate != rhs->front_wheel_rotation_rate) {
    return false;
  }
  // rear_wheel_rotation_rate
  if (lhs->rear_wheel_rotation_rate != rhs->rear_wheel_rotation_rate) {
    return false;
  }
  // steering_angle
  if (lhs->steering_angle != rhs->steering_angle) {
    return false;
  }
  // trailer_angle
  if (lhs->trailer_angle != rhs->trailer_angle) {
    return false;
  }
  // prev_vel_cmd
  if (lhs->prev_vel_cmd != rhs->prev_vel_cmd) {
    return false;
  }
  // prev_steering_cmd
  if (lhs->prev_steering_cmd != rhs->prev_steering_cmd) {
    return false;
  }
  return true;
}

bool
carma_planning_msgs__msg__VehicleState__copy(
  const carma_planning_msgs__msg__VehicleState * input,
  carma_planning_msgs__msg__VehicleState * output)
{
  if (!input || !output) {
    return false;
  }
  // x_pos_global
  output->x_pos_global = input->x_pos_global;
  // y_pos_global
  output->y_pos_global = input->y_pos_global;
  // orientation
  output->orientation = input->orientation;
  // longitudinal_vel
  output->longitudinal_vel = input->longitudinal_vel;
  // lateral_vel
  output->lateral_vel = input->lateral_vel;
  // yaw_rate
  output->yaw_rate = input->yaw_rate;
  // front_wheel_rotation_rate
  output->front_wheel_rotation_rate = input->front_wheel_rotation_rate;
  // rear_wheel_rotation_rate
  output->rear_wheel_rotation_rate = input->rear_wheel_rotation_rate;
  // steering_angle
  output->steering_angle = input->steering_angle;
  // trailer_angle
  output->trailer_angle = input->trailer_angle;
  // prev_vel_cmd
  output->prev_vel_cmd = input->prev_vel_cmd;
  // prev_steering_cmd
  output->prev_steering_cmd = input->prev_steering_cmd;
  return true;
}

carma_planning_msgs__msg__VehicleState *
carma_planning_msgs__msg__VehicleState__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  carma_planning_msgs__msg__VehicleState * msg = (carma_planning_msgs__msg__VehicleState *)allocator.allocate(sizeof(carma_planning_msgs__msg__VehicleState), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(carma_planning_msgs__msg__VehicleState));
  bool success = carma_planning_msgs__msg__VehicleState__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
carma_planning_msgs__msg__VehicleState__destroy(carma_planning_msgs__msg__VehicleState * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    carma_planning_msgs__msg__VehicleState__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
carma_planning_msgs__msg__VehicleState__Sequence__init(carma_planning_msgs__msg__VehicleState__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  carma_planning_msgs__msg__VehicleState * data = NULL;

  if (size) {
    data = (carma_planning_msgs__msg__VehicleState *)allocator.zero_allocate(size, sizeof(carma_planning_msgs__msg__VehicleState), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = carma_planning_msgs__msg__VehicleState__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        carma_planning_msgs__msg__VehicleState__fini(&data[i - 1]);
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
carma_planning_msgs__msg__VehicleState__Sequence__fini(carma_planning_msgs__msg__VehicleState__Sequence * array)
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
      carma_planning_msgs__msg__VehicleState__fini(&array->data[i]);
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

carma_planning_msgs__msg__VehicleState__Sequence *
carma_planning_msgs__msg__VehicleState__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  carma_planning_msgs__msg__VehicleState__Sequence * array = (carma_planning_msgs__msg__VehicleState__Sequence *)allocator.allocate(sizeof(carma_planning_msgs__msg__VehicleState__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = carma_planning_msgs__msg__VehicleState__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
carma_planning_msgs__msg__VehicleState__Sequence__destroy(carma_planning_msgs__msg__VehicleState__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    carma_planning_msgs__msg__VehicleState__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
carma_planning_msgs__msg__VehicleState__Sequence__are_equal(const carma_planning_msgs__msg__VehicleState__Sequence * lhs, const carma_planning_msgs__msg__VehicleState__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!carma_planning_msgs__msg__VehicleState__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
carma_planning_msgs__msg__VehicleState__Sequence__copy(
  const carma_planning_msgs__msg__VehicleState__Sequence * input,
  carma_planning_msgs__msg__VehicleState__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(carma_planning_msgs__msg__VehicleState);
    carma_planning_msgs__msg__VehicleState * data =
      (carma_planning_msgs__msg__VehicleState *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!carma_planning_msgs__msg__VehicleState__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          carma_planning_msgs__msg__VehicleState__fini(&data[i]);
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
    if (!carma_planning_msgs__msg__VehicleState__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
