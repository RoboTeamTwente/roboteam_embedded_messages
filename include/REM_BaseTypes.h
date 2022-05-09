// AUTOGENERATED. Run generator/main.py to regenerate
// Warning : Check the unicode table before assigning a byte, to make sure that the byte isn't used for anything special : https://unicode-table.com/
// For example, don't use the following bytes
// 0b00000000 : The null-terminator, used to signal the end of strings / arrays / etc.
// 0b00001010 : The byte for newline, used for line termination.

#ifndef __BASETYPES_H
#define __BASETYPES_H

#include <stdint.h>

#define LOCAL_REM_VERSION 9

#define PACKET_TYPE_REM_ROBOT_COMMAND                                0b00001111 // 15 
#define PACKET_SIZE_REM_ROBOT_COMMAND                                12
#define PACKET_RANGE_REM_ROBOT_COMMAND_HEADER_MIN                    0.
#define PACKET_RANGE_REM_ROBOT_COMMAND_HEADER_MAX                    255.
#define PACKET_RANGE_REM_ROBOT_COMMAND_HEADER_N_BITS                 8
#define PACKET_RANGE_REM_ROBOT_COMMAND_REM_VERSION_MIN               0.
#define PACKET_RANGE_REM_ROBOT_COMMAND_REM_VERSION_MAX               15.
#define PACKET_RANGE_REM_ROBOT_COMMAND_REM_VERSION_N_BITS            4
#define PACKET_RANGE_REM_ROBOT_COMMAND_ID_MIN                        0.
#define PACKET_RANGE_REM_ROBOT_COMMAND_ID_MAX                        15.
#define PACKET_RANGE_REM_ROBOT_COMMAND_ID_N_BITS                     4
#define PACKET_RANGE_REM_ROBOT_COMMAND_MESSAGE_ID_MIN                0.
#define PACKET_RANGE_REM_ROBOT_COMMAND_MESSAGE_ID_MAX                15.
#define PACKET_RANGE_REM_ROBOT_COMMAND_MESSAGE_ID_N_BITS             4
#define PACKET_RANGE_REM_ROBOT_COMMAND_DO_KICK_MIN                   0.
#define PACKET_RANGE_REM_ROBOT_COMMAND_DO_KICK_MAX                   1.
#define PACKET_RANGE_REM_ROBOT_COMMAND_DO_KICK_N_BITS                1
#define PACKET_RANGE_REM_ROBOT_COMMAND_DO_CHIP_MIN                   0.
#define PACKET_RANGE_REM_ROBOT_COMMAND_DO_CHIP_MAX                   1.
#define PACKET_RANGE_REM_ROBOT_COMMAND_DO_CHIP_N_BITS                1
#define PACKET_RANGE_REM_ROBOT_COMMAND_DO_FORCE_MIN                  0.
#define PACKET_RANGE_REM_ROBOT_COMMAND_DO_FORCE_MAX                  1.
#define PACKET_RANGE_REM_ROBOT_COMMAND_DO_FORCE_N_BITS               1
#define PACKET_RANGE_REM_ROBOT_COMMAND_USE_CAMERA_ANGLE_MIN          0.
#define PACKET_RANGE_REM_ROBOT_COMMAND_USE_CAMERA_ANGLE_MAX          1.
#define PACKET_RANGE_REM_ROBOT_COMMAND_USE_CAMERA_ANGLE_N_BITS       1
#define PACKET_RANGE_REM_ROBOT_COMMAND_RHO_MIN                       0.
#define PACKET_RANGE_REM_ROBOT_COMMAND_RHO_MAX                       8.
#define PACKET_RANGE_REM_ROBOT_COMMAND_RHO_N_BITS                    16
#define PACKET_RANGE_REM_ROBOT_COMMAND_THETA_MIN                     -3.1415926535897931
#define PACKET_RANGE_REM_ROBOT_COMMAND_THETA_MAX                     3.1415926535897931
#define PACKET_RANGE_REM_ROBOT_COMMAND_THETA_N_BITS                  16
#define PACKET_RANGE_REM_ROBOT_COMMAND_ANGLE_MIN                     -3.1415926535897931
#define PACKET_RANGE_REM_ROBOT_COMMAND_ANGLE_MAX                     3.1415926535897931
#define PACKET_RANGE_REM_ROBOT_COMMAND_ANGLE_N_BITS                  16
#define PACKET_RANGE_REM_ROBOT_COMMAND_CAMERA_ANGLE_MIN              -3.1415926535897931
#define PACKET_RANGE_REM_ROBOT_COMMAND_CAMERA_ANGLE_MAX              3.1415926535897931
#define PACKET_RANGE_REM_ROBOT_COMMAND_CAMERA_ANGLE_N_BITS           16
#define PACKET_RANGE_REM_ROBOT_COMMAND_DRIBBLER_MIN                  0.
#define PACKET_RANGE_REM_ROBOT_COMMAND_DRIBBLER_MAX                  1.
#define PACKET_RANGE_REM_ROBOT_COMMAND_DRIBBLER_N_BITS               3
#define PACKET_RANGE_REM_ROBOT_COMMAND_KICK_CHIP_POWER_MIN           0.
#define PACKET_RANGE_REM_ROBOT_COMMAND_KICK_CHIP_POWER_MAX           6.5
#define PACKET_RANGE_REM_ROBOT_COMMAND_KICK_CHIP_POWER_N_BITS        3
#define PACKET_RANGE_REM_ROBOT_COMMAND_ANGULAR_CONTROL_MIN           0.
#define PACKET_RANGE_REM_ROBOT_COMMAND_ANGULAR_CONTROL_MAX           1.
#define PACKET_RANGE_REM_ROBOT_COMMAND_ANGULAR_CONTROL_N_BITS        1
#define PACKET_RANGE_REM_ROBOT_COMMAND_FEEDBACK_MIN                  0.
#define PACKET_RANGE_REM_ROBOT_COMMAND_FEEDBACK_MAX                  1.
#define PACKET_RANGE_REM_ROBOT_COMMAND_FEEDBACK_N_BITS               1

