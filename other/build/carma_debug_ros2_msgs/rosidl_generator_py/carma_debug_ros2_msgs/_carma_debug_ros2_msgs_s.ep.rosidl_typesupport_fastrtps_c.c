// generated from rosidl_generator_py/resource/_idl_pkg_typesupport_entry_point.c.em
// generated code does not contain a copyright notice
#include <Python.h>

static PyMethodDef carma_debug_ros2_msgs__methods[] = {
  {NULL, NULL, 0, NULL}  /* sentinel */
};

static struct PyModuleDef carma_debug_ros2_msgs__module = {
  PyModuleDef_HEAD_INIT,
  "_carma_debug_ros2_msgs_support",
  "_carma_debug_ros2_msgs_doc",
  -1,  /* -1 means that the module keeps state in global variables */
  carma_debug_ros2_msgs__methods,
  NULL,
  NULL,
  NULL,
  NULL,
};

#include <stdbool.h>
#include <stdint.h>
#include "rosidl_runtime_c/visibility_control.h"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_runtime_c/service_type_support_struct.h"
#include "rosidl_runtime_c/action_type_support_struct.h"
#include "carma_debug_ros2_msgs/msg/detail/lanelet_id_regulatory_element_pair__type_support.h"
#include "carma_debug_ros2_msgs/msg/detail/lanelet_id_regulatory_element_pair__struct.h"
#include "carma_debug_ros2_msgs/msg/detail/lanelet_id_regulatory_element_pair__functions.h"

static void * carma_debug_ros2_msgs__msg__lanelet_id_regulatory_element_pair__create_ros_message(void)
{
  return carma_debug_ros2_msgs__msg__LaneletIdRegulatoryElementPair__create();
}

static void carma_debug_ros2_msgs__msg__lanelet_id_regulatory_element_pair__destroy_ros_message(void * raw_ros_message)
{
  carma_debug_ros2_msgs__msg__LaneletIdRegulatoryElementPair * ros_message = (carma_debug_ros2_msgs__msg__LaneletIdRegulatoryElementPair *)raw_ros_message;
  carma_debug_ros2_msgs__msg__LaneletIdRegulatoryElementPair__destroy(ros_message);
}

ROSIDL_GENERATOR_C_IMPORT
bool carma_debug_ros2_msgs__msg__lanelet_id_regulatory_element_pair__convert_from_py(PyObject * _pymsg, void * ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * carma_debug_ros2_msgs__msg__lanelet_id_regulatory_element_pair__convert_to_py(void * raw_ros_message);


ROSIDL_GENERATOR_C_IMPORT
const rosidl_message_type_support_t *
ROSIDL_GET_MSG_TYPE_SUPPORT(carma_debug_ros2_msgs, msg, LaneletIdRegulatoryElementPair);

int8_t
_register_msg_type__msg__lanelet_id_regulatory_element_pair(PyObject * pymodule)
{
  int8_t err;

  PyObject * pyobject_create_ros_message = NULL;
  pyobject_create_ros_message = PyCapsule_New(
    (void *)&carma_debug_ros2_msgs__msg__lanelet_id_regulatory_element_pair__create_ros_message,
    NULL, NULL);
  if (!pyobject_create_ros_message) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "create_ros_message_msg__msg__lanelet_id_regulatory_element_pair",
    pyobject_create_ros_message);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_create_ros_message);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject * pyobject_destroy_ros_message = NULL;
  pyobject_destroy_ros_message = PyCapsule_New(
    (void *)&carma_debug_ros2_msgs__msg__lanelet_id_regulatory_element_pair__destroy_ros_message,
    NULL, NULL);
  if (!pyobject_destroy_ros_message) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "destroy_ros_message_msg__msg__lanelet_id_regulatory_element_pair",
    pyobject_destroy_ros_message);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_destroy_ros_message);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject * pyobject_convert_from_py = NULL;
  pyobject_convert_from_py = PyCapsule_New(
    (void *)&carma_debug_ros2_msgs__msg__lanelet_id_regulatory_element_pair__convert_from_py,
    NULL, NULL);
  if (!pyobject_convert_from_py) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "convert_from_py_msg__msg__lanelet_id_regulatory_element_pair",
    pyobject_convert_from_py);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_convert_from_py);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject * pyobject_convert_to_py = NULL;
  pyobject_convert_to_py = PyCapsule_New(
    (void *)&carma_debug_ros2_msgs__msg__lanelet_id_regulatory_element_pair__convert_to_py,
    NULL, NULL);
  if (!pyobject_convert_to_py) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "convert_to_py_msg__msg__lanelet_id_regulatory_element_pair",
    pyobject_convert_to_py);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_convert_to_py);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject * pyobject_type_support = NULL;
  pyobject_type_support = PyCapsule_New(
    (void *)ROSIDL_GET_MSG_TYPE_SUPPORT(carma_debug_ros2_msgs, msg, LaneletIdRegulatoryElementPair),
    NULL, NULL);
  if (!pyobject_type_support) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "type_support_msg__msg__lanelet_id_regulatory_element_pair",
    pyobject_type_support);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_type_support);
    // previously added objects will be removed when the module is destroyed
    return err;
  }
  return 0;
}

