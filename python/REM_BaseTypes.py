# AUTOGENERATED. Run generator/main.py to regenerate
# Warning : Check the unicode table before assigning a byte, to make sure that the byte isn't used for anything special : https://unicode-table.com/
# For example, don't use the following bytes
# 0b00000000 : The null-terminator, used to signal the end of strings / arrays / etc.
# 0b00001010 : The byte for newline, used for line termination.

from .REM_RobotCommand                         import REM_RobotCommand
from .REM_RobotFeedback                        import REM_RobotFeedback
from .REM_RobotStateInfo                       import REM_RobotStateInfo
from .REM_RobotBuzzer                          import REM_RobotBuzzer
from .REM_BasestationLog                       import REM_BasestationLog
from .REM_RobotLog                             import REM_RobotLog
from .REM_BasestationGetConfiguration          import REM_BasestationGetConfiguration
from .REM_BasestationConfiguration             import REM_BasestationConfiguration
from .REM_BasestationSetConfiguration          import REM_BasestationSetConfiguration
from .REM_RobotGetPIDGains                     import REM_RobotGetPIDGains
from .REM_RobotPIDGains                        import REM_RobotPIDGains
from .REM_RobotSetPIDGains                     import REM_RobotSetPIDGains
from .REM_RobotAssuredPacket                   import REM_RobotAssuredPacket
from .REM_RobotAssuredAck                      import REM_RobotAssuredAck
from .REM_SX1280Filler                         import REM_SX1280Filler

LOCAL_REM_VERSION = 10

PACKET_TYPE_REM_ROBOT_COMMAND                                = 0b00001111 # 15 
PACKET_SIZE_REM_ROBOT_COMMAND                                = 14
PACKET_RANGE_REM_ROBOT_COMMAND_HEADER_MIN                    = 0.
PACKET_RANGE_REM_ROBOT_COMMAND_HEADER_MAX                    = 255.
PACKET_RANGE_REM_ROBOT_COMMAND_HEADER_N_BITS                 = 8
PACKET_RANGE_REM_ROBOT_COMMAND_REM_VERSION_MIN               = 0.
PACKET_RANGE_REM_ROBOT_COMMAND_REM_VERSION_MAX               = 15.
PACKET_RANGE_REM_ROBOT_COMMAND_REM_VERSION_N_BITS            = 4
PACKET_RANGE_REM_ROBOT_COMMAND_ID_MIN                        = 0.
PACKET_RANGE_REM_ROBOT_COMMAND_ID_MAX                        = 15.
PACKET_RANGE_REM_ROBOT_COMMAND_ID_N_BITS                     = 4
PACKET_RANGE_REM_ROBOT_COMMAND_MESSAGE_ID_MIN                = 0.
PACKET_RANGE_REM_ROBOT_COMMAND_MESSAGE_ID_MAX                = 15.
PACKET_RANGE_REM_ROBOT_COMMAND_MESSAGE_ID_N_BITS             = 4
PACKET_RANGE_REM_ROBOT_COMMAND_DO_KICK_MIN                   = 0.
PACKET_RANGE_REM_ROBOT_COMMAND_DO_KICK_MAX                   = 1.
PACKET_RANGE_REM_ROBOT_COMMAND_DO_KICK_N_BITS                = 1
PACKET_RANGE_REM_ROBOT_COMMAND_DO_CHIP_MIN                   = 0.
PACKET_RANGE_REM_ROBOT_COMMAND_DO_CHIP_MAX                   = 1.
PACKET_RANGE_REM_ROBOT_COMMAND_DO_CHIP_N_BITS                = 1
PACKET_RANGE_REM_ROBOT_COMMAND_DO_FORCE_MIN                  = 0.
PACKET_RANGE_REM_ROBOT_COMMAND_DO_FORCE_MAX                  = 1.
PACKET_RANGE_REM_ROBOT_COMMAND_DO_FORCE_N_BITS               = 1
PACKET_RANGE_REM_ROBOT_COMMAND_USE_CAMERA_ANGLE_MIN          = 0.
PACKET_RANGE_REM_ROBOT_COMMAND_USE_CAMERA_ANGLE_MAX          = 1.
PACKET_RANGE_REM_ROBOT_COMMAND_USE_CAMERA_ANGLE_N_BITS       = 1
PACKET_RANGE_REM_ROBOT_COMMAND_RHO_MIN                       = 0.
PACKET_RANGE_REM_ROBOT_COMMAND_RHO_MAX                       = 8.
PACKET_RANGE_REM_ROBOT_COMMAND_RHO_N_BITS                    = 16
PACKET_RANGE_REM_ROBOT_COMMAND_THETA_MIN                     = -3.1415926535897931
PACKET_RANGE_REM_ROBOT_COMMAND_THETA_MAX                     = 3.1415926535897931
PACKET_RANGE_REM_ROBOT_COMMAND_THETA_N_BITS                  = 16
PACKET_RANGE_REM_ROBOT_COMMAND_ANGLE_MIN                     = -3.1415926535897931
PACKET_RANGE_REM_ROBOT_COMMAND_ANGLE_MAX                     = 3.1415926535897931
PACKET_RANGE_REM_ROBOT_COMMAND_ANGLE_N_BITS                  = 16
PACKET_RANGE_REM_ROBOT_COMMAND_ANGULAR_VELOCITY_MIN          = -12.5663706143591725
PACKET_RANGE_REM_ROBOT_COMMAND_ANGULAR_VELOCITY_MAX          = 12.5663706143591725
PACKET_RANGE_REM_ROBOT_COMMAND_ANGULAR_VELOCITY_N_BITS       = 16
PACKET_RANGE_REM_ROBOT_COMMAND_CAMERA_ANGLE_MIN              = -3.1415926535897931
PACKET_RANGE_REM_ROBOT_COMMAND_CAMERA_ANGLE_MAX              = 3.1415926535897931
PACKET_RANGE_REM_ROBOT_COMMAND_CAMERA_ANGLE_N_BITS           = 16
PACKET_RANGE_REM_ROBOT_COMMAND_DRIBBLER_MIN                  = 0.
PACKET_RANGE_REM_ROBOT_COMMAND_DRIBBLER_MAX                  = 1.
PACKET_RANGE_REM_ROBOT_COMMAND_DRIBBLER_N_BITS               = 3
PACKET_RANGE_REM_ROBOT_COMMAND_KICK_CHIP_POWER_MIN           = 0.
PACKET_RANGE_REM_ROBOT_COMMAND_KICK_CHIP_POWER_MAX           = 6.5
PACKET_RANGE_REM_ROBOT_COMMAND_KICK_CHIP_POWER_N_BITS        = 3
PACKET_RANGE_REM_ROBOT_COMMAND_ANGULAR_CONTROL_MIN           = 0.
PACKET_RANGE_REM_ROBOT_COMMAND_ANGULAR_CONTROL_MAX           = 1.
PACKET_RANGE_REM_ROBOT_COMMAND_ANGULAR_CONTROL_N_BITS        = 1
PACKET_RANGE_REM_ROBOT_COMMAND_FEEDBACK_MIN                  = 0.
PACKET_RANGE_REM_ROBOT_COMMAND_FEEDBACK_MAX                  = 1.
PACKET_RANGE_REM_ROBOT_COMMAND_FEEDBACK_N_BITS               = 1

