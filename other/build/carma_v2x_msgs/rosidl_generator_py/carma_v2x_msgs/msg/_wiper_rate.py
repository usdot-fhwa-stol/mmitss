# generated from rosidl_generator_py/resource/_idl.py.em
# with input from carma_v2x_msgs:msg/WiperRate.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_WiperRate(type):
    """Metaclass of message 'WiperRate'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'WIPER_RATE_MIN': 0.0,
        'WIPER_RATE_MAX': 2.12,
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
                'carma_v2x_msgs.msg.WiperRate')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__wiper_rate
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__wiper_rate
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__wiper_rate
            cls._TYPE_SUPPORT = module.type_support_msg__msg__wiper_rate
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__wiper_rate

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'WIPER_RATE_MIN': cls.__constants['WIPER_RATE_MIN'],
            'WIPER_RATE_MAX': cls.__constants['WIPER_RATE_MAX'],
        }

    @property
    def WIPER_RATE_MIN(self):
        """Message constant 'WIPER_RATE_MIN'."""
        return Metaclass_WiperRate.__constants['WIPER_RATE_MIN']

    @property
    def WIPER_RATE_MAX(self):
        """Message constant 'WIPER_RATE_MAX'."""
        return Metaclass_WiperRate.__constants['WIPER_RATE_MAX']


class WiperRate(metaclass=Metaclass_WiperRate):
    """
    Message class 'WiperRate'.

    Constants:
      WIPER_RATE_MIN
      WIPER_RATE_MAX
    """

    __slots__ = [
        '_wiper_rate',
    ]

    _fields_and_field_types = {
        'wiper_rate': 'float',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.wiper_rate = kwargs.get('wiper_rate', float())

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
        if self.wiper_rate != other.wiper_rate:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def wiper_rate(self):
        """Message field 'wiper_rate'."""
        return self._wiper_rate

    @wiper_rate.setter
    def wiper_rate(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'wiper_rate' field must be of type 'float'"
        self._wiper_rate = value
