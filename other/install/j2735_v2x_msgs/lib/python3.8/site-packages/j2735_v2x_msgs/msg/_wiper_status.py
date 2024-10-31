# generated from rosidl_generator_py/resource/_idl.py.em
# with input from j2735_v2x_msgs:msg/WiperStatus.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_WiperStatus(type):
    """Metaclass of message 'WiperStatus'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'UNAVAILABLE': 0,
        'OFF': 1,
        'INTERMITTENT': 2,
        'LOW': 3,
        'HIGH': 4,
        'WASHER_IN_USE': 5,
        'AUTOMATIC_PRESENT': 6,
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
                'j2735_v2x_msgs.msg.WiperStatus')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__wiper_status
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__wiper_status
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__wiper_status
            cls._TYPE_SUPPORT = module.type_support_msg__msg__wiper_status
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__wiper_status

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'UNAVAILABLE': cls.__constants['UNAVAILABLE'],
            'OFF': cls.__constants['OFF'],
            'INTERMITTENT': cls.__constants['INTERMITTENT'],
            'LOW': cls.__constants['LOW'],
            'HIGH': cls.__constants['HIGH'],
            'WASHER_IN_USE': cls.__constants['WASHER_IN_USE'],
            'AUTOMATIC_PRESENT': cls.__constants['AUTOMATIC_PRESENT'],
        }

    @property
    def UNAVAILABLE(self):
        """Message constant 'UNAVAILABLE'."""
        return Metaclass_WiperStatus.__constants['UNAVAILABLE']

    @property
    def OFF(self):
        """Message constant 'OFF'."""
        return Metaclass_WiperStatus.__constants['OFF']

    @property
    def INTERMITTENT(self):
        """Message constant 'INTERMITTENT'."""
        return Metaclass_WiperStatus.__constants['INTERMITTENT']

    @property
    def LOW(self):
        """Message constant 'LOW'."""
        return Metaclass_WiperStatus.__constants['LOW']

    @property
    def HIGH(self):
        """Message constant 'HIGH'."""
        return Metaclass_WiperStatus.__constants['HIGH']

    @property
    def WASHER_IN_USE(self):
        """Message constant 'WASHER_IN_USE'."""
        return Metaclass_WiperStatus.__constants['WASHER_IN_USE']

    @property
    def AUTOMATIC_PRESENT(self):
        """Message constant 'AUTOMATIC_PRESENT'."""
        return Metaclass_WiperStatus.__constants['AUTOMATIC_PRESENT']


class WiperStatus(metaclass=Metaclass_WiperStatus):
    """
    Message class 'WiperStatus'.

    Constants:
      UNAVAILABLE
      OFF
      INTERMITTENT
      LOW
      HIGH
      WASHER_IN_USE
      AUTOMATIC_PRESENT
    """

    __slots__ = [
        '_wiper_status',
    ]

    _fields_and_field_types = {
        'wiper_status': 'uint8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.wiper_status = kwargs.get('wiper_status', int())

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
        if self.wiper_status != other.wiper_status:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def wiper_status(self):
        """Message field 'wiper_status'."""
        return self._wiper_status

    @wiper_status.setter
    def wiper_status(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'wiper_status' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'wiper_status' field must be an unsigned integer in [0, 255]"
        self._wiper_status = value
