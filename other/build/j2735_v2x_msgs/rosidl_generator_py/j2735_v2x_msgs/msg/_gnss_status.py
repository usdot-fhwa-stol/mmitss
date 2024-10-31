# generated from rosidl_generator_py/resource/_idl.py.em
# with input from j2735_v2x_msgs:msg/GNSSStatus.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_GNSSStatus(type):
    """Metaclass of message 'GNSSStatus'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'UNAVAILABLE': 0,
        'IS_HEALTHY': 1,
        'IS_MONITORED': 2,
        'BASE_STATION_TYPE': 4,
        'APDOP_OF_UNDER_5': 8,
        'IN_VIEW_OF_UNDER_5': 16,
        'LOCAL_CORRECTIONS_PRESENT': 32,
        'NETWORK_CORRECTIONS_PRESENT': 64,
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
                'j2735_v2x_msgs.msg.GNSSStatus')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__gnss_status
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__gnss_status
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__gnss_status
            cls._TYPE_SUPPORT = module.type_support_msg__msg__gnss_status
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__gnss_status

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'UNAVAILABLE': cls.__constants['UNAVAILABLE'],
            'IS_HEALTHY': cls.__constants['IS_HEALTHY'],
            'IS_MONITORED': cls.__constants['IS_MONITORED'],
            'BASE_STATION_TYPE': cls.__constants['BASE_STATION_TYPE'],
            'APDOP_OF_UNDER_5': cls.__constants['APDOP_OF_UNDER_5'],
            'IN_VIEW_OF_UNDER_5': cls.__constants['IN_VIEW_OF_UNDER_5'],
            'LOCAL_CORRECTIONS_PRESENT': cls.__constants['LOCAL_CORRECTIONS_PRESENT'],
            'NETWORK_CORRECTIONS_PRESENT': cls.__constants['NETWORK_CORRECTIONS_PRESENT'],
        }

    @property
    def UNAVAILABLE(self):
        """Message constant 'UNAVAILABLE'."""
        return Metaclass_GNSSStatus.__constants['UNAVAILABLE']

    @property
    def IS_HEALTHY(self):
        """Message constant 'IS_HEALTHY'."""
        return Metaclass_GNSSStatus.__constants['IS_HEALTHY']

    @property
    def IS_MONITORED(self):
        """Message constant 'IS_MONITORED'."""
        return Metaclass_GNSSStatus.__constants['IS_MONITORED']

    @property
    def BASE_STATION_TYPE(self):
        """Message constant 'BASE_STATION_TYPE'."""
        return Metaclass_GNSSStatus.__constants['BASE_STATION_TYPE']

    @property
    def APDOP_OF_UNDER_5(self):
        """Message constant 'APDOP_OF_UNDER_5'."""
        return Metaclass_GNSSStatus.__constants['APDOP_OF_UNDER_5']

    @property
    def IN_VIEW_OF_UNDER_5(self):
        """Message constant 'IN_VIEW_OF_UNDER_5'."""
        return Metaclass_GNSSStatus.__constants['IN_VIEW_OF_UNDER_5']

    @property
    def LOCAL_CORRECTIONS_PRESENT(self):
        """Message constant 'LOCAL_CORRECTIONS_PRESENT'."""
        return Metaclass_GNSSStatus.__constants['LOCAL_CORRECTIONS_PRESENT']

    @property
    def NETWORK_CORRECTIONS_PRESENT(self):
        """Message constant 'NETWORK_CORRECTIONS_PRESENT'."""
        return Metaclass_GNSSStatus.__constants['NETWORK_CORRECTIONS_PRESENT']


class GNSSStatus(metaclass=Metaclass_GNSSStatus):
    """
    Message class 'GNSSStatus'.

    Constants:
      UNAVAILABLE
      IS_HEALTHY
      IS_MONITORED
      BASE_STATION_TYPE
      APDOP_OF_UNDER_5
      IN_VIEW_OF_UNDER_5
      LOCAL_CORRECTIONS_PRESENT
      NETWORK_CORRECTIONS_PRESENT
    """

    __slots__ = [
        '_statuses',
    ]

    _fields_and_field_types = {
        'statuses': 'uint8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.statuses = kwargs.get('statuses', int())

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
        if self.statuses != other.statuses:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def statuses(self):
        """Message field 'statuses'."""
        return self._statuses

    @statuses.setter
    def statuses(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'statuses' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'statuses' field must be an unsigned integer in [0, 255]"
        self._statuses = value
