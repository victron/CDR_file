/*
 * Generated by asn1c-0.9.27 (http://lionet.info/asn1c)
 * From ASN.1 module "GPRSChargingDataTypesV1171"
 * 	found in "../GPRSChargingDataTypesV1171_py_asn1c_2.asn"
 */

#include "EPCQoSInformation.h"

static asn_TYPE_member_t asn_MBR_EPCQoSInformation_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct EPCQoSInformation, qCI),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"qCI"
		},
	{ ATF_POINTER, 7, offsetof(struct EPCQoSInformation, maxRequestedBandwithUL),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"maxRequestedBandwithUL"
		},
	{ ATF_POINTER, 6, offsetof(struct EPCQoSInformation, maxRequestedBandwithDL),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"maxRequestedBandwithDL"
		},
	{ ATF_POINTER, 5, offsetof(struct EPCQoSInformation, guaranteedBitrateUL),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"guaranteedBitrateUL"
		},
	{ ATF_POINTER, 4, offsetof(struct EPCQoSInformation, guaranteedBitrateDL),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"guaranteedBitrateDL"
		},
	{ ATF_POINTER, 3, offsetof(struct EPCQoSInformation, aRP),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"aRP"
		},
	{ ATF_POINTER, 2, offsetof(struct EPCQoSInformation, aPNAggregateMaxBitrateUL),
		(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"aPNAggregateMaxBitrateUL"
		},
	{ ATF_POINTER, 1, offsetof(struct EPCQoSInformation, aPNAggregateMaxBitrateDL),
		(ASN_TAG_CLASS_CONTEXT | (8 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"aPNAggregateMaxBitrateDL"
		},
};
static ber_tlv_tag_t asn_DEF_EPCQoSInformation_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_EPCQoSInformation_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 0, 0, 0 }, /* qCI */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 1, 0, 0 }, /* maxRequestedBandwithUL */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 2, 0, 0 }, /* maxRequestedBandwithDL */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 3, 0, 0 }, /* guaranteedBitrateUL */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 4, 0, 0 }, /* guaranteedBitrateDL */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 5, 0, 0 }, /* aRP */
    { (ASN_TAG_CLASS_CONTEXT | (7 << 2)), 6, 0, 0 }, /* aPNAggregateMaxBitrateUL */
    { (ASN_TAG_CLASS_CONTEXT | (8 << 2)), 7, 0, 0 } /* aPNAggregateMaxBitrateDL */
};
static asn_SEQUENCE_specifics_t asn_SPC_EPCQoSInformation_specs_1 = {
	sizeof(struct EPCQoSInformation),
	offsetof(struct EPCQoSInformation, _asn_ctx),
	asn_MAP_EPCQoSInformation_tag2el_1,
	8,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_EPCQoSInformation = {
	"EPCQoSInformation",
	"EPCQoSInformation",
	SEQUENCE_free,
	SEQUENCE_print,
	SEQUENCE_constraint,
	SEQUENCE_decode_ber,
	SEQUENCE_encode_der,
	SEQUENCE_decode_xer,
	SEQUENCE_encode_xer,
	0, 0,	/* No PER support, use "-gen-PER" to enable */
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_EPCQoSInformation_tags_1,
	sizeof(asn_DEF_EPCQoSInformation_tags_1)
		/sizeof(asn_DEF_EPCQoSInformation_tags_1[0]), /* 1 */
	asn_DEF_EPCQoSInformation_tags_1,	/* Same as above */
	sizeof(asn_DEF_EPCQoSInformation_tags_1)
		/sizeof(asn_DEF_EPCQoSInformation_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_EPCQoSInformation_1,
	8,	/* Elements count */
	&asn_SPC_EPCQoSInformation_specs_1	/* Additional specs */
};

