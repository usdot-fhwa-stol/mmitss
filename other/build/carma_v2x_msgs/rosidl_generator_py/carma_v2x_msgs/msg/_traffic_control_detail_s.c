// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from carma_v2x_msgs:msg/TrafficControlDetail.idl
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
#include "carma_v2x_msgs/msg/detail/traffic_control_detail__struct.h"
#include "carma_v2x_msgs/msg/detail/traffic_control_detail__functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool carma_v2x_msgs__msg__traffic_control_detail__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[64];
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
    assert(strncmp("carma_v2x_msgs.msg._traffic_control_detail.TrafficControlDetail", full_classname_dest, 63) == 0);
  }
  carma_v2x_msgs__msg__TrafficControlDetail * ros_message = _ros_message;
  {  // choice
    PyObject * field = PyObject_GetAttrString(_pymsg, "choice");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->choice = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // signal
    PyObject * field = PyObject_GetAttrString(_pymsg, "signal");
    if (!field) {
      return false;
    }
    if (PyObject_CheckBuffer(field)) {
      // Optimization for converting arrays of primitives
      Py_buffer view;
      int rc = PyObject_GetBuffer(field, &view, PyBUF_SIMPLE);
      if (rc < 0) {
        Py_DECREF(field);
        return false;
      }
      Py_ssize_t size = view.len / sizeof(uint8_t);
      if (!rosidl_runtime_c__uint8__Sequence__init(&(ros_message->signal), size)) {
        PyErr_SetString(PyExc_RuntimeError, "unable to create uint8__Sequence ros_message");
        PyBuffer_Release(&view);
        Py_DECREF(field);
        return false;
      }
      uint8_t * dest = ros_message->signal.data;
      rc = PyBuffer_ToContiguous(dest, &view, view.len, 'C');
      if (rc < 0) {
        PyBuffer_Release(&view);
        Py_DECREF(field);
        return false;
      }
      PyBuffer_Release(&view);
    } else {
      PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'signal'");
      if (!seq_field) {
        Py_DECREF(field);
        return false;
      }
      Py_ssize_t size = PySequence_Size(field);
      if (-1 == size) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
      if (!rosidl_runtime_c__uint8__Sequence__init(&(ros_message->signal), size)) {
        PyErr_SetString(PyExc_RuntimeError, "unable to create uint8__Sequence ros_message");
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
      uint8_t * dest = ros_message->signal.data;
      for (Py_ssize_t i = 0; i < size; ++i) {
        PyObject * item = PySequence_Fast_GET_ITEM(seq_field, i);
        if (!item) {
          Py_DECREF(seq_field);
          Py_DECREF(field);
          return false;
        }
        assert(PyLong_Check(item));
        uint8_t tmp = (uint8_t)PyLong_AsUnsignedLong(item);

        memcpy(&dest[i], &tmp, sizeof(uint8_t));
      }
      Py_DECREF(seq_field);
    }
    Py_DECREF(field);
  }
  {  // closed
    PyObject * field = PyObject_GetAttrString(_pymsg, "closed");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->closed = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // chains
    PyObject * field = PyObject_GetAttrString(_pymsg, "chains");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->chains = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // direction
    PyObject * field = PyObject_GetAttrString(_pymsg, "direction");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->direction = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // lataffinity
    PyObject * field = PyObject_GetAttrString(_pymsg, "lataffinity");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->lataffinity = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // latperm
    PyObject * field = PyObject_GetAttrString(_pymsg, "latperm");
    if (!field) {
      return false;
    }
    {
      // TODO(dirk-thomas) use a better way to check the type before casting
      assert(field->ob_type != NULL);
      assert(field->ob_type->tp_name != NULL);
      assert(strcmp(field->ob_type->tp_name, "numpy.ndarray") == 0);
      PyArrayObject * seq_field = (PyArrayObject *)field;
      Py_INCREF(seq_field);
      assert(PyArray_NDIM(seq_field) == 1);
      assert(PyArray_TYPE(seq_field) == NPY_UINT8);
      Py_ssize_t size = 2;
      uint8_t * dest = ros_message->latperm;
      for (Py_ssize_t i = 0; i < size; ++i) {
        uint8_t tmp = *(npy_uint8 *)PyArray_GETPTR1(seq_field, i);
        memcpy(&dest[i], &tmp, sizeof(uint8_t));
      }
      Py_DECREF(seq_field);
    }
    Py_DECREF(field);
  }
  {  // parking
    PyObject * field = PyObject_GetAttrString(_pymsg, "parking");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->parking = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // minspeed
    PyObject * field = PyObject_GetAttrString(_pymsg, "minspeed");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->minspeed = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // maxspeed
    PyObject * field = PyObject_GetAttrString(_pymsg, "maxspeed");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->maxspeed = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // minhdwy
    PyObject * field = PyObject_GetAttrString(_pymsg, "minhdwy");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->minhdwy = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // maxvehmass
    PyObject * field = PyObject_GetAttrString(_pymsg, "maxvehmass");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->maxvehmass = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // maxvehheight
    PyObject * field = PyObject_GetAttrString(_pymsg, "maxvehheight");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->maxvehheight = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // maxvehwidth
    PyObject * field = PyObject_GetAttrString(_pymsg, "maxvehwidth");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->maxvehwidth = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // maxvehlength
    PyObject * field = PyObject_GetAttrString(_pymsg, "maxvehlength");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->maxvehlength = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // maxvehaxles
    PyObject * field = PyObject_GetAttrString(_pymsg, "maxvehaxles");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->maxvehaxles = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // minvehocc
    PyObject * field = PyObject_GetAttrString(_pymsg, "minvehocc");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->minvehocc = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // maxplatoonsize
    PyObject * field = PyObject_GetAttrString(_pymsg, "maxplatoonsize");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->maxplatoonsize = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // minplatoonhdwy
    PyObject * field = PyObject_GetAttrString(_pymsg, "minplatoonhdwy");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->minplatoonhdwy = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * carma_v2x_msgs__msg__traffic_control_detail__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of TrafficControlDetail */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("carma_v2x_msgs.msg._traffic_control_detail");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "TrafficControlDetail");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  carma_v2x_msgs__msg__TrafficControlDetail * ros_message = (carma_v2x_msgs__msg__TrafficControlDetail *)raw_ros_message;
  {  // choice
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->choice);
    {
      int rc = PyObject_SetAttrString(_pymessage, "choice", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // signal
    PyObject * field = NULL;
    field = PyObject_GetAttrString(_pymessage, "signal");
    if (!field) {
      return NULL;
    }
    assert(field->ob_type != NULL);
    assert(field->ob_type->tp_name != NULL);
    assert(strcmp(field->ob_type->tp_name, "array.array") == 0);
    // ensure that itemsize matches the sizeof of the ROS message field
    PyObject * itemsize_attr = PyObject_GetAttrString(field, "itemsize");
    assert(itemsize_attr != NULL);
    size_t itemsize = PyLong_AsSize_t(itemsize_attr);
    Py_DECREF(itemsize_attr);
    if (itemsize != sizeof(uint8_t)) {
      PyErr_SetString(PyExc_RuntimeError, "itemsize doesn't match expectation");
      Py_DECREF(field);
      return NULL;
    }
    // clear the array, poor approach to remove potential default values
    Py_ssize_t length = PyObject_Length(field);
    if (-1 == length) {
      Py_DECREF(field);
      return NULL;
    }
    if (length > 0) {
      PyObject * pop = PyObject_GetAttrString(field, "pop");
      assert(pop != NULL);
      for (Py_ssize_t i = 0; i < length; ++i) {
        PyObject * ret = PyObject_CallFunctionObjArgs(pop, NULL);
        if (!ret) {
          Py_DECREF(pop);
          Py_DECREF(field);
          return NULL;
        }
        Py_DECREF(ret);
      }
      Py_DECREF(pop);
    }
    if (ros_message->signal.size > 0) {
      // populating the array.array using the frombytes method
      PyObject * frombytes = PyObject_GetAttrString(field, "frombytes");
      assert(frombytes != NULL);
      uint8_t * src = &(ros_message->signal.data[0]);
      PyObject * data = PyBytes_FromStringAndSize((const char *)src, ros_message->signal.size * sizeof(uint8_t));
      assert(data != NULL);
      PyObject * ret = PyObject_CallFunctionObjArgs(frombytes, data, NULL);
      Py_DECREF(data);
      Py_DECREF(frombytes);
      if (!ret) {
        Py_DECREF(field);
        return NULL;
      }
      Py_DECREF(ret);
    }
    Py_DECREF(field);
  }
  {  // closed
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->closed);
    {
      int rc = PyObject_SetAttrString(_pymessage, "closed", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // chains
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->chains);
    {
      int rc = PyObject_SetAttrString(_pymessage, "chains", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // direction
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->direction);
    {
      int rc = PyObject_SetAttrString(_pymessage, "direction", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // lataffinity
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->lataffinity);
    {
      int rc = PyObject_SetAttrString(_pymessage, "lataffinity", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // latperm
    PyObject * field = NULL;
    field = PyObject_GetAttrString(_pymessage, "latperm");
    if (!field) {
      return NULL;
    }
    assert(field->ob_type != NULL);
    assert(field->ob_type->tp_name != NULL);
    assert(strcmp(field->ob_type->tp_name, "numpy.ndarray") == 0);
    PyArrayObject * seq_field = (PyArrayObject *)field;
    assert(PyArray_NDIM(seq_field) == 1);
    assert(PyArray_TYPE(seq_field) == NPY_UINT8);
    assert(sizeof(npy_uint8) == sizeof(uint8_t));
    npy_uint8 * dst = (npy_uint8 *)PyArray_GETPTR1(seq_field, 0);
    uint8_t * src = &(ros_message->latperm[0]);
    memcpy(dst, src, 2 * sizeof(uint8_t));
    Py_DECREF(field);
  }
  {  // parking
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->parking);
    {
      int rc = PyObject_SetAttrString(_pymessage, "parking", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // minspeed
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->minspeed);
    {
      int rc = PyObject_SetAttrString(_pymessage, "minspeed", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // maxspeed
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->maxspeed);
    {
      int rc = PyObject_SetAttrString(_pymessage, "maxspeed", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // minhdwy
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->minhdwy);
    {
      int rc = PyObject_SetAttrString(_pymessage, "minhdwy", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // maxvehmass
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->maxvehmass);
    {
      int rc = PyObject_SetAttrString(_pymessage, "maxvehmass", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // maxvehheight
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->maxvehheight);
    {
      int rc = PyObject_SetAttrString(_pymessage, "maxvehheight", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // maxvehwidth
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->maxvehwidth);
    {
      int rc = PyObject_SetAttrString(_pymessage, "maxvehwidth", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // maxvehlength
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->maxvehlength);
    {
      int rc = PyObject_SetAttrString(_pymessage, "maxvehlength", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // maxvehaxles
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->maxvehaxles);
    {
      int rc = PyObject_SetAttrString(_pymessage, "maxvehaxles", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // minvehocc
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->minvehocc);
    {
      int rc = PyObject_SetAttrString(_pymessage, "minvehocc", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // maxplatoonsize
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->maxplatoonsize);
    {
      int rc = PyObject_SetAttrString(_pymessage, "maxplatoonsize", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // minplatoonhdwy
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->minplatoonhdwy);
    {
      int rc = PyObject_SetAttrString(_pymessage, "minplatoonhdwy", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
