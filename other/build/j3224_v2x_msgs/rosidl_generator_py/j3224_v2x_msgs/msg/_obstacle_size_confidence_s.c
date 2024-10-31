// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from j3224_v2x_msgs:msg/ObstacleSizeConfidence.idl
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
#include "j3224_v2x_msgs/msg/detail/obstacle_size_confidence__struct.h"
#include "j3224_v2x_msgs/msg/detail/obstacle_size_confidence__functions.h"

bool j3224_v2x_msgs__msg__size_value_confidence__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * j3224_v2x_msgs__msg__size_value_confidence__convert_to_py(void * raw_ros_message);
bool j3224_v2x_msgs__msg__size_value_confidence__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * j3224_v2x_msgs__msg__size_value_confidence__convert_to_py(void * raw_ros_message);
bool j3224_v2x_msgs__msg__size_value_confidence__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * j3224_v2x_msgs__msg__size_value_confidence__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool j3224_v2x_msgs__msg__obstacle_size_confidence__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[68];
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
    assert(strncmp("j3224_v2x_msgs.msg._obstacle_size_confidence.ObstacleSizeConfidence", full_classname_dest, 67) == 0);
  }
  j3224_v2x_msgs__msg__ObstacleSizeConfidence * ros_message = _ros_message;
  {  // width_confidence
    PyObject * field = PyObject_GetAttrString(_pymsg, "width_confidence");
    if (!field) {
      return false;
    }
    if (!j3224_v2x_msgs__msg__size_value_confidence__convert_from_py(field, &ros_message->width_confidence)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // length_confidence
    PyObject * field = PyObject_GetAttrString(_pymsg, "length_confidence");
    if (!field) {
      return false;
    }
    if (!j3224_v2x_msgs__msg__size_value_confidence__convert_from_py(field, &ros_message->length_confidence)) {
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
  {  // height_confidence
    PyObject * field = PyObject_GetAttrString(_pymsg, "height_confidence");
    if (!field) {
      return false;
    }
    if (!j3224_v2x_msgs__msg__size_value_confidence__convert_from_py(field, &ros_message->height_confidence)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * j3224_v2x_msgs__msg__obstacle_size_confidence__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of ObstacleSizeConfidence */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("j3224_v2x_msgs.msg._obstacle_size_confidence");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "ObstacleSizeConfidence");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  j3224_v2x_msgs__msg__ObstacleSizeConfidence * ros_message = (j3224_v2x_msgs__msg__ObstacleSizeConfidence *)raw_ros_message;
  {  // width_confidence
    PyObject * field = NULL;
    field = j3224_v2x_msgs__msg__size_value_confidence__convert_to_py(&ros_message->width_confidence);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "width_confidence", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // length_confidence
    PyObject * field = NULL;
    field = j3224_v2x_msgs__msg__size_value_confidence__convert_to_py(&ros_message->length_confidence);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "length_confidence", field);
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
  {  // height_confidence
    PyObject * field = NULL;
    field = j3224_v2x_msgs__msg__size_value_confidence__convert_to_py(&ros_message->height_confidence);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "height_confidence", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
