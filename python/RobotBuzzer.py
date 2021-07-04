# AUTOGENERATED. Run generator/main.py to regenerate
# Generated on July 04 2021, 22:57:14

"""
[  0   ] [  1   ] [  2   ] [  3   ] [  4   ] [  5   ]
11111111 -------- -------- -------- -------- -------- header
-------- 1111---- -------- -------- -------- -------- id
-------- ----1111 -------- -------- -------- -------- messageId
-------- -------- 11111111 1111---- -------- -------- period
-------- -------- -------- ----1111 11111111 1111---- duration
"""




class RobotBuzzer:
    header = 0                # Header byte indicating the type of packet
    id = 0                    # Id of the robot
    messageId = 0             # Id of the message
    period = 0                # Sound that the buzzer makes.
    duration = 0              # Duration of the sound



# ================================ GETTERS ================================
    @staticmethod
    get_header(payload):
        return ((payload[0]));

    @staticmethod
    get_id(payload):
        return ((payload[1] & 0b11110000) >> 4);

    @staticmethod
    get_messageId(payload):
        return ((payload[1] & 0b00001111));

    @staticmethod
    get_period(payload):
        return ((payload[2]) << 4) | ((payload[3] & 0b11110000) >> 4);

    @staticmethod
    get_duration(payload):
        _duration = ((payload[3] & 0b00001111) << 12) | ((payload[4]) << 4) | ((payload[5] & 0b11110000) >> 4);
        return (_duration * 0.0000762939453125) + 0.0000000000000000;

# ================================ SETTERS ================================
    @staticmethod
    set_header(payload, header):
        payload[0] = header;

    @staticmethod
    set_id(payload, id):
        payload[1] = ((id << 4) & 0b11110000) | (payload[1] & 0b00001111);

    @staticmethod
    set_messageId(payload, messageId):
        payload[1] = (messageId & 0b00001111) | (payload[1] & 0b11110000);

    @staticmethod
    set_period(payload, period):
        payload[2] = (period >> 4);
        payload[3] = ((period >> 4) & 0b11110000) | (payload[3] & 0b00001111);

    @staticmethod
    set_duration(payload, duration):
        _duration = int(duration / 0.0000762939453125)
        payload[3] = ((_duration >> 12) & 0b00001111) | (payload[3] & 0b11110000);
        payload[4] = (_duration >> 8);
        payload[5] = ((_duration >> 8) & 0b11110000) | (payload[5] & 0b00001111);

# ================================ ENCODE ================================
    def encode(self):
        payload = np.zeros(BaseTypes.PACKET_SIZE_ROBOT_BUZZER, dtype=np.uint8)
        RobotBuzzer.set_header              (payload, self.header)
        RobotBuzzer.set_id                  (payload, self.id)
        RobotBuzzer.set_messageId           (payload, self.messageId)
        RobotBuzzer.set_period              (payload, self.period)
        RobotBuzzer.set_duration            (payload, self.duration)
        return payload


# ================================ DECODE ================================
    def decode(self, payload):
        self.header           = RobotBuzzer.get_header(payload)
        self.id               = RobotBuzzer.get_id(payload)
        self.messageId        = RobotBuzzer.get_messageId(payload)
        self.period           = RobotBuzzer.get_period(payload)
        self.duration         = RobotBuzzer.get_duration(payload)


    def printBitString(self):        payload = self.encode()        for i in range(len(payload)):            print(format(payload[i], '08b'), end=" ")        print()