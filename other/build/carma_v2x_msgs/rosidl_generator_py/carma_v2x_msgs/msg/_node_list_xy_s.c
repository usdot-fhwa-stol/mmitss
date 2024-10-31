// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from carma_v2x_msgs:msg/NodeListXY.idl
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
#include "carma_v2x_msgs/msg/detail/node_list_xy__struct.h"
#include "carma_v2x_msgs/msg/detail/node_list_xy__functions.h"

bool carma_v2x_msgs__msg__node_set_xy__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * carma_v2x_msgs__msg__node_set_xy__convert_to_py(void * raw_ros_message);
bool carma_v2x_msgs__msg__computed_lane__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * carma_v2x_msgs__msg__computed_lane__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool carma_v2x_msgs__msg__node_list_xy__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[44];
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
    assert(strncmp("carma_v2x_msgs.msg._node_list_xy.NodeListXY", full_classname_dest, 43) == 0);
  }
  carma_v2x_msgs__msg__NodeListXY * ros_message = _ros_message;
  {  // choice
    PyObject * field = PyObject_GetAttrString(_pymsg, "choice");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->choice = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // nodes
    PyObject * field = PyObject_GetAttrString(_pymsg, "nodes");
    if (!field) {
      return false;
    }
    if (!carma_v2x_msgs__msg__node_set_xy__convert_from_py(field, &ros_message->nodes)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // computed
    PyObject * field = PyObject_GetAttrString(_pymsg, "computed");
    if (!field) {
      return false;
    }
    if (!carma_v2x_msgs__msg__computed_lane__convert_from_py(field, &ros_message->computed)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * carma_v2x_msgs__msg__node_list_xy__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of NodeListXY */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("carma_v2x_msgs.msg._node_list_xy");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "NodeListXY");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  carma_v2x_msgs__msg__NodeListXY * ros_message = (carma_v2x_msgs__msg__NodeListXY *)raw_ros_message;
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
  {  // nodes
    PyObject * field = NULL;
    field = carma_v2x_msgs__msg__node_set_xy__convert_to_py(&ros_message->nodes);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "nodes", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // computed
    PyObject * field = NULL;
    field = carma_v2x_msgs__msg__computed_lane__convert_to_py(&ros_message->computed);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "computed", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
