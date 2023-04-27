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
-------- -------- -------- -------- 11111111 11111111 11111111 -------- -------- -------- -------- -------- timestamp
-------- -------- -------- -------- -------- -------- -------- 11111111 -------- -------- -------- -------- payloadSize
-------- -------- -------- -------- -------- -------- -------- -------- 11111111 1111---- -------- -------- period
-------- -------- -------- -------- -------- -------- -------- -------- -------- ----1111 11111111 1111---- duration
*/

#ifndef __REM_ROBOT_BUZZER_H
#define __REM_ROBOT_BUZZER_H

#include <stdbool.h>
#include <stdint.h>
#include "REM_BaseTypes.h"

typedef struct _REM_RobotBuzzerPayload {
    uint8_t payload[REM_PACKET_SIZE_REM_ROBOT_BUZZER];
} REM_RobotBuzzerPayload;

typedef struct _REM_RobotBuzzer {
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
    uint32_t   timestamp           ; // integer [0, 16777215]        Timestamp in milliseconds
    uint32_t   payloadSize         ; // integer [0, 255]             Size of the payload. At most 255 bytes including the generic_packet_header. Keep the 127 byte SX1280 limit in mind
    uint32_t   period              ; // integer [0, 4095]            Sound that the buzzer makes.
    float      duration            ; // float   [0.000, 5.000]       Duration of the sound
} REM_RobotBuzzer;

// ================================ GETTERS ================================
static inline uint32_t REM_RobotBuzzer_get_header(REM_RobotBuzzerPayload *remrbp){
    return ((remrbp->payload[0]));
}

static inline uint32_t REM_RobotBuzzer_get_toRobotId(REM_RobotBuzzerPayload *remrbp){
    return ((remrbp->payload[1] & 0b11110000) >> 4);
}

static inline bool REM_RobotBuzzer_get_toColor(REM_RobotBuzzerPayload *remrbp){
    return (remrbp->payload[1] & 0b00001000) > 0;
}

static inline bool REM_RobotBuzzer_get_toBC(REM_RobotBuzzerPayload *remrbp){
    return (remrbp->payload[1] & 0b00000100) > 0;
}

static inline bool REM_RobotBuzzer_get_toBS(REM_RobotBuzzerPayload *remrbp){
    return (remrbp->payload[1] & 0b00000010) > 0;
}

static inline bool REM_RobotBuzzer_get_toPC(REM_RobotBuzzerPayload *remrbp){
    return (remrbp->payload[1] & 0b00000001) > 0;
}

static inline uint32_t REM_RobotBuzzer_get_fromRobotId(REM_RobotBuzzerPayload *remrbp){
    return ((remrbp->payload[2] & 0b11110000) >> 4);
}

static inline bool REM_RobotBuzzer_get_fromColor(REM_RobotBuzzerPayload *remrbp){
    return (remrbp->payload[2] & 0b00001000) > 0;
}

static inline bool REM_RobotBuzzer_get_reserved(REM_RobotBuzzerPayload *remrbp){
    return (remrbp->payload[2] & 0b00000100) > 0;
}

static inline bool REM_RobotBuzzer_get_fromBS(REM_RobotBuzzerPayload *remrbp){
    return (remrbp->payload[2] & 0b00000010) > 0;
}

static inline bool REM_RobotBuzzer_get_fromPC(REM_RobotBuzzerPayload *remrbp){
    return (remrbp->payload[2] & 0b00000001) > 0;
}

static inline uint32_t REM_RobotBuzzer_get_remVersion(REM_RobotBuzzerPayload *remrbp){
    return ((remrbp->payload[3] & 0b11110000) >> 4);
}

static inline uint32_t REM_RobotBuzzer_get_messageId(REM_RobotBuzzerPayload *remrbp){
    return ((remrbp->payload[3] & 0b00001111));
}

static inline uint32_t REM_RobotBuzzer_get_timestamp(REM_RobotBuzzerPayload *remrbp){
    return ((remrbp->payload[4]) << 16) | ((remrbp->payload[5]) << 8) | ((remrbp->payload[6]));
}

static inline uint32_t REM_RobotBuzzer_get_payloadSize(REM_RobotBuzzerPayload *remrbp){
    return ((remrbp->payload[7]));
}

