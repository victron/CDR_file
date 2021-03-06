/*
 * Generated by asn1c-0.9.27 (http://lionet.info/asn1c)
 * From ASN.1 module "GPRSChargingDataTypesV1171"
 * 	found in "../GPRSChargingDataTypesV1171_py_asn1c_2.asn"
 */

#ifndef	_RecordingEntity_H_
#define	_RecordingEntity_H_


#include <asn_application.h>

/* Including external dependencies */
#include "AddressString.h"

#ifdef __cplusplus
extern "C" {
#endif

/* RecordingEntity */
typedef AddressString_t	 RecordingEntity_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RecordingEntity;
asn_struct_free_f RecordingEntity_free;
asn_struct_print_f RecordingEntity_print;
asn_constr_check_f RecordingEntity_constraint;
ber_type_decoder_f RecordingEntity_decode_ber;
der_type_encoder_f RecordingEntity_encode_der;
xer_type_decoder_f RecordingEntity_decode_xer;
xer_type_encoder_f RecordingEntity_encode_xer;

#ifdef __cplusplus
}
#endif

#endif	/* _RecordingEntity_H_ */
#include <asn_internal.h>
