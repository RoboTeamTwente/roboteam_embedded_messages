// AUTOGENERATED. Run generator/main.py to regenerate
/*
[  0   ] [  1   ] [  2   ] [  3   ] [  4   ] [  5   ]
11111111 -------- -------- -------- -------- -------- header
-------- 1111---- -------- -------- -------- -------- remVersion
-------- ----1111 -------- -------- -------- -------- id
-------- -------- 1111---- -------- -------- -------- messageId
-------- -------- ----1111 11111111 -------- -------- period
-------- -------- -------- -------- 11111111 11111111 duration
*/

#ifndef __ROBOT_BUZZER_H
#define __ROBOT_BUZZER_H

#include <stdbool.h>
#include <stdint.h>

#include "BaseTypes.h"

typedef struct _RobotBuzzerPayload {
    uint8_t payload[PACKET_SIZE_ROBOT_BUZZER];
} RobotBuzzerPayload;

typedef struct _RobotBuzzer {
    uint32_t header;      // integer [0, 255]             Header byte indicating the type of packet
    uint32_t remVersion;  // integer [0, 15]              Version of roboteam_embedded_messages
    uint32_t id;          // integer [0, 15]              Id of the robot
    uint32_t messageId;   // integer [0, 15]              Id of the message
    uint32_t period;      // integer [0, 4095]            Sound that the buzzer makes.
    float duration;       // float   [0.000, 5.000)       Duration of the sound
} RobotBuzzer;

// ================================ GETTERS ================================
static inline uint32_t RobotBuzzer_get_header(RobotBuzzerPayload *rbp) { return ((rbp->payload[0])); }

static inline uint32_t RobotBuzzer_get_remVersion(RobotBuzzerPayload *rbp) { return ((rbp->payload[1] & 0b11110000) >> 4); }

static inline uint32_t RobotBuzzer_get_id(RobotBuzzerPayload *rbp) { return ((rbp->payload[1] & 0b00001111)); }

static inline uint32_t RobotBuzzer_get_messageId(RobotBuzzerPayload *rbp) { return ((rbp->payload[2] & 0b11110000) >> 4); }

static inline uint32_t RobotBuzzer_get_period(RobotBuzzerPayload *rbp) { return ((rbp->payload[2] & 0b00001111) << 8) | ((rbp->payload[3])); }

static inline float RobotBuzzer_get_duration(RobotBuzzerPayload *rbp) {
    uint32_t _duration = ((rbp->payload[4]) << 8) | ((rbp->payload[5]));
    return (_duration * 0.0000762951094835) + 0.0000000000000000;
}

// ================================ SETTERS ================================
static inline void RobotBuzzer_set_header(RobotBuzzerPayload *rbp, uint32_t header) { rbp->payload[0] = header; }

static inline void RobotBuzzer_set_remVersion(RobotBuzzerPayload *rbp, uint32_t remVersion) { rbp->payload[1] = ((remVersion << 4) & 0b11110000) | (rbp->payload[1] & 0b00001111); }

static inline void RobotBuzzer_set_id(RobotBuzzerPayload *rbp, uint32_t id) { rbp->payload[1] = (id & 0b00001111) | (rbp->payload[1] & 0b11110000); }

static inline void RobotBuzzer_set_messageId(RobotBuzzerPayload *rbp, uint32_t messageId) { rbp->payload[2] = ((messageId << 4) & 0b11110000) | (rbp->payload[2] & 0b00001111); }

static inline void RobotBuzzer_set_period(RobotBuzzerPayload *rbp, uint32_t period) {
    rbp->payload[2] = ((period >> 8) & 0b00001111) | (rbp->payload[2] & 0b11110000);
    rbp->payload[3] = period;
}

static inline void RobotBuzzer_set_duration(RobotBuzzerPayload *rbp, float duration) {
    uint32_t _duration = (uint32_t)(duration / 0.0000762951094835);
    rbp->payload[4] = (_duration >> 8);
    rbp->payload[5] = _duration;
}

// ================================ ENCODE ================================
static inline void encodeRobotBuzzer(RobotBuzzerPayload *rbp, RobotBuzzer *rb) {
    RobotBuzzer_set_header(rbp, rb->header);
    RobotBuzzer_set_remVersion(rbp, rb->remVersion);
    RobotBuzzer_set_id(rbp, rb->id);
    RobotBuzzer_set_messageId(rbp, rb->messageId);
    RobotBuzzer_set_period(rbp, rb->period);
    RobotBuzzer_set_duration(rbp, rb->duration);
}

// ================================ DECODE ================================
static inline void decodeRobotBuzzer(RobotBuzzer *rb, RobotBuzzerPayload *rbp) {
    rb->header = RobotBuzzer_get_header(rbp);
    rb->remVersion = RobotBuzzer_get_remVersion(rbp);
    rb->id = RobotBuzzer_get_id(rbp);
    rb->messageId = RobotBuzzer_get_messageId(rbp);
    rb->period = RobotBuzzer_get_period(rbp);
    rb->duration = RobotBuzzer_get_duration(rbp);
}

#endif /*__ROBOT_BUZZER_H*/
