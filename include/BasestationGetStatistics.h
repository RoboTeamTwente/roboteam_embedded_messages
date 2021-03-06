// AUTOGENERATED. Run generator/main.py to regenerate
// Generated on June 05 2021, 23:47:19

#ifndef __BASESTATION_GET_STATISTICS_H
#define __BASESTATION_GET_STATISTICS_H

#include <stdbool.h>
#include <stdint.h>
#include "BaseTypes.h"

typedef struct _BasestationGetStatisticsPayload {
	uint8_t payload[PACKET_SIZE_BASESTATION_GET_STATISTICS];
} BasestationGetStatisticsPayload;



/** ================================ PACKET ================================ 
[---0--]
11111111 header
*/



/** ================================ STRUCT ================================ */
typedef struct _BasestationGetStatistics {
    uint8_t    header;                  // Header byte indicating the type of packet
} BasestationGetStatistics;



/** ================================ GETTERS ================================ */
static inline uint8_t BasestationGetStatistics_get_header(BasestationGetStatisticsPayload *bgsp){
    return ((bgsp->payload[0]));
}



/** ================================ SETTERS ================================ */
static inline void BasestationGetStatistics_set_header(BasestationGetStatisticsPayload *bgsp, uint8_t header){
    bgsp->payload[0] = header;
}



/** ================================ DECODE ================================ */
static inline void decodeBasestationGetStatistics(BasestationGetStatistics *bgs, BasestationGetStatisticsPayload *bgsp){
	bgs->header             = BasestationGetStatistics_get_header(bgsp);
}



/** ================================ ENCODE ================================ */
static inline void encodeBasestationGetStatistics(BasestationGetStatisticsPayload *bgsp, BasestationGetStatistics *bgs){
	BasestationGetStatistics_set_header              (bgsp, bgs->header);
}

#endif /*__BASESTATION_GET_STATISTICS_H*/
