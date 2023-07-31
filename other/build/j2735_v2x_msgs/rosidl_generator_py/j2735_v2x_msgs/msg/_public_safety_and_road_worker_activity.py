# generated from rosidl_generator_py/resource/_idl.py.em
# with input from j2735_v2x_msgs:msg/PublicSafetyAndRoadWorkerActivity.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_PublicSafetyAndRoadWorkerActivity(type):
    """Metaclass of message 'PublicSafetyAndRoadWorkerActivity'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'UNAVAILABLE': 0,
        'WORKING_ON_ROAD': 1,
        'SETTING_UP_CLOSURES': 2,
        'RESPONDING_TO_EVENTS': 4,
        'DIRECTING_TRAFFIC': 8,
        'OTHER_ACTIVITIES': 16,
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
                'j2735_v2x_msgs.msg.PublicSafetyAndRoadWorkerActivity')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__public_safety_and_road_worker_activity
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__public_safety_and_road_worker_activity
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__public_safety_and_road_worker_activity
            cls._TYPE_SUPPORT = module.type_support_msg__msg__public_safety_and_road_worker_activity
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__public_safety_and_road_worker_activity

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'UNAVAILABLE': cls.__constants['UNAVAILABLE'],
            'WORKING_ON_ROAD': cls.__constants['WORKING_ON_ROAD'],
            'SETTING_UP_CLOSURES': cls.__constants['SETTING_UP_CLOSURES'],
            'RESPONDING_TO_EVENTS': cls.__constants['RESPONDING_TO_EVENTS'],
            'DIRECTING_TRAFFIC': cls.__constants['DIRECTING_TRAFFIC'],
            'OTHER_ACTIVITIES': cls.__constants['OTHER_ACTIVITIES'],
        }

    @property
    def UNAVAILABLE(self):
        """Message constant 'UNAVAILABLE'."""
        return Metaclass_PublicSafetyAndRoadWorkerActivity.__constants['UNAVAILABLE']

    @property
    def WORKING_ON_ROAD(self):
        """Message constant 'WORKING_ON_ROAD'."""
        return Metaclass_PublicSafetyAndRoadWorkerActivity.__constants['WORKING_ON_ROAD']

    @property
    def SETTING_UP_CLOSURES(self):
        """Message constant 'SETTING_UP_CLOSURES'."""
        return Metaclass_PublicSafetyAndRoadWorkerActivity.__constants['SETTING_UP_CLOSURES']

    @property
    def RESPONDING_TO_EVENTS(self):
        """Message constant 'RESPONDING_TO_EVENTS'."""
        return Metaclass_PublicSafetyAndRoadWorkerActivity.__constants['RESPONDING_TO_EVENTS']

    @property
    def DIRECTING_TRAFFIC(self):
        """Message constant 'DIRECTING_TRAFFIC'."""
        return Metaclass_PublicSafetyAndRoadWorkerActivity.__constants['DIRECTING_TRAFFIC']

    @property
    def OTHER_ACTIVITIES(self):
        """Message constant 'OTHER_ACTIVITIES'."""
        return Metaclass_PublicSafetyAndRoadWorkerActivity.__constants['OTHER_ACTIVITIES']


class PublicSafetyAndRoadWorkerActivity(metaclass=Metaclass_PublicSafetyAndRoadWorkerActivity):
    """
    Message class 'PublicSafetyAndRoadWorkerActivity'.

    Constants:
      UNAVAILABLE
      WORKING_ON_ROAD
      SETTING_UP_CLOSURES
      RESPONDING_TO_EVENTS
      DIRECTING_TRAFFIC
      OTHER_ACTIVITIES
    """

    __slots__ = [
        '_activities',
    ]

    _fields_and_field_types = {
        'activities': 'uint8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.activities = kwargs.get('activities', int())

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
        if self.activities != other.activities:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def activities(self):
        """Message field 'activities'."""
        return self._activities

    @activities.setter
    def activities(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'activities' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'activities' field must be an unsigned integer in [0, 255]"
        self._activities = value
