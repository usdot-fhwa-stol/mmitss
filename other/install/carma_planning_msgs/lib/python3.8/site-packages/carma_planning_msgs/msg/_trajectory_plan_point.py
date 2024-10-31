# generated from rosidl_generator_py/resource/_idl.py.em
# with input from carma_planning_msgs:msg/TrajectoryPlanPoint.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_TrajectoryPlanPoint(type):
    """Metaclass of message 'TrajectoryPlanPoint'."""

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
                'carma_planning_msgs.msg.TrajectoryPlanPoint')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__trajectory_plan_point
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__trajectory_plan_point
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__trajectory_plan_point
            cls._TYPE_SUPPORT = module.type_support_msg__msg__trajectory_plan_point
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__trajectory_plan_point

            from builtin_interfaces.msg import Time
            if Time.__class__._TYPE_SUPPORT is None:
                Time.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class TrajectoryPlanPoint(metaclass=Metaclass_TrajectoryPlanPoint):
    """Message class 'TrajectoryPlanPoint'."""

    __slots__ = [
        '_x',
        '_y',
        '_yaw',
        '_target_time',
        '_lane_id',
        '_controller_plugin_name',
        '_planner_plugin_name',
    ]

    _fields_and_field_types = {
        'x': 'double',
        'y': 'double',
        'yaw': 'double',
        'target_time': 'builtin_interfaces/Time',
        'lane_id': 'string',
        'controller_plugin_name': 'string',
        'planner_plugin_name': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['builtin_interfaces', 'msg'], 'Time'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.x = kwargs.get('x', float())
        self.y = kwargs.get('y', float())
        self.yaw = kwargs.get('yaw', float())
        from builtin_interfaces.msg import Time
        self.target_time = kwargs.get('target_time', Time())
        self.lane_id = kwargs.get('lane_id', str())
        self.controller_plugin_name = kwargs.get('controller_plugin_name', str())
        self.planner_plugin_name = kwargs.get('planner_plugin_name', str())

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
        if self.x != other.x:
            return False
        if self.y != other.y:
            return False
        if self.yaw != other.yaw:
            return False
        if self.target_time != other.target_time:
            return False
        if self.lane_id != other.lane_id:
            return False
        if self.controller_plugin_name != other.controller_plugin_name:
            return False
        if self.planner_plugin_name != other.planner_plugin_name:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def x(self):
        """Message field 'x'."""
        return self._x

    @x.setter
    def x(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'x' field must be of type 'float'"
        self._x = value

    @property
    def y(self):
        """Message field 'y'."""
        return self._y

    @y.setter
    def y(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'y' field must be of type 'float'"
        self._y = value

    @property
    def yaw(self):
        """Message field 'yaw'."""
        return self._yaw

    @yaw.setter
    def yaw(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'yaw' field must be of type 'float'"
        self._yaw = value

    @property
    def target_time(self):
        """Message field 'target_time'."""
        return self._target_time

    @target_time.setter
    def target_time(self, value):
        if __debug__:
            from builtin_interfaces.msg import Time
            assert \
                isinstance(value, Time), \
                "The 'target_time' field must be a sub message of type 'Time'"
        self._target_time = value

    @property
    def lane_id(self):
        """Message field 'lane_id'."""
        return self._lane_id

    @lane_id.setter
    def lane_id(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'lane_id' field must be of type 'str'"
        self._lane_id = value

    @property
    def controller_plugin_name(self):
        """Message field 'controller_plugin_name'."""
        return self._controller_plugin_name

    @controller_plugin_name.setter
    def controller_plugin_name(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'controller_plugin_name' field must be of type 'str'"
        self._controller_plugin_name = value

    @property
    def planner_plugin_name(self):
        """Message field 'planner_plugin_name'."""
        return self._planner_plugin_name

    @planner_plugin_name.setter
    def planner_plugin_name(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'planner_plugin_name' field must be of type 'str'"
        self._planner_plugin_name = value
