# generated from rosidl_generator_py/resource/_idl.py.em
# with input from carma_v2x_msgs:msg/MobilityRepeat.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_MobilityRepeat(type):
    """Metaclass of message 'MobilityRepeat'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'UNKNOWN': 0,
        'REQUEST_AGAIN': 1,
        'NEVER_REQUEST_AGAIN': 2,
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
                'carma_v2x_msgs.msg.MobilityRepeat')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__mobility_repeat
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__mobility_repeat
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__mobility_repeat
            cls._TYPE_SUPPORT = module.type_support_msg__msg__mobility_repeat
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__mobility_repeat

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'UNKNOWN': cls.__constants['UNKNOWN'],
            'REQUEST_AGAIN': cls.__constants['REQUEST_AGAIN'],
            'NEVER_REQUEST_AGAIN': cls.__constants['NEVER_REQUEST_AGAIN'],
        }

    @property
    def UNKNOWN(self):
        """Message constant 'UNKNOWN'."""
        return Metaclass_MobilityRepeat.__constants['UNKNOWN']

    @property
    def REQUEST_AGAIN(self):
        """Message constant 'REQUEST_AGAIN'."""
        return Metaclass_MobilityRepeat.__constants['REQUEST_AGAIN']

    @property
    def NEVER_REQUEST_AGAIN(self):
        """Message constant 'NEVER_REQUEST_AGAIN'."""
        return Metaclass_MobilityRepeat.__constants['NEVER_REQUEST_AGAIN']


class MobilityRepeat(metaclass=Metaclass_MobilityRepeat):
    """
    Message class 'MobilityRepeat'.

    Constants:
      UNKNOWN
      REQUEST_AGAIN
      NEVER_REQUEST_AGAIN
    """

    __slots__ = [
        '_repeat',
    ]

    _fields_and_field_types = {
        'repeat': 'uint8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.repeat = kwargs.get('repeat', int())

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
        if self.repeat != other.repeat:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def repeat(self):
        """Message field 'repeat'."""
        return self._repeat

    @repeat.setter
    def repeat(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'repeat' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'repeat' field must be an unsigned integer in [0, 255]"
        self._repeat = value
