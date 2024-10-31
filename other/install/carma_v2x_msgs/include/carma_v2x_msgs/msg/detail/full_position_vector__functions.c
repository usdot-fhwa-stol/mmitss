// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from carma_v2x_msgs:msg/FullPositionVector.idl
// generated code does not contain a copyright notice
#include "carma_v2x_msgs/msg/detail/full_position_vector__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `utc_time`
#include "j2735_v2x_msgs/msg/detail/d_date_time__functions.h"
// Member `lon`
#include "carma_v2x_msgs/msg/detail/longitude__functions.h"
// Member `lat`
#include "carma_v2x_msgs/msg/detail/latitude__functions.h"
// Member `elevation`
#include "carma_v2x_msgs/msg/detail/elevation__functions.h"
// Member `heading`
#include "carma_v2x_msgs/msg/detail/heading__functions.h"
// Member `speed`
#include "carma_v2x_msgs/msg/detail/transmission_and_speed__functions.h"
// Member `pos_accuracy`
#include "carma_v2x_msgs/msg/detail/positional_accuracy__functions.h"
// Member `time_confidence`
#include "j2735_v2x_msgs/msg/detail/time_confidence__functions.h"
// Member `pos_confidence`
#include "j2735_v2x_msgs/msg/detail/position_confidence_set__functions.h"
// Member `speed_confidence`
#include "j2735_v2x_msgs/msg/detail/speedand_headingand_throttle_confidence__functions.h"

bool
carma_v2x_msgs__msg__FullPositionVector__init(carma_v2x_msgs__msg__FullPositionVector * msg)
{
  if (!msg) {
    return false;
  }
  // presence_vector
  // utc_time
  if (!j2735_v2x_msgs__msg__DDateTime__init(&msg->utc_time)) {
    carma_v2x_msgs__msg__FullPositionVector__fini(msg);
    return false;
  }
  // lon
  if (!carma_v2x_msgs__msg__Longitude__init(&msg->lon)) {
    carma_v2x_msgs__msg__FullPositionVector__fini(msg);
    return false;
  }
  // lat
  if (!carma_v2x_msgs__msg__Latitude__init(&msg->lat)) {
    carma_v2x_msgs__msg__FullPositionVector__fini(msg);
    return false;
  }
  // elevation
  if (!carma_v2x_msgs__msg__Elevation__init(&msg->elevation)) {
    carma_v2x_msgs__msg__FullPositionVector__fini(msg);
    return false;
  }
  // heading
  if (!carma_v2x_msgs__msg__Heading__init(&msg->heading)) {
    carma_v2x_msgs__msg__FullPositionVector__fini(msg);
    return false;
  }
  // speed
  if (!carma_v2x_msgs__msg__TransmissionAndSpeed__init(&msg->speed)) {
    carma_v2x_msgs__msg__FullPositionVector__fini(msg);
    return false;
  }
  // pos_accuracy
  if (!carma_v2x_msgs__msg__PositionalAccuracy__init(&msg->pos_accuracy)) {
    carma_v2x_msgs__msg__FullPositionVector__fini(msg);
    return false;
  }
  // time_confidence
  if (!j2735_v2x_msgs__msg__TimeConfidence__init(&msg->time_confidence)) {
    carma_v2x_msgs__msg__FullPositionVector__fini(msg);
    return false;
  }
  // pos_confidence
  if (!j2735_v2x_msgs__msg__PositionConfidenceSet__init(&msg->pos_confidence)) {
    carma_v2x_msgs__msg__FullPositionVector__fini(msg);
    return false;
  }
  // speed_confidence
  if (!j2735_v2x_msgs__msg__SpeedandHeadingandThrottleConfidence__init(&msg->speed_confidence)) {
    carma_v2x_msgs__msg__FullPositionVector__fini(msg);
    return false;
  }
  return true;
}

