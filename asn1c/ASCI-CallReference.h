/*
 * Generated by asn1c-0.9.27 (http://lionet.info/asn1c)
 * From ASN.1 module "GPRSChargingDataTypesV1171"
 * 	found in "../GPRSChargingDataTypesV1171_py_asn1c_2.asn"
 */

#ifndef	_ASCI_CallReference_H_
#define	_ASCI_CallReference_H_


#include <asn_application.h>

/* Including external dependencies */
#include "TBCD-STRING.h"

#ifdef __cplusplus
extern "C" {
#endif

/* ASCI-CallReference */
typedef TBCD_STRING_t	 ASCI_CallReference_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_ASCI_CallReference;
asn_struct_free_f ASCI_CallReference_free;
asn_struct_print_f ASCI_CallReference_print;
asn_constr_check_f ASCI_CallReference_constraint;
ber_type_decoder_f ASCI_CallReference_decode_ber;
der_type_encoder_f ASCI_CallReference_encode_der;
xer_type_decoder_f ASCI_CallReference_decode_xer;
xer_type_encoder_f ASCI_CallReference_encode_xer;

#ifdef __cplusplus
}
#endif

#endif	/* _ASCI_CallReference_H_ */
#include <asn_internal.h>