#define PACKET_TYPE_REM_ROBOT_FEEDBACK                               0b00110011 // 51 
#define PACKET_SIZE_REM_ROBOT_FEEDBACK                               12
#define PACKET_RANGE_REM_ROBOT_FEEDBACK_HEADER_MIN                   0.
#define PACKET_RANGE_REM_ROBOT_FEEDBACK_HEADER_MAX                   255.
#define PACKET_RANGE_REM_ROBOT_FEEDBACK_HEADER_N_BITS                8
#define PACKET_RANGE_REM_ROBOT_FEEDBACK_REM_VERSION_MIN              0.
#define PACKET_RANGE_REM_ROBOT_FEEDBACK_REM_VERSION_MAX              15.
#define PACKET_RANGE_REM_ROBOT_FEEDBACK_REM_VERSION_N_BITS           4
#define PACKET_RANGE_REM_ROBOT_FEEDBACK_ID_MIN                       0.
#define PACKET_RANGE_REM_ROBOT_FEEDBACK_ID_MAX                       15.
#define PACKET_RANGE_REM_ROBOT_FEEDBACK_ID_N_BITS                    4
#define PACKET_RANGE_REM_ROBOT_FEEDBACK_MESSAGE_ID_MIN               0.
#define PACKET_RANGE_REM_ROBOT_FEEDBACK_MESSAGE_ID_MAX               15.
#define PACKET_RANGE_REM_ROBOT_FEEDBACK_MESSAGE_ID_N_BITS            4
#define PACKET_RANGE_REM_ROBOT_FEEDBACK_BATTERY_LEVEL_MIN            0.
#define PACKET_RANGE_REM_ROBOT_FEEDBACK_BATTERY_LEVEL_MAX            15.
#define PACKET_RANGE_REM_ROBOT_FEEDBACK_BATTERY_LEVEL_N_BITS         4
#define PACKET_RANGE_REM_ROBOT_FEEDBACK_XSENS_CALIBRATED_MIN         0.
#define PACKET_RANGE_REM_ROBOT_FEEDBACK_XSENS_CALIBRATED_MAX         1.
#define PACKET_RANGE_REM_ROBOT_FEEDBACK_XSENS_CALIBRATED_N_BITS      1
#define PACKET_RANGE_REM_ROBOT_FEEDBACK_BALL_SENSOR_WORKING_MIN      0.
#define PACKET_RANGE_REM_ROBOT_FEEDBACK_BALL_SENSOR_WORKING_MAX      1.
#define PACKET_RANGE_REM_ROBOT_FEEDBACK_BALL_SENSOR_WORKING_N_BITS   1
#define PACKET_RANGE_REM_ROBOT_FEEDBACK_HAS_BALL_MIN                 0.
#define PACKET_RANGE_REM_ROBOT_FEEDBACK_HAS_BALL_MAX                 1.
#define PACKET_RANGE_REM_ROBOT_FEEDBACK_HAS_BALL_N_BITS              1
#define PACKET_RANGE_REM_ROBOT_FEEDBACK_CAPACITOR_CHARGED_MIN        0.
#define PACKET_RANGE_REM_ROBOT_FEEDBACK_CAPACITOR_CHARGED_MAX        1.
#define PACKET_RANGE_REM_ROBOT_FEEDBACK_CAPACITOR_CHARGED_N_BITS     1
#define PACKET_RANGE_REM_ROBOT_FEEDBACK_BALL_POS_MIN                 -0.5
#define PACKET_RANGE_REM_ROBOT_FEEDBACK_BALL_POS_MAX                 0.5
#define PACKET_RANGE_REM_ROBOT_FEEDBACK_BALL_POS_N_BITS              4
#define PACKET_RANGE_REM_ROBOT_FEEDBACK_RHO_MIN                      0.
#define PACKET_RANGE_REM_ROBOT_FEEDBACK_RHO_MAX                      8.
#define PACKET_RANGE_REM_ROBOT_FEEDBACK_RHO_N_BITS                   16
#define PACKET_RANGE_REM_ROBOT_FEEDBACK_THETA_MIN                    -3.1415926535897931
#define PACKET_RANGE_REM_ROBOT_FEEDBACK_THETA_MAX                    3.1415926535897931
#define PACKET_RANGE_REM_ROBOT_FEEDBACK_THETA_N_BITS                 16
#define PACKET_RANGE_REM_ROBOT_FEEDBACK_ANGLE_MIN                    -3.1415926535897931
#define PACKET_RANGE_REM_ROBOT_FEEDBACK_ANGLE_MAX                    3.1415926535897931
#define PACKET_RANGE_REM_ROBOT_FEEDBACK_ANGLE_N_BITS                 16
#define PACKET_RANGE_REM_ROBOT_FEEDBACK_WHEEL_LOCKED_MIN             0.
#define PACKET_RANGE_REM_ROBOT_FEEDBACK_WHEEL_LOCKED_MAX             15.
#define PACKET_RANGE_REM_ROBOT_FEEDBACK_WHEEL_LOCKED_N_BITS          4
#define PACKET_RANGE_REM_ROBOT_FEEDBACK_WHEEL_BRAKING_MIN            0.
#define PACKET_RANGE_REM_ROBOT_FEEDBACK_WHEEL_BRAKING_MAX            15.
#define PACKET_RANGE_REM_ROBOT_FEEDBACK_WHEEL_BRAKING_N_BITS         4
#define PACKET_RANGE_REM_ROBOT_FEEDBACK_RSSI_MIN                     0.
#define PACKET_RANGE_REM_ROBOT_FEEDBACK_RSSI_MAX                     255.
#define PACKET_RANGE_REM_ROBOT_FEEDBACK_RSSI_N_BITS                  8

