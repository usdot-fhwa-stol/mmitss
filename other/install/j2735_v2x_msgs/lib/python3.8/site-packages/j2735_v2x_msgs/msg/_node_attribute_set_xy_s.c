// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from j2735_v2x_msgs:msg/NodeAttributeSetXY.idl
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
#include "j2735_v2x_msgs/msg/detail/node_attribute_set_xy__struct.h"
#include "j2735_v2x_msgs/msg/detail/node_attribute_set_xy__functions.h"

bool j2735_v2x_msgs__msg__node_attribute_xy_list__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * j2735_v2x_msgs__msg__node_attribute_xy_list__convert_to_py(void * raw_ros_message);
bool j2735_v2x_msgs__msg__segment_attribute_xy_list__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * j2735_v2x_msgs__msg__segment_attribute_xy_list__convert_to_py(void * raw_ros_message);
bool j2735_v2x_msgs__msg__segment_attribute_xy_list__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * j2735_v2x_msgs__msg__segment_attribute_xy_list__convert_to_py(void * raw_ros_message);
bool j2735_v2x_msgs__msg__lane_data_attribute_list__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * j2735_v2x_msgs__msg__lane_data_attribute_list__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool j2735_v2x_msgs__msg__node_attribute_set_xy__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[61];
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
    assert(strncmp("j2735_v2x_msgs.msg._node_attribute_set_xy.NodeAttributeSetXY", full_classname_dest, 60) == 0);
  }
  j2735_v2x_msgs__msg__NodeAttributeSetXY * ros_message = _ros_message;
  {  // local_node
    PyObject * field = PyObject_GetAttrString(_pymsg, "local_node");
    if (!field) {
      return false;
    }
    if (!j2735_v2x_msgs__msg__node_attribute_xy_list__convert_from_py(field, &ros_message->local_node)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // local_node_exists
    PyObject * field = PyObject_GetAttrString(_pymsg, "local_node_exists");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->local_node_exists = (Py_True == field);
    Py_DECREF(field);
  }
  {  // disabled
    PyObject * field = PyObject_GetAttrString(_pymsg, "disabled");
    if (!field) {
      return false;
    }
    if (!j2735_v2x_msgs__msg__segment_attribute_xy_list__convert_from_py(field, &ros_message->disabled)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // disabled_exists
    PyObject * field = PyObject_GetAttrString(_pymsg, "disabled_exists");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->disabled_exists = (Py_True == field);
    Py_DECREF(field);
  }
  {  // enabled
    PyObject * field = PyObject_GetAttrString(_pymsg, "enabled");
    if (!field) {
      return false;
    }
    if (!j2735_v2x_msgs__msg__segment_attribute_xy_list__convert_from_py(field, &ros_message->enabled)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // enabled_exists
    PyObject * field = PyObject_GetAttrString(_pymsg, "enabled_exists");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->enabled_exists = (Py_True == field);
    Py_DECREF(field);
  }
  {  // data
    PyObject * field = PyObject_GetAttrString(_pymsg, "data");
    if (!field) {
      return false;
    }
    if (!j2735_v2x_msgs__msg__lane_data_attribute_list__convert_from_py(field, &ros_message->data)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // data_exists
    PyObject * field = PyObject_GetAttrString(_pymsg, "data_exists");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->data_exists = (Py_True == field);
    Py_DECREF(field);
  }
  {  // d_width
    PyObject * field = PyObject_GetAttrString(_pymsg, "d_width");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->d_width = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // d_width_exists
    PyObject * field = PyObject_GetAttrString(_pymsg, "d_width_exists");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->d_width_exists = (Py_True == field);
    Py_DECREF(field);
  }
  {  // d_elevation
    PyObject * field = PyObject_GetAttrString(_pymsg, "d_elevation");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->d_elevation = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // d_elevation_exists
    PyObject * field = PyObject_GetAttrString(_pymsg, "d_elevation_exists");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->d_elevation_exists = (Py_True == field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * j2735_v2x_msgs__msg__node_attribute_set_xy__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of NodeAttributeSetXY */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("j2735_v2x_msgs.msg._node_attribute_set_xy");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "NodeAttributeSetXY");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  j2735_v2x_msgs__msg__NodeAttributeSetXY * ros_message = (j2735_v2x_msgs__msg__NodeAttributeSetXY *)raw_ros_message;
  {  // local_node
    PyObject * field = NULL;
    field = j2735_v2x_msgs__msg__node_attribute_xy_list__convert_to_py(&ros_message->local_node);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "local_node", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // local_node_exists
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->local_node_exists ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "local_node_exists", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // disabled
    PyObject * field = NULL;
    field = j2735_v2x_msgs__msg__segment_attribute_xy_list__convert_to_py(&ros_message->disabled);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "disabled", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // disabled_exists
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->disabled_exists ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "disabled_exists", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // enabled
    PyObject * field = NULL;
    field = j2735_v2x_msgs__msg__segment_attribute_xy_list__convert_to_py(&ros_message->enabled);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "enabled", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // enabled_exists
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->enabled_exists ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "enabled_exists", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // data
    PyObject * field = NULL;
    field = j2735_v2x_msgs__msg__lane_data_attribute_list__convert_to_py(&ros_message->data);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "data", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // data_exists
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->data_exists ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "data_exists", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // d_width
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->d_width);
    {
      int rc = PyObject_SetAttrString(_pymessage, "d_width", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // d_width_exists
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->d_width_exists ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "d_width_exists", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // d_elevation
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->d_elevation);
    {
      int rc = PyObject_SetAttrString(_pymessage, "d_elevation", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // d_elevation_exists
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->d_elevation_exists ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "d_elevation_exists", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
