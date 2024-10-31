# generated from rosidl_generator_py/resource/_idl.py.em
# with input from carma_driver_msgs:srv/SetLightBarIndicator.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_SetLightBarIndicator_Request(type):
    """Metaclass of message 'SetLightBarIndicator_Request'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'OFF': 0,
        'ON': 1,
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('carma_driver_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'carma_driver_msgs.srv.SetLightBarIndicator_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__set_light_bar_indicator__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__set_light_bar_indicator__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__set_light_bar_indicator__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__set_light_bar_indicator__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__set_light_bar_indicator__request

            from carma_msgs.msg import LightBarCDAType
            if LightBarCDAType.__class__._TYPE_SUPPORT is None:
                LightBarCDAType.__class__.__import_type_support__()

            from carma_msgs.msg import LightBarIndicator
            if LightBarIndicator.__class__._TYPE_SUPPORT is None:
                LightBarIndicator.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'OFF': cls.__constants['OFF'],
            'ON': cls.__constants['ON'],
        }

    @property
    def OFF(self):
        """Message constant 'OFF'."""
        return Metaclass_SetLightBarIndicator_Request.__constants['OFF']

    @property
    def ON(self):
        """Message constant 'ON'."""
        return Metaclass_SetLightBarIndicator_Request.__constants['ON']


class SetLightBarIndicator_Request(metaclass=Metaclass_SetLightBarIndicator_Request):
    """
    Message class 'SetLightBarIndicator_Request'.

    Constants:
      OFF
      ON
    """

    __slots__ = [
        '_state',
        '_requester_name',
        '_indicator',
        '_cda_type',
    ]

    _fields_and_field_types = {
        'state': 'uint8',
        'requester_name': 'string',
        'indicator': 'carma_msgs/LightBarIndicator',
        'cda_type': 'carma_msgs/LightBarCDAType',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['carma_msgs', 'msg'], 'LightBarIndicator'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['carma_msgs', 'msg'], 'LightBarCDAType'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.state = kwargs.get('state', int())
        self.requester_name = kwargs.get('requester_name', str())
        from carma_msgs.msg import LightBarIndicator
        self.indicator = kwargs.get('indicator', LightBarIndicator())
        from carma_msgs.msg import LightBarCDAType
        self.cda_type = kwargs.get('cda_type', LightBarCDAType())

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
        if self.state != other.state:
            return False
        if self.requester_name != other.requester_name:
            return False
        if self.indicator != other.indicator:
            return False
        if self.cda_type != other.cda_type:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def state(self):
        """Message field 'state'."""
        return self._state

    @state.setter
    def state(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'state' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'state' field must be an unsigned integer in [0, 255]"
        self._state = value

    @property
    def requester_name(self):
        """Message field 'requester_name'."""
        return self._requester_name

    @requester_name.setter
    def requester_name(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'requester_name' field must be of type 'str'"
        self._requester_name = value

    @property
    def indicator(self):
        """Message field 'indicator'."""
        return self._indicator

    @indicator.setter
    def indicator(self, value):
        if __debug__:
            from carma_msgs.msg import LightBarIndicator
            assert \
                isinstance(value, LightBarIndicator), \
                "The 'indicator' field must be a sub message of type 'LightBarIndicator'"
        self._indicator = value

    @property
    def cda_type(self):
        """Message field 'cda_type'."""
        return self._cda_type

    @cda_type.setter
    def cda_type(self, value):
        if __debug__:
            from carma_msgs.msg import LightBarCDAType
            assert \
                isinstance(value, LightBarCDAType), \
                "The 'cda_type' field must be a sub message of type 'LightBarCDAType'"
        self._cda_type = value


# Import statements for member types

# already imported above
# import rosidl_parser.definition


class Metaclass_SetLightBarIndicator_Response(type):
    """Metaclass of message 'SetLightBarIndicator_Response'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'SUCCESS': 0,
        'PERMISSION_DENIED': 1,
        'ERROR': 2,
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('carma_driver_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'carma_driver_msgs.srv.SetLightBarIndicator_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__set_light_bar_indicator__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__set_light_bar_indicator__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__set_light_bar_indicator__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__set_light_bar_indicator__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__set_light_bar_indicator__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'SUCCESS': cls.__constants['SUCCESS'],
            'PERMISSION_DENIED': cls.__constants['PERMISSION_DENIED'],
            'ERROR': cls.__constants['ERROR'],
        }

    @property
    def SUCCESS(self):
        """Message constant 'SUCCESS'."""
        return Metaclass_SetLightBarIndicator_Response.__constants['SUCCESS']

    @property
    def PERMISSION_DENIED(self):
        """Message constant 'PERMISSION_DENIED'."""
        return Metaclass_SetLightBarIndicator_Response.__constants['PERMISSION_DENIED']

    @property
    def ERROR(self):
        """Message constant 'ERROR'."""
        return Metaclass_SetLightBarIndicator_Response.__constants['ERROR']


class SetLightBarIndicator_Response(metaclass=Metaclass_SetLightBarIndicator_Response):
    """
    Message class 'SetLightBarIndicator_Response'.

    Constants:
      SUCCESS
      PERMISSION_DENIED
      ERROR
    """

    __slots__ = [
        '_status_code',
    ]

    _fields_and_field_types = {
        'status_code': 'uint8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.status_code = kwargs.get('status_code', int())

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
        if self.status_code != other.status_code:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def status_code(self):
        """Message field 'status_code'."""
        return self._status_code

    @status_code.setter
    def status_code(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'status_code' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'status_code' field must be an unsigned integer in [0, 255]"
        self._status_code = value


class Metaclass_SetLightBarIndicator(type):
    """Metaclass of service 'SetLightBarIndicator'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('carma_driver_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'carma_driver_msgs.srv.SetLightBarIndicator')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__set_light_bar_indicator

            from carma_driver_msgs.srv import _set_light_bar_indicator
            if _set_light_bar_indicator.Metaclass_SetLightBarIndicator_Request._TYPE_SUPPORT is None:
                _set_light_bar_indicator.Metaclass_SetLightBarIndicator_Request.__import_type_support__()
            if _set_light_bar_indicator.Metaclass_SetLightBarIndicator_Response._TYPE_SUPPORT is None:
                _set_light_bar_indicator.Metaclass_SetLightBarIndicator_Response.__import_type_support__()


class SetLightBarIndicator(metaclass=Metaclass_SetLightBarIndicator):
    from carma_driver_msgs.srv._set_light_bar_indicator import SetLightBarIndicator_Request as Request
    from carma_driver_msgs.srv._set_light_bar_indicator import SetLightBarIndicator_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
