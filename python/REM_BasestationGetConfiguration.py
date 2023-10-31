# AUTOGENERATED. Run generator/main.py to regenerate
"""
[  0   ] [  1   ] [  2   ] [  3   ] [  4   ] [  5   ] [  6   ] [  7   ]
11111111 -------- -------- -------- -------- -------- -------- -------- header
-------- 1111---- -------- -------- -------- -------- -------- -------- toRobotId
-------- ----1--- -------- -------- -------- -------- -------- -------- toColor
-------- -----1-- -------- -------- -------- -------- -------- -------- toBC
-------- ------1- -------- -------- -------- -------- -------- -------- toBS
-------- -------1 -------- -------- -------- -------- -------- -------- toPC
-------- -------- 1111---- -------- -------- -------- -------- -------- fromRobotId
-------- -------- ----1--- -------- -------- -------- -------- -------- fromColor
-------- -------- -----1-- -------- -------- -------- -------- -------- fromBS
-------- -------- ------1- -------- -------- -------- -------- -------- fromPC
-------- -------- -------1 -------- -------- -------- -------- -------- needTimeStamp
-------- -------- -------- 1111---- -------- -------- -------- -------- remVersion
-------- -------- -------- ----1111 -------- -------- -------- -------- messageId
-------- -------- -------- -------- 11111111 11111111 11111111 -------- timestamp
-------- -------- -------- -------- -------- -------- -------- 11111111 payloadSize
"""

import numpy as np
from . import REM_BaseTypes



class REM_BasestationGetConfiguration:
    header = 0                # integer [0, 255]             Header byte indicating the type of packet
    toRobotId = 0             # integer [0, 15]              Id of the receiving robot
    toColor = 0               # integer [0, 1]               Color of the receiving robot / basestation. Yellow = 0, Blue = 1
    toBC = 0                  # integer [0, 1]               Bit indicating this packet has to be broadcasted to all robots
    toBS = 0                  # integer [0, 1]               Bit indicating this packet is meant for the basestation
    toPC = 0                  # integer [0, 1]               Bit indicating this packet is meant for the PC
    fromRobotId = 0           # integer [0, 15]              Id of the transmitting robot
    fromColor = 0             # integer [0, 1]               Color of the transmitting robot / basestation. Yellow = 0, Blue = 1
    fromBS = 0                # integer [0, 1]               Bit indicating this packet is coming from the basestation
    fromPC = 0                # integer [0, 1]               Bit indicating this packet is coming from the PC
    needTimeStamp = 0         # integer [0, 1]               Bit indicating that source device needs unix timestamp
    remVersion = 0            # integer [0, 15]              Version of roboteam_embedded_messages
    messageId = 0             # integer [0, 15]              messageId. Can be used for aligning packets
    timestamp = 0             # integer [0, 16777215]        Timestamp in milliseconds
    payloadSize = 0           # integer [0, 255]             Size of the payload. At most 255 bytes including the generic_packet_header. Keep the 127 byte SX1280 limit in mind



# ================================ GETTERS ================================
    @staticmethod
    def get_header(payload):
        return ((payload[0]));

    @staticmethod
    def get_toRobotId(payload):
        return ((payload[1] & 0b11110000) >> 4);

    @staticmethod
    def get_toColor(payload):
        return (payload[1] & 0b00001000) > 0;

    @staticmethod
    def get_toBC(payload):
        return (payload[1] & 0b00000100) > 0;

    @staticmethod
    def get_toBS(payload):
        return (payload[1] & 0b00000010) > 0;

    @staticmethod
    def get_toPC(payload):
        return (payload[1] & 0b00000001) > 0;

    @staticmethod
    def get_fromRobotId(payload):
        return ((payload[2] & 0b11110000) >> 4);

    @staticmethod
    def get_fromColor(payload):
        return (payload[2] & 0b00001000) > 0;

    @staticmethod
    def get_fromBS(payload):
        return (payload[2] & 0b00000100) > 0;

    @staticmethod
    def get_fromPC(payload):
        return (payload[2] & 0b00000010) > 0;

    @staticmethod
    def get_needTimeStamp(payload):
        return (payload[2] & 0b00000001) > 0;

    @staticmethod
    def get_remVersion(payload):
        return ((payload[3] & 0b11110000) >> 4);

    @staticmethod
    def get_messageId(payload):
        return ((payload[3] & 0b00001111));

    @staticmethod
    def get_timestamp(payload):
        return ((payload[4]) << 16) | ((payload[5]) << 8) | ((payload[6]));

    @staticmethod
    def get_payloadSize(payload):
        return ((payload[7]));

