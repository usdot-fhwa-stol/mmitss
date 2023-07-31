// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from j3224_v2x_msgs:msg/DetectedObjectCommonData.idl
// generated code does not contain a copyright notice
#include "j3224_v2x_msgs/msg/detail/detected_object_common_data__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `obj_type`
#include "j3224_v2x_msgs/msg/detail/object_type__functions.h"
// Member `obj_type_cfd`
#include "j3224_v2x_msgs/msg/detail/classification_confidence__functions.h"
// Member `detected_id`
#include "j3224_v2x_msgs/msg/detail/object_id__functions.h"
// Member `measurement_time`
#include "j3224_v2x_msgs/msg/detail/measurement_time_offset__functions.h"
// Member `time_confidence`
#include "j2735_v2x_msgs/msg/detail/time_confidence__functions.h"
// Member `pos`
#include "j3224_v2x_msgs/msg/detail/position_offset_xyz__functions.h"
// Member `pos_confidence`
#include "j2735_v2x_msgs/msg/detail/position_confidence_set__functions.h"
// Member `speed`
// Member `speed_z`
#include "j2735_v2x_msgs/msg/detail/speed__functions.h"
// Member `speed_confidence`
// Member `speed_confidence_z`
#include "j2735_v2x_msgs/msg/detail/speed_confidence__functions.h"
// Member `heading`
#include "j2735_v2x_msgs/msg/detail/heading__functions.h"
// Member `heading_conf`
#include "j2735_v2x_msgs/msg/detail/heading_confidence__functions.h"
// Member `accel_4_way`
#include "j2735_v2x_msgs/msg/detail/acceleration_set4_way__functions.h"
// Member `acc_cfd_x`
// Member `acc_cfd_y`
// Member `acc_cfd_z`
#include "j2735_v2x_msgs/msg/detail/acceleration_confidence__functions.h"
// Member `acc_cfd_yaw`
#include "j2735_v2x_msgs/msg/detail/yaw_rate_confidence__functions.h"

