# generated from rosidl_generator_py/resource/_idl.py.em
# with input from j2735_v2x_msgs:msg/TrailerData.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_TrailerData(type):
    """Metaclass of message 'TrailerData'."""

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
            module = import_type_support('j2735_v2x_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'j2735_v2x_msgs.msg.TrailerData')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__trailer_data
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__trailer_data
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__trailer_data
            cls._TYPE_SUPPORT = module.type_support_msg__msg__trailer_data
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__trailer_data

            from j2735_v2x_msgs.msg import PivotPointDescription
            if PivotPointDescription.__class__._TYPE_SUPPORT is None:
                PivotPointDescription.__class__.__import_type_support__()

            from j2735_v2x_msgs.msg import TrailerUnitDescriptionList
            if TrailerUnitDescriptionList.__class__._TYPE_SUPPORT is None:
                TrailerUnitDescriptionList.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class TrailerData(metaclass=Metaclass_TrailerData):
    """Message class 'TrailerData'."""

    __slots__ = [
        '_ssp_index',
        '_connection',
        '_units',
    ]

    _fields_and_field_types = {
        'ssp_index': 'uint8',
        'connection': 'j2735_v2x_msgs/PivotPointDescription',
        'units': 'j2735_v2x_msgs/TrailerUnitDescriptionList',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['j2735_v2x_msgs', 'msg'], 'PivotPointDescription'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['j2735_v2x_msgs', 'msg'], 'TrailerUnitDescriptionList'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.ssp_index = kwargs.get('ssp_index', int())
        from j2735_v2x_msgs.msg import PivotPointDescription
        self.connection = kwargs.get('connection', PivotPointDescription())
        from j2735_v2x_msgs.msg import TrailerUnitDescriptionList
        self.units = kwargs.get('units', TrailerUnitDescriptionList())

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
        if self.ssp_index != other.ssp_index:
            return False
        if self.connection != other.connection:
            return False
        if self.units != other.units:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def ssp_index(self):
        """Message field 'ssp_index'."""
        return self._ssp_index

    @ssp_index.setter
    def ssp_index(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'ssp_index' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'ssp_index' field must be an unsigned integer in [0, 255]"
        self._ssp_index = value

    @property
    def connection(self):
        """Message field 'connection'."""
        return self._connection

    @connection.setter
    def connection(self, value):
        if __debug__:
            from j2735_v2x_msgs.msg import PivotPointDescription
            assert \
                isinstance(value, PivotPointDescription), \
                "The 'connection' field must be a sub message of type 'PivotPointDescription'"
        self._connection = value

    @property
    def units(self):
        """Message field 'units'."""
        return self._units

    @units.setter
    def units(self, value):
        if __debug__:
            from j2735_v2x_msgs.msg import TrailerUnitDescriptionList
            assert \
                isinstance(value, TrailerUnitDescriptionList), \
                "The 'units' field must be a sub message of type 'TrailerUnitDescriptionList'"
        self._units = value
