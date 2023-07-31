// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from j2735_v2x_msgs:msg/NodeOffsetPointXY.idl
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
#include "j2735_v2x_msgs/msg/detail/node_offset_point_xy__struct.h"
#include "j2735_v2x_msgs/msg/detail/node_offset_point_xy__functions.h"

bool j2735_v2x_msgs__msg__node_xy20b__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * j2735_v2x_msgs__msg__node_xy20b__convert_to_py(void * raw_ros_message);
bool j2735_v2x_msgs__msg__node_xy22b__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * j2735_v2x_msgs__msg__node_xy22b__convert_to_py(void * raw_ros_message);
bool j2735_v2x_msgs__msg__node_xy24b__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * j2735_v2x_msgs__msg__node_xy24b__convert_to_py(void * raw_ros_message);
bool j2735_v2x_msgs__msg__node_xy26b__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * j2735_v2x_msgs__msg__node_xy26b__convert_to_py(void * raw_ros_message);
bool j2735_v2x_msgs__msg__node_xy28b__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * j2735_v2x_msgs__msg__node_xy28b__convert_to_py(void * raw_ros_message);
bool j2735_v2x_msgs__msg__node_xy32b__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * j2735_v2x_msgs__msg__node_xy32b__convert_to_py(void * raw_ros_message);
bool j2735_v2x_msgs__msg__node_l_lm_d64b__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * j2735_v2x_msgs__msg__node_l_lm_d64b__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool j2735_v2x_msgs__msg__node_offset_point_xy__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[59];
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
    assert(strncmp("j2735_v2x_msgs.msg._node_offset_point_xy.NodeOffsetPointXY", full_classname_dest, 58) == 0);
  }
  j2735_v2x_msgs__msg__NodeOffsetPointXY * ros_message = _ros_message;
  {  // choice
    PyObject * field = PyObject_GetAttrString(_pymsg, "choice");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->choice = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // node_xy1
    PyObject * field = PyObject_GetAttrString(_pymsg, "node_xy1");
    if (!field) {
      return false;
    }
    if (!j2735_v2x_msgs__msg__node_xy20b__convert_from_py(field, &ros_message->node_xy1)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // node_xy2
    PyObject * field = PyObject_GetAttrString(_pymsg, "node_xy2");
    if (!field) {
      return false;
    }
    if (!j2735_v2x_msgs__msg__node_xy22b__convert_from_py(field, &ros_message->node_xy2)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // node_xy3
    PyObject * field = PyObject_GetAttrString(_pymsg, "node_xy3");
    if (!field) {
      return false;
    }
    if (!j2735_v2x_msgs__msg__node_xy24b__convert_from_py(field, &ros_message->node_xy3)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // node_xy4
    PyObject * field = PyObject_GetAttrString(_pymsg, "node_xy4");
    if (!field) {
      return false;
    }
    if (!j2735_v2x_msgs__msg__node_xy26b__convert_from_py(field, &ros_message->node_xy4)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // node_xy5
    PyObject * field = PyObject_GetAttrString(_pymsg, "node_xy5");
    if (!field) {
      return false;
    }
    if (!j2735_v2x_msgs__msg__node_xy28b__convert_from_py(field, &ros_message->node_xy5)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // node_xy6
    PyObject * field = PyObject_GetAttrString(_pymsg, "node_xy6");
    if (!field) {
      return false;
    }
    if (!j2735_v2x_msgs__msg__node_xy32b__convert_from_py(field, &ros_message->node_xy6)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // node_latlon
    PyObject * field = PyObject_GetAttrString(_pymsg, "node_latlon");
    if (!field) {
      return false;
    }
    if (!j2735_v2x_msgs__msg__node_l_lm_d64b__convert_from_py(field, &ros_message->node_latlon)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * j2735_v2x_msgs__msg__node_offset_point_xy__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of NodeOffsetPointXY */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("j2735_v2x_msgs.msg._node_offset_point_xy");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "NodeOffsetPointXY");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  j2735_v2x_msgs__msg__NodeOffsetPointXY * ros_message = (j2735_v2x_msgs__msg__NodeOffsetPointXY *)raw_ros_message;
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
  {  // node_xy1
    PyObject * field = NULL;
    field = j2735_v2x_msgs__msg__node_xy20b__convert_to_py(&ros_message->node_xy1);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "node_xy1", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // node_xy2
    PyObject * field = NULL;
    field = j2735_v2x_msgs__msg__node_xy22b__convert_to_py(&ros_message->node_xy2);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "node_xy2", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // node_xy3
    PyObject * field = NULL;
    field = j2735_v2x_msgs__msg__node_xy24b__convert_to_py(&ros_message->node_xy3);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "node_xy3", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // node_xy4
    PyObject * field = NULL;
    field = j2735_v2x_msgs__msg__node_xy26b__convert_to_py(&ros_message->node_xy4);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "node_xy4", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // node_xy5
    PyObject * field = NULL;
    field = j2735_v2x_msgs__msg__node_xy28b__convert_to_py(&ros_message->node_xy5);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "node_xy5", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // node_xy6
    PyObject * field = NULL;
    field = j2735_v2x_msgs__msg__node_xy32b__convert_to_py(&ros_message->node_xy6);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "node_xy6", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // node_latlon
    PyObject * field = NULL;
    field = j2735_v2x_msgs__msg__node_l_lm_d64b__convert_to_py(&ros_message->node_latlon);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "node_latlon", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
