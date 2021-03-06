/*
 * Generated by asn1c-0.9.27 (http://lionet.info/asn1c)
 * From ASN.1 module "GPRSChargingDataTypesV1171"
 * 	found in "../GPRSChargingDataTypesV1171_py_asn1c_2.asn"
 */

#ifndef	_LocationEstimateType_H_
#define	_LocationEstimateType_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LocationEstimateType {
	LocationEstimateType_currentLocation	= 0,
	LocationEstimateType_currentOrLastKnownLocation	= 1,
	LocationEstimateType_initialLocation	= 2,
	/*
	 * Enumeration is extensible
	 */
	LocationEstimateType_activateDeferredLocation	= 3,
	LocationEstimateType_cancelDeferredLocation	= 4,
	LocationEstimateType_notificationVerificationOnly	= 5
} e_LocationEstimateType;

/* LocationEstimateType */
typedef long	 LocationEstimateType_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LocationEstimateType;
asn_struct_free_f LocationEstimateType_free;
asn_struct_print_f LocationEstimateType_print;
asn_constr_check_f LocationEstimateType_constraint;
ber_type_decoder_f LocationEstimateType_decode_ber;
der_type_encoder_f LocationEstimateType_encode_der;
xer_type_decoder_f LocationEstimateType_decode_xer;
xer_type_encoder_f LocationEstimateType_encode_xer;

#ifdef __cplusplus
}
#endif

#endif	/* _LocationEstimateType_H_ */
#include <asn_internal.h>