static inline uint32_t REM_RobotBuzzer_get_period(REM_RobotBuzzerPayload *remrbp){
    return ((remrbp->payload[8]) << 4) | ((remrbp->payload[9] & 0b11110000) >> 4);
}

static inline float REM_RobotBuzzer_get_duration(REM_RobotBuzzerPayload *remrbp){
    uint32_t _duration = ((remrbp->payload[9] & 0b00001111) << 12) | ((remrbp->payload[10]) << 4) | ((remrbp->payload[11] & 0b11110000) >> 4);
    return (_duration * 0.0000762951094835F);
}

// ================================ SETTERS ================================
static inline void REM_RobotBuzzer_set_header(REM_RobotBuzzerPayload *remrbp, uint32_t header){
    remrbp->payload[0] = header;
}

static inline void REM_RobotBuzzer_set_toRobotId(REM_RobotBuzzerPayload *remrbp, uint32_t toRobotId){
    remrbp->payload[1] = ((toRobotId << 4) & 0b11110000) | (remrbp->payload[1] & 0b00001111);
}

static inline void REM_RobotBuzzer_set_toColor(REM_RobotBuzzerPayload *remrbp, bool toColor){
    remrbp->payload[1] = ((toColor << 3) & 0b00001000) | (remrbp->payload[1] & 0b11110111);
}

static inline void REM_RobotBuzzer_set_toBC(REM_RobotBuzzerPayload *remrbp, bool toBC){
    remrbp->payload[1] = ((toBC << 2) & 0b00000100) | (remrbp->payload[1] & 0b11111011);
}

static inline void REM_RobotBuzzer_set_toBS(REM_RobotBuzzerPayload *remrbp, bool toBS){
    remrbp->payload[1] = ((toBS << 1) & 0b00000010) | (remrbp->payload[1] & 0b11111101);
}

static inline void REM_RobotBuzzer_set_toPC(REM_RobotBuzzerPayload *remrbp, bool toPC){
    remrbp->payload[1] = (toPC & 0b00000001) | (remrbp->payload[1] & 0b11111110);
}

static inline void REM_RobotBuzzer_set_fromRobotId(REM_RobotBuzzerPayload *remrbp, uint32_t fromRobotId){
    remrbp->payload[2] = ((fromRobotId << 4) & 0b11110000) | (remrbp->payload[2] & 0b00001111);
}

static inline void REM_RobotBuzzer_set_fromColor(REM_RobotBuzzerPayload *remrbp, bool fromColor){
    remrbp->payload[2] = ((fromColor << 3) & 0b00001000) | (remrbp->payload[2] & 0b11110111);
}

static inline void REM_RobotBuzzer_set_reserved(REM_RobotBuzzerPayload *remrbp, bool reserved){
    remrbp->payload[2] = ((reserved << 2) & 0b00000100) | (remrbp->payload[2] & 0b11111011);
}

static inline void REM_RobotBuzzer_set_fromBS(REM_RobotBuzzerPayload *remrbp, bool fromBS){
    remrbp->payload[2] = ((fromBS << 1) & 0b00000010) | (remrbp->payload[2] & 0b11111101);
}

static inline void REM_RobotBuzzer_set_fromPC(REM_RobotBuzzerPayload *remrbp, bool fromPC){
    remrbp->payload[2] = (fromPC & 0b00000001) | (remrbp->payload[2] & 0b11111110);
}

static inline void REM_RobotBuzzer_set_remVersion(REM_RobotBuzzerPayload *remrbp, uint32_t remVersion){
    remrbp->payload[3] = ((remVersion << 4) & 0b11110000) | (remrbp->payload[3] & 0b00001111);
}

static inline void REM_RobotBuzzer_set_messageId(REM_RobotBuzzerPayload *remrbp, uint32_t messageId){
    remrbp->payload[3] = (messageId & 0b00001111) | (remrbp->payload[3] & 0b11110000);
}

static inline void REM_RobotBuzzer_set_timestamp(REM_RobotBuzzerPayload *remrbp, uint32_t timestamp){
    remrbp->payload[4] = (timestamp >> 16);
    remrbp->payload[5] = (timestamp >> 8);
    remrbp->payload[6] = timestamp;
}

static inline void REM_RobotBuzzer_set_payloadSize(REM_RobotBuzzerPayload *remrbp, uint32_t payloadSize){
    remrbp->payload[7] = payloadSize;
}