#define PACKET_TYPE_REM_ROBOT_STATE_INFO                             0b00111100 // 60 
#define PACKET_SIZE_REM_ROBOT_STATE_INFO                             35
#define PACKET_RANGE_REM_ROBOT_STATE_INFO_HEADER_MIN                 0.
#define PACKET_RANGE_REM_ROBOT_STATE_INFO_HEADER_MAX                 255.
#define PACKET_RANGE_REM_ROBOT_STATE_INFO_HEADER_N_BITS              8
#define PACKET_RANGE_REM_ROBOT_STATE_INFO_REM_VERSION_MIN            0.
#define PACKET_RANGE_REM_ROBOT_STATE_INFO_REM_VERSION_MAX            15.
#define PACKET_RANGE_REM_ROBOT_STATE_INFO_REM_VERSION_N_BITS         4
#define PACKET_RANGE_REM_ROBOT_STATE_INFO_ID_MIN                     0.
#define PACKET_RANGE_REM_ROBOT_STATE_INFO_ID_MAX                     15.
#define PACKET_RANGE_REM_ROBOT_STATE_INFO_ID_N_BITS                  4
#define PACKET_RANGE_REM_ROBOT_STATE_INFO_MESSAGE_ID_MIN             0.
#define PACKET_RANGE_REM_ROBOT_STATE_INFO_MESSAGE_ID_MAX             15.
#define PACKET_RANGE_REM_ROBOT_STATE_INFO_MESSAGE_ID_N_BITS          4
#define PACKET_RANGE_REM_ROBOT_STATE_INFO_XSENS_ACC1_MIN             -50000.
#define PACKET_RANGE_REM_ROBOT_STATE_INFO_XSENS_ACC1_MAX             50000.
#define PACKET_RANGE_REM_ROBOT_STATE_INFO_XSENS_ACC1_N_BITS          32
#define PACKET_RANGE_REM_ROBOT_STATE_INFO_XSENS_ACC2_MIN             -50000.
#define PACKET_RANGE_REM_ROBOT_STATE_INFO_XSENS_ACC2_MAX             50000.
#define PACKET_RANGE_REM_ROBOT_STATE_INFO_XSENS_ACC2_N_BITS          32
#define PACKET_RANGE_REM_ROBOT_STATE_INFO_XSENS_YAW_MIN              -50000.
#define PACKET_RANGE_REM_ROBOT_STATE_INFO_XSENS_YAW_MAX              50000.
#define PACKET_RANGE_REM_ROBOT_STATE_INFO_XSENS_YAW_N_BITS           32
#define PACKET_RANGE_REM_ROBOT_STATE_INFO_RATE_OF_TURN_MIN           -50000.
#define PACKET_RANGE_REM_ROBOT_STATE_INFO_RATE_OF_TURN_MAX           50000.
#define PACKET_RANGE_REM_ROBOT_STATE_INFO_RATE_OF_TURN_N_BITS        32
#define PACKET_RANGE_REM_ROBOT_STATE_INFO_WHEEL_SPEED1_MIN           -50000.
#define PACKET_RANGE_REM_ROBOT_STATE_INFO_WHEEL_SPEED1_MAX           50000.
#define PACKET_RANGE_REM_ROBOT_STATE_INFO_WHEEL_SPEED1_N_BITS        32
#define PACKET_RANGE_REM_ROBOT_STATE_INFO_WHEEL_SPEED2_MIN           -50000.
#define PACKET_RANGE_REM_ROBOT_STATE_INFO_WHEEL_SPEED2_MAX           50000.
#define PACKET_RANGE_REM_ROBOT_STATE_INFO_WHEEL_SPEED2_N_BITS        32
#define PACKET_RANGE_REM_ROBOT_STATE_INFO_WHEEL_SPEED3_MIN           -50000.
#define PACKET_RANGE_REM_ROBOT_STATE_INFO_WHEEL_SPEED3_MAX           50000.
#define PACKET_RANGE_REM_ROBOT_STATE_INFO_WHEEL_SPEED3_N_BITS        32
#define PACKET_RANGE_REM_ROBOT_STATE_INFO_WHEEL_SPEED4_MIN           -50000.
#define PACKET_RANGE_REM_ROBOT_STATE_INFO_WHEEL_SPEED4_MAX           50000.
#define PACKET_RANGE_REM_ROBOT_STATE_INFO_WHEEL_SPEED4_N_BITS        32

