// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from carma_v2x_msgs:msg/TrailerUnitDescription.idl
// generated code does not contain a copyright notice
#include "carma_v2x_msgs/msg/detail/trailer_unit_description__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `is_dolly`
#include "j2735_v2x_msgs/msg/detail/is_dolly__functions.h"
// Member `width`
#include "carma_v2x_msgs/msg/detail/vehicle_width__functions.h"
// Member `length`
#include "carma_v2x_msgs/msg/detail/vehicle_length__functions.h"
// Member `height`
// Member `center_of_gravity`
#include "carma_v2x_msgs/msg/detail/vehicle_height__functions.h"
// Member `mass`
#include "carma_v2x_msgs/msg/detail/trailer_mass__functions.h"
// Member `bumper_heights`
#include "carma_v2x_msgs/msg/detail/bumper_heights__functions.h"
// Member `front_pivot`
// Member `rear_pivot`
#include "carma_v2x_msgs/msg/detail/pivot_point_description__functions.h"
// Member `rear_wheel_offset`
#include "carma_v2x_msgs/msg/detail/offset_b12__functions.h"
// Member `position_offset`
#include "carma_v2x_msgs/msg/detail/node_xy24b__functions.h"
// Member `elevation_offset`
#include "carma_v2x_msgs/msg/detail/vert_offset_b07__functions.h"
// Member `crumb_data`
#include "carma_v2x_msgs/msg/detail/trailer_history_point_list__functions.h"

bool
carma_v2x_msgs__msg__TrailerUnitDescription__init(carma_v2x_msgs__msg__TrailerUnitDescription * msg)
{
  if (!msg) {
    return false;
  }
  // presence_vector
  // is_dolly
  if (!j2735_v2x_msgs__msg__IsDolly__init(&msg->is_dolly)) {
    carma_v2x_msgs__msg__TrailerUnitDescription__fini(msg);
    return false;
  }
  // width
  if (!carma_v2x_msgs__msg__VehicleWidth__init(&msg->width)) {
    carma_v2x_msgs__msg__TrailerUnitDescription__fini(msg);
    return false;
  }
  // length
  if (!carma_v2x_msgs__msg__VehicleLength__init(&msg->length)) {
    carma_v2x_msgs__msg__TrailerUnitDescription__fini(msg);
    return false;
  }
  // height
  if (!carma_v2x_msgs__msg__VehicleHeight__init(&msg->height)) {
    carma_v2x_msgs__msg__TrailerUnitDescription__fini(msg);
    return false;
  }
  // mass
  if (!carma_v2x_msgs__msg__TrailerMass__init(&msg->mass)) {
    carma_v2x_msgs__msg__TrailerUnitDescription__fini(msg);
    return false;
  }
  // bumper_heights
  if (!carma_v2x_msgs__msg__BumperHeights__init(&msg->bumper_heights)) {
    carma_v2x_msgs__msg__TrailerUnitDescription__fini(msg);
    return false;
  }
  // center_of_gravity
  if (!carma_v2x_msgs__msg__VehicleHeight__init(&msg->center_of_gravity)) {
    carma_v2x_msgs__msg__TrailerUnitDescription__fini(msg);
    return false;
  }
  // front_pivot
  if (!carma_v2x_msgs__msg__PivotPointDescription__init(&msg->front_pivot)) {
    carma_v2x_msgs__msg__TrailerUnitDescription__fini(msg);
    return false;
  }
  // rear_pivot
  if (!carma_v2x_msgs__msg__PivotPointDescription__init(&msg->rear_pivot)) {
    carma_v2x_msgs__msg__TrailerUnitDescription__fini(msg);
    return false;
  }
  // rear_wheel_offset
  if (!carma_v2x_msgs__msg__OffsetB12__init(&msg->rear_wheel_offset)) {
    carma_v2x_msgs__msg__TrailerUnitDescription__fini(msg);
    return false;
  }
  // position_offset
  if (!carma_v2x_msgs__msg__NodeXY24b__init(&msg->position_offset)) {
    carma_v2x_msgs__msg__TrailerUnitDescription__fini(msg);
    return false;
  }
  // elevation_offset
  if (!carma_v2x_msgs__msg__VertOffsetB07__init(&msg->elevation_offset)) {
    carma_v2x_msgs__msg__TrailerUnitDescription__fini(msg);
    return false;
  }
  // crumb_data
  if (!carma_v2x_msgs__msg__TrailerHistoryPointList__init(&msg->crumb_data)) {
    carma_v2x_msgs__msg__TrailerUnitDescription__fini(msg);
    return false;
  }
  return true;
}

