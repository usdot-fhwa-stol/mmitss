# generated from rosidl_generator_py/resource/_idl.py.em
# with input from j2735_v2x_msgs:msg/VehicleData.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_VehicleData(type):
    """Metaclass of message 'VehicleData'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'HAS_HEIGHT': 1,
        'HAS_BUMPERS': 2,
        'HAS_MASS': 4,
        'HAS_TRAILER_WEIGHT': 8,
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
                'j2735_v2x_msgs.msg.VehicleData')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__vehicle_data
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__vehicle_data
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__vehicle_data
            cls._TYPE_SUPPORT = module.type_support_msg__msg__vehicle_data
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__vehicle_data

            from j2735_v2x_msgs.msg import BumperHeights
            if BumperHeights.__class__._TYPE_SUPPORT is None:
                BumperHeights.__class__.__import_type_support__()

            from j2735_v2x_msgs.msg import TrailerWeight
            if TrailerWeight.__class__._TYPE_SUPPORT is None:
                TrailerWeight.__class__.__import_type_support__()

            from j2735_v2x_msgs.msg import VehicleHeight
            if VehicleHeight.__class__._TYPE_SUPPORT is None:
                VehicleHeight.__class__.__import_type_support__()

            from j2735_v2x_msgs.msg import VehicleMass
            if VehicleMass.__class__._TYPE_SUPPORT is None:
                VehicleMass.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'HAS_HEIGHT': cls.__constants['HAS_HEIGHT'],
            'HAS_BUMPERS': cls.__constants['HAS_BUMPERS'],
            'HAS_MASS': cls.__constants['HAS_MASS'],
            'HAS_TRAILER_WEIGHT': cls.__constants['HAS_TRAILER_WEIGHT'],
        }

    @property
    def HAS_HEIGHT(self):
        """Message constant 'HAS_HEIGHT'."""
        return Metaclass_VehicleData.__constants['HAS_HEIGHT']

    @property
    def HAS_BUMPERS(self):
        """Message constant 'HAS_BUMPERS'."""
        return Metaclass_VehicleData.__constants['HAS_BUMPERS']

    @property
    def HAS_MASS(self):
        """Message constant 'HAS_MASS'."""
        return Metaclass_VehicleData.__constants['HAS_MASS']

    @property
    def HAS_TRAILER_WEIGHT(self):
        """Message constant 'HAS_TRAILER_WEIGHT'."""
        return Metaclass_VehicleData.__constants['HAS_TRAILER_WEIGHT']


class VehicleData(metaclass=Metaclass_VehicleData):
    """
    Message class 'VehicleData'.

    Constants:
      HAS_HEIGHT
      HAS_BUMPERS
      HAS_MASS
      HAS_TRAILER_WEIGHT
    """

    __slots__ = [
        '_presence_vector',
        '_height',
        '_bumpers',
        '_mass',
        '_trailer_weight',
    ]

    _fields_and_field_types = {
        'presence_vector': 'uint16',
        'height': 'j2735_v2x_msgs/VehicleHeight',
        'bumpers': 'j2735_v2x_msgs/BumperHeights',
        'mass': 'j2735_v2x_msgs/VehicleMass',
        'trailer_weight': 'j2735_v2x_msgs/TrailerWeight',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['j2735_v2x_msgs', 'msg'], 'VehicleHeight'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['j2735_v2x_msgs', 'msg'], 'BumperHeights'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['j2735_v2x_msgs', 'msg'], 'VehicleMass'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['j2735_v2x_msgs', 'msg'], 'TrailerWeight'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.presence_vector = kwargs.get('presence_vector', int())
        from j2735_v2x_msgs.msg import VehicleHeight
        self.height = kwargs.get('height', VehicleHeight())
        from j2735_v2x_msgs.msg import BumperHeights
        self.bumpers = kwargs.get('bumpers', BumperHeights())
        from j2735_v2x_msgs.msg import VehicleMass
        self.mass = kwargs.get('mass', VehicleMass())
        from j2735_v2x_msgs.msg import TrailerWeight
        self.trailer_weight = kwargs.get('trailer_weight', TrailerWeight())

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
        if self.height != other.height:
            return False
        if self.bumpers != other.bumpers:
            return False
        if self.mass != other.mass:
            return False
        if self.trailer_weight != other.trailer_weight:
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
    def height(self):
        """Message field 'height'."""
        return self._height

    @height.setter
    def height(self, value):
        if __debug__:
            from j2735_v2x_msgs.msg import VehicleHeight
            assert \
                isinstance(value, VehicleHeight), \
                "The 'height' field must be a sub message of type 'VehicleHeight'"
        self._height = value

    @property
    def bumpers(self):
        """Message field 'bumpers'."""
        return self._bumpers

    @bumpers.setter
    def bumpers(self, value):
        if __debug__:
            from j2735_v2x_msgs.msg import BumperHeights
            assert \
                isinstance(value, BumperHeights), \
                "The 'bumpers' field must be a sub message of type 'BumperHeights'"
        self._bumpers = value

    @property
    def mass(self):
        """Message field 'mass'."""
        return self._mass

    @mass.setter
    def mass(self, value):
        if __debug__:
            from j2735_v2x_msgs.msg import VehicleMass
            assert \
                isinstance(value, VehicleMass), \
                "The 'mass' field must be a sub message of type 'VehicleMass'"
        self._mass = value

    @property
    def trailer_weight(self):
        """Message field 'trailer_weight'."""
        return self._trailer_weight

    @trailer_weight.setter
    def trailer_weight(self, value):
        if __debug__:
            from j2735_v2x_msgs.msg import TrailerWeight
            assert \
                isinstance(value, TrailerWeight), \
                "The 'trailer_weight' field must be a sub message of type 'TrailerWeight'"
        self._trailer_weight = value
