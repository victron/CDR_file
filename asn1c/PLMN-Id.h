/*
 * Generated by asn1c-0.9.27 (http://lionet.info/asn1c)
 * From ASN.1 module "GPRSChargingDataTypesV1171"
 * 	found in "../GPRSChargingDataTypesV1171_py_asn1c_2.asn"
 */

#ifndef	_PLMN_Id_H_
#define	_PLMN_Id_H_


#include <asn_application.h>

/* Including external dependencies */
#include <OCTET_STRING.h>

#ifdef __cplusplus
extern "C" {
#endif

/* PLMN-Id */
typedef OCTET_STRING_t	 PLMN_Id_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_PLMN_Id;
asn_struct_free_f PLMN_Id_free;
asn_struct_print_f PLMN_Id_print;
asn_constr_check_f PLMN_Id_constraint;
ber_type_decoder_f PLMN_Id_decode_ber;
der_type_encoder_f PLMN_Id_encode_der;
xer_type_decoder_f PLMN_Id_decode_xer;
xer_type_encoder_f PLMN_Id_encode_xer;

#ifdef __cplusplus
}
#endif

#endif	/* _PLMN_Id_H_ */
#include <asn_internal.h>
