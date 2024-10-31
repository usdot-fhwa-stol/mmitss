// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from carma_perception_msgs:msg/RoadwayObstacleList.idl
// generated code does not contain a copyright notice
#include "carma_perception_msgs/msg/detail/roadway_obstacle_list__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `roadway_obstacles`
#include "carma_perception_msgs/msg/detail/roadway_obstacle__functions.h"

bool
carma_perception_msgs__msg__RoadwayObstacleList__init(carma_perception_msgs__msg__RoadwayObstacleList * msg)
{
  if (!msg) {
    return false;
  }
  // roadway_obstacles
  if (!carma_perception_msgs__msg__RoadwayObstacle__Sequence__init(&msg->roadway_obstacles, 0)) {
    carma_perception_msgs__msg__RoadwayObstacleList__fini(msg);
    return false;
  }
  return true;
}

void
carma_perception_msgs__msg__RoadwayObstacleList__fini(carma_perception_msgs__msg__RoadwayObstacleList * msg)
{
  if (!msg) {
    return;
  }
  // roadway_obstacles
  carma_perception_msgs__msg__RoadwayObstacle__Sequence__fini(&msg->roadway_obstacles);
}

bool
carma_perception_msgs__msg__RoadwayObstacleList__are_equal(const carma_perception_msgs__msg__RoadwayObstacleList * lhs, const carma_perception_msgs__msg__RoadwayObstacleList * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // roadway_obstacles
  if (!carma_perception_msgs__msg__RoadwayObstacle__Sequence__are_equal(
      &(lhs->roadway_obstacles), &(rhs->roadway_obstacles)))
  {
    return false;
  }
  return true;
}

bool
carma_perception_msgs__msg__RoadwayObstacleList__copy(
  const carma_perception_msgs__msg__RoadwayObstacleList * input,
  carma_perception_msgs__msg__RoadwayObstacleList * output)
{
  if (!input || !output) {
    return false;
  }
  // roadway_obstacles
  if (!carma_perception_msgs__msg__RoadwayObstacle__Sequence__copy(
      &(input->roadway_obstacles), &(output->roadway_obstacles)))
  {
    return false;
  }
  return true;
}

carma_perception_msgs__msg__RoadwayObstacleList *
carma_perception_msgs__msg__RoadwayObstacleList__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  carma_perception_msgs__msg__RoadwayObstacleList * msg = (carma_perception_msgs__msg__RoadwayObstacleList *)allocator.allocate(sizeof(carma_perception_msgs__msg__RoadwayObstacleList), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(carma_perception_msgs__msg__RoadwayObstacleList));
  bool success = carma_perception_msgs__msg__RoadwayObstacleList__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
carma_perception_msgs__msg__RoadwayObstacleList__destroy(carma_perception_msgs__msg__RoadwayObstacleList * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    carma_perception_msgs__msg__RoadwayObstacleList__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
carma_perception_msgs__msg__RoadwayObstacleList__Sequence__init(carma_perception_msgs__msg__RoadwayObstacleList__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  carma_perception_msgs__msg__RoadwayObstacleList * data = NULL;

  if (size) {
    data = (carma_perception_msgs__msg__RoadwayObstacleList *)allocator.zero_allocate(size, sizeof(carma_perception_msgs__msg__RoadwayObstacleList), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = carma_perception_msgs__msg__RoadwayObstacleList__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        carma_perception_msgs__msg__RoadwayObstacleList__fini(&data[i - 1]);
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
carma_perception_msgs__msg__RoadwayObstacleList__Sequence__fini(carma_perception_msgs__msg__RoadwayObstacleList__Sequence * array)
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
      carma_perception_msgs__msg__RoadwayObstacleList__fini(&array->data[i]);
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

carma_perception_msgs__msg__RoadwayObstacleList__Sequence *
carma_perception_msgs__msg__RoadwayObstacleList__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  carma_perception_msgs__msg__RoadwayObstacleList__Sequence * array = (carma_perception_msgs__msg__RoadwayObstacleList__Sequence *)allocator.allocate(sizeof(carma_perception_msgs__msg__RoadwayObstacleList__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = carma_perception_msgs__msg__RoadwayObstacleList__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
carma_perception_msgs__msg__RoadwayObstacleList__Sequence__destroy(carma_perception_msgs__msg__RoadwayObstacleList__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    carma_perception_msgs__msg__RoadwayObstacleList__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
carma_perception_msgs__msg__RoadwayObstacleList__Sequence__are_equal(const carma_perception_msgs__msg__RoadwayObstacleList__Sequence * lhs, const carma_perception_msgs__msg__RoadwayObstacleList__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!carma_perception_msgs__msg__RoadwayObstacleList__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
carma_perception_msgs__msg__RoadwayObstacleList__Sequence__copy(
  const carma_perception_msgs__msg__RoadwayObstacleList__Sequence * input,
  carma_perception_msgs__msg__RoadwayObstacleList__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(carma_perception_msgs__msg__RoadwayObstacleList);
    carma_perception_msgs__msg__RoadwayObstacleList * data =
      (carma_perception_msgs__msg__RoadwayObstacleList *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!carma_perception_msgs__msg__RoadwayObstacleList__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          carma_perception_msgs__msg__RoadwayObstacleList__fini(&data[i]);
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
    if (!carma_perception_msgs__msg__RoadwayObstacleList__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
