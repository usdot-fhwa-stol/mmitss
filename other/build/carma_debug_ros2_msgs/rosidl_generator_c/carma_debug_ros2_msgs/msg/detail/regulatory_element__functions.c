// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from carma_debug_ros2_msgs:msg/RegulatoryElement.idl
// generated code does not contain a copyright notice
#include "carma_debug_ros2_msgs/msg/detail/regulatory_element__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `rule_name`
// Member `participants`
// Member `direction`
// Member `left_participants`
// Member `right_participants`
// Member `reason`
#include "rosidl_runtime_c/string_functions.h"

bool
carma_debug_ros2_msgs__msg__RegulatoryElement__init(carma_debug_ros2_msgs__msg__RegulatoryElement * msg)
{
  if (!msg) {
    return false;
  }
  // rule_name
  if (!rosidl_runtime_c__String__init(&msg->rule_name)) {
    carma_debug_ros2_msgs__msg__RegulatoryElement__fini(msg);
    return false;
  }
  // participants
  if (!rosidl_runtime_c__String__Sequence__init(&msg->participants, 0)) {
    carma_debug_ros2_msgs__msg__RegulatoryElement__fini(msg);
    return false;
  }
  // unsupported_type
  // min_gap
  // speed_limit
  // direction
  if (!rosidl_runtime_c__String__init(&msg->direction)) {
    carma_debug_ros2_msgs__msg__RegulatoryElement__fini(msg);
    return false;
  }
  // left_participants
  if (!rosidl_runtime_c__String__Sequence__init(&msg->left_participants, 0)) {
    carma_debug_ros2_msgs__msg__RegulatoryElement__fini(msg);
    return false;
  }
  // right_participants
  if (!rosidl_runtime_c__String__Sequence__init(&msg->right_participants, 0)) {
    carma_debug_ros2_msgs__msg__RegulatoryElement__fini(msg);
    return false;
  }
  // reason
  if (!rosidl_runtime_c__String__init(&msg->reason)) {
    carma_debug_ros2_msgs__msg__RegulatoryElement__fini(msg);
    return false;
  }
  return true;
}

void
carma_debug_ros2_msgs__msg__RegulatoryElement__fini(carma_debug_ros2_msgs__msg__RegulatoryElement * msg)
{
  if (!msg) {
    return;
  }
  // rule_name
  rosidl_runtime_c__String__fini(&msg->rule_name);
  // participants
  rosidl_runtime_c__String__Sequence__fini(&msg->participants);
  // unsupported_type
  // min_gap
  // speed_limit
  // direction
  rosidl_runtime_c__String__fini(&msg->direction);
  // left_participants
  rosidl_runtime_c__String__Sequence__fini(&msg->left_participants);
  // right_participants
  rosidl_runtime_c__String__Sequence__fini(&msg->right_participants);
  // reason
  rosidl_runtime_c__String__fini(&msg->reason);
}

bool
carma_debug_ros2_msgs__msg__RegulatoryElement__are_equal(const carma_debug_ros2_msgs__msg__RegulatoryElement * lhs, const carma_debug_ros2_msgs__msg__RegulatoryElement * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // rule_name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->rule_name), &(rhs->rule_name)))
  {
    return false;
  }
  // participants
  if (!rosidl_runtime_c__String__Sequence__are_equal(
      &(lhs->participants), &(rhs->participants)))
  {
    return false;
  }
  // unsupported_type
  if (lhs->unsupported_type != rhs->unsupported_type) {
    return false;
  }
  // min_gap
  if (lhs->min_gap != rhs->min_gap) {
    return false;
  }
  // speed_limit
  if (lhs->speed_limit != rhs->speed_limit) {
    return false;
  }
  // direction
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->direction), &(rhs->direction)))
  {
    return false;
  }
  // left_participants
  if (!rosidl_runtime_c__String__Sequence__are_equal(
      &(lhs->left_participants), &(rhs->left_participants)))
  {
    return false;
  }
  // right_participants
  if (!rosidl_runtime_c__String__Sequence__are_equal(
      &(lhs->right_participants), &(rhs->right_participants)))
  {
    return false;
  }
  // reason
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->reason), &(rhs->reason)))
  {
    return false;
  }
  return true;
}

