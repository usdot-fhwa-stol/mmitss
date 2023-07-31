# generated from rosidl_generator_py/resource/_idl.py.em
# with input from carma_planning_msgs:msg/ManeuverPlan.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_ManeuverPlan(type):
    """Metaclass of message 'ManeuverPlan'."""

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
            module = import_type_support('carma_planning_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'carma_planning_msgs.msg.ManeuverPlan')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__maneuver_plan
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__maneuver_plan
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__maneuver_plan
            cls._TYPE_SUPPORT = module.type_support_msg__msg__maneuver_plan
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__maneuver_plan

            from builtin_interfaces.msg import Time
            if Time.__class__._TYPE_SUPPORT is None:
                Time.__class__.__import_type_support__()

            from carma_planning_msgs.msg import Maneuver
            if Maneuver.__class__._TYPE_SUPPORT is None:
                Maneuver.__class__.__import_type_support__()

            from std_msgs.msg import Header
            if Header.__class__._TYPE_SUPPORT is None:
                Header.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ManeuverPlan(metaclass=Metaclass_ManeuverPlan):
    """Message class 'ManeuverPlan'."""

    __slots__ = [
        '_header',
        '_maneuver_plan_id',
        '_planning_start_time',
        '_planning_completion_time',
        '_maneuvers',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'maneuver_plan_id': 'string',
        'planning_start_time': 'builtin_interfaces/Time',
        'planning_completion_time': 'builtin_interfaces/Time',
        'maneuvers': 'sequence<carma_planning_msgs/Maneuver>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['builtin_interfaces', 'msg'], 'Time'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['builtin_interfaces', 'msg'], 'Time'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['carma_planning_msgs', 'msg'], 'Maneuver')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.maneuver_plan_id = kwargs.get('maneuver_plan_id', str())
        from builtin_interfaces.msg import Time
        self.planning_start_time = kwargs.get('planning_start_time', Time())
        from builtin_interfaces.msg import Time
        self.planning_completion_time = kwargs.get('planning_completion_time', Time())
        self.maneuvers = kwargs.get('maneuvers', [])

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
        if self.header != other.header:
            return False
        if self.maneuver_plan_id != other.maneuver_plan_id:
            return False
        if self.planning_start_time != other.planning_start_time:
            return False
        if self.planning_completion_time != other.planning_completion_time:
            return False
        if self.maneuvers != other.maneuvers:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def header(self):
        """Message field 'header'."""
        return self._header

    @header.setter
    def header(self, value):
        if __debug__:
            from std_msgs.msg import Header
            assert \
                isinstance(value, Header), \
                "The 'header' field must be a sub message of type 'Header'"
        self._header = value

    @property
    def maneuver_plan_id(self):
        """Message field 'maneuver_plan_id'."""
        return self._maneuver_plan_id

    @maneuver_plan_id.setter
    def maneuver_plan_id(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'maneuver_plan_id' field must be of type 'str'"
        self._maneuver_plan_id = value

    @property
    def planning_start_time(self):
        """Message field 'planning_start_time'."""
        return self._planning_start_time

    @planning_start_time.setter
    def planning_start_time(self, value):
        if __debug__:
            from builtin_interfaces.msg import Time
            assert \
                isinstance(value, Time), \
                "The 'planning_start_time' field must be a sub message of type 'Time'"
        self._planning_start_time = value

    @property
    def planning_completion_time(self):
        """Message field 'planning_completion_time'."""
        return self._planning_completion_time

    @planning_completion_time.setter
    def planning_completion_time(self, value):
        if __debug__:
            from builtin_interfaces.msg import Time
            assert \
                isinstance(value, Time), \
                "The 'planning_completion_time' field must be a sub message of type 'Time'"
        self._planning_completion_time = value

    @property
    def maneuvers(self):
        """Message field 'maneuvers'."""
        return self._maneuvers

    @maneuvers.setter
    def maneuvers(self, value):
        if __debug__:
            from carma_planning_msgs.msg import Maneuver
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
                 all(isinstance(v, Maneuver) for v in value) and
                 True), \
                "The 'maneuvers' field must be a set or sequence and each value of type 'Maneuver'"
        self._maneuvers = value