bool
j3224_v2x_msgs__msg__DetectedObjectCommonData__init(j3224_v2x_msgs__msg__DetectedObjectCommonData * msg)
{
  if (!msg) {
    return false;
  }
  // obj_type
  if (!j3224_v2x_msgs__msg__ObjectType__init(&msg->obj_type)) {
    j3224_v2x_msgs__msg__DetectedObjectCommonData__fini(msg);
    return false;
  }
  // obj_type_cfd
  if (!j3224_v2x_msgs__msg__ClassificationConfidence__init(&msg->obj_type_cfd)) {
    j3224_v2x_msgs__msg__DetectedObjectCommonData__fini(msg);
    return false;
  }
  // detected_id
  if (!j3224_v2x_msgs__msg__ObjectID__init(&msg->detected_id)) {
    j3224_v2x_msgs__msg__DetectedObjectCommonData__fini(msg);
    return false;
  }
  // measurement_time
  if (!j3224_v2x_msgs__msg__MeasurementTimeOffset__init(&msg->measurement_time)) {
    j3224_v2x_msgs__msg__DetectedObjectCommonData__fini(msg);
    return false;
  }
  // time_confidence
  if (!j2735_v2x_msgs__msg__TimeConfidence__init(&msg->time_confidence)) {
    j3224_v2x_msgs__msg__DetectedObjectCommonData__fini(msg);
    return false;
  }
  // pos
  if (!j3224_v2x_msgs__msg__PositionOffsetXYZ__init(&msg->pos)) {
    j3224_v2x_msgs__msg__DetectedObjectCommonData__fini(msg);
    return false;
  }
  // pos_confidence
  if (!j2735_v2x_msgs__msg__PositionConfidenceSet__init(&msg->pos_confidence)) {
    j3224_v2x_msgs__msg__DetectedObjectCommonData__fini(msg);
    return false;
  }
  // speed
  if (!j2735_v2x_msgs__msg__Speed__init(&msg->speed)) {
    j3224_v2x_msgs__msg__DetectedObjectCommonData__fini(msg);
    return false;
  }
  // speed_confidence
  if (!j2735_v2x_msgs__msg__SpeedConfidence__init(&msg->speed_confidence)) {
    j3224_v2x_msgs__msg__DetectedObjectCommonData__fini(msg);
    return false;
  }
  // heading
  if (!j2735_v2x_msgs__msg__Heading__init(&msg->heading)) {
    j3224_v2x_msgs__msg__DetectedObjectCommonData__fini(msg);
    return false;
  }
  // heading_conf
  if (!j2735_v2x_msgs__msg__HeadingConfidence__init(&msg->heading_conf)) {
    j3224_v2x_msgs__msg__DetectedObjectCommonData__fini(msg);
    return false;
  }
  // presence_vector
  // speed_z
  if (!j2735_v2x_msgs__msg__Speed__init(&msg->speed_z)) {
    j3224_v2x_msgs__msg__DetectedObjectCommonData__fini(msg);
    return false;
  }
  // speed_confidence_z
  if (!j2735_v2x_msgs__msg__SpeedConfidence__init(&msg->speed_confidence_z)) {
    j3224_v2x_msgs__msg__DetectedObjectCommonData__fini(msg);
    return false;
  }
  // accel_4_way
  if (!j2735_v2x_msgs__msg__AccelerationSet4Way__init(&msg->accel_4_way)) {
    j3224_v2x_msgs__msg__DetectedObjectCommonData__fini(msg);
    return false;
  }
  // acc_cfd_x
  if (!j2735_v2x_msgs__msg__AccelerationConfidence__init(&msg->acc_cfd_x)) {
    j3224_v2x_msgs__msg__DetectedObjectCommonData__fini(msg);
    return false;
  }
  // acc_cfd_y
  if (!j2735_v2x_msgs__msg__AccelerationConfidence__init(&msg->acc_cfd_y)) {
    j3224_v2x_msgs__msg__DetectedObjectCommonData__fini(msg);
    return false;
  }
  // acc_cfd_z
  if (!j2735_v2x_msgs__msg__AccelerationConfidence__init(&msg->acc_cfd_z)) {
    j3224_v2x_msgs__msg__DetectedObjectCommonData__fini(msg);
    return false;
  }
  // acc_cfd_yaw
  if (!j2735_v2x_msgs__msg__YawRateConfidence__init(&msg->acc_cfd_yaw)) {
    j3224_v2x_msgs__msg__DetectedObjectCommonData__fini(msg);
    return false;
  }
  return true;
}

void
j3224_v2x_msgs__msg__DetectedObjectCommonData__fini(j3224_v2x_msgs__msg__DetectedObjectCommonData * msg)
{
  if (!msg) {
    return;
  }
  // obj_type
  j3224_v2x_msgs__msg__ObjectType__fini(&msg->obj_type);
  // obj_type_cfd
  j3224_v2x_msgs__msg__ClassificationConfidence__fini(&msg->obj_type_cfd);
  // detected_id
  j3224_v2x_msgs__msg__ObjectID__fini(&msg->detected_id);
  // measurement_time
  j3224_v2x_msgs__msg__MeasurementTimeOffset__fini(&msg->measurement_time);
  // time_confidence
  j2735_v2x_msgs__msg__TimeConfidence__fini(&msg->time_confidence);
  // pos
  j3224_v2x_msgs__msg__PositionOffsetXYZ__fini(&msg->pos);
  // pos_confidence
  j2735_v2x_msgs__msg__PositionConfidenceSet__fini(&msg->pos_confidence);
  // speed
  j2735_v2x_msgs__msg__Speed__fini(&msg->speed);
  // speed_confidence
  j2735_v2x_msgs__msg__SpeedConfidence__fini(&msg->speed_confidence);
  // heading
  j2735_v2x_msgs__msg__Heading__fini(&msg->heading);
  // heading_conf
  j2735_v2x_msgs__msg__HeadingConfidence__fini(&msg->heading_conf);
  // presence_vector
  // speed_z
  j2735_v2x_msgs__msg__Speed__fini(&msg->speed_z);
  // speed_confidence_z
  j2735_v2x_msgs__msg__SpeedConfidence__fini(&msg->speed_confidence_z);
  // accel_4_way
  j2735_v2x_msgs__msg__AccelerationSet4Way__fini(&msg->accel_4_way);
  // acc_cfd_x
  j2735_v2x_msgs__msg__AccelerationConfidence__fini(&msg->acc_cfd_x);
  // acc_cfd_y
  j2735_v2x_msgs__msg__AccelerationConfidence__fini(&msg->acc_cfd_y);
  // acc_cfd_z
  j2735_v2x_msgs__msg__AccelerationConfidence__fini(&msg->acc_cfd_z);
  // acc_cfd_yaw
  j2735_v2x_msgs__msg__YawRateConfidence__fini(&msg->acc_cfd_yaw);
}

