# generated from rosidl_generator_py/resource/_idl.py.em
# with input from j2735_v2x_msgs:msg/RestrictionUserType.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_RestrictionUserType(type):
    """Metaclass of message 'RestrictionUserType'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'BASIC_TYPE': 0,
        'REGIONAL': 1,
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
                'j2735_v2x_msgs.msg.RestrictionUserType')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__restriction_user_type
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__restriction_user_type
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__restriction_user_type
            cls._TYPE_SUPPORT = module.type_support_msg__msg__restriction_user_type
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__restriction_user_type

            from j2735_v2x_msgs.msg import RestrictionAppliesTo
            if RestrictionAppliesTo.__class__._TYPE_SUPPORT is None:
                RestrictionAppliesTo.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'BASIC_TYPE': cls.__constants['BASIC_TYPE'],
            'REGIONAL': cls.__constants['REGIONAL'],
        }

    @property
    def BASIC_TYPE(self):
        """Message constant 'BASIC_TYPE'."""
        return Metaclass_RestrictionUserType.__constants['BASIC_TYPE']

    @property
    def REGIONAL(self):
        """Message constant 'REGIONAL'."""
        return Metaclass_RestrictionUserType.__constants['REGIONAL']


class RestrictionUserType(metaclass=Metaclass_RestrictionUserType):
    """
    Message class 'RestrictionUserType'.

    Constants:
      BASIC_TYPE
      REGIONAL
    """

    __slots__ = [
        '_choice',
        '_basic_type',
    ]

    _fields_and_field_types = {
        'choice': 'uint8',
        'basic_type': 'j2735_v2x_msgs/RestrictionAppliesTo',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['j2735_v2x_msgs', 'msg'], 'RestrictionAppliesTo'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.choice = kwargs.get('choice', int())
        from j2735_v2x_msgs.msg import RestrictionAppliesTo
        self.basic_type = kwargs.get('basic_type', RestrictionAppliesTo())

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
        if self.choice != other.choice:
            return False
        if self.basic_type != other.basic_type:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def choice(self):
        """Message field 'choice'."""
        return self._choice

    @choice.setter
    def choice(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'choice' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'choice' field must be an unsigned integer in [0, 255]"
        self._choice = value

    @property
    def basic_type(self):
        """Message field 'basic_type'."""
        return self._basic_type

    @basic_type.setter
    def basic_type(self, value):
        if __debug__:
            from j2735_v2x_msgs.msg import RestrictionAppliesTo
            assert \
                isinstance(value, RestrictionAppliesTo), \
                "The 'basic_type' field must be a sub message of type 'RestrictionAppliesTo'"
        self._basic_type = value