PACKET_TYPE_REM_ROBOT_FEEDBACK                               = 0b00110011 # 51 
PACKET_SIZE_REM_ROBOT_FEEDBACK                               = 12
PACKET_RANGE_REM_ROBOT_FEEDBACK_HEADER_MIN                   = 0.
PACKET_RANGE_REM_ROBOT_FEEDBACK_HEADER_MAX                   = 255.
PACKET_RANGE_REM_ROBOT_FEEDBACK_HEADER_N_BITS                = 8
PACKET_RANGE_REM_ROBOT_FEEDBACK_REM_VERSION_MIN              = 0.
PACKET_RANGE_REM_ROBOT_FEEDBACK_REM_VERSION_MAX              = 15.
PACKET_RANGE_REM_ROBOT_FEEDBACK_REM_VERSION_N_BITS           = 4
PACKET_RANGE_REM_ROBOT_FEEDBACK_ID_MIN                       = 0.
PACKET_RANGE_REM_ROBOT_FEEDBACK_ID_MAX                       = 15.
PACKET_RANGE_REM_ROBOT_FEEDBACK_ID_N_BITS                    = 4
PACKET_RANGE_REM_ROBOT_FEEDBACK_MESSAGE_ID_MIN               = 0.
PACKET_RANGE_REM_ROBOT_FEEDBACK_MESSAGE_ID_MAX               = 15.
PACKET_RANGE_REM_ROBOT_FEEDBACK_MESSAGE_ID_N_BITS            = 4
PACKET_RANGE_REM_ROBOT_FEEDBACK_BATTERY_LEVEL_MIN            = 0.
PACKET_RANGE_REM_ROBOT_FEEDBACK_BATTERY_LEVEL_MAX            = 15.
PACKET_RANGE_REM_ROBOT_FEEDBACK_BATTERY_LEVEL_N_BITS         = 4
PACKET_RANGE_REM_ROBOT_FEEDBACK_XSENS_CALIBRATED_MIN         = 0.
PACKET_RANGE_REM_ROBOT_FEEDBACK_XSENS_CALIBRATED_MAX         = 1.
PACKET_RANGE_REM_ROBOT_FEEDBACK_XSENS_CALIBRATED_N_BITS      = 1
PACKET_RANGE_REM_ROBOT_FEEDBACK_BALL_SENSOR_WORKING_MIN      = 0.
PACKET_RANGE_REM_ROBOT_FEEDBACK_BALL_SENSOR_WORKING_MAX      = 1.
PACKET_RANGE_REM_ROBOT_FEEDBACK_BALL_SENSOR_WORKING_N_BITS   = 1
PACKET_RANGE_REM_ROBOT_FEEDBACK_HAS_BALL_MIN                 = 0.
PACKET_RANGE_REM_ROBOT_FEEDBACK_HAS_BALL_MAX                 = 1.
PACKET_RANGE_REM_ROBOT_FEEDBACK_HAS_BALL_N_BITS              = 1
PACKET_RANGE_REM_ROBOT_FEEDBACK_CAPACITOR_CHARGED_MIN        = 0.
PACKET_RANGE_REM_ROBOT_FEEDBACK_CAPACITOR_CHARGED_MAX        = 1.
PACKET_RANGE_REM_ROBOT_FEEDBACK_CAPACITOR_CHARGED_N_BITS     = 1
PACKET_RANGE_REM_ROBOT_FEEDBACK_BALL_POS_MIN                 = -0.5
PACKET_RANGE_REM_ROBOT_FEEDBACK_BALL_POS_MAX                 = 0.5
PACKET_RANGE_REM_ROBOT_FEEDBACK_BALL_POS_N_BITS              = 4
PACKET_RANGE_REM_ROBOT_FEEDBACK_RHO_MIN                      = 0.
PACKET_RANGE_REM_ROBOT_FEEDBACK_RHO_MAX                      = 8.
PACKET_RANGE_REM_ROBOT_FEEDBACK_RHO_N_BITS                   = 16
PACKET_RANGE_REM_ROBOT_FEEDBACK_THETA_MIN                    = -3.1415926535897931
PACKET_RANGE_REM_ROBOT_FEEDBACK_THETA_MAX                    = 3.1415926535897931
PACKET_RANGE_REM_ROBOT_FEEDBACK_THETA_N_BITS                 = 16
PACKET_RANGE_REM_ROBOT_FEEDBACK_ANGLE_MIN                    = -3.1415926535897931
PACKET_RANGE_REM_ROBOT_FEEDBACK_ANGLE_MAX                    = 3.1415926535897931
PACKET_RANGE_REM_ROBOT_FEEDBACK_ANGLE_N_BITS                 = 16
PACKET_RANGE_REM_ROBOT_FEEDBACK_WHEEL_LOCKED_MIN             = 0.
PACKET_RANGE_REM_ROBOT_FEEDBACK_WHEEL_LOCKED_MAX             = 15.
PACKET_RANGE_REM_ROBOT_FEEDBACK_WHEEL_LOCKED_N_BITS          = 4
PACKET_RANGE_REM_ROBOT_FEEDBACK_WHEEL_BRAKING_MIN            = 0.
PACKET_RANGE_REM_ROBOT_FEEDBACK_WHEEL_BRAKING_MAX            = 15.
PACKET_RANGE_REM_ROBOT_FEEDBACK_WHEEL_BRAKING_N_BITS         = 4
PACKET_RANGE_REM_ROBOT_FEEDBACK_RSSI_MIN                     = 0.
PACKET_RANGE_REM_ROBOT_FEEDBACK_RSSI_MAX                     = 255.
PACKET_RANGE_REM_ROBOT_FEEDBACK_RSSI_N_BITS                  = 8

