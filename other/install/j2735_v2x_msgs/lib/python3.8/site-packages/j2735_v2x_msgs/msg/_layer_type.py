# generated from rosidl_generator_py/resource/_idl.py.em
# with input from j2735_v2x_msgs:msg/LayerType.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_LayerType(type):
    """Metaclass of message 'LayerType'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'NONE': 0,
        'MIXED_CONTENT': 1,
        'GENERAL_MAP_DATA': 2,
        'INTERSECTION_DATA': 3,
        'CURVE_DATA': 4,
        'ROADWAY_SECTION_DATA': 5,
        'PARKING_AREA_DATA': 6,
        'SHARED_LANE_DATA': 7,
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
                'j2735_v2x_msgs.msg.LayerType')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__layer_type
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__layer_type
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__layer_type
            cls._TYPE_SUPPORT = module.type_support_msg__msg__layer_type
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__layer_type

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'NONE': cls.__constants['NONE'],
            'MIXED_CONTENT': cls.__constants['MIXED_CONTENT'],
            'GENERAL_MAP_DATA': cls.__constants['GENERAL_MAP_DATA'],
            'INTERSECTION_DATA': cls.__constants['INTERSECTION_DATA'],
            'CURVE_DATA': cls.__constants['CURVE_DATA'],
            'ROADWAY_SECTION_DATA': cls.__constants['ROADWAY_SECTION_DATA'],
            'PARKING_AREA_DATA': cls.__constants['PARKING_AREA_DATA'],
            'SHARED_LANE_DATA': cls.__constants['SHARED_LANE_DATA'],
        }

    @property
    def NONE(self):
        """Message constant 'NONE'."""
        return Metaclass_LayerType.__constants['NONE']

    @property
    def MIXED_CONTENT(self):
        """Message constant 'MIXED_CONTENT'."""
        return Metaclass_LayerType.__constants['MIXED_CONTENT']

    @property
    def GENERAL_MAP_DATA(self):
        """Message constant 'GENERAL_MAP_DATA'."""
        return Metaclass_LayerType.__constants['GENERAL_MAP_DATA']

    @property
    def INTERSECTION_DATA(self):
        """Message constant 'INTERSECTION_DATA'."""
        return Metaclass_LayerType.__constants['INTERSECTION_DATA']

    @property
    def CURVE_DATA(self):
        """Message constant 'CURVE_DATA'."""
        return Metaclass_LayerType.__constants['CURVE_DATA']

    @property
    def ROADWAY_SECTION_DATA(self):
        """Message constant 'ROADWAY_SECTION_DATA'."""
        return Metaclass_LayerType.__constants['ROADWAY_SECTION_DATA']

    @property
    def PARKING_AREA_DATA(self):
        """Message constant 'PARKING_AREA_DATA'."""
        return Metaclass_LayerType.__constants['PARKING_AREA_DATA']

    @property
    def SHARED_LANE_DATA(self):
        """Message constant 'SHARED_LANE_DATA'."""
        return Metaclass_LayerType.__constants['SHARED_LANE_DATA']


class LayerType(metaclass=Metaclass_LayerType):
    """
    Message class 'LayerType'.

    Constants:
      NONE
      MIXED_CONTENT
      GENERAL_MAP_DATA
      INTERSECTION_DATA
      CURVE_DATA
      ROADWAY_SECTION_DATA
      PARKING_AREA_DATA
      SHARED_LANE_DATA
    """

    __slots__ = [
        '_layer_type',
    ]

    _fields_and_field_types = {
        'layer_type': 'uint8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.layer_type = kwargs.get('layer_type', int())

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
        if self.layer_type != other.layer_type:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def layer_type(self):
        """Message field 'layer_type'."""
        return self._layer_type

    @layer_type.setter
    def layer_type(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'layer_type' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'layer_type' field must be an unsigned integer in [0, 255]"
        self._layer_type = value
