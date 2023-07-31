# generated from rosidl_generator_py/resource/_idl.py.em
# with input from j3224_v2x_msgs:msg/YawDetected.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_YawDetected(type):
    """Metaclass of message 'YawDetected'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'MIN_YAW_DETECTED': -14400,
        'MAX_YAW_DETECTED': 14400,
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
                'j3224_v2x_msgs.msg.YawDetected')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__yaw_detected
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__yaw_detected
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__yaw_detected
            cls._TYPE_SUPPORT = module.type_support_msg__msg__yaw_detected
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__yaw_detected

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'MIN_YAW_DETECTED': cls.__constants['MIN_YAW_DETECTED'],
            'MAX_YAW_DETECTED': cls.__constants['MAX_YAW_DETECTED'],
        }

    @property
    def MIN_YAW_DETECTED(self):
        """Message constant 'MIN_YAW_DETECTED'."""
        return Metaclass_YawDetected.__constants['MIN_YAW_DETECTED']

    @property
    def MAX_YAW_DETECTED(self):
        """Message constant 'MAX_YAW_DETECTED'."""
        return Metaclass_YawDetected.__constants['MAX_YAW_DETECTED']


class YawDetected(metaclass=Metaclass_YawDetected):
    """
    Message class 'YawDetected'.

    Constants:
      MIN_YAW_DETECTED
      MAX_YAW_DETECTED
    """

    __slots__ = [
        '_yaw_detected',
    ]

    _fields_and_field_types = {
        'yaw_detected': 'int16',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.yaw_detected = kwargs.get('yaw_detected', int())

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
        if self.yaw_detected != other.yaw_detected:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def yaw_detected(self):
        """Message field 'yaw_detected'."""
        return self._yaw_detected

    @yaw_detected.setter
    def yaw_detected(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'yaw_detected' field must be of type 'int'"
            assert value >= -32768 and value < 32768, \
                "The 'yaw_detected' field must be an integer in [-32768, 32767]"
        self._yaw_detected = value