PACKET_TYPE_REM_ROBOT_STATE_INFO                             = 0b00111100 # 60 
PACKET_SIZE_REM_ROBOT_STATE_INFO                             = 67
PACKET_RANGE_REM_ROBOT_STATE_INFO_HEADER_MIN                 = 0.
PACKET_RANGE_REM_ROBOT_STATE_INFO_HEADER_MAX                 = 255.
PACKET_RANGE_REM_ROBOT_STATE_INFO_HEADER_N_BITS              = 8
PACKET_RANGE_REM_ROBOT_STATE_INFO_REM_VERSION_MIN            = 0.
PACKET_RANGE_REM_ROBOT_STATE_INFO_REM_VERSION_MAX            = 15.
PACKET_RANGE_REM_ROBOT_STATE_INFO_REM_VERSION_N_BITS         = 4
PACKET_RANGE_REM_ROBOT_STATE_INFO_ID_MIN                     = 0.
PACKET_RANGE_REM_ROBOT_STATE_INFO_ID_MAX                     = 15.
PACKET_RANGE_REM_ROBOT_STATE_INFO_ID_N_BITS                  = 4
PACKET_RANGE_REM_ROBOT_STATE_INFO_MESSAGE_ID_MIN             = 0.
PACKET_RANGE_REM_ROBOT_STATE_INFO_MESSAGE_ID_MAX             = 15.
PACKET_RANGE_REM_ROBOT_STATE_INFO_MESSAGE_ID_N_BITS          = 4
PACKET_RANGE_REM_ROBOT_STATE_INFO_XSENS_ACC1_MIN             = -50000.
PACKET_RANGE_REM_ROBOT_STATE_INFO_XSENS_ACC1_MAX             = 50000.
PACKET_RANGE_REM_ROBOT_STATE_INFO_XSENS_ACC1_N_BITS          = 32
PACKET_RANGE_REM_ROBOT_STATE_INFO_XSENS_ACC2_MIN             = -50000.
PACKET_RANGE_REM_ROBOT_STATE_INFO_XSENS_ACC2_MAX             = 50000.
PACKET_RANGE_REM_ROBOT_STATE_INFO_XSENS_ACC2_N_BITS          = 32
PACKET_RANGE_REM_ROBOT_STATE_INFO_XSENS_YAW_MIN              = -50000.
PACKET_RANGE_REM_ROBOT_STATE_INFO_XSENS_YAW_MAX              = 50000.
PACKET_RANGE_REM_ROBOT_STATE_INFO_XSENS_YAW_N_BITS           = 32
PACKET_RANGE_REM_ROBOT_STATE_INFO_RATE_OF_TURN_MIN           = -50000.
PACKET_RANGE_REM_ROBOT_STATE_INFO_RATE_OF_TURN_MAX           = 50000.
PACKET_RANGE_REM_ROBOT_STATE_INFO_RATE_OF_TURN_N_BITS        = 32
PACKET_RANGE_REM_ROBOT_STATE_INFO_WHEEL_SPEED1_MIN           = -50000.
PACKET_RANGE_REM_ROBOT_STATE_INFO_WHEEL_SPEED1_MAX           = 50000.
PACKET_RANGE_REM_ROBOT_STATE_INFO_WHEEL_SPEED1_N_BITS        = 32
PACKET_RANGE_REM_ROBOT_STATE_INFO_WHEEL_SPEED2_MIN           = -50000.
PACKET_RANGE_REM_ROBOT_STATE_INFO_WHEEL_SPEED2_MAX           = 50000.
PACKET_RANGE_REM_ROBOT_STATE_INFO_WHEEL_SPEED2_N_BITS        = 32
PACKET_RANGE_REM_ROBOT_STATE_INFO_WHEEL_SPEED3_MIN           = -50000.
PACKET_RANGE_REM_ROBOT_STATE_INFO_WHEEL_SPEED3_MAX           = 50000.
PACKET_RANGE_REM_ROBOT_STATE_INFO_WHEEL_SPEED3_N_BITS        = 32
PACKET_RANGE_REM_ROBOT_STATE_INFO_WHEEL_SPEED4_MIN           = -50000.
PACKET_RANGE_REM_ROBOT_STATE_INFO_WHEEL_SPEED4_MAX           = 50000.
PACKET_RANGE_REM_ROBOT_STATE_INFO_WHEEL_SPEED4_N_BITS        = 32
PACKET_RANGE_REM_ROBOT_STATE_INFO_BODY_XINTEGRAL_MIN         = -50000.
PACKET_RANGE_REM_ROBOT_STATE_INFO_BODY_XINTEGRAL_MAX         = 50000.
PACKET_RANGE_REM_ROBOT_STATE_INFO_BODY_XINTEGRAL_N_BITS      = 32
PACKET_RANGE_REM_ROBOT_STATE_INFO_BODY_YINTEGRAL_MIN         = -50000.
PACKET_RANGE_REM_ROBOT_STATE_INFO_BODY_YINTEGRAL_MAX         = 50000.
PACKET_RANGE_REM_ROBOT_STATE_INFO_BODY_YINTEGRAL_N_BITS      = 32
PACKET_RANGE_REM_ROBOT_STATE_INFO_BODY_WINTEGRAL_MIN         = -50000.
PACKET_RANGE_REM_ROBOT_STATE_INFO_BODY_WINTEGRAL_MAX         = 50000.
PACKET_RANGE_REM_ROBOT_STATE_INFO_BODY_WINTEGRAL_N_BITS      = 32
PACKET_RANGE_REM_ROBOT_STATE_INFO_BODY_YAW_INTEGRAL_MIN      = -50000.
PACKET_RANGE_REM_ROBOT_STATE_INFO_BODY_YAW_INTEGRAL_MAX      = 50000.
PACKET_RANGE_REM_ROBOT_STATE_INFO_BODY_YAW_INTEGRAL_N_BITS   = 32
PACKET_RANGE_REM_ROBOT_STATE_INFO_WHEEL1INTEGRAL_MIN         = -50000.
PACKET_RANGE_REM_ROBOT_STATE_INFO_WHEEL1INTEGRAL_MAX         = 50000.
PACKET_RANGE_REM_ROBOT_STATE_INFO_WHEEL1INTEGRAL_N_BITS      = 32
PACKET_RANGE_REM_ROBOT_STATE_INFO_WHEEL2INTEGRAL_MIN         = -50000.
PACKET_RANGE_REM_ROBOT_STATE_INFO_WHEEL2INTEGRAL_MAX         = 50000.
PACKET_RANGE_REM_ROBOT_STATE_INFO_WHEEL2INTEGRAL_N_BITS      = 32
PACKET_RANGE_REM_ROBOT_STATE_INFO_WHEEL3INTEGRAL_MIN         = -50000.
PACKET_RANGE_REM_ROBOT_STATE_INFO_WHEEL3INTEGRAL_MAX         = 50000.
PACKET_RANGE_REM_ROBOT_STATE_INFO_WHEEL3INTEGRAL_N_BITS      = 32
PACKET_RANGE_REM_ROBOT_STATE_INFO_WHEEL4INTEGRAL_MIN         = -50000.
PACKET_RANGE_REM_ROBOT_STATE_INFO_WHEEL4INTEGRAL_MAX         = 50000.
PACKET_RANGE_REM_ROBOT_STATE_INFO_WHEEL4INTEGRAL_N_BITS      = 32

