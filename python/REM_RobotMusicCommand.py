# AUTOGENERATED. Run generator/main.py to regenerate
"""
[  0   ] [  1   ] [  2   ] [  3   ] [  4   ] [  5   ] [  6   ] [  7   ] [  8   ] [  9   ] [  10  ]
11111111 -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- header
-------- 1111---- -------- -------- -------- -------- -------- -------- -------- -------- -------- toRobotId
-------- ----1--- -------- -------- -------- -------- -------- -------- -------- -------- -------- toColor
-------- -----1-- -------- -------- -------- -------- -------- -------- -------- -------- -------- toBC
-------- ------1- -------- -------- -------- -------- -------- -------- -------- -------- -------- toBS
-------- -------1 -------- -------- -------- -------- -------- -------- -------- -------- -------- toPC
-------- -------- 1111---- -------- -------- -------- -------- -------- -------- -------- -------- fromRobotId
-------- -------- ----1--- -------- -------- -------- -------- -------- -------- -------- -------- fromColor
-------- -------- -----1-- -------- -------- -------- -------- -------- -------- -------- -------- fromBS
-------- -------- ------1- -------- -------- -------- -------- -------- -------- -------- -------- fromPC
-------- -------- -------1 -------- -------- -------- -------- -------- -------- -------- -------- needTimeStamp
-------- -------- -------- 1111---- -------- -------- -------- -------- -------- -------- -------- remVersion
-------- -------- -------- ----1111 -------- -------- -------- -------- -------- -------- -------- messageId
-------- -------- -------- -------- 11111111 11111111 11111111 -------- -------- -------- -------- timestamp
-------- -------- -------- -------- -------- -------- -------- 11111111 -------- -------- -------- payloadSize
-------- -------- -------- -------- -------- -------- -------- -------- 1------- -------- -------- play
-------- -------- -------- -------- -------- -------- -------- -------- -1------ -------- -------- pause
-------- -------- -------- -------- -------- -------- -------- -------- --1----- -------- -------- stop
-------- -------- -------- -------- -------- -------- -------- -------- ---1---- -------- -------- previousSong
-------- -------- -------- -------- -------- -------- -------- -------- ----1--- -------- -------- nextSong
-------- -------- -------- -------- -------- -------- -------- -------- -----111 11------ -------- volume
-------- -------- -------- -------- -------- -------- -------- -------- -------- --1----- -------- volumeUp
-------- -------- -------- -------- -------- -------- -------- -------- -------- ---1---- -------- volumeDown
-------- -------- -------- -------- -------- -------- -------- -------- -------- ----1111 -------- folderId
-------- -------- -------- -------- -------- -------- -------- -------- -------- -------- 11111111 songId
"""

import numpy as np
from . import REM_BaseTypes



class REM_RobotMusicCommand:
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
    play = 0                  # integer [0, 1]               Set to play the current song
    pause = 0                 # integer [0, 1]               Set to pause the current song
    stop = 0                  # integer [0, 1]               Set to stop the current song
    previousSong = 0          # integer [0, 1]               Set to stop the current song
    nextSong = 0              # integer [0, 1]               Set to stop the current song
    volume = 0                # integer [0, 31]              Set the volume. Value between 1 and 31. 0 is ignored
    volumeUp = 0              # integer [0, 1]               Set to increase the volume
    volumeDown = 0            # integer [0, 1]               Set to decrease the volume
    folderId = 0              # integer [0, 15]              The id of the folder, from which to pick a song
    songId = 0                # integer [0, 255]             Id of the song, given the folder



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

    @staticmethod
    def get_play(payload):
        return (payload[8] & 0b10000000) > 0;

    @staticmethod
    def get_pause(payload):
        return (payload[8] & 0b01000000) > 0;

    @staticmethod
    def get_stop(payload):
        return (payload[8] & 0b00100000) > 0;

    @staticmethod
    def get_previousSong(payload):
        return (payload[8] & 0b00010000) > 0;

    @staticmethod
    def get_nextSong(payload):
        return (payload[8] & 0b00001000) > 0;

    @staticmethod
    def get_volume(payload):
        return ((payload[8] & 0b00000111) << 2) | ((payload[9] & 0b11000000) >> 6);

    @staticmethod
    def get_volumeUp(payload):
        return (payload[9] & 0b00100000) > 0;

    @staticmethod
    def get_volumeDown(payload):
        return (payload[9] & 0b00010000) > 0;

    @staticmethod
    def get_folderId(payload):
        return ((payload[9] & 0b00001111));

    @staticmethod
    def get_songId(payload):
        return ((payload[10]));

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

    @staticmethod
    def set_play(payload, play):
        payload[8] = ((play << 7) & 0b10000000) | (payload[8] & 0b01111111);

    @staticmethod
    def set_pause(payload, pause):
        payload[8] = ((pause << 6) & 0b01000000) | (payload[8] & 0b10111111);

    @staticmethod
    def set_stop(payload, stop):
        payload[8] = ((stop << 5) & 0b00100000) | (payload[8] & 0b11011111);

    @staticmethod
    def set_previousSong(payload, previousSong):
        payload[8] = ((previousSong << 4) & 0b00010000) | (payload[8] & 0b11101111);

    @staticmethod
    def set_nextSong(payload, nextSong):
        payload[8] = ((nextSong << 3) & 0b00001000) | (payload[8] & 0b11110111);

    @staticmethod
    def set_volume(payload, volume):
        payload[8] = ((volume >> 2) & 0b00000111) | (payload[8] & 0b11111000);
        payload[9] = ((volume << 6) & 0b11000000) | (payload[9] & 0b00111111);

    @staticmethod
    def set_volumeUp(payload, volumeUp):
        payload[9] = ((volumeUp << 5) & 0b00100000) | (payload[9] & 0b11011111);

    @staticmethod
    def set_volumeDown(payload, volumeDown):
        payload[9] = ((volumeDown << 4) & 0b00010000) | (payload[9] & 0b11101111);

    @staticmethod
    def set_folderId(payload, folderId):
        payload[9] = (folderId & 0b00001111) | (payload[9] & 0b11110000);

    @staticmethod
    def set_songId(payload, songId):
        payload[10] = songId;

# ================================ ENCODE ================================
    def encode(self):
        payload = np.zeros(REM_BaseTypes.REM_PACKET_SIZE_REM_ROBOT_MUSIC_COMMAND, dtype=np.uint8)
        REM_RobotMusicCommand.set_header              (payload, self.header)
        REM_RobotMusicCommand.set_toRobotId           (payload, self.toRobotId)
        REM_RobotMusicCommand.set_toColor             (payload, self.toColor)
        REM_RobotMusicCommand.set_toBC                (payload, self.toBC)
        REM_RobotMusicCommand.set_toBS                (payload, self.toBS)
        REM_RobotMusicCommand.set_toPC                (payload, self.toPC)
        REM_RobotMusicCommand.set_fromRobotId         (payload, self.fromRobotId)
        REM_RobotMusicCommand.set_fromColor           (payload, self.fromColor)
        REM_RobotMusicCommand.set_fromBS              (payload, self.fromBS)
        REM_RobotMusicCommand.set_fromPC              (payload, self.fromPC)
        REM_RobotMusicCommand.set_needTimeStamp       (payload, self.needTimeStamp)
        REM_RobotMusicCommand.set_remVersion          (payload, self.remVersion)
        REM_RobotMusicCommand.set_messageId           (payload, self.messageId)
        REM_RobotMusicCommand.set_timestamp           (payload, self.timestamp)
        REM_RobotMusicCommand.set_payloadSize         (payload, self.payloadSize)
        REM_RobotMusicCommand.set_play                (payload, self.play)
        REM_RobotMusicCommand.set_pause               (payload, self.pause)
        REM_RobotMusicCommand.set_stop                (payload, self.stop)
        REM_RobotMusicCommand.set_previousSong        (payload, self.previousSong)
        REM_RobotMusicCommand.set_nextSong            (payload, self.nextSong)
        REM_RobotMusicCommand.set_volume              (payload, self.volume)
        REM_RobotMusicCommand.set_volumeUp            (payload, self.volumeUp)
        REM_RobotMusicCommand.set_volumeDown          (payload, self.volumeDown)
        REM_RobotMusicCommand.set_folderId            (payload, self.folderId)
        REM_RobotMusicCommand.set_songId              (payload, self.songId)
        return payload


# ================================ DECODE ================================
    def decode(self, payload):
        self.header           = REM_RobotMusicCommand.get_header(payload)
        self.toRobotId        = REM_RobotMusicCommand.get_toRobotId(payload)
        self.toColor          = REM_RobotMusicCommand.get_toColor(payload)
        self.toBC             = REM_RobotMusicCommand.get_toBC(payload)
        self.toBS             = REM_RobotMusicCommand.get_toBS(payload)
        self.toPC             = REM_RobotMusicCommand.get_toPC(payload)
        self.fromRobotId      = REM_RobotMusicCommand.get_fromRobotId(payload)
        self.fromColor        = REM_RobotMusicCommand.get_fromColor(payload)
        self.fromBS           = REM_RobotMusicCommand.get_fromBS(payload)
        self.fromPC           = REM_RobotMusicCommand.get_fromPC(payload)
        self.needTimeStamp    = REM_RobotMusicCommand.get_needTimeStamp(payload)
        self.remVersion       = REM_RobotMusicCommand.get_remVersion(payload)
        self.messageId        = REM_RobotMusicCommand.get_messageId(payload)
        self.timestamp        = REM_RobotMusicCommand.get_timestamp(payload)
        self.payloadSize      = REM_RobotMusicCommand.get_payloadSize(payload)
        self.play             = REM_RobotMusicCommand.get_play(payload)
        self.pause            = REM_RobotMusicCommand.get_pause(payload)
        self.stop             = REM_RobotMusicCommand.get_stop(payload)
        self.previousSong     = REM_RobotMusicCommand.get_previousSong(payload)
        self.nextSong         = REM_RobotMusicCommand.get_nextSong(payload)
        self.volume           = REM_RobotMusicCommand.get_volume(payload)
        self.volumeUp         = REM_RobotMusicCommand.get_volumeUp(payload)
        self.volumeDown       = REM_RobotMusicCommand.get_volumeDown(payload)
        self.folderId         = REM_RobotMusicCommand.get_folderId(payload)
        self.songId           = REM_RobotMusicCommand.get_songId(payload)


    def print_bit_string(self):
        payload = self.encode()
        for i in range(len(payload)):
            print(format(payload[i], '08b'), end=" ")
        print()
