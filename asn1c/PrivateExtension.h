/*
 * Generated by asn1c-0.9.27 (http://lionet.info/asn1c)
 * From ASN.1 module "GPRSChargingDataTypesV1171"
 * 	found in "../GPRSChargingDataTypesV1171_py_asn1c_2.asn"
 */

#ifndef	_PrivateExtension_H_
#define	_PrivateExtension_H_


#include <asn_application.h>

/* Including external dependencies */
#include <OCTET_STRING.h>

#ifdef __cplusplus
extern "C" {
#endif

/* PrivateExtension */
typedef OCTET_STRING_t	 PrivateExtension_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_PrivateExtension;
asn_struct_free_f PrivateExtension_free;
asn_struct_print_f PrivateExtension_print;
asn_constr_check_f PrivateExtension_constraint;
ber_type_decoder_f PrivateExtension_decode_ber;
der_type_encoder_f PrivateExtension_encode_der;
xer_type_decoder_f PrivateExtension_decode_xer;
xer_type_encoder_f PrivateExtension_encode_xer;

#ifdef __cplusplus
}
#endif

#endif	/* _PrivateExtension_H_ */
#include <asn_internal.h>
