# generated from rosidl_generator_py/resource/_idl.py.em
# with input from j3224_v2x_msgs:msg/DetectedObjectList.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_DetectedObjectList(type):
    """Metaclass of message 'DetectedObjectList'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'DETECTED_OBJECT_DATA_MIN_SIZE': 1,
        'DETECTED_OBJECT_DATA_MAX_SIZE': 256,
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('j3224_v2x_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'j3224_v2x_msgs.msg.DetectedObjectList')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__detected_object_list
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__detected_object_list
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__detected_object_list
            cls._TYPE_SUPPORT = module.type_support_msg__msg__detected_object_list
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__detected_object_list

            from j3224_v2x_msgs.msg import DetectedObjectData
            if DetectedObjectData.__class__._TYPE_SUPPORT is None:
                DetectedObjectData.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'DETECTED_OBJECT_DATA_MIN_SIZE': cls.__constants['DETECTED_OBJECT_DATA_MIN_SIZE'],
            'DETECTED_OBJECT_DATA_MAX_SIZE': cls.__constants['DETECTED_OBJECT_DATA_MAX_SIZE'],
        }

    @property
    def DETECTED_OBJECT_DATA_MIN_SIZE(self):
        """Message constant 'DETECTED_OBJECT_DATA_MIN_SIZE'."""
        return Metaclass_DetectedObjectList.__constants['DETECTED_OBJECT_DATA_MIN_SIZE']

    @property
    def DETECTED_OBJECT_DATA_MAX_SIZE(self):
        """Message constant 'DETECTED_OBJECT_DATA_MAX_SIZE'."""
        return Metaclass_DetectedObjectList.__constants['DETECTED_OBJECT_DATA_MAX_SIZE']


class DetectedObjectList(metaclass=Metaclass_DetectedObjectList):
    """
    Message class 'DetectedObjectList'.

    Constants:
      DETECTED_OBJECT_DATA_MIN_SIZE
      DETECTED_OBJECT_DATA_MAX_SIZE
    """

    __slots__ = [
        '_detected_object_data',
    ]

    _fields_and_field_types = {
        'detected_object_data': 'sequence<j3224_v2x_msgs/DetectedObjectData>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['j3224_v2x_msgs', 'msg'], 'DetectedObjectData')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.detected_object_data = kwargs.get('detected_object_data', [])

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.detected_object_data != other.detected_object_data:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def detected_object_data(self):
        """Message field 'detected_object_data'."""
        return self._detected_object_data

    @detected_object_data.setter
    def detected_object_data(self, value):
        if __debug__:
            from j3224_v2x_msgs.msg import DetectedObjectData
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, DetectedObjectData) for v in value) and
                 True), \
                "The 'detected_object_data' field must be a set or sequence and each value of type 'DetectedObjectData'"
        self._detected_object_data = value