PACKET_TYPE_REM_ROBOT_BUZZER                                 = 0b01010101 # 85 
PACKET_SIZE_REM_ROBOT_BUZZER                                 = 6
PACKET_RANGE_REM_ROBOT_BUZZER_HEADER_MIN                     = 0.
PACKET_RANGE_REM_ROBOT_BUZZER_HEADER_MAX                     = 255.
PACKET_RANGE_REM_ROBOT_BUZZER_HEADER_N_BITS                  = 8
PACKET_RANGE_REM_ROBOT_BUZZER_REM_VERSION_MIN                = 0.
PACKET_RANGE_REM_ROBOT_BUZZER_REM_VERSION_MAX                = 15.
PACKET_RANGE_REM_ROBOT_BUZZER_REM_VERSION_N_BITS             = 4
PACKET_RANGE_REM_ROBOT_BUZZER_ID_MIN                         = 0.
PACKET_RANGE_REM_ROBOT_BUZZER_ID_MAX                         = 15.
PACKET_RANGE_REM_ROBOT_BUZZER_ID_N_BITS                      = 4
PACKET_RANGE_REM_ROBOT_BUZZER_MESSAGE_ID_MIN                 = 0.
PACKET_RANGE_REM_ROBOT_BUZZER_MESSAGE_ID_MAX                 = 15.
PACKET_RANGE_REM_ROBOT_BUZZER_MESSAGE_ID_N_BITS              = 4
PACKET_RANGE_REM_ROBOT_BUZZER_PERIOD_MIN                     = 0.
PACKET_RANGE_REM_ROBOT_BUZZER_PERIOD_MAX                     = 4095.
PACKET_RANGE_REM_ROBOT_BUZZER_PERIOD_N_BITS                  = 12
PACKET_RANGE_REM_ROBOT_BUZZER_DURATION_MIN                   = 0.
PACKET_RANGE_REM_ROBOT_BUZZER_DURATION_MAX                   = 5.
PACKET_RANGE_REM_ROBOT_BUZZER_DURATION_N_BITS                = 16

PACKET_TYPE_REM_BASESTATION_LOG                              = 0b01011010 # 90 
PACKET_SIZE_REM_BASESTATION_LOG                              = 3
PACKET_RANGE_REM_BASESTATION_LOG_HEADER_MIN                  = 0.
PACKET_RANGE_REM_BASESTATION_LOG_HEADER_MAX                  = 255.
PACKET_RANGE_REM_BASESTATION_LOG_HEADER_N_BITS               = 8
PACKET_RANGE_REM_BASESTATION_LOG_REM_VERSION_MIN             = 0.
PACKET_RANGE_REM_BASESTATION_LOG_REM_VERSION_MAX             = 15.
PACKET_RANGE_REM_BASESTATION_LOG_REM_VERSION_N_BITS          = 4
PACKET_RANGE_REM_BASESTATION_LOG_MESSAGE_LENGTH_MIN          = 0.
PACKET_RANGE_REM_BASESTATION_LOG_MESSAGE_LENGTH_MAX          = 255.
PACKET_RANGE_REM_BASESTATION_LOG_MESSAGE_LENGTH_N_BITS       = 8

PACKET_TYPE_REM_ROBOT_LOG                                    = 0b01100110 # 102 
PACKET_SIZE_REM_ROBOT_LOG                                    = 3
PACKET_RANGE_REM_ROBOT_LOG_HEADER_MIN                        = 0.
PACKET_RANGE_REM_ROBOT_LOG_HEADER_MAX                        = 255.
PACKET_RANGE_REM_ROBOT_LOG_HEADER_N_BITS                     = 8
PACKET_RANGE_REM_ROBOT_LOG_REM_VERSION_MIN                   = 0.
PACKET_RANGE_REM_ROBOT_LOG_REM_VERSION_MAX                   = 15.
PACKET_RANGE_REM_ROBOT_LOG_REM_VERSION_N_BITS                = 4
PACKET_RANGE_REM_ROBOT_LOG_ID_MIN                            = 0.
PACKET_RANGE_REM_ROBOT_LOG_ID_MAX                            = 15.
PACKET_RANGE_REM_ROBOT_LOG_ID_N_BITS                         = 4
PACKET_RANGE_REM_ROBOT_LOG_MESSAGE_LENGTH_MIN                = 0.
PACKET_RANGE_REM_ROBOT_LOG_MESSAGE_LENGTH_MAX                = 255.
PACKET_RANGE_REM_ROBOT_LOG_MESSAGE_LENGTH_N_BITS             = 8

PACKET_TYPE_REM_BASESTATION_GET_CONFIGURATION                = 0b01101001 # 105 
PACKET_SIZE_REM_BASESTATION_GET_CONFIGURATION                = 2
PACKET_RANGE_REM_BASESTATION_GET_CONFIGURATION_HEADER_MIN    = 0.
PACKET_RANGE_REM_BASESTATION_GET_CONFIGURATION_HEADER_MAX    = 255.
PACKET_RANGE_REM_BASESTATION_GET_CONFIGURATION_HEADER_N_BITS = 8
PACKET_RANGE_REM_BASESTATION_GET_CONFIGURATION_REM_VERSION_MIN = 0.
PACKET_RANGE_REM_BASESTATION_GET_CONFIGURATION_REM_VERSION_MAX = 15.
PACKET_RANGE_REM_BASESTATION_GET_CONFIGURATION_REM_VERSION_N_BITS = 4

