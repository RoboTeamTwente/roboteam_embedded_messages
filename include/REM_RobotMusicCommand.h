// AUTOGENERATED. Run generator/main.py to regenerate
/*
[  0   ] [  1   ] [  2   ] [  3   ] [  4   ] [  5   ] [  6   ] [  7   ] [  8   ] [  9   ] [  10  ] [  11  ]
11111111 -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- header
-------- 1111---- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- toRobotId
-------- ----1--- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- toColor
-------- -----1-- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- toBC
-------- ------1- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- toBS
-------- -------1 -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- toPC
-------- -------- 1111---- -------- -------- -------- -------- -------- -------- -------- -------- -------- fromRobotId
-------- -------- ----1--- -------- -------- -------- -------- -------- -------- -------- -------- -------- fromColor
-------- -------- -----1-- -------- -------- -------- -------- -------- -------- -------- -------- -------- reserved
-------- -------- ------1- -------- -------- -------- -------- -------- -------- -------- -------- -------- fromBS
-------- -------- -------1 -------- -------- -------- -------- -------- -------- -------- -------- -------- fromPC
-------- -------- -------- 1111---- -------- -------- -------- -------- -------- -------- -------- -------- remVersion
-------- -------- -------- ----1111 -------- -------- -------- -------- -------- -------- -------- -------- messageId
-------- -------- -------- -------- 11111111 11111111 11111111 11111111 -------- -------- -------- -------- timestamp
-------- -------- -------- -------- -------- -------- -------- -------- 11111111 -------- -------- -------- payloadSize
-------- -------- -------- -------- -------- -------- -------- -------- -------- 1------- -------- -------- play
-------- -------- -------- -------- -------- -------- -------- -------- -------- -1------ -------- -------- pause
-------- -------- -------- -------- -------- -------- -------- -------- -------- --1----- -------- -------- stop
-------- -------- -------- -------- -------- -------- -------- -------- -------- ---1---- -------- -------- previousSong
-------- -------- -------- -------- -------- -------- -------- -------- -------- ----1--- -------- -------- nextSong
-------- -------- -------- -------- -------- -------- -------- -------- -------- -----111 11------ -------- volume
-------- -------- -------- -------- -------- -------- -------- -------- -------- -------- --1----- -------- volumeUp
-------- -------- -------- -------- -------- -------- -------- -------- -------- -------- ---1---- -------- volumeDown
-------- -------- -------- -------- -------- -------- -------- -------- -------- -------- ----1111 -------- folderId
-------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- 11111111 songId
*/

#ifndef __REM_ROBOT_MUSIC_COMMAND_H
#define __REM_ROBOT_MUSIC_COMMAND_H

#include <stdbool.h>
#include <stdint.h>
#include "REM_BaseTypes.h"

typedef struct _REM_RobotMusicCommandPayload {
    uint8_t payload[REM_PACKET_SIZE_REM_ROBOT_MUSIC_COMMAND];
} REM_RobotMusicCommandPayload;

typedef struct _REM_RobotMusicCommand {
    uint32_t   header              ; // integer [0, 255]             Header byte indicating the type of packet
    uint32_t   toRobotId           ; // integer [0, 15]              Id of the receiving robot
    bool       toColor             ; // integer [0, 1]               Color of the receiving robot / basestation. Yellow = 0, Blue = 1
    bool       toBC                ; // integer [0, 1]               Bit indicating this packet has to be broadcasted to all robots
    bool       toBS                ; // integer [0, 1]               Bit indicating this packet is meant for the basestation
    bool       toPC                ; // integer [0, 1]               Bit indicating this packet is meant for the PC
    uint32_t   fromRobotId         ; // integer [0, 15]              Id of the transmitting robot
    bool       fromColor           ; // integer [0, 1]               Color of the transmitting robot / basestation. Yellow = 0, Blue = 1
    bool       reserved            ; // integer [0, 1]               reserved
    bool       fromBS              ; // integer [0, 1]               Bit indicating this packet is coming from the basestation
    bool       fromPC              ; // integer [0, 1]               Bit indicating this packet is coming from the PC
    uint32_t   remVersion          ; // integer [0, 15]              Version of roboteam_embedded_messages
    uint32_t   messageId           ; // integer [0, 15]              messageId. Can be used for aligning packets
    uint32_t   timestamp           ; // integer [0, 4294967295]      Unix Timestamp in milliseconds
    uint32_t   payloadSize         ; // integer [0, 255]             Size of the payload. At most 255 bytes including the generic_packet_header. Keep the 127 byte SX1280 limit in mind
    bool       play                ; // integer [0, 1]               Set to play the current song
    bool       pause               ; // integer [0, 1]               Set to pause the current song
    bool       stop                ; // integer [0, 1]               Set to stop the current song
    bool       previousSong        ; // integer [0, 1]               Set to stop the current song
    bool       nextSong            ; // integer [0, 1]               Set to stop the current song
    uint32_t   volume              ; // integer [0, 31]              Set the volume. Value between 1 and 31. 0 is ignored
    bool       volumeUp            ; // integer [0, 1]               Set to increase the volume
    bool       volumeDown          ; // integer [0, 1]               Set to decrease the volume
    uint32_t   folderId            ; // integer [0, 15]              The id of the folder, from which to pick a song
    uint32_t   songId              ; // integer [0, 255]             Id of the song, given the folder
} REM_RobotMusicCommand;

