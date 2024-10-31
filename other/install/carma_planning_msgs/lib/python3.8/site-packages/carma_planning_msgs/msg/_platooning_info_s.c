// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from carma_planning_msgs:msg/PlatooningInfo.idl
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
#include "carma_planning_msgs/msg/detail/platooning_info__struct.h"
#include "carma_planning_msgs/msg/detail/platooning_info__functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool carma_planning_msgs__msg__platooning_info__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[56];
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
    assert(strncmp("carma_planning_msgs.msg._platooning_info.PlatooningInfo", full_classname_dest, 55) == 0);
  }
  carma_planning_msgs__msg__PlatooningInfo * ros_message = _ros_message;
  {  // state
    PyObject * field = PyObject_GetAttrString(_pymsg, "state");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->state = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // platoon_id
    PyObject * field = PyObject_GetAttrString(_pymsg, "platoon_id");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->platoon_id, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // size
    PyObject * field = PyObject_GetAttrString(_pymsg, "size");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->size = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // size_limit
    PyObject * field = PyObject_GetAttrString(_pymsg, "size_limit");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->size_limit = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // leader_id
    PyObject * field = PyObject_GetAttrString(_pymsg, "leader_id");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->leader_id, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // leader_downtrack_distance
    PyObject * field = PyObject_GetAttrString(_pymsg, "leader_downtrack_distance");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->leader_downtrack_distance = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // leader_cmd_speed
    PyObject * field = PyObject_GetAttrString(_pymsg, "leader_cmd_speed");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->leader_cmd_speed = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // host_platoon_position
    PyObject * field = PyObject_GetAttrString(_pymsg, "host_platoon_position");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->host_platoon_position = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // host_cmd_speed
    PyObject * field = PyObject_GetAttrString(_pymsg, "host_cmd_speed");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->host_cmd_speed = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // desired_gap
    PyObject * field = PyObject_GetAttrString(_pymsg, "desired_gap");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->desired_gap = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // actual_gap
    PyObject * field = PyObject_GetAttrString(_pymsg, "actual_gap");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->actual_gap = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // current_predecessor_time_headway_sum
    PyObject * field = PyObject_GetAttrString(_pymsg, "current_predecessor_time_headway_sum");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->current_predecessor_time_headway_sum = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // predecessor_speed
    PyObject * field = PyObject_GetAttrString(_pymsg, "predecessor_speed");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->predecessor_speed = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // predecessor_position
    PyObject * field = PyObject_GetAttrString(_pymsg, "predecessor_position");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->predecessor_position = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // is_create_gap
    PyObject * field = PyObject_GetAttrString(_pymsg, "is_create_gap");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->is_create_gap = (Py_True == field);
    Py_DECREF(field);
  }
  {  // create_gap_adjuster
    PyObject * field = PyObject_GetAttrString(_pymsg, "create_gap_adjuster");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->create_gap_adjuster = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * carma_planning_msgs__msg__platooning_info__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of PlatooningInfo */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("carma_planning_msgs.msg._platooning_info");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "PlatooningInfo");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  carma_planning_msgs__msg__PlatooningInfo * ros_message = (carma_planning_msgs__msg__PlatooningInfo *)raw_ros_message;
  {  // state
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->state);
    {
      int rc = PyObject_SetAttrString(_pymessage, "state", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // platoon_id
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->platoon_id.data,
      strlen(ros_message->platoon_id.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "platoon_id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // size
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->size);
    {
      int rc = PyObject_SetAttrString(_pymessage, "size", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // size_limit
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->size_limit);
    {
      int rc = PyObject_SetAttrString(_pymessage, "size_limit", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // leader_id
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->leader_id.data,
      strlen(ros_message->leader_id.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "leader_id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // leader_downtrack_distance
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->leader_downtrack_distance);
    {
      int rc = PyObject_SetAttrString(_pymessage, "leader_downtrack_distance", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // leader_cmd_speed
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->leader_cmd_speed);
    {
      int rc = PyObject_SetAttrString(_pymessage, "leader_cmd_speed", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // host_platoon_position
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->host_platoon_position);
    {
      int rc = PyObject_SetAttrString(_pymessage, "host_platoon_position", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // host_cmd_speed
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->host_cmd_speed);
    {
      int rc = PyObject_SetAttrString(_pymessage, "host_cmd_speed", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // desired_gap
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->desired_gap);
    {
      int rc = PyObject_SetAttrString(_pymessage, "desired_gap", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // actual_gap
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->actual_gap);
    {
      int rc = PyObject_SetAttrString(_pymessage, "actual_gap", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // current_predecessor_time_headway_sum
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->current_predecessor_time_headway_sum);
    {
      int rc = PyObject_SetAttrString(_pymessage, "current_predecessor_time_headway_sum", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // predecessor_speed
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->predecessor_speed);
    {
      int rc = PyObject_SetAttrString(_pymessage, "predecessor_speed", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // predecessor_position
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->predecessor_position);
    {
      int rc = PyObject_SetAttrString(_pymessage, "predecessor_position", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // is_create_gap
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->is_create_gap ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "is_create_gap", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // create_gap_adjuster
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->create_gap_adjuster);
    {
      int rc = PyObject_SetAttrString(_pymessage, "create_gap_adjuster", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
