# generated from rosidl_generator_py/resource/_idl.py.em
# with input from carma_planning_msgs:srv/ComputePlanCost.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_ComputePlanCost_Request(type):
    """Metaclass of message 'ComputePlanCost_Request'."""

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
                'carma_planning_msgs.srv.ComputePlanCost_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__compute_plan_cost__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__compute_plan_cost__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__compute_plan_cost__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__compute_plan_cost__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__compute_plan_cost__request

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


class ComputePlanCost_Request(metaclass=Metaclass_ComputePlanCost_Request):
    """Message class 'ComputePlanCost_Request'."""

    __slots__ = [
        '_maneuver_plan',
    ]

    _fields_and_field_types = {
        'maneuver_plan': 'carma_planning_msgs/ManeuverPlan',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['carma_planning_msgs', 'msg'], 'ManeuverPlan'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from carma_planning_msgs.msg import ManeuverPlan
        self.maneuver_plan = kwargs.get('maneuver_plan', ManeuverPlan())

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
        if self.maneuver_plan != other.maneuver_plan:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

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


# Import statements for member types

# already imported above
# import rosidl_parser.definition


class Metaclass_ComputePlanCost_Response(type):
    """Metaclass of message 'ComputePlanCost_Response'."""

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
                'carma_planning_msgs.srv.ComputePlanCost_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__compute_plan_cost__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__compute_plan_cost__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__compute_plan_cost__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__compute_plan_cost__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__compute_plan_cost__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ComputePlanCost_Response(metaclass=Metaclass_ComputePlanCost_Response):
    """Message class 'ComputePlanCost_Response'."""

    __slots__ = [
        '_plan_cost',
    ]

    _fields_and_field_types = {
        'plan_cost': 'double',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.plan_cost = kwargs.get('plan_cost', float())

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
        if self.plan_cost != other.plan_cost:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def plan_cost(self):
        """Message field 'plan_cost'."""
        return self._plan_cost

    @plan_cost.setter
    def plan_cost(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'plan_cost' field must be of type 'float'"
        self._plan_cost = value


class Metaclass_ComputePlanCost(type):
    """Metaclass of service 'ComputePlanCost'."""

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
                'carma_planning_msgs.srv.ComputePlanCost')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__compute_plan_cost

            from carma_planning_msgs.srv import _compute_plan_cost
            if _compute_plan_cost.Metaclass_ComputePlanCost_Request._TYPE_SUPPORT is None:
                _compute_plan_cost.Metaclass_ComputePlanCost_Request.__import_type_support__()
            if _compute_plan_cost.Metaclass_ComputePlanCost_Response._TYPE_SUPPORT is None:
                _compute_plan_cost.Metaclass_ComputePlanCost_Response.__import_type_support__()


class ComputePlanCost(metaclass=Metaclass_ComputePlanCost):
    from carma_planning_msgs.srv._compute_plan_cost import ComputePlanCost_Request as Request
    from carma_planning_msgs.srv._compute_plan_cost import ComputePlanCost_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
