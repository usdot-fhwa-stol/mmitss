# generated from rosidl_generator_py/resource/_idl.py.em
# with input from j2735_v2x_msgs:msg/PersonalAssistive.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_PersonalAssistive(type):
    """Metaclass of message 'PersonalAssistive'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'UNAVAILABLE': 0,
        'OTHER_TYPE': 1,
        'VISION': 2,
        'HEARING': 4,
        'MOVEMENT': 8,
        'COGNITION': 16,
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
                'j2735_v2x_msgs.msg.PersonalAssistive')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__personal_assistive
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__personal_assistive
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__personal_assistive
            cls._TYPE_SUPPORT = module.type_support_msg__msg__personal_assistive
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__personal_assistive

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'UNAVAILABLE': cls.__constants['UNAVAILABLE'],
            'OTHER_TYPE': cls.__constants['OTHER_TYPE'],
            'VISION': cls.__constants['VISION'],
            'HEARING': cls.__constants['HEARING'],
            'MOVEMENT': cls.__constants['MOVEMENT'],
            'COGNITION': cls.__constants['COGNITION'],
        }

    @property
    def UNAVAILABLE(self):
        """Message constant 'UNAVAILABLE'."""
        return Metaclass_PersonalAssistive.__constants['UNAVAILABLE']

    @property
    def OTHER_TYPE(self):
        """Message constant 'OTHER_TYPE'."""
        return Metaclass_PersonalAssistive.__constants['OTHER_TYPE']

    @property
    def VISION(self):
        """Message constant 'VISION'."""
        return Metaclass_PersonalAssistive.__constants['VISION']

    @property
    def HEARING(self):
        """Message constant 'HEARING'."""
        return Metaclass_PersonalAssistive.__constants['HEARING']

    @property
    def MOVEMENT(self):
        """Message constant 'MOVEMENT'."""
        return Metaclass_PersonalAssistive.__constants['MOVEMENT']

    @property
    def COGNITION(self):
        """Message constant 'COGNITION'."""
        return Metaclass_PersonalAssistive.__constants['COGNITION']


class PersonalAssistive(metaclass=Metaclass_PersonalAssistive):
    """
    Message class 'PersonalAssistive'.

    Constants:
      UNAVAILABLE
      OTHER_TYPE
      VISION
      HEARING
      MOVEMENT
      COGNITION
    """

    __slots__ = [
        '_types',
    ]

    _fields_and_field_types = {
        'types': 'uint8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.types = kwargs.get('types', int())

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
        if self.types != other.types:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def types(self):
        """Message field 'types'."""
        return self._types

    @types.setter
    def types(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'types' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'types' field must be an unsigned integer in [0, 255]"
        self._types = value
