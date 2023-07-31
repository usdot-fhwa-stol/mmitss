# generated from rosidl_generator_py/resource/_idl.py.em
# with input from j2735_v2x_msgs:msg/SegmentAttributeXY.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_SegmentAttributeXY(type):
    """Metaclass of message 'SegmentAttributeXY'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'RESERVED': 0,
        'DONOTBLOCK': 1,
        'WHITELINE': 2,
        'MERGINGLANELEFT': 3,
        'MERGINGLANERIGHT': 4,
        'CURBONLEFT': 5,
        'CURBONRIGHT': 6,
        'LOADINGZONEONLEFT': 7,
        'LOADINGZONEONRIGHT': 8,
        'TURNOUTPOINTONLEFT': 9,
        'TURNOUTPOINTONRIGHT': 10,
        'ADJACENTPARKINGONLEFT': 11,
        'ADJACENTPARKINGONRIGHT': 12,
        'ADJACENTBIKELANEONLEFT': 13,
        'ADJACENTBIKELANEONRIGHT': 14,
        'SHAREDBIKELANE': 15,
        'BIKEBOXINFRONT': 16,
        'TRANSITSTOPONLEFT': 17,
        'TRANSITSTOPONRIGHT': 18,
        'TRANSITSTOPINLANE': 19,
        'SHAREDWITHTRACKEDVEHICLE': 20,
        'SAFEISLAND': 21,
        'LOWCURBSPRESENT': 22,
        'RUMBLESTRIPPRESENT': 23,
        'AUDIBLESIGNALINGPRESENT': 24,
        'ADAPTIVETIMINGPRESENT': 25,
        'RFSIGNALREQUESTPRESENT': 26,
        'PARTIALCURBINTRUSION': 27,
        'TAPERTOLEFT': 28,
        'TAPERTORIGHT': 29,
        'TAPERTOCENTERLINE': 30,
        'PARALLELPARKING': 31,
        'FREEPARKING': 32,
        'TIMERESTRICTIONSONPARKING': 33,
        'COSTTOPARK': 34,
        'MIDBLOCKCURBPRESENT': 35,
        'UNEVENPAVEMENTPRESENT': 36,
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
                'j2735_v2x_msgs.msg.SegmentAttributeXY')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__segment_attribute_xy
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__segment_attribute_xy
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__segment_attribute_xy
            cls._TYPE_SUPPORT = module.type_support_msg__msg__segment_attribute_xy
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__segment_attribute_xy

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'RESERVED': cls.__constants['RESERVED'],
            'DONOTBLOCK': cls.__constants['DONOTBLOCK'],
            'WHITELINE': cls.__constants['WHITELINE'],
            'MERGINGLANELEFT': cls.__constants['MERGINGLANELEFT'],
            'MERGINGLANERIGHT': cls.__constants['MERGINGLANERIGHT'],
            'CURBONLEFT': cls.__constants['CURBONLEFT'],
            'CURBONRIGHT': cls.__constants['CURBONRIGHT'],
            'LOADINGZONEONLEFT': cls.__constants['LOADINGZONEONLEFT'],
            'LOADINGZONEONRIGHT': cls.__constants['LOADINGZONEONRIGHT'],
            'TURNOUTPOINTONLEFT': cls.__constants['TURNOUTPOINTONLEFT'],
            'TURNOUTPOINTONRIGHT': cls.__constants['TURNOUTPOINTONRIGHT'],
            'ADJACENTPARKINGONLEFT': cls.__constants['ADJACENTPARKINGONLEFT'],
            'ADJACENTPARKINGONRIGHT': cls.__constants['ADJACENTPARKINGONRIGHT'],
            'ADJACENTBIKELANEONLEFT': cls.__constants['ADJACENTBIKELANEONLEFT'],
            'ADJACENTBIKELANEONRIGHT': cls.__constants['ADJACENTBIKELANEONRIGHT'],
            'SHAREDBIKELANE': cls.__constants['SHAREDBIKELANE'],
            'BIKEBOXINFRONT': cls.__constants['BIKEBOXINFRONT'],
            'TRANSITSTOPONLEFT': cls.__constants['TRANSITSTOPONLEFT'],
            'TRANSITSTOPONRIGHT': cls.__constants['TRANSITSTOPONRIGHT'],
            'TRANSITSTOPINLANE': cls.__constants['TRANSITSTOPINLANE'],
            'SHAREDWITHTRACKEDVEHICLE': cls.__constants['SHAREDWITHTRACKEDVEHICLE'],
            'SAFEISLAND': cls.__constants['SAFEISLAND'],
            'LOWCURBSPRESENT': cls.__constants['LOWCURBSPRESENT'],
            'RUMBLESTRIPPRESENT': cls.__constants['RUMBLESTRIPPRESENT'],
            'AUDIBLESIGNALINGPRESENT': cls.__constants['AUDIBLESIGNALINGPRESENT'],
            'ADAPTIVETIMINGPRESENT': cls.__constants['ADAPTIVETIMINGPRESENT'],
            'RFSIGNALREQUESTPRESENT': cls.__constants['RFSIGNALREQUESTPRESENT'],
            'PARTIALCURBINTRUSION': cls.__constants['PARTIALCURBINTRUSION'],
            'TAPERTOLEFT': cls.__constants['TAPERTOLEFT'],
            'TAPERTORIGHT': cls.__constants['TAPERTORIGHT'],
            'TAPERTOCENTERLINE': cls.__constants['TAPERTOCENTERLINE'],
            'PARALLELPARKING': cls.__constants['PARALLELPARKING'],
            'FREEPARKING': cls.__constants['FREEPARKING'],
            'TIMERESTRICTIONSONPARKING': cls.__constants['TIMERESTRICTIONSONPARKING'],
            'COSTTOPARK': cls.__constants['COSTTOPARK'],
            'MIDBLOCKCURBPRESENT': cls.__constants['MIDBLOCKCURBPRESENT'],
            'UNEVENPAVEMENTPRESENT': cls.__constants['UNEVENPAVEMENTPRESENT'],
        }

    @property
    def RESERVED(self):
        """Message constant 'RESERVED'."""
        return Metaclass_SegmentAttributeXY.__constants['RESERVED']

    @property
    def DONOTBLOCK(self):
        """Message constant 'DONOTBLOCK'."""
        return Metaclass_SegmentAttributeXY.__constants['DONOTBLOCK']

    @property
    def WHITELINE(self):
        """Message constant 'WHITELINE'."""
        return Metaclass_SegmentAttributeXY.__constants['WHITELINE']

    @property
    def MERGINGLANELEFT(self):
        """Message constant 'MERGINGLANELEFT'."""
        return Metaclass_SegmentAttributeXY.__constants['MERGINGLANELEFT']

    @property
    def MERGINGLANERIGHT(self):
        """Message constant 'MERGINGLANERIGHT'."""
        return Metaclass_SegmentAttributeXY.__constants['MERGINGLANERIGHT']

    @property
    def CURBONLEFT(self):
        """Message constant 'CURBONLEFT'."""
        return Metaclass_SegmentAttributeXY.__constants['CURBONLEFT']

    @property
    def CURBONRIGHT(self):
        """Message constant 'CURBONRIGHT'."""
        return Metaclass_SegmentAttributeXY.__constants['CURBONRIGHT']

    @property
    def LOADINGZONEONLEFT(self):
        """Message constant 'LOADINGZONEONLEFT'."""
        return Metaclass_SegmentAttributeXY.__constants['LOADINGZONEONLEFT']

    @property
    def LOADINGZONEONRIGHT(self):
        """Message constant 'LOADINGZONEONRIGHT'."""
        return Metaclass_SegmentAttributeXY.__constants['LOADINGZONEONRIGHT']

    @property
    def TURNOUTPOINTONLEFT(self):
        """Message constant 'TURNOUTPOINTONLEFT'."""
        return Metaclass_SegmentAttributeXY.__constants['TURNOUTPOINTONLEFT']

    @property
    def TURNOUTPOINTONRIGHT(self):
        """Message constant 'TURNOUTPOINTONRIGHT'."""
        return Metaclass_SegmentAttributeXY.__constants['TURNOUTPOINTONRIGHT']

    @property
    def ADJACENTPARKINGONLEFT(self):
        """Message constant 'ADJACENTPARKINGONLEFT'."""
        return Metaclass_SegmentAttributeXY.__constants['ADJACENTPARKINGONLEFT']

    @property
    def ADJACENTPARKINGONRIGHT(self):
        """Message constant 'ADJACENTPARKINGONRIGHT'."""
        return Metaclass_SegmentAttributeXY.__constants['ADJACENTPARKINGONRIGHT']

    @property
    def ADJACENTBIKELANEONLEFT(self):
        """Message constant 'ADJACENTBIKELANEONLEFT'."""
        return Metaclass_SegmentAttributeXY.__constants['ADJACENTBIKELANEONLEFT']

    @property
    def ADJACENTBIKELANEONRIGHT(self):
        """Message constant 'ADJACENTBIKELANEONRIGHT'."""
        return Metaclass_SegmentAttributeXY.__constants['ADJACENTBIKELANEONRIGHT']

    @property
    def SHAREDBIKELANE(self):
        """Message constant 'SHAREDBIKELANE'."""
        return Metaclass_SegmentAttributeXY.__constants['SHAREDBIKELANE']

    @property
    def BIKEBOXINFRONT(self):
        """Message constant 'BIKEBOXINFRONT'."""
        return Metaclass_SegmentAttributeXY.__constants['BIKEBOXINFRONT']

    @property
    def TRANSITSTOPONLEFT(self):
        """Message constant 'TRANSITSTOPONLEFT'."""
        return Metaclass_SegmentAttributeXY.__constants['TRANSITSTOPONLEFT']

    @property
    def TRANSITSTOPONRIGHT(self):
        """Message constant 'TRANSITSTOPONRIGHT'."""
        return Metaclass_SegmentAttributeXY.__constants['TRANSITSTOPONRIGHT']

    @property
    def TRANSITSTOPINLANE(self):
        """Message constant 'TRANSITSTOPINLANE'."""
        return Metaclass_SegmentAttributeXY.__constants['TRANSITSTOPINLANE']

    @property
    def SHAREDWITHTRACKEDVEHICLE(self):
        """Message constant 'SHAREDWITHTRACKEDVEHICLE'."""
        return Metaclass_SegmentAttributeXY.__constants['SHAREDWITHTRACKEDVEHICLE']

    @property
    def SAFEISLAND(self):
        """Message constant 'SAFEISLAND'."""
        return Metaclass_SegmentAttributeXY.__constants['SAFEISLAND']

    @property
    def LOWCURBSPRESENT(self):
        """Message constant 'LOWCURBSPRESENT'."""
        return Metaclass_SegmentAttributeXY.__constants['LOWCURBSPRESENT']

    @property
    def RUMBLESTRIPPRESENT(self):
        """Message constant 'RUMBLESTRIPPRESENT'."""
        return Metaclass_SegmentAttributeXY.__constants['RUMBLESTRIPPRESENT']

    @property
    def AUDIBLESIGNALINGPRESENT(self):
        """Message constant 'AUDIBLESIGNALINGPRESENT'."""
        return Metaclass_SegmentAttributeXY.__constants['AUDIBLESIGNALINGPRESENT']

    @property
    def ADAPTIVETIMINGPRESENT(self):
        """Message constant 'ADAPTIVETIMINGPRESENT'."""
        return Metaclass_SegmentAttributeXY.__constants['ADAPTIVETIMINGPRESENT']

    @property
    def RFSIGNALREQUESTPRESENT(self):
        """Message constant 'RFSIGNALREQUESTPRESENT'."""
        return Metaclass_SegmentAttributeXY.__constants['RFSIGNALREQUESTPRESENT']

    @property
    def PARTIALCURBINTRUSION(self):
        """Message constant 'PARTIALCURBINTRUSION'."""
        return Metaclass_SegmentAttributeXY.__constants['PARTIALCURBINTRUSION']

    @property
    def TAPERTOLEFT(self):
        """Message constant 'TAPERTOLEFT'."""
        return Metaclass_SegmentAttributeXY.__constants['TAPERTOLEFT']

    @property
    def TAPERTORIGHT(self):
        """Message constant 'TAPERTORIGHT'."""
        return Metaclass_SegmentAttributeXY.__constants['TAPERTORIGHT']

    @property
    def TAPERTOCENTERLINE(self):
        """Message constant 'TAPERTOCENTERLINE'."""
        return Metaclass_SegmentAttributeXY.__constants['TAPERTOCENTERLINE']

    @property
    def PARALLELPARKING(self):
        """Message constant 'PARALLELPARKING'."""
        return Metaclass_SegmentAttributeXY.__constants['PARALLELPARKING']

    @property
    def FREEPARKING(self):
        """Message constant 'FREEPARKING'."""
        return Metaclass_SegmentAttributeXY.__constants['FREEPARKING']

    @property
    def TIMERESTRICTIONSONPARKING(self):
        """Message constant 'TIMERESTRICTIONSONPARKING'."""
        return Metaclass_SegmentAttributeXY.__constants['TIMERESTRICTIONSONPARKING']

    @property
    def COSTTOPARK(self):
        """Message constant 'COSTTOPARK'."""
        return Metaclass_SegmentAttributeXY.__constants['COSTTOPARK']

    @property
    def MIDBLOCKCURBPRESENT(self):
        """Message constant 'MIDBLOCKCURBPRESENT'."""
        return Metaclass_SegmentAttributeXY.__constants['MIDBLOCKCURBPRESENT']

    @property
    def UNEVENPAVEMENTPRESENT(self):
        """Message constant 'UNEVENPAVEMENTPRESENT'."""
        return Metaclass_SegmentAttributeXY.__constants['UNEVENPAVEMENTPRESENT']


class SegmentAttributeXY(metaclass=Metaclass_SegmentAttributeXY):
    """
    Message class 'SegmentAttributeXY'.

    Constants:
      RESERVED
      DONOTBLOCK
      WHITELINE
      MERGINGLANELEFT
      MERGINGLANERIGHT
      CURBONLEFT
      CURBONRIGHT
      LOADINGZONEONLEFT
      LOADINGZONEONRIGHT
      TURNOUTPOINTONLEFT
      TURNOUTPOINTONRIGHT
      ADJACENTPARKINGONLEFT
      ADJACENTPARKINGONRIGHT
      ADJACENTBIKELANEONLEFT
      ADJACENTBIKELANEONRIGHT
      SHAREDBIKELANE
      BIKEBOXINFRONT
      TRANSITSTOPONLEFT
      TRANSITSTOPONRIGHT
      TRANSITSTOPINLANE
      SHAREDWITHTRACKEDVEHICLE
      SAFEISLAND
      LOWCURBSPRESENT
      RUMBLESTRIPPRESENT
      AUDIBLESIGNALINGPRESENT
      ADAPTIVETIMINGPRESENT
      RFSIGNALREQUESTPRESENT
      PARTIALCURBINTRUSION
      TAPERTOLEFT
      TAPERTORIGHT
      TAPERTOCENTERLINE
      PARALLELPARKING
      FREEPARKING
      TIMERESTRICTIONSONPARKING
      COSTTOPARK
      MIDBLOCKCURBPRESENT
      UNEVENPAVEMENTPRESENT
    """

    __slots__ = [
        '_segment_attribute_xy',
    ]

    _fields_and_field_types = {
        'segment_attribute_xy': 'uint8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.segment_attribute_xy = kwargs.get('segment_attribute_xy', int())

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
        if self.segment_attribute_xy != other.segment_attribute_xy:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def segment_attribute_xy(self):
        """Message field 'segment_attribute_xy'."""
        return self._segment_attribute_xy

    @segment_attribute_xy.setter
    def segment_attribute_xy(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'segment_attribute_xy' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'segment_attribute_xy' field must be an unsigned integer in [0, 255]"
        self._segment_attribute_xy = value