PACKET_TYPE_REM_BASESTATION_CONFIGURATION                    = 0b10010110 # 150 
PACKET_SIZE_REM_BASESTATION_CONFIGURATION                    = 2
PACKET_RANGE_REM_BASESTATION_CONFIGURATION_HEADER_MIN        = 0.
PACKET_RANGE_REM_BASESTATION_CONFIGURATION_HEADER_MAX        = 255.
PACKET_RANGE_REM_BASESTATION_CONFIGURATION_HEADER_N_BITS     = 8
PACKET_RANGE_REM_BASESTATION_CONFIGURATION_REM_VERSION_MIN   = 0.
PACKET_RANGE_REM_BASESTATION_CONFIGURATION_REM_VERSION_MAX   = 15.
PACKET_RANGE_REM_BASESTATION_CONFIGURATION_REM_VERSION_N_BITS = 4
PACKET_RANGE_REM_BASESTATION_CONFIGURATION_CHANNEL_MIN       = 0.
PACKET_RANGE_REM_BASESTATION_CONFIGURATION_CHANNEL_MAX       = 1.
PACKET_RANGE_REM_BASESTATION_CONFIGURATION_CHANNEL_N_BITS    = 1

PACKET_TYPE_REM_BASESTATION_SET_CONFIGURATION                = 0b10011001 # 153 
PACKET_SIZE_REM_BASESTATION_SET_CONFIGURATION                = 2
PACKET_RANGE_REM_BASESTATION_SET_CONFIGURATION_HEADER_MIN    = 0.
PACKET_RANGE_REM_BASESTATION_SET_CONFIGURATION_HEADER_MAX    = 255.
PACKET_RANGE_REM_BASESTATION_SET_CONFIGURATION_HEADER_N_BITS = 8
PACKET_RANGE_REM_BASESTATION_SET_CONFIGURATION_REM_VERSION_MIN = 0.
PACKET_RANGE_REM_BASESTATION_SET_CONFIGURATION_REM_VERSION_MAX = 15.
PACKET_RANGE_REM_BASESTATION_SET_CONFIGURATION_REM_VERSION_N_BITS = 4
PACKET_RANGE_REM_BASESTATION_SET_CONFIGURATION_CHANNEL_MIN   = 0.
PACKET_RANGE_REM_BASESTATION_SET_CONFIGURATION_CHANNEL_MAX   = 1.
PACKET_RANGE_REM_BASESTATION_SET_CONFIGURATION_CHANNEL_N_BITS = 1

PACKET_TYPE_REM_ROBOT_GET_PIDGAINS                           = 0b10100101 # 165 
PACKET_SIZE_REM_ROBOT_GET_PIDGAINS                           = 2
PACKET_RANGE_REM_ROBOT_GET_PIDGAINS_HEADER_MIN               = 0.
PACKET_RANGE_REM_ROBOT_GET_PIDGAINS_HEADER_MAX               = 255.
PACKET_RANGE_REM_ROBOT_GET_PIDGAINS_HEADER_N_BITS            = 8
PACKET_RANGE_REM_ROBOT_GET_PIDGAINS_REM_VERSION_MIN          = 0.
PACKET_RANGE_REM_ROBOT_GET_PIDGAINS_REM_VERSION_MAX          = 15.
PACKET_RANGE_REM_ROBOT_GET_PIDGAINS_REM_VERSION_N_BITS       = 4
PACKET_RANGE_REM_ROBOT_GET_PIDGAINS_ID_MIN                   = 0.
PACKET_RANGE_REM_ROBOT_GET_PIDGAINS_ID_MAX                   = 15.
PACKET_RANGE_REM_ROBOT_GET_PIDGAINS_ID_N_BITS                = 4

