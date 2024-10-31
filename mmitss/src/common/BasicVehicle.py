"""

**********************************************************************************
 © 2019 Arizona Board of Regents on behalf of the University of Arizona with rights
       granted for USDOT OSADP distribution with the Apache 2.0 open source license.
**********************************************************************************
  cv-work-zone-controller.py
  Created by: Niraj Altekar
  University of Arizona   
  College of Engineering

The purpose of the BasicVehicle class is to represent the key information about
a vehicle that is available from a Basic Safety Message in a connected vehicle 
system. 

Attributes:
    tempID -    the temporary ID that is assigned by each vehicle
    secMark -   a time stamp indicating when the data was sent to the system in units 
                of milliseconds within a minute
    position -  a (longitude, latitude, elevation) position represented in WGS-84 GPS
                coordinates [using the Position3D class]
    speed -     the speed of the vehicle in meters/second
    heading -   the vehicle heading in degrees from North using the WGS-84 GPS system
                where east is defined as a positive direction (e.g. 90 degrees is due east)


Future enhancements incude:
    - 

Larry Head
June 25, 2019

"""


import json


class BasicVehicle():
    def __init__(self, tempID, secMark, position, speed, heading, vehicleType):
        self.temporaryID = tempID
        self.secMark_Second = secMark
        # i'm sure there is a better way to deal with a Position Object
        self.longitude_DecimalDegree = position.longitude_DecimalDegree
        self.latitude_DecimalDegree = position.latitude_DecimalDegree
        self.elevation_Meter = position.elevation_Meter
        self.speed_MeterPerSecond = speed
        self.heading_Degree = heading
        self.vehicleType = vehicleType

    def BasicVehicle2json(self):
        bv_dict =   {"BasicVehicle": {  "temporaryID": self.temporaryID, 
                                        "secMark_Second": self.secMark_Second, 
                                        "speed_MeterPerSecond": self.speed_MeterPerSecond, 
                                        "heading_Degree": self.heading_Degree, 
                                        "vehicleType": self.vehicleType,
                                        "position": { 
                                            "latitude_DecimalDegree": self.latitude_DecimalDegree, 
                                            "longitude_DecimalDegree": self.longitude_DecimalDegree, 
                                            "elevation_Meter": self.elevation_Meter}
                                    }
                    }
        return json.dumps(bv_dict, sort_keys=True, indent = 4 )

    def json2BasicVehicle(self, jsonBasicVehicle):
        vehicle_dict = json.loads(jsonBasicVehicle)
        self.temporaryID = int(vehicle_dict["BasicVehicle"]["temporaryID"])
        self.secMark_Second = int(vehicle_dict["BasicVehicle"]["secMark_Second"])
        self.heading_Degree = float(vehicle_dict["BasicVehicle"]["heading_Degree"])
        self.vehicleType = vehicle_dict["BasicVehicle"]["vehicleType"]
        self.speed_MeterPerSecond = float(vehicle_dict["BasicVehicle"]["speed_MeterPerSecond"])
        self.latitude_DecimalDegree = float(vehicle_dict["BasicVehicle"]["position"]['latitude_DecimalDegree'])
        self.longitude_DecimalDegree = float(vehicle_dict["BasicVehicle"]['position']['longitude_DecimalDegree'])
        self.elevation_Meter = float(vehicle_dict["BasicVehicle"]['position']['elevation_Meter'])
        return self





        