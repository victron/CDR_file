/*
 * Generated by asn1c-0.9.27 (http://lionet.info/asn1c)
 * From ASN.1 module "GPRSChargingDataTypesV1171"
 * 	found in "../GPRSChargingDataTypesV1171_py_asn1c_2.asn"
 */

#ifndef	_Diagnostics_H_
#define	_Diagnostics_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>
#include "ManagementExtension.h"
#include "PositionMethodFailure-Diagnostic.h"
#include "UnauthorizedLCSClient-Diagnostic.h"
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum Diagnostics_PR {
	Diagnostics_PR_NOTHING,	/* No components present */
	Diagnostics_PR_gsm0408Cause,
	Diagnostics_PR_gsm0902MapErrorValue,
	Diagnostics_PR_itu_tQ767Cause,
	Diagnostics_PR_networkSpecificCause,
	Diagnostics_PR_manufacturerSpecificCause,
	Diagnostics_PR_positionMethodFailureCause,
	Diagnostics_PR_unauthorizedLCSClientCause,
	Diagnostics_PR_diameterResultCodeAndExperimentalResult
} Diagnostics_PR;

/* Diagnostics */
typedef struct Diagnostics {
	Diagnostics_PR present;
	union Diagnostics_u {
		long	 gsm0408Cause;
		long	 gsm0902MapErrorValue;
		long	 itu_tQ767Cause;
		ManagementExtension_t	 networkSpecificCause;
		ManagementExtension_t	 manufacturerSpecificCause;
		PositionMethodFailure_Diagnostic_t	 positionMethodFailureCause;
		UnauthorizedLCSClient_Diagnostic_t	 unauthorizedLCSClientCause;
		long	 diameterResultCodeAndExperimentalResult;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} Diagnostics_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_Diagnostics;

#ifdef __cplusplus
}
#endif

#endif	/* _Diagnostics_H_ */
#include <asn_internal.h>
