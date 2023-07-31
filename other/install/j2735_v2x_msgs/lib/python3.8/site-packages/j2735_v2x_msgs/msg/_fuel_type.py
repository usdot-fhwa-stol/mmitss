# generated from rosidl_generator_py/resource/_idl.py.em
# with input from j2735_v2x_msgs:msg/FuelType.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_FuelType(type):
    """Metaclass of message 'FuelType'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'UNKNOWN_FUEL': 0,
        'GASOLINE': 1,
        'ETHANOL': 2,
        'DIESEL': 3,
        'ELECTRIC': 4,
        'HYBRID': 5,
        'HYDROGEN': 6,
        'NAT_GAS_LIQUID': 7,
        'NAT_GAS_COMP': 8,
        'PROPANE': 9,
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
                'j2735_v2x_msgs.msg.FuelType')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__fuel_type
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__fuel_type
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__fuel_type
            cls._TYPE_SUPPORT = module.type_support_msg__msg__fuel_type
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__fuel_type

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'UNKNOWN_FUEL': cls.__constants['UNKNOWN_FUEL'],
            'GASOLINE': cls.__constants['GASOLINE'],
            'ETHANOL': cls.__constants['ETHANOL'],
            'DIESEL': cls.__constants['DIESEL'],
            'ELECTRIC': cls.__constants['ELECTRIC'],
            'HYBRID': cls.__constants['HYBRID'],
            'HYDROGEN': cls.__constants['HYDROGEN'],
            'NAT_GAS_LIQUID': cls.__constants['NAT_GAS_LIQUID'],
            'NAT_GAS_COMP': cls.__constants['NAT_GAS_COMP'],
            'PROPANE': cls.__constants['PROPANE'],
        }

    @property
    def UNKNOWN_FUEL(self):
        """Message constant 'UNKNOWN_FUEL'."""
        return Metaclass_FuelType.__constants['UNKNOWN_FUEL']

    @property
    def GASOLINE(self):
        """Message constant 'GASOLINE'."""
        return Metaclass_FuelType.__constants['GASOLINE']

    @property
    def ETHANOL(self):
        """Message constant 'ETHANOL'."""
        return Metaclass_FuelType.__constants['ETHANOL']

    @property
    def DIESEL(self):
        """Message constant 'DIESEL'."""
        return Metaclass_FuelType.__constants['DIESEL']

    @property
    def ELECTRIC(self):
        """Message constant 'ELECTRIC'."""
        return Metaclass_FuelType.__constants['ELECTRIC']

    @property
    def HYBRID(self):
        """Message constant 'HYBRID'."""
        return Metaclass_FuelType.__constants['HYBRID']

    @property
    def HYDROGEN(self):
        """Message constant 'HYDROGEN'."""
        return Metaclass_FuelType.__constants['HYDROGEN']

    @property
    def NAT_GAS_LIQUID(self):
        """Message constant 'NAT_GAS_LIQUID'."""
        return Metaclass_FuelType.__constants['NAT_GAS_LIQUID']

    @property
    def NAT_GAS_COMP(self):
        """Message constant 'NAT_GAS_COMP'."""
        return Metaclass_FuelType.__constants['NAT_GAS_COMP']

    @property
    def PROPANE(self):
        """Message constant 'PROPANE'."""
        return Metaclass_FuelType.__constants['PROPANE']


class FuelType(metaclass=Metaclass_FuelType):
    """
    Message class 'FuelType'.

    Constants:
      UNKNOWN_FUEL
      GASOLINE
      ETHANOL
      DIESEL
      ELECTRIC
      HYBRID
      HYDROGEN
      NAT_GAS_LIQUID
      NAT_GAS_COMP
      PROPANE
    """

    __slots__ = [
        '_fuel_type',
    ]

    _fields_and_field_types = {
        'fuel_type': 'uint8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.fuel_type = kwargs.get('fuel_type', int())

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
        if self.fuel_type != other.fuel_type:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def fuel_type(self):
        """Message field 'fuel_type'."""
        return self._fuel_type

    @fuel_type.setter
    def fuel_type(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'fuel_type' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'fuel_type' field must be an unsigned integer in [0, 255]"
        self._fuel_type = value