bool
carma_debug_ros2_msgs__msg__RegulatoryElement__copy(
  const carma_debug_ros2_msgs__msg__RegulatoryElement * input,
  carma_debug_ros2_msgs__msg__RegulatoryElement * output)
{
  if (!input || !output) {
    return false;
  }
  // rule_name
  if (!rosidl_runtime_c__String__copy(
      &(input->rule_name), &(output->rule_name)))
  {
    return false;
  }
  // participants
  if (!rosidl_runtime_c__String__Sequence__copy(
      &(input->participants), &(output->participants)))
  {
    return false;
  }
  // unsupported_type
  output->unsupported_type = input->unsupported_type;
  // min_gap
  output->min_gap = input->min_gap;
  // speed_limit
  output->speed_limit = input->speed_limit;
  // direction
  if (!rosidl_runtime_c__String__copy(
      &(input->direction), &(output->direction)))
  {
    return false;
  }
  // left_participants
  if (!rosidl_runtime_c__String__Sequence__copy(
      &(input->left_participants), &(output->left_participants)))
  {
    return false;
  }
  // right_participants
  if (!rosidl_runtime_c__String__Sequence__copy(
      &(input->right_participants), &(output->right_participants)))
  {
    return false;
  }
  // reason
  if (!rosidl_runtime_c__String__copy(
      &(input->reason), &(output->reason)))
  {
    return false;
  }
  return true;
}

carma_debug_ros2_msgs__msg__RegulatoryElement *
carma_debug_ros2_msgs__msg__RegulatoryElement__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  carma_debug_ros2_msgs__msg__RegulatoryElement * msg = (carma_debug_ros2_msgs__msg__RegulatoryElement *)allocator.allocate(sizeof(carma_debug_ros2_msgs__msg__RegulatoryElement), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(carma_debug_ros2_msgs__msg__RegulatoryElement));
  bool success = carma_debug_ros2_msgs__msg__RegulatoryElement__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
carma_debug_ros2_msgs__msg__RegulatoryElement__destroy(carma_debug_ros2_msgs__msg__RegulatoryElement * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    carma_debug_ros2_msgs__msg__RegulatoryElement__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
carma_debug_ros2_msgs__msg__RegulatoryElement__Sequence__init(carma_debug_ros2_msgs__msg__RegulatoryElement__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  carma_debug_ros2_msgs__msg__RegulatoryElement * data = NULL;

  if (size) {
    data = (carma_debug_ros2_msgs__msg__RegulatoryElement *)allocator.zero_allocate(size, sizeof(carma_debug_ros2_msgs__msg__RegulatoryElement), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = carma_debug_ros2_msgs__msg__RegulatoryElement__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        carma_debug_ros2_msgs__msg__RegulatoryElement__fini(&data[i - 1]);
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
carma_debug_ros2_msgs__msg__RegulatoryElement__Sequence__fini(carma_debug_ros2_msgs__msg__RegulatoryElement__Sequence * array)
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
      carma_debug_ros2_msgs__msg__RegulatoryElement__fini(&array->data[i]);
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

carma_debug_ros2_msgs__msg__RegulatoryElement__Sequence *
carma_debug_ros2_msgs__msg__RegulatoryElement__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  carma_debug_ros2_msgs__msg__RegulatoryElement__Sequence * array = (carma_debug_ros2_msgs__msg__RegulatoryElement__Sequence *)allocator.allocate(sizeof(carma_debug_ros2_msgs__msg__RegulatoryElement__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = carma_debug_ros2_msgs__msg__RegulatoryElement__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
carma_debug_ros2_msgs__msg__RegulatoryElement__Sequence__destroy(carma_debug_ros2_msgs__msg__RegulatoryElement__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    carma_debug_ros2_msgs__msg__RegulatoryElement__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
carma_debug_ros2_msgs__msg__RegulatoryElement__Sequence__are_equal(const carma_debug_ros2_msgs__msg__RegulatoryElement__Sequence * lhs, const carma_debug_ros2_msgs__msg__RegulatoryElement__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!carma_debug_ros2_msgs__msg__RegulatoryElement__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
carma_debug_ros2_msgs__msg__RegulatoryElement__Sequence__copy(
  const carma_debug_ros2_msgs__msg__RegulatoryElement__Sequence * input,
  carma_debug_ros2_msgs__msg__RegulatoryElement__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(carma_debug_ros2_msgs__msg__RegulatoryElement);
    carma_debug_ros2_msgs__msg__RegulatoryElement * data =
      (carma_debug_ros2_msgs__msg__RegulatoryElement *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!carma_debug_ros2_msgs__msg__RegulatoryElement__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          carma_debug_ros2_msgs__msg__RegulatoryElement__fini(&data[i]);
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
    if (!carma_debug_ros2_msgs__msg__RegulatoryElement__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