#define PACKET_TYPE_REM_ROBOT_BUZZER                                 0b01010101 // 85 
#define PACKET_SIZE_REM_ROBOT_BUZZER                                 6
#define PACKET_RANGE_REM_ROBOT_BUZZER_HEADER_MIN                     0.
#define PACKET_RANGE_REM_ROBOT_BUZZER_HEADER_MAX                     255.
#define PACKET_RANGE_REM_ROBOT_BUZZER_HEADER_N_BITS                  8
#define PACKET_RANGE_REM_ROBOT_BUZZER_REM_VERSION_MIN                0.
#define PACKET_RANGE_REM_ROBOT_BUZZER_REM_VERSION_MAX                15.
#define PACKET_RANGE_REM_ROBOT_BUZZER_REM_VERSION_N_BITS             4
#define PACKET_RANGE_REM_ROBOT_BUZZER_ID_MIN                         0.
#define PACKET_RANGE_REM_ROBOT_BUZZER_ID_MAX                         15.
#define PACKET_RANGE_REM_ROBOT_BUZZER_ID_N_BITS                      4
#define PACKET_RANGE_REM_ROBOT_BUZZER_MESSAGE_ID_MIN                 0.
#define PACKET_RANGE_REM_ROBOT_BUZZER_MESSAGE_ID_MAX                 15.
#define PACKET_RANGE_REM_ROBOT_BUZZER_MESSAGE_ID_N_BITS              4
#define PACKET_RANGE_REM_ROBOT_BUZZER_PERIOD_MIN                     0.
#define PACKET_RANGE_REM_ROBOT_BUZZER_PERIOD_MAX                     4095.
#define PACKET_RANGE_REM_ROBOT_BUZZER_PERIOD_N_BITS                  12
#define PACKET_RANGE_REM_ROBOT_BUZZER_DURATION_MIN                   0.
#define PACKET_RANGE_REM_ROBOT_BUZZER_DURATION_MAX                   5.
#define PACKET_RANGE_REM_ROBOT_BUZZER_DURATION_N_BITS                16

#define PACKET_TYPE_REM_BASESTATION_LOG                              0b01011010 // 90 
#define PACKET_SIZE_REM_BASESTATION_LOG                              3
#define PACKET_RANGE_REM_BASESTATION_LOG_HEADER_MIN                  0.
#define PACKET_RANGE_REM_BASESTATION_LOG_HEADER_MAX                  255.
#define PACKET_RANGE_REM_BASESTATION_LOG_HEADER_N_BITS               8
#define PACKET_RANGE_REM_BASESTATION_LOG_REM_VERSION_MIN             0.
#define PACKET_RANGE_REM_BASESTATION_LOG_REM_VERSION_MAX             15.
#define PACKET_RANGE_REM_BASESTATION_LOG_REM_VERSION_N_BITS          4
#define PACKET_RANGE_REM_BASESTATION_LOG_MESSAGE_LENGTH_MIN          0.
#define PACKET_RANGE_REM_BASESTATION_LOG_MESSAGE_LENGTH_MAX          255.
#define PACKET_RANGE_REM_BASESTATION_LOG_MESSAGE_LENGTH_N_BITS       8