// ================================ GETTERS ================================
static inline uint32_t REM_RobotMusicCommand_get_header(REM_RobotMusicCommandPayload *remrmcp){
    return ((remrmcp->payload[0]));
}

static inline uint32_t REM_RobotMusicCommand_get_toRobotId(REM_RobotMusicCommandPayload *remrmcp){
    return ((remrmcp->payload[1] & 0b11110000) >> 4);
}

static inline bool REM_RobotMusicCommand_get_toColor(REM_RobotMusicCommandPayload *remrmcp){
    return (remrmcp->payload[1] & 0b00001000) > 0;
}

static inline bool REM_RobotMusicCommand_get_toBC(REM_RobotMusicCommandPayload *remrmcp){
    return (remrmcp->payload[1] & 0b00000100) > 0;
}

static inline bool REM_RobotMusicCommand_get_toBS(REM_RobotMusicCommandPayload *remrmcp){
    return (remrmcp->payload[1] & 0b00000010) > 0;
}

static inline bool REM_RobotMusicCommand_get_toPC(REM_RobotMusicCommandPayload *remrmcp){
    return (remrmcp->payload[1] & 0b00000001) > 0;
}

static inline uint32_t REM_RobotMusicCommand_get_fromRobotId(REM_RobotMusicCommandPayload *remrmcp){
    return ((remrmcp->payload[2] & 0b11110000) >> 4);
}

static inline bool REM_RobotMusicCommand_get_fromColor(REM_RobotMusicCommandPayload *remrmcp){
    return (remrmcp->payload[2] & 0b00001000) > 0;
}

static inline bool REM_RobotMusicCommand_get_reserved(REM_RobotMusicCommandPayload *remrmcp){
    return (remrmcp->payload[2] & 0b00000100) > 0;
}

static inline bool REM_RobotMusicCommand_get_fromBS(REM_RobotMusicCommandPayload *remrmcp){
    return (remrmcp->payload[2] & 0b00000010) > 0;
}

static inline bool REM_RobotMusicCommand_get_fromPC(REM_RobotMusicCommandPayload *remrmcp){
    return (remrmcp->payload[2] & 0b00000001) > 0;
}

static inline uint32_t REM_RobotMusicCommand_get_remVersion(REM_RobotMusicCommandPayload *remrmcp){
    return ((remrmcp->payload[3] & 0b11110000) >> 4);
}

static inline uint32_t REM_RobotMusicCommand_get_messageId(REM_RobotMusicCommandPayload *remrmcp){
    return ((remrmcp->payload[3] & 0b00001111));
}

static inline uint32_t REM_RobotMusicCommand_get_timestamp(REM_RobotMusicCommandPayload *remrmcp){
    return ((remrmcp->payload[4]) << 24) | ((remrmcp->payload[5]) << 16) | ((remrmcp->payload[6]) << 8) | ((remrmcp->payload[7]));
}

static inline uint32_t REM_RobotMusicCommand_get_payloadSize(REM_RobotMusicCommandPayload *remrmcp){
    return ((remrmcp->payload[8]));
}

static inline bool REM_RobotMusicCommand_get_play(REM_RobotMusicCommandPayload *remrmcp){
    return (remrmcp->payload[9] & 0b10000000) > 0;
}

static inline bool REM_RobotMusicCommand_get_pause(REM_RobotMusicCommandPayload *remrmcp){
    return (remrmcp->payload[9] & 0b01000000) > 0;
}

static inline bool REM_RobotMusicCommand_get_stop(REM_RobotMusicCommandPayload *remrmcp){
    return (remrmcp->payload[9] & 0b00100000) > 0;
}

