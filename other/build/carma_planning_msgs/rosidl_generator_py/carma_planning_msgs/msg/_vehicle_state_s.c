// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from carma_planning_msgs:msg/VehicleState.idl
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
#include "carma_planning_msgs/msg/detail/vehicle_state__struct.h"
#include "carma_planning_msgs/msg/detail/vehicle_state__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool carma_planning_msgs__msg__vehicle_state__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[52];
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
    assert(strncmp("carma_planning_msgs.msg._vehicle_state.VehicleState", full_classname_dest, 51) == 0);
  }
  carma_planning_msgs__msg__VehicleState * ros_message = _ros_message;
  {  // x_pos_global
    PyObject * field = PyObject_GetAttrString(_pymsg, "x_pos_global");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->x_pos_global = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // y_pos_global
    PyObject * field = PyObject_GetAttrString(_pymsg, "y_pos_global");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->y_pos_global = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // orientation
    PyObject * field = PyObject_GetAttrString(_pymsg, "orientation");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->orientation = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // longitudinal_vel
    PyObject * field = PyObject_GetAttrString(_pymsg, "longitudinal_vel");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->longitudinal_vel = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // lateral_vel
    PyObject * field = PyObject_GetAttrString(_pymsg, "lateral_vel");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->lateral_vel = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // yaw_rate
    PyObject * field = PyObject_GetAttrString(_pymsg, "yaw_rate");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->yaw_rate = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // front_wheel_rotation_rate
    PyObject * field = PyObject_GetAttrString(_pymsg, "front_wheel_rotation_rate");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->front_wheel_rotation_rate = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // rear_wheel_rotation_rate
    PyObject * field = PyObject_GetAttrString(_pymsg, "rear_wheel_rotation_rate");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->rear_wheel_rotation_rate = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // steering_angle
    PyObject * field = PyObject_GetAttrString(_pymsg, "steering_angle");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->steering_angle = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // trailer_angle
    PyObject * field = PyObject_GetAttrString(_pymsg, "trailer_angle");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->trailer_angle = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // prev_vel_cmd
    PyObject * field = PyObject_GetAttrString(_pymsg, "prev_vel_cmd");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->prev_vel_cmd = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // prev_steering_cmd
    PyObject * field = PyObject_GetAttrString(_pymsg, "prev_steering_cmd");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->prev_steering_cmd = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * carma_planning_msgs__msg__vehicle_state__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of VehicleState */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("carma_planning_msgs.msg._vehicle_state");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "VehicleState");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  carma_planning_msgs__msg__VehicleState * ros_message = (carma_planning_msgs__msg__VehicleState *)raw_ros_message;
  {  // x_pos_global
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->x_pos_global);
    {
      int rc = PyObject_SetAttrString(_pymessage, "x_pos_global", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // y_pos_global
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->y_pos_global);
    {
      int rc = PyObject_SetAttrString(_pymessage, "y_pos_global", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // orientation
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->orientation);
    {
      int rc = PyObject_SetAttrString(_pymessage, "orientation", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // longitudinal_vel
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->longitudinal_vel);
    {
      int rc = PyObject_SetAttrString(_pymessage, "longitudinal_vel", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // lateral_vel
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->lateral_vel);
    {
      int rc = PyObject_SetAttrString(_pymessage, "lateral_vel", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // yaw_rate
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->yaw_rate);
    {
      int rc = PyObject_SetAttrString(_pymessage, "yaw_rate", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // front_wheel_rotation_rate
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->front_wheel_rotation_rate);
    {
      int rc = PyObject_SetAttrString(_pymessage, "front_wheel_rotation_rate", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // rear_wheel_rotation_rate
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->rear_wheel_rotation_rate);
    {
      int rc = PyObject_SetAttrString(_pymessage, "rear_wheel_rotation_rate", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // steering_angle
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->steering_angle);
    {
      int rc = PyObject_SetAttrString(_pymessage, "steering_angle", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // trailer_angle
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->trailer_angle);
    {
      int rc = PyObject_SetAttrString(_pymessage, "trailer_angle", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // prev_vel_cmd
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->prev_vel_cmd);
    {
      int rc = PyObject_SetAttrString(_pymessage, "prev_vel_cmd", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // prev_steering_cmd
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->prev_steering_cmd);
    {
      int rc = PyObject_SetAttrString(_pymessage, "prev_steering_cmd", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