PACKET_TYPE_REM_ROBOT_PIDGAINS                               = 0b10101010 # 170 
PACKET_SIZE_REM_ROBOT_PIDGAINS                               = 32
PACKET_RANGE_REM_ROBOT_PIDGAINS_HEADER_MIN                   = 0.
PACKET_RANGE_REM_ROBOT_PIDGAINS_HEADER_MAX                   = 255.
PACKET_RANGE_REM_ROBOT_PIDGAINS_HEADER_N_BITS                = 8
PACKET_RANGE_REM_ROBOT_PIDGAINS_REM_VERSION_MIN              = 0.
PACKET_RANGE_REM_ROBOT_PIDGAINS_REM_VERSION_MAX              = 15.
PACKET_RANGE_REM_ROBOT_PIDGAINS_REM_VERSION_N_BITS           = 4
PACKET_RANGE_REM_ROBOT_PIDGAINS_ID_MIN                       = 0.
PACKET_RANGE_REM_ROBOT_PIDGAINS_ID_MAX                       = 15.
PACKET_RANGE_REM_ROBOT_PIDGAINS_ID_N_BITS                    = 4
PACKET_RANGE_REM_ROBOT_PIDGAINS_PBODY_X_MIN                  = 0.
PACKET_RANGE_REM_ROBOT_PIDGAINS_PBODY_X_MAX                  = 40.
PACKET_RANGE_REM_ROBOT_PIDGAINS_PBODY_X_N_BITS               = 16
PACKET_RANGE_REM_ROBOT_PIDGAINS_IBODY_X_MIN                  = 0.
PACKET_RANGE_REM_ROBOT_PIDGAINS_IBODY_X_MAX                  = 20.
PACKET_RANGE_REM_ROBOT_PIDGAINS_IBODY_X_N_BITS               = 16
PACKET_RANGE_REM_ROBOT_PIDGAINS_DBODY_X_MIN                  = 0.
PACKET_RANGE_REM_ROBOT_PIDGAINS_DBODY_X_MAX                  = 10.
PACKET_RANGE_REM_ROBOT_PIDGAINS_DBODY_X_N_BITS               = 16
PACKET_RANGE_REM_ROBOT_PIDGAINS_PBODY_Y_MIN                  = 0.
PACKET_RANGE_REM_ROBOT_PIDGAINS_PBODY_Y_MAX                  = 40.
PACKET_RANGE_REM_ROBOT_PIDGAINS_PBODY_Y_N_BITS               = 16
PACKET_RANGE_REM_ROBOT_PIDGAINS_IBODY_Y_MIN                  = 0.
PACKET_RANGE_REM_ROBOT_PIDGAINS_IBODY_Y_MAX                  = 20.
PACKET_RANGE_REM_ROBOT_PIDGAINS_IBODY_Y_N_BITS               = 16
PACKET_RANGE_REM_ROBOT_PIDGAINS_DBODY_Y_MIN                  = 0.
PACKET_RANGE_REM_ROBOT_PIDGAINS_DBODY_Y_MAX                  = 10.
PACKET_RANGE_REM_ROBOT_PIDGAINS_DBODY_Y_N_BITS               = 16
PACKET_RANGE_REM_ROBOT_PIDGAINS_PBODY_W_MIN                  = 0.
PACKET_RANGE_REM_ROBOT_PIDGAINS_PBODY_W_MAX                  = 40.
PACKET_RANGE_REM_ROBOT_PIDGAINS_PBODY_W_N_BITS               = 16
PACKET_RANGE_REM_ROBOT_PIDGAINS_IBODY_W_MIN                  = 0.
PACKET_RANGE_REM_ROBOT_PIDGAINS_IBODY_W_MAX                  = 20.
PACKET_RANGE_REM_ROBOT_PIDGAINS_IBODY_W_N_BITS               = 16
PACKET_RANGE_REM_ROBOT_PIDGAINS_DBODY_W_MIN                  = 0.
PACKET_RANGE_REM_ROBOT_PIDGAINS_DBODY_W_MAX                  = 10.
PACKET_RANGE_REM_ROBOT_PIDGAINS_DBODY_W_N_BITS               = 16
PACKET_RANGE_REM_ROBOT_PIDGAINS_PBODY_YAW_MIN                = 0.
PACKET_RANGE_REM_ROBOT_PIDGAINS_PBODY_YAW_MAX                = 40.
PACKET_RANGE_REM_ROBOT_PIDGAINS_PBODY_YAW_N_BITS             = 16
PACKET_RANGE_REM_ROBOT_PIDGAINS_IBODY_YAW_MIN                = 0.
PACKET_RANGE_REM_ROBOT_PIDGAINS_IBODY_YAW_MAX                = 20.
PACKET_RANGE_REM_ROBOT_PIDGAINS_IBODY_YAW_N_BITS             = 16
PACKET_RANGE_REM_ROBOT_PIDGAINS_DBODY_YAW_MIN                = 0.
PACKET_RANGE_REM_ROBOT_PIDGAINS_DBODY_YAW_MAX                = 10.
PACKET_RANGE_REM_ROBOT_PIDGAINS_DBODY_YAW_N_BITS             = 16
PACKET_RANGE_REM_ROBOT_PIDGAINS_PWHEELS_MIN                  = 0.
PACKET_RANGE_REM_ROBOT_PIDGAINS_PWHEELS_MAX                  = 40.
PACKET_RANGE_REM_ROBOT_PIDGAINS_PWHEELS_N_BITS               = 16
PACKET_RANGE_REM_ROBOT_PIDGAINS_IWHEELS_MIN                  = 0.
PACKET_RANGE_REM_ROBOT_PIDGAINS_IWHEELS_MAX                  = 20.
PACKET_RANGE_REM_ROBOT_PIDGAINS_IWHEELS_N_BITS               = 16
PACKET_RANGE_REM_ROBOT_PIDGAINS_DWHEELS_MIN                  = 0.
PACKET_RANGE_REM_ROBOT_PIDGAINS_DWHEELS_MAX                  = 10.
PACKET_RANGE_REM_ROBOT_PIDGAINS_DWHEELS_N_BITS               = 16

