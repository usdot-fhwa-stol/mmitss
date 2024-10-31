# generated from rosidl_generator_py/resource/_idl.py.em
# with input from carma_planning_msgs:srv/GetPluginApi.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_GetPluginApi_Request(type):
    """Metaclass of message 'GetPluginApi_Request'."""

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
                'carma_planning_msgs.srv.GetPluginApi_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__get_plugin_api__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__get_plugin_api__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__get_plugin_api__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__get_plugin_api__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__get_plugin_api__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class GetPluginApi_Request(metaclass=Metaclass_GetPluginApi_Request):
    """Message class 'GetPluginApi_Request'."""

    __slots__ = [
        '_capability',
    ]

    _fields_and_field_types = {
        'capability': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.capability = kwargs.get('capability', str())

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
        if self.capability != other.capability:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def capability(self):
        """Message field 'capability'."""
        return self._capability

    @capability.setter
    def capability(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'capability' field must be of type 'str'"
        self._capability = value


# Import statements for member types

# already imported above
# import rosidl_parser.definition


class Metaclass_GetPluginApi_Response(type):
    """Metaclass of message 'GetPluginApi_Response'."""

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
                'carma_planning_msgs.srv.GetPluginApi_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__get_plugin_api__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__get_plugin_api__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__get_plugin_api__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__get_plugin_api__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__get_plugin_api__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class GetPluginApi_Response(metaclass=Metaclass_GetPluginApi_Response):
    """Message class 'GetPluginApi_Response'."""

    __slots__ = [
        '_plan_service',
    ]

    _fields_and_field_types = {
        'plan_service': 'sequence<string>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.UnboundedString()),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.plan_service = kwargs.get('plan_service', [])

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
        if self.plan_service != other.plan_service:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def plan_service(self):
        """Message field 'plan_service'."""
        return self._plan_service

    @plan_service.setter
    def plan_service(self, value):
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
                "The 'plan_service' field must be a set or sequence and each value of type 'str'"
        self._plan_service = value


class Metaclass_GetPluginApi(type):
    """Metaclass of service 'GetPluginApi'."""

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
                'carma_planning_msgs.srv.GetPluginApi')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__get_plugin_api

            from carma_planning_msgs.srv import _get_plugin_api
            if _get_plugin_api.Metaclass_GetPluginApi_Request._TYPE_SUPPORT is None:
                _get_plugin_api.Metaclass_GetPluginApi_Request.__import_type_support__()
            if _get_plugin_api.Metaclass_GetPluginApi_Response._TYPE_SUPPORT is None:
                _get_plugin_api.Metaclass_GetPluginApi_Response.__import_type_support__()


class GetPluginApi(metaclass=Metaclass_GetPluginApi):
    from carma_planning_msgs.srv._get_plugin_api import GetPluginApi_Request as Request
    from carma_planning_msgs.srv._get_plugin_api import GetPluginApi_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
