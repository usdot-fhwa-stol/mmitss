# generated from rosidl_generator_py/resource/_idl.py.em
# with input from carma_v2x_msgs:msg/MovementState.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_MovementState(type):
    """Metaclass of message 'MovementState'."""

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
            module = import_type_support('carma_v2x_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'carma_v2x_msgs.msg.MovementState')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__movement_state
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__movement_state
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__movement_state
            cls._TYPE_SUPPORT = module.type_support_msg__msg__movement_state
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__movement_state

            from carma_v2x_msgs.msg import MovementEvent
            if MovementEvent.__class__._TYPE_SUPPORT is None:
                MovementEvent.__class__.__import_type_support__()

            from j2735_v2x_msgs.msg import ConnectionManeuverAssist
            if ConnectionManeuverAssist.__class__._TYPE_SUPPORT is None:
                ConnectionManeuverAssist.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class MovementState(metaclass=Metaclass_MovementState):
    """Message class 'MovementState'."""

    __slots__ = [
        '_movement_name',
        '_movement_name_exists',
        '_signal_group',
        '_movement_event_list',
        '_connection_maneuver_assist_list',
        '_maneuver_assist_list_exists',
    ]

    _fields_and_field_types = {
        'movement_name': 'string',
        'movement_name_exists': 'boolean',
        'signal_group': 'uint8',
        'movement_event_list': 'sequence<carma_v2x_msgs/MovementEvent>',
        'connection_maneuver_assist_list': 'sequence<j2735_v2x_msgs/ConnectionManeuverAssist>',
        'maneuver_assist_list_exists': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['carma_v2x_msgs', 'msg'], 'MovementEvent')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['j2735_v2x_msgs', 'msg'], 'ConnectionManeuverAssist')),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.movement_name = kwargs.get('movement_name', str())
        self.movement_name_exists = kwargs.get('movement_name_exists', bool())
        self.signal_group = kwargs.get('signal_group', int())
        self.movement_event_list = kwargs.get('movement_event_list', [])
        self.connection_maneuver_assist_list = kwargs.get('connection_maneuver_assist_list', [])
        self.maneuver_assist_list_exists = kwargs.get('maneuver_assist_list_exists', bool())

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
        if self.movement_name != other.movement_name:
            return False
        if self.movement_name_exists != other.movement_name_exists:
            return False
        if self.signal_group != other.signal_group:
            return False
        if self.movement_event_list != other.movement_event_list:
            return False
        if self.connection_maneuver_assist_list != other.connection_maneuver_assist_list:
            return False
        if self.maneuver_assist_list_exists != other.maneuver_assist_list_exists:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def movement_name(self):
        """Message field 'movement_name'."""
        return self._movement_name

    @movement_name.setter
    def movement_name(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'movement_name' field must be of type 'str'"
        self._movement_name = value

    @property
    def movement_name_exists(self):
        """Message field 'movement_name_exists'."""
        return self._movement_name_exists

    @movement_name_exists.setter
    def movement_name_exists(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'movement_name_exists' field must be of type 'bool'"
        self._movement_name_exists = value

    @property
    def signal_group(self):
        """Message field 'signal_group'."""
        return self._signal_group

    @signal_group.setter
    def signal_group(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'signal_group' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'signal_group' field must be an unsigned integer in [0, 255]"
        self._signal_group = value

    @property
    def movement_event_list(self):
        """Message field 'movement_event_list'."""
        return self._movement_event_list

    @movement_event_list.setter
    def movement_event_list(self, value):
        if __debug__:
            from carma_v2x_msgs.msg import MovementEvent
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
                 all(isinstance(v, MovementEvent) for v in value) and
                 True), \
                "The 'movement_event_list' field must be a set or sequence and each value of type 'MovementEvent'"
        self._movement_event_list = value

    @property
    def connection_maneuver_assist_list(self):
        """Message field 'connection_maneuver_assist_list'."""
        return self._connection_maneuver_assist_list

    @connection_maneuver_assist_list.setter
    def connection_maneuver_assist_list(self, value):
        if __debug__:
            from j2735_v2x_msgs.msg import ConnectionManeuverAssist
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
                 all(isinstance(v, ConnectionManeuverAssist) for v in value) and
                 True), \
                "The 'connection_maneuver_assist_list' field must be a set or sequence and each value of type 'ConnectionManeuverAssist'"
        self._connection_maneuver_assist_list = value

    @property
    def maneuver_assist_list_exists(self):
        """Message field 'maneuver_assist_list_exists'."""
        return self._maneuver_assist_list_exists

    @maneuver_assist_list_exists.setter
    def maneuver_assist_list_exists(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'maneuver_assist_list_exists' field must be of type 'bool'"
        self._maneuver_assist_list_exists = value
