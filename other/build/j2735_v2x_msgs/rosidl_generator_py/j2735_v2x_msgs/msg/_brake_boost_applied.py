# generated from rosidl_generator_py/resource/_idl.py.em
# with input from j2735_v2x_msgs:msg/BrakeBoostApplied.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_BrakeBoostApplied(type):
    """Metaclass of message 'BrakeBoostApplied'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'UNAVAILABLE': 0,
        'OFF': 1,
        'ON': 2,
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
                'j2735_v2x_msgs.msg.BrakeBoostApplied')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__brake_boost_applied
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__brake_boost_applied
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__brake_boost_applied
            cls._TYPE_SUPPORT = module.type_support_msg__msg__brake_boost_applied
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__brake_boost_applied

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'UNAVAILABLE': cls.__constants['UNAVAILABLE'],
            'OFF': cls.__constants['OFF'],
            'ON': cls.__constants['ON'],
        }

    @property
    def UNAVAILABLE(self):
        """Message constant 'UNAVAILABLE'."""
        return Metaclass_BrakeBoostApplied.__constants['UNAVAILABLE']

    @property
    def OFF(self):
        """Message constant 'OFF'."""
        return Metaclass_BrakeBoostApplied.__constants['OFF']

    @property
    def ON(self):
        """Message constant 'ON'."""
        return Metaclass_BrakeBoostApplied.__constants['ON']


class BrakeBoostApplied(metaclass=Metaclass_BrakeBoostApplied):
    """
    Message class 'BrakeBoostApplied'.

    Constants:
      UNAVAILABLE
      OFF
      ON
    """

    __slots__ = [
        '_brake_boost_applied',
    ]

    _fields_and_field_types = {
        'brake_boost_applied': 'uint8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.brake_boost_applied = kwargs.get('brake_boost_applied', int())

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
        if self.brake_boost_applied != other.brake_boost_applied:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def brake_boost_applied(self):
        """Message field 'brake_boost_applied'."""
        return self._brake_boost_applied

    @brake_boost_applied.setter
    def brake_boost_applied(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'brake_boost_applied' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'brake_boost_applied' field must be an unsigned integer in [0, 255]"
        self._brake_boost_applied = value
