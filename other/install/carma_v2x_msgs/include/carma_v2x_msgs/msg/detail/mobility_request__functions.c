// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from carma_v2x_msgs:msg/MobilityRequest.idl
// generated code does not contain a copyright notice
#include "carma_v2x_msgs/msg/detail/mobility_request__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `m_header`
#include "carma_v2x_msgs/msg/detail/mobility_header__functions.h"
// Member `strategy`
// Member `strategy_params`
#include "rosidl_runtime_c/string_functions.h"
// Member `plan_type`
#include "carma_v2x_msgs/msg/detail/plan_type__functions.h"
// Member `location`
#include "carma_v2x_msgs/msg/detail/location_ecef__functions.h"
// Member `trajectory`
#include "carma_v2x_msgs/msg/detail/trajectory__functions.h"

bool
carma_v2x_msgs__msg__MobilityRequest__init(carma_v2x_msgs__msg__MobilityRequest * msg)
{
  if (!msg) {
    return false;
  }
  // m_header
  if (!carma_v2x_msgs__msg__MobilityHeader__init(&msg->m_header)) {
    carma_v2x_msgs__msg__MobilityRequest__fini(msg);
    return false;
  }
  // strategy
  if (!rosidl_runtime_c__String__init(&msg->strategy)) {
    carma_v2x_msgs__msg__MobilityRequest__fini(msg);
    return false;
  }
  // plan_type
  if (!carma_v2x_msgs__msg__PlanType__init(&msg->plan_type)) {
    carma_v2x_msgs__msg__MobilityRequest__fini(msg);
    return false;
  }
  // urgency
  // location
  if (!carma_v2x_msgs__msg__LocationECEF__init(&msg->location)) {
    carma_v2x_msgs__msg__MobilityRequest__fini(msg);
    return false;
  }
  // strategy_params
  if (!rosidl_runtime_c__String__init(&msg->strategy_params)) {
    carma_v2x_msgs__msg__MobilityRequest__fini(msg);
    return false;
  }
  // trajectory
  if (!carma_v2x_msgs__msg__Trajectory__init(&msg->trajectory)) {
    carma_v2x_msgs__msg__MobilityRequest__fini(msg);
    return false;
  }
  // expiration
  return true;
}

void
carma_v2x_msgs__msg__MobilityRequest__fini(carma_v2x_msgs__msg__MobilityRequest * msg)
{
  if (!msg) {
    return;
  }
  // m_header
  carma_v2x_msgs__msg__MobilityHeader__fini(&msg->m_header);
  // strategy
  rosidl_runtime_c__String__fini(&msg->strategy);
  // plan_type
  carma_v2x_msgs__msg__PlanType__fini(&msg->plan_type);
  // urgency
  // location
  carma_v2x_msgs__msg__LocationECEF__fini(&msg->location);
  // strategy_params
  rosidl_runtime_c__String__fini(&msg->strategy_params);
  // trajectory
  carma_v2x_msgs__msg__Trajectory__fini(&msg->trajectory);
  // expiration
}

bool
carma_v2x_msgs__msg__MobilityRequest__are_equal(const carma_v2x_msgs__msg__MobilityRequest * lhs, const carma_v2x_msgs__msg__MobilityRequest * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // m_header
  if (!carma_v2x_msgs__msg__MobilityHeader__are_equal(
      &(lhs->m_header), &(rhs->m_header)))
  {
    return false;
  }
  // strategy
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->strategy), &(rhs->strategy)))
  {
    return false;
  }
  // plan_type
  if (!carma_v2x_msgs__msg__PlanType__are_equal(
      &(lhs->plan_type), &(rhs->plan_type)))
  {
    return false;
  }
  // urgency
  if (lhs->urgency != rhs->urgency) {
    return false;
  }
  // location
  if (!carma_v2x_msgs__msg__LocationECEF__are_equal(
      &(lhs->location), &(rhs->location)))
  {
    return false;
  }
  // strategy_params
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->strategy_params), &(rhs->strategy_params)))
  {
    return false;
  }
  // trajectory
  if (!carma_v2x_msgs__msg__Trajectory__are_equal(
      &(lhs->trajectory), &(rhs->trajectory)))
  {
    return false;
  }
  // expiration
  if (lhs->expiration != rhs->expiration) {
    return false;
  }
  return true;
}

