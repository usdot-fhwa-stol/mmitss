// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from carma_msgs:srv/SetTrafficEvent.idl
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
#include "carma_msgs/srv/detail/set_traffic_event__struct.h"
#include "carma_msgs/srv/detail/set_traffic_event__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool carma_msgs__srv__set_traffic_event__request__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[58];
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
    assert(strncmp("carma_msgs.srv._set_traffic_event.SetTrafficEvent_Request", full_classname_dest, 57) == 0);
  }
  carma_msgs__srv__SetTrafficEvent_Request * ros_message = _ros_message;
  {  // up_track
    PyObject * field = PyObject_GetAttrString(_pymsg, "up_track");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->up_track = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // down_track
    PyObject * field = PyObject_GetAttrString(_pymsg, "down_track");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->down_track = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // minimum_gap
    PyObject * field = PyObject_GetAttrString(_pymsg, "minimum_gap");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->minimum_gap = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // advisory_speed
    PyObject * field = PyObject_GetAttrString(_pymsg, "advisory_speed");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->advisory_speed = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * carma_msgs__srv__set_traffic_event__request__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of SetTrafficEvent_Request */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("carma_msgs.srv._set_traffic_event");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "SetTrafficEvent_Request");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  carma_msgs__srv__SetTrafficEvent_Request * ros_message = (carma_msgs__srv__SetTrafficEvent_Request *)raw_ros_message;
  {  // up_track
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->up_track);
    {
      int rc = PyObject_SetAttrString(_pymessage, "up_track", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // down_track
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->down_track);
    {
      int rc = PyObject_SetAttrString(_pymessage, "down_track", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // minimum_gap
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->minimum_gap);
    {
      int rc = PyObject_SetAttrString(_pymessage, "minimum_gap", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // advisory_speed
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->advisory_speed);
    {
      int rc = PyObject_SetAttrString(_pymessage, "advisory_speed", field);
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
// #include "carma_msgs/srv/detail/set_traffic_event__struct.h"
// already included above
// #include "carma_msgs/srv/detail/set_traffic_event__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool carma_msgs__srv__set_traffic_event__response__convert_from_py(PyObject * _pymsg, void * _ros_message)
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
    assert(strncmp("carma_msgs.srv._set_traffic_event.SetTrafficEvent_Response", full_classname_dest, 58) == 0);
  }
  carma_msgs__srv__SetTrafficEvent_Response * ros_message = _ros_message;
  {  // success
    PyObject * field = PyObject_GetAttrString(_pymsg, "success");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->success = (Py_True == field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * carma_msgs__srv__set_traffic_event__response__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of SetTrafficEvent_Response */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("carma_msgs.srv._set_traffic_event");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "SetTrafficEvent_Response");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  carma_msgs__srv__SetTrafficEvent_Response * ros_message = (carma_msgs__srv__SetTrafficEvent_Response *)raw_ros_message;
  {  // success
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->success ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "success", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