static inline void REM_RobotBuzzer_set_period(REM_RobotBuzzerPayload *remrbp, uint32_t period){
    remrbp->payload[8] = (period >> 4);
    remrbp->payload[9] = ((period << 4) & 0b11110000) | (remrbp->payload[9] & 0b00001111);
}

static inline void REM_RobotBuzzer_set_duration(REM_RobotBuzzerPayload *remrbp, float duration){
    uint32_t _duration = (uint32_t)(duration / 0.0000762951094835F);
    remrbp->payload[9] = ((_duration >> 12) & 0b00001111) | (remrbp->payload[9] & 0b11110000);
    remrbp->payload[10] = (_duration >> 4);
    remrbp->payload[11] = ((_duration << 4) & 0b11110000) | (remrbp->payload[11] & 0b00001111);
}

// ================================ ENCODE ================================
static inline void encodeREM_RobotBuzzer(REM_RobotBuzzerPayload *remrbp, REM_RobotBuzzer *remrb){
    REM_RobotBuzzer_set_header              (remrbp, remrb->header);
    REM_RobotBuzzer_set_toRobotId           (remrbp, remrb->toRobotId);
    REM_RobotBuzzer_set_toColor             (remrbp, remrb->toColor);
    REM_RobotBuzzer_set_toBC                (remrbp, remrb->toBC);
    REM_RobotBuzzer_set_toBS                (remrbp, remrb->toBS);
    REM_RobotBuzzer_set_toPC                (remrbp, remrb->toPC);
    REM_RobotBuzzer_set_fromRobotId         (remrbp, remrb->fromRobotId);
    REM_RobotBuzzer_set_fromColor           (remrbp, remrb->fromColor);
    REM_RobotBuzzer_set_reserved            (remrbp, remrb->reserved);
    REM_RobotBuzzer_set_fromBS              (remrbp, remrb->fromBS);
    REM_RobotBuzzer_set_fromPC              (remrbp, remrb->fromPC);
    REM_RobotBuzzer_set_remVersion          (remrbp, remrb->remVersion);
    REM_RobotBuzzer_set_messageId           (remrbp, remrb->messageId);
    REM_RobotBuzzer_set_timestamp           (remrbp, remrb->timestamp);
    REM_RobotBuzzer_set_payloadSize         (remrbp, remrb->payloadSize);
    REM_RobotBuzzer_set_period              (remrbp, remrb->period);
    REM_RobotBuzzer_set_duration            (remrbp, remrb->duration);
}

// ================================ DECODE ================================
static inline void decodeREM_RobotBuzzer(REM_RobotBuzzer *remrb, REM_RobotBuzzerPayload *remrbp){
    remrb->header        = REM_RobotBuzzer_get_header(remrbp);
    remrb->toRobotId     = REM_RobotBuzzer_get_toRobotId(remrbp);
    remrb->toColor       = REM_RobotBuzzer_get_toColor(remrbp);
    remrb->toBC          = REM_RobotBuzzer_get_toBC(remrbp);
    remrb->toBS          = REM_RobotBuzzer_get_toBS(remrbp);
    remrb->toPC          = REM_RobotBuzzer_get_toPC(remrbp);
    remrb->fromRobotId   = REM_RobotBuzzer_get_fromRobotId(remrbp);
    remrb->fromColor     = REM_RobotBuzzer_get_fromColor(remrbp);
    remrb->reserved      = REM_RobotBuzzer_get_reserved(remrbp);
    remrb->fromBS        = REM_RobotBuzzer_get_fromBS(remrbp);
    remrb->fromPC        = REM_RobotBuzzer_get_fromPC(remrbp);
    remrb->remVersion    = REM_RobotBuzzer_get_remVersion(remrbp);
    remrb->messageId     = REM_RobotBuzzer_get_messageId(remrbp);
    remrb->timestamp     = REM_RobotBuzzer_get_timestamp(remrbp);
    remrb->payloadSize   = REM_RobotBuzzer_get_payloadSize(remrbp);
    remrb->period        = REM_RobotBuzzer_get_period(remrbp);
    remrb->duration      = REM_RobotBuzzer_get_duration(remrbp);
}

#endif /*__REM_ROBOT_BUZZER_H*/