#define PACKET_TYPE_REM_ROBOT_LOG                                    0b01100110 // 102 
#define PACKET_SIZE_REM_ROBOT_LOG                                    3
#define PACKET_RANGE_REM_ROBOT_LOG_HEADER_MIN                        0.
#define PACKET_RANGE_REM_ROBOT_LOG_HEADER_MAX                        255.
#define PACKET_RANGE_REM_ROBOT_LOG_HEADER_N_BITS                     8
#define PACKET_RANGE_REM_ROBOT_LOG_REM_VERSION_MIN                   0.
#define PACKET_RANGE_REM_ROBOT_LOG_REM_VERSION_MAX                   15.
#define PACKET_RANGE_REM_ROBOT_LOG_REM_VERSION_N_BITS                4
#define PACKET_RANGE_REM_ROBOT_LOG_ID_MIN                            0.
#define PACKET_RANGE_REM_ROBOT_LOG_ID_MAX                            15.
#define PACKET_RANGE_REM_ROBOT_LOG_ID_N_BITS                         4
#define PACKET_RANGE_REM_ROBOT_LOG_MESSAGE_LENGTH_MIN                0.
#define PACKET_RANGE_REM_ROBOT_LOG_MESSAGE_LENGTH_MAX                255.
#define PACKET_RANGE_REM_ROBOT_LOG_MESSAGE_LENGTH_N_BITS             8

#define PACKET_TYPE_REM_BASESTATION_GET_CONFIGURATION                0b01101001 // 105 
#define PACKET_SIZE_REM_BASESTATION_GET_CONFIGURATION                2
#define PACKET_RANGE_REM_BASESTATION_GET_CONFIGURATION_HEADER_MIN    0.
#define PACKET_RANGE_REM_BASESTATION_GET_CONFIGURATION_HEADER_MAX    255.
#define PACKET_RANGE_REM_BASESTATION_GET_CONFIGURATION_HEADER_N_BITS 8
#define PACKET_RANGE_REM_BASESTATION_GET_CONFIGURATION_REM_VERSION_MIN 0.
#define PACKET_RANGE_REM_BASESTATION_GET_CONFIGURATION_REM_VERSION_MAX 15.
#define PACKET_RANGE_REM_BASESTATION_GET_CONFIGURATION_REM_VERSION_N_BITS 4

#define PACKET_TYPE_REM_BASESTATION_CONFIGURATION                    0b10010110 // 150 
#define PACKET_SIZE_REM_BASESTATION_CONFIGURATION                    2
#define PACKET_RANGE_REM_BASESTATION_CONFIGURATION_HEADER_MIN        0.
#define PACKET_RANGE_REM_BASESTATION_CONFIGURATION_HEADER_MAX        255.
#define PACKET_RANGE_REM_BASESTATION_CONFIGURATION_HEADER_N_BITS     8
#define PACKET_RANGE_REM_BASESTATION_CONFIGURATION_REM_VERSION_MIN   0.
#define PACKET_RANGE_REM_BASESTATION_CONFIGURATION_REM_VERSION_MAX   15.
#define PACKET_RANGE_REM_BASESTATION_CONFIGURATION_REM_VERSION_N_BITS 4
#define PACKET_RANGE_REM_BASESTATION_CONFIGURATION_CHANNEL_MIN       0.
#define PACKET_RANGE_REM_BASESTATION_CONFIGURATION_CHANNEL_MAX       1.
#define PACKET_RANGE_REM_BASESTATION_CONFIGURATION_CHANNEL_N_BITS    1

#define PACKET_TYPE_REM_BASESTATION_SET_CONFIGURATION                0b10011001 // 153 
#define PACKET_SIZE_REM_BASESTATION_SET_CONFIGURATION                2
#define PACKET_RANGE_REM_BASESTATION_SET_CONFIGURATION_HEADER_MIN    0.
#define PACKET_RANGE_REM_BASESTATION_SET_CONFIGURATION_HEADER_MAX    255.
#define PACKET_RANGE_REM_BASESTATION_SET_CONFIGURATION_HEADER_N_BITS 8
#define PACKET_RANGE_REM_BASESTATION_SET_CONFIGURATION_REM_VERSION_MIN 0.
#define PACKET_RANGE_REM_BASESTATION_SET_CONFIGURATION_REM_VERSION_MAX 15.
#define PACKET_RANGE_REM_BASESTATION_SET_CONFIGURATION_REM_VERSION_N_BITS 4
#define PACKET_RANGE_REM_BASESTATION_SET_CONFIGURATION_CHANNEL_MIN   0.
#define PACKET_RANGE_REM_BASESTATION_SET_CONFIGURATION_CHANNEL_MAX   1.
#define PACKET_RANGE_REM_BASESTATION_SET_CONFIGURATION_CHANNEL_N_BITS 1

