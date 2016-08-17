/*
 * Generated by asn1c-0.9.27 (http://lionet.info/asn1c)
 * From ASN.1 module "GPRSChargingDataTypesV1171"
 * 	found in "../GPRSChargingDataTypesV1171_py_asn1c_2.asn"
 */

#include "GPRSRecord.h"

static asn_TYPE_member_t asn_MBR_GPRSRecord_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct GPRSRecord, choice.sgsnPDPRecord),
		(ASN_TAG_CLASS_CONTEXT | (20 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SGSNPDPRecord,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"sgsnPDPRecord"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct GPRSRecord, choice.sgsnMMRecord),
		(ASN_TAG_CLASS_CONTEXT | (22 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SGSNMMRecord,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"sgsnMMRecord"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct GPRSRecord, choice.sgsnSMORecord),
		(ASN_TAG_CLASS_CONTEXT | (23 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SGSNSMORecord,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"sgsnSMORecord"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct GPRSRecord, choice.sgsnSMTRecord),
		(ASN_TAG_CLASS_CONTEXT | (24 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SGSNSMTRecord,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"sgsnSMTRecord"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct GPRSRecord, choice.sGWRecord),
		(ASN_TAG_CLASS_CONTEXT | (78 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SGWRecord,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"sGWRecord"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct GPRSRecord, choice.pGWRecord),
		(ASN_TAG_CLASS_CONTEXT | (79 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PGWRecord,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"pGWRecord"
		},
};
static asn_TYPE_tag2member_t asn_MAP_GPRSRecord_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (20 << 2)), 0, 0, 0 }, /* sgsnPDPRecord */
    { (ASN_TAG_CLASS_CONTEXT | (22 << 2)), 1, 0, 0 }, /* sgsnMMRecord */
    { (ASN_TAG_CLASS_CONTEXT | (23 << 2)), 2, 0, 0 }, /* sgsnSMORecord */
    { (ASN_TAG_CLASS_CONTEXT | (24 << 2)), 3, 0, 0 }, /* sgsnSMTRecord */
    { (ASN_TAG_CLASS_CONTEXT | (78 << 2)), 4, 0, 0 }, /* sGWRecord */
    { (ASN_TAG_CLASS_CONTEXT | (79 << 2)), 5, 0, 0 } /* pGWRecord */
};
static asn_CHOICE_specifics_t asn_SPC_GPRSRecord_specs_1 = {
	sizeof(struct GPRSRecord),
	offsetof(struct GPRSRecord, _asn_ctx),
	offsetof(struct GPRSRecord, present),
	sizeof(((struct GPRSRecord *)0)->present),
	asn_MAP_GPRSRecord_tag2el_1,
	6,	/* Count of tags in the map */
	0,
	-1	/* Extensions start */
};
asn_TYPE_descriptor_t asn_DEF_GPRSRecord = {
	"GPRSRecord",
	"GPRSRecord",
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
	asn_MBR_GPRSRecord_1,
	6,	/* Elements count */
	&asn_SPC_GPRSRecord_specs_1	/* Additional specs */
};