static inline bool REM_RobotMusicCommand_get_previousSong(REM_RobotMusicCommandPayload *remrmcp){
    return (remrmcp->payload[9] & 0b00010000) > 0;
}

static inline bool REM_RobotMusicCommand_get_nextSong(REM_RobotMusicCommandPayload *remrmcp){
    return (remrmcp->payload[9] & 0b00001000) > 0;
}

static inline uint32_t REM_RobotMusicCommand_get_volume(REM_RobotMusicCommandPayload *remrmcp){
    return ((remrmcp->payload[9] & 0b00000111) << 2) | ((remrmcp->payload[10] & 0b11000000) >> 6);
}

static inline bool REM_RobotMusicCommand_get_volumeUp(REM_RobotMusicCommandPayload *remrmcp){
    return (remrmcp->payload[10] & 0b00100000) > 0;
}

static inline bool REM_RobotMusicCommand_get_volumeDown(REM_RobotMusicCommandPayload *remrmcp){
    return (remrmcp->payload[10] & 0b00010000) > 0;
}

static inline uint32_t REM_RobotMusicCommand_get_folderId(REM_RobotMusicCommandPayload *remrmcp){
    return ((remrmcp->payload[10] & 0b00001111));
}

static inline uint32_t REM_RobotMusicCommand_get_songId(REM_RobotMusicCommandPayload *remrmcp){
    return ((remrmcp->payload[11]));
}

// ================================ SETTERS ================================
static inline void REM_RobotMusicCommand_set_header(REM_RobotMusicCommandPayload *remrmcp, uint32_t header){
    remrmcp->payload[0] = header;
}

static inline void REM_RobotMusicCommand_set_toRobotId(REM_RobotMusicCommandPayload *remrmcp, uint32_t toRobotId){
    remrmcp->payload[1] = ((toRobotId << 4) & 0b11110000) | (remrmcp->payload[1] & 0b00001111);
}

static inline void REM_RobotMusicCommand_set_toColor(REM_RobotMusicCommandPayload *remrmcp, bool toColor){
    remrmcp->payload[1] = ((toColor << 3) & 0b00001000) | (remrmcp->payload[1] & 0b11110111);
}

static inline void REM_RobotMusicCommand_set_toBC(REM_RobotMusicCommandPayload *remrmcp, bool toBC){
    remrmcp->payload[1] = ((toBC << 2) & 0b00000100) | (remrmcp->payload[1] & 0b11111011);
}

static inline void REM_RobotMusicCommand_set_toBS(REM_RobotMusicCommandPayload *remrmcp, bool toBS){
    remrmcp->payload[1] = ((toBS << 1) & 0b00000010) | (remrmcp->payload[1] & 0b11111101);
}

static inline void REM_RobotMusicCommand_set_toPC(REM_RobotMusicCommandPayload *remrmcp, bool toPC){
    remrmcp->payload[1] = (toPC & 0b00000001) | (remrmcp->payload[1] & 0b11111110);
}

static inline void REM_RobotMusicCommand_set_fromRobotId(REM_RobotMusicCommandPayload *remrmcp, uint32_t fromRobotId){
    remrmcp->payload[2] = ((fromRobotId << 4) & 0b11110000) | (remrmcp->payload[2] & 0b00001111);
}

static inline void REM_RobotMusicCommand_set_fromColor(REM_RobotMusicCommandPayload *remrmcp, bool fromColor){
    remrmcp->payload[2] = ((fromColor << 3) & 0b00001000) | (remrmcp->payload[2] & 0b11110111);
}

static inline void REM_RobotMusicCommand_set_reserved(REM_RobotMusicCommandPayload *remrmcp, bool reserved){
    remrmcp->payload[2] = ((reserved << 2) & 0b00000100) | (remrmcp->payload[2] & 0b11111011);
}

static inline void REM_RobotMusicCommand_set_fromBS(REM_RobotMusicCommandPayload *remrmcp, bool fromBS){
    remrmcp->payload[2] = ((fromBS << 1) & 0b00000010) | (remrmcp->payload[2] & 0b11111101);
}

static inline void REM_RobotMusicCommand_set_fromPC(REM_RobotMusicCommandPayload *remrmcp, bool fromPC){
    remrmcp->payload[2] = (fromPC & 0b00000001) | (remrmcp->payload[2] & 0b11111110);
}

