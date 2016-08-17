/*
 * Generated by asn1c-0.9.27 (http://lionet.info/asn1c)
 * From ASN.1 module "GPRSChargingDataTypesV1171"
 * 	found in "../GPRSChargingDataTypesV1171_py_asn1c_2.asn"
 */

#include "Identity.h"

static asn_TYPE_member_t asn_MBR_Identity_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct Identity, choice.imsi),
		(ASN_TAG_CLASS_UNIVERSAL | (4 << 2)),
		0,
		&asn_DEF_IMSI,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"imsi"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct Identity, choice.imsi_WithLMSI),
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_IMSI_WithLMSI,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"imsi-WithLMSI"
		},
};
static asn_TYPE_tag2member_t asn_MAP_Identity_tag2el_1[] = {
    { (ASN_TAG_CLASS_UNIVERSAL | (4 << 2)), 0, 0, 0 }, /* imsi */
    { (ASN_TAG_CLASS_UNIVERSAL | (16 << 2)), 1, 0, 0 } /* imsi-WithLMSI */
};
static asn_CHOICE_specifics_t asn_SPC_Identity_specs_1 = {
	sizeof(struct Identity),
	offsetof(struct Identity, _asn_ctx),
	offsetof(struct Identity, present),
	sizeof(((struct Identity *)0)->present),
	asn_MAP_Identity_tag2el_1,
	2,	/* Count of tags in the map */
	0,
	-1	/* Extensions start */
};
asn_TYPE_descriptor_t asn_DEF_Identity = {
	"Identity",
	"Identity",
	CHOICE_free,
	CHOICE_print,
	CHOICE_constraint,
	CHOICE_decode_ber,
	CHOICE_encode_der,
	CHOICE_decode_xer,
	CHOICE_encode_xer,
	0, 0,	/* No PER support, use "-gen-PER" to enable */
	CHOICE_outmost_tag,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	0,	/* No PER visible constraints */
	asn_MBR_Identity_1,
	2,	/* Elements count */
	&asn_SPC_Identity_specs_1	/* Additional specs */
};

