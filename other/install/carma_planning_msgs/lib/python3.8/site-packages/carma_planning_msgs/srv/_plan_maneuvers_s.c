// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from carma_planning_msgs:srv/PlanManeuvers.idl
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
#include "carma_planning_msgs/srv/detail/plan_maneuvers__struct.h"
#include "carma_planning_msgs/srv/detail/plan_maneuvers__functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__header__convert_to_py(void * raw_ros_message);
bool carma_planning_msgs__msg__maneuver_plan__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * carma_planning_msgs__msg__maneuver_plan__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool carma_planning_msgs__srv__plan_maneuvers__request__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[62];
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
    assert(strncmp("carma_planning_msgs.srv._plan_maneuvers.PlanManeuvers_Request", full_classname_dest, 61) == 0);
  }
  carma_planning_msgs__srv__PlanManeuvers_Request * ros_message = _ros_message;
  {  // header
    PyObject * field = PyObject_GetAttrString(_pymsg, "header");
    if (!field) {
      return false;
    }
    if (!std_msgs__msg__header__convert_from_py(field, &ros_message->header)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // prior_plan
    PyObject * field = PyObject_GetAttrString(_pymsg, "prior_plan");
    if (!field) {
      return false;
    }
    if (!carma_planning_msgs__msg__maneuver_plan__convert_from_py(field, &ros_message->prior_plan)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // veh_x
    PyObject * field = PyObject_GetAttrString(_pymsg, "veh_x");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->veh_x = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // veh_y
    PyObject * field = PyObject_GetAttrString(_pymsg, "veh_y");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->veh_y = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // veh_downtrack
    PyObject * field = PyObject_GetAttrString(_pymsg, "veh_downtrack");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->veh_downtrack = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // veh_logitudinal_velocity
    PyObject * field = PyObject_GetAttrString(_pymsg, "veh_logitudinal_velocity");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->veh_logitudinal_velocity = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // veh_lane_id
    PyObject * field = PyObject_GetAttrString(_pymsg, "veh_lane_id");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->veh_lane_id, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * carma_planning_msgs__srv__plan_maneuvers__request__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of PlanManeuvers_Request */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("carma_planning_msgs.srv._plan_maneuvers");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "PlanManeuvers_Request");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  carma_planning_msgs__srv__PlanManeuvers_Request * ros_message = (carma_planning_msgs__srv__PlanManeuvers_Request *)raw_ros_message;
  {  // header
    PyObject * field = NULL;
    field = std_msgs__msg__header__convert_to_py(&ros_message->header);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "header", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // prior_plan
    PyObject * field = NULL;
    field = carma_planning_msgs__msg__maneuver_plan__convert_to_py(&ros_message->prior_plan);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "prior_plan", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // veh_x
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->veh_x);
    {
      int rc = PyObject_SetAttrString(_pymessage, "veh_x", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // veh_y
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->veh_y);
    {
      int rc = PyObject_SetAttrString(_pymessage, "veh_y", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // veh_downtrack
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->veh_downtrack);
    {
      int rc = PyObject_SetAttrString(_pymessage, "veh_downtrack", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // veh_logitudinal_velocity
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->veh_logitudinal_velocity);
    {
      int rc = PyObject_SetAttrString(_pymessage, "veh_logitudinal_velocity", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // veh_lane_id
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->veh_lane_id.data,
      strlen(ros_message->veh_lane_id.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "veh_lane_id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}

#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
// already included above
// #include <Python.h>
// already included above
// #include <stdbool.h>
// already included above
// #include "numpy/ndarrayobject.h"
// already included above
// #include "rosidl_runtime_c/visibility_control.h"
// already included above
// #include "carma_planning_msgs/srv/detail/plan_maneuvers__struct.h"
// already included above
// #include "carma_planning_msgs/srv/detail/plan_maneuvers__functions.h"

bool carma_planning_msgs__msg__maneuver_plan__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * carma_planning_msgs__msg__maneuver_plan__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool carma_planning_msgs__srv__plan_maneuvers__response__convert_from_py(PyObject * _pymsg, void * _ros_message)
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
    assert(strncmp("carma_planning_msgs.srv._plan_maneuvers.PlanManeuvers_Response", full_classname_dest, 62) == 0);
  }
  carma_planning_msgs__srv__PlanManeuvers_Response * ros_message = _ros_message;
  {  // new_plan
    PyObject * field = PyObject_GetAttrString(_pymsg, "new_plan");
    if (!field) {
      return false;
    }
    if (!carma_planning_msgs__msg__maneuver_plan__convert_from_py(field, &ros_message->new_plan)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * carma_planning_msgs__srv__plan_maneuvers__response__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of PlanManeuvers_Response */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("carma_planning_msgs.srv._plan_maneuvers");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "PlanManeuvers_Response");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  carma_planning_msgs__srv__PlanManeuvers_Response * ros_message = (carma_planning_msgs__srv__PlanManeuvers_Response *)raw_ros_message;
  {  // new_plan
    PyObject * field = NULL;
    field = carma_planning_msgs__msg__maneuver_plan__convert_to_py(&ros_message->new_plan);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "new_plan", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
