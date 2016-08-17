/*
 * Generated by asn1c-0.9.27 (http://lionet.info/asn1c)
 * From ASN.1 module "GPRSChargingDataTypesV1171"
 * 	found in "../GPRSChargingDataTypesV1171_py_asn1c_2.asn"
 */

#ifndef	_SubscriberId_H_
#define	_SubscriberId_H_


#include <asn_application.h>

/* Including external dependencies */
#include "IMSI.h"
#include "TMSI.h"
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum SubscriberId_PR {
	SubscriberId_PR_NOTHING,	/* No components present */
	SubscriberId_PR_imsi,
	SubscriberId_PR_tmsi
} SubscriberId_PR;

/* SubscriberId */
typedef struct SubscriberId {
	SubscriberId_PR present;
	union SubscriberId_u {
		IMSI_t	 imsi;
		TMSI_t	 tmsi;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SubscriberId_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SubscriberId;

#ifdef __cplusplus
}
#endif

#endif	/* _SubscriberId_H_ */
#include <asn_internal.h>