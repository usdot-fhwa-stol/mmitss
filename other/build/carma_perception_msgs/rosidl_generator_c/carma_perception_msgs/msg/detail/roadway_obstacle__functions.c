// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from carma_perception_msgs:msg/RoadwayObstacle.idl
// generated code does not contain a copyright notice
#include "carma_perception_msgs/msg/detail/roadway_obstacle__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `object`
#include "carma_perception_msgs/msg/detail/external_object__functions.h"
// Member `connected_vehicle_type`
#include "carma_perception_msgs/msg/detail/connected_vehicle_type__functions.h"
// Member `predicted_lanelet_ids`
// Member `predicted_lanelet_id_confidences`
// Member `predicted_cross_tracks`
// Member `predicted_cross_track_confidences`
// Member `predicted_down_tracks`
// Member `predicted_down_track_confidences`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
carma_perception_msgs__msg__RoadwayObstacle__init(carma_perception_msgs__msg__RoadwayObstacle * msg)
{
  if (!msg) {
    return false;
  }
  // object
  if (!carma_perception_msgs__msg__ExternalObject__init(&msg->object)) {
    carma_perception_msgs__msg__RoadwayObstacle__fini(msg);
    return false;
  }
  // connected_vehicle_type
  if (!carma_perception_msgs__msg__ConnectedVehicleType__init(&msg->connected_vehicle_type)) {
    carma_perception_msgs__msg__RoadwayObstacle__fini(msg);
    return false;
  }
  // lanelet_id
  // cross_track
  // down_track
  // predicted_lanelet_ids
  if (!rosidl_runtime_c__int64__Sequence__init(&msg->predicted_lanelet_ids, 0)) {
    carma_perception_msgs__msg__RoadwayObstacle__fini(msg);
    return false;
  }
  // predicted_lanelet_id_confidences
  if (!rosidl_runtime_c__double__Sequence__init(&msg->predicted_lanelet_id_confidences, 0)) {
    carma_perception_msgs__msg__RoadwayObstacle__fini(msg);
    return false;
  }
  // predicted_cross_tracks
  if (!rosidl_runtime_c__double__Sequence__init(&msg->predicted_cross_tracks, 0)) {
    carma_perception_msgs__msg__RoadwayObstacle__fini(msg);
    return false;
  }
  // predicted_cross_track_confidences
  if (!rosidl_runtime_c__double__Sequence__init(&msg->predicted_cross_track_confidences, 0)) {
    carma_perception_msgs__msg__RoadwayObstacle__fini(msg);
    return false;
  }
  // predicted_down_tracks
  if (!rosidl_runtime_c__double__Sequence__init(&msg->predicted_down_tracks, 0)) {
    carma_perception_msgs__msg__RoadwayObstacle__fini(msg);
    return false;
  }
  // predicted_down_track_confidences
  if (!rosidl_runtime_c__double__Sequence__init(&msg->predicted_down_track_confidences, 0)) {
    carma_perception_msgs__msg__RoadwayObstacle__fini(msg);
    return false;
  }
  return true;
}

void
carma_perception_msgs__msg__RoadwayObstacle__fini(carma_perception_msgs__msg__RoadwayObstacle * msg)
{
  if (!msg) {
    return;
  }
  // object
  carma_perception_msgs__msg__ExternalObject__fini(&msg->object);
  // connected_vehicle_type
  carma_perception_msgs__msg__ConnectedVehicleType__fini(&msg->connected_vehicle_type);
  // lanelet_id
  // cross_track
  // down_track
  // predicted_lanelet_ids
  rosidl_runtime_c__int64__Sequence__fini(&msg->predicted_lanelet_ids);
  // predicted_lanelet_id_confidences
  rosidl_runtime_c__double__Sequence__fini(&msg->predicted_lanelet_id_confidences);
  // predicted_cross_tracks
  rosidl_runtime_c__double__Sequence__fini(&msg->predicted_cross_tracks);
  // predicted_cross_track_confidences
  rosidl_runtime_c__double__Sequence__fini(&msg->predicted_cross_track_confidences);
  // predicted_down_tracks
  rosidl_runtime_c__double__Sequence__fini(&msg->predicted_down_tracks);
  // predicted_down_track_confidences
  rosidl_runtime_c__double__Sequence__fini(&msg->predicted_down_track_confidences);
}

bool
carma_perception_msgs__msg__RoadwayObstacle__are_equal(const carma_perception_msgs__msg__RoadwayObstacle * lhs, const carma_perception_msgs__msg__RoadwayObstacle * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // object
  if (!carma_perception_msgs__msg__ExternalObject__are_equal(
      &(lhs->object), &(rhs->object)))
  {
    return false;
  }
  // connected_vehicle_type
  if (!carma_perception_msgs__msg__ConnectedVehicleType__are_equal(
      &(lhs->connected_vehicle_type), &(rhs->connected_vehicle_type)))
  {
    return false;
  }
  // lanelet_id
  if (lhs->lanelet_id != rhs->lanelet_id) {
    return false;
  }
  // cross_track
  if (lhs->cross_track != rhs->cross_track) {
    return false;
  }
  // down_track
  if (lhs->down_track != rhs->down_track) {
    return false;
  }
  // predicted_lanelet_ids
  if (!rosidl_runtime_c__int64__Sequence__are_equal(
      &(lhs->predicted_lanelet_ids), &(rhs->predicted_lanelet_ids)))
  {
    return false;
  }
  // predicted_lanelet_id_confidences
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->predicted_lanelet_id_confidences), &(rhs->predicted_lanelet_id_confidences)))
  {
    return false;
  }
  // predicted_cross_tracks
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->predicted_cross_tracks), &(rhs->predicted_cross_tracks)))
  {
    return false;
  }
  // predicted_cross_track_confidences
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->predicted_cross_track_confidences), &(rhs->predicted_cross_track_confidences)))
  {
    return false;
  }
  // predicted_down_tracks
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->predicted_down_tracks), &(rhs->predicted_down_tracks)))
  {
    return false;
  }
  // predicted_down_track_confidences
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->predicted_down_track_confidences), &(rhs->predicted_down_track_confidences)))
  {
    return false;
  }
  return true;
}

