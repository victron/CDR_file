/*
 * Generated by asn1c-0.9.27 (http://lionet.info/asn1c)
 * From ASN.1 module "GPRSChargingDataTypesV1171"
 * 	found in "../GPRSChargingDataTypesV1171_py_asn1c_2.asn"
 */

#ifndef	_PositioningData_H_
#define	_PositioningData_H_


#include <asn_application.h>

/* Including external dependencies */
#include <OCTET_STRING.h>

#ifdef __cplusplus
extern "C" {
#endif

/* PositioningData */
typedef OCTET_STRING_t	 PositioningData_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_PositioningData;
asn_struct_free_f PositioningData_free;
asn_struct_print_f PositioningData_print;
asn_constr_check_f PositioningData_constraint;
ber_type_decoder_f PositioningData_decode_ber;
der_type_encoder_f PositioningData_encode_der;
xer_type_decoder_f PositioningData_decode_xer;
xer_type_encoder_f PositioningData_encode_xer;

#ifdef __cplusplus
}
#endif

#endif	/* _PositioningData_H_ */
#include <asn_internal.h>