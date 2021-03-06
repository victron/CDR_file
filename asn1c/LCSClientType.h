/*
 * Generated by asn1c-0.9.27 (http://lionet.info/asn1c)
 * From ASN.1 module "GPRSChargingDataTypesV1171"
 * 	found in "../GPRSChargingDataTypesV1171_py_asn1c_2.asn"
 */

#ifndef	_LCSClientType_H_
#define	_LCSClientType_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LCSClientType {
	LCSClientType_emergencyServices	= 0,
	LCSClientType_valueAddedServices	= 1,
	LCSClientType_plmnOperatorServices	= 2,
	LCSClientType_lawfulInterceptServices	= 3
	/*
	 * Enumeration is extensible
	 */
} e_LCSClientType;

/* LCSClientType */
typedef long	 LCSClientType_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LCSClientType;
asn_struct_free_f LCSClientType_free;
asn_struct_print_f LCSClientType_print;
asn_constr_check_f LCSClientType_constraint;
ber_type_decoder_f LCSClientType_decode_ber;
der_type_encoder_f LCSClientType_encode_der;
xer_type_decoder_f LCSClientType_decode_xer;
xer_type_encoder_f LCSClientType_encode_xer;

#ifdef __cplusplus
}
#endif

#endif	/* _LCSClientType_H_ */
#include <asn_internal.h>