bool
carma_perception_msgs__msg__RoadwayObstacle__copy(
  const carma_perception_msgs__msg__RoadwayObstacle * input,
  carma_perception_msgs__msg__RoadwayObstacle * output)
{
  if (!input || !output) {
    return false;
  }
  // object
  if (!carma_perception_msgs__msg__ExternalObject__copy(
      &(input->object), &(output->object)))
  {
    return false;
  }
  // connected_vehicle_type
  if (!carma_perception_msgs__msg__ConnectedVehicleType__copy(
      &(input->connected_vehicle_type), &(output->connected_vehicle_type)))
  {
    return false;
  }
  // lanelet_id
  output->lanelet_id = input->lanelet_id;
  // cross_track
  output->cross_track = input->cross_track;
  // down_track
  output->down_track = input->down_track;
  // predicted_lanelet_ids
  if (!rosidl_runtime_c__int64__Sequence__copy(
      &(input->predicted_lanelet_ids), &(output->predicted_lanelet_ids)))
  {
    return false;
  }
  // predicted_lanelet_id_confidences
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->predicted_lanelet_id_confidences), &(output->predicted_lanelet_id_confidences)))
  {
    return false;
  }
  // predicted_cross_tracks
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->predicted_cross_tracks), &(output->predicted_cross_tracks)))
  {
    return false;
  }
  // predicted_cross_track_confidences
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->predicted_cross_track_confidences), &(output->predicted_cross_track_confidences)))
  {
    return false;
  }
  // predicted_down_tracks
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->predicted_down_tracks), &(output->predicted_down_tracks)))
  {
    return false;
  }
  // predicted_down_track_confidences
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->predicted_down_track_confidences), &(output->predicted_down_track_confidences)))
  {
    return false;
  }
  return true;
}

carma_perception_msgs__msg__RoadwayObstacle *
carma_perception_msgs__msg__RoadwayObstacle__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  carma_perception_msgs__msg__RoadwayObstacle * msg = (carma_perception_msgs__msg__RoadwayObstacle *)allocator.allocate(sizeof(carma_perception_msgs__msg__RoadwayObstacle), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(carma_perception_msgs__msg__RoadwayObstacle));
  bool success = carma_perception_msgs__msg__RoadwayObstacle__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
carma_perception_msgs__msg__RoadwayObstacle__destroy(carma_perception_msgs__msg__RoadwayObstacle * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    carma_perception_msgs__msg__RoadwayObstacle__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
carma_perception_msgs__msg__RoadwayObstacle__Sequence__init(carma_perception_msgs__msg__RoadwayObstacle__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  carma_perception_msgs__msg__RoadwayObstacle * data = NULL;

  if (size) {
    data = (carma_perception_msgs__msg__RoadwayObstacle *)allocator.zero_allocate(size, sizeof(carma_perception_msgs__msg__RoadwayObstacle), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = carma_perception_msgs__msg__RoadwayObstacle__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        carma_perception_msgs__msg__RoadwayObstacle__fini(&data[i - 1]);
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
carma_perception_msgs__msg__RoadwayObstacle__Sequence__fini(carma_perception_msgs__msg__RoadwayObstacle__Sequence * array)
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
      carma_perception_msgs__msg__RoadwayObstacle__fini(&array->data[i]);
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

carma_perception_msgs__msg__RoadwayObstacle__Sequence *
carma_perception_msgs__msg__RoadwayObstacle__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  carma_perception_msgs__msg__RoadwayObstacle__Sequence * array = (carma_perception_msgs__msg__RoadwayObstacle__Sequence *)allocator.allocate(sizeof(carma_perception_msgs__msg__RoadwayObstacle__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = carma_perception_msgs__msg__RoadwayObstacle__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
carma_perception_msgs__msg__RoadwayObstacle__Sequence__destroy(carma_perception_msgs__msg__RoadwayObstacle__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    carma_perception_msgs__msg__RoadwayObstacle__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
carma_perception_msgs__msg__RoadwayObstacle__Sequence__are_equal(const carma_perception_msgs__msg__RoadwayObstacle__Sequence * lhs, const carma_perception_msgs__msg__RoadwayObstacle__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!carma_perception_msgs__msg__RoadwayObstacle__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
carma_perception_msgs__msg__RoadwayObstacle__Sequence__copy(
  const carma_perception_msgs__msg__RoadwayObstacle__Sequence * input,
  carma_perception_msgs__msg__RoadwayObstacle__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(carma_perception_msgs__msg__RoadwayObstacle);
    carma_perception_msgs__msg__RoadwayObstacle * data =
      (carma_perception_msgs__msg__RoadwayObstacle *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!carma_perception_msgs__msg__RoadwayObstacle__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          carma_perception_msgs__msg__RoadwayObstacle__fini(&data[i]);
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
    if (!carma_perception_msgs__msg__RoadwayObstacle__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
