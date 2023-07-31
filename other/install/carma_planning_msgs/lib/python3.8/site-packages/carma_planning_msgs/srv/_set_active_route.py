# generated from rosidl_generator_py/resource/_idl.py.em
# with input from carma_planning_msgs:srv/SetActiveRoute.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_SetActiveRoute_Request(type):
    """Metaclass of message 'SetActiveRoute_Request'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'ROUTE_ID': 0,
        'DESTINATION_POINTS_ARRAY': 1,
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
                'carma_planning_msgs.srv.SetActiveRoute_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__set_active_route__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__set_active_route__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__set_active_route__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__set_active_route__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__set_active_route__request

            from carma_v2x_msgs.msg import Position3D
            if Position3D.__class__._TYPE_SUPPORT is None:
                Position3D.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'ROUTE_ID': cls.__constants['ROUTE_ID'],
            'DESTINATION_POINTS_ARRAY': cls.__constants['DESTINATION_POINTS_ARRAY'],
        }

    @property
    def ROUTE_ID(self):
        """Message constant 'ROUTE_ID'."""
        return Metaclass_SetActiveRoute_Request.__constants['ROUTE_ID']

    @property
    def DESTINATION_POINTS_ARRAY(self):
        """Message constant 'DESTINATION_POINTS_ARRAY'."""
        return Metaclass_SetActiveRoute_Request.__constants['DESTINATION_POINTS_ARRAY']


class SetActiveRoute_Request(metaclass=Metaclass_SetActiveRoute_Request):
    """
    Message class 'SetActiveRoute_Request'.

    Constants:
      ROUTE_ID
      DESTINATION_POINTS_ARRAY
    """

    __slots__ = [
        '_choice',
        '_route_id',
        '_destination_points',
    ]

    _fields_and_field_types = {
        'choice': 'uint8',
        'route_id': 'string',
        'destination_points': 'sequence<carma_v2x_msgs/Position3D>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['carma_v2x_msgs', 'msg'], 'Position3D')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.choice = kwargs.get('choice', int())
        self.route_id = kwargs.get('route_id', str())
        self.destination_points = kwargs.get('destination_points', [])

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
        if self.route_id != other.route_id:
            return False
        if self.destination_points != other.destination_points:
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
    def route_id(self):
        """Message field 'route_id'."""
        return self._route_id

    @route_id.setter
    def route_id(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'route_id' field must be of type 'str'"
        self._route_id = value

    @property
    def destination_points(self):
        """Message field 'destination_points'."""
        return self._destination_points

    @destination_points.setter
    def destination_points(self, value):
        if __debug__:
            from carma_v2x_msgs.msg import Position3D
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
                 all(isinstance(v, Position3D) for v in value) and
                 True), \
                "The 'destination_points' field must be a set or sequence and each value of type 'Position3D'"
        self._destination_points = value


# Import statements for member types

# already imported above
# import rosidl_parser.definition


class Metaclass_SetActiveRoute_Response(type):
    """Metaclass of message 'SetActiveRoute_Response'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'NO_ERROR': 0,
        'NO_ROUTE': 1,
        'ALREADY_FOLLOWING_ROUTE': 2,
        'ROUTE_FILE_ERROR': 3,
        'ROUTING_FAILURE': 4,
        'TRANSFORM_ERROR': 5,
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
                'carma_planning_msgs.srv.SetActiveRoute_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__set_active_route__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__set_active_route__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__set_active_route__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__set_active_route__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__set_active_route__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'NO_ERROR': cls.__constants['NO_ERROR'],
            'NO_ROUTE': cls.__constants['NO_ROUTE'],
            'ALREADY_FOLLOWING_ROUTE': cls.__constants['ALREADY_FOLLOWING_ROUTE'],
            'ROUTE_FILE_ERROR': cls.__constants['ROUTE_FILE_ERROR'],
            'ROUTING_FAILURE': cls.__constants['ROUTING_FAILURE'],
            'TRANSFORM_ERROR': cls.__constants['TRANSFORM_ERROR'],
        }

    @property
    def NO_ERROR(self):
        """Message constant 'NO_ERROR'."""
        return Metaclass_SetActiveRoute_Response.__constants['NO_ERROR']

    @property
    def NO_ROUTE(self):
        """Message constant 'NO_ROUTE'."""
        return Metaclass_SetActiveRoute_Response.__constants['NO_ROUTE']

    @property
    def ALREADY_FOLLOWING_ROUTE(self):
        """Message constant 'ALREADY_FOLLOWING_ROUTE'."""
        return Metaclass_SetActiveRoute_Response.__constants['ALREADY_FOLLOWING_ROUTE']

    @property
    def ROUTE_FILE_ERROR(self):
        """Message constant 'ROUTE_FILE_ERROR'."""
        return Metaclass_SetActiveRoute_Response.__constants['ROUTE_FILE_ERROR']

    @property
    def ROUTING_FAILURE(self):
        """Message constant 'ROUTING_FAILURE'."""
        return Metaclass_SetActiveRoute_Response.__constants['ROUTING_FAILURE']

    @property
    def TRANSFORM_ERROR(self):
        """Message constant 'TRANSFORM_ERROR'."""
        return Metaclass_SetActiveRoute_Response.__constants['TRANSFORM_ERROR']


class SetActiveRoute_Response(metaclass=Metaclass_SetActiveRoute_Response):
    """
    Message class 'SetActiveRoute_Response'.

    Constants:
      NO_ERROR
      NO_ROUTE
      ALREADY_FOLLOWING_ROUTE
      ROUTE_FILE_ERROR
      ROUTING_FAILURE
      TRANSFORM_ERROR
    """

    __slots__ = [
        '_error_status',
    ]

    _fields_and_field_types = {
        'error_status': 'uint8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.error_status = kwargs.get('error_status', int())

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
        if self.error_status != other.error_status:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def error_status(self):
        """Message field 'error_status'."""
        return self._error_status

    @error_status.setter
    def error_status(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'error_status' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'error_status' field must be an unsigned integer in [0, 255]"
        self._error_status = value


class Metaclass_SetActiveRoute(type):
    """Metaclass of service 'SetActiveRoute'."""

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
                'carma_planning_msgs.srv.SetActiveRoute')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__set_active_route

            from carma_planning_msgs.srv import _set_active_route
            if _set_active_route.Metaclass_SetActiveRoute_Request._TYPE_SUPPORT is None:
                _set_active_route.Metaclass_SetActiveRoute_Request.__import_type_support__()
            if _set_active_route.Metaclass_SetActiveRoute_Response._TYPE_SUPPORT is None:
                _set_active_route.Metaclass_SetActiveRoute_Response.__import_type_support__()


class SetActiveRoute(metaclass=Metaclass_SetActiveRoute):
    from carma_planning_msgs.srv._set_active_route import SetActiveRoute_Request as Request
    from carma_planning_msgs.srv._set_active_route import SetActiveRoute_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
