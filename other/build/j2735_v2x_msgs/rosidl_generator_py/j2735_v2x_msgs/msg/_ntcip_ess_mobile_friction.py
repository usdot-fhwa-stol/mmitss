# generated from rosidl_generator_py/resource/_idl.py.em
# with input from j2735_v2x_msgs:msg/NTCIPEssMobileFriction.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_NTCIPEssMobileFriction(type):
    """Metaclass of message 'NTCIPEssMobileFriction'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'ESS_MOBILE_FRICTION_MIN': 0,
        'ESS_MOBILE_FRICTION_MAX': 100,
        'ERROR_OR_MISSING_VALUE': 101,
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('j2735_v2x_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'j2735_v2x_msgs.msg.NTCIPEssMobileFriction')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__ntcip_ess_mobile_friction
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__ntcip_ess_mobile_friction
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__ntcip_ess_mobile_friction
            cls._TYPE_SUPPORT = module.type_support_msg__msg__ntcip_ess_mobile_friction
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__ntcip_ess_mobile_friction

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'ESS_MOBILE_FRICTION_MIN': cls.__constants['ESS_MOBILE_FRICTION_MIN'],
            'ESS_MOBILE_FRICTION_MAX': cls.__constants['ESS_MOBILE_FRICTION_MAX'],
            'ERROR_OR_MISSING_VALUE': cls.__constants['ERROR_OR_MISSING_VALUE'],
        }

    @property
    def ESS_MOBILE_FRICTION_MIN(self):
        """Message constant 'ESS_MOBILE_FRICTION_MIN'."""
        return Metaclass_NTCIPEssMobileFriction.__constants['ESS_MOBILE_FRICTION_MIN']

    @property
    def ESS_MOBILE_FRICTION_MAX(self):
        """Message constant 'ESS_MOBILE_FRICTION_MAX'."""
        return Metaclass_NTCIPEssMobileFriction.__constants['ESS_MOBILE_FRICTION_MAX']

    @property
    def ERROR_OR_MISSING_VALUE(self):
        """Message constant 'ERROR_OR_MISSING_VALUE'."""
        return Metaclass_NTCIPEssMobileFriction.__constants['ERROR_OR_MISSING_VALUE']


class NTCIPEssMobileFriction(metaclass=Metaclass_NTCIPEssMobileFriction):
    """
    Message class 'NTCIPEssMobileFriction'.

    Constants:
      ESS_MOBILE_FRICTION_MIN
      ESS_MOBILE_FRICTION_MAX
      ERROR_OR_MISSING_VALUE
    """

    __slots__ = [
        '_ess_mobile_friction',
    ]

    _fields_and_field_types = {
        'ess_mobile_friction': 'uint8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.ess_mobile_friction = kwargs.get('ess_mobile_friction', int())

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
        if self.ess_mobile_friction != other.ess_mobile_friction:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def ess_mobile_friction(self):
        """Message field 'ess_mobile_friction'."""
        return self._ess_mobile_friction

    @ess_mobile_friction.setter
    def ess_mobile_friction(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'ess_mobile_friction' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'ess_mobile_friction' field must be an unsigned integer in [0, 255]"
        self._ess_mobile_friction = value