bool
carma_v2x_msgs__msg__MobilityRequest__copy(
  const carma_v2x_msgs__msg__MobilityRequest * input,
  carma_v2x_msgs__msg__MobilityRequest * output)
{
  if (!input || !output) {
    return false;
  }
  // m_header
  if (!carma_v2x_msgs__msg__MobilityHeader__copy(
      &(input->m_header), &(output->m_header)))
  {
    return false;
  }
  // strategy
  if (!rosidl_runtime_c__String__copy(
      &(input->strategy), &(output->strategy)))
  {
    return false;
  }
  // plan_type
  if (!carma_v2x_msgs__msg__PlanType__copy(
      &(input->plan_type), &(output->plan_type)))
  {
    return false;
  }
  // urgency
  output->urgency = input->urgency;
  // location
  if (!carma_v2x_msgs__msg__LocationECEF__copy(
      &(input->location), &(output->location)))
  {
    return false;
  }
  // strategy_params
  if (!rosidl_runtime_c__String__copy(
      &(input->strategy_params), &(output->strategy_params)))
  {
    return false;
  }
  // trajectory
  if (!carma_v2x_msgs__msg__Trajectory__copy(
      &(input->trajectory), &(output->trajectory)))
  {
    return false;
  }
  // expiration
  output->expiration = input->expiration;
  return true;
}

carma_v2x_msgs__msg__MobilityRequest *
carma_v2x_msgs__msg__MobilityRequest__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  carma_v2x_msgs__msg__MobilityRequest * msg = (carma_v2x_msgs__msg__MobilityRequest *)allocator.allocate(sizeof(carma_v2x_msgs__msg__MobilityRequest), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(carma_v2x_msgs__msg__MobilityRequest));
  bool success = carma_v2x_msgs__msg__MobilityRequest__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
carma_v2x_msgs__msg__MobilityRequest__destroy(carma_v2x_msgs__msg__MobilityRequest * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    carma_v2x_msgs__msg__MobilityRequest__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
carma_v2x_msgs__msg__MobilityRequest__Sequence__init(carma_v2x_msgs__msg__MobilityRequest__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  carma_v2x_msgs__msg__MobilityRequest * data = NULL;

  if (size) {
    data = (carma_v2x_msgs__msg__MobilityRequest *)allocator.zero_allocate(size, sizeof(carma_v2x_msgs__msg__MobilityRequest), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = carma_v2x_msgs__msg__MobilityRequest__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        carma_v2x_msgs__msg__MobilityRequest__fini(&data[i - 1]);
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
carma_v2x_msgs__msg__MobilityRequest__Sequence__fini(carma_v2x_msgs__msg__MobilityRequest__Sequence * array)
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
      carma_v2x_msgs__msg__MobilityRequest__fini(&array->data[i]);
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

carma_v2x_msgs__msg__MobilityRequest__Sequence *
carma_v2x_msgs__msg__MobilityRequest__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  carma_v2x_msgs__msg__MobilityRequest__Sequence * array = (carma_v2x_msgs__msg__MobilityRequest__Sequence *)allocator.allocate(sizeof(carma_v2x_msgs__msg__MobilityRequest__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = carma_v2x_msgs__msg__MobilityRequest__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
carma_v2x_msgs__msg__MobilityRequest__Sequence__destroy(carma_v2x_msgs__msg__MobilityRequest__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    carma_v2x_msgs__msg__MobilityRequest__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
carma_v2x_msgs__msg__MobilityRequest__Sequence__are_equal(const carma_v2x_msgs__msg__MobilityRequest__Sequence * lhs, const carma_v2x_msgs__msg__MobilityRequest__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!carma_v2x_msgs__msg__MobilityRequest__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
carma_v2x_msgs__msg__MobilityRequest__Sequence__copy(
  const carma_v2x_msgs__msg__MobilityRequest__Sequence * input,
  carma_v2x_msgs__msg__MobilityRequest__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(carma_v2x_msgs__msg__MobilityRequest);
    carma_v2x_msgs__msg__MobilityRequest * data =
      (carma_v2x_msgs__msg__MobilityRequest *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!carma_v2x_msgs__msg__MobilityRequest__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          carma_v2x_msgs__msg__MobilityRequest__fini(&data[i]);
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
    if (!carma_v2x_msgs__msg__MobilityRequest__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