// already included above
// #include <stdbool.h>
// already included above
// #include <stdint.h>
// already included above
// #include "rosidl_runtime_c/visibility_control.h"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "rosidl_runtime_c/action_type_support_struct.h"
#include "carma_debug_ros2_msgs/msg/detail/map_update_readable__type_support.h"
#include "carma_debug_ros2_msgs/msg/detail/map_update_readable__struct.h"
#include "carma_debug_ros2_msgs/msg/detail/map_update_readable__functions.h"

static void * carma_debug_ros2_msgs__msg__map_update_readable__create_ros_message(void)
{
  return carma_debug_ros2_msgs__msg__MapUpdateReadable__create();
}

static void carma_debug_ros2_msgs__msg__map_update_readable__destroy_ros_message(void * raw_ros_message)
{
  carma_debug_ros2_msgs__msg__MapUpdateReadable * ros_message = (carma_debug_ros2_msgs__msg__MapUpdateReadable *)raw_ros_message;
  carma_debug_ros2_msgs__msg__MapUpdateReadable__destroy(ros_message);
}

ROSIDL_GENERATOR_C_IMPORT
bool carma_debug_ros2_msgs__msg__map_update_readable__convert_from_py(PyObject * _pymsg, void * ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * carma_debug_ros2_msgs__msg__map_update_readable__convert_to_py(void * raw_ros_message);


ROSIDL_GENERATOR_C_IMPORT
const rosidl_message_type_support_t *
ROSIDL_GET_MSG_TYPE_SUPPORT(carma_debug_ros2_msgs, msg, MapUpdateReadable);

int8_t
_register_msg_type__msg__map_update_readable(PyObject * pymodule)
{
  int8_t err;

  PyObject * pyobject_create_ros_message = NULL;
  pyobject_create_ros_message = PyCapsule_New(
    (void *)&carma_debug_ros2_msgs__msg__map_update_readable__create_ros_message,
    NULL, NULL);
  if (!pyobject_create_ros_message) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "create_ros_message_msg__msg__map_update_readable",
    pyobject_create_ros_message);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_create_ros_message);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject * pyobject_destroy_ros_message = NULL;
  pyobject_destroy_ros_message = PyCapsule_New(
    (void *)&carma_debug_ros2_msgs__msg__map_update_readable__destroy_ros_message,
    NULL, NULL);
  if (!pyobject_destroy_ros_message) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "destroy_ros_message_msg__msg__map_update_readable",
    pyobject_destroy_ros_message);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_destroy_ros_message);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject * pyobject_convert_from_py = NULL;
  pyobject_convert_from_py = PyCapsule_New(
    (void *)&carma_debug_ros2_msgs__msg__map_update_readable__convert_from_py,
    NULL, NULL);
  if (!pyobject_convert_from_py) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "convert_from_py_msg__msg__map_update_readable",
    pyobject_convert_from_py);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_convert_from_py);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject * pyobject_convert_to_py = NULL;
  pyobject_convert_to_py = PyCapsule_New(
    (void *)&carma_debug_ros2_msgs__msg__map_update_readable__convert_to_py,
    NULL, NULL);
  if (!pyobject_convert_to_py) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "convert_to_py_msg__msg__map_update_readable",
    pyobject_convert_to_py);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_convert_to_py);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject * pyobject_type_support = NULL;
  pyobject_type_support = PyCapsule_New(
    (void *)ROSIDL_GET_MSG_TYPE_SUPPORT(carma_debug_ros2_msgs, msg, MapUpdateReadable),
    NULL, NULL);
  if (!pyobject_type_support) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "type_support_msg__msg__map_update_readable",
    pyobject_type_support);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_type_support);
    // previously added objects will be removed when the module is destroyed
    return err;
  }
  return 0;
}

