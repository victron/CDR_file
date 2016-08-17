/*
 * Generated by asn1c-0.9.27 (http://lionet.info/asn1c)
 * From ASN.1 module "GPRSChargingDataTypesV1171"
 * 	found in "../GPRSChargingDataTypesV1171_py_asn1c_2.asn"
 */

#include "ChangeOfMBMSCondition.h"

static asn_TYPE_member_t asn_MBR_ChangeOfMBMSCondition_1[] = {
	{ ATF_POINTER, 3, offsetof(struct ChangeOfMBMSCondition, qosRequested),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_QoSInformation,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"qosRequested"
		},
	{ ATF_POINTER, 2, offsetof(struct ChangeOfMBMSCondition, qosNegotiated),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_QoSInformation,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"qosNegotiated"
		},
	{ ATF_POINTER, 1, offsetof(struct ChangeOfMBMSCondition, dataVolumeMBMSUplink),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_DataVolumeMBMS,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"dataVolumeMBMSUplink"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct ChangeOfMBMSCondition, dataVolumeMBMSDownlink),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_DataVolumeMBMS,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"dataVolumeMBMSDownlink"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct ChangeOfMBMSCondition, changeCondition),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ChangeCondition,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"changeCondition"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct ChangeOfMBMSCondition, changeTime),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_TimeStamp,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"changeTime"
		},
	{ ATF_POINTER, 1, offsetof(struct ChangeOfMBMSCondition, failureHandlingContinue),
		(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_FailureHandlingContinue,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"failureHandlingContinue"
		},
};
static ber_tlv_tag_t asn_DEF_ChangeOfMBMSCondition_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_ChangeOfMBMSCondition_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 0, 0, 0 }, /* qosRequested */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 1, 0, 0 }, /* qosNegotiated */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 2, 0, 0 }, /* dataVolumeMBMSUplink */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 3, 0, 0 }, /* dataVolumeMBMSDownlink */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 4, 0, 0 }, /* changeCondition */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 5, 0, 0 }, /* changeTime */
    { (ASN_TAG_CLASS_CONTEXT | (7 << 2)), 6, 0, 0 } /* failureHandlingContinue */
};
static asn_SEQUENCE_specifics_t asn_SPC_ChangeOfMBMSCondition_specs_1 = {
	sizeof(struct ChangeOfMBMSCondition),
	offsetof(struct ChangeOfMBMSCondition, _asn_ctx),
	asn_MAP_ChangeOfMBMSCondition_tag2el_1,
	7,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_ChangeOfMBMSCondition = {
	"ChangeOfMBMSCondition",
	"ChangeOfMBMSCondition",
	SEQUENCE_free,
	SEQUENCE_print,
	SEQUENCE_constraint,
	SEQUENCE_decode_ber,
	SEQUENCE_encode_der,
	SEQUENCE_decode_xer,
	SEQUENCE_encode_xer,
	0, 0,	/* No PER support, use "-gen-PER" to enable */
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_ChangeOfMBMSCondition_tags_1,
	sizeof(asn_DEF_ChangeOfMBMSCondition_tags_1)
		/sizeof(asn_DEF_ChangeOfMBMSCondition_tags_1[0]), /* 1 */
	asn_DEF_ChangeOfMBMSCondition_tags_1,	/* Same as above */
	sizeof(asn_DEF_ChangeOfMBMSCondition_tags_1)
		/sizeof(asn_DEF_ChangeOfMBMSCondition_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_ChangeOfMBMSCondition_1,
	7,	/* Elements count */
	&asn_SPC_ChangeOfMBMSCondition_specs_1	/* Additional specs */
};

