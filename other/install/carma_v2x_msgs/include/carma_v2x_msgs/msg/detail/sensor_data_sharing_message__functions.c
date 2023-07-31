// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from carma_v2x_msgs:msg/SensorDataSharingMessage.idl
// generated code does not contain a copyright notice
#include "carma_v2x_msgs/msg/detail/sensor_data_sharing_message__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `msg_cnt`
#include "j2735_v2x_msgs/msg/detail/msg_count__functions.h"
// Member `source_id`
#include "j2735_v2x_msgs/msg/detail/temporary_id__functions.h"
// Member `equipment_type`
#include "j3224_v2x_msgs/msg/detail/equipment_type__functions.h"
// Member `sdsm_time_stamp`
#include "j2735_v2x_msgs/msg/detail/d_date_time__functions.h"
// Member `ref_pos`
#include "carma_v2x_msgs/msg/detail/position3_d__functions.h"
// Member `ref_pos_xy_conf`
#include "carma_v2x_msgs/msg/detail/positional_accuracy__functions.h"
// Member `objects`
#include "carma_v2x_msgs/msg/detail/detected_object_list__functions.h"
// Member `ref_pos_el_conf`
#include "j2735_v2x_msgs/msg/detail/elevation_confidence__functions.h"

bool
carma_v2x_msgs__msg__SensorDataSharingMessage__init(carma_v2x_msgs__msg__SensorDataSharingMessage * msg)
{
  if (!msg) {
    return false;
  }
  // msg_cnt
  if (!j2735_v2x_msgs__msg__MsgCount__init(&msg->msg_cnt)) {
    carma_v2x_msgs__msg__SensorDataSharingMessage__fini(msg);
    return false;
  }
  // source_id
  if (!j2735_v2x_msgs__msg__TemporaryID__init(&msg->source_id)) {
    carma_v2x_msgs__msg__SensorDataSharingMessage__fini(msg);
    return false;
  }
  // equipment_type
  if (!j3224_v2x_msgs__msg__EquipmentType__init(&msg->equipment_type)) {
    carma_v2x_msgs__msg__SensorDataSharingMessage__fini(msg);
    return false;
  }
  // sdsm_time_stamp
  if (!j2735_v2x_msgs__msg__DDateTime__init(&msg->sdsm_time_stamp)) {
    carma_v2x_msgs__msg__SensorDataSharingMessage__fini(msg);
    return false;
  }
  // ref_pos
  if (!carma_v2x_msgs__msg__Position3D__init(&msg->ref_pos)) {
    carma_v2x_msgs__msg__SensorDataSharingMessage__fini(msg);
    return false;
  }
  // ref_pos_xy_conf
  if (!carma_v2x_msgs__msg__PositionalAccuracy__init(&msg->ref_pos_xy_conf)) {
    carma_v2x_msgs__msg__SensorDataSharingMessage__fini(msg);
    return false;
  }
  // objects
  if (!carma_v2x_msgs__msg__DetectedObjectList__init(&msg->objects)) {
    carma_v2x_msgs__msg__SensorDataSharingMessage__fini(msg);
    return false;
  }
  // presence_vector
  // ref_pos_el_conf
  if (!j2735_v2x_msgs__msg__ElevationConfidence__init(&msg->ref_pos_el_conf)) {
    carma_v2x_msgs__msg__SensorDataSharingMessage__fini(msg);
    return false;
  }
  return true;
}

