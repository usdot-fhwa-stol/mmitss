# generated from rosidl_generator_py/resource/_idl.py.em
# with input from carma_msgs:srv/ReleaseIndicatorControl.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_ReleaseIndicatorControl_Request(type):
    """Metaclass of message 'ReleaseIndicatorControl_Request'."""

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
            module = import_type_support('carma_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'carma_msgs.srv.ReleaseIndicatorControl_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__release_indicator_control__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__release_indicator_control__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__release_indicator_control__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__release_indicator_control__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__release_indicator_control__request

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
        }


class ReleaseIndicatorControl_Request(metaclass=Metaclass_ReleaseIndicatorControl_Request):
    """Message class 'ReleaseIndicatorControl_Request'."""

    __slots__ = [
        '_ind_list',
        '_cda_list',
        '_requester_name',
    ]

    _fields_and_field_types = {
        'ind_list': 'sequence<carma_msgs/LightBarIndicator>',
        'cda_list': 'sequence<carma_msgs/LightBarCDAType>',
        'requester_name': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['carma_msgs', 'msg'], 'LightBarIndicator')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['carma_msgs', 'msg'], 'LightBarCDAType')),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.ind_list = kwargs.get('ind_list', [])
        self.cda_list = kwargs.get('cda_list', [])
        self.requester_name = kwargs.get('requester_name', str())

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
        if self.ind_list != other.ind_list:
            return False
        if self.cda_list != other.cda_list:
            return False
        if self.requester_name != other.requester_name:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def ind_list(self):
        """Message field 'ind_list'."""
        return self._ind_list

    @ind_list.setter
    def ind_list(self, value):
        if __debug__:
            from carma_msgs.msg import LightBarIndicator
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
                 all(isinstance(v, LightBarIndicator) for v in value) and
                 True), \
                "The 'ind_list' field must be a set or sequence and each value of type 'LightBarIndicator'"
        self._ind_list = value

    @property
    def cda_list(self):
        """Message field 'cda_list'."""
        return self._cda_list

    @cda_list.setter
    def cda_list(self, value):
        if __debug__:
            from carma_msgs.msg import LightBarCDAType
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
                 all(isinstance(v, LightBarCDAType) for v in value) and
                 True), \
                "The 'cda_list' field must be a set or sequence and each value of type 'LightBarCDAType'"
        self._cda_list = value

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


# Import statements for member types

# already imported above
# import rosidl_parser.definition


class Metaclass_ReleaseIndicatorControl_Response(type):
    """Metaclass of message 'ReleaseIndicatorControl_Response'."""

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
            module = import_type_support('carma_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'carma_msgs.srv.ReleaseIndicatorControl_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__release_indicator_control__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__release_indicator_control__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__release_indicator_control__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__release_indicator_control__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__release_indicator_control__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ReleaseIndicatorControl_Response(metaclass=Metaclass_ReleaseIndicatorControl_Response):
    """Message class 'ReleaseIndicatorControl_Response'."""

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


class Metaclass_ReleaseIndicatorControl(type):
    """Metaclass of service 'ReleaseIndicatorControl'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('carma_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'carma_msgs.srv.ReleaseIndicatorControl')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__release_indicator_control

            from carma_msgs.srv import _release_indicator_control
            if _release_indicator_control.Metaclass_ReleaseIndicatorControl_Request._TYPE_SUPPORT is None:
                _release_indicator_control.Metaclass_ReleaseIndicatorControl_Request.__import_type_support__()
            if _release_indicator_control.Metaclass_ReleaseIndicatorControl_Response._TYPE_SUPPORT is None:
                _release_indicator_control.Metaclass_ReleaseIndicatorControl_Response.__import_type_support__()


class ReleaseIndicatorControl(metaclass=Metaclass_ReleaseIndicatorControl):
    from carma_msgs.srv._release_indicator_control import ReleaseIndicatorControl_Request as Request
    from carma_msgs.srv._release_indicator_control import ReleaseIndicatorControl_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