bool
j3224_v2x_msgs__msg__DetectedObjectCommonData__are_equal(const j3224_v2x_msgs__msg__DetectedObjectCommonData * lhs, const j3224_v2x_msgs__msg__DetectedObjectCommonData * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // obj_type
  if (!j3224_v2x_msgs__msg__ObjectType__are_equal(
      &(lhs->obj_type), &(rhs->obj_type)))
  {
    return false;
  }
  // obj_type_cfd
  if (!j3224_v2x_msgs__msg__ClassificationConfidence__are_equal(
      &(lhs->obj_type_cfd), &(rhs->obj_type_cfd)))
  {
    return false;
  }
  // detected_id
  if (!j3224_v2x_msgs__msg__ObjectID__are_equal(
      &(lhs->detected_id), &(rhs->detected_id)))
  {
    return false;
  }
  // measurement_time
  if (!j3224_v2x_msgs__msg__MeasurementTimeOffset__are_equal(
      &(lhs->measurement_time), &(rhs->measurement_time)))
  {
    return false;
  }
  // time_confidence
  if (!j2735_v2x_msgs__msg__TimeConfidence__are_equal(
      &(lhs->time_confidence), &(rhs->time_confidence)))
  {
    return false;
  }
  // pos
  if (!j3224_v2x_msgs__msg__PositionOffsetXYZ__are_equal(
      &(lhs->pos), &(rhs->pos)))
  {
    return false;
  }
  // pos_confidence
  if (!j2735_v2x_msgs__msg__PositionConfidenceSet__are_equal(
      &(lhs->pos_confidence), &(rhs->pos_confidence)))
  {
    return false;
  }
  // speed
  if (!j2735_v2x_msgs__msg__Speed__are_equal(
      &(lhs->speed), &(rhs->speed)))
  {
    return false;
  }
  // speed_confidence
  if (!j2735_v2x_msgs__msg__SpeedConfidence__are_equal(
      &(lhs->speed_confidence), &(rhs->speed_confidence)))
  {
    return false;
  }
  // heading
  if (!j2735_v2x_msgs__msg__Heading__are_equal(
      &(lhs->heading), &(rhs->heading)))
  {
    return false;
  }
  // heading_conf
  if (!j2735_v2x_msgs__msg__HeadingConfidence__are_equal(
      &(lhs->heading_conf), &(rhs->heading_conf)))
  {
    return false;
  }
  // presence_vector
  if (lhs->presence_vector != rhs->presence_vector) {
    return false;
  }
  // speed_z
  if (!j2735_v2x_msgs__msg__Speed__are_equal(
      &(lhs->speed_z), &(rhs->speed_z)))
  {
    return false;
  }
  // speed_confidence_z
  if (!j2735_v2x_msgs__msg__SpeedConfidence__are_equal(
      &(lhs->speed_confidence_z), &(rhs->speed_confidence_z)))
  {
    return false;
  }
  // accel_4_way
  if (!j2735_v2x_msgs__msg__AccelerationSet4Way__are_equal(
      &(lhs->accel_4_way), &(rhs->accel_4_way)))
  {
    return false;
  }
  // acc_cfd_x
  if (!j2735_v2x_msgs__msg__AccelerationConfidence__are_equal(
      &(lhs->acc_cfd_x), &(rhs->acc_cfd_x)))
  {
    return false;
  }
  // acc_cfd_y
  if (!j2735_v2x_msgs__msg__AccelerationConfidence__are_equal(
      &(lhs->acc_cfd_y), &(rhs->acc_cfd_y)))
  {
    return false;
  }
  // acc_cfd_z
  if (!j2735_v2x_msgs__msg__AccelerationConfidence__are_equal(
      &(lhs->acc_cfd_z), &(rhs->acc_cfd_z)))
  {
    return false;
  }
  // acc_cfd_yaw
  if (!j2735_v2x_msgs__msg__YawRateConfidence__are_equal(
      &(lhs->acc_cfd_yaw), &(rhs->acc_cfd_yaw)))
  {
    return false;
  }
  return true;
}