PACKET_TYPE_REM_ROBOT_SET_PIDGAINS                           = 0b11000011 # 195 
PACKET_SIZE_REM_ROBOT_SET_PIDGAINS                           = 32
PACKET_RANGE_REM_ROBOT_SET_PIDGAINS_HEADER_MIN               = 0.
PACKET_RANGE_REM_ROBOT_SET_PIDGAINS_HEADER_MAX               = 255.
PACKET_RANGE_REM_ROBOT_SET_PIDGAINS_HEADER_N_BITS            = 8
PACKET_RANGE_REM_ROBOT_SET_PIDGAINS_REM_VERSION_MIN          = 0.
PACKET_RANGE_REM_ROBOT_SET_PIDGAINS_REM_VERSION_MAX          = 15.
PACKET_RANGE_REM_ROBOT_SET_PIDGAINS_REM_VERSION_N_BITS       = 4
PACKET_RANGE_REM_ROBOT_SET_PIDGAINS_ID_MIN                   = 0.
PACKET_RANGE_REM_ROBOT_SET_PIDGAINS_ID_MAX                   = 15.
PACKET_RANGE_REM_ROBOT_SET_PIDGAINS_ID_N_BITS                = 4
PACKET_RANGE_REM_ROBOT_SET_PIDGAINS_PBODY_X_MIN              = 0.
PACKET_RANGE_REM_ROBOT_SET_PIDGAINS_PBODY_X_MAX              = 40.
PACKET_RANGE_REM_ROBOT_SET_PIDGAINS_PBODY_X_N_BITS           = 16
PACKET_RANGE_REM_ROBOT_SET_PIDGAINS_IBODY_X_MIN              = 0.
PACKET_RANGE_REM_ROBOT_SET_PIDGAINS_IBODY_X_MAX              = 20.
PACKET_RANGE_REM_ROBOT_SET_PIDGAINS_IBODY_X_N_BITS           = 16
PACKET_RANGE_REM_ROBOT_SET_PIDGAINS_DBODY_X_MIN              = 0.
PACKET_RANGE_REM_ROBOT_SET_PIDGAINS_DBODY_X_MAX              = 10.
PACKET_RANGE_REM_ROBOT_SET_PIDGAINS_DBODY_X_N_BITS           = 16
PACKET_RANGE_REM_ROBOT_SET_PIDGAINS_PBODY_Y_MIN              = 0.
PACKET_RANGE_REM_ROBOT_SET_PIDGAINS_PBODY_Y_MAX              = 40.
PACKET_RANGE_REM_ROBOT_SET_PIDGAINS_PBODY_Y_N_BITS           = 16
PACKET_RANGE_REM_ROBOT_SET_PIDGAINS_IBODY_Y_MIN              = 0.
PACKET_RANGE_REM_ROBOT_SET_PIDGAINS_IBODY_Y_MAX              = 20.
PACKET_RANGE_REM_ROBOT_SET_PIDGAINS_IBODY_Y_N_BITS           = 16
PACKET_RANGE_REM_ROBOT_SET_PIDGAINS_DBODY_Y_MIN              = 0.
PACKET_RANGE_REM_ROBOT_SET_PIDGAINS_DBODY_Y_MAX              = 10.
PACKET_RANGE_REM_ROBOT_SET_PIDGAINS_DBODY_Y_N_BITS           = 16
PACKET_RANGE_REM_ROBOT_SET_PIDGAINS_PBODY_W_MIN              = 0.
PACKET_RANGE_REM_ROBOT_SET_PIDGAINS_PBODY_W_MAX              = 40.
PACKET_RANGE_REM_ROBOT_SET_PIDGAINS_PBODY_W_N_BITS           = 16
PACKET_RANGE_REM_ROBOT_SET_PIDGAINS_IBODY_W_MIN              = 0.
PACKET_RANGE_REM_ROBOT_SET_PIDGAINS_IBODY_W_MAX              = 20.
PACKET_RANGE_REM_ROBOT_SET_PIDGAINS_IBODY_W_N_BITS           = 16
PACKET_RANGE_REM_ROBOT_SET_PIDGAINS_DBODY_W_MIN              = 0.
PACKET_RANGE_REM_ROBOT_SET_PIDGAINS_DBODY_W_MAX              = 10.
PACKET_RANGE_REM_ROBOT_SET_PIDGAINS_DBODY_W_N_BITS           = 16
PACKET_RANGE_REM_ROBOT_SET_PIDGAINS_PBODY_YAW_MIN            = 0.
PACKET_RANGE_REM_ROBOT_SET_PIDGAINS_PBODY_YAW_MAX            = 40.
PACKET_RANGE_REM_ROBOT_SET_PIDGAINS_PBODY_YAW_N_BITS         = 16
PACKET_RANGE_REM_ROBOT_SET_PIDGAINS_IBODY_YAW_MIN            = 0.
PACKET_RANGE_REM_ROBOT_SET_PIDGAINS_IBODY_YAW_MAX            = 20.
PACKET_RANGE_REM_ROBOT_SET_PIDGAINS_IBODY_YAW_N_BITS         = 16
PACKET_RANGE_REM_ROBOT_SET_PIDGAINS_DBODY_YAW_MIN            = 0.
PACKET_RANGE_REM_ROBOT_SET_PIDGAINS_DBODY_YAW_MAX            = 10.
PACKET_RANGE_REM_ROBOT_SET_PIDGAINS_DBODY_YAW_N_BITS         = 16
PACKET_RANGE_REM_ROBOT_SET_PIDGAINS_PWHEELS_MIN              = 0.
PACKET_RANGE_REM_ROBOT_SET_PIDGAINS_PWHEELS_MAX              = 40.
PACKET_RANGE_REM_ROBOT_SET_PIDGAINS_PWHEELS_N_BITS           = 16
PACKET_RANGE_REM_ROBOT_SET_PIDGAINS_IWHEELS_MIN              = 0.
PACKET_RANGE_REM_ROBOT_SET_PIDGAINS_IWHEELS_MAX              = 20.
PACKET_RANGE_REM_ROBOT_SET_PIDGAINS_IWHEELS_N_BITS           = 16
PACKET_RANGE_REM_ROBOT_SET_PIDGAINS_DWHEELS_MIN              = 0.
PACKET_RANGE_REM_ROBOT_SET_PIDGAINS_DWHEELS_MAX              = 10.
PACKET_RANGE_REM_ROBOT_SET_PIDGAINS_DWHEELS_N_BITS           = 16

PACKET_TYPE_REM_ROBOT_ASSURED_PACKET                         = 0b11001100 # 204 
PACKET_SIZE_REM_ROBOT_ASSURED_PACKET                         = 4
PACKET_RANGE_REM_ROBOT_ASSURED_PACKET_HEADER_MIN             = 0.
PACKET_RANGE_REM_ROBOT_ASSURED_PACKET_HEADER_MAX             = 255.
PACKET_RANGE_REM_ROBOT_ASSURED_PACKET_HEADER_N_BITS          = 8
PACKET_RANGE_REM_ROBOT_ASSURED_PACKET_REM_VERSION_MIN        = 0.
PACKET_RANGE_REM_ROBOT_ASSURED_PACKET_REM_VERSION_MAX        = 15.
PACKET_RANGE_REM_ROBOT_ASSURED_PACKET_REM_VERSION_N_BITS     = 4
PACKET_RANGE_REM_ROBOT_ASSURED_PACKET_ID_MIN                 = 0.
PACKET_RANGE_REM_ROBOT_ASSURED_PACKET_ID_MAX                 = 15.
PACKET_RANGE_REM_ROBOT_ASSURED_PACKET_ID_N_BITS              = 4
PACKET_RANGE_REM_ROBOT_ASSURED_PACKET_SEQUENCE_NUMBER_MIN    = 0.
PACKET_RANGE_REM_ROBOT_ASSURED_PACKET_SEQUENCE_NUMBER_MAX    = 255.
PACKET_RANGE_REM_ROBOT_ASSURED_PACKET_SEQUENCE_NUMBER_N_BITS = 8
PACKET_RANGE_REM_ROBOT_ASSURED_PACKET_MESSAGE_LENGTH_MIN     = 0.
PACKET_RANGE_REM_ROBOT_ASSURED_PACKET_MESSAGE_LENGTH_MAX     = 255.
PACKET_RANGE_REM_ROBOT_ASSURED_PACKET_MESSAGE_LENGTH_N_BITS  = 8