void
carma_v2x_msgs__msg__TrailerUnitDescription__fini(carma_v2x_msgs__msg__TrailerUnitDescription * msg)
{
  if (!msg) {
    return;
  }
  // presence_vector
  // is_dolly
  j2735_v2x_msgs__msg__IsDolly__fini(&msg->is_dolly);
  // width
  carma_v2x_msgs__msg__VehicleWidth__fini(&msg->width);
  // length
  carma_v2x_msgs__msg__VehicleLength__fini(&msg->length);
  // height
  carma_v2x_msgs__msg__VehicleHeight__fini(&msg->height);
  // mass
  carma_v2x_msgs__msg__TrailerMass__fini(&msg->mass);
  // bumper_heights
  carma_v2x_msgs__msg__BumperHeights__fini(&msg->bumper_heights);
  // center_of_gravity
  carma_v2x_msgs__msg__VehicleHeight__fini(&msg->center_of_gravity);
  // front_pivot
  carma_v2x_msgs__msg__PivotPointDescription__fini(&msg->front_pivot);
  // rear_pivot
  carma_v2x_msgs__msg__PivotPointDescription__fini(&msg->rear_pivot);
  // rear_wheel_offset
  carma_v2x_msgs__msg__OffsetB12__fini(&msg->rear_wheel_offset);
  // position_offset
  carma_v2x_msgs__msg__NodeXY24b__fini(&msg->position_offset);
  // elevation_offset
  carma_v2x_msgs__msg__VertOffsetB07__fini(&msg->elevation_offset);
  // crumb_data
  carma_v2x_msgs__msg__TrailerHistoryPointList__fini(&msg->crumb_data);
}

bool
carma_v2x_msgs__msg__TrailerUnitDescription__are_equal(const carma_v2x_msgs__msg__TrailerUnitDescription * lhs, const carma_v2x_msgs__msg__TrailerUnitDescription * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // presence_vector
  if (lhs->presence_vector != rhs->presence_vector) {
    return false;
  }
  // is_dolly
  if (!j2735_v2x_msgs__msg__IsDolly__are_equal(
      &(lhs->is_dolly), &(rhs->is_dolly)))
  {
    return false;
  }
  // width
  if (!carma_v2x_msgs__msg__VehicleWidth__are_equal(
      &(lhs->width), &(rhs->width)))
  {
    return false;
  }
  // length
  if (!carma_v2x_msgs__msg__VehicleLength__are_equal(
      &(lhs->length), &(rhs->length)))
  {
    return false;
  }
  // height
  if (!carma_v2x_msgs__msg__VehicleHeight__are_equal(
      &(lhs->height), &(rhs->height)))
  {
    return false;
  }
  // mass
  if (!carma_v2x_msgs__msg__TrailerMass__are_equal(
      &(lhs->mass), &(rhs->mass)))
  {
    return false;
  }
  // bumper_heights
  if (!carma_v2x_msgs__msg__BumperHeights__are_equal(
      &(lhs->bumper_heights), &(rhs->bumper_heights)))
  {
    return false;
  }
  // center_of_gravity
  if (!carma_v2x_msgs__msg__VehicleHeight__are_equal(
      &(lhs->center_of_gravity), &(rhs->center_of_gravity)))
  {
    return false;
  }
  // front_pivot
  if (!carma_v2x_msgs__msg__PivotPointDescription__are_equal(
      &(lhs->front_pivot), &(rhs->front_pivot)))
  {
    return false;
  }
  // rear_pivot
  if (!carma_v2x_msgs__msg__PivotPointDescription__are_equal(
      &(lhs->rear_pivot), &(rhs->rear_pivot)))
  {
    return false;
  }
  // rear_wheel_offset
  if (!carma_v2x_msgs__msg__OffsetB12__are_equal(
      &(lhs->rear_wheel_offset), &(rhs->rear_wheel_offset)))
  {
    return false;
  }
  // position_offset
  if (!carma_v2x_msgs__msg__NodeXY24b__are_equal(
      &(lhs->position_offset), &(rhs->position_offset)))
  {
    return false;
  }
  // elevation_offset
  if (!carma_v2x_msgs__msg__VertOffsetB07__are_equal(
      &(lhs->elevation_offset), &(rhs->elevation_offset)))
  {
    return false;
  }
  // crumb_data
  if (!carma_v2x_msgs__msg__TrailerHistoryPointList__are_equal(
      &(lhs->crumb_data), &(rhs->crumb_data)))
  {
    return false;
  }
  return true;
}

