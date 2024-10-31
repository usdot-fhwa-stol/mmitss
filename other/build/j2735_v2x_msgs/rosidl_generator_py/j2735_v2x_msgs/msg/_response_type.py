# generated from rosidl_generator_py/resource/_idl.py.em
# with input from j2735_v2x_msgs:msg/ResponseType.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_ResponseType(type):
    """Metaclass of message 'ResponseType'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'NOT_IN_USE_OR_NOT_EQUIPPED': 0,
        'EMERGENCY': 1,
        'NON_EMERGENCY': 2,
        'PURSUIT': 3,
        'STATIONARY': 4,
        'SLOW_MOVING': 5,
        'STOP_AND_GO_MOVEMENT': 6,
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('j2735_v2x_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'j2735_v2x_msgs.msg.ResponseType')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__response_type
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__response_type
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__response_type
            cls._TYPE_SUPPORT = module.type_support_msg__msg__response_type
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__response_type

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'NOT_IN_USE_OR_NOT_EQUIPPED': cls.__constants['NOT_IN_USE_OR_NOT_EQUIPPED'],
            'EMERGENCY': cls.__constants['EMERGENCY'],
            'NON_EMERGENCY': cls.__constants['NON_EMERGENCY'],
            'PURSUIT': cls.__constants['PURSUIT'],
            'STATIONARY': cls.__constants['STATIONARY'],
            'SLOW_MOVING': cls.__constants['SLOW_MOVING'],
            'STOP_AND_GO_MOVEMENT': cls.__constants['STOP_AND_GO_MOVEMENT'],
        }

    @property
    def NOT_IN_USE_OR_NOT_EQUIPPED(self):
        """Message constant 'NOT_IN_USE_OR_NOT_EQUIPPED'."""
        return Metaclass_ResponseType.__constants['NOT_IN_USE_OR_NOT_EQUIPPED']

    @property
    def EMERGENCY(self):
        """Message constant 'EMERGENCY'."""
        return Metaclass_ResponseType.__constants['EMERGENCY']

    @property
    def NON_EMERGENCY(self):
        """Message constant 'NON_EMERGENCY'."""
        return Metaclass_ResponseType.__constants['NON_EMERGENCY']

    @property
    def PURSUIT(self):
        """Message constant 'PURSUIT'."""
        return Metaclass_ResponseType.__constants['PURSUIT']

    @property
    def STATIONARY(self):
        """Message constant 'STATIONARY'."""
        return Metaclass_ResponseType.__constants['STATIONARY']

    @property
    def SLOW_MOVING(self):
        """Message constant 'SLOW_MOVING'."""
        return Metaclass_ResponseType.__constants['SLOW_MOVING']

    @property
    def STOP_AND_GO_MOVEMENT(self):
        """Message constant 'STOP_AND_GO_MOVEMENT'."""
        return Metaclass_ResponseType.__constants['STOP_AND_GO_MOVEMENT']


class ResponseType(metaclass=Metaclass_ResponseType):
    """
    Message class 'ResponseType'.

    Constants:
      NOT_IN_USE_OR_NOT_EQUIPPED
      EMERGENCY
      NON_EMERGENCY
      PURSUIT
      STATIONARY
      SLOW_MOVING
      STOP_AND_GO_MOVEMENT
    """

    __slots__ = [
        '_response_type',
    ]

    _fields_and_field_types = {
        'response_type': 'uint8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.response_type = kwargs.get('response_type', int())

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
        if self.response_type != other.response_type:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def response_type(self):
        """Message field 'response_type'."""
        return self._response_type

    @response_type.setter
    def response_type(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'response_type' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'response_type' field must be an unsigned integer in [0, 255]"
        self._response_type = value
