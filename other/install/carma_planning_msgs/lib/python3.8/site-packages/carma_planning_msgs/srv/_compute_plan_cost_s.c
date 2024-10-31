// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from carma_planning_msgs:srv/ComputePlanCost.idl
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
#include "carma_planning_msgs/srv/detail/compute_plan_cost__struct.h"
#include "carma_planning_msgs/srv/detail/compute_plan_cost__functions.h"

bool carma_planning_msgs__msg__maneuver_plan__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * carma_planning_msgs__msg__maneuver_plan__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool carma_planning_msgs__srv__compute_plan_cost__request__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[67];
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
    assert(strncmp("carma_planning_msgs.srv._compute_plan_cost.ComputePlanCost_Request", full_classname_dest, 66) == 0);
  }
  carma_planning_msgs__srv__ComputePlanCost_Request * ros_message = _ros_message;
  {  // maneuver_plan
    PyObject * field = PyObject_GetAttrString(_pymsg, "maneuver_plan");
    if (!field) {
      return false;
    }
    if (!carma_planning_msgs__msg__maneuver_plan__convert_from_py(field, &ros_message->maneuver_plan)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * carma_planning_msgs__srv__compute_plan_cost__request__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of ComputePlanCost_Request */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("carma_planning_msgs.srv._compute_plan_cost");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "ComputePlanCost_Request");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  carma_planning_msgs__srv__ComputePlanCost_Request * ros_message = (carma_planning_msgs__srv__ComputePlanCost_Request *)raw_ros_message;
  {  // maneuver_plan
    PyObject * field = NULL;
    field = carma_planning_msgs__msg__maneuver_plan__convert_to_py(&ros_message->maneuver_plan);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "maneuver_plan", field);
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
// #include "carma_planning_msgs/srv/detail/compute_plan_cost__struct.h"
// already included above
// #include "carma_planning_msgs/srv/detail/compute_plan_cost__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool carma_planning_msgs__srv__compute_plan_cost__response__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[68];
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
    assert(strncmp("carma_planning_msgs.srv._compute_plan_cost.ComputePlanCost_Response", full_classname_dest, 67) == 0);
  }
  carma_planning_msgs__srv__ComputePlanCost_Response * ros_message = _ros_message;
  {  // plan_cost
    PyObject * field = PyObject_GetAttrString(_pymsg, "plan_cost");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->plan_cost = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * carma_planning_msgs__srv__compute_plan_cost__response__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of ComputePlanCost_Response */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("carma_planning_msgs.srv._compute_plan_cost");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "ComputePlanCost_Response");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  carma_planning_msgs__srv__ComputePlanCost_Response * ros_message = (carma_planning_msgs__srv__ComputePlanCost_Response *)raw_ros_message;
  {  // plan_cost
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->plan_cost);
    {
      int rc = PyObject_SetAttrString(_pymessage, "plan_cost", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