#define PACKET_TYPE_REM_ROBOT_GET_PIDGAINS                           0b10100101 // 165 
#define PACKET_SIZE_REM_ROBOT_GET_PIDGAINS                           2
#define PACKET_RANGE_REM_ROBOT_GET_PIDGAINS_HEADER_MIN               0.
#define PACKET_RANGE_REM_ROBOT_GET_PIDGAINS_HEADER_MAX               255.
#define PACKET_RANGE_REM_ROBOT_GET_PIDGAINS_HEADER_N_BITS            8
#define PACKET_RANGE_REM_ROBOT_GET_PIDGAINS_REM_VERSION_MIN          0.
#define PACKET_RANGE_REM_ROBOT_GET_PIDGAINS_REM_VERSION_MAX          15.
#define PACKET_RANGE_REM_ROBOT_GET_PIDGAINS_REM_VERSION_N_BITS       4
#define PACKET_RANGE_REM_ROBOT_GET_PIDGAINS_ID_MIN                   0.
#define PACKET_RANGE_REM_ROBOT_GET_PIDGAINS_ID_MAX                   15.
#define PACKET_RANGE_REM_ROBOT_GET_PIDGAINS_ID_N_BITS                4

#define PACKET_TYPE_REM_ROBOT_PIDGAINS                               0b10101010 // 170 
#define PACKET_SIZE_REM_ROBOT_PIDGAINS                               26
#define PACKET_RANGE_REM_ROBOT_PIDGAINS_HEADER_MIN                   0.
#define PACKET_RANGE_REM_ROBOT_PIDGAINS_HEADER_MAX                   255.
#define PACKET_RANGE_REM_ROBOT_PIDGAINS_HEADER_N_BITS                8
#define PACKET_RANGE_REM_ROBOT_PIDGAINS_REM_VERSION_MIN              0.
#define PACKET_RANGE_REM_ROBOT_PIDGAINS_REM_VERSION_MAX              15.
#define PACKET_RANGE_REM_ROBOT_PIDGAINS_REM_VERSION_N_BITS           4
#define PACKET_RANGE_REM_ROBOT_PIDGAINS_ID_MIN                       0.
#define PACKET_RANGE_REM_ROBOT_PIDGAINS_ID_MAX                       15.
#define PACKET_RANGE_REM_ROBOT_PIDGAINS_ID_N_BITS                    4
#define PACKET_RANGE_REM_ROBOT_PIDGAINS_PBODY_X_MIN                  0.
#define PACKET_RANGE_REM_ROBOT_PIDGAINS_PBODY_X_MAX                  40.
#define PACKET_RANGE_REM_ROBOT_PIDGAINS_PBODY_X_N_BITS               16
#define PACKET_RANGE_REM_ROBOT_PIDGAINS_IBODY_X_MIN                  0.
#define PACKET_RANGE_REM_ROBOT_PIDGAINS_IBODY_X_MAX                  20.
#define PACKET_RANGE_REM_ROBOT_PIDGAINS_IBODY_X_N_BITS               16
#define PACKET_RANGE_REM_ROBOT_PIDGAINS_DBODY_X_MIN                  0.
#define PACKET_RANGE_REM_ROBOT_PIDGAINS_DBODY_X_MAX                  10.
#define PACKET_RANGE_REM_ROBOT_PIDGAINS_DBODY_X_N_BITS               16
#define PACKET_RANGE_REM_ROBOT_PIDGAINS_PBODY_Y_MIN                  0.
#define PACKET_RANGE_REM_ROBOT_PIDGAINS_PBODY_Y_MAX                  40.
#define PACKET_RANGE_REM_ROBOT_PIDGAINS_PBODY_Y_N_BITS               16
#define PACKET_RANGE_REM_ROBOT_PIDGAINS_IBODY_Y_MIN                  0.
#define PACKET_RANGE_REM_ROBOT_PIDGAINS_IBODY_Y_MAX                  20.
#define PACKET_RANGE_REM_ROBOT_PIDGAINS_IBODY_Y_N_BITS               16
#define PACKET_RANGE_REM_ROBOT_PIDGAINS_DBODY_Y_MIN                  0.
#define PACKET_RANGE_REM_ROBOT_PIDGAINS_DBODY_Y_MAX                  10.
#define PACKET_RANGE_REM_ROBOT_PIDGAINS_DBODY_Y_N_BITS               16
#define PACKET_RANGE_REM_ROBOT_PIDGAINS_PBODY_YAW_MIN                0.
#define PACKET_RANGE_REM_ROBOT_PIDGAINS_PBODY_YAW_MAX                40.
#define PACKET_RANGE_REM_ROBOT_PIDGAINS_PBODY_YAW_N_BITS             16
#define PACKET_RANGE_REM_ROBOT_PIDGAINS_IBODY_YAW_MIN                0.
#define PACKET_RANGE_REM_ROBOT_PIDGAINS_IBODY_YAW_MAX                20.
#define PACKET_RANGE_REM_ROBOT_PIDGAINS_IBODY_YAW_N_BITS             16
#define PACKET_RANGE_REM_ROBOT_PIDGAINS_DBODY_YAW_MIN                0.
#define PACKET_RANGE_REM_ROBOT_PIDGAINS_DBODY_YAW_MAX                10.
#define PACKET_RANGE_REM_ROBOT_PIDGAINS_DBODY_YAW_N_BITS             16
#define PACKET_RANGE_REM_ROBOT_PIDGAINS_PWHEELS_MIN                  0.
#define PACKET_RANGE_REM_ROBOT_PIDGAINS_PWHEELS_MAX                  40.
#define PACKET_RANGE_REM_ROBOT_PIDGAINS_PWHEELS_N_BITS               16
#define PACKET_RANGE_REM_ROBOT_PIDGAINS_IWHEELS_MIN                  0.
#define PACKET_RANGE_REM_ROBOT_PIDGAINS_IWHEELS_MAX                  20.
#define PACKET_RANGE_REM_ROBOT_PIDGAINS_IWHEELS_N_BITS               16
#define PACKET_RANGE_REM_ROBOT_PIDGAINS_DWHEELS_MIN                  0.
#define PACKET_RANGE_REM_ROBOT_PIDGAINS_DWHEELS_MAX                  10.
#define PACKET_RANGE_REM_ROBOT_PIDGAINS_DWHEELS_N_BITS               16

