// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from carma_perception_msgs:msg/ExternalObject.idl
// generated code does not contain a copyright notice
#include "carma_perception_msgs/msg/detail/external_object__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `bsm_id`
#include "rosidl_runtime_c/primitives_sequence_functions.h"
// Member `pose`
#include "geometry_msgs/msg/detail/pose_with_covariance__functions.h"
// Member `velocity`
// Member `velocity_inst`
#include "geometry_msgs/msg/detail/twist_with_covariance__functions.h"
// Member `size`
#include "geometry_msgs/msg/detail/vector3__functions.h"
// Member `predictions`
#include "carma_perception_msgs/msg/detail/predicted_state__functions.h"

bool
carma_perception_msgs__msg__ExternalObject__init(carma_perception_msgs__msg__ExternalObject * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    carma_perception_msgs__msg__ExternalObject__fini(msg);
    return false;
  }
  // presence_vector
  // id
  // bsm_id
  if (!rosidl_runtime_c__uint8__Sequence__init(&msg->bsm_id, 0)) {
    carma_perception_msgs__msg__ExternalObject__fini(msg);
    return false;
  }
  // pose
  if (!geometry_msgs__msg__PoseWithCovariance__init(&msg->pose)) {
    carma_perception_msgs__msg__ExternalObject__fini(msg);
    return false;
  }
  // velocity
  if (!geometry_msgs__msg__TwistWithCovariance__init(&msg->velocity)) {
    carma_perception_msgs__msg__ExternalObject__fini(msg);
    return false;
  }
  // velocity_inst
  if (!geometry_msgs__msg__TwistWithCovariance__init(&msg->velocity_inst)) {
    carma_perception_msgs__msg__ExternalObject__fini(msg);
    return false;
  }
  // size
  if (!geometry_msgs__msg__Vector3__init(&msg->size)) {
    carma_perception_msgs__msg__ExternalObject__fini(msg);
    return false;
  }
  // confidence
  // object_type
  // dynamic_obj
  // predictions
  if (!carma_perception_msgs__msg__PredictedState__Sequence__init(&msg->predictions, 0)) {
    carma_perception_msgs__msg__ExternalObject__fini(msg);
    return false;
  }
  return true;
}

void
carma_perception_msgs__msg__ExternalObject__fini(carma_perception_msgs__msg__ExternalObject * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // presence_vector
  // id
  // bsm_id
  rosidl_runtime_c__uint8__Sequence__fini(&msg->bsm_id);
  // pose
  geometry_msgs__msg__PoseWithCovariance__fini(&msg->pose);
  // velocity
  geometry_msgs__msg__TwistWithCovariance__fini(&msg->velocity);
  // velocity_inst
  geometry_msgs__msg__TwistWithCovariance__fini(&msg->velocity_inst);
  // size
  geometry_msgs__msg__Vector3__fini(&msg->size);
  // confidence
  // object_type
  // dynamic_obj
  // predictions
  carma_perception_msgs__msg__PredictedState__Sequence__fini(&msg->predictions);
}

bool
carma_perception_msgs__msg__ExternalObject__are_equal(const carma_perception_msgs__msg__ExternalObject * lhs, const carma_perception_msgs__msg__ExternalObject * rhs)
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
  // presence_vector
  if (lhs->presence_vector != rhs->presence_vector) {
    return false;
  }
  // id
  if (lhs->id != rhs->id) {
    return false;
  }
  // bsm_id
  if (!rosidl_runtime_c__uint8__Sequence__are_equal(
      &(lhs->bsm_id), &(rhs->bsm_id)))
  {
    return false;
  }
  // pose
  if (!geometry_msgs__msg__PoseWithCovariance__are_equal(
      &(lhs->pose), &(rhs->pose)))
  {
    return false;
  }
  // velocity
  if (!geometry_msgs__msg__TwistWithCovariance__are_equal(
      &(lhs->velocity), &(rhs->velocity)))
  {
    return false;
  }
  // velocity_inst
  if (!geometry_msgs__msg__TwistWithCovariance__are_equal(
      &(lhs->velocity_inst), &(rhs->velocity_inst)))
  {
    return false;
  }
  // size
  if (!geometry_msgs__msg__Vector3__are_equal(
      &(lhs->size), &(rhs->size)))
  {
    return false;
  }
  // confidence
  if (lhs->confidence != rhs->confidence) {
    return false;
  }
  // object_type
  if (lhs->object_type != rhs->object_type) {
    return false;
  }
  // dynamic_obj
  if (lhs->dynamic_obj != rhs->dynamic_obj) {
    return false;
  }
  // predictions
  if (!carma_perception_msgs__msg__PredictedState__Sequence__are_equal(
      &(lhs->predictions), &(rhs->predictions)))
  {
    return false;
  }
  return true;
}

bool
carma_perception_msgs__msg__ExternalObject__copy(
  const carma_perception_msgs__msg__ExternalObject * input,
  carma_perception_msgs__msg__ExternalObject * output)
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
  // presence_vector
  output->presence_vector = input->presence_vector;
  // id
  output->id = input->id;
  // bsm_id
  if (!rosidl_runtime_c__uint8__Sequence__copy(
      &(input->bsm_id), &(output->bsm_id)))
  {
    return false;
  }
  // pose
  if (!geometry_msgs__msg__PoseWithCovariance__copy(
      &(input->pose), &(output->pose)))
  {
    return false;
  }
  // velocity
  if (!geometry_msgs__msg__TwistWithCovariance__copy(
      &(input->velocity), &(output->velocity)))
  {
    return false;
  }
  // velocity_inst
  if (!geometry_msgs__msg__TwistWithCovariance__copy(
      &(input->velocity_inst), &(output->velocity_inst)))
  {
    return false;
  }
  // size
  if (!geometry_msgs__msg__Vector3__copy(
      &(input->size), &(output->size)))
  {
    return false;
  }
  // confidence
  output->confidence = input->confidence;
  // object_type
  output->object_type = input->object_type;
  // dynamic_obj
  output->dynamic_obj = input->dynamic_obj;
  // predictions
  if (!carma_perception_msgs__msg__PredictedState__Sequence__copy(
      &(input->predictions), &(output->predictions)))
  {
    return false;
  }
  return true;
}

carma_perception_msgs__msg__ExternalObject *
carma_perception_msgs__msg__ExternalObject__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  carma_perception_msgs__msg__ExternalObject * msg = (carma_perception_msgs__msg__ExternalObject *)allocator.allocate(sizeof(carma_perception_msgs__msg__ExternalObject), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(carma_perception_msgs__msg__ExternalObject));
  bool success = carma_perception_msgs__msg__ExternalObject__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
carma_perception_msgs__msg__ExternalObject__destroy(carma_perception_msgs__msg__ExternalObject * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    carma_perception_msgs__msg__ExternalObject__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
carma_perception_msgs__msg__ExternalObject__Sequence__init(carma_perception_msgs__msg__ExternalObject__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  carma_perception_msgs__msg__ExternalObject * data = NULL;

  if (size) {
    data = (carma_perception_msgs__msg__ExternalObject *)allocator.zero_allocate(size, sizeof(carma_perception_msgs__msg__ExternalObject), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = carma_perception_msgs__msg__ExternalObject__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        carma_perception_msgs__msg__ExternalObject__fini(&data[i - 1]);
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
carma_perception_msgs__msg__ExternalObject__Sequence__fini(carma_perception_msgs__msg__ExternalObject__Sequence * array)
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
      carma_perception_msgs__msg__ExternalObject__fini(&array->data[i]);
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

carma_perception_msgs__msg__ExternalObject__Sequence *
carma_perception_msgs__msg__ExternalObject__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  carma_perception_msgs__msg__ExternalObject__Sequence * array = (carma_perception_msgs__msg__ExternalObject__Sequence *)allocator.allocate(sizeof(carma_perception_msgs__msg__ExternalObject__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = carma_perception_msgs__msg__ExternalObject__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
carma_perception_msgs__msg__ExternalObject__Sequence__destroy(carma_perception_msgs__msg__ExternalObject__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    carma_perception_msgs__msg__ExternalObject__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
carma_perception_msgs__msg__ExternalObject__Sequence__are_equal(const carma_perception_msgs__msg__ExternalObject__Sequence * lhs, const carma_perception_msgs__msg__ExternalObject__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!carma_perception_msgs__msg__ExternalObject__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
carma_perception_msgs__msg__ExternalObject__Sequence__copy(
  const carma_perception_msgs__msg__ExternalObject__Sequence * input,
  carma_perception_msgs__msg__ExternalObject__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(carma_perception_msgs__msg__ExternalObject);
    carma_perception_msgs__msg__ExternalObject * data =
      (carma_perception_msgs__msg__ExternalObject *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!carma_perception_msgs__msg__ExternalObject__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          carma_perception_msgs__msg__ExternalObject__fini(&data[i]);
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
    if (!carma_perception_msgs__msg__ExternalObject__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
