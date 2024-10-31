// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from carma_v2x_msgs:msg/DetectedObjectCommonData.idl
// generated code does not contain a copyright notice
#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
#include <Python.h>
#include <stdbool.h>
#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-function"
#endif
#include "numpy/ndarrayobject.h"
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif
#include "rosidl_runtime_c/visibility_control.h"
#include "carma_v2x_msgs/msg/detail/detected_object_common_data__struct.h"
#include "carma_v2x_msgs/msg/detail/detected_object_common_data__functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool j3224_v2x_msgs__msg__object_type__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * j3224_v2x_msgs__msg__object_type__convert_to_py(void * raw_ros_message);
ROSIDL_GENERATOR_C_IMPORT
bool j3224_v2x_msgs__msg__classification_confidence__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * j3224_v2x_msgs__msg__classification_confidence__convert_to_py(void * raw_ros_message);
ROSIDL_GENERATOR_C_IMPORT
bool j3224_v2x_msgs__msg__object_id__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * j3224_v2x_msgs__msg__object_id__convert_to_py(void * raw_ros_message);
bool carma_v2x_msgs__msg__measurement_time_offset__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * carma_v2x_msgs__msg__measurement_time_offset__convert_to_py(void * raw_ros_message);
ROSIDL_GENERATOR_C_IMPORT
bool j2735_v2x_msgs__msg__time_confidence__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * j2735_v2x_msgs__msg__time_confidence__convert_to_py(void * raw_ros_message);
bool carma_v2x_msgs__msg__position_offset_xyz__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * carma_v2x_msgs__msg__position_offset_xyz__convert_to_py(void * raw_ros_message);
ROSIDL_GENERATOR_C_IMPORT
bool j2735_v2x_msgs__msg__position_confidence_set__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * j2735_v2x_msgs__msg__position_confidence_set__convert_to_py(void * raw_ros_message);
bool carma_v2x_msgs__msg__speed__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * carma_v2x_msgs__msg__speed__convert_to_py(void * raw_ros_message);
ROSIDL_GENERATOR_C_IMPORT
bool j2735_v2x_msgs__msg__speed_confidence__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * j2735_v2x_msgs__msg__speed_confidence__convert_to_py(void * raw_ros_message);
bool carma_v2x_msgs__msg__heading__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * carma_v2x_msgs__msg__heading__convert_to_py(void * raw_ros_message);
ROSIDL_GENERATOR_C_IMPORT
bool j2735_v2x_msgs__msg__heading_confidence__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * j2735_v2x_msgs__msg__heading_confidence__convert_to_py(void * raw_ros_message);
bool carma_v2x_msgs__msg__speed__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * carma_v2x_msgs__msg__speed__convert_to_py(void * raw_ros_message);
ROSIDL_GENERATOR_C_IMPORT
bool j2735_v2x_msgs__msg__speed_confidence__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * j2735_v2x_msgs__msg__speed_confidence__convert_to_py(void * raw_ros_message);
bool carma_v2x_msgs__msg__acceleration_set4_way__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * carma_v2x_msgs__msg__acceleration_set4_way__convert_to_py(void * raw_ros_message);
ROSIDL_GENERATOR_C_IMPORT
bool j2735_v2x_msgs__msg__acceleration_confidence__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * j2735_v2x_msgs__msg__acceleration_confidence__convert_to_py(void * raw_ros_message);
ROSIDL_GENERATOR_C_IMPORT
bool j2735_v2x_msgs__msg__acceleration_confidence__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * j2735_v2x_msgs__msg__acceleration_confidence__convert_to_py(void * raw_ros_message);
ROSIDL_GENERATOR_C_IMPORT
bool j2735_v2x_msgs__msg__acceleration_confidence__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * j2735_v2x_msgs__msg__acceleration_confidence__convert_to_py(void * raw_ros_message);
ROSIDL_GENERATOR_C_IMPORT
bool j2735_v2x_msgs__msg__yaw_rate_confidence__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * j2735_v2x_msgs__msg__yaw_rate_confidence__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool carma_v2x_msgs__msg__detected_object_common_data__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[73];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("carma_v2x_msgs.msg._detected_object_common_data.DetectedObjectCommonData", full_classname_dest, 72) == 0);
  }
  carma_v2x_msgs__msg__DetectedObjectCommonData * ros_message = _ros_message;
  {  // obj_type
    PyObject * field = PyObject_GetAttrString(_pymsg, "obj_type");
    if (!field) {
      return false;
    }
    if (!j3224_v2x_msgs__msg__object_type__convert_from_py(field, &ros_message->obj_type)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // obj_type_cfd
    PyObject * field = PyObject_GetAttrString(_pymsg, "obj_type_cfd");
    if (!field) {
      return false;
    }
    if (!j3224_v2x_msgs__msg__classification_confidence__convert_from_py(field, &ros_message->obj_type_cfd)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // detected_id
    PyObject * field = PyObject_GetAttrString(_pymsg, "detected_id");
    if (!field) {
      return false;
    }
    if (!j3224_v2x_msgs__msg__object_id__convert_from_py(field, &ros_message->detected_id)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // measurement_time
    PyObject * field = PyObject_GetAttrString(_pymsg, "measurement_time");
    if (!field) {
      return false;
    }
    if (!carma_v2x_msgs__msg__measurement_time_offset__convert_from_py(field, &ros_message->measurement_time)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // time_confidence
    PyObject * field = PyObject_GetAttrString(_pymsg, "time_confidence");
    if (!field) {
      return false;
    }
    if (!j2735_v2x_msgs__msg__time_confidence__convert_from_py(field, &ros_message->time_confidence)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // pos
    PyObject * field = PyObject_GetAttrString(_pymsg, "pos");
    if (!field) {
      return false;
    }
    if (!carma_v2x_msgs__msg__position_offset_xyz__convert_from_py(field, &ros_message->pos)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // pos_confidence
    PyObject * field = PyObject_GetAttrString(_pymsg, "pos_confidence");
    if (!field) {
      return false;
    }
    if (!j2735_v2x_msgs__msg__position_confidence_set__convert_from_py(field, &ros_message->pos_confidence)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // speed
    PyObject * field = PyObject_GetAttrString(_pymsg, "speed");
    if (!field) {
      return false;
    }
    if (!carma_v2x_msgs__msg__speed__convert_from_py(field, &ros_message->speed)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // speed_confidence
    PyObject * field = PyObject_GetAttrString(_pymsg, "speed_confidence");
    if (!field) {
      return false;
    }
    if (!j2735_v2x_msgs__msg__speed_confidence__convert_from_py(field, &ros_message->speed_confidence)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // heading
    PyObject * field = PyObject_GetAttrString(_pymsg, "heading");
    if (!field) {
      return false;
    }
    if (!carma_v2x_msgs__msg__heading__convert_from_py(field, &ros_message->heading)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // heading_conf
    PyObject * field = PyObject_GetAttrString(_pymsg, "heading_conf");
    if (!field) {
      return false;
    }
    if (!j2735_v2x_msgs__msg__heading_confidence__convert_from_py(field, &ros_message->heading_conf)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // presence_vector
    PyObject * field = PyObject_GetAttrString(_pymsg, "presence_vector");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->presence_vector = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // speed_z
    PyObject * field = PyObject_GetAttrString(_pymsg, "speed_z");
    if (!field) {
      return false;
    }
    if (!carma_v2x_msgs__msg__speed__convert_from_py(field, &ros_message->speed_z)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // speed_confidence_z
    PyObject * field = PyObject_GetAttrString(_pymsg, "speed_confidence_z");
    if (!field) {
      return false;
    }
    if (!j2735_v2x_msgs__msg__speed_confidence__convert_from_py(field, &ros_message->speed_confidence_z)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // accel_4_way
    PyObject * field = PyObject_GetAttrString(_pymsg, "accel_4_way");
    if (!field) {
      return false;
    }
    if (!carma_v2x_msgs__msg__acceleration_set4_way__convert_from_py(field, &ros_message->accel_4_way)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // acc_cfd_x
    PyObject * field = PyObject_GetAttrString(_pymsg, "acc_cfd_x");
    if (!field) {
      return false;
    }
    if (!j2735_v2x_msgs__msg__acceleration_confidence__convert_from_py(field, &ros_message->acc_cfd_x)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // acc_cfd_y
    PyObject * field = PyObject_GetAttrString(_pymsg, "acc_cfd_y");
    if (!field) {
      return false;
    }
    if (!j2735_v2x_msgs__msg__acceleration_confidence__convert_from_py(field, &ros_message->acc_cfd_y)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // acc_cfd_z
    PyObject * field = PyObject_GetAttrString(_pymsg, "acc_cfd_z");
    if (!field) {
      return false;
    }
    if (!j2735_v2x_msgs__msg__acceleration_confidence__convert_from_py(field, &ros_message->acc_cfd_z)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // acc_cfd_yaw
    PyObject * field = PyObject_GetAttrString(_pymsg, "acc_cfd_yaw");
    if (!field) {
      return false;
    }
    if (!j2735_v2x_msgs__msg__yaw_rate_confidence__convert_from_py(field, &ros_message->acc_cfd_yaw)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * carma_v2x_msgs__msg__detected_object_common_data__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of DetectedObjectCommonData */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("carma_v2x_msgs.msg._detected_object_common_data");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "DetectedObjectCommonData");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  carma_v2x_msgs__msg__DetectedObjectCommonData * ros_message = (carma_v2x_msgs__msg__DetectedObjectCommonData *)raw_ros_message;
  {  // obj_type
    PyObject * field = NULL;
    field = j3224_v2x_msgs__msg__object_type__convert_to_py(&ros_message->obj_type);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "obj_type", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // obj_type_cfd
    PyObject * field = NULL;
    field = j3224_v2x_msgs__msg__classification_confidence__convert_to_py(&ros_message->obj_type_cfd);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "obj_type_cfd", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // detected_id
    PyObject * field = NULL;
    field = j3224_v2x_msgs__msg__object_id__convert_to_py(&ros_message->detected_id);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "detected_id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // measurement_time
    PyObject * field = NULL;
    field = carma_v2x_msgs__msg__measurement_time_offset__convert_to_py(&ros_message->measurement_time);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "measurement_time", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // time_confidence
    PyObject * field = NULL;
    field = j2735_v2x_msgs__msg__time_confidence__convert_to_py(&ros_message->time_confidence);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "time_confidence", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // pos
    PyObject * field = NULL;
    field = carma_v2x_msgs__msg__position_offset_xyz__convert_to_py(&ros_message->pos);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "pos", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // pos_confidence
    PyObject * field = NULL;
    field = j2735_v2x_msgs__msg__position_confidence_set__convert_to_py(&ros_message->pos_confidence);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "pos_confidence", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // speed
    PyObject * field = NULL;
    field = carma_v2x_msgs__msg__speed__convert_to_py(&ros_message->speed);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "speed", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // speed_confidence
    PyObject * field = NULL;
    field = j2735_v2x_msgs__msg__speed_confidence__convert_to_py(&ros_message->speed_confidence);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "speed_confidence", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // heading
    PyObject * field = NULL;
    field = carma_v2x_msgs__msg__heading__convert_to_py(&ros_message->heading);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "heading", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // heading_conf
    PyObject * field = NULL;
    field = j2735_v2x_msgs__msg__heading_confidence__convert_to_py(&ros_message->heading_conf);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "heading_conf", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // presence_vector
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->presence_vector);
    {
      int rc = PyObject_SetAttrString(_pymessage, "presence_vector", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // speed_z
    PyObject * field = NULL;
    field = carma_v2x_msgs__msg__speed__convert_to_py(&ros_message->speed_z);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "speed_z", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // speed_confidence_z
    PyObject * field = NULL;
    field = j2735_v2x_msgs__msg__speed_confidence__convert_to_py(&ros_message->speed_confidence_z);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "speed_confidence_z", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // accel_4_way
    PyObject * field = NULL;
    field = carma_v2x_msgs__msg__acceleration_set4_way__convert_to_py(&ros_message->accel_4_way);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "accel_4_way", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // acc_cfd_x
    PyObject * field = NULL;
    field = j2735_v2x_msgs__msg__acceleration_confidence__convert_to_py(&ros_message->acc_cfd_x);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "acc_cfd_x", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // acc_cfd_y
    PyObject * field = NULL;
    field = j2735_v2x_msgs__msg__acceleration_confidence__convert_to_py(&ros_message->acc_cfd_y);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "acc_cfd_y", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // acc_cfd_z
    PyObject * field = NULL;
    field = j2735_v2x_msgs__msg__acceleration_confidence__convert_to_py(&ros_message->acc_cfd_z);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "acc_cfd_z", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // acc_cfd_yaw
    PyObject * field = NULL;
    field = j2735_v2x_msgs__msg__yaw_rate_confidence__convert_to_py(&ros_message->acc_cfd_yaw);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "acc_cfd_yaw", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
