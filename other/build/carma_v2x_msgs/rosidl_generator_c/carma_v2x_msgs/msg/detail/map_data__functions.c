// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from carma_v2x_msgs:msg/MapData.idl
// generated code does not contain a copyright notice
#include "carma_v2x_msgs/msg/detail/map_data__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `layer_type`
#include "j2735_v2x_msgs/msg/detail/layer_type__functions.h"
// Member `intersections`
#include "carma_v2x_msgs/msg/detail/intersection_geometry__functions.h"
// Member `road_segment_list`
#include "carma_v2x_msgs/msg/detail/road_segment__functions.h"
// Member `data_parameters`
#include "j2735_v2x_msgs/msg/detail/data_parameters__functions.h"
// Member `restriction_class_list`
#include "j2735_v2x_msgs/msg/detail/restriction_class_assignment__functions.h"

bool
carma_v2x_msgs__msg__MapData__init(carma_v2x_msgs__msg__MapData * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    carma_v2x_msgs__msg__MapData__fini(msg);
    return false;
  }
  // time_stamp
  // time_stamp_exists
  // msg_issue_revision
  // layer_type
  if (!j2735_v2x_msgs__msg__LayerType__init(&msg->layer_type)) {
    carma_v2x_msgs__msg__MapData__fini(msg);
    return false;
  }
  // layer_id
  // layer_id_exists
  // intersections
  if (!carma_v2x_msgs__msg__IntersectionGeometry__Sequence__init(&msg->intersections, 0)) {
    carma_v2x_msgs__msg__MapData__fini(msg);
    return false;
  }
  // intersections_exists
  // road_segment_list
  if (!carma_v2x_msgs__msg__RoadSegment__Sequence__init(&msg->road_segment_list, 0)) {
    carma_v2x_msgs__msg__MapData__fini(msg);
    return false;
  }
  // road_segments_exists
  // data_parameters
  if (!j2735_v2x_msgs__msg__DataParameters__init(&msg->data_parameters)) {
    carma_v2x_msgs__msg__MapData__fini(msg);
    return false;
  }
  // data_parameters_exists
  // restriction_class_list
  if (!j2735_v2x_msgs__msg__RestrictionClassAssignment__Sequence__init(&msg->restriction_class_list, 0)) {
    carma_v2x_msgs__msg__MapData__fini(msg);
    return false;
  }
  // restriction_list_exists
  return true;
}

void
carma_v2x_msgs__msg__MapData__fini(carma_v2x_msgs__msg__MapData * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // time_stamp
  // time_stamp_exists
  // msg_issue_revision
  // layer_type
  j2735_v2x_msgs__msg__LayerType__fini(&msg->layer_type);
  // layer_id
  // layer_id_exists
  // intersections
  carma_v2x_msgs__msg__IntersectionGeometry__Sequence__fini(&msg->intersections);
  // intersections_exists
  // road_segment_list
  carma_v2x_msgs__msg__RoadSegment__Sequence__fini(&msg->road_segment_list);
  // road_segments_exists
  // data_parameters
  j2735_v2x_msgs__msg__DataParameters__fini(&msg->data_parameters);
  // data_parameters_exists
  // restriction_class_list
  j2735_v2x_msgs__msg__RestrictionClassAssignment__Sequence__fini(&msg->restriction_class_list);
  // restriction_list_exists
}

bool
carma_v2x_msgs__msg__MapData__are_equal(const carma_v2x_msgs__msg__MapData * lhs, const carma_v2x_msgs__msg__MapData * rhs)
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
  // time_stamp
  if (lhs->time_stamp != rhs->time_stamp) {
    return false;
  }
  // time_stamp_exists
  if (lhs->time_stamp_exists != rhs->time_stamp_exists) {
    return false;
  }
  // msg_issue_revision
  if (lhs->msg_issue_revision != rhs->msg_issue_revision) {
    return false;
  }
  // layer_type
  if (!j2735_v2x_msgs__msg__LayerType__are_equal(
      &(lhs->layer_type), &(rhs->layer_type)))
  {
    return false;
  }
  // layer_id
  if (lhs->layer_id != rhs->layer_id) {
    return false;
  }
  // layer_id_exists
  if (lhs->layer_id_exists != rhs->layer_id_exists) {
    return false;
  }
  // intersections
  if (!carma_v2x_msgs__msg__IntersectionGeometry__Sequence__are_equal(
      &(lhs->intersections), &(rhs->intersections)))
  {
    return false;
  }
  // intersections_exists
  if (lhs->intersections_exists != rhs->intersections_exists) {
    return false;
  }
  // road_segment_list
  if (!carma_v2x_msgs__msg__RoadSegment__Sequence__are_equal(
      &(lhs->road_segment_list), &(rhs->road_segment_list)))
  {
    return false;
  }
  // road_segments_exists
  if (lhs->road_segments_exists != rhs->road_segments_exists) {
    return false;
  }
  // data_parameters
  if (!j2735_v2x_msgs__msg__DataParameters__are_equal(
      &(lhs->data_parameters), &(rhs->data_parameters)))
  {
    return false;
  }
  // data_parameters_exists
  if (lhs->data_parameters_exists != rhs->data_parameters_exists) {
    return false;
  }
  // restriction_class_list
  if (!j2735_v2x_msgs__msg__RestrictionClassAssignment__Sequence__are_equal(
      &(lhs->restriction_class_list), &(rhs->restriction_class_list)))
  {
    return false;
  }
  // restriction_list_exists
  if (lhs->restriction_list_exists != rhs->restriction_list_exists) {
    return false;
  }
  return true;
}