PACKET_TYPE_REM_ROBOT_ASSURED_ACK                            = 0b11110000 # 240 
PACKET_SIZE_REM_ROBOT_ASSURED_ACK                            = 3
PACKET_RANGE_REM_ROBOT_ASSURED_ACK_HEADER_MIN                = 0.
PACKET_RANGE_REM_ROBOT_ASSURED_ACK_HEADER_MAX                = 255.
PACKET_RANGE_REM_ROBOT_ASSURED_ACK_HEADER_N_BITS             = 8
PACKET_RANGE_REM_ROBOT_ASSURED_ACK_REM_VERSION_MIN           = 0.
PACKET_RANGE_REM_ROBOT_ASSURED_ACK_REM_VERSION_MAX           = 15.
PACKET_RANGE_REM_ROBOT_ASSURED_ACK_REM_VERSION_N_BITS        = 4
PACKET_RANGE_REM_ROBOT_ASSURED_ACK_ID_MIN                    = 0.
PACKET_RANGE_REM_ROBOT_ASSURED_ACK_ID_MAX                    = 15.
PACKET_RANGE_REM_ROBOT_ASSURED_ACK_ID_N_BITS                 = 4
PACKET_RANGE_REM_ROBOT_ASSURED_ACK_SEQUENCE_NUMBER_MIN       = 0.
PACKET_RANGE_REM_ROBOT_ASSURED_ACK_SEQUENCE_NUMBER_MAX       = 255.
PACKET_RANGE_REM_ROBOT_ASSURED_ACK_SEQUENCE_NUMBER_N_BITS    = 8

PACKET_TYPE_REM_SX1280FILLER                                 = 0b11111111 # 255 
PACKET_SIZE_REM_SX1280FILLER                                 = 6
PACKET_RANGE_REM_SX1280FILLER_HEADER_MIN                     = 0.
PACKET_RANGE_REM_SX1280FILLER_HEADER_MAX                     = 255.
PACKET_RANGE_REM_SX1280FILLER_HEADER_N_BITS                  = 8
PACKET_RANGE_REM_SX1280FILLER_REM_VERSION_MIN                = 0.
PACKET_RANGE_REM_SX1280FILLER_REM_VERSION_MAX                = 15.
PACKET_RANGE_REM_SX1280FILLER_REM_VERSION_N_BITS             = 4
PACKET_RANGE_REM_SX1280FILLER_FILLER_BITS_MIN                = 0.
PACKET_RANGE_REM_SX1280FILLER_FILLER_BITS_MAX                = 68719476735.
PACKET_RANGE_REM_SX1280FILLER_FILLER_BITS_N_BITS             = 36

def PACKET_TYPE_TO_SIZE(type):
    if type == PACKET_TYPE_REM_ROBOT_COMMAND                               : return PACKET_SIZE_REM_ROBOT_COMMAND                               
    if type == PACKET_TYPE_REM_ROBOT_FEEDBACK                              : return PACKET_SIZE_REM_ROBOT_FEEDBACK                              
    if type == PACKET_TYPE_REM_ROBOT_STATE_INFO                            : return PACKET_SIZE_REM_ROBOT_STATE_INFO                            
    if type == PACKET_TYPE_REM_ROBOT_BUZZER                                : return PACKET_SIZE_REM_ROBOT_BUZZER                                
    if type == PACKET_TYPE_REM_BASESTATION_LOG                             : return PACKET_SIZE_REM_BASESTATION_LOG                             
    if type == PACKET_TYPE_REM_ROBOT_LOG                                   : return PACKET_SIZE_REM_ROBOT_LOG                                   
    if type == PACKET_TYPE_REM_BASESTATION_GET_CONFIGURATION               : return PACKET_SIZE_REM_BASESTATION_GET_CONFIGURATION               
    if type == PACKET_TYPE_REM_BASESTATION_CONFIGURATION                   : return PACKET_SIZE_REM_BASESTATION_CONFIGURATION                   
    if type == PACKET_TYPE_REM_BASESTATION_SET_CONFIGURATION               : return PACKET_SIZE_REM_BASESTATION_SET_CONFIGURATION               
    if type == PACKET_TYPE_REM_ROBOT_GET_PIDGAINS                          : return PACKET_SIZE_REM_ROBOT_GET_PIDGAINS                          
    if type == PACKET_TYPE_REM_ROBOT_PIDGAINS                              : return PACKET_SIZE_REM_ROBOT_PIDGAINS                              
    if type == PACKET_TYPE_REM_ROBOT_SET_PIDGAINS                          : return PACKET_SIZE_REM_ROBOT_SET_PIDGAINS                          
    if type == PACKET_TYPE_REM_ROBOT_ASSURED_PACKET                        : return PACKET_SIZE_REM_ROBOT_ASSURED_PACKET                        
    if type == PACKET_TYPE_REM_ROBOT_ASSURED_ACK                           : return PACKET_SIZE_REM_ROBOT_ASSURED_ACK                           
    if type == PACKET_TYPE_REM_SX1280FILLER                                : return PACKET_SIZE_REM_SX1280FILLER                                
    return 0

def PACKET_TYPE_TO_OBJ(type):
    if type == PACKET_TYPE_REM_ROBOT_COMMAND                       : return REM_RobotCommand
    if type == PACKET_TYPE_REM_ROBOT_FEEDBACK                      : return REM_RobotFeedback
    if type == PACKET_TYPE_REM_ROBOT_STATE_INFO                    : return REM_RobotStateInfo
    if type == PACKET_TYPE_REM_ROBOT_BUZZER                        : return REM_RobotBuzzer
    if type == PACKET_TYPE_REM_BASESTATION_LOG                     : return REM_BasestationLog
    if type == PACKET_TYPE_REM_ROBOT_LOG                           : return REM_RobotLog
    if type == PACKET_TYPE_REM_BASESTATION_GET_CONFIGURATION       : return REM_BasestationGetConfiguration
    if type == PACKET_TYPE_REM_BASESTATION_CONFIGURATION           : return REM_BasestationConfiguration
    if type == PACKET_TYPE_REM_BASESTATION_SET_CONFIGURATION       : return REM_BasestationSetConfiguration
    if type == PACKET_TYPE_REM_ROBOT_GET_PIDGAINS                  : return REM_RobotGetPIDGains
    if type == PACKET_TYPE_REM_ROBOT_PIDGAINS                      : return REM_RobotPIDGains
    if type == PACKET_TYPE_REM_ROBOT_SET_PIDGAINS                  : return REM_RobotSetPIDGains
    if type == PACKET_TYPE_REM_ROBOT_ASSURED_PACKET                : return REM_RobotAssuredPacket
    if type == PACKET_TYPE_REM_ROBOT_ASSURED_ACK                   : return REM_RobotAssuredAck
    if type == PACKET_TYPE_REM_SX1280FILLER                        : return REM_SX1280Filler

