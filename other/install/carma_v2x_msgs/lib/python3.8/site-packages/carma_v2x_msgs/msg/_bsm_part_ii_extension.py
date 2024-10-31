# generated from rosidl_generator_py/resource/_idl.py.em
# with input from carma_v2x_msgs:msg/BSMPartIIExtension.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_BSMPartIIExtension(type):
    """Metaclass of message 'BSMPartIIExtension'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'VEHICLE_SAFETY_EXT': 0,
        'SPECIAL_VEHICLE_EXT': 1,
        'SUPPLEMENTAL_VEHICLE_EXT': 2,
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('carma_v2x_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'carma_v2x_msgs.msg.BSMPartIIExtension')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__bsm_part_ii_extension
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__bsm_part_ii_extension
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__bsm_part_ii_extension
            cls._TYPE_SUPPORT = module.type_support_msg__msg__bsm_part_ii_extension
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__bsm_part_ii_extension

            from carma_v2x_msgs.msg import SpecialVehicleExtensions
            if SpecialVehicleExtensions.__class__._TYPE_SUPPORT is None:
                SpecialVehicleExtensions.__class__.__import_type_support__()

            from carma_v2x_msgs.msg import SupplementalVehicleExtensions
            if SupplementalVehicleExtensions.__class__._TYPE_SUPPORT is None:
                SupplementalVehicleExtensions.__class__.__import_type_support__()

            from carma_v2x_msgs.msg import VehicleSafetyExtensions
            if VehicleSafetyExtensions.__class__._TYPE_SUPPORT is None:
                VehicleSafetyExtensions.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'VEHICLE_SAFETY_EXT': cls.__constants['VEHICLE_SAFETY_EXT'],
            'SPECIAL_VEHICLE_EXT': cls.__constants['SPECIAL_VEHICLE_EXT'],
            'SUPPLEMENTAL_VEHICLE_EXT': cls.__constants['SUPPLEMENTAL_VEHICLE_EXT'],
        }

    @property
    def VEHICLE_SAFETY_EXT(self):
        """Message constant 'VEHICLE_SAFETY_EXT'."""
        return Metaclass_BSMPartIIExtension.__constants['VEHICLE_SAFETY_EXT']

    @property
    def SPECIAL_VEHICLE_EXT(self):
        """Message constant 'SPECIAL_VEHICLE_EXT'."""
        return Metaclass_BSMPartIIExtension.__constants['SPECIAL_VEHICLE_EXT']

    @property
    def SUPPLEMENTAL_VEHICLE_EXT(self):
        """Message constant 'SUPPLEMENTAL_VEHICLE_EXT'."""
        return Metaclass_BSMPartIIExtension.__constants['SUPPLEMENTAL_VEHICLE_EXT']


class BSMPartIIExtension(metaclass=Metaclass_BSMPartIIExtension):
    """
    Message class 'BSMPartIIExtension'.

    Constants:
      VEHICLE_SAFETY_EXT
      SPECIAL_VEHICLE_EXT
      SUPPLEMENTAL_VEHICLE_EXT
    """

    __slots__ = [
        '_part_ii_id',
        '_vehicle_safety_extensions',
        '_special_vehicle_extensions',
        '_supplemental_vehicle_extensions',
    ]

    _fields_and_field_types = {
        'part_ii_id': 'uint8',
        'vehicle_safety_extensions': 'carma_v2x_msgs/VehicleSafetyExtensions',
        'special_vehicle_extensions': 'carma_v2x_msgs/SpecialVehicleExtensions',
        'supplemental_vehicle_extensions': 'carma_v2x_msgs/SupplementalVehicleExtensions',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['carma_v2x_msgs', 'msg'], 'VehicleSafetyExtensions'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['carma_v2x_msgs', 'msg'], 'SpecialVehicleExtensions'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['carma_v2x_msgs', 'msg'], 'SupplementalVehicleExtensions'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.part_ii_id = kwargs.get('part_ii_id', int())
        from carma_v2x_msgs.msg import VehicleSafetyExtensions
        self.vehicle_safety_extensions = kwargs.get('vehicle_safety_extensions', VehicleSafetyExtensions())
        from carma_v2x_msgs.msg import SpecialVehicleExtensions
        self.special_vehicle_extensions = kwargs.get('special_vehicle_extensions', SpecialVehicleExtensions())
        from carma_v2x_msgs.msg import SupplementalVehicleExtensions
        self.supplemental_vehicle_extensions = kwargs.get('supplemental_vehicle_extensions', SupplementalVehicleExtensions())

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
        if self.part_ii_id != other.part_ii_id:
            return False
        if self.vehicle_safety_extensions != other.vehicle_safety_extensions:
            return False
        if self.special_vehicle_extensions != other.special_vehicle_extensions:
            return False
        if self.supplemental_vehicle_extensions != other.supplemental_vehicle_extensions:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def part_ii_id(self):
        """Message field 'part_ii_id'."""
        return self._part_ii_id

    @part_ii_id.setter
    def part_ii_id(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'part_ii_id' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'part_ii_id' field must be an unsigned integer in [0, 255]"
        self._part_ii_id = value

    @property
    def vehicle_safety_extensions(self):
        """Message field 'vehicle_safety_extensions'."""
        return self._vehicle_safety_extensions

    @vehicle_safety_extensions.setter
    def vehicle_safety_extensions(self, value):
        if __debug__:
            from carma_v2x_msgs.msg import VehicleSafetyExtensions
            assert \
                isinstance(value, VehicleSafetyExtensions), \
                "The 'vehicle_safety_extensions' field must be a sub message of type 'VehicleSafetyExtensions'"
        self._vehicle_safety_extensions = value

    @property
    def special_vehicle_extensions(self):
        """Message field 'special_vehicle_extensions'."""
        return self._special_vehicle_extensions

    @special_vehicle_extensions.setter
    def special_vehicle_extensions(self, value):
        if __debug__:
            from carma_v2x_msgs.msg import SpecialVehicleExtensions
            assert \
                isinstance(value, SpecialVehicleExtensions), \
                "The 'special_vehicle_extensions' field must be a sub message of type 'SpecialVehicleExtensions'"
        self._special_vehicle_extensions = value

    @property
    def supplemental_vehicle_extensions(self):
        """Message field 'supplemental_vehicle_extensions'."""
        return self._supplemental_vehicle_extensions

    @supplemental_vehicle_extensions.setter
    def supplemental_vehicle_extensions(self, value):
        if __debug__:
            from carma_v2x_msgs.msg import SupplementalVehicleExtensions
            assert \
                isinstance(value, SupplementalVehicleExtensions), \
                "The 'supplemental_vehicle_extensions' field must be a sub message of type 'SupplementalVehicleExtensions'"
        self._supplemental_vehicle_extensions = value
