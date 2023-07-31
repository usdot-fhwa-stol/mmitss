// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from j2735_v2x_msgs:msg/IntersectionGeometry.idl
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
#include "j2735_v2x_msgs/msg/detail/intersection_geometry__struct.h"
#include "j2735_v2x_msgs/msg/detail/intersection_geometry__functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"

bool j2735_v2x_msgs__msg__intersection_reference_id__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * j2735_v2x_msgs__msg__intersection_reference_id__convert_to_py(void * raw_ros_message);
bool j2735_v2x_msgs__msg__position3_d__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * j2735_v2x_msgs__msg__position3_d__convert_to_py(void * raw_ros_message);
bool j2735_v2x_msgs__msg__speed_limit_list__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * j2735_v2x_msgs__msg__speed_limit_list__convert_to_py(void * raw_ros_message);
bool j2735_v2x_msgs__msg__lane_list__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * j2735_v2x_msgs__msg__lane_list__convert_to_py(void * raw_ros_message);
bool j2735_v2x_msgs__msg__preempt_priority_list__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * j2735_v2x_msgs__msg__preempt_priority_list__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool j2735_v2x_msgs__msg__intersection_geometry__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[63];
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
    assert(strncmp("j2735_v2x_msgs.msg._intersection_geometry.IntersectionGeometry", full_classname_dest, 62) == 0);
  }
  j2735_v2x_msgs__msg__IntersectionGeometry * ros_message = _ros_message;
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
  {  // id
    PyObject * field = PyObject_GetAttrString(_pymsg, "id");
    if (!field) {
      return false;
    }
    if (!j2735_v2x_msgs__msg__intersection_reference_id__convert_from_py(field, &ros_message->id)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // revision
    PyObject * field = PyObject_GetAttrString(_pymsg, "revision");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->revision = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // ref_point
    PyObject * field = PyObject_GetAttrString(_pymsg, "ref_point");
    if (!field) {
      return false;
    }
    if (!j2735_v2x_msgs__msg__position3_d__convert_from_py(field, &ros_message->ref_point)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // lane_width
    PyObject * field = PyObject_GetAttrString(_pymsg, "lane_width");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->lane_width = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // lane_width_exists
    PyObject * field = PyObject_GetAttrString(_pymsg, "lane_width_exists");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->lane_width_exists = (Py_True == field);
    Py_DECREF(field);
  }
  {  // speed_limits
    PyObject * field = PyObject_GetAttrString(_pymsg, "speed_limits");
    if (!field) {
      return false;
    }
    if (!j2735_v2x_msgs__msg__speed_limit_list__convert_from_py(field, &ros_message->speed_limits)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // speed_limits_exists
    PyObject * field = PyObject_GetAttrString(_pymsg, "speed_limits_exists");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->speed_limits_exists = (Py_True == field);
    Py_DECREF(field);
  }
  {  // lane_set
    PyObject * field = PyObject_GetAttrString(_pymsg, "lane_set");
    if (!field) {
      return false;
    }
    if (!j2735_v2x_msgs__msg__lane_list__convert_from_py(field, &ros_message->lane_set)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // preempt_priority_data
    PyObject * field = PyObject_GetAttrString(_pymsg, "preempt_priority_data");
    if (!field) {
      return false;
    }
    if (!j2735_v2x_msgs__msg__preempt_priority_list__convert_from_py(field, &ros_message->preempt_priority_data)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // preempt_priority_data_exists
    PyObject * field = PyObject_GetAttrString(_pymsg, "preempt_priority_data_exists");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->preempt_priority_data_exists = (Py_True == field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * j2735_v2x_msgs__msg__intersection_geometry__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of IntersectionGeometry */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("j2735_v2x_msgs.msg._intersection_geometry");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "IntersectionGeometry");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  j2735_v2x_msgs__msg__IntersectionGeometry * ros_message = (j2735_v2x_msgs__msg__IntersectionGeometry *)raw_ros_message;
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
  {  // id
    PyObject * field = NULL;
    field = j2735_v2x_msgs__msg__intersection_reference_id__convert_to_py(&ros_message->id);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // revision
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->revision);
    {
      int rc = PyObject_SetAttrString(_pymessage, "revision", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ref_point
    PyObject * field = NULL;
    field = j2735_v2x_msgs__msg__position3_d__convert_to_py(&ros_message->ref_point);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "ref_point", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // lane_width
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->lane_width);
    {
      int rc = PyObject_SetAttrString(_pymessage, "lane_width", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // lane_width_exists
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->lane_width_exists ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "lane_width_exists", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // speed_limits
    PyObject * field = NULL;
    field = j2735_v2x_msgs__msg__speed_limit_list__convert_to_py(&ros_message->speed_limits);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "speed_limits", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // speed_limits_exists
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->speed_limits_exists ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "speed_limits_exists", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // lane_set
    PyObject * field = NULL;
    field = j2735_v2x_msgs__msg__lane_list__convert_to_py(&ros_message->lane_set);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "lane_set", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // preempt_priority_data
    PyObject * field = NULL;
    field = j2735_v2x_msgs__msg__preempt_priority_list__convert_to_py(&ros_message->preempt_priority_data);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "preempt_priority_data", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // preempt_priority_data_exists
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->preempt_priority_data_exists ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "preempt_priority_data_exists", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
