# generated from rosidl_generator_py/resource/_idl.py.em
# with input from j2735_v2x_msgs:msg/AllowedManeuvers.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_AllowedManeuvers(type):
    """Metaclass of message 'AllowedManeuvers'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'STRAIGHT': 1,
        'LEFT_TURN': 2,
        'RIGHT_TURN': 4,
        'U_TURN': 8,
        'LEFT_TURN_ON_RED': 16,
        'RIGHT_TURN_ON_RED': 32,
        'LANE_CHANGE': 64,
        'NO_STOPPING_ALLOWED': 128,
        'ALWAYS_YIELD': 256,
        'GO_WITH_HALT': 512,
        'CAUTION': 1024,
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
                'j2735_v2x_msgs.msg.AllowedManeuvers')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__allowed_maneuvers
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__allowed_maneuvers
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__allowed_maneuvers
            cls._TYPE_SUPPORT = module.type_support_msg__msg__allowed_maneuvers
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__allowed_maneuvers

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'STRAIGHT': cls.__constants['STRAIGHT'],
            'LEFT_TURN': cls.__constants['LEFT_TURN'],
            'RIGHT_TURN': cls.__constants['RIGHT_TURN'],
            'U_TURN': cls.__constants['U_TURN'],
            'LEFT_TURN_ON_RED': cls.__constants['LEFT_TURN_ON_RED'],
            'RIGHT_TURN_ON_RED': cls.__constants['RIGHT_TURN_ON_RED'],
            'LANE_CHANGE': cls.__constants['LANE_CHANGE'],
            'NO_STOPPING_ALLOWED': cls.__constants['NO_STOPPING_ALLOWED'],
            'ALWAYS_YIELD': cls.__constants['ALWAYS_YIELD'],
            'GO_WITH_HALT': cls.__constants['GO_WITH_HALT'],
            'CAUTION': cls.__constants['CAUTION'],
        }

    @property
    def STRAIGHT(self):
        """Message constant 'STRAIGHT'."""
        return Metaclass_AllowedManeuvers.__constants['STRAIGHT']

    @property
    def LEFT_TURN(self):
        """Message constant 'LEFT_TURN'."""
        return Metaclass_AllowedManeuvers.__constants['LEFT_TURN']

    @property
    def RIGHT_TURN(self):
        """Message constant 'RIGHT_TURN'."""
        return Metaclass_AllowedManeuvers.__constants['RIGHT_TURN']

    @property
    def U_TURN(self):
        """Message constant 'U_TURN'."""
        return Metaclass_AllowedManeuvers.__constants['U_TURN']

    @property
    def LEFT_TURN_ON_RED(self):
        """Message constant 'LEFT_TURN_ON_RED'."""
        return Metaclass_AllowedManeuvers.__constants['LEFT_TURN_ON_RED']

    @property
    def RIGHT_TURN_ON_RED(self):
        """Message constant 'RIGHT_TURN_ON_RED'."""
        return Metaclass_AllowedManeuvers.__constants['RIGHT_TURN_ON_RED']

    @property
    def LANE_CHANGE(self):
        """Message constant 'LANE_CHANGE'."""
        return Metaclass_AllowedManeuvers.__constants['LANE_CHANGE']

    @property
    def NO_STOPPING_ALLOWED(self):
        """Message constant 'NO_STOPPING_ALLOWED'."""
        return Metaclass_AllowedManeuvers.__constants['NO_STOPPING_ALLOWED']

    @property
    def ALWAYS_YIELD(self):
        """Message constant 'ALWAYS_YIELD'."""
        return Metaclass_AllowedManeuvers.__constants['ALWAYS_YIELD']

    @property
    def GO_WITH_HALT(self):
        """Message constant 'GO_WITH_HALT'."""
        return Metaclass_AllowedManeuvers.__constants['GO_WITH_HALT']

    @property
    def CAUTION(self):
        """Message constant 'CAUTION'."""
        return Metaclass_AllowedManeuvers.__constants['CAUTION']


class AllowedManeuvers(metaclass=Metaclass_AllowedManeuvers):
    """
    Message class 'AllowedManeuvers'.

    Constants:
      STRAIGHT
      LEFT_TURN
      RIGHT_TURN
      U_TURN
      LEFT_TURN_ON_RED
      RIGHT_TURN_ON_RED
      LANE_CHANGE
      NO_STOPPING_ALLOWED
      ALWAYS_YIELD
      GO_WITH_HALT
      CAUTION
    """

    __slots__ = [
        '_allowed_maneuvers',
    ]

    _fields_and_field_types = {
        'allowed_maneuvers': 'uint16',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.allowed_maneuvers = kwargs.get('allowed_maneuvers', int())

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
        if self.allowed_maneuvers != other.allowed_maneuvers:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def allowed_maneuvers(self):
        """Message field 'allowed_maneuvers'."""
        return self._allowed_maneuvers

    @allowed_maneuvers.setter
    def allowed_maneuvers(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'allowed_maneuvers' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'allowed_maneuvers' field must be an unsigned integer in [0, 65535]"
        self._allowed_maneuvers = value
