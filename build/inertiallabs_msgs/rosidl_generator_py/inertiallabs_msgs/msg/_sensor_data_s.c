// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from inertiallabs_msgs:msg/SensorData.idl
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
#include "inertiallabs_msgs/msg/detail/sensor_data__struct.h"
#include "inertiallabs_msgs/msg/detail/sensor_data__functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__header__convert_to_py(void * raw_ros_message);
ROSIDL_GENERATOR_C_IMPORT
bool geometry_msgs__msg__vector3__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * geometry_msgs__msg__vector3__convert_to_py(void * raw_ros_message);
ROSIDL_GENERATOR_C_IMPORT
bool geometry_msgs__msg__vector3__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * geometry_msgs__msg__vector3__convert_to_py(void * raw_ros_message);
ROSIDL_GENERATOR_C_IMPORT
bool geometry_msgs__msg__vector3__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * geometry_msgs__msg__vector3__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool inertiallabs_msgs__msg__sensor_data__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[46];
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
    assert(strncmp("inertiallabs_msgs.msg._sensor_data.SensorData", full_classname_dest, 45) == 0);
  }
  inertiallabs_msgs__msg__SensorData * ros_message = _ros_message;
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
  {  // mag
    PyObject * field = PyObject_GetAttrString(_pymsg, "mag");
    if (!field) {
      return false;
    }
    if (!geometry_msgs__msg__vector3__convert_from_py(field, &ros_message->mag)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // accel
    PyObject * field = PyObject_GetAttrString(_pymsg, "accel");
    if (!field) {
      return false;
    }
    if (!geometry_msgs__msg__vector3__convert_from_py(field, &ros_message->accel)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // gyro
    PyObject * field = PyObject_GetAttrString(_pymsg, "gyro");
    if (!field) {
      return false;
    }
    if (!geometry_msgs__msg__vector3__convert_from_py(field, &ros_message->gyro)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // temp
    PyObject * field = PyObject_GetAttrString(_pymsg, "temp");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->temp = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // vinp
    PyObject * field = PyObject_GetAttrString(_pymsg, "vinp");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->vinp = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // pressure
    PyObject * field = PyObject_GetAttrString(_pymsg, "pressure");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->pressure = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // barometric_height
    PyObject * field = PyObject_GetAttrString(_pymsg, "barometric_height");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->barometric_height = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * inertiallabs_msgs__msg__sensor_data__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of SensorData */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("inertiallabs_msgs.msg._sensor_data");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "SensorData");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  inertiallabs_msgs__msg__SensorData * ros_message = (inertiallabs_msgs__msg__SensorData *)raw_ros_message;
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
  {  // mag
    PyObject * field = NULL;
    field = geometry_msgs__msg__vector3__convert_to_py(&ros_message->mag);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "mag", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // accel
    PyObject * field = NULL;
    field = geometry_msgs__msg__vector3__convert_to_py(&ros_message->accel);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "accel", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // gyro
    PyObject * field = NULL;
    field = geometry_msgs__msg__vector3__convert_to_py(&ros_message->gyro);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "gyro", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // temp
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->temp);
    {
      int rc = PyObject_SetAttrString(_pymessage, "temp", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // vinp
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->vinp);
    {
      int rc = PyObject_SetAttrString(_pymessage, "vinp", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // pressure
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->pressure);
    {
      int rc = PyObject_SetAttrString(_pymessage, "pressure", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // barometric_height
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->barometric_height);
    {
      int rc = PyObject_SetAttrString(_pymessage, "barometric_height", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