void
carma_v2x_msgs__msg__SensorDataSharingMessage__fini(carma_v2x_msgs__msg__SensorDataSharingMessage * msg)
{
  if (!msg) {
    return;
  }
  // msg_cnt
  j2735_v2x_msgs__msg__MsgCount__fini(&msg->msg_cnt);
  // source_id
  j2735_v2x_msgs__msg__TemporaryID__fini(&msg->source_id);
  // equipment_type
  j3224_v2x_msgs__msg__EquipmentType__fini(&msg->equipment_type);
  // sdsm_time_stamp
  j2735_v2x_msgs__msg__DDateTime__fini(&msg->sdsm_time_stamp);
  // ref_pos
  carma_v2x_msgs__msg__Position3D__fini(&msg->ref_pos);
  // ref_pos_xy_conf
  carma_v2x_msgs__msg__PositionalAccuracy__fini(&msg->ref_pos_xy_conf);
  // objects
  carma_v2x_msgs__msg__DetectedObjectList__fini(&msg->objects);
  // presence_vector
  // ref_pos_el_conf
  j2735_v2x_msgs__msg__ElevationConfidence__fini(&msg->ref_pos_el_conf);
}

bool
carma_v2x_msgs__msg__SensorDataSharingMessage__are_equal(const carma_v2x_msgs__msg__SensorDataSharingMessage * lhs, const carma_v2x_msgs__msg__SensorDataSharingMessage * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // msg_cnt
  if (!j2735_v2x_msgs__msg__MsgCount__are_equal(
      &(lhs->msg_cnt), &(rhs->msg_cnt)))
  {
    return false;
  }
  // source_id
  if (!j2735_v2x_msgs__msg__TemporaryID__are_equal(
      &(lhs->source_id), &(rhs->source_id)))
  {
    return false;
  }
  // equipment_type
  if (!j3224_v2x_msgs__msg__EquipmentType__are_equal(
      &(lhs->equipment_type), &(rhs->equipment_type)))
  {
    return false;
  }
  // sdsm_time_stamp
  if (!j2735_v2x_msgs__msg__DDateTime__are_equal(
      &(lhs->sdsm_time_stamp), &(rhs->sdsm_time_stamp)))
  {
    return false;
  }
  // ref_pos
  if (!carma_v2x_msgs__msg__Position3D__are_equal(
      &(lhs->ref_pos), &(rhs->ref_pos)))
  {
    return false;
  }
  // ref_pos_xy_conf
  if (!carma_v2x_msgs__msg__PositionalAccuracy__are_equal(
      &(lhs->ref_pos_xy_conf), &(rhs->ref_pos_xy_conf)))
  {
    return false;
  }
  // objects
  if (!carma_v2x_msgs__msg__DetectedObjectList__are_equal(
      &(lhs->objects), &(rhs->objects)))
  {
    return false;
  }
  // presence_vector
  if (lhs->presence_vector != rhs->presence_vector) {
    return false;
  }
  // ref_pos_el_conf
  if (!j2735_v2x_msgs__msg__ElevationConfidence__are_equal(
      &(lhs->ref_pos_el_conf), &(rhs->ref_pos_el_conf)))
  {
    return false;
  }
  return true;
}

bool
carma_v2x_msgs__msg__SensorDataSharingMessage__copy(
  const carma_v2x_msgs__msg__SensorDataSharingMessage * input,
  carma_v2x_msgs__msg__SensorDataSharingMessage * output)
{
  if (!input || !output) {
    return false;
  }
  // msg_cnt
  if (!j2735_v2x_msgs__msg__MsgCount__copy(
      &(input->msg_cnt), &(output->msg_cnt)))
  {
    return false;
  }
  // source_id
  if (!j2735_v2x_msgs__msg__TemporaryID__copy(
      &(input->source_id), &(output->source_id)))
  {
    return false;
  }
  // equipment_type
  if (!j3224_v2x_msgs__msg__EquipmentType__copy(
      &(input->equipment_type), &(output->equipment_type)))
  {
    return false;
  }
  // sdsm_time_stamp
  if (!j2735_v2x_msgs__msg__DDateTime__copy(
      &(input->sdsm_time_stamp), &(output->sdsm_time_stamp)))
  {
    return false;
  }
  // ref_pos
  if (!carma_v2x_msgs__msg__Position3D__copy(
      &(input->ref_pos), &(output->ref_pos)))
  {
    return false;
  }
  // ref_pos_xy_conf
  if (!carma_v2x_msgs__msg__PositionalAccuracy__copy(
      &(input->ref_pos_xy_conf), &(output->ref_pos_xy_conf)))
  {
    return false;
  }
  // objects
  if (!carma_v2x_msgs__msg__DetectedObjectList__copy(
      &(input->objects), &(output->objects)))
  {
    return false;
  }
  // presence_vector
  output->presence_vector = input->presence_vector;
  // ref_pos_el_conf
  if (!j2735_v2x_msgs__msg__ElevationConfidence__copy(
      &(input->ref_pos_el_conf), &(output->ref_pos_el_conf)))
  {
    return false;
  }
  return true;
}

