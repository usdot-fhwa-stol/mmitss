// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from j2735_v2x_msgs:msg/Connection.idl
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
#include "j2735_v2x_msgs/msg/detail/connection__struct.h"
#include "j2735_v2x_msgs/msg/detail/connection__functions.h"

bool j2735_v2x_msgs__msg__connecting_lane__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * j2735_v2x_msgs__msg__connecting_lane__convert_to_py(void * raw_ros_message);
bool j2735_v2x_msgs__msg__intersection_reference_id__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * j2735_v2x_msgs__msg__intersection_reference_id__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool j2735_v2x_msgs__msg__connection__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[42];
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
    assert(strncmp("j2735_v2x_msgs.msg._connection.Connection", full_classname_dest, 41) == 0);
  }
  j2735_v2x_msgs__msg__Connection * ros_message = _ros_message;
  {  // connecting_lane
    PyObject * field = PyObject_GetAttrString(_pymsg, "connecting_lane");
    if (!field) {
      return false;
    }
    if (!j2735_v2x_msgs__msg__connecting_lane__convert_from_py(field, &ros_message->connecting_lane)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // remote_intersection
    PyObject * field = PyObject_GetAttrString(_pymsg, "remote_intersection");
    if (!field) {
      return false;
    }
    if (!j2735_v2x_msgs__msg__intersection_reference_id__convert_from_py(field, &ros_message->remote_intersection)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // remote_intersection_exists
    PyObject * field = PyObject_GetAttrString(_pymsg, "remote_intersection_exists");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->remote_intersection_exists = (Py_True == field);
    Py_DECREF(field);
  }
  {  // signal_group
    PyObject * field = PyObject_GetAttrString(_pymsg, "signal_group");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->signal_group = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // signal_group_exists
    PyObject * field = PyObject_GetAttrString(_pymsg, "signal_group_exists");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->signal_group_exists = (Py_True == field);
    Py_DECREF(field);
  }
  {  // user_class
    PyObject * field = PyObject_GetAttrString(_pymsg, "user_class");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->user_class = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // user_class_exists
    PyObject * field = PyObject_GetAttrString(_pymsg, "user_class_exists");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->user_class_exists = (Py_True == field);
    Py_DECREF(field);
  }
  {  // connection_id
    PyObject * field = PyObject_GetAttrString(_pymsg, "connection_id");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->connection_id = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // connection_id_exists
    PyObject * field = PyObject_GetAttrString(_pymsg, "connection_id_exists");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->connection_id_exists = (Py_True == field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * j2735_v2x_msgs__msg__connection__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of Connection */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("j2735_v2x_msgs.msg._connection");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "Connection");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  j2735_v2x_msgs__msg__Connection * ros_message = (j2735_v2x_msgs__msg__Connection *)raw_ros_message;
  {  // connecting_lane
    PyObject * field = NULL;
    field = j2735_v2x_msgs__msg__connecting_lane__convert_to_py(&ros_message->connecting_lane);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "connecting_lane", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // remote_intersection
    PyObject * field = NULL;
    field = j2735_v2x_msgs__msg__intersection_reference_id__convert_to_py(&ros_message->remote_intersection);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "remote_intersection", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // remote_intersection_exists
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->remote_intersection_exists ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "remote_intersection_exists", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // signal_group
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->signal_group);
    {
      int rc = PyObject_SetAttrString(_pymessage, "signal_group", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // signal_group_exists
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->signal_group_exists ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "signal_group_exists", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // user_class
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->user_class);
    {
      int rc = PyObject_SetAttrString(_pymessage, "user_class", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // user_class_exists
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->user_class_exists ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "user_class_exists", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // connection_id
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->connection_id);
    {
      int rc = PyObject_SetAttrString(_pymessage, "connection_id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // connection_id_exists
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->connection_id_exists ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "connection_id_exists", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
