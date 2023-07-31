# generated from rosidl_generator_py/resource/_idl.py.em
# with input from carma_planning_msgs:srv/PlanManeuvers.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_PlanManeuvers_Request(type):
    """Metaclass of message 'PlanManeuvers_Request'."""

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
                'carma_planning_msgs.srv.PlanManeuvers_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__plan_maneuvers__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__plan_maneuvers__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__plan_maneuvers__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__plan_maneuvers__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__plan_maneuvers__request

            from carma_planning_msgs.msg import ManeuverPlan
            if ManeuverPlan.__class__._TYPE_SUPPORT is None:
                ManeuverPlan.__class__.__import_type_support__()

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


class PlanManeuvers_Request(metaclass=Metaclass_PlanManeuvers_Request):
    """Message class 'PlanManeuvers_Request'."""

    __slots__ = [
        '_header',
        '_prior_plan',
        '_veh_x',
        '_veh_y',
        '_veh_downtrack',
        '_veh_logitudinal_velocity',
        '_veh_lane_id',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'prior_plan': 'carma_planning_msgs/ManeuverPlan',
        'veh_x': 'double',
        'veh_y': 'double',
        'veh_downtrack': 'double',
        'veh_logitudinal_velocity': 'double',
        'veh_lane_id': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['carma_planning_msgs', 'msg'], 'ManeuverPlan'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        from carma_planning_msgs.msg import ManeuverPlan
        self.prior_plan = kwargs.get('prior_plan', ManeuverPlan())
        self.veh_x = kwargs.get('veh_x', float())
        self.veh_y = kwargs.get('veh_y', float())
        self.veh_downtrack = kwargs.get('veh_downtrack', float())
        self.veh_logitudinal_velocity = kwargs.get('veh_logitudinal_velocity', float())
        self.veh_lane_id = kwargs.get('veh_lane_id', str())

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
        if self.prior_plan != other.prior_plan:
            return False
        if self.veh_x != other.veh_x:
            return False
        if self.veh_y != other.veh_y:
            return False
        if self.veh_downtrack != other.veh_downtrack:
            return False
        if self.veh_logitudinal_velocity != other.veh_logitudinal_velocity:
            return False
        if self.veh_lane_id != other.veh_lane_id:
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
    def prior_plan(self):
        """Message field 'prior_plan'."""
        return self._prior_plan

    @prior_plan.setter
    def prior_plan(self, value):
        if __debug__:
            from carma_planning_msgs.msg import ManeuverPlan
            assert \
                isinstance(value, ManeuverPlan), \
                "The 'prior_plan' field must be a sub message of type 'ManeuverPlan'"
        self._prior_plan = value

    @property
    def veh_x(self):
        """Message field 'veh_x'."""
        return self._veh_x

    @veh_x.setter
    def veh_x(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'veh_x' field must be of type 'float'"
        self._veh_x = value

    @property
    def veh_y(self):
        """Message field 'veh_y'."""
        return self._veh_y

    @veh_y.setter
    def veh_y(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'veh_y' field must be of type 'float'"
        self._veh_y = value

    @property
    def veh_downtrack(self):
        """Message field 'veh_downtrack'."""
        return self._veh_downtrack

    @veh_downtrack.setter
    def veh_downtrack(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'veh_downtrack' field must be of type 'float'"
        self._veh_downtrack = value

    @property
    def veh_logitudinal_velocity(self):
        """Message field 'veh_logitudinal_velocity'."""
        return self._veh_logitudinal_velocity

    @veh_logitudinal_velocity.setter
    def veh_logitudinal_velocity(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'veh_logitudinal_velocity' field must be of type 'float'"
        self._veh_logitudinal_velocity = value

    @property
    def veh_lane_id(self):
        """Message field 'veh_lane_id'."""
        return self._veh_lane_id

    @veh_lane_id.setter
    def veh_lane_id(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'veh_lane_id' field must be of type 'str'"
        self._veh_lane_id = value


# Import statements for member types

# already imported above
# import rosidl_parser.definition


class Metaclass_PlanManeuvers_Response(type):
    """Metaclass of message 'PlanManeuvers_Response'."""

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
                'carma_planning_msgs.srv.PlanManeuvers_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__plan_maneuvers__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__plan_maneuvers__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__plan_maneuvers__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__plan_maneuvers__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__plan_maneuvers__response

            from carma_planning_msgs.msg import ManeuverPlan
            if ManeuverPlan.__class__._TYPE_SUPPORT is None:
                ManeuverPlan.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class PlanManeuvers_Response(metaclass=Metaclass_PlanManeuvers_Response):
    """Message class 'PlanManeuvers_Response'."""

    __slots__ = [
        '_new_plan',
    ]

    _fields_and_field_types = {
        'new_plan': 'carma_planning_msgs/ManeuverPlan',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['carma_planning_msgs', 'msg'], 'ManeuverPlan'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from carma_planning_msgs.msg import ManeuverPlan
        self.new_plan = kwargs.get('new_plan', ManeuverPlan())

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
        if self.new_plan != other.new_plan:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def new_plan(self):
        """Message field 'new_plan'."""
        return self._new_plan

    @new_plan.setter
    def new_plan(self, value):
        if __debug__:
            from carma_planning_msgs.msg import ManeuverPlan
            assert \
                isinstance(value, ManeuverPlan), \
                "The 'new_plan' field must be a sub message of type 'ManeuverPlan'"
        self._new_plan = value


class Metaclass_PlanManeuvers(type):
    """Metaclass of service 'PlanManeuvers'."""

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
                'carma_planning_msgs.srv.PlanManeuvers')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__plan_maneuvers

            from carma_planning_msgs.srv import _plan_maneuvers
            if _plan_maneuvers.Metaclass_PlanManeuvers_Request._TYPE_SUPPORT is None:
                _plan_maneuvers.Metaclass_PlanManeuvers_Request.__import_type_support__()
            if _plan_maneuvers.Metaclass_PlanManeuvers_Response._TYPE_SUPPORT is None:
                _plan_maneuvers.Metaclass_PlanManeuvers_Response.__import_type_support__()


class PlanManeuvers(metaclass=Metaclass_PlanManeuvers):
    from carma_planning_msgs.srv._plan_maneuvers import PlanManeuvers_Request as Request
    from carma_planning_msgs.srv._plan_maneuvers import PlanManeuvers_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
