/*
 * Generated by asn1c-0.9.27 (http://lionet.info/asn1c)
 * From ASN.1 module "GPRSChargingDataTypesV1171"
 * 	found in "../GPRSChargingDataTypesV1171_py_asn1c_2.asn"
 */

#ifndef	_LCSQoSInfo_H_
#define	_LCSQoSInfo_H_


#include <asn_application.h>

/* Including external dependencies */
#include <OCTET_STRING.h>

#ifdef __cplusplus
extern "C" {
#endif

/* LCSQoSInfo */
typedef OCTET_STRING_t	 LCSQoSInfo_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LCSQoSInfo;
asn_struct_free_f LCSQoSInfo_free;
asn_struct_print_f LCSQoSInfo_print;
asn_constr_check_f LCSQoSInfo_constraint;
ber_type_decoder_f LCSQoSInfo_decode_ber;
der_type_encoder_f LCSQoSInfo_encode_der;
xer_type_decoder_f LCSQoSInfo_decode_xer;
xer_type_encoder_f LCSQoSInfo_encode_xer;

#ifdef __cplusplus
}
#endif

#endif	/* _LCSQoSInfo_H_ */
#include <asn_internal.h>
