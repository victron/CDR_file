/*
 * Generated by asn1c-0.9.27 (http://lionet.info/asn1c)
 * From ASN.1 module "GPRSChargingDataTypesV1171"
 * 	found in "../GPRSChargingDataTypesV1171_py_asn1c_2.asn"
 */

#ifndef	_MBMS2G3GIndicator_H_
#define	_MBMS2G3GIndicator_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum MBMS2G3GIndicator {
	MBMS2G3GIndicator_twoG	= 0,
	MBMS2G3GIndicator_threeG	= 1,
	MBMS2G3GIndicator_twoG_AND_threeG	= 2
} e_MBMS2G3GIndicator;

/* MBMS2G3GIndicator */
typedef long	 MBMS2G3GIndicator_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_MBMS2G3GIndicator;
asn_struct_free_f MBMS2G3GIndicator_free;
asn_struct_print_f MBMS2G3GIndicator_print;
asn_constr_check_f MBMS2G3GIndicator_constraint;
ber_type_decoder_f MBMS2G3GIndicator_decode_ber;
der_type_encoder_f MBMS2G3GIndicator_encode_der;
xer_type_decoder_f MBMS2G3GIndicator_decode_xer;
xer_type_encoder_f MBMS2G3GIndicator_encode_xer;

#ifdef __cplusplus
}
#endif

#endif	/* _MBMS2G3GIndicator_H_ */
#include <asn_internal.h>