# ================================ SETTERS ================================
    @staticmethod
    def set_header(payload, header):
        payload[0] = header;

    @staticmethod
    def set_toRobotId(payload, toRobotId):
        payload[1] = ((toRobotId << 4) & 0b11110000) | (payload[1] & 0b00001111);

    @staticmethod
    def set_toColor(payload, toColor):
        payload[1] = ((toColor << 3) & 0b00001000) | (payload[1] & 0b11110111);

    @staticmethod
    def set_toBC(payload, toBC):
        payload[1] = ((toBC << 2) & 0b00000100) | (payload[1] & 0b11111011);

    @staticmethod
    def set_toBS(payload, toBS):
        payload[1] = ((toBS << 1) & 0b00000010) | (payload[1] & 0b11111101);

    @staticmethod
    def set_toPC(payload, toPC):
        payload[1] = (toPC & 0b00000001) | (payload[1] & 0b11111110);

    @staticmethod
    def set_fromRobotId(payload, fromRobotId):
        payload[2] = ((fromRobotId << 4) & 0b11110000) | (payload[2] & 0b00001111);

    @staticmethod
    def set_fromColor(payload, fromColor):
        payload[2] = ((fromColor << 3) & 0b00001000) | (payload[2] & 0b11110111);

    @staticmethod
    def set_fromBS(payload, fromBS):
        payload[2] = ((fromBS << 2) & 0b00000100) | (payload[2] & 0b11111011);

    @staticmethod
    def set_fromPC(payload, fromPC):
        payload[2] = ((fromPC << 1) & 0b00000010) | (payload[2] & 0b11111101);

    @staticmethod
    def set_needTimeStamp(payload, needTimeStamp):
        payload[2] = (needTimeStamp & 0b00000001) | (payload[2] & 0b11111110);

    @staticmethod
    def set_remVersion(payload, remVersion):
        payload[3] = ((remVersion << 4) & 0b11110000) | (payload[3] & 0b00001111);

    @staticmethod
    def set_messageId(payload, messageId):
        payload[3] = (messageId & 0b00001111) | (payload[3] & 0b11110000);

    @staticmethod
    def set_timestamp(payload, timestamp):
        payload[4] = (timestamp >> 16);
        payload[5] = (timestamp >> 8);
        payload[6] = timestamp;

    @staticmethod
    def set_payloadSize(payload, payloadSize):
        payload[7] = payloadSize;

# ================================ ENCODE ================================
    def encode(self):
        payload = np.zeros(REM_BaseTypes.REM_PACKET_SIZE_REM_BASESTATION_GET_CONFIGURATION, dtype=np.uint8)
        REM_BasestationGetConfiguration.set_header              (payload, self.header)
        REM_BasestationGetConfiguration.set_toRobotId           (payload, self.toRobotId)
        REM_BasestationGetConfiguration.set_toColor             (payload, self.toColor)
        REM_BasestationGetConfiguration.set_toBC                (payload, self.toBC)
        REM_BasestationGetConfiguration.set_toBS                (payload, self.toBS)
        REM_BasestationGetConfiguration.set_toPC                (payload, self.toPC)
        REM_BasestationGetConfiguration.set_fromRobotId         (payload, self.fromRobotId)
        REM_BasestationGetConfiguration.set_fromColor           (payload, self.fromColor)
        REM_BasestationGetConfiguration.set_fromBS              (payload, self.fromBS)
        REM_BasestationGetConfiguration.set_fromPC              (payload, self.fromPC)
        REM_BasestationGetConfiguration.set_needTimeStamp       (payload, self.needTimeStamp)
        REM_BasestationGetConfiguration.set_remVersion          (payload, self.remVersion)
        REM_BasestationGetConfiguration.set_messageId           (payload, self.messageId)
        REM_BasestationGetConfiguration.set_timestamp           (payload, self.timestamp)
        REM_BasestationGetConfiguration.set_payloadSize         (payload, self.payloadSize)
        return payload


# ================================ DECODE ================================
    def decode(self, payload):
        self.header           = REM_BasestationGetConfiguration.get_header(payload)
        self.toRobotId        = REM_BasestationGetConfiguration.get_toRobotId(payload)
        self.toColor          = REM_BasestationGetConfiguration.get_toColor(payload)
        self.toBC             = REM_BasestationGetConfiguration.get_toBC(payload)
        self.toBS             = REM_BasestationGetConfiguration.get_toBS(payload)
        self.toPC             = REM_BasestationGetConfiguration.get_toPC(payload)
        self.fromRobotId      = REM_BasestationGetConfiguration.get_fromRobotId(payload)
        self.fromColor        = REM_BasestationGetConfiguration.get_fromColor(payload)
        self.fromBS           = REM_BasestationGetConfiguration.get_fromBS(payload)
        self.fromPC           = REM_BasestationGetConfiguration.get_fromPC(payload)
        self.needTimeStamp    = REM_BasestationGetConfiguration.get_needTimeStamp(payload)
        self.remVersion       = REM_BasestationGetConfiguration.get_remVersion(payload)
        self.messageId        = REM_BasestationGetConfiguration.get_messageId(payload)
        self.timestamp        = REM_BasestationGetConfiguration.get_timestamp(payload)
        self.payloadSize      = REM_BasestationGetConfiguration.get_payloadSize(payload)


    def print_bit_string(self):
        payload = self.encode()
        for i in range(len(payload)):
            print(format(payload[i], '08b'), end=" ")
        print()
