/*
 * Generated by asn1c-0.9.27 (http://lionet.info/asn1c)
 * From ASN.1 module "GPRSChargingDataTypesV1171"
 * 	found in "../GPRSChargingDataTypesV1171_py_asn1c_2.asn"
 */

#ifndef	_CSGAccessMode_H_
#define	_CSGAccessMode_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum CSGAccessMode {
	CSGAccessMode_closedMode	= 0,
	CSGAccessMode_hybridMode	= 1
} e_CSGAccessMode;

/* CSGAccessMode */
typedef long	 CSGAccessMode_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_CSGAccessMode;
asn_struct_free_f CSGAccessMode_free;
asn_struct_print_f CSGAccessMode_print;
asn_constr_check_f CSGAccessMode_constraint;
ber_type_decoder_f CSGAccessMode_decode_ber;
der_type_encoder_f CSGAccessMode_encode_der;
xer_type_decoder_f CSGAccessMode_decode_xer;
xer_type_encoder_f CSGAccessMode_encode_xer;

#ifdef __cplusplus
}
#endif

#endif	/* _CSGAccessMode_H_ */
#include <asn_internal.h>