bool
j3224_v2x_msgs__msg__DetectedObjectCommonData__copy(
  const j3224_v2x_msgs__msg__DetectedObjectCommonData * input,
  j3224_v2x_msgs__msg__DetectedObjectCommonData * output)
{
  if (!input || !output) {
    return false;
  }
  // obj_type
  if (!j3224_v2x_msgs__msg__ObjectType__copy(
      &(input->obj_type), &(output->obj_type)))
  {
    return false;
  }
  // obj_type_cfd
  if (!j3224_v2x_msgs__msg__ClassificationConfidence__copy(
      &(input->obj_type_cfd), &(output->obj_type_cfd)))
  {
    return false;
  }
  // detected_id
  if (!j3224_v2x_msgs__msg__ObjectID__copy(
      &(input->detected_id), &(output->detected_id)))
  {
    return false;
  }
  // measurement_time
  if (!j3224_v2x_msgs__msg__MeasurementTimeOffset__copy(
      &(input->measurement_time), &(output->measurement_time)))
  {
    return false;
  }
  // time_confidence
  if (!j2735_v2x_msgs__msg__TimeConfidence__copy(
      &(input->time_confidence), &(output->time_confidence)))
  {
    return false;
  }
  // pos
  if (!j3224_v2x_msgs__msg__PositionOffsetXYZ__copy(
      &(input->pos), &(output->pos)))
  {
    return false;
  }
  // pos_confidence
  if (!j2735_v2x_msgs__msg__PositionConfidenceSet__copy(
      &(input->pos_confidence), &(output->pos_confidence)))
  {
    return false;
  }
  // speed
  if (!j2735_v2x_msgs__msg__Speed__copy(
      &(input->speed), &(output->speed)))
  {
    return false;
  }
  // speed_confidence
  if (!j2735_v2x_msgs__msg__SpeedConfidence__copy(
      &(input->speed_confidence), &(output->speed_confidence)))
  {
    return false;
  }
  // heading
  if (!j2735_v2x_msgs__msg__Heading__copy(
      &(input->heading), &(output->heading)))
  {
    return false;
  }
  // heading_conf
  if (!j2735_v2x_msgs__msg__HeadingConfidence__copy(
      &(input->heading_conf), &(output->heading_conf)))
  {
    return false;
  }
  // presence_vector
  output->presence_vector = input->presence_vector;
  // speed_z
  if (!j2735_v2x_msgs__msg__Speed__copy(
      &(input->speed_z), &(output->speed_z)))
  {
    return false;
  }
  // speed_confidence_z
  if (!j2735_v2x_msgs__msg__SpeedConfidence__copy(
      &(input->speed_confidence_z), &(output->speed_confidence_z)))
  {
    return false;
  }
  // accel_4_way
  if (!j2735_v2x_msgs__msg__AccelerationSet4Way__copy(
      &(input->accel_4_way), &(output->accel_4_way)))
  {
    return false;
  }
  // acc_cfd_x
  if (!j2735_v2x_msgs__msg__AccelerationConfidence__copy(
      &(input->acc_cfd_x), &(output->acc_cfd_x)))
  {
    return false;
  }
  // acc_cfd_y
  if (!j2735_v2x_msgs__msg__AccelerationConfidence__copy(
      &(input->acc_cfd_y), &(output->acc_cfd_y)))
  {
    return false;
  }
  // acc_cfd_z
  if (!j2735_v2x_msgs__msg__AccelerationConfidence__copy(
      &(input->acc_cfd_z), &(output->acc_cfd_z)))
  {
    return false;
  }
  // acc_cfd_yaw
  if (!j2735_v2x_msgs__msg__YawRateConfidence__copy(
      &(input->acc_cfd_yaw), &(output->acc_cfd_yaw)))
  {
    return false;
  }
  return true;
}

