/*
 * Generated by asn1c-0.9.27 (http://lionet.info/asn1c)
 * From ASN.1 module "GPRSChargingDataTypesV1171"
 * 	found in "../GPRSChargingDataTypesV1171_py_asn1c_2.asn"
 */

#ifndef	_EventBasedChargingInformation_H_
#define	_EventBasedChargingInformation_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>
#include "TimeStamp.h"
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* EventBasedChargingInformation */
typedef struct EventBasedChargingInformation {
	long	 numberOfEvents;
	struct EventBasedChargingInformation__eventTimeStamps {
		A_SEQUENCE_OF(TimeStamp_t) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *eventTimeStamps;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} EventBasedChargingInformation_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_EventBasedChargingInformation;

#ifdef __cplusplus
}
#endif

#endif	/* _EventBasedChargingInformation_H_ */
#include <asn_internal.h>