#define PACKET_TYPE_REM_ROBOT_ASSURED_PACKET                         0b11000011 // 195 
#define PACKET_SIZE_REM_ROBOT_ASSURED_PACKET                         4
#define PACKET_RANGE_REM_ROBOT_ASSURED_PACKET_HEADER_MIN             0.
#define PACKET_RANGE_REM_ROBOT_ASSURED_PACKET_HEADER_MAX             255.
#define PACKET_RANGE_REM_ROBOT_ASSURED_PACKET_HEADER_N_BITS          8
#define PACKET_RANGE_REM_ROBOT_ASSURED_PACKET_REM_VERSION_MIN        0.
#define PACKET_RANGE_REM_ROBOT_ASSURED_PACKET_REM_VERSION_MAX        15.
#define PACKET_RANGE_REM_ROBOT_ASSURED_PACKET_REM_VERSION_N_BITS     4
#define PACKET_RANGE_REM_ROBOT_ASSURED_PACKET_ID_MIN                 0.
#define PACKET_RANGE_REM_ROBOT_ASSURED_PACKET_ID_MAX                 15.
#define PACKET_RANGE_REM_ROBOT_ASSURED_PACKET_ID_N_BITS              4
#define PACKET_RANGE_REM_ROBOT_ASSURED_PACKET_SEQUENCE_NUMBER_MIN    0.
#define PACKET_RANGE_REM_ROBOT_ASSURED_PACKET_SEQUENCE_NUMBER_MAX    255.
#define PACKET_RANGE_REM_ROBOT_ASSURED_PACKET_SEQUENCE_NUMBER_N_BITS 8
#define PACKET_RANGE_REM_ROBOT_ASSURED_PACKET_MESSAGE_LENGTH_MIN     0.
#define PACKET_RANGE_REM_ROBOT_ASSURED_PACKET_MESSAGE_LENGTH_MAX     255.
#define PACKET_RANGE_REM_ROBOT_ASSURED_PACKET_MESSAGE_LENGTH_N_BITS  8

