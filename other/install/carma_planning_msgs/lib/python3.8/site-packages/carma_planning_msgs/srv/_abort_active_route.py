# generated from rosidl_generator_py/resource/_idl.py.em
# with input from carma_planning_msgs:srv/AbortActiveRoute.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_AbortActiveRoute_Request(type):
    """Metaclass of message 'AbortActiveRoute_Request'."""

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
                'carma_planning_msgs.srv.AbortActiveRoute_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__abort_active_route__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__abort_active_route__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__abort_active_route__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__abort_active_route__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__abort_active_route__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class AbortActiveRoute_Request(metaclass=Metaclass_AbortActiveRoute_Request):
    """Message class 'AbortActiveRoute_Request'."""

    __slots__ = [
    ]

    _fields_and_field_types = {
    }

    SLOT_TYPES = (
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))

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
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)


# Import statements for member types

# already imported above
# import rosidl_parser.definition


class Metaclass_AbortActiveRoute_Response(type):
    """Metaclass of message 'AbortActiveRoute_Response'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'NO_ERROR': 0,
        'NO_ACTIVE_ROUTE': 1,
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
                'carma_planning_msgs.srv.AbortActiveRoute_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__abort_active_route__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__abort_active_route__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__abort_active_route__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__abort_active_route__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__abort_active_route__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'NO_ERROR': cls.__constants['NO_ERROR'],
            'NO_ACTIVE_ROUTE': cls.__constants['NO_ACTIVE_ROUTE'],
        }

    @property
    def NO_ERROR(self):
        """Message constant 'NO_ERROR'."""
        return Metaclass_AbortActiveRoute_Response.__constants['NO_ERROR']

    @property
    def NO_ACTIVE_ROUTE(self):
        """Message constant 'NO_ACTIVE_ROUTE'."""
        return Metaclass_AbortActiveRoute_Response.__constants['NO_ACTIVE_ROUTE']


class AbortActiveRoute_Response(metaclass=Metaclass_AbortActiveRoute_Response):
    """
    Message class 'AbortActiveRoute_Response'.

    Constants:
      NO_ERROR
      NO_ACTIVE_ROUTE
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


class Metaclass_AbortActiveRoute(type):
    """Metaclass of service 'AbortActiveRoute'."""

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
                'carma_planning_msgs.srv.AbortActiveRoute')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__abort_active_route

            from carma_planning_msgs.srv import _abort_active_route
            if _abort_active_route.Metaclass_AbortActiveRoute_Request._TYPE_SUPPORT is None:
                _abort_active_route.Metaclass_AbortActiveRoute_Request.__import_type_support__()
            if _abort_active_route.Metaclass_AbortActiveRoute_Response._TYPE_SUPPORT is None:
                _abort_active_route.Metaclass_AbortActiveRoute_Response.__import_type_support__()


class AbortActiveRoute(metaclass=Metaclass_AbortActiveRoute):
    from carma_planning_msgs.srv._abort_active_route import AbortActiveRoute_Request as Request
    from carma_planning_msgs.srv._abort_active_route import AbortActiveRoute_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
