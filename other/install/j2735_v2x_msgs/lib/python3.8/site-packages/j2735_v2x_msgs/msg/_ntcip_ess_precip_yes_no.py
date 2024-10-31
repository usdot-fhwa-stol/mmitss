# generated from rosidl_generator_py/resource/_idl.py.em
# with input from j2735_v2x_msgs:msg/NTCIPEssPrecipYesNo.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_NTCIPEssPrecipYesNo(type):
    """Metaclass of message 'NTCIPEssPrecipYesNo'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'PRECIP': 1,
        'NO_PRECIP': 2,
        'ERROR': 3,
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
                'j2735_v2x_msgs.msg.NTCIPEssPrecipYesNo')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__ntcip_ess_precip_yes_no
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__ntcip_ess_precip_yes_no
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__ntcip_ess_precip_yes_no
            cls._TYPE_SUPPORT = module.type_support_msg__msg__ntcip_ess_precip_yes_no
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__ntcip_ess_precip_yes_no

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'PRECIP': cls.__constants['PRECIP'],
            'NO_PRECIP': cls.__constants['NO_PRECIP'],
            'ERROR': cls.__constants['ERROR'],
        }

    @property
    def PRECIP(self):
        """Message constant 'PRECIP'."""
        return Metaclass_NTCIPEssPrecipYesNo.__constants['PRECIP']

    @property
    def NO_PRECIP(self):
        """Message constant 'NO_PRECIP'."""
        return Metaclass_NTCIPEssPrecipYesNo.__constants['NO_PRECIP']

    @property
    def ERROR(self):
        """Message constant 'ERROR'."""
        return Metaclass_NTCIPEssPrecipYesNo.__constants['ERROR']


class NTCIPEssPrecipYesNo(metaclass=Metaclass_NTCIPEssPrecipYesNo):
    """
    Message class 'NTCIPEssPrecipYesNo'.

    Constants:
      PRECIP
      NO_PRECIP
      ERROR
    """

    __slots__ = [
        '_precip_yes_no',
    ]

    _fields_and_field_types = {
        'precip_yes_no': 'uint8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.precip_yes_no = kwargs.get('precip_yes_no', int())

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
        if self.precip_yes_no != other.precip_yes_no:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def precip_yes_no(self):
        """Message field 'precip_yes_no'."""
        return self._precip_yes_no

    @precip_yes_no.setter
    def precip_yes_no(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'precip_yes_no' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'precip_yes_no' field must be an unsigned integer in [0, 255]"
        self._precip_yes_no = value