#define PACKET_TYPE_REM_ROBOT_ASSURED_ACK                            0b11001100 // 204 
#define PACKET_SIZE_REM_ROBOT_ASSURED_ACK                            3
#define PACKET_RANGE_REM_ROBOT_ASSURED_ACK_HEADER_MIN                0.
#define PACKET_RANGE_REM_ROBOT_ASSURED_ACK_HEADER_MAX                255.
#define PACKET_RANGE_REM_ROBOT_ASSURED_ACK_HEADER_N_BITS             8
#define PACKET_RANGE_REM_ROBOT_ASSURED_ACK_REM_VERSION_MIN           0.
#define PACKET_RANGE_REM_ROBOT_ASSURED_ACK_REM_VERSION_MAX           15.
#define PACKET_RANGE_REM_ROBOT_ASSURED_ACK_REM_VERSION_N_BITS        4
#define PACKET_RANGE_REM_ROBOT_ASSURED_ACK_ID_MIN                    0.
#define PACKET_RANGE_REM_ROBOT_ASSURED_ACK_ID_MAX                    15.
#define PACKET_RANGE_REM_ROBOT_ASSURED_ACK_ID_N_BITS                 4
#define PACKET_RANGE_REM_ROBOT_ASSURED_ACK_SEQUENCE_NUMBER_MIN       0.
#define PACKET_RANGE_REM_ROBOT_ASSURED_ACK_SEQUENCE_NUMBER_MAX       255.
#define PACKET_RANGE_REM_ROBOT_ASSURED_ACK_SEQUENCE_NUMBER_N_BITS    8

#define PACKET_TYPE_REM_SX1280FILLER                                 0b11110000 // 240 
#define PACKET_SIZE_REM_SX1280FILLER                                 6
#define PACKET_RANGE_REM_SX1280FILLER_HEADER_MIN                     0.
#define PACKET_RANGE_REM_SX1280FILLER_HEADER_MAX                     255.
#define PACKET_RANGE_REM_SX1280FILLER_HEADER_N_BITS                  8
#define PACKET_RANGE_REM_SX1280FILLER_REM_VERSION_MIN                0.
#define PACKET_RANGE_REM_SX1280FILLER_REM_VERSION_MAX                15.
#define PACKET_RANGE_REM_SX1280FILLER_REM_VERSION_N_BITS             4
#define PACKET_RANGE_REM_SX1280FILLER_FILLER_BITS_MIN                0.
#define PACKET_RANGE_REM_SX1280FILLER_FILLER_BITS_MAX                68719476735.
#define PACKET_RANGE_REM_SX1280FILLER_FILLER_BITS_N_BITS             36

static uint8_t PACKET_TYPE_TO_SIZE(uint8_t type){
    if(type == PACKET_TYPE_REM_ROBOT_COMMAND                               ) return PACKET_SIZE_REM_ROBOT_COMMAND                               ;
    if(type == PACKET_TYPE_REM_ROBOT_FEEDBACK                              ) return PACKET_SIZE_REM_ROBOT_FEEDBACK                              ;
    if(type == PACKET_TYPE_REM_ROBOT_STATE_INFO                            ) return PACKET_SIZE_REM_ROBOT_STATE_INFO                            ;
    if(type == PACKET_TYPE_REM_ROBOT_BUZZER                                ) return PACKET_SIZE_REM_ROBOT_BUZZER                                ;
    if(type == PACKET_TYPE_REM_BASESTATION_LOG                             ) return PACKET_SIZE_REM_BASESTATION_LOG                             ;
    if(type == PACKET_TYPE_REM_ROBOT_LOG                                   ) return PACKET_SIZE_REM_ROBOT_LOG                                   ;
    if(type == PACKET_TYPE_REM_BASESTATION_GET_CONFIGURATION               ) return PACKET_SIZE_REM_BASESTATION_GET_CONFIGURATION               ;
    if(type == PACKET_TYPE_REM_BASESTATION_CONFIGURATION                   ) return PACKET_SIZE_REM_BASESTATION_CONFIGURATION                   ;
    if(type == PACKET_TYPE_REM_BASESTATION_SET_CONFIGURATION               ) return PACKET_SIZE_REM_BASESTATION_SET_CONFIGURATION               ;
    if(type == PACKET_TYPE_REM_ROBOT_GET_PIDGAINS                          ) return PACKET_SIZE_REM_ROBOT_GET_PIDGAINS                          ;
    if(type == PACKET_TYPE_REM_ROBOT_PIDGAINS                              ) return PACKET_SIZE_REM_ROBOT_PIDGAINS                              ;
    if(type == PACKET_TYPE_REM_ROBOT_ASSURED_PACKET                        ) return PACKET_SIZE_REM_ROBOT_ASSURED_PACKET                        ;
    if(type == PACKET_TYPE_REM_ROBOT_ASSURED_ACK                           ) return PACKET_SIZE_REM_ROBOT_ASSURED_ACK                           ;
    if(type == PACKET_TYPE_REM_SX1280FILLER                                ) return PACKET_SIZE_REM_SX1280FILLER                                ;
    return 0;
}

#endif /*__BASETYPES_H*/