# AUTOGENERATED. Run generator/main.py to regenerate
"""
[  0   ] [  1   ] [  2   ] [  3   ] [  4   ] [  5   ]
11111111 -------- -------- -------- -------- -------- header
-------- 1111---- -------- -------- -------- -------- remVersion
-------- ----1111 -------- -------- -------- -------- id
-------- -------- 1111---- -------- -------- -------- messageId
-------- -------- ----1111 11111111 -------- -------- period
-------- -------- -------- -------- 11111111 11111111 duration
"""

import numpy as np
from . import REM_BaseTypes



class REM_RobotBuzzer:
    header = 0                # integer [0, 255]             Header byte indicating the type of packet
    remVersion = 0            # integer [0, 15]              Version of roboteam_embedded_messages
    id = 0                    # integer [0, 15]              Id of the robot
    messageId = 0             # integer [0, 15]              Id of the message
    period = 0                # integer [0, 4095]            Sound that the buzzer makes.
    duration = 0              # float   [0.000, 5.000]       Duration of the sound



# ================================ GETTERS ================================
    @staticmethod
    def get_header(payload):
        return ((payload[0]));

    @staticmethod
    def get_remVersion(payload):
        return ((payload[1] & 0b11110000) >> 4);

    @staticmethod
    def get_id(payload):
        return ((payload[1] & 0b00001111));

    @staticmethod
    def get_messageId(payload):
        return ((payload[2] & 0b11110000) >> 4);

    @staticmethod
    def get_period(payload):
        return ((payload[2] & 0b00001111) << 8) | ((payload[3]));

    @staticmethod
    def get_duration(payload):
        _duration = ((payload[4]) << 8) | ((payload[5]));
        return (_duration * 0.0000762951094835) + 0.0000000000000000;

# ================================ SETTERS ================================
    @staticmethod
    def set_header(payload, header):
        payload[0] = header;

    @staticmethod
    def set_remVersion(payload, remVersion):
        payload[1] = ((remVersion << 4) & 0b11110000) | (payload[1] & 0b00001111);

    @staticmethod
    def set_id(payload, id):
        payload[1] = (id & 0b00001111) | (payload[1] & 0b11110000);

    @staticmethod
    def set_messageId(payload, messageId):
        payload[2] = ((messageId << 4) & 0b11110000) | (payload[2] & 0b00001111);

    @staticmethod
    def set_period(payload, period):
        payload[2] = ((period >> 8) & 0b00001111) | (payload[2] & 0b11110000);
        payload[3] = period;

    @staticmethod
    def set_duration(payload, duration):
        _duration = int(duration / 0.0000762951094835);
        payload[4] = (_duration >> 8);
        payload[5] = _duration;

# ================================ ENCODE ================================
    def encode(self):
        payload = np.zeros(REM_BaseTypes.PACKET_SIZE_R_E_M__ROBOT_BUZZER, dtype=np.uint8)
        REM_RobotBuzzer.set_header              (payload, self.header)
        REM_RobotBuzzer.set_remVersion          (payload, self.remVersion)
        REM_RobotBuzzer.set_id                  (payload, self.id)
        REM_RobotBuzzer.set_messageId           (payload, self.messageId)
        REM_RobotBuzzer.set_period              (payload, self.period)
        REM_RobotBuzzer.set_duration            (payload, self.duration)
        return payload


# ================================ DECODE ================================
    def decode(self, payload):
        self.header           = REM_RobotBuzzer.get_header(payload)
        self.remVersion       = REM_RobotBuzzer.get_remVersion(payload)
        self.id               = REM_RobotBuzzer.get_id(payload)
        self.messageId        = REM_RobotBuzzer.get_messageId(payload)
        self.period           = REM_RobotBuzzer.get_period(payload)
        self.duration         = REM_RobotBuzzer.get_duration(payload)


    def print_bit_string(self):
        payload = self.encode()
        for i in range(len(payload)):
            print(format(payload[i], '08b'), end=" ")
        print()
