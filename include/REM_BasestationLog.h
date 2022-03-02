// AUTOGENERATED. Run generator/main.py to regenerate
/*
[  0   ]
11111111 header
*/

#ifndef __REM_BASESTATION_LOG_H
#define __REM_BASESTATION_LOG_H

#include <stdbool.h>
#include <stdint.h>
#include "REM_BaseTypes.h"

typedef struct _REM_BasestationLogPayload {
    uint8_t payload[PACKET_SIZE_REM_BASESTATION_LOG];
} REM_BasestationLogPayload;

typedef struct _REM_BasestationLog {
    uint32_t   header              ; // integer [0, 255]             Header byte indicating the type of packet
} REM_BasestationLog;

// ================================ GETTERS ================================
static inline uint32_t REM_BasestationLog_get_header(REM_BasestationLogPayload *remblp){
    return ((remblp->payload[0]));
}

// ================================ SETTERS ================================
static inline void REM_BasestationLog_set_header(REM_BasestationLogPayload *remblp, uint32_t header){
    remblp->payload[0] = header;
}

// ================================ ENCODE ================================
static inline void encodeREM_BasestationLog(REM_BasestationLogPayload *remblp, REM_BasestationLog *rembl){
    REM_BasestationLog_set_header              (remblp, rembl->header);
}

// ================================ DECODE ================================
static inline void decodeREM_BasestationLog(REM_BasestationLog *rembl, REM_BasestationLogPayload *remblp){
    rembl->header        = REM_BasestationLog_get_header(remblp);
}

#endif /*__REM_BASESTATION_LOG_H*/
