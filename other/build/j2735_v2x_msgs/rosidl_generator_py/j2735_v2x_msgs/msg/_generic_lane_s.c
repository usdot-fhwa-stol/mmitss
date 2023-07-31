// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from j2735_v2x_msgs:msg/GenericLane.idl
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
#include "j2735_v2x_msgs/msg/detail/generic_lane__struct.h"
#include "j2735_v2x_msgs/msg/detail/generic_lane__functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"

bool j2735_v2x_msgs__msg__lane_attributes__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * j2735_v2x_msgs__msg__lane_attributes__convert_to_py(void * raw_ros_message);
bool j2735_v2x_msgs__msg__allowed_maneuvers__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * j2735_v2x_msgs__msg__allowed_maneuvers__convert_to_py(void * raw_ros_message);
bool j2735_v2x_msgs__msg__node_list_xy__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * j2735_v2x_msgs__msg__node_list_xy__convert_to_py(void * raw_ros_message);
bool j2735_v2x_msgs__msg__connects_to_list__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * j2735_v2x_msgs__msg__connects_to_list__convert_to_py(void * raw_ros_message);
bool j2735_v2x_msgs__msg__overlay_lane_list__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * j2735_v2x_msgs__msg__overlay_lane_list__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool j2735_v2x_msgs__msg__generic_lane__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[45];
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
    assert(strncmp("j2735_v2x_msgs.msg._generic_lane.GenericLane", full_classname_dest, 44) == 0);
  }
  j2735_v2x_msgs__msg__GenericLane * ros_message = _ros_message;
  {  // lane_id
    PyObject * field = PyObject_GetAttrString(_pymsg, "lane_id");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->lane_id = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // name
    PyObject * field = PyObject_GetAttrString(_pymsg, "name");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->name, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // name_exists
    PyObject * field = PyObject_GetAttrString(_pymsg, "name_exists");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->name_exists = (Py_True == field);
    Py_DECREF(field);
  }
  {  // ingress_approach
    PyObject * field = PyObject_GetAttrString(_pymsg, "ingress_approach");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->ingress_approach = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // ingress_approach_exists
    PyObject * field = PyObject_GetAttrString(_pymsg, "ingress_approach_exists");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->ingress_approach_exists = (Py_True == field);
    Py_DECREF(field);
  }
  {  // egress_approach
    PyObject * field = PyObject_GetAttrString(_pymsg, "egress_approach");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->egress_approach = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // egress_approach_exists
    PyObject * field = PyObject_GetAttrString(_pymsg, "egress_approach_exists");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->egress_approach_exists = (Py_True == field);
    Py_DECREF(field);
  }
  {  // lane_attributes
    PyObject * field = PyObject_GetAttrString(_pymsg, "lane_attributes");
    if (!field) {
      return false;
    }
    if (!j2735_v2x_msgs__msg__lane_attributes__convert_from_py(field, &ros_message->lane_attributes)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // maneuvers
    PyObject * field = PyObject_GetAttrString(_pymsg, "maneuvers");
    if (!field) {
      return false;
    }
    if (!j2735_v2x_msgs__msg__allowed_maneuvers__convert_from_py(field, &ros_message->maneuvers)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // maneuvers_exists
    PyObject * field = PyObject_GetAttrString(_pymsg, "maneuvers_exists");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->maneuvers_exists = (Py_True == field);
    Py_DECREF(field);
  }
  {  // node_list
    PyObject * field = PyObject_GetAttrString(_pymsg, "node_list");
    if (!field) {
      return false;
    }
    if (!j2735_v2x_msgs__msg__node_list_xy__convert_from_py(field, &ros_message->node_list)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // connects_to
    PyObject * field = PyObject_GetAttrString(_pymsg, "connects_to");
    if (!field) {
      return false;
    }
    if (!j2735_v2x_msgs__msg__connects_to_list__convert_from_py(field, &ros_message->connects_to)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // connects_to_exists
    PyObject * field = PyObject_GetAttrString(_pymsg, "connects_to_exists");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->connects_to_exists = (Py_True == field);
    Py_DECREF(field);
  }
  {  // overlay_lane_list
    PyObject * field = PyObject_GetAttrString(_pymsg, "overlay_lane_list");
    if (!field) {
      return false;
    }
    if (!j2735_v2x_msgs__msg__overlay_lane_list__convert_from_py(field, &ros_message->overlay_lane_list)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // overlay_lane_list_exists
    PyObject * field = PyObject_GetAttrString(_pymsg, "overlay_lane_list_exists");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->overlay_lane_list_exists = (Py_True == field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * j2735_v2x_msgs__msg__generic_lane__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of GenericLane */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("j2735_v2x_msgs.msg._generic_lane");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "GenericLane");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  j2735_v2x_msgs__msg__GenericLane * ros_message = (j2735_v2x_msgs__msg__GenericLane *)raw_ros_message;
  {  // lane_id
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->lane_id);
    {
      int rc = PyObject_SetAttrString(_pymessage, "lane_id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // name
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->name.data,
      strlen(ros_message->name.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "name", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // name_exists
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->name_exists ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "name_exists", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ingress_approach
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->ingress_approach);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ingress_approach", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ingress_approach_exists
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->ingress_approach_exists ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ingress_approach_exists", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // egress_approach
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->egress_approach);
    {
      int rc = PyObject_SetAttrString(_pymessage, "egress_approach", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // egress_approach_exists
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->egress_approach_exists ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "egress_approach_exists", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // lane_attributes
    PyObject * field = NULL;
    field = j2735_v2x_msgs__msg__lane_attributes__convert_to_py(&ros_message->lane_attributes);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "lane_attributes", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // maneuvers
    PyObject * field = NULL;
    field = j2735_v2x_msgs__msg__allowed_maneuvers__convert_to_py(&ros_message->maneuvers);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "maneuvers", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // maneuvers_exists
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->maneuvers_exists ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "maneuvers_exists", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // node_list
    PyObject * field = NULL;
    field = j2735_v2x_msgs__msg__node_list_xy__convert_to_py(&ros_message->node_list);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "node_list", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // connects_to
    PyObject * field = NULL;
    field = j2735_v2x_msgs__msg__connects_to_list__convert_to_py(&ros_message->connects_to);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "connects_to", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // connects_to_exists
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->connects_to_exists ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "connects_to_exists", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // overlay_lane_list
    PyObject * field = NULL;
    field = j2735_v2x_msgs__msg__overlay_lane_list__convert_to_py(&ros_message->overlay_lane_list);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "overlay_lane_list", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // overlay_lane_list_exists
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->overlay_lane_list_exists ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "overlay_lane_list_exists", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
