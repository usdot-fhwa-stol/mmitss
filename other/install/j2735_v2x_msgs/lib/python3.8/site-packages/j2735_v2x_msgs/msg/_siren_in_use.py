# generated from rosidl_generator_py/resource/_idl.py.em
# with input from j2735_v2x_msgs:msg/SirenInUse.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_SirenInUse(type):
    """Metaclass of message 'SirenInUse'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'UNAVAILABLE': 0,
        'NOT_IN_USE': 1,
        'IN_USE': 2,
        'RESERVED': 3,
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
                'j2735_v2x_msgs.msg.SirenInUse')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__siren_in_use
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__siren_in_use
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__siren_in_use
            cls._TYPE_SUPPORT = module.type_support_msg__msg__siren_in_use
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__siren_in_use

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'UNAVAILABLE': cls.__constants['UNAVAILABLE'],
            'NOT_IN_USE': cls.__constants['NOT_IN_USE'],
            'IN_USE': cls.__constants['IN_USE'],
            'RESERVED': cls.__constants['RESERVED'],
        }

    @property
    def UNAVAILABLE(self):
        """Message constant 'UNAVAILABLE'."""
        return Metaclass_SirenInUse.__constants['UNAVAILABLE']

    @property
    def NOT_IN_USE(self):
        """Message constant 'NOT_IN_USE'."""
        return Metaclass_SirenInUse.__constants['NOT_IN_USE']

    @property
    def IN_USE(self):
        """Message constant 'IN_USE'."""
        return Metaclass_SirenInUse.__constants['IN_USE']

    @property
    def RESERVED(self):
        """Message constant 'RESERVED'."""
        return Metaclass_SirenInUse.__constants['RESERVED']


class SirenInUse(metaclass=Metaclass_SirenInUse):
    """
    Message class 'SirenInUse'.

    Constants:
      UNAVAILABLE
      NOT_IN_USE
      IN_USE
      RESERVED
    """

    __slots__ = [
        '_siren_in_use',
    ]

    _fields_and_field_types = {
        'siren_in_use': 'uint8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.siren_in_use = kwargs.get('siren_in_use', int())

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
        if self.siren_in_use != other.siren_in_use:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def siren_in_use(self):
        """Message field 'siren_in_use'."""
        return self._siren_in_use

    @siren_in_use.setter
    def siren_in_use(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'siren_in_use' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'siren_in_use' field must be an unsigned integer in [0, 255]"
        self._siren_in_use = value
