// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from carma_v2x_msgs:msg/LaneDataAttribute.idl
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
#include "carma_v2x_msgs/msg/detail/lane_data_attribute__struct.h"
#include "carma_v2x_msgs/msg/detail/lane_data_attribute__functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"

// Nested array functions includes
#include "carma_v2x_msgs/msg/detail/regulatory_speed_limit__functions.h"
// end nested array functions include
bool carma_v2x_msgs__msg__regulatory_speed_limit__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * carma_v2x_msgs__msg__regulatory_speed_limit__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool carma_v2x_msgs__msg__lane_data_attribute__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[58];
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
    assert(strncmp("carma_v2x_msgs.msg._lane_data_attribute.LaneDataAttribute", full_classname_dest, 57) == 0);
  }
  carma_v2x_msgs__msg__LaneDataAttribute * ros_message = _ros_message;
  {  // choice
    PyObject * field = PyObject_GetAttrString(_pymsg, "choice");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->choice = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // path_end_point_angle
    PyObject * field = PyObject_GetAttrString(_pymsg, "path_end_point_angle");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->path_end_point_angle = (int16_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // lane_crown_point_center
    PyObject * field = PyObject_GetAttrString(_pymsg, "lane_crown_point_center");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->lane_crown_point_center = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // lane_crown_point_right
    PyObject * field = PyObject_GetAttrString(_pymsg, "lane_crown_point_right");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->lane_crown_point_right = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // lane_crown_point_left
    PyObject * field = PyObject_GetAttrString(_pymsg, "lane_crown_point_left");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->lane_crown_point_left = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // lane_angle
    PyObject * field = PyObject_GetAttrString(_pymsg, "lane_angle");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->lane_angle = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // speed_limits
    PyObject * field = PyObject_GetAttrString(_pymsg, "speed_limits");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'speed_limits'");
    if (!seq_field) {
      Py_DECREF(field);
      return false;
    }
    Py_ssize_t size = PySequence_Size(field);
    if (-1 == size) {
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    if (!carma_v2x_msgs__msg__RegulatorySpeedLimit__Sequence__init(&(ros_message->speed_limits), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create carma_v2x_msgs__msg__RegulatorySpeedLimit__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    carma_v2x_msgs__msg__RegulatorySpeedLimit * dest = ros_message->speed_limits.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!carma_v2x_msgs__msg__regulatory_speed_limit__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * carma_v2x_msgs__msg__lane_data_attribute__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of LaneDataAttribute */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("carma_v2x_msgs.msg._lane_data_attribute");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "LaneDataAttribute");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  carma_v2x_msgs__msg__LaneDataAttribute * ros_message = (carma_v2x_msgs__msg__LaneDataAttribute *)raw_ros_message;
  {  // choice
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->choice);
    {
      int rc = PyObject_SetAttrString(_pymessage, "choice", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // path_end_point_angle
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->path_end_point_angle);
    {
      int rc = PyObject_SetAttrString(_pymessage, "path_end_point_angle", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // lane_crown_point_center
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->lane_crown_point_center);
    {
      int rc = PyObject_SetAttrString(_pymessage, "lane_crown_point_center", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // lane_crown_point_right
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->lane_crown_point_right);
    {
      int rc = PyObject_SetAttrString(_pymessage, "lane_crown_point_right", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // lane_crown_point_left
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->lane_crown_point_left);
    {
      int rc = PyObject_SetAttrString(_pymessage, "lane_crown_point_left", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // lane_angle
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->lane_angle);
    {
      int rc = PyObject_SetAttrString(_pymessage, "lane_angle", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // speed_limits
    PyObject * field = NULL;
    size_t size = ros_message->speed_limits.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    carma_v2x_msgs__msg__RegulatorySpeedLimit * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->speed_limits.data[i]);
      PyObject * pyitem = carma_v2x_msgs__msg__regulatory_speed_limit__convert_to_py(item);
      if (!pyitem) {
        Py_DECREF(field);
        return NULL;
      }
      int rc = PyList_SetItem(field, i, pyitem);
      (void)rc;
      assert(rc == 0);
    }
    assert(PySequence_Check(field));
    {
      int rc = PyObject_SetAttrString(_pymessage, "speed_limits", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
