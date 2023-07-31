// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from carma_v2x_msgs:msg/FullPositionVector.idl
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
#include "carma_v2x_msgs/msg/detail/full_position_vector__struct.h"
#include "carma_v2x_msgs/msg/detail/full_position_vector__functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool j2735_v2x_msgs__msg__d_date_time__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * j2735_v2x_msgs__msg__d_date_time__convert_to_py(void * raw_ros_message);
bool carma_v2x_msgs__msg__longitude__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * carma_v2x_msgs__msg__longitude__convert_to_py(void * raw_ros_message);
bool carma_v2x_msgs__msg__latitude__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * carma_v2x_msgs__msg__latitude__convert_to_py(void * raw_ros_message);
bool carma_v2x_msgs__msg__elevation__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * carma_v2x_msgs__msg__elevation__convert_to_py(void * raw_ros_message);
bool carma_v2x_msgs__msg__heading__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * carma_v2x_msgs__msg__heading__convert_to_py(void * raw_ros_message);
bool carma_v2x_msgs__msg__transmission_and_speed__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * carma_v2x_msgs__msg__transmission_and_speed__convert_to_py(void * raw_ros_message);
bool carma_v2x_msgs__msg__positional_accuracy__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * carma_v2x_msgs__msg__positional_accuracy__convert_to_py(void * raw_ros_message);
ROSIDL_GENERATOR_C_IMPORT
bool j2735_v2x_msgs__msg__time_confidence__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * j2735_v2x_msgs__msg__time_confidence__convert_to_py(void * raw_ros_message);
ROSIDL_GENERATOR_C_IMPORT
bool j2735_v2x_msgs__msg__position_confidence_set__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * j2735_v2x_msgs__msg__position_confidence_set__convert_to_py(void * raw_ros_message);
ROSIDL_GENERATOR_C_IMPORT
bool j2735_v2x_msgs__msg__speedand_headingand_throttle_confidence__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * j2735_v2x_msgs__msg__speedand_headingand_throttle_confidence__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool carma_v2x_msgs__msg__full_position_vector__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[60];
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
    assert(strncmp("carma_v2x_msgs.msg._full_position_vector.FullPositionVector", full_classname_dest, 59) == 0);
  }
  carma_v2x_msgs__msg__FullPositionVector * ros_message = _ros_message;
  {  // presence_vector
    PyObject * field = PyObject_GetAttrString(_pymsg, "presence_vector");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->presence_vector = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // utc_time
    PyObject * field = PyObject_GetAttrString(_pymsg, "utc_time");
    if (!field) {
      return false;
    }
    if (!j2735_v2x_msgs__msg__d_date_time__convert_from_py(field, &ros_message->utc_time)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // lon
    PyObject * field = PyObject_GetAttrString(_pymsg, "lon");
    if (!field) {
      return false;
    }
    if (!carma_v2x_msgs__msg__longitude__convert_from_py(field, &ros_message->lon)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // lat
    PyObject * field = PyObject_GetAttrString(_pymsg, "lat");
    if (!field) {
      return false;
    }
    if (!carma_v2x_msgs__msg__latitude__convert_from_py(field, &ros_message->lat)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // elevation
    PyObject * field = PyObject_GetAttrString(_pymsg, "elevation");
    if (!field) {
      return false;
    }
    if (!carma_v2x_msgs__msg__elevation__convert_from_py(field, &ros_message->elevation)) {
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
  {  // speed
    PyObject * field = PyObject_GetAttrString(_pymsg, "speed");
    if (!field) {
      return false;
    }
    if (!carma_v2x_msgs__msg__transmission_and_speed__convert_from_py(field, &ros_message->speed)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // pos_accuracy
    PyObject * field = PyObject_GetAttrString(_pymsg, "pos_accuracy");
    if (!field) {
      return false;
    }
    if (!carma_v2x_msgs__msg__positional_accuracy__convert_from_py(field, &ros_message->pos_accuracy)) {
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
  {  // speed_confidence
    PyObject * field = PyObject_GetAttrString(_pymsg, "speed_confidence");
    if (!field) {
      return false;
    }
    if (!j2735_v2x_msgs__msg__speedand_headingand_throttle_confidence__convert_from_py(field, &ros_message->speed_confidence)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * carma_v2x_msgs__msg__full_position_vector__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of FullPositionVector */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("carma_v2x_msgs.msg._full_position_vector");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "FullPositionVector");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  carma_v2x_msgs__msg__FullPositionVector * ros_message = (carma_v2x_msgs__msg__FullPositionVector *)raw_ros_message;
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
  {  // utc_time
    PyObject * field = NULL;
    field = j2735_v2x_msgs__msg__d_date_time__convert_to_py(&ros_message->utc_time);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "utc_time", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // lon
    PyObject * field = NULL;
    field = carma_v2x_msgs__msg__longitude__convert_to_py(&ros_message->lon);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "lon", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // lat
    PyObject * field = NULL;
    field = carma_v2x_msgs__msg__latitude__convert_to_py(&ros_message->lat);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "lat", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // elevation
    PyObject * field = NULL;
    field = carma_v2x_msgs__msg__elevation__convert_to_py(&ros_message->elevation);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "elevation", field);
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
  {  // speed
    PyObject * field = NULL;
    field = carma_v2x_msgs__msg__transmission_and_speed__convert_to_py(&ros_message->speed);
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
  {  // pos_accuracy
    PyObject * field = NULL;
    field = carma_v2x_msgs__msg__positional_accuracy__convert_to_py(&ros_message->pos_accuracy);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "pos_accuracy", field);
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
  {  // speed_confidence
    PyObject * field = NULL;
    field = j2735_v2x_msgs__msg__speedand_headingand_throttle_confidence__convert_to_py(&ros_message->speed_confidence);
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

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