j3224_v2x_msgs__msg__DetectedObjectCommonData *
j3224_v2x_msgs__msg__DetectedObjectCommonData__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  j3224_v2x_msgs__msg__DetectedObjectCommonData * msg = (j3224_v2x_msgs__msg__DetectedObjectCommonData *)allocator.allocate(sizeof(j3224_v2x_msgs__msg__DetectedObjectCommonData), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(j3224_v2x_msgs__msg__DetectedObjectCommonData));
  bool success = j3224_v2x_msgs__msg__DetectedObjectCommonData__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
j3224_v2x_msgs__msg__DetectedObjectCommonData__destroy(j3224_v2x_msgs__msg__DetectedObjectCommonData * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    j3224_v2x_msgs__msg__DetectedObjectCommonData__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
j3224_v2x_msgs__msg__DetectedObjectCommonData__Sequence__init(j3224_v2x_msgs__msg__DetectedObjectCommonData__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  j3224_v2x_msgs__msg__DetectedObjectCommonData * data = NULL;

  if (size) {
    data = (j3224_v2x_msgs__msg__DetectedObjectCommonData *)allocator.zero_allocate(size, sizeof(j3224_v2x_msgs__msg__DetectedObjectCommonData), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = j3224_v2x_msgs__msg__DetectedObjectCommonData__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        j3224_v2x_msgs__msg__DetectedObjectCommonData__fini(&data[i - 1]);
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
j3224_v2x_msgs__msg__DetectedObjectCommonData__Sequence__fini(j3224_v2x_msgs__msg__DetectedObjectCommonData__Sequence * array)
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
      j3224_v2x_msgs__msg__DetectedObjectCommonData__fini(&array->data[i]);
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

j3224_v2x_msgs__msg__DetectedObjectCommonData__Sequence *
j3224_v2x_msgs__msg__DetectedObjectCommonData__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  j3224_v2x_msgs__msg__DetectedObjectCommonData__Sequence * array = (j3224_v2x_msgs__msg__DetectedObjectCommonData__Sequence *)allocator.allocate(sizeof(j3224_v2x_msgs__msg__DetectedObjectCommonData__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = j3224_v2x_msgs__msg__DetectedObjectCommonData__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
j3224_v2x_msgs__msg__DetectedObjectCommonData__Sequence__destroy(j3224_v2x_msgs__msg__DetectedObjectCommonData__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    j3224_v2x_msgs__msg__DetectedObjectCommonData__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
j3224_v2x_msgs__msg__DetectedObjectCommonData__Sequence__are_equal(const j3224_v2x_msgs__msg__DetectedObjectCommonData__Sequence * lhs, const j3224_v2x_msgs__msg__DetectedObjectCommonData__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!j3224_v2x_msgs__msg__DetectedObjectCommonData__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
j3224_v2x_msgs__msg__DetectedObjectCommonData__Sequence__copy(
  const j3224_v2x_msgs__msg__DetectedObjectCommonData__Sequence * input,
  j3224_v2x_msgs__msg__DetectedObjectCommonData__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(j3224_v2x_msgs__msg__DetectedObjectCommonData);
    j3224_v2x_msgs__msg__DetectedObjectCommonData * data =
      (j3224_v2x_msgs__msg__DetectedObjectCommonData *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!j3224_v2x_msgs__msg__DetectedObjectCommonData__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          j3224_v2x_msgs__msg__DetectedObjectCommonData__fini(&data[i]);
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
    if (!j3224_v2x_msgs__msg__DetectedObjectCommonData__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
