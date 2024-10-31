// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from carma_v2x_msgs:msg/ObstacleDetection.idl
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
#include "carma_v2x_msgs/msg/detail/obstacle_detection__struct.h"
#include "carma_v2x_msgs/msg/detail/obstacle_detection__functions.h"

bool carma_v2x_msgs__msg__obstacle_distance__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * carma_v2x_msgs__msg__obstacle_distance__convert_to_py(void * raw_ros_message);
bool carma_v2x_msgs__msg__obstacle_direction__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * carma_v2x_msgs__msg__obstacle_direction__convert_to_py(void * raw_ros_message);
ROSIDL_GENERATOR_C_IMPORT
bool j2735_v2x_msgs__msg__d_date_time__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * j2735_v2x_msgs__msg__d_date_time__convert_to_py(void * raw_ros_message);
ROSIDL_GENERATOR_C_IMPORT
bool j2735_v2x_msgs__msg__iti_scodes__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * j2735_v2x_msgs__msg__iti_scodes__convert_to_py(void * raw_ros_message);
ROSIDL_GENERATOR_C_IMPORT
bool j2735_v2x_msgs__msg__itis_generic_locations__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * j2735_v2x_msgs__msg__itis_generic_locations__convert_to_py(void * raw_ros_message);
ROSIDL_GENERATOR_C_IMPORT
bool j2735_v2x_msgs__msg__vertical_acceleration_threshold__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * j2735_v2x_msgs__msg__vertical_acceleration_threshold__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool carma_v2x_msgs__msg__obstacle_detection__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[57];
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
    assert(strncmp("carma_v2x_msgs.msg._obstacle_detection.ObstacleDetection", full_classname_dest, 56) == 0);
  }
  carma_v2x_msgs__msg__ObstacleDetection * ros_message = _ros_message;
  {  // presence_vector
    PyObject * field = PyObject_GetAttrString(_pymsg, "presence_vector");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->presence_vector = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // ob_dist
    PyObject * field = PyObject_GetAttrString(_pymsg, "ob_dist");
    if (!field) {
      return false;
    }
    if (!carma_v2x_msgs__msg__obstacle_distance__convert_from_py(field, &ros_message->ob_dist)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // ob_direct
    PyObject * field = PyObject_GetAttrString(_pymsg, "ob_direct");
    if (!field) {
      return false;
    }
    if (!carma_v2x_msgs__msg__obstacle_direction__convert_from_py(field, &ros_message->ob_direct)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // date_time
    PyObject * field = PyObject_GetAttrString(_pymsg, "date_time");
    if (!field) {
      return false;
    }
    if (!j2735_v2x_msgs__msg__d_date_time__convert_from_py(field, &ros_message->date_time)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // description
    PyObject * field = PyObject_GetAttrString(_pymsg, "description");
    if (!field) {
      return false;
    }
    if (!j2735_v2x_msgs__msg__iti_scodes__convert_from_py(field, &ros_message->description)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // location_details
    PyObject * field = PyObject_GetAttrString(_pymsg, "location_details");
    if (!field) {
      return false;
    }
    if (!j2735_v2x_msgs__msg__itis_generic_locations__convert_from_py(field, &ros_message->location_details)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // vert_event
    PyObject * field = PyObject_GetAttrString(_pymsg, "vert_event");
    if (!field) {
      return false;
    }
    if (!j2735_v2x_msgs__msg__vertical_acceleration_threshold__convert_from_py(field, &ros_message->vert_event)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * carma_v2x_msgs__msg__obstacle_detection__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of ObstacleDetection */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("carma_v2x_msgs.msg._obstacle_detection");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "ObstacleDetection");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  carma_v2x_msgs__msg__ObstacleDetection * ros_message = (carma_v2x_msgs__msg__ObstacleDetection *)raw_ros_message;
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
  {  // ob_dist
    PyObject * field = NULL;
    field = carma_v2x_msgs__msg__obstacle_distance__convert_to_py(&ros_message->ob_dist);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "ob_dist", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ob_direct
    PyObject * field = NULL;
    field = carma_v2x_msgs__msg__obstacle_direction__convert_to_py(&ros_message->ob_direct);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "ob_direct", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // date_time
    PyObject * field = NULL;
    field = j2735_v2x_msgs__msg__d_date_time__convert_to_py(&ros_message->date_time);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "date_time", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // description
    PyObject * field = NULL;
    field = j2735_v2x_msgs__msg__iti_scodes__convert_to_py(&ros_message->description);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "description", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // location_details
    PyObject * field = NULL;
    field = j2735_v2x_msgs__msg__itis_generic_locations__convert_to_py(&ros_message->location_details);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "location_details", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // vert_event
    PyObject * field = NULL;
    field = j2735_v2x_msgs__msg__vertical_acceleration_threshold__convert_to_py(&ros_message->vert_event);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "vert_event", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
