// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from carma_planning_msgs:msg/UpcomingLaneChangeStatus.idl
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
#include "carma_planning_msgs/msg/detail/upcoming_lane_change_status__struct.h"
#include "carma_planning_msgs/msg/detail/upcoming_lane_change_status__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool carma_planning_msgs__msg__upcoming_lane_change_status__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[78];
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
    assert(strncmp("carma_planning_msgs.msg._upcoming_lane_change_status.UpcomingLaneChangeStatus", full_classname_dest, 77) == 0);
  }
  carma_planning_msgs__msg__UpcomingLaneChangeStatus * ros_message = _ros_message;
  {  // downtrack_until_lanechange
    PyObject * field = PyObject_GetAttrString(_pymsg, "downtrack_until_lanechange");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->downtrack_until_lanechange = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // lane_change
    PyObject * field = PyObject_GetAttrString(_pymsg, "lane_change");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->lane_change = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * carma_planning_msgs__msg__upcoming_lane_change_status__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of UpcomingLaneChangeStatus */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("carma_planning_msgs.msg._upcoming_lane_change_status");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "UpcomingLaneChangeStatus");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  carma_planning_msgs__msg__UpcomingLaneChangeStatus * ros_message = (carma_planning_msgs__msg__UpcomingLaneChangeStatus *)raw_ros_message;
  {  // downtrack_until_lanechange
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->downtrack_until_lanechange);
    {
      int rc = PyObject_SetAttrString(_pymessage, "downtrack_until_lanechange", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // lane_change
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->lane_change);
    {
      int rc = PyObject_SetAttrString(_pymessage, "lane_change", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
