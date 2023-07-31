# generated from rosidl_generator_py/resource/_idl.py.em
# with input from carma_planning_msgs:srv/PlanTrajectory.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_PlanTrajectory_Request(type):
    """Metaclass of message 'PlanTrajectory_Request'."""

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
                'carma_planning_msgs.srv.PlanTrajectory_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__plan_trajectory__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__plan_trajectory__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__plan_trajectory__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__plan_trajectory__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__plan_trajectory__request

            from carma_planning_msgs.msg import ManeuverPlan
            if ManeuverPlan.__class__._TYPE_SUPPORT is None:
                ManeuverPlan.__class__.__import_type_support__()

            from carma_planning_msgs.msg import TrajectoryPlan
            if TrajectoryPlan.__class__._TYPE_SUPPORT is None:
                TrajectoryPlan.__class__.__import_type_support__()

            from carma_planning_msgs.msg import VehicleState
            if VehicleState.__class__._TYPE_SUPPORT is None:
                VehicleState.__class__.__import_type_support__()

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


class PlanTrajectory_Request(metaclass=Metaclass_PlanTrajectory_Request):
    """Message class 'PlanTrajectory_Request'."""

    __slots__ = [
        '_header',
        '_vehicle_state',
        '_maneuver_plan',
        '_initial_trajectory_plan',
        '_maneuver_index_to_plan',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'vehicle_state': 'carma_planning_msgs/VehicleState',
        'maneuver_plan': 'carma_planning_msgs/ManeuverPlan',
        'initial_trajectory_plan': 'carma_planning_msgs/TrajectoryPlan',
        'maneuver_index_to_plan': 'uint16',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['carma_planning_msgs', 'msg'], 'VehicleState'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['carma_planning_msgs', 'msg'], 'ManeuverPlan'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['carma_planning_msgs', 'msg'], 'TrajectoryPlan'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        from carma_planning_msgs.msg import VehicleState
        self.vehicle_state = kwargs.get('vehicle_state', VehicleState())
        from carma_planning_msgs.msg import ManeuverPlan
        self.maneuver_plan = kwargs.get('maneuver_plan', ManeuverPlan())
        from carma_planning_msgs.msg import TrajectoryPlan
        self.initial_trajectory_plan = kwargs.get('initial_trajectory_plan', TrajectoryPlan())
        self.maneuver_index_to_plan = kwargs.get('maneuver_index_to_plan', int())

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
        if self.vehicle_state != other.vehicle_state:
            return False
        if self.maneuver_plan != other.maneuver_plan:
            return False
        if self.initial_trajectory_plan != other.initial_trajectory_plan:
            return False
        if self.maneuver_index_to_plan != other.maneuver_index_to_plan:
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
    def vehicle_state(self):
        """Message field 'vehicle_state'."""
        return self._vehicle_state

    @vehicle_state.setter
    def vehicle_state(self, value):
        if __debug__:
            from carma_planning_msgs.msg import VehicleState
            assert \
                isinstance(value, VehicleState), \
                "The 'vehicle_state' field must be a sub message of type 'VehicleState'"
        self._vehicle_state = value

    @property
    def maneuver_plan(self):
        """Message field 'maneuver_plan'."""
        return self._maneuver_plan

    @maneuver_plan.setter
    def maneuver_plan(self, value):
        if __debug__:
            from carma_planning_msgs.msg import ManeuverPlan
            assert \
                isinstance(value, ManeuverPlan), \
                "The 'maneuver_plan' field must be a sub message of type 'ManeuverPlan'"
        self._maneuver_plan = value

    @property
    def initial_trajectory_plan(self):
        """Message field 'initial_trajectory_plan'."""
        return self._initial_trajectory_plan

    @initial_trajectory_plan.setter
    def initial_trajectory_plan(self, value):
        if __debug__:
            from carma_planning_msgs.msg import TrajectoryPlan
            assert \
                isinstance(value, TrajectoryPlan), \
                "The 'initial_trajectory_plan' field must be a sub message of type 'TrajectoryPlan'"
        self._initial_trajectory_plan = value

    @property
    def maneuver_index_to_plan(self):
        """Message field 'maneuver_index_to_plan'."""
        return self._maneuver_index_to_plan

    @maneuver_index_to_plan.setter
    def maneuver_index_to_plan(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'maneuver_index_to_plan' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'maneuver_index_to_plan' field must be an unsigned integer in [0, 65535]"
        self._maneuver_index_to_plan = value


# Import statements for member types

# Member 'related_maneuvers'
# Member 'maneuver_status'
import array  # noqa: E402, I100

# already imported above
# import rosidl_parser.definition


class Metaclass_PlanTrajectory_Response(type):
    """Metaclass of message 'PlanTrajectory_Response'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'MANEUVER_ABORTED': 0,
        'MANEUVER_IN_PROGRESS': 1,
        'MANEUVER_COMPLETE': 2,
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
                'carma_planning_msgs.srv.PlanTrajectory_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__plan_trajectory__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__plan_trajectory__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__plan_trajectory__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__plan_trajectory__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__plan_trajectory__response

            from carma_planning_msgs.msg import TrajectoryPlan
            if TrajectoryPlan.__class__._TYPE_SUPPORT is None:
                TrajectoryPlan.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'MANEUVER_ABORTED': cls.__constants['MANEUVER_ABORTED'],
            'MANEUVER_IN_PROGRESS': cls.__constants['MANEUVER_IN_PROGRESS'],
            'MANEUVER_COMPLETE': cls.__constants['MANEUVER_COMPLETE'],
        }

    @property
    def MANEUVER_ABORTED(self):
        """Message constant 'MANEUVER_ABORTED'."""
        return Metaclass_PlanTrajectory_Response.__constants['MANEUVER_ABORTED']

    @property
    def MANEUVER_IN_PROGRESS(self):
        """Message constant 'MANEUVER_IN_PROGRESS'."""
        return Metaclass_PlanTrajectory_Response.__constants['MANEUVER_IN_PROGRESS']

    @property
    def MANEUVER_COMPLETE(self):
        """Message constant 'MANEUVER_COMPLETE'."""
        return Metaclass_PlanTrajectory_Response.__constants['MANEUVER_COMPLETE']


class PlanTrajectory_Response(metaclass=Metaclass_PlanTrajectory_Response):
    """
    Message class 'PlanTrajectory_Response'.

    Constants:
      MANEUVER_ABORTED
      MANEUVER_IN_PROGRESS
      MANEUVER_COMPLETE
    """

    __slots__ = [
        '_trajectory_plan',
        '_related_maneuvers',
        '_maneuver_status',
    ]

    _fields_and_field_types = {
        'trajectory_plan': 'carma_planning_msgs/TrajectoryPlan',
        'related_maneuvers': 'sequence<uint8>',
        'maneuver_status': 'sequence<uint8>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['carma_planning_msgs', 'msg'], 'TrajectoryPlan'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('uint8')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('uint8')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from carma_planning_msgs.msg import TrajectoryPlan
        self.trajectory_plan = kwargs.get('trajectory_plan', TrajectoryPlan())
        self.related_maneuvers = array.array('B', kwargs.get('related_maneuvers', []))
        self.maneuver_status = array.array('B', kwargs.get('maneuver_status', []))

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
        if self.related_maneuvers != other.related_maneuvers:
            return False
        if self.maneuver_status != other.maneuver_status:
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
    def related_maneuvers(self):
        """Message field 'related_maneuvers'."""
        return self._related_maneuvers

    @related_maneuvers.setter
    def related_maneuvers(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'B', \
                "The 'related_maneuvers' array.array() must have the type code of 'B'"
            self._related_maneuvers = value
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
                 all(isinstance(v, int) for v in value) and
                 all(val >= 0 and val < 256 for val in value)), \
                "The 'related_maneuvers' field must be a set or sequence and each value of type 'int' and each unsigned integer in [0, 255]"
        self._related_maneuvers = array.array('B', value)

    @property
    def maneuver_status(self):
        """Message field 'maneuver_status'."""
        return self._maneuver_status

    @maneuver_status.setter
    def maneuver_status(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'B', \
                "The 'maneuver_status' array.array() must have the type code of 'B'"
            self._maneuver_status = value
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
                 all(isinstance(v, int) for v in value) and
                 all(val >= 0 and val < 256 for val in value)), \
                "The 'maneuver_status' field must be a set or sequence and each value of type 'int' and each unsigned integer in [0, 255]"
        self._maneuver_status = array.array('B', value)


class Metaclass_PlanTrajectory(type):
    """Metaclass of service 'PlanTrajectory'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('carma_planning_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'carma_planning_msgs.srv.PlanTrajectory')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__plan_trajectory

            from carma_planning_msgs.srv import _plan_trajectory
            if _plan_trajectory.Metaclass_PlanTrajectory_Request._TYPE_SUPPORT is None:
                _plan_trajectory.Metaclass_PlanTrajectory_Request.__import_type_support__()
            if _plan_trajectory.Metaclass_PlanTrajectory_Response._TYPE_SUPPORT is None:
                _plan_trajectory.Metaclass_PlanTrajectory_Response.__import_type_support__()


class PlanTrajectory(metaclass=Metaclass_PlanTrajectory):
    from carma_planning_msgs.srv._plan_trajectory import PlanTrajectory_Request as Request
    from carma_planning_msgs.srv._plan_trajectory import PlanTrajectory_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