void
carma_v2x_msgs__msg__FullPositionVector__fini(carma_v2x_msgs__msg__FullPositionVector * msg)
{
  if (!msg) {
    return;
  }
  // presence_vector
  // utc_time
  j2735_v2x_msgs__msg__DDateTime__fini(&msg->utc_time);
  // lon
  carma_v2x_msgs__msg__Longitude__fini(&msg->lon);
  // lat
  carma_v2x_msgs__msg__Latitude__fini(&msg->lat);
  // elevation
  carma_v2x_msgs__msg__Elevation__fini(&msg->elevation);
  // heading
  carma_v2x_msgs__msg__Heading__fini(&msg->heading);
  // speed
  carma_v2x_msgs__msg__TransmissionAndSpeed__fini(&msg->speed);
  // pos_accuracy
  carma_v2x_msgs__msg__PositionalAccuracy__fini(&msg->pos_accuracy);
  // time_confidence
  j2735_v2x_msgs__msg__TimeConfidence__fini(&msg->time_confidence);
  // pos_confidence
  j2735_v2x_msgs__msg__PositionConfidenceSet__fini(&msg->pos_confidence);
  // speed_confidence
  j2735_v2x_msgs__msg__SpeedandHeadingandThrottleConfidence__fini(&msg->speed_confidence);
}

bool
carma_v2x_msgs__msg__FullPositionVector__are_equal(const carma_v2x_msgs__msg__FullPositionVector * lhs, const carma_v2x_msgs__msg__FullPositionVector * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // presence_vector
  if (lhs->presence_vector != rhs->presence_vector) {
    return false;
  }
  // utc_time
  if (!j2735_v2x_msgs__msg__DDateTime__are_equal(
      &(lhs->utc_time), &(rhs->utc_time)))
  {
    return false;
  }
  // lon
  if (!carma_v2x_msgs__msg__Longitude__are_equal(
      &(lhs->lon), &(rhs->lon)))
  {
    return false;
  }
  // lat
  if (!carma_v2x_msgs__msg__Latitude__are_equal(
      &(lhs->lat), &(rhs->lat)))
  {
    return false;
  }
  // elevation
  if (!carma_v2x_msgs__msg__Elevation__are_equal(
      &(lhs->elevation), &(rhs->elevation)))
  {
    return false;
  }
  // heading
  if (!carma_v2x_msgs__msg__Heading__are_equal(
      &(lhs->heading), &(rhs->heading)))
  {
    return false;
  }
  // speed
  if (!carma_v2x_msgs__msg__TransmissionAndSpeed__are_equal(
      &(lhs->speed), &(rhs->speed)))
  {
    return false;
  }
  // pos_accuracy
  if (!carma_v2x_msgs__msg__PositionalAccuracy__are_equal(
      &(lhs->pos_accuracy), &(rhs->pos_accuracy)))
  {
    return false;
  }
  // time_confidence
  if (!j2735_v2x_msgs__msg__TimeConfidence__are_equal(
      &(lhs->time_confidence), &(rhs->time_confidence)))
  {
    return false;
  }
  // pos_confidence
  if (!j2735_v2x_msgs__msg__PositionConfidenceSet__are_equal(
      &(lhs->pos_confidence), &(rhs->pos_confidence)))
  {
    return false;
  }
  // speed_confidence
  if (!j2735_v2x_msgs__msg__SpeedandHeadingandThrottleConfidence__are_equal(
      &(lhs->speed_confidence), &(rhs->speed_confidence)))
  {
    return false;
  }
  return true;
}