bool
carma_v2x_msgs__msg__TrailerUnitDescription__copy(
  const carma_v2x_msgs__msg__TrailerUnitDescription * input,
  carma_v2x_msgs__msg__TrailerUnitDescription * output)
{
  if (!input || !output) {
    return false;
  }
  // presence_vector
  output->presence_vector = input->presence_vector;
  // is_dolly
  if (!j2735_v2x_msgs__msg__IsDolly__copy(
      &(input->is_dolly), &(output->is_dolly)))
  {
    return false;
  }
  // width
  if (!carma_v2x_msgs__msg__VehicleWidth__copy(
      &(input->width), &(output->width)))
  {
    return false;
  }
  // length
  if (!carma_v2x_msgs__msg__VehicleLength__copy(
      &(input->length), &(output->length)))
  {
    return false;
  }
  // height
  if (!carma_v2x_msgs__msg__VehicleHeight__copy(
      &(input->height), &(output->height)))
  {
    return false;
  }
  // mass
  if (!carma_v2x_msgs__msg__TrailerMass__copy(
      &(input->mass), &(output->mass)))
  {
    return false;
  }
  // bumper_heights
  if (!carma_v2x_msgs__msg__BumperHeights__copy(
      &(input->bumper_heights), &(output->bumper_heights)))
  {
    return false;
  }
  // center_of_gravity
  if (!carma_v2x_msgs__msg__VehicleHeight__copy(
      &(input->center_of_gravity), &(output->center_of_gravity)))
  {
    return false;
  }
  // front_pivot
  if (!carma_v2x_msgs__msg__PivotPointDescription__copy(
      &(input->front_pivot), &(output->front_pivot)))
  {
    return false;
  }
  // rear_pivot
  if (!carma_v2x_msgs__msg__PivotPointDescription__copy(
      &(input->rear_pivot), &(output->rear_pivot)))
  {
    return false;
  }
  // rear_wheel_offset
  if (!carma_v2x_msgs__msg__OffsetB12__copy(
      &(input->rear_wheel_offset), &(output->rear_wheel_offset)))
  {
    return false;
  }
  // position_offset
  if (!carma_v2x_msgs__msg__NodeXY24b__copy(
      &(input->position_offset), &(output->position_offset)))
  {
    return false;
  }
  // elevation_offset
  if (!carma_v2x_msgs__msg__VertOffsetB07__copy(
      &(input->elevation_offset), &(output->elevation_offset)))
  {
    return false;
  }
  // crumb_data
  if (!carma_v2x_msgs__msg__TrailerHistoryPointList__copy(
      &(input->crumb_data), &(output->crumb_data)))
  {
    return false;
  }
  return true;
}

carma_v2x_msgs__msg__TrailerUnitDescription *
carma_v2x_msgs__msg__TrailerUnitDescription__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  carma_v2x_msgs__msg__TrailerUnitDescription * msg = (carma_v2x_msgs__msg__TrailerUnitDescription *)allocator.allocate(sizeof(carma_v2x_msgs__msg__TrailerUnitDescription), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(carma_v2x_msgs__msg__TrailerUnitDescription));
  bool success = carma_v2x_msgs__msg__TrailerUnitDescription__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
carma_v2x_msgs__msg__TrailerUnitDescription__destroy(carma_v2x_msgs__msg__TrailerUnitDescription * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    carma_v2x_msgs__msg__TrailerUnitDescription__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
carma_v2x_msgs__msg__TrailerUnitDescription__Sequence__init(carma_v2x_msgs__msg__TrailerUnitDescription__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  carma_v2x_msgs__msg__TrailerUnitDescription * data = NULL;

  if (size) {
    data = (carma_v2x_msgs__msg__TrailerUnitDescription *)allocator.zero_allocate(size, sizeof(carma_v2x_msgs__msg__TrailerUnitDescription), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = carma_v2x_msgs__msg__TrailerUnitDescription__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        carma_v2x_msgs__msg__TrailerUnitDescription__fini(&data[i - 1]);
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
carma_v2x_msgs__msg__TrailerUnitDescription__Sequence__fini(carma_v2x_msgs__msg__TrailerUnitDescription__Sequence * array)
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
      carma_v2x_msgs__msg__TrailerUnitDescription__fini(&array->data[i]);
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

carma_v2x_msgs__msg__TrailerUnitDescription__Sequence *
carma_v2x_msgs__msg__TrailerUnitDescription__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  carma_v2x_msgs__msg__TrailerUnitDescription__Sequence * array = (carma_v2x_msgs__msg__TrailerUnitDescription__Sequence *)allocator.allocate(sizeof(carma_v2x_msgs__msg__TrailerUnitDescription__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = carma_v2x_msgs__msg__TrailerUnitDescription__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
carma_v2x_msgs__msg__TrailerUnitDescription__Sequence__destroy(carma_v2x_msgs__msg__TrailerUnitDescription__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    carma_v2x_msgs__msg__TrailerUnitDescription__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
carma_v2x_msgs__msg__TrailerUnitDescription__Sequence__are_equal(const carma_v2x_msgs__msg__TrailerUnitDescription__Sequence * lhs, const carma_v2x_msgs__msg__TrailerUnitDescription__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!carma_v2x_msgs__msg__TrailerUnitDescription__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
carma_v2x_msgs__msg__TrailerUnitDescription__Sequence__copy(
  const carma_v2x_msgs__msg__TrailerUnitDescription__Sequence * input,
  carma_v2x_msgs__msg__TrailerUnitDescription__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(carma_v2x_msgs__msg__TrailerUnitDescription);
    carma_v2x_msgs__msg__TrailerUnitDescription * data =
      (carma_v2x_msgs__msg__TrailerUnitDescription *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!carma_v2x_msgs__msg__TrailerUnitDescription__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          carma_v2x_msgs__msg__TrailerUnitDescription__fini(&data[i]);
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
    if (!carma_v2x_msgs__msg__TrailerUnitDescription__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