carma_v2x_msgs__msg__SensorDataSharingMessage *
carma_v2x_msgs__msg__SensorDataSharingMessage__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  carma_v2x_msgs__msg__SensorDataSharingMessage * msg = (carma_v2x_msgs__msg__SensorDataSharingMessage *)allocator.allocate(sizeof(carma_v2x_msgs__msg__SensorDataSharingMessage), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(carma_v2x_msgs__msg__SensorDataSharingMessage));
  bool success = carma_v2x_msgs__msg__SensorDataSharingMessage__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
carma_v2x_msgs__msg__SensorDataSharingMessage__destroy(carma_v2x_msgs__msg__SensorDataSharingMessage * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    carma_v2x_msgs__msg__SensorDataSharingMessage__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
carma_v2x_msgs__msg__SensorDataSharingMessage__Sequence__init(carma_v2x_msgs__msg__SensorDataSharingMessage__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  carma_v2x_msgs__msg__SensorDataSharingMessage * data = NULL;

  if (size) {
    data = (carma_v2x_msgs__msg__SensorDataSharingMessage *)allocator.zero_allocate(size, sizeof(carma_v2x_msgs__msg__SensorDataSharingMessage), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = carma_v2x_msgs__msg__SensorDataSharingMessage__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        carma_v2x_msgs__msg__SensorDataSharingMessage__fini(&data[i - 1]);
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
carma_v2x_msgs__msg__SensorDataSharingMessage__Sequence__fini(carma_v2x_msgs__msg__SensorDataSharingMessage__Sequence * array)
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
      carma_v2x_msgs__msg__SensorDataSharingMessage__fini(&array->data[i]);
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

carma_v2x_msgs__msg__SensorDataSharingMessage__Sequence *
carma_v2x_msgs__msg__SensorDataSharingMessage__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  carma_v2x_msgs__msg__SensorDataSharingMessage__Sequence * array = (carma_v2x_msgs__msg__SensorDataSharingMessage__Sequence *)allocator.allocate(sizeof(carma_v2x_msgs__msg__SensorDataSharingMessage__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = carma_v2x_msgs__msg__SensorDataSharingMessage__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
carma_v2x_msgs__msg__SensorDataSharingMessage__Sequence__destroy(carma_v2x_msgs__msg__SensorDataSharingMessage__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    carma_v2x_msgs__msg__SensorDataSharingMessage__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
carma_v2x_msgs__msg__SensorDataSharingMessage__Sequence__are_equal(const carma_v2x_msgs__msg__SensorDataSharingMessage__Sequence * lhs, const carma_v2x_msgs__msg__SensorDataSharingMessage__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!carma_v2x_msgs__msg__SensorDataSharingMessage__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
carma_v2x_msgs__msg__SensorDataSharingMessage__Sequence__copy(
  const carma_v2x_msgs__msg__SensorDataSharingMessage__Sequence * input,
  carma_v2x_msgs__msg__SensorDataSharingMessage__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(carma_v2x_msgs__msg__SensorDataSharingMessage);
    carma_v2x_msgs__msg__SensorDataSharingMessage * data =
      (carma_v2x_msgs__msg__SensorDataSharingMessage *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!carma_v2x_msgs__msg__SensorDataSharingMessage__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          carma_v2x_msgs__msg__SensorDataSharingMessage__fini(&data[i]);
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
    if (!carma_v2x_msgs__msg__SensorDataSharingMessage__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