// already included above
// #include <stdbool.h>
// already included above
// #include <stdint.h>
// already included above
// #include "rosidl_runtime_c/visibility_control.h"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "rosidl_runtime_c/action_type_support_struct.h"
#include "carma_debug_ros2_msgs/msg/detail/regulatory_element__type_support.h"
#include "carma_debug_ros2_msgs/msg/detail/regulatory_element__struct.h"
#include "carma_debug_ros2_msgs/msg/detail/regulatory_element__functions.h"

static void * carma_debug_ros2_msgs__msg__regulatory_element__create_ros_message(void)
{
  return carma_debug_ros2_msgs__msg__RegulatoryElement__create();
}

static void carma_debug_ros2_msgs__msg__regulatory_element__destroy_ros_message(void * raw_ros_message)
{
  carma_debug_ros2_msgs__msg__RegulatoryElement * ros_message = (carma_debug_ros2_msgs__msg__RegulatoryElement *)raw_ros_message;
  carma_debug_ros2_msgs__msg__RegulatoryElement__destroy(ros_message);
}

ROSIDL_GENERATOR_C_IMPORT
bool carma_debug_ros2_msgs__msg__regulatory_element__convert_from_py(PyObject * _pymsg, void * ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * carma_debug_ros2_msgs__msg__regulatory_element__convert_to_py(void * raw_ros_message);


ROSIDL_GENERATOR_C_IMPORT
const rosidl_message_type_support_t *
ROSIDL_GET_MSG_TYPE_SUPPORT(carma_debug_ros2_msgs, msg, RegulatoryElement);

int8_t
_register_msg_type__msg__regulatory_element(PyObject * pymodule)
{
  int8_t err;

  PyObject * pyobject_create_ros_message = NULL;
  pyobject_create_ros_message = PyCapsule_New(
    (void *)&carma_debug_ros2_msgs__msg__regulatory_element__create_ros_message,
    NULL, NULL);
  if (!pyobject_create_ros_message) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "create_ros_message_msg__msg__regulatory_element",
    pyobject_create_ros_message);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_create_ros_message);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject * pyobject_destroy_ros_message = NULL;
  pyobject_destroy_ros_message = PyCapsule_New(
    (void *)&carma_debug_ros2_msgs__msg__regulatory_element__destroy_ros_message,
    NULL, NULL);
  if (!pyobject_destroy_ros_message) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "destroy_ros_message_msg__msg__regulatory_element",
    pyobject_destroy_ros_message);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_destroy_ros_message);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject * pyobject_convert_from_py = NULL;
  pyobject_convert_from_py = PyCapsule_New(
    (void *)&carma_debug_ros2_msgs__msg__regulatory_element__convert_from_py,
    NULL, NULL);
  if (!pyobject_convert_from_py) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "convert_from_py_msg__msg__regulatory_element",
    pyobject_convert_from_py);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_convert_from_py);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject * pyobject_convert_to_py = NULL;
  pyobject_convert_to_py = PyCapsule_New(
    (void *)&carma_debug_ros2_msgs__msg__regulatory_element__convert_to_py,
    NULL, NULL);
  if (!pyobject_convert_to_py) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "convert_to_py_msg__msg__regulatory_element",
    pyobject_convert_to_py);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_convert_to_py);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject * pyobject_type_support = NULL;
  pyobject_type_support = PyCapsule_New(
    (void *)ROSIDL_GET_MSG_TYPE_SUPPORT(carma_debug_ros2_msgs, msg, RegulatoryElement),
    NULL, NULL);
  if (!pyobject_type_support) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "type_support_msg__msg__regulatory_element",
    pyobject_type_support);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_type_support);
    // previously added objects will be removed when the module is destroyed
    return err;
  }
  return 0;
}

// already included above
// #include <stdbool.h>
// already included above
// #include <stdint.h>
// already included above
// #include "rosidl_runtime_c/visibility_control.h"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "rosidl_runtime_c/action_type_support_struct.h"
#include "carma_debug_ros2_msgs/msg/detail/trajectory_curvature_speeds__type_support.h"
#include "carma_debug_ros2_msgs/msg/detail/trajectory_curvature_speeds__struct.h"
#include "carma_debug_ros2_msgs/msg/detail/trajectory_curvature_speeds__functions.h"

static void * carma_debug_ros2_msgs__msg__trajectory_curvature_speeds__create_ros_message(void)
{
  return carma_debug_ros2_msgs__msg__TrajectoryCurvatureSpeeds__create();
}

