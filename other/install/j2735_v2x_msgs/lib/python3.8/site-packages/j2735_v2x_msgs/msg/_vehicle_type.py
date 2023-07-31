# generated from rosidl_generator_py/resource/_idl.py.em
# with input from j2735_v2x_msgs:msg/VehicleType.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_VehicleType(type):
    """Metaclass of message 'VehicleType'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'NONE': 0,
        'UNKNOWN': 1,
        'SPECIAL': 2,
        'MOTO': 3,
        'CAR': 4,
        'CAR_OTHER': 5,
        'BUS': 6,
        'AXLE_CNT_2': 7,
        'AXLE_CNT_3': 8,
        'AXLE_CNT_4': 9,
        'AXLE_CNT_4_TRAILER': 10,
        'AXLE_CNT_5_TRAILER': 11,
        'AXLE_CNT_6_TRAILER': 12,
        'AXLE_CNT_5_MULTI_TRAILER': 13,
        'AXLE_CNT_6_MULTI_TRAILER': 14,
        'AXLE_CNT_7_MULTI_TRAILER': 15,
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
                'j2735_v2x_msgs.msg.VehicleType')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__vehicle_type
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__vehicle_type
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__vehicle_type
            cls._TYPE_SUPPORT = module.type_support_msg__msg__vehicle_type
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__vehicle_type

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'NONE': cls.__constants['NONE'],
            'UNKNOWN': cls.__constants['UNKNOWN'],
            'SPECIAL': cls.__constants['SPECIAL'],
            'MOTO': cls.__constants['MOTO'],
            'CAR': cls.__constants['CAR'],
            'CAR_OTHER': cls.__constants['CAR_OTHER'],
            'BUS': cls.__constants['BUS'],
            'AXLE_CNT_2': cls.__constants['AXLE_CNT_2'],
            'AXLE_CNT_3': cls.__constants['AXLE_CNT_3'],
            'AXLE_CNT_4': cls.__constants['AXLE_CNT_4'],
            'AXLE_CNT_4_TRAILER': cls.__constants['AXLE_CNT_4_TRAILER'],
            'AXLE_CNT_5_TRAILER': cls.__constants['AXLE_CNT_5_TRAILER'],
            'AXLE_CNT_6_TRAILER': cls.__constants['AXLE_CNT_6_TRAILER'],
            'AXLE_CNT_5_MULTI_TRAILER': cls.__constants['AXLE_CNT_5_MULTI_TRAILER'],
            'AXLE_CNT_6_MULTI_TRAILER': cls.__constants['AXLE_CNT_6_MULTI_TRAILER'],
            'AXLE_CNT_7_MULTI_TRAILER': cls.__constants['AXLE_CNT_7_MULTI_TRAILER'],
        }

    @property
    def NONE(self):
        """Message constant 'NONE'."""
        return Metaclass_VehicleType.__constants['NONE']

    @property
    def UNKNOWN(self):
        """Message constant 'UNKNOWN'."""
        return Metaclass_VehicleType.__constants['UNKNOWN']

    @property
    def SPECIAL(self):
        """Message constant 'SPECIAL'."""
        return Metaclass_VehicleType.__constants['SPECIAL']

    @property
    def MOTO(self):
        """Message constant 'MOTO'."""
        return Metaclass_VehicleType.__constants['MOTO']

    @property
    def CAR(self):
        """Message constant 'CAR'."""
        return Metaclass_VehicleType.__constants['CAR']

    @property
    def CAR_OTHER(self):
        """Message constant 'CAR_OTHER'."""
        return Metaclass_VehicleType.__constants['CAR_OTHER']

    @property
    def BUS(self):
        """Message constant 'BUS'."""
        return Metaclass_VehicleType.__constants['BUS']

    @property
    def AXLE_CNT_2(self):
        """Message constant 'AXLE_CNT_2'."""
        return Metaclass_VehicleType.__constants['AXLE_CNT_2']

    @property
    def AXLE_CNT_3(self):
        """Message constant 'AXLE_CNT_3'."""
        return Metaclass_VehicleType.__constants['AXLE_CNT_3']

    @property
    def AXLE_CNT_4(self):
        """Message constant 'AXLE_CNT_4'."""
        return Metaclass_VehicleType.__constants['AXLE_CNT_4']

    @property
    def AXLE_CNT_4_TRAILER(self):
        """Message constant 'AXLE_CNT_4_TRAILER'."""
        return Metaclass_VehicleType.__constants['AXLE_CNT_4_TRAILER']

    @property
    def AXLE_CNT_5_TRAILER(self):
        """Message constant 'AXLE_CNT_5_TRAILER'."""
        return Metaclass_VehicleType.__constants['AXLE_CNT_5_TRAILER']

    @property
    def AXLE_CNT_6_TRAILER(self):
        """Message constant 'AXLE_CNT_6_TRAILER'."""
        return Metaclass_VehicleType.__constants['AXLE_CNT_6_TRAILER']

    @property
    def AXLE_CNT_5_MULTI_TRAILER(self):
        """Message constant 'AXLE_CNT_5_MULTI_TRAILER'."""
        return Metaclass_VehicleType.__constants['AXLE_CNT_5_MULTI_TRAILER']

    @property
    def AXLE_CNT_6_MULTI_TRAILER(self):
        """Message constant 'AXLE_CNT_6_MULTI_TRAILER'."""
        return Metaclass_VehicleType.__constants['AXLE_CNT_6_MULTI_TRAILER']

    @property
    def AXLE_CNT_7_MULTI_TRAILER(self):
        """Message constant 'AXLE_CNT_7_MULTI_TRAILER'."""
        return Metaclass_VehicleType.__constants['AXLE_CNT_7_MULTI_TRAILER']


class VehicleType(metaclass=Metaclass_VehicleType):
    """
    Message class 'VehicleType'.

    Constants:
      NONE
      UNKNOWN
      SPECIAL
      MOTO
      CAR
      CAR_OTHER
      BUS
      AXLE_CNT_2
      AXLE_CNT_3
      AXLE_CNT_4
      AXLE_CNT_4_TRAILER
      AXLE_CNT_5_TRAILER
      AXLE_CNT_6_TRAILER
      AXLE_CNT_5_MULTI_TRAILER
      AXLE_CNT_6_MULTI_TRAILER
      AXLE_CNT_7_MULTI_TRAILER
    """

    __slots__ = [
        '_vehicle_type',
    ]

    _fields_and_field_types = {
        'vehicle_type': 'uint8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.vehicle_type = kwargs.get('vehicle_type', int())

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
        if self.vehicle_type != other.vehicle_type:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def vehicle_type(self):
        """Message field 'vehicle_type'."""
        return self._vehicle_type

    @vehicle_type.setter
    def vehicle_type(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'vehicle_type' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'vehicle_type' field must be an unsigned integer in [0, 255]"
        self._vehicle_type = value
