/*
 * Generated by asn1c-0.9.27 (http://lionet.info/asn1c)
 * From ASN.1 module "GPRSChargingDataTypesV1171"
 * 	found in "../GPRSChargingDataTypesV1171_py_asn1c_2.asn"
 */

#include "ChangeLocation.h"

static asn_TYPE_member_t asn_MBR_ChangeLocation_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct ChangeLocation, locationAreaCode),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LocationAreaCode,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"locationAreaCode"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct ChangeLocation, routingAreaCode),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RoutingAreaCode,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"routingAreaCode"
		},
	{ ATF_POINTER, 1, offsetof(struct ChangeLocation, cellId),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CellId,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"cellId"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct ChangeLocation, changeTime),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_TimeStamp,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"changeTime"
		},
	{ ATF_POINTER, 1, offsetof(struct ChangeLocation, mCC_MNC),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PLMN_Id,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"mCC-MNC"
		},
};
static ber_tlv_tag_t asn_DEF_ChangeLocation_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_ChangeLocation_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* locationAreaCode */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* routingAreaCode */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* cellId */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* changeTime */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 } /* mCC-MNC */
};
static asn_SEQUENCE_specifics_t asn_SPC_ChangeLocation_specs_1 = {
	sizeof(struct ChangeLocation),
	offsetof(struct ChangeLocation, _asn_ctx),
	asn_MAP_ChangeLocation_tag2el_1,
	5,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_ChangeLocation = {
	"ChangeLocation",
	"ChangeLocation",
	SEQUENCE_free,
	SEQUENCE_print,
	SEQUENCE_constraint,
	SEQUENCE_decode_ber,
	SEQUENCE_encode_der,
	SEQUENCE_decode_xer,
	SEQUENCE_encode_xer,
	0, 0,	/* No PER support, use "-gen-PER" to enable */
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_ChangeLocation_tags_1,
	sizeof(asn_DEF_ChangeLocation_tags_1)
		/sizeof(asn_DEF_ChangeLocation_tags_1[0]), /* 1 */
	asn_DEF_ChangeLocation_tags_1,	/* Same as above */
	sizeof(asn_DEF_ChangeLocation_tags_1)
		/sizeof(asn_DEF_ChangeLocation_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_ChangeLocation_1,
	5,	/* Elements count */
	&asn_SPC_ChangeLocation_specs_1	/* Additional specs */
};
