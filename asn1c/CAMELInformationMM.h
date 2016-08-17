/*
 * Generated by asn1c-0.9.27 (http://lionet.info/asn1c)
 * From ASN.1 module "GPRSChargingDataTypesV1171"
 * 	found in "../GPRSChargingDataTypesV1171_py_asn1c_2.asn"
 */

#ifndef	_CAMELInformationMM_H_
#define	_CAMELInformationMM_H_


#include <asn_application.h>

/* Including external dependencies */
#include "SCFAddress.h"
#include "ServiceKey.h"
#include "DefaultGPRS-Handling.h"
#include "NumberOfDPEncountered.h"
#include "LevelOfCAMELService.h"
#include "FreeFormatData.h"
#include "FFDAppendIndicator.h"
#include <constr_SET.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */

/*
 * Method of determining the components presence
 */
typedef enum CAMELInformationMM_PR {
	CAMELInformationMM_PR_sCFAddress,	/* Member sCFAddress is present */
	CAMELInformationMM_PR_serviceKey,	/* Member serviceKey is present */
	CAMELInformationMM_PR_defaultTransactionHandling,	/* Member defaultTransactionHandling is present */
	CAMELInformationMM_PR_numberOfDPEncountered,	/* Member numberOfDPEncountered is present */
	CAMELInformationMM_PR_levelOfCAMELService,	/* Member levelOfCAMELService is present */
	CAMELInformationMM_PR_freeFormatData,	/* Member freeFormatData is present */
	CAMELInformationMM_PR_fFDAppendIndicator,	/* Member fFDAppendIndicator is present */
} CAMELInformationMM_PR;

/* CAMELInformationMM */
typedef struct CAMELInformationMM {
	SCFAddress_t	*sCFAddress	/* OPTIONAL */;
	ServiceKey_t	*serviceKey	/* OPTIONAL */;
	DefaultGPRS_Handling_t	*defaultTransactionHandling	/* OPTIONAL */;
	NumberOfDPEncountered_t	*numberOfDPEncountered	/* OPTIONAL */;
	LevelOfCAMELService_t	*levelOfCAMELService	/* OPTIONAL */;
	FreeFormatData_t	*freeFormatData	/* OPTIONAL */;
	FFDAppendIndicator_t	*fFDAppendIndicator	/* OPTIONAL */;
	
	/* Presence bitmask: ASN_SET_ISPRESENT(pCAMELInformationMM, CAMELInformationMM_PR_x) */
	unsigned int _presence_map
		[((7+(8*sizeof(unsigned int))-1)/(8*sizeof(unsigned int)))];
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} CAMELInformationMM_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_CAMELInformationMM;

#ifdef __cplusplus
}
#endif

#endif	/* _CAMELInformationMM_H_ */
#include <asn_internal.h>