static inline void REM_RobotMusicCommand_set_remVersion(REM_RobotMusicCommandPayload *remrmcp, uint32_t remVersion){
    remrmcp->payload[3] = ((remVersion << 4) & 0b11110000) | (remrmcp->payload[3] & 0b00001111);
}

static inline void REM_RobotMusicCommand_set_messageId(REM_RobotMusicCommandPayload *remrmcp, uint32_t messageId){
    remrmcp->payload[3] = (messageId & 0b00001111) | (remrmcp->payload[3] & 0b11110000);
}

static inline void REM_RobotMusicCommand_set_timestamp(REM_RobotMusicCommandPayload *remrmcp, uint32_t timestamp){
    remrmcp->payload[4] = (timestamp >> 24);
    remrmcp->payload[5] = (timestamp >> 16);
    remrmcp->payload[6] = (timestamp >> 8);
    remrmcp->payload[7] = timestamp;
}

static inline void REM_RobotMusicCommand_set_payloadSize(REM_RobotMusicCommandPayload *remrmcp, uint32_t payloadSize){
    remrmcp->payload[8] = payloadSize;
}

static inline void REM_RobotMusicCommand_set_play(REM_RobotMusicCommandPayload *remrmcp, bool play){
    remrmcp->payload[9] = ((play << 7) & 0b10000000) | (remrmcp->payload[9] & 0b01111111);
}

static inline void REM_RobotMusicCommand_set_pause(REM_RobotMusicCommandPayload *remrmcp, bool pause){
    remrmcp->payload[9] = ((pause << 6) & 0b01000000) | (remrmcp->payload[9] & 0b10111111);
}

static inline void REM_RobotMusicCommand_set_stop(REM_RobotMusicCommandPayload *remrmcp, bool stop){
    remrmcp->payload[9] = ((stop << 5) & 0b00100000) | (remrmcp->payload[9] & 0b11011111);
}

static inline void REM_RobotMusicCommand_set_previousSong(REM_RobotMusicCommandPayload *remrmcp, bool previousSong){
    remrmcp->payload[9] = ((previousSong << 4) & 0b00010000) | (remrmcp->payload[9] & 0b11101111);
}

static inline void REM_RobotMusicCommand_set_nextSong(REM_RobotMusicCommandPayload *remrmcp, bool nextSong){
    remrmcp->payload[9] = ((nextSong << 3) & 0b00001000) | (remrmcp->payload[9] & 0b11110111);
}

static inline void REM_RobotMusicCommand_set_volume(REM_RobotMusicCommandPayload *remrmcp, uint32_t volume){
    remrmcp->payload[9] = ((volume >> 2) & 0b00000111) | (remrmcp->payload[9] & 0b11111000);
    remrmcp->payload[10] = ((volume << 6) & 0b11000000) | (remrmcp->payload[10] & 0b00111111);
}

static inline void REM_RobotMusicCommand_set_volumeUp(REM_RobotMusicCommandPayload *remrmcp, bool volumeUp){
    remrmcp->payload[10] = ((volumeUp << 5) & 0b00100000) | (remrmcp->payload[10] & 0b11011111);
}

static inline void REM_RobotMusicCommand_set_volumeDown(REM_RobotMusicCommandPayload *remrmcp, bool volumeDown){
    remrmcp->payload[10] = ((volumeDown << 4) & 0b00010000) | (remrmcp->payload[10] & 0b11101111);
}

static inline void REM_RobotMusicCommand_set_folderId(REM_RobotMusicCommandPayload *remrmcp, uint32_t folderId){
    remrmcp->payload[10] = (folderId & 0b00001111) | (remrmcp->payload[10] & 0b11110000);
}

static inline void REM_RobotMusicCommand_set_songId(REM_RobotMusicCommandPayload *remrmcp, uint32_t songId){
    remrmcp->payload[11] = songId;
}

