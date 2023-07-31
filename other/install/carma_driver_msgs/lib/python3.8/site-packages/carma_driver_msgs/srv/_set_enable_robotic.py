# generated from rosidl_generator_py/resource/_idl.py.em
# with input from carma_driver_msgs:srv/SetEnableRobotic.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_SetEnableRobotic_Request(type):
    """Metaclass of message 'SetEnableRobotic_Request'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'DISABLE': 0,
        'ENABLE': 1,
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
                'carma_driver_msgs.srv.SetEnableRobotic_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__set_enable_robotic__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__set_enable_robotic__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__set_enable_robotic__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__set_enable_robotic__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__set_enable_robotic__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'DISABLE': cls.__constants['DISABLE'],
            'ENABLE': cls.__constants['ENABLE'],
        }

    @property
    def DISABLE(self):
        """Message constant 'DISABLE'."""
        return Metaclass_SetEnableRobotic_Request.__constants['DISABLE']

    @property
    def ENABLE(self):
        """Message constant 'ENABLE'."""
        return Metaclass_SetEnableRobotic_Request.__constants['ENABLE']


class SetEnableRobotic_Request(metaclass=Metaclass_SetEnableRobotic_Request):
    """
    Message class 'SetEnableRobotic_Request'.

    Constants:
      DISABLE
      ENABLE
    """

    __slots__ = [
        '_set',
    ]

    _fields_and_field_types = {
        'set': 'uint8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.set = kwargs.get('set', int())

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
        if self.set != other.set:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property  # noqa: A003
    def set(self):  # noqa: A003
        """Message field 'set'."""
        return self._set

    @set.setter  # noqa: A003
    def set(self, value):  # noqa: A003
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'set' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'set' field must be an unsigned integer in [0, 255]"
        self._set = value


# Import statements for member types

# already imported above
# import rosidl_parser.definition


class Metaclass_SetEnableRobotic_Response(type):
    """Metaclass of message 'SetEnableRobotic_Response'."""

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
            module = import_type_support('carma_driver_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'carma_driver_msgs.srv.SetEnableRobotic_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__set_enable_robotic__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__set_enable_robotic__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__set_enable_robotic__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__set_enable_robotic__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__set_enable_robotic__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SetEnableRobotic_Response(metaclass=Metaclass_SetEnableRobotic_Response):
    """Message class 'SetEnableRobotic_Response'."""

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


class Metaclass_SetEnableRobotic(type):
    """Metaclass of service 'SetEnableRobotic'."""

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
                'carma_driver_msgs.srv.SetEnableRobotic')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__set_enable_robotic

            from carma_driver_msgs.srv import _set_enable_robotic
            if _set_enable_robotic.Metaclass_SetEnableRobotic_Request._TYPE_SUPPORT is None:
                _set_enable_robotic.Metaclass_SetEnableRobotic_Request.__import_type_support__()
            if _set_enable_robotic.Metaclass_SetEnableRobotic_Response._TYPE_SUPPORT is None:
                _set_enable_robotic.Metaclass_SetEnableRobotic_Response.__import_type_support__()


class SetEnableRobotic(metaclass=Metaclass_SetEnableRobotic):
    from carma_driver_msgs.srv._set_enable_robotic import SetEnableRobotic_Request as Request
    from carma_driver_msgs.srv._set_enable_robotic import SetEnableRobotic_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
