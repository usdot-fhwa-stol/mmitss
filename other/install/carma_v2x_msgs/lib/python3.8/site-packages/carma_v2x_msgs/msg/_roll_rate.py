# generated from rosidl_generator_py/resource/_idl.py.em
# with input from carma_v2x_msgs:msg/RollRate.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_RollRate(type):
    """Metaclass of message 'RollRate'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'MIN_ROLL_RATE': -327.67,
        'MAX_ROLL_RATE': 327.66,
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('carma_v2x_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'carma_v2x_msgs.msg.RollRate')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__roll_rate
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__roll_rate
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__roll_rate
            cls._TYPE_SUPPORT = module.type_support_msg__msg__roll_rate
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__roll_rate

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'MIN_ROLL_RATE': cls.__constants['MIN_ROLL_RATE'],
            'MAX_ROLL_RATE': cls.__constants['MAX_ROLL_RATE'],
        }

    @property
    def MIN_ROLL_RATE(self):
        """Message constant 'MIN_ROLL_RATE'."""
        return Metaclass_RollRate.__constants['MIN_ROLL_RATE']

    @property
    def MAX_ROLL_RATE(self):
        """Message constant 'MAX_ROLL_RATE'."""
        return Metaclass_RollRate.__constants['MAX_ROLL_RATE']


class RollRate(metaclass=Metaclass_RollRate):
    """
    Message class 'RollRate'.

    Constants:
      MIN_ROLL_RATE
      MAX_ROLL_RATE
    """

    __slots__ = [
        '_roll_rate',
        '_unavailable',
    ]

    _fields_and_field_types = {
        'roll_rate': 'float',
        'unavailable': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.roll_rate = kwargs.get('roll_rate', float())
        self.unavailable = kwargs.get('unavailable', bool())

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
        if self.roll_rate != other.roll_rate:
            return False
        if self.unavailable != other.unavailable:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def roll_rate(self):
        """Message field 'roll_rate'."""
        return self._roll_rate

    @roll_rate.setter
    def roll_rate(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'roll_rate' field must be of type 'float'"
        self._roll_rate = value

    @property
    def unavailable(self):
        """Message field 'unavailable'."""
        return self._unavailable

    @unavailable.setter
    def unavailable(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'unavailable' field must be of type 'bool'"
        self._unavailable = value
