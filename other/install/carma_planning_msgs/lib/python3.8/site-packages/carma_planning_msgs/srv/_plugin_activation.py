# generated from rosidl_generator_py/resource/_idl.py.em
# with input from carma_planning_msgs:srv/PluginActivation.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_PluginActivation_Request(type):
    """Metaclass of message 'PluginActivation_Request'."""

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
                'carma_planning_msgs.srv.PluginActivation_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__plugin_activation__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__plugin_activation__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__plugin_activation__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__plugin_activation__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__plugin_activation__request

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


class PluginActivation_Request(metaclass=Metaclass_PluginActivation_Request):
    """Message class 'PluginActivation_Request'."""

    __slots__ = [
        '_header',
        '_plugin_name',
        '_plugin_version',
        '_activated',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'plugin_name': 'string',
        'plugin_version': 'string',
        'activated': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.plugin_name = kwargs.get('plugin_name', str())
        self.plugin_version = kwargs.get('plugin_version', str())
        self.activated = kwargs.get('activated', bool())

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
        if self.plugin_name != other.plugin_name:
            return False
        if self.plugin_version != other.plugin_version:
            return False
        if self.activated != other.activated:
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
    def plugin_name(self):
        """Message field 'plugin_name'."""
        return self._plugin_name

    @plugin_name.setter
    def plugin_name(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'plugin_name' field must be of type 'str'"
        self._plugin_name = value

    @property
    def plugin_version(self):
        """Message field 'plugin_version'."""
        return self._plugin_version

    @plugin_version.setter
    def plugin_version(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'plugin_version' field must be of type 'str'"
        self._plugin_version = value

    @property
    def activated(self):
        """Message field 'activated'."""
        return self._activated

    @activated.setter
    def activated(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'activated' field must be of type 'bool'"
        self._activated = value


# Import statements for member types

# already imported above
# import rosidl_parser.definition


class Metaclass_PluginActivation_Response(type):
    """Metaclass of message 'PluginActivation_Response'."""

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
                'carma_planning_msgs.srv.PluginActivation_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__plugin_activation__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__plugin_activation__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__plugin_activation__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__plugin_activation__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__plugin_activation__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class PluginActivation_Response(metaclass=Metaclass_PluginActivation_Response):
    """Message class 'PluginActivation_Response'."""

    __slots__ = [
        '_newstate',
    ]

    _fields_and_field_types = {
        'newstate': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.newstate = kwargs.get('newstate', bool())

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
        if self.newstate != other.newstate:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def newstate(self):
        """Message field 'newstate'."""
        return self._newstate

    @newstate.setter
    def newstate(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'newstate' field must be of type 'bool'"
        self._newstate = value


class Metaclass_PluginActivation(type):
    """Metaclass of service 'PluginActivation'."""

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
                'carma_planning_msgs.srv.PluginActivation')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__plugin_activation

            from carma_planning_msgs.srv import _plugin_activation
            if _plugin_activation.Metaclass_PluginActivation_Request._TYPE_SUPPORT is None:
                _plugin_activation.Metaclass_PluginActivation_Request.__import_type_support__()
            if _plugin_activation.Metaclass_PluginActivation_Response._TYPE_SUPPORT is None:
                _plugin_activation.Metaclass_PluginActivation_Response.__import_type_support__()


class PluginActivation(metaclass=Metaclass_PluginActivation):
    from carma_planning_msgs.srv._plugin_activation import PluginActivation_Request as Request
    from carma_planning_msgs.srv._plugin_activation import PluginActivation_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