bool
carma_v2x_msgs__msg__MapData__copy(
  const carma_v2x_msgs__msg__MapData * input,
  carma_v2x_msgs__msg__MapData * output)
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
  // time_stamp
  output->time_stamp = input->time_stamp;
  // time_stamp_exists
  output->time_stamp_exists = input->time_stamp_exists;
  // msg_issue_revision
  output->msg_issue_revision = input->msg_issue_revision;
  // layer_type
  if (!j2735_v2x_msgs__msg__LayerType__copy(
      &(input->layer_type), &(output->layer_type)))
  {
    return false;
  }
  // layer_id
  output->layer_id = input->layer_id;
  // layer_id_exists
  output->layer_id_exists = input->layer_id_exists;
  // intersections
  if (!carma_v2x_msgs__msg__IntersectionGeometry__Sequence__copy(
      &(input->intersections), &(output->intersections)))
  {
    return false;
  }
  // intersections_exists
  output->intersections_exists = input->intersections_exists;
  // road_segment_list
  if (!carma_v2x_msgs__msg__RoadSegment__Sequence__copy(
      &(input->road_segment_list), &(output->road_segment_list)))
  {
    return false;
  }
  // road_segments_exists
  output->road_segments_exists = input->road_segments_exists;
  // data_parameters
  if (!j2735_v2x_msgs__msg__DataParameters__copy(
      &(input->data_parameters), &(output->data_parameters)))
  {
    return false;
  }
  // data_parameters_exists
  output->data_parameters_exists = input->data_parameters_exists;
  // restriction_class_list
  if (!j2735_v2x_msgs__msg__RestrictionClassAssignment__Sequence__copy(
      &(input->restriction_class_list), &(output->restriction_class_list)))
  {
    return false;
  }
  // restriction_list_exists
  output->restriction_list_exists = input->restriction_list_exists;
  return true;
}

carma_v2x_msgs__msg__MapData *
carma_v2x_msgs__msg__MapData__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  carma_v2x_msgs__msg__MapData * msg = (carma_v2x_msgs__msg__MapData *)allocator.allocate(sizeof(carma_v2x_msgs__msg__MapData), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(carma_v2x_msgs__msg__MapData));
  bool success = carma_v2x_msgs__msg__MapData__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
carma_v2x_msgs__msg__MapData__destroy(carma_v2x_msgs__msg__MapData * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    carma_v2x_msgs__msg__MapData__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
carma_v2x_msgs__msg__MapData__Sequence__init(carma_v2x_msgs__msg__MapData__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  carma_v2x_msgs__msg__MapData * data = NULL;

  if (size) {
    data = (carma_v2x_msgs__msg__MapData *)allocator.zero_allocate(size, sizeof(carma_v2x_msgs__msg__MapData), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = carma_v2x_msgs__msg__MapData__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        carma_v2x_msgs__msg__MapData__fini(&data[i - 1]);
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
carma_v2x_msgs__msg__MapData__Sequence__fini(carma_v2x_msgs__msg__MapData__Sequence * array)
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
      carma_v2x_msgs__msg__MapData__fini(&array->data[i]);
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

carma_v2x_msgs__msg__MapData__Sequence *
carma_v2x_msgs__msg__MapData__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  carma_v2x_msgs__msg__MapData__Sequence * array = (carma_v2x_msgs__msg__MapData__Sequence *)allocator.allocate(sizeof(carma_v2x_msgs__msg__MapData__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = carma_v2x_msgs__msg__MapData__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
carma_v2x_msgs__msg__MapData__Sequence__destroy(carma_v2x_msgs__msg__MapData__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    carma_v2x_msgs__msg__MapData__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
carma_v2x_msgs__msg__MapData__Sequence__are_equal(const carma_v2x_msgs__msg__MapData__Sequence * lhs, const carma_v2x_msgs__msg__MapData__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!carma_v2x_msgs__msg__MapData__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
carma_v2x_msgs__msg__MapData__Sequence__copy(
  const carma_v2x_msgs__msg__MapData__Sequence * input,
  carma_v2x_msgs__msg__MapData__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(carma_v2x_msgs__msg__MapData);
    carma_v2x_msgs__msg__MapData * data =
      (carma_v2x_msgs__msg__MapData *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!carma_v2x_msgs__msg__MapData__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          carma_v2x_msgs__msg__MapData__fini(&data[i]);
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
    if (!carma_v2x_msgs__msg__MapData__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
