// AUTOGENERATED. Run generator/main.py to regenerate
/*
[  0   ] [  1   ] [  2   ] [  3   ]
11111111 -------- -------- -------- header
-------- 1111---- -------- -------- remVersion
-------- ----1111 -------- -------- id
-------- -------- 11111111 -------- sequenceNumber
-------- -------- -------- 11111111 messageLength
*/

#ifndef __REM_ROBOT_ASSURED_PACKET_H
#define __REM_ROBOT_ASSURED_PACKET_H

#include <stdbool.h>
#include <stdint.h>
#include "REM_BaseTypes.h"

typedef struct _REM_RobotAssuredPacketPayload {
    uint8_t payload[PACKET_SIZE_REM_ROBOT_ASSURED_PACKET];
} REM_RobotAssuredPacketPayload;

typedef struct _REM_RobotAssuredPacket {
    uint32_t   header              ; // integer [0, 255]             Header byte indicating the type of packet
    uint32_t   remVersion          ; // integer [0, 15]              Version of roboteam_embedded_messages
    uint32_t   id                  ; // integer [0, 15]              Id of the robot
    uint32_t   sequenceNumber      ; // integer [0, 255]             Number to match this packet with AssuredAck
    uint32_t   messageLength       ; // integer [0, 255]             Length of the following message
} REM_RobotAssuredPacket;

// ================================ GETTERS ================================
static inline uint32_t REM_RobotAssuredPacket_get_header(REM_RobotAssuredPacketPayload *remrapp){
    return ((remrapp->payload[0]));
}

static inline uint32_t REM_RobotAssuredPacket_get_remVersion(REM_RobotAssuredPacketPayload *remrapp){
    return ((remrapp->payload[1] & 0b11110000) >> 4);
}

static inline uint32_t REM_RobotAssuredPacket_get_id(REM_RobotAssuredPacketPayload *remrapp){
    return ((remrapp->payload[1] & 0b00001111));
}

static inline uint32_t REM_RobotAssuredPacket_get_sequenceNumber(REM_RobotAssuredPacketPayload *remrapp){
    return ((remrapp->payload[2]));
}

static inline uint32_t REM_RobotAssuredPacket_get_messageLength(REM_RobotAssuredPacketPayload *remrapp){
    return ((remrapp->payload[3]));
}

// ================================ SETTERS ================================
static inline void REM_RobotAssuredPacket_set_header(REM_RobotAssuredPacketPayload *remrapp, uint32_t header){
    remrapp->payload[0] = header;
}

static inline void REM_RobotAssuredPacket_set_remVersion(REM_RobotAssuredPacketPayload *remrapp, uint32_t remVersion){
    remrapp->payload[1] = ((remVersion << 4) & 0b11110000) | (remrapp->payload[1] & 0b00001111);
}

static inline void REM_RobotAssuredPacket_set_id(REM_RobotAssuredPacketPayload *remrapp, uint32_t id){
    remrapp->payload[1] = (id & 0b00001111) | (remrapp->payload[1] & 0b11110000);
}

static inline void REM_RobotAssuredPacket_set_sequenceNumber(REM_RobotAssuredPacketPayload *remrapp, uint32_t sequenceNumber){
    remrapp->payload[2] = sequenceNumber;
}

static inline void REM_RobotAssuredPacket_set_messageLength(REM_RobotAssuredPacketPayload *remrapp, uint32_t messageLength){
    remrapp->payload[3] = messageLength;
}

// ================================ ENCODE ================================
static inline void encodeREM_RobotAssuredPacket(REM_RobotAssuredPacketPayload *remrapp, REM_RobotAssuredPacket *remrap){
    REM_RobotAssuredPacket_set_header              (remrapp, remrap->header);
    REM_RobotAssuredPacket_set_remVersion          (remrapp, remrap->remVersion);
    REM_RobotAssuredPacket_set_id                  (remrapp, remrap->id);
    REM_RobotAssuredPacket_set_sequenceNumber      (remrapp, remrap->sequenceNumber);
    REM_RobotAssuredPacket_set_messageLength       (remrapp, remrap->messageLength);
}

// ================================ DECODE ================================
static inline void decodeREM_RobotAssuredPacket(REM_RobotAssuredPacket *remrap, REM_RobotAssuredPacketPayload *remrapp){
    remrap->header       = REM_RobotAssuredPacket_get_header(remrapp);
    remrap->remVersion   = REM_RobotAssuredPacket_get_remVersion(remrapp);
    remrap->id           = REM_RobotAssuredPacket_get_id(remrapp);
    remrap->sequenceNumber= REM_RobotAssuredPacket_get_sequenceNumber(remrapp);
    remrap->messageLength= REM_RobotAssuredPacket_get_messageLength(remrapp);
}

#endif /*__REM_ROBOT_ASSURED_PACKET_H*/