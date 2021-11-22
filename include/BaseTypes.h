// AUTOGENERATED. Run generator/main.py to regenerate
// Warning : Check the unicode table before assigning a byte, to make sure that the byte isn't used for anything special : https://unicode-table.com/
// For example, don't use the following bytes
// 0b00000000 : The null-terminator, used to signal the end of strings / arrays / etc.
// 0b00001010 : The byte for newline, used for line termination.

#ifndef __BASETYPES_H
#define __BASETYPES_H

#define LOCAL_REM_VERSION 3

#define PACKET_TYPE_ROBOT_COMMAND                                    0b00001111 // 15 
#define PACKET_SIZE_ROBOT_COMMAND                                    12
#define PACKET_RANGE_ROBOT_COMMAND_RHO_MIN                           0.
#define PACKET_RANGE_ROBOT_COMMAND_RHO_MAX                           8.
#define PACKET_RANGE_ROBOT_COMMAND_RHO_N_BITS                        16
#define PACKET_RANGE_ROBOT_COMMAND_THETA_MIN                         -3.1415926535897931
#define PACKET_RANGE_ROBOT_COMMAND_THETA_MAX                         3.1415926535897931
#define PACKET_RANGE_ROBOT_COMMAND_THETA_N_BITS                      16
#define PACKET_RANGE_ROBOT_COMMAND_ANGLE_MIN                         -3.1415926535897931
#define PACKET_RANGE_ROBOT_COMMAND_ANGLE_MAX                         3.1415926535897931
#define PACKET_RANGE_ROBOT_COMMAND_ANGLE_N_BITS                      16
#define PACKET_RANGE_ROBOT_COMMAND_CAMERA_ANGLE_MIN                  -3.1415926535897931
#define PACKET_RANGE_ROBOT_COMMAND_CAMERA_ANGLE_MAX                  3.1415926535897931
#define PACKET_RANGE_ROBOT_COMMAND_CAMERA_ANGLE_N_BITS               16
#define PACKET_RANGE_ROBOT_COMMAND_DRIBBLER_MIN                      0.
#define PACKET_RANGE_ROBOT_COMMAND_DRIBBLER_MAX                      1.
#define PACKET_RANGE_ROBOT_COMMAND_DRIBBLER_N_BITS                   3
#define PACKET_RANGE_ROBOT_COMMAND_KICK_CHIP_POWER_MIN               0.
#define PACKET_RANGE_ROBOT_COMMAND_KICK_CHIP_POWER_MAX               1.
#define PACKET_RANGE_ROBOT_COMMAND_KICK_CHIP_POWER_N_BITS            3

#define PACKET_TYPE_ROBOT_FEEDBACK                                   0b00110011 // 51 
#define PACKET_SIZE_ROBOT_FEEDBACK                                   12
#define PACKET_RANGE_ROBOT_FEEDBACK_BALL_POS_MIN                     -0.5
#define PACKET_RANGE_ROBOT_FEEDBACK_BALL_POS_MAX                     0.5
#define PACKET_RANGE_ROBOT_FEEDBACK_BALL_POS_N_BITS                  4
#define PACKET_RANGE_ROBOT_FEEDBACK_RHO_MIN                          0.
#define PACKET_RANGE_ROBOT_FEEDBACK_RHO_MAX                          8.
#define PACKET_RANGE_ROBOT_FEEDBACK_RHO_N_BITS                       16
#define PACKET_RANGE_ROBOT_FEEDBACK_THETA_MIN                        -3.1415926535897931
#define PACKET_RANGE_ROBOT_FEEDBACK_THETA_MAX                        3.1415926535897931
#define PACKET_RANGE_ROBOT_FEEDBACK_THETA_N_BITS                     16
#define PACKET_RANGE_ROBOT_FEEDBACK_ANGLE_MIN                        -3.1415926535897931
#define PACKET_RANGE_ROBOT_FEEDBACK_ANGLE_MAX                        3.1415926535897931
#define PACKET_RANGE_ROBOT_FEEDBACK_ANGLE_N_BITS                     16