bool
carma_v2x_msgs__msg__FullPositionVector__copy(
  const carma_v2x_msgs__msg__FullPositionVector * input,
  carma_v2x_msgs__msg__FullPositionVector * output)
{
  if (!input || !output) {
    return false;
  }
  // presence_vector
  output->presence_vector = input->presence_vector;
  // utc_time
  if (!j2735_v2x_msgs__msg__DDateTime__copy(
      &(input->utc_time), &(output->utc_time)))
  {
    return false;
  }
  // lon
  if (!carma_v2x_msgs__msg__Longitude__copy(
      &(input->lon), &(output->lon)))
  {
    return false;
  }
  // lat
  if (!carma_v2x_msgs__msg__Latitude__copy(
      &(input->lat), &(output->lat)))
  {
    return false;
  }
  // elevation
  if (!carma_v2x_msgs__msg__Elevation__copy(
      &(input->elevation), &(output->elevation)))
  {
    return false;
  }
  // heading
  if (!carma_v2x_msgs__msg__Heading__copy(
      &(input->heading), &(output->heading)))
  {
    return false;
  }
  // speed
  if (!carma_v2x_msgs__msg__TransmissionAndSpeed__copy(
      &(input->speed), &(output->speed)))
  {
    return false;
  }
  // pos_accuracy
  if (!carma_v2x_msgs__msg__PositionalAccuracy__copy(
      &(input->pos_accuracy), &(output->pos_accuracy)))
  {
    return false;
  }
  // time_confidence
  if (!j2735_v2x_msgs__msg__TimeConfidence__copy(
      &(input->time_confidence), &(output->time_confidence)))
  {
    return false;
  }
  // pos_confidence
  if (!j2735_v2x_msgs__msg__PositionConfidenceSet__copy(
      &(input->pos_confidence), &(output->pos_confidence)))
  {
    return false;
  }
  // speed_confidence
  if (!j2735_v2x_msgs__msg__SpeedandHeadingandThrottleConfidence__copy(
      &(input->speed_confidence), &(output->speed_confidence)))
  {
    return false;
  }
  return true;
}

carma_v2x_msgs__msg__FullPositionVector *
carma_v2x_msgs__msg__FullPositionVector__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  carma_v2x_msgs__msg__FullPositionVector * msg = (carma_v2x_msgs__msg__FullPositionVector *)allocator.allocate(sizeof(carma_v2x_msgs__msg__FullPositionVector), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(carma_v2x_msgs__msg__FullPositionVector));
  bool success = carma_v2x_msgs__msg__FullPositionVector__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
carma_v2x_msgs__msg__FullPositionVector__destroy(carma_v2x_msgs__msg__FullPositionVector * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    carma_v2x_msgs__msg__FullPositionVector__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
carma_v2x_msgs__msg__FullPositionVector__Sequence__init(carma_v2x_msgs__msg__FullPositionVector__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  carma_v2x_msgs__msg__FullPositionVector * data = NULL;

  if (size) {
    data = (carma_v2x_msgs__msg__FullPositionVector *)allocator.zero_allocate(size, sizeof(carma_v2x_msgs__msg__FullPositionVector), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = carma_v2x_msgs__msg__FullPositionVector__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        carma_v2x_msgs__msg__FullPositionVector__fini(&data[i - 1]);
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
carma_v2x_msgs__msg__FullPositionVector__Sequence__fini(carma_v2x_msgs__msg__FullPositionVector__Sequence * array)
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
      carma_v2x_msgs__msg__FullPositionVector__fini(&array->data[i]);
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

carma_v2x_msgs__msg__FullPositionVector__Sequence *
carma_v2x_msgs__msg__FullPositionVector__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  carma_v2x_msgs__msg__FullPositionVector__Sequence * array = (carma_v2x_msgs__msg__FullPositionVector__Sequence *)allocator.allocate(sizeof(carma_v2x_msgs__msg__FullPositionVector__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = carma_v2x_msgs__msg__FullPositionVector__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
carma_v2x_msgs__msg__FullPositionVector__Sequence__destroy(carma_v2x_msgs__msg__FullPositionVector__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    carma_v2x_msgs__msg__FullPositionVector__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
carma_v2x_msgs__msg__FullPositionVector__Sequence__are_equal(const carma_v2x_msgs__msg__FullPositionVector__Sequence * lhs, const carma_v2x_msgs__msg__FullPositionVector__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!carma_v2x_msgs__msg__FullPositionVector__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
carma_v2x_msgs__msg__FullPositionVector__Sequence__copy(
  const carma_v2x_msgs__msg__FullPositionVector__Sequence * input,
  carma_v2x_msgs__msg__FullPositionVector__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(carma_v2x_msgs__msg__FullPositionVector);
    carma_v2x_msgs__msg__FullPositionVector * data =
      (carma_v2x_msgs__msg__FullPositionVector *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!carma_v2x_msgs__msg__FullPositionVector__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          carma_v2x_msgs__msg__FullPositionVector__fini(&data[i]);
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
    if (!carma_v2x_msgs__msg__FullPositionVector__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
