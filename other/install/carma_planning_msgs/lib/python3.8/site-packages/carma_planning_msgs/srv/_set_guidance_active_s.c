// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from carma_planning_msgs:srv/SetGuidanceActive.idl
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
#include "carma_planning_msgs/srv/detail/set_guidance_active__struct.h"
#include "carma_planning_msgs/srv/detail/set_guidance_active__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool carma_planning_msgs__srv__set_guidance_active__request__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[71];
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
    assert(strncmp("carma_planning_msgs.srv._set_guidance_active.SetGuidanceActive_Request", full_classname_dest, 70) == 0);
  }
  carma_planning_msgs__srv__SetGuidanceActive_Request * ros_message = _ros_message;
  {  // guidance_active
    PyObject * field = PyObject_GetAttrString(_pymsg, "guidance_active");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->guidance_active = (Py_True == field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * carma_planning_msgs__srv__set_guidance_active__request__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of SetGuidanceActive_Request */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("carma_planning_msgs.srv._set_guidance_active");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "SetGuidanceActive_Request");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  carma_planning_msgs__srv__SetGuidanceActive_Request * ros_message = (carma_planning_msgs__srv__SetGuidanceActive_Request *)raw_ros_message;
  {  // guidance_active
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->guidance_active ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "guidance_active", field);
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
// #include "carma_planning_msgs/srv/detail/set_guidance_active__struct.h"
// already included above
// #include "carma_planning_msgs/srv/detail/set_guidance_active__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool carma_planning_msgs__srv__set_guidance_active__response__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[72];
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
    assert(strncmp("carma_planning_msgs.srv._set_guidance_active.SetGuidanceActive_Response", full_classname_dest, 71) == 0);
  }
  carma_planning_msgs__srv__SetGuidanceActive_Response * ros_message = _ros_message;
  {  // guidance_status
    PyObject * field = PyObject_GetAttrString(_pymsg, "guidance_status");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->guidance_status = (Py_True == field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * carma_planning_msgs__srv__set_guidance_active__response__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of SetGuidanceActive_Response */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("carma_planning_msgs.srv._set_guidance_active");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "SetGuidanceActive_Response");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  carma_planning_msgs__srv__SetGuidanceActive_Response * ros_message = (carma_planning_msgs__srv__SetGuidanceActive_Response *)raw_ros_message;
  {  // guidance_status
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->guidance_status ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "guidance_status", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