#define PACKET_TYPE_ROBOT_STATE_INFO                                 0b00111100 // 60 
#define PACKET_SIZE_ROBOT_STATE_INFO                                 35
#define PACKET_RANGE_ROBOT_STATE_INFO_XSENS_ACC1_MIN                 -50000.
#define PACKET_RANGE_ROBOT_STATE_INFO_XSENS_ACC1_MAX                 50000.
#define PACKET_RANGE_ROBOT_STATE_INFO_XSENS_ACC1_N_BITS              32
#define PACKET_RANGE_ROBOT_STATE_INFO_XSENS_ACC2_MIN                 -50000.
#define PACKET_RANGE_ROBOT_STATE_INFO_XSENS_ACC2_MAX                 50000.
#define PACKET_RANGE_ROBOT_STATE_INFO_XSENS_ACC2_N_BITS              32
#define PACKET_RANGE_ROBOT_STATE_INFO_XSENS_YAW_MIN                  -50000.
#define PACKET_RANGE_ROBOT_STATE_INFO_XSENS_YAW_MAX                  50000.
#define PACKET_RANGE_ROBOT_STATE_INFO_XSENS_YAW_N_BITS               32
#define PACKET_RANGE_ROBOT_STATE_INFO_RATE_OF_TURN_MIN               -50000.
#define PACKET_RANGE_ROBOT_STATE_INFO_RATE_OF_TURN_MAX               50000.
#define PACKET_RANGE_ROBOT_STATE_INFO_RATE_OF_TURN_N_BITS            32
#define PACKET_RANGE_ROBOT_STATE_INFO_WHEEL_SPEED1_MIN               -50000.
#define PACKET_RANGE_ROBOT_STATE_INFO_WHEEL_SPEED1_MAX               50000.
#define PACKET_RANGE_ROBOT_STATE_INFO_WHEEL_SPEED1_N_BITS            32
#define PACKET_RANGE_ROBOT_STATE_INFO_WHEEL_SPEED2_MIN               -50000.
#define PACKET_RANGE_ROBOT_STATE_INFO_WHEEL_SPEED2_MAX               50000.
#define PACKET_RANGE_ROBOT_STATE_INFO_WHEEL_SPEED2_N_BITS            32
#define PACKET_RANGE_ROBOT_STATE_INFO_WHEEL_SPEED3_MIN               -50000.
#define PACKET_RANGE_ROBOT_STATE_INFO_WHEEL_SPEED3_MAX               50000.
#define PACKET_RANGE_ROBOT_STATE_INFO_WHEEL_SPEED3_N_BITS            32
#define PACKET_RANGE_ROBOT_STATE_INFO_WHEEL_SPEED4_MIN               -50000.
#define PACKET_RANGE_ROBOT_STATE_INFO_WHEEL_SPEED4_MAX               50000.
#define PACKET_RANGE_ROBOT_STATE_INFO_WHEEL_SPEED4_N_BITS            32

#define PACKET_TYPE_ROBOT_BUZZER                                     0b01010101 // 85 
#define PACKET_SIZE_ROBOT_BUZZER                                     6
#define PACKET_RANGE_ROBOT_BUZZER_DURATION_MIN                       0.
#define PACKET_RANGE_ROBOT_BUZZER_DURATION_MAX                       5.
#define PACKET_RANGE_ROBOT_BUZZER_DURATION_N_BITS                    16

#define PACKET_TYPE_BASESTATION_STATISTICS                           0b01011010 // 90 
#define PACKET_SIZE_BASESTATION_STATISTICS                           34

#define PACKET_TYPE_BASESTATION_GET_STATISTICS                       0b01100110 // 102 
#define PACKET_SIZE_BASESTATION_GET_STATISTICS                       1

#define PACKET_TYPE_BASESTATION_LOG                                  0b01101001 // 105 
#define PACKET_SIZE_BASESTATION_LOG                                  1

#define PACKET_TYPE_ROBOT_LOG                                        0b10010110 // 150 
#define PACKET_SIZE_ROBOT_LOG                                        3

#endif /*__BASETYPES_H*/