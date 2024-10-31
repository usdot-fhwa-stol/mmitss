# generated from rosidl_generator_py/resource/_idl.py.em
# with input from j2735_v2x_msgs:msg/LaneAttributesVehicle.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_LaneAttributesVehicle(type):
    """Metaclass of message 'LaneAttributesVehicle'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'ISVEHICLEREVOCABLELANE': 0,
        'ISVEHICLEFLYOVERLANE': 1,
        'HOVLANEUSEONLY': 2,
        'RESTRICTEDTOBUSUSE': 3,
        'RESTRICTEDTOTAXIUSE': 4,
        'RESTRICTEDFROMPUBLICUSE': 5,
        'HASIRBEACONCOVERAGE': 6,
        'PERMISSIONONREQUEST': 7,
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
                'j2735_v2x_msgs.msg.LaneAttributesVehicle')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__lane_attributes_vehicle
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__lane_attributes_vehicle
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__lane_attributes_vehicle
            cls._TYPE_SUPPORT = module.type_support_msg__msg__lane_attributes_vehicle
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__lane_attributes_vehicle

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'ISVEHICLEREVOCABLELANE': cls.__constants['ISVEHICLEREVOCABLELANE'],
            'ISVEHICLEFLYOVERLANE': cls.__constants['ISVEHICLEFLYOVERLANE'],
            'HOVLANEUSEONLY': cls.__constants['HOVLANEUSEONLY'],
            'RESTRICTEDTOBUSUSE': cls.__constants['RESTRICTEDTOBUSUSE'],
            'RESTRICTEDTOTAXIUSE': cls.__constants['RESTRICTEDTOTAXIUSE'],
            'RESTRICTEDFROMPUBLICUSE': cls.__constants['RESTRICTEDFROMPUBLICUSE'],
            'HASIRBEACONCOVERAGE': cls.__constants['HASIRBEACONCOVERAGE'],
            'PERMISSIONONREQUEST': cls.__constants['PERMISSIONONREQUEST'],
        }

    @property
    def ISVEHICLEREVOCABLELANE(self):
        """Message constant 'ISVEHICLEREVOCABLELANE'."""
        return Metaclass_LaneAttributesVehicle.__constants['ISVEHICLEREVOCABLELANE']

    @property
    def ISVEHICLEFLYOVERLANE(self):
        """Message constant 'ISVEHICLEFLYOVERLANE'."""
        return Metaclass_LaneAttributesVehicle.__constants['ISVEHICLEFLYOVERLANE']

    @property
    def HOVLANEUSEONLY(self):
        """Message constant 'HOVLANEUSEONLY'."""
        return Metaclass_LaneAttributesVehicle.__constants['HOVLANEUSEONLY']

    @property
    def RESTRICTEDTOBUSUSE(self):
        """Message constant 'RESTRICTEDTOBUSUSE'."""
        return Metaclass_LaneAttributesVehicle.__constants['RESTRICTEDTOBUSUSE']

    @property
    def RESTRICTEDTOTAXIUSE(self):
        """Message constant 'RESTRICTEDTOTAXIUSE'."""
        return Metaclass_LaneAttributesVehicle.__constants['RESTRICTEDTOTAXIUSE']

    @property
    def RESTRICTEDFROMPUBLICUSE(self):
        """Message constant 'RESTRICTEDFROMPUBLICUSE'."""
        return Metaclass_LaneAttributesVehicle.__constants['RESTRICTEDFROMPUBLICUSE']

    @property
    def HASIRBEACONCOVERAGE(self):
        """Message constant 'HASIRBEACONCOVERAGE'."""
        return Metaclass_LaneAttributesVehicle.__constants['HASIRBEACONCOVERAGE']

    @property
    def PERMISSIONONREQUEST(self):
        """Message constant 'PERMISSIONONREQUEST'."""
        return Metaclass_LaneAttributesVehicle.__constants['PERMISSIONONREQUEST']


class LaneAttributesVehicle(metaclass=Metaclass_LaneAttributesVehicle):
    """
    Message class 'LaneAttributesVehicle'.

    Constants:
      ISVEHICLEREVOCABLELANE
      ISVEHICLEFLYOVERLANE
      HOVLANEUSEONLY
      RESTRICTEDTOBUSUSE
      RESTRICTEDTOTAXIUSE
      RESTRICTEDFROMPUBLICUSE
      HASIRBEACONCOVERAGE
      PERMISSIONONREQUEST
    """

    __slots__ = [
        '_lane_attributes_vehicle',
    ]

    _fields_and_field_types = {
        'lane_attributes_vehicle': 'uint8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.lane_attributes_vehicle = kwargs.get('lane_attributes_vehicle', int())

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
        if self.lane_attributes_vehicle != other.lane_attributes_vehicle:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def lane_attributes_vehicle(self):
        """Message field 'lane_attributes_vehicle'."""
        return self._lane_attributes_vehicle

    @lane_attributes_vehicle.setter
    def lane_attributes_vehicle(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'lane_attributes_vehicle' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'lane_attributes_vehicle' field must be an unsigned integer in [0, 255]"
        self._lane_attributes_vehicle = value
