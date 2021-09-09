// AUTOGENERATED. Run generator/main.py to regenerate
// Generated on September 09 2021, 16:17:59

/*
[  0   ] [  1   ] [  2   ] [  3   ] [  4   ] [  5   ] [  6   ] [  7   ] [  8   ] [  9   ] [  10  ] [  11  ]
11111111 -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- header
-------- 1111---- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- remVersion
-------- ----1111 -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- id
-------- -------- 1111---- -------- -------- -------- -------- -------- -------- -------- -------- -------- messageId
-------- -------- ----1111 -------- -------- -------- -------- -------- -------- -------- -------- -------- batteryLevel
-------- -------- -------- 1------- -------- -------- -------- -------- -------- -------- -------- -------- XsensCalibrated
-------- -------- -------- -1------ -------- -------- -------- -------- -------- -------- -------- -------- ballSensorWorking
-------- -------- -------- --1----- -------- -------- -------- -------- -------- -------- -------- -------- hasBall
-------- -------- -------- ---1---- -------- -------- -------- -------- -------- -------- -------- -------- capacitorCharged
-------- -------- -------- ----1111 -------- -------- -------- -------- -------- -------- -------- -------- ballPos
-------- -------- -------- -------- 11111111 11111111 -------- -------- -------- -------- -------- -------- rho
-------- -------- -------- -------- -------- -------- 11111111 11111111 -------- -------- -------- -------- theta
-------- -------- -------- -------- -------- -------- -------- -------- 11111111 11111111 -------- -------- angle
-------- -------- -------- -------- -------- -------- -------- -------- -------- -------- 1111---- -------- wheelLocked
-------- -------- -------- -------- -------- -------- -------- -------- -------- -------- ----1111 -------- wheelBraking
-------- -------- -------- -------- -------- -------- -------- -------- -------- -------- -------- 1111---- rssi
*/

#ifndef __ROBOT_FEEDBACK_H
#define __ROBOT_FEEDBACK_H

#include <stdbool.h>
#include <stdint.h>
#include "BaseTypes.h"

typedef struct _RobotFeedbackPayload {
    uint8_t payload[PACKET_SIZE_ROBOT_FEEDBACK];
} RobotFeedbackPayload;

typedef struct _RobotFeedback {
    uint32_t   header              ; // Header byte indicating the type of packet
    uint32_t   remVersion          ; // Version of roboteam_embedded_messages
    uint32_t   id                  ; // Id of the robot 
    uint32_t   messageId           ; // Id of the message
    uint32_t   batteryLevel        ; // The voltage level of the battery
    bool       XsensCalibrated     ; // Indicates if the XSens IMU is calibrated
    bool       ballSensorWorking   ; // Indicates if the ballsensor is working
    bool       hasBall             ; // Indicates if the ball is somewhere in front of the ballsensor
    bool       capacitorCharged    ; // Indicates if the capacitor for kicking and chipping is charged
    float      ballPos             ; // Indicates where in front of the ballsensor the ball is
    float      rho                 ; // The estimated magnitude of movement (m/s)
    float      theta               ; // The estimated direction of movement (rad)
    float      angle               ; // The estimated angle (rad)
    uint32_t   wheelLocked         ; // Indicates if a wheel is locked. One bit per wheel
    uint32_t   wheelBraking        ; // Indicates if a wheel is slipping. One bit per wheel
    uint32_t   rssi                ; // Signal strength of the last packet received by the robot
} RobotFeedback;

// ================================ GETTERS ================================
static inline uint32_t RobotFeedback_get_header(RobotFeedbackPayload *rfp){
    return ((rfp->payload[0]));
}

static inline uint32_t RobotFeedback_get_remVersion(RobotFeedbackPayload *rfp){
    return ((rfp->payload[1] & 0b11110000) >> 4);
}

static inline uint32_t RobotFeedback_get_id(RobotFeedbackPayload *rfp){
    return ((rfp->payload[1] & 0b00001111));
}

static inline uint32_t RobotFeedback_get_messageId(RobotFeedbackPayload *rfp){
    return ((rfp->payload[2] & 0b11110000) >> 4);
}

static inline uint32_t RobotFeedback_get_batteryLevel(RobotFeedbackPayload *rfp){
    return ((rfp->payload[2] & 0b00001111));
}

static inline bool RobotFeedback_get_XsensCalibrated(RobotFeedbackPayload *rfp){
    return (rfp->payload[3] & 0b10000000) > 0;
}