// ================================ ENCODE ================================
static inline void encodeREM_RobotMusicCommand(REM_RobotMusicCommandPayload *remrmcp, REM_RobotMusicCommand *remrmc){
    REM_RobotMusicCommand_set_header              (remrmcp, remrmc->header);
    REM_RobotMusicCommand_set_toRobotId           (remrmcp, remrmc->toRobotId);
    REM_RobotMusicCommand_set_toColor             (remrmcp, remrmc->toColor);
    REM_RobotMusicCommand_set_toBC                (remrmcp, remrmc->toBC);
    REM_RobotMusicCommand_set_toBS                (remrmcp, remrmc->toBS);
    REM_RobotMusicCommand_set_toPC                (remrmcp, remrmc->toPC);
    REM_RobotMusicCommand_set_fromRobotId         (remrmcp, remrmc->fromRobotId);
    REM_RobotMusicCommand_set_fromColor           (remrmcp, remrmc->fromColor);
    REM_RobotMusicCommand_set_reserved            (remrmcp, remrmc->reserved);
    REM_RobotMusicCommand_set_fromBS              (remrmcp, remrmc->fromBS);
    REM_RobotMusicCommand_set_fromPC              (remrmcp, remrmc->fromPC);
    REM_RobotMusicCommand_set_remVersion          (remrmcp, remrmc->remVersion);
    REM_RobotMusicCommand_set_messageId           (remrmcp, remrmc->messageId);
    REM_RobotMusicCommand_set_timestamp           (remrmcp, remrmc->timestamp);
    REM_RobotMusicCommand_set_payloadSize         (remrmcp, remrmc->payloadSize);
    REM_RobotMusicCommand_set_play                (remrmcp, remrmc->play);
    REM_RobotMusicCommand_set_pause               (remrmcp, remrmc->pause);
    REM_RobotMusicCommand_set_stop                (remrmcp, remrmc->stop);
    REM_RobotMusicCommand_set_previousSong        (remrmcp, remrmc->previousSong);
    REM_RobotMusicCommand_set_nextSong            (remrmcp, remrmc->nextSong);
    REM_RobotMusicCommand_set_volume              (remrmcp, remrmc->volume);
    REM_RobotMusicCommand_set_volumeUp            (remrmcp, remrmc->volumeUp);
    REM_RobotMusicCommand_set_volumeDown          (remrmcp, remrmc->volumeDown);
    REM_RobotMusicCommand_set_folderId            (remrmcp, remrmc->folderId);
    REM_RobotMusicCommand_set_songId              (remrmcp, remrmc->songId);
}

// ================================ DECODE ================================
static inline void decodeREM_RobotMusicCommand(REM_RobotMusicCommand *remrmc, REM_RobotMusicCommandPayload *remrmcp){
    remrmc->header       = REM_RobotMusicCommand_get_header(remrmcp);
    remrmc->toRobotId    = REM_RobotMusicCommand_get_toRobotId(remrmcp);
    remrmc->toColor      = REM_RobotMusicCommand_get_toColor(remrmcp);
    remrmc->toBC         = REM_RobotMusicCommand_get_toBC(remrmcp);
    remrmc->toBS         = REM_RobotMusicCommand_get_toBS(remrmcp);
    remrmc->toPC         = REM_RobotMusicCommand_get_toPC(remrmcp);
    remrmc->fromRobotId  = REM_RobotMusicCommand_get_fromRobotId(remrmcp);
    remrmc->fromColor    = REM_RobotMusicCommand_get_fromColor(remrmcp);
    remrmc->reserved     = REM_RobotMusicCommand_get_reserved(remrmcp);
    remrmc->fromBS       = REM_RobotMusicCommand_get_fromBS(remrmcp);
    remrmc->fromPC       = REM_RobotMusicCommand_get_fromPC(remrmcp);
    remrmc->remVersion   = REM_RobotMusicCommand_get_remVersion(remrmcp);
    remrmc->messageId    = REM_RobotMusicCommand_get_messageId(remrmcp);
    remrmc->timestamp    = REM_RobotMusicCommand_get_timestamp(remrmcp);
    remrmc->payloadSize  = REM_RobotMusicCommand_get_payloadSize(remrmcp);
    remrmc->play         = REM_RobotMusicCommand_get_play(remrmcp);
    remrmc->pause        = REM_RobotMusicCommand_get_pause(remrmcp);
    remrmc->stop         = REM_RobotMusicCommand_get_stop(remrmcp);
    remrmc->previousSong = REM_RobotMusicCommand_get_previousSong(remrmcp);
    remrmc->nextSong     = REM_RobotMusicCommand_get_nextSong(remrmcp);
    remrmc->volume       = REM_RobotMusicCommand_get_volume(remrmcp);
    remrmc->volumeUp     = REM_RobotMusicCommand_get_volumeUp(remrmcp);
    remrmc->volumeDown   = REM_RobotMusicCommand_get_volumeDown(remrmcp);
    remrmc->folderId     = REM_RobotMusicCommand_get_folderId(remrmcp);
    remrmc->songId       = REM_RobotMusicCommand_get_songId(remrmcp);
}

#endif /*__REM_ROBOT_MUSIC_COMMAND_H*/
