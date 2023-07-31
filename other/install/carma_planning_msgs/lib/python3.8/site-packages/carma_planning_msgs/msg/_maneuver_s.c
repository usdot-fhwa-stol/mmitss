// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from carma_planning_msgs:msg/Maneuver.idl
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
#include "carma_planning_msgs/msg/detail/maneuver__struct.h"
#include "carma_planning_msgs/msg/detail/maneuver__functions.h"

bool carma_planning_msgs__msg__lane_following_maneuver__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * carma_planning_msgs__msg__lane_following_maneuver__convert_to_py(void * raw_ros_message);
bool carma_planning_msgs__msg__lane_change_maneuver__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * carma_planning_msgs__msg__lane_change_maneuver__convert_to_py(void * raw_ros_message);
bool carma_planning_msgs__msg__intersection_transit_straight_maneuver__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * carma_planning_msgs__msg__intersection_transit_straight_maneuver__convert_to_py(void * raw_ros_message);
bool carma_planning_msgs__msg__intersection_transit_left_turn_maneuver__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * carma_planning_msgs__msg__intersection_transit_left_turn_maneuver__convert_to_py(void * raw_ros_message);
bool carma_planning_msgs__msg__intersection_transit_right_turn_maneuver__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * carma_planning_msgs__msg__intersection_transit_right_turn_maneuver__convert_to_py(void * raw_ros_message);
bool carma_planning_msgs__msg__stop_and_wait_maneuver__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * carma_planning_msgs__msg__stop_and_wait_maneuver__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool carma_planning_msgs__msg__maneuver__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[43];
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
    assert(strncmp("carma_planning_msgs.msg._maneuver.Maneuver", full_classname_dest, 42) == 0);
  }
  carma_planning_msgs__msg__Maneuver * ros_message = _ros_message;
  {  // type
    PyObject * field = PyObject_GetAttrString(_pymsg, "type");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->type = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // lane_following_maneuver
    PyObject * field = PyObject_GetAttrString(_pymsg, "lane_following_maneuver");
    if (!field) {
      return false;
    }
    if (!carma_planning_msgs__msg__lane_following_maneuver__convert_from_py(field, &ros_message->lane_following_maneuver)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // lane_change_maneuver
    PyObject * field = PyObject_GetAttrString(_pymsg, "lane_change_maneuver");
    if (!field) {
      return false;
    }
    if (!carma_planning_msgs__msg__lane_change_maneuver__convert_from_py(field, &ros_message->lane_change_maneuver)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // intersection_transit_straight_maneuver
    PyObject * field = PyObject_GetAttrString(_pymsg, "intersection_transit_straight_maneuver");
    if (!field) {
      return false;
    }
    if (!carma_planning_msgs__msg__intersection_transit_straight_maneuver__convert_from_py(field, &ros_message->intersection_transit_straight_maneuver)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // intersection_transit_left_turn_maneuver
    PyObject * field = PyObject_GetAttrString(_pymsg, "intersection_transit_left_turn_maneuver");
    if (!field) {
      return false;
    }
    if (!carma_planning_msgs__msg__intersection_transit_left_turn_maneuver__convert_from_py(field, &ros_message->intersection_transit_left_turn_maneuver)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // intersection_transit_right_turn_maneuver
    PyObject * field = PyObject_GetAttrString(_pymsg, "intersection_transit_right_turn_maneuver");
    if (!field) {
      return false;
    }
    if (!carma_planning_msgs__msg__intersection_transit_right_turn_maneuver__convert_from_py(field, &ros_message->intersection_transit_right_turn_maneuver)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // stop_and_wait_maneuver
    PyObject * field = PyObject_GetAttrString(_pymsg, "stop_and_wait_maneuver");
    if (!field) {
      return false;
    }
    if (!carma_planning_msgs__msg__stop_and_wait_maneuver__convert_from_py(field, &ros_message->stop_and_wait_maneuver)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * carma_planning_msgs__msg__maneuver__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of Maneuver */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("carma_planning_msgs.msg._maneuver");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "Maneuver");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  carma_planning_msgs__msg__Maneuver * ros_message = (carma_planning_msgs__msg__Maneuver *)raw_ros_message;
  {  // type
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->type);
    {
      int rc = PyObject_SetAttrString(_pymessage, "type", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // lane_following_maneuver
    PyObject * field = NULL;
    field = carma_planning_msgs__msg__lane_following_maneuver__convert_to_py(&ros_message->lane_following_maneuver);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "lane_following_maneuver", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // lane_change_maneuver
    PyObject * field = NULL;
    field = carma_planning_msgs__msg__lane_change_maneuver__convert_to_py(&ros_message->lane_change_maneuver);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "lane_change_maneuver", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // intersection_transit_straight_maneuver
    PyObject * field = NULL;
    field = carma_planning_msgs__msg__intersection_transit_straight_maneuver__convert_to_py(&ros_message->intersection_transit_straight_maneuver);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "intersection_transit_straight_maneuver", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // intersection_transit_left_turn_maneuver
    PyObject * field = NULL;
    field = carma_planning_msgs__msg__intersection_transit_left_turn_maneuver__convert_to_py(&ros_message->intersection_transit_left_turn_maneuver);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "intersection_transit_left_turn_maneuver", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // intersection_transit_right_turn_maneuver
    PyObject * field = NULL;
    field = carma_planning_msgs__msg__intersection_transit_right_turn_maneuver__convert_to_py(&ros_message->intersection_transit_right_turn_maneuver);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "intersection_transit_right_turn_maneuver", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // stop_and_wait_maneuver
    PyObject * field = NULL;
    field = carma_planning_msgs__msg__stop_and_wait_maneuver__convert_to_py(&ros_message->stop_and_wait_maneuver);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "stop_and_wait_maneuver", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