static inline bool RobotFeedback_get_ballSensorWorking(RobotFeedbackPayload *rfp){
    return (rfp->payload[3] & 0b01000000) > 0;
}

static inline bool RobotFeedback_get_hasBall(RobotFeedbackPayload *rfp){
    return (rfp->payload[3] & 0b00100000) > 0;
}

static inline bool RobotFeedback_get_capacitorCharged(RobotFeedbackPayload *rfp){
    return (rfp->payload[3] & 0b00010000) > 0;
}

static inline float RobotFeedback_get_ballPos(RobotFeedbackPayload *rfp){
    uint32_t _ballPos = ((rfp->payload[3] & 0b00001111));
    return (_ballPos * 0.0666666666666667) + -0.5000000000000000;
}

static inline float RobotFeedback_get_rho(RobotFeedbackPayload *rfp){
    uint32_t _rho = ((rfp->payload[4]) << 8) | ((rfp->payload[5]));
    return (_rho * 0.0001220721751736) + 0.0000000000000000;
}

static inline float RobotFeedback_get_theta(RobotFeedbackPayload *rfp){
    uint32_t _theta = ((rfp->payload[6]) << 8) | ((rfp->payload[7]));
    return (_theta * 0.0000958752621833) + -3.1415926535897931;
}

static inline float RobotFeedback_get_angle(RobotFeedbackPayload *rfp){
    uint32_t _angle = ((rfp->payload[8]) << 8) | ((rfp->payload[9]));
    return (_angle * 0.0000958752621833) + -3.1415926535897931;
}

static inline uint32_t RobotFeedback_get_wheelLocked(RobotFeedbackPayload *rfp){
    return ((rfp->payload[10] & 0b11110000) >> 4);
}

static inline uint32_t RobotFeedback_get_wheelBraking(RobotFeedbackPayload *rfp){
    return ((rfp->payload[10] & 0b00001111));
}

static inline uint32_t RobotFeedback_get_rssi(RobotFeedbackPayload *rfp){
    return ((rfp->payload[11] & 0b11110000) >> 4);
}

// ================================ SETTERS ================================
static inline void RobotFeedback_set_header(RobotFeedbackPayload *rfp, uint32_t header){
    rfp->payload[0] = header;
}

static inline void RobotFeedback_set_remVersion(RobotFeedbackPayload *rfp, uint32_t remVersion){
    rfp->payload[1] = ((remVersion << 4) & 0b11110000) | (rfp->payload[1] & 0b00001111);
}

static inline void RobotFeedback_set_id(RobotFeedbackPayload *rfp, uint32_t id){
    rfp->payload[1] = (id & 0b00001111) | (rfp->payload[1] & 0b11110000);
}

static inline void RobotFeedback_set_messageId(RobotFeedbackPayload *rfp, uint32_t messageId){
    rfp->payload[2] = ((messageId << 4) & 0b11110000) | (rfp->payload[2] & 0b00001111);
}

static inline void RobotFeedback_set_batteryLevel(RobotFeedbackPayload *rfp, uint32_t batteryLevel){
    rfp->payload[2] = (batteryLevel & 0b00001111) | (rfp->payload[2] & 0b11110000);
}

static inline void RobotFeedback_set_XsensCalibrated(RobotFeedbackPayload *rfp, bool XsensCalibrated){
    rfp->payload[3] = ((XsensCalibrated << 7) & 0b10000000) | (rfp->payload[3] & 0b01111111);
}

static inline void RobotFeedback_set_ballSensorWorking(RobotFeedbackPayload *rfp, bool ballSensorWorking){
    rfp->payload[3] = ((ballSensorWorking << 6) & 0b01000000) | (rfp->payload[3] & 0b10111111);
}

static inline void RobotFeedback_set_hasBall(RobotFeedbackPayload *rfp, bool hasBall){
    rfp->payload[3] = ((hasBall << 5) & 0b00100000) | (rfp->payload[3] & 0b11011111);
}

static inline void RobotFeedback_set_capacitorCharged(RobotFeedbackPayload *rfp, bool capacitorCharged){
    rfp->payload[3] = ((capacitorCharged << 4) & 0b00010000) | (rfp->payload[3] & 0b11101111);
}

static inline void RobotFeedback_set_ballPos(RobotFeedbackPayload *rfp, float ballPos){
    uint32_t _ballPos = (uint32_t)((ballPos +0.5000000000000000) / 0.0666666666666667);
    rfp->payload[3] = (_ballPos & 0b00001111) | (rfp->payload[3] & 0b11110000);
}

