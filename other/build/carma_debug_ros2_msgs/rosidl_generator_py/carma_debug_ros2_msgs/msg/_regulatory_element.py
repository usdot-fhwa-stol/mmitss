# generated from rosidl_generator_py/resource/_idl.py.em
# with input from carma_debug_ros2_msgs:msg/RegulatoryElement.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_RegulatoryElement(type):
    """Metaclass of message 'RegulatoryElement'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('carma_debug_ros2_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'carma_debug_ros2_msgs.msg.RegulatoryElement')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__regulatory_element
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__regulatory_element
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__regulatory_element
            cls._TYPE_SUPPORT = module.type_support_msg__msg__regulatory_element
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__regulatory_element

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class RegulatoryElement(metaclass=Metaclass_RegulatoryElement):
    """Message class 'RegulatoryElement'."""

    __slots__ = [
        '_rule_name',
        '_participants',
        '_unsupported_type',
        '_min_gap',
        '_speed_limit',
        '_direction',
        '_left_participants',
        '_right_participants',
        '_reason',
    ]

    _fields_and_field_types = {
        'rule_name': 'string',
        'participants': 'sequence<string>',
        'unsupported_type': 'boolean',
        'min_gap': 'double',
        'speed_limit': 'double',
        'direction': 'string',
        'left_participants': 'sequence<string>',
        'right_participants': 'sequence<string>',
        'reason': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.UnboundedString()),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.UnboundedString()),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.UnboundedString()),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.rule_name = kwargs.get('rule_name', str())
        self.participants = kwargs.get('participants', [])
        self.unsupported_type = kwargs.get('unsupported_type', bool())
        self.min_gap = kwargs.get('min_gap', float())
        self.speed_limit = kwargs.get('speed_limit', float())
        self.direction = kwargs.get('direction', str())
        self.left_participants = kwargs.get('left_participants', [])
        self.right_participants = kwargs.get('right_participants', [])
        self.reason = kwargs.get('reason', str())

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
        if self.rule_name != other.rule_name:
            return False
        if self.participants != other.participants:
            return False
        if self.unsupported_type != other.unsupported_type:
            return False
        if self.min_gap != other.min_gap:
            return False
        if self.speed_limit != other.speed_limit:
            return False
        if self.direction != other.direction:
            return False
        if self.left_participants != other.left_participants:
            return False
        if self.right_participants != other.right_participants:
            return False
        if self.reason != other.reason:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def rule_name(self):
        """Message field 'rule_name'."""
        return self._rule_name

    @rule_name.setter
    def rule_name(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'rule_name' field must be of type 'str'"
        self._rule_name = value

    @property
    def participants(self):
        """Message field 'participants'."""
        return self._participants

    @participants.setter
    def participants(self, value):
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, str) for v in value) and
                 True), \
                "The 'participants' field must be a set or sequence and each value of type 'str'"
        self._participants = value

    @property
    def unsupported_type(self):
        """Message field 'unsupported_type'."""
        return self._unsupported_type

    @unsupported_type.setter
    def unsupported_type(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'unsupported_type' field must be of type 'bool'"
        self._unsupported_type = value

    @property
    def min_gap(self):
        """Message field 'min_gap'."""
        return self._min_gap

    @min_gap.setter
    def min_gap(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'min_gap' field must be of type 'float'"
        self._min_gap = value

    @property
    def speed_limit(self):
        """Message field 'speed_limit'."""
        return self._speed_limit

    @speed_limit.setter
    def speed_limit(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'speed_limit' field must be of type 'float'"
        self._speed_limit = value

    @property
    def direction(self):
        """Message field 'direction'."""
        return self._direction

    @direction.setter
    def direction(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'direction' field must be of type 'str'"
        self._direction = value

    @property
    def left_participants(self):
        """Message field 'left_participants'."""
        return self._left_participants

    @left_participants.setter
    def left_participants(self, value):
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, str) for v in value) and
                 True), \
                "The 'left_participants' field must be a set or sequence and each value of type 'str'"
        self._left_participants = value

    @property
    def right_participants(self):
        """Message field 'right_participants'."""
        return self._right_participants

    @right_participants.setter
    def right_participants(self, value):
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, str) for v in value) and
                 True), \
                "The 'right_participants' field must be a set or sequence and each value of type 'str'"
        self._right_participants = value

    @property
    def reason(self):
        """Message field 'reason'."""
        return self._reason

    @reason.setter
    def reason(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'reason' field must be of type 'str'"
        self._reason = value
