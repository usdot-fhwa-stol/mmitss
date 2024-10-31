# generated from rosidl_generator_py/resource/_idl.py.em
# with input from carma_debug_ros2_msgs:msg/TrajectoryCurvatureSpeeds.idl
# generated code does not contain a copyright notice


# Import statements for member types

# Member 'curvatures'
# Member 'speed_limits'
# Member 'velocity_profile'
# Member 'tangent_headings'
# Member 'relative_downtrack'
import array  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_TrajectoryCurvatureSpeeds(type):
    """Metaclass of message 'TrajectoryCurvatureSpeeds'."""

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
                'carma_debug_ros2_msgs.msg.TrajectoryCurvatureSpeeds')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__trajectory_curvature_speeds
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__trajectory_curvature_speeds
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__trajectory_curvature_speeds
            cls._TYPE_SUPPORT = module.type_support_msg__msg__trajectory_curvature_speeds
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__trajectory_curvature_speeds

            from carma_planning_msgs.msg import TrajectoryPlan
            if TrajectoryPlan.__class__._TYPE_SUPPORT is None:
                TrajectoryPlan.__class__.__import_type_support__()

            from carma_planning_msgs.msg import VehicleState
            if VehicleState.__class__._TYPE_SUPPORT is None:
                VehicleState.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class TrajectoryCurvatureSpeeds(metaclass=Metaclass_TrajectoryCurvatureSpeeds):
    """Message class 'TrajectoryCurvatureSpeeds'."""

    __slots__ = [
        '_trajectory_plan',
        '_curvatures',
        '_speed_limits',
        '_velocity_profile',
        '_tangent_headings',
        '_relative_downtrack',
        '_lat_accel_limit',
        '_lon_accel_limit',
        '_starting_state',
    ]

    _fields_and_field_types = {
        'trajectory_plan': 'carma_planning_msgs/TrajectoryPlan',
        'curvatures': 'sequence<double>',
        'speed_limits': 'sequence<double>',
        'velocity_profile': 'sequence<double>',
        'tangent_headings': 'sequence<double>',
        'relative_downtrack': 'sequence<double>',
        'lat_accel_limit': 'double',
        'lon_accel_limit': 'double',
        'starting_state': 'carma_planning_msgs/VehicleState',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['carma_planning_msgs', 'msg'], 'TrajectoryPlan'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('double')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('double')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('double')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('double')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('double')),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['carma_planning_msgs', 'msg'], 'VehicleState'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from carma_planning_msgs.msg import TrajectoryPlan
        self.trajectory_plan = kwargs.get('trajectory_plan', TrajectoryPlan())
        self.curvatures = array.array('d', kwargs.get('curvatures', []))
        self.speed_limits = array.array('d', kwargs.get('speed_limits', []))
        self.velocity_profile = array.array('d', kwargs.get('velocity_profile', []))
        self.tangent_headings = array.array('d', kwargs.get('tangent_headings', []))
        self.relative_downtrack = array.array('d', kwargs.get('relative_downtrack', []))
        self.lat_accel_limit = kwargs.get('lat_accel_limit', float())
        self.lon_accel_limit = kwargs.get('lon_accel_limit', float())
        from carma_planning_msgs.msg import VehicleState
        self.starting_state = kwargs.get('starting_state', VehicleState())

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
        if self.trajectory_plan != other.trajectory_plan:
            return False
        if self.curvatures != other.curvatures:
            return False
        if self.speed_limits != other.speed_limits:
            return False
        if self.velocity_profile != other.velocity_profile:
            return False
        if self.tangent_headings != other.tangent_headings:
            return False
        if self.relative_downtrack != other.relative_downtrack:
            return False
        if self.lat_accel_limit != other.lat_accel_limit:
            return False
        if self.lon_accel_limit != other.lon_accel_limit:
            return False
        if self.starting_state != other.starting_state:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def trajectory_plan(self):
        """Message field 'trajectory_plan'."""
        return self._trajectory_plan

    @trajectory_plan.setter
    def trajectory_plan(self, value):
        if __debug__:
            from carma_planning_msgs.msg import TrajectoryPlan
            assert \
                isinstance(value, TrajectoryPlan), \
                "The 'trajectory_plan' field must be a sub message of type 'TrajectoryPlan'"
        self._trajectory_plan = value

    @property
    def curvatures(self):
        """Message field 'curvatures'."""
        return self._curvatures

    @curvatures.setter
    def curvatures(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'd', \
                "The 'curvatures' array.array() must have the type code of 'd'"
            self._curvatures = value
            return
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
                 all(isinstance(v, float) for v in value) and
                 True), \
                "The 'curvatures' field must be a set or sequence and each value of type 'float'"
        self._curvatures = array.array('d', value)

    @property
    def speed_limits(self):
        """Message field 'speed_limits'."""
        return self._speed_limits

    @speed_limits.setter
    def speed_limits(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'd', \
                "The 'speed_limits' array.array() must have the type code of 'd'"
            self._speed_limits = value
            return
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
                 all(isinstance(v, float) for v in value) and
                 True), \
                "The 'speed_limits' field must be a set or sequence and each value of type 'float'"
        self._speed_limits = array.array('d', value)

    @property
    def velocity_profile(self):
        """Message field 'velocity_profile'."""
        return self._velocity_profile

    @velocity_profile.setter
    def velocity_profile(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'd', \
                "The 'velocity_profile' array.array() must have the type code of 'd'"
            self._velocity_profile = value
            return
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
                 all(isinstance(v, float) for v in value) and
                 True), \
                "The 'velocity_profile' field must be a set or sequence and each value of type 'float'"
        self._velocity_profile = array.array('d', value)

    @property
    def tangent_headings(self):
        """Message field 'tangent_headings'."""
        return self._tangent_headings

    @tangent_headings.setter
    def tangent_headings(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'd', \
                "The 'tangent_headings' array.array() must have the type code of 'd'"
            self._tangent_headings = value
            return
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
                 all(isinstance(v, float) for v in value) and
                 True), \
                "The 'tangent_headings' field must be a set or sequence and each value of type 'float'"
        self._tangent_headings = array.array('d', value)

    @property
    def relative_downtrack(self):
        """Message field 'relative_downtrack'."""
        return self._relative_downtrack

    @relative_downtrack.setter
    def relative_downtrack(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'd', \
                "The 'relative_downtrack' array.array() must have the type code of 'd'"
            self._relative_downtrack = value
            return
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
                 all(isinstance(v, float) for v in value) and
                 True), \
                "The 'relative_downtrack' field must be a set or sequence and each value of type 'float'"
        self._relative_downtrack = array.array('d', value)

    @property
    def lat_accel_limit(self):
        """Message field 'lat_accel_limit'."""
        return self._lat_accel_limit

    @lat_accel_limit.setter
    def lat_accel_limit(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'lat_accel_limit' field must be of type 'float'"
        self._lat_accel_limit = value

    @property
    def lon_accel_limit(self):
        """Message field 'lon_accel_limit'."""
        return self._lon_accel_limit

    @lon_accel_limit.setter
    def lon_accel_limit(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'lon_accel_limit' field must be of type 'float'"
        self._lon_accel_limit = value

    @property
    def starting_state(self):
        """Message field 'starting_state'."""
        return self._starting_state

    @starting_state.setter
    def starting_state(self, value):
        if __debug__:
            from carma_planning_msgs.msg import VehicleState
            assert \
                isinstance(value, VehicleState), \
                "The 'starting_state' field must be a sub message of type 'VehicleState'"
        self._starting_state = value