static void carma_debug_ros2_msgs__msg__trajectory_curvature_speeds__destroy_ros_message(void * raw_ros_message)
{
  carma_debug_ros2_msgs__msg__TrajectoryCurvatureSpeeds * ros_message = (carma_debug_ros2_msgs__msg__TrajectoryCurvatureSpeeds *)raw_ros_message;
  carma_debug_ros2_msgs__msg__TrajectoryCurvatureSpeeds__destroy(ros_message);
}

ROSIDL_GENERATOR_C_IMPORT
bool carma_debug_ros2_msgs__msg__trajectory_curvature_speeds__convert_from_py(PyObject * _pymsg, void * ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * carma_debug_ros2_msgs__msg__trajectory_curvature_speeds__convert_to_py(void * raw_ros_message);


ROSIDL_GENERATOR_C_IMPORT
const rosidl_message_type_support_t *
ROSIDL_GET_MSG_TYPE_SUPPORT(carma_debug_ros2_msgs, msg, TrajectoryCurvatureSpeeds);

int8_t
_register_msg_type__msg__trajectory_curvature_speeds(PyObject * pymodule)
{
  int8_t err;

  PyObject * pyobject_create_ros_message = NULL;
  pyobject_create_ros_message = PyCapsule_New(
    (void *)&carma_debug_ros2_msgs__msg__trajectory_curvature_speeds__create_ros_message,
    NULL, NULL);
  if (!pyobject_create_ros_message) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "create_ros_message_msg__msg__trajectory_curvature_speeds",
    pyobject_create_ros_message);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_create_ros_message);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject * pyobject_destroy_ros_message = NULL;
  pyobject_destroy_ros_message = PyCapsule_New(
    (void *)&carma_debug_ros2_msgs__msg__trajectory_curvature_speeds__destroy_ros_message,
    NULL, NULL);
  if (!pyobject_destroy_ros_message) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "destroy_ros_message_msg__msg__trajectory_curvature_speeds",
    pyobject_destroy_ros_message);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_destroy_ros_message);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject * pyobject_convert_from_py = NULL;
  pyobject_convert_from_py = PyCapsule_New(
    (void *)&carma_debug_ros2_msgs__msg__trajectory_curvature_speeds__convert_from_py,
    NULL, NULL);
  if (!pyobject_convert_from_py) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "convert_from_py_msg__msg__trajectory_curvature_speeds",
    pyobject_convert_from_py);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_convert_from_py);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject * pyobject_convert_to_py = NULL;
  pyobject_convert_to_py = PyCapsule_New(
    (void *)&carma_debug_ros2_msgs__msg__trajectory_curvature_speeds__convert_to_py,
    NULL, NULL);
  if (!pyobject_convert_to_py) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "convert_to_py_msg__msg__trajectory_curvature_speeds",
    pyobject_convert_to_py);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_convert_to_py);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject * pyobject_type_support = NULL;
  pyobject_type_support = PyCapsule_New(
    (void *)ROSIDL_GET_MSG_TYPE_SUPPORT(carma_debug_ros2_msgs, msg, TrajectoryCurvatureSpeeds),
    NULL, NULL);
  if (!pyobject_type_support) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "type_support_msg__msg__trajectory_curvature_speeds",
    pyobject_type_support);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_type_support);
    // previously added objects will be removed when the module is destroyed
    return err;
  }
  return 0;
}

PyMODINIT_FUNC
PyInit_carma_debug_ros2_msgs_s__rosidl_typesupport_fastrtps_c(void)
{
  PyObject * pymodule = NULL;
  pymodule = PyModule_Create(&carma_debug_ros2_msgs__module);
  if (!pymodule) {
    return NULL;
  }
  int8_t err;

  err = _register_msg_type__msg__lanelet_id_regulatory_element_pair(pymodule);
  if (err) {
    Py_XDECREF(pymodule);
    return NULL;
  }

  err = _register_msg_type__msg__map_update_readable(pymodule);
  if (err) {
    Py_XDECREF(pymodule);
    return NULL;
  }

  err = _register_msg_type__msg__regulatory_element(pymodule);
  if (err) {
    Py_XDECREF(pymodule);
    return NULL;
  }

  err = _register_msg_type__msg__trajectory_curvature_speeds(pymodule);
  if (err) {
    Py_XDECREF(pymodule);
    return NULL;
  }

  return pymodule;
}
