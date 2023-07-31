# generated from rosidl_generator_py/resource/_idl.py.em
# with input from j2735_v2x_msgs:msg/VehicleClassification.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_VehicleClassification(type):
    """Metaclass of message 'VehicleClassification'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'HAS_KEY_TYPE': 1,
        'HAS_ROLE': 2,
        'HAS_ISO': 4,
        'HAS_HPMS_TYPE': 8,
        'HAS_VEHICLE_TYPE': 16,
        'HAS_RESPONSE_EQUIP': 32,
        'HAS_RESPONDER_TYPE': 64,
        'HAS_FUEL_TYPE': 128,
        'ISO3833_MIN': 0,
        'ISO3833_MAX': 100,
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
                'j2735_v2x_msgs.msg.VehicleClassification')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__vehicle_classification
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__vehicle_classification
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__vehicle_classification
            cls._TYPE_SUPPORT = module.type_support_msg__msg__vehicle_classification
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__vehicle_classification

            from j2735_v2x_msgs.msg import BasicVehicleClass
            if BasicVehicleClass.__class__._TYPE_SUPPORT is None:
                BasicVehicleClass.__class__.__import_type_support__()

            from j2735_v2x_msgs.msg import BasicVehicleRole
            if BasicVehicleRole.__class__._TYPE_SUPPORT is None:
                BasicVehicleRole.__class__.__import_type_support__()

            from j2735_v2x_msgs.msg import FuelType
            if FuelType.__class__._TYPE_SUPPORT is None:
                FuelType.__class__.__import_type_support__()

            from j2735_v2x_msgs.msg import ITISIncidentResponseEquipment
            if ITISIncidentResponseEquipment.__class__._TYPE_SUPPORT is None:
                ITISIncidentResponseEquipment.__class__.__import_type_support__()

            from j2735_v2x_msgs.msg import ITISResponderGroupAffected
            if ITISResponderGroupAffected.__class__._TYPE_SUPPORT is None:
                ITISResponderGroupAffected.__class__.__import_type_support__()

            from j2735_v2x_msgs.msg import ITISVehicleGroupAffected
            if ITISVehicleGroupAffected.__class__._TYPE_SUPPORT is None:
                ITISVehicleGroupAffected.__class__.__import_type_support__()

            from j2735_v2x_msgs.msg import VehicleType
            if VehicleType.__class__._TYPE_SUPPORT is None:
                VehicleType.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'HAS_KEY_TYPE': cls.__constants['HAS_KEY_TYPE'],
            'HAS_ROLE': cls.__constants['HAS_ROLE'],
            'HAS_ISO': cls.__constants['HAS_ISO'],
            'HAS_HPMS_TYPE': cls.__constants['HAS_HPMS_TYPE'],
            'HAS_VEHICLE_TYPE': cls.__constants['HAS_VEHICLE_TYPE'],
            'HAS_RESPONSE_EQUIP': cls.__constants['HAS_RESPONSE_EQUIP'],
            'HAS_RESPONDER_TYPE': cls.__constants['HAS_RESPONDER_TYPE'],
            'HAS_FUEL_TYPE': cls.__constants['HAS_FUEL_TYPE'],
            'ISO3833_MIN': cls.__constants['ISO3833_MIN'],
            'ISO3833_MAX': cls.__constants['ISO3833_MAX'],
        }

    @property
    def HAS_KEY_TYPE(self):
        """Message constant 'HAS_KEY_TYPE'."""
        return Metaclass_VehicleClassification.__constants['HAS_KEY_TYPE']

    @property
    def HAS_ROLE(self):
        """Message constant 'HAS_ROLE'."""
        return Metaclass_VehicleClassification.__constants['HAS_ROLE']

    @property
    def HAS_ISO(self):
        """Message constant 'HAS_ISO'."""
        return Metaclass_VehicleClassification.__constants['HAS_ISO']

    @property
    def HAS_HPMS_TYPE(self):
        """Message constant 'HAS_HPMS_TYPE'."""
        return Metaclass_VehicleClassification.__constants['HAS_HPMS_TYPE']

    @property
    def HAS_VEHICLE_TYPE(self):
        """Message constant 'HAS_VEHICLE_TYPE'."""
        return Metaclass_VehicleClassification.__constants['HAS_VEHICLE_TYPE']

    @property
    def HAS_RESPONSE_EQUIP(self):
        """Message constant 'HAS_RESPONSE_EQUIP'."""
        return Metaclass_VehicleClassification.__constants['HAS_RESPONSE_EQUIP']

    @property
    def HAS_RESPONDER_TYPE(self):
        """Message constant 'HAS_RESPONDER_TYPE'."""
        return Metaclass_VehicleClassification.__constants['HAS_RESPONDER_TYPE']

    @property
    def HAS_FUEL_TYPE(self):
        """Message constant 'HAS_FUEL_TYPE'."""
        return Metaclass_VehicleClassification.__constants['HAS_FUEL_TYPE']

    @property
    def ISO3833_MIN(self):
        """Message constant 'ISO3833_MIN'."""
        return Metaclass_VehicleClassification.__constants['ISO3833_MIN']

    @property
    def ISO3833_MAX(self):
        """Message constant 'ISO3833_MAX'."""
        return Metaclass_VehicleClassification.__constants['ISO3833_MAX']


class VehicleClassification(metaclass=Metaclass_VehicleClassification):
    """
    Message class 'VehicleClassification'.

    Constants:
      HAS_KEY_TYPE
      HAS_ROLE
      HAS_ISO
      HAS_HPMS_TYPE
      HAS_VEHICLE_TYPE
      HAS_RESPONSE_EQUIP
      HAS_RESPONDER_TYPE
      HAS_FUEL_TYPE
      ISO3833_MIN
      ISO3833_MAX
    """

    __slots__ = [
        '_presence_vector',
        '_key_type',
        '_role',
        '_iso3833',
        '_hpms_type',
        '_vehicle_type',
        '_response_equip',
        '_responder_type',
        '_fuel_type',
    ]

    _fields_and_field_types = {
        'presence_vector': 'uint16',
        'key_type': 'j2735_v2x_msgs/BasicVehicleClass',
        'role': 'j2735_v2x_msgs/BasicVehicleRole',
        'iso3833': 'uint8',
        'hpms_type': 'j2735_v2x_msgs/VehicleType',
        'vehicle_type': 'j2735_v2x_msgs/ITISVehicleGroupAffected',
        'response_equip': 'j2735_v2x_msgs/ITISIncidentResponseEquipment',
        'responder_type': 'j2735_v2x_msgs/ITISResponderGroupAffected',
        'fuel_type': 'j2735_v2x_msgs/FuelType',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['j2735_v2x_msgs', 'msg'], 'BasicVehicleClass'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['j2735_v2x_msgs', 'msg'], 'BasicVehicleRole'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['j2735_v2x_msgs', 'msg'], 'VehicleType'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['j2735_v2x_msgs', 'msg'], 'ITISVehicleGroupAffected'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['j2735_v2x_msgs', 'msg'], 'ITISIncidentResponseEquipment'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['j2735_v2x_msgs', 'msg'], 'ITISResponderGroupAffected'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['j2735_v2x_msgs', 'msg'], 'FuelType'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.presence_vector = kwargs.get('presence_vector', int())
        from j2735_v2x_msgs.msg import BasicVehicleClass
        self.key_type = kwargs.get('key_type', BasicVehicleClass())
        from j2735_v2x_msgs.msg import BasicVehicleRole
        self.role = kwargs.get('role', BasicVehicleRole())
        self.iso3833 = kwargs.get('iso3833', int())
        from j2735_v2x_msgs.msg import VehicleType
        self.hpms_type = kwargs.get('hpms_type', VehicleType())
        from j2735_v2x_msgs.msg import ITISVehicleGroupAffected
        self.vehicle_type = kwargs.get('vehicle_type', ITISVehicleGroupAffected())
        from j2735_v2x_msgs.msg import ITISIncidentResponseEquipment
        self.response_equip = kwargs.get('response_equip', ITISIncidentResponseEquipment())
        from j2735_v2x_msgs.msg import ITISResponderGroupAffected
        self.responder_type = kwargs.get('responder_type', ITISResponderGroupAffected())
        from j2735_v2x_msgs.msg import FuelType
        self.fuel_type = kwargs.get('fuel_type', FuelType())

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
        if self.presence_vector != other.presence_vector:
            return False
        if self.key_type != other.key_type:
            return False
        if self.role != other.role:
            return False
        if self.iso3833 != other.iso3833:
            return False
        if self.hpms_type != other.hpms_type:
            return False
        if self.vehicle_type != other.vehicle_type:
            return False
        if self.response_equip != other.response_equip:
            return False
        if self.responder_type != other.responder_type:
            return False
        if self.fuel_type != other.fuel_type:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def presence_vector(self):
        """Message field 'presence_vector'."""
        return self._presence_vector

    @presence_vector.setter
    def presence_vector(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'presence_vector' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'presence_vector' field must be an unsigned integer in [0, 65535]"
        self._presence_vector = value

    @property
    def key_type(self):
        """Message field 'key_type'."""
        return self._key_type

    @key_type.setter
    def key_type(self, value):
        if __debug__:
            from j2735_v2x_msgs.msg import BasicVehicleClass
            assert \
                isinstance(value, BasicVehicleClass), \
                "The 'key_type' field must be a sub message of type 'BasicVehicleClass'"
        self._key_type = value

    @property
    def role(self):
        """Message field 'role'."""
        return self._role

    @role.setter
    def role(self, value):
        if __debug__:
            from j2735_v2x_msgs.msg import BasicVehicleRole
            assert \
                isinstance(value, BasicVehicleRole), \
                "The 'role' field must be a sub message of type 'BasicVehicleRole'"
        self._role = value

    @property
    def iso3833(self):
        """Message field 'iso3833'."""
        return self._iso3833

    @iso3833.setter
    def iso3833(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'iso3833' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'iso3833' field must be an unsigned integer in [0, 255]"
        self._iso3833 = value

    @property
    def hpms_type(self):
        """Message field 'hpms_type'."""
        return self._hpms_type

    @hpms_type.setter
    def hpms_type(self, value):
        if __debug__:
            from j2735_v2x_msgs.msg import VehicleType
            assert \
                isinstance(value, VehicleType), \
                "The 'hpms_type' field must be a sub message of type 'VehicleType'"
        self._hpms_type = value

    @property
    def vehicle_type(self):
        """Message field 'vehicle_type'."""
        return self._vehicle_type

    @vehicle_type.setter
    def vehicle_type(self, value):
        if __debug__:
            from j2735_v2x_msgs.msg import ITISVehicleGroupAffected
            assert \
                isinstance(value, ITISVehicleGroupAffected), \
                "The 'vehicle_type' field must be a sub message of type 'ITISVehicleGroupAffected'"
        self._vehicle_type = value

    @property
    def response_equip(self):
        """Message field 'response_equip'."""
        return self._response_equip

    @response_equip.setter
    def response_equip(self, value):
        if __debug__:
            from j2735_v2x_msgs.msg import ITISIncidentResponseEquipment
            assert \
                isinstance(value, ITISIncidentResponseEquipment), \
                "The 'response_equip' field must be a sub message of type 'ITISIncidentResponseEquipment'"
        self._response_equip = value

    @property
    def responder_type(self):
        """Message field 'responder_type'."""
        return self._responder_type

    @responder_type.setter
    def responder_type(self, value):
        if __debug__:
            from j2735_v2x_msgs.msg import ITISResponderGroupAffected
            assert \
                isinstance(value, ITISResponderGroupAffected), \
                "The 'responder_type' field must be a sub message of type 'ITISResponderGroupAffected'"
        self._responder_type = value

    @property
    def fuel_type(self):
        """Message field 'fuel_type'."""
        return self._fuel_type

    @fuel_type.setter
    def fuel_type(self, value):
        if __debug__:
            from j2735_v2x_msgs.msg import FuelType
            assert \
                isinstance(value, FuelType), \
                "The 'fuel_type' field must be a sub message of type 'FuelType'"
        self._fuel_type = value