static inline void RobotFeedback_set_rho(RobotFeedbackPayload *rfp, float rho){
    uint32_t _rho = (uint32_t)(rho / 0.0001220721751736);
    rfp->payload[4] = (_rho >> 8);
    rfp->payload[5] = _rho;
}

static inline void RobotFeedback_set_theta(RobotFeedbackPayload *rfp, float theta){
    uint32_t _theta = (uint32_t)((theta +3.1415926535897931) / 0.0000958752621833);
    rfp->payload[6] = (_theta >> 8);
    rfp->payload[7] = _theta;
}

static inline void RobotFeedback_set_angle(RobotFeedbackPayload *rfp, float angle){
    uint32_t _angle = (uint32_t)((angle +3.1415926535897931) / 0.0000958752621833);
    rfp->payload[8] = (_angle >> 8);
    rfp->payload[9] = _angle;
}

static inline void RobotFeedback_set_wheelLocked(RobotFeedbackPayload *rfp, uint32_t wheelLocked){
    rfp->payload[10] = ((wheelLocked << 4) & 0b11110000) | (rfp->payload[10] & 0b00001111);
}

static inline void RobotFeedback_set_wheelBraking(RobotFeedbackPayload *rfp, uint32_t wheelBraking){
    rfp->payload[10] = (wheelBraking & 0b00001111) | (rfp->payload[10] & 0b11110000);
}

static inline void RobotFeedback_set_rssi(RobotFeedbackPayload *rfp, uint32_t rssi){
    rfp->payload[11] = ((rssi << 4) & 0b11110000) | (rfp->payload[11] & 0b00001111);
}

// ================================ ENCODE ================================
static inline void encodeRobotFeedback(RobotFeedbackPayload *rfp, RobotFeedback *rf){
    RobotFeedback_set_header              (rfp, rf->header);
    RobotFeedback_set_remVersion          (rfp, rf->remVersion);
    RobotFeedback_set_id                  (rfp, rf->id);
    RobotFeedback_set_messageId           (rfp, rf->messageId);
    RobotFeedback_set_batteryLevel        (rfp, rf->batteryLevel);
    RobotFeedback_set_XsensCalibrated     (rfp, rf->XsensCalibrated);
    RobotFeedback_set_ballSensorWorking   (rfp, rf->ballSensorWorking);
    RobotFeedback_set_hasBall             (rfp, rf->hasBall);
    RobotFeedback_set_capacitorCharged    (rfp, rf->capacitorCharged);
    RobotFeedback_set_ballPos             (rfp, rf->ballPos);
    RobotFeedback_set_rho                 (rfp, rf->rho);
    RobotFeedback_set_theta               (rfp, rf->theta);
    RobotFeedback_set_angle               (rfp, rf->angle);
    RobotFeedback_set_wheelLocked         (rfp, rf->wheelLocked);
    RobotFeedback_set_wheelBraking        (rfp, rf->wheelBraking);
    RobotFeedback_set_rssi                (rfp, rf->rssi);
}

// ================================ DECODE ================================
static inline void decodeRobotFeedback(RobotFeedback *rf, RobotFeedbackPayload *rfp){
    rf->header           = RobotFeedback_get_header(rfp);
    rf->remVersion       = RobotFeedback_get_remVersion(rfp);
    rf->id               = RobotFeedback_get_id(rfp);
    rf->messageId        = RobotFeedback_get_messageId(rfp);
    rf->batteryLevel     = RobotFeedback_get_batteryLevel(rfp);
    rf->XsensCalibrated  = RobotFeedback_get_XsensCalibrated(rfp);
    rf->ballSensorWorking= RobotFeedback_get_ballSensorWorking(rfp);
    rf->hasBall          = RobotFeedback_get_hasBall(rfp);
    rf->capacitorCharged = RobotFeedback_get_capacitorCharged(rfp);
    rf->ballPos          = RobotFeedback_get_ballPos(rfp);
    rf->rho              = RobotFeedback_get_rho(rfp);
    rf->theta            = RobotFeedback_get_theta(rfp);
    rf->angle            = RobotFeedback_get_angle(rfp);
    rf->wheelLocked      = RobotFeedback_get_wheelLocked(rfp);
    rf->wheelBraking     = RobotFeedback_get_wheelBraking(rfp);
    rf->rssi             = RobotFeedback_get_rssi(rfp);
}

#endif /*__ROBOT_FEEDBACK_H*/
