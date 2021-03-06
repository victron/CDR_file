/*
 * Generated by asn1c-0.9.27 (http://lionet.info/asn1c)
 * From ASN.1 module "GPRSChargingDataTypesV1171"
 * 	found in "../GPRSChargingDataTypesV1171_py_asn1c_2.asn"
 */

#include "GWMBMSRecord.h"

static asn_TYPE_member_t asn_MBR_listofDownstreamNodes_5[] = {
	{ ATF_POINTER, 0, 0,
		-1 /* Ambiguous tag (CHOICE?) */,
		0,
		&asn_DEF_GSNAddress,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		""
		},
};
static ber_tlv_tag_t asn_DEF_listofDownstreamNodes_tags_5[] = {
	(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_listofDownstreamNodes_specs_5 = {
	sizeof(struct GWMBMSRecord__listofDownstreamNodes),
	offsetof(struct GWMBMSRecord__listofDownstreamNodes, _asn_ctx),
	2,	/* XER encoding is XMLValueList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_listofDownstreamNodes_5 = {
	"listofDownstreamNodes",
	"listofDownstreamNodes",
	SEQUENCE_OF_free,
	SEQUENCE_OF_print,
	SEQUENCE_OF_constraint,
	SEQUENCE_OF_decode_ber,
	SEQUENCE_OF_encode_der,
	SEQUENCE_OF_decode_xer,
	SEQUENCE_OF_encode_xer,
	0, 0,	/* No PER support, use "-gen-PER" to enable */
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_listofDownstreamNodes_tags_5,
	sizeof(asn_DEF_listofDownstreamNodes_tags_5)
		/sizeof(asn_DEF_listofDownstreamNodes_tags_5[0]) - 1, /* 1 */
	asn_DEF_listofDownstreamNodes_tags_5,	/* Same as above */
	sizeof(asn_DEF_listofDownstreamNodes_tags_5)
		/sizeof(asn_DEF_listofDownstreamNodes_tags_5[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_listofDownstreamNodes_5,
	1,	/* Single element */
	&asn_SPC_listofDownstreamNodes_specs_5	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_listOfTrafficVolumes_10[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_ChangeOfMBMSCondition,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		""
		},
};
static ber_tlv_tag_t asn_DEF_listOfTrafficVolumes_tags_10[] = {
	(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_listOfTrafficVolumes_specs_10 = {
	sizeof(struct GWMBMSRecord__listOfTrafficVolumes),
	offsetof(struct GWMBMSRecord__listOfTrafficVolumes, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_listOfTrafficVolumes_10 = {
	"listOfTrafficVolumes",
	"listOfTrafficVolumes",
	SEQUENCE_OF_free,
	SEQUENCE_OF_print,
	SEQUENCE_OF_constraint,
	SEQUENCE_OF_decode_ber,
	SEQUENCE_OF_encode_der,
	SEQUENCE_OF_decode_xer,
	SEQUENCE_OF_encode_xer,
	0, 0,	/* No PER support, use "-gen-PER" to enable */
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_listOfTrafficVolumes_tags_10,
	sizeof(asn_DEF_listOfTrafficVolumes_tags_10)
		/sizeof(asn_DEF_listOfTrafficVolumes_tags_10[0]) - 1, /* 1 */
	asn_DEF_listOfTrafficVolumes_tags_10,	/* Same as above */
	sizeof(asn_DEF_listOfTrafficVolumes_tags_10)
		/sizeof(asn_DEF_listOfTrafficVolumes_tags_10[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_listOfTrafficVolumes_10,
	1,	/* Single element */
	&asn_SPC_listOfTrafficVolumes_specs_10	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_GWMBMSRecord_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct GWMBMSRecord, recordType),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RecordType,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"recordType"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct GWMBMSRecord, mbmsGWAddress),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_GSNAddress,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"mbmsGWAddress"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct GWMBMSRecord, chargingID),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ChargingID,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"chargingID"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct GWMBMSRecord, listofDownstreamNodes),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		0,
		&asn_DEF_listofDownstreamNodes_5,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"listofDownstreamNodes"
		},
	{ ATF_POINTER, 4, offsetof(struct GWMBMSRecord, accessPointNameNI),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_AccessPointNameNI,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"accessPointNameNI"
		},
	{ ATF_POINTER, 3, offsetof(struct GWMBMSRecord, pdpPDNType),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PDPType,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"pdpPDNType"
		},
	{ ATF_POINTER, 2, offsetof(struct GWMBMSRecord, servedPDPPDNAddress),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_PDPAddress,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"servedPDPPDNAddress"
		},
	{ ATF_POINTER, 1, offsetof(struct GWMBMSRecord, listOfTrafficVolumes),
		(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
		0,
		&asn_DEF_listOfTrafficVolumes_10,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"listOfTrafficVolumes"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct GWMBMSRecord, recordOpeningTime),
		(ASN_TAG_CLASS_CONTEXT | (8 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_TimeStamp,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"recordOpeningTime"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct GWMBMSRecord, duration),
		(ASN_TAG_CLASS_CONTEXT | (9 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CallDuration,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"duration"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct GWMBMSRecord, causeForRecClosing),
		(ASN_TAG_CLASS_CONTEXT | (10 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CauseForRecClosing,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"causeForRecClosing"
		},
	{ ATF_POINTER, 8, offsetof(struct GWMBMSRecord, diagnostics),
		(ASN_TAG_CLASS_CONTEXT | (11 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_Diagnostics,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"diagnostics"
		},
	{ ATF_POINTER, 7, offsetof(struct GWMBMSRecord, recordSequenceNumber),
		(ASN_TAG_CLASS_CONTEXT | (12 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"recordSequenceNumber"
		},
	{ ATF_POINTER, 6, offsetof(struct GWMBMSRecord, nodeID),
		(ASN_TAG_CLASS_CONTEXT | (13 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NodeID,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"nodeID"
		},
	{ ATF_POINTER, 5, offsetof(struct GWMBMSRecord, recordExtensions),
		(ASN_TAG_CLASS_CONTEXT | (14 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ManagementExtensions,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"recordExtensions"
		},
	{ ATF_POINTER, 4, offsetof(struct GWMBMSRecord, localSequenceNumber),
		(ASN_TAG_CLASS_CONTEXT | (15 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LocalSequenceNumber,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"localSequenceNumber"
		},
	{ ATF_POINTER, 3, offsetof(struct GWMBMSRecord, mbmsInformation),
		(ASN_TAG_CLASS_CONTEXT | (16 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MBMSInformation,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"mbmsInformation"
		},
	{ ATF_POINTER, 2, offsetof(struct GWMBMSRecord, commonTeid),
		(ASN_TAG_CLASS_CONTEXT | (17 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CTEID,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"commonTeid"
		},
	{ ATF_POINTER, 1, offsetof(struct GWMBMSRecord, iPMulticastSourceAddress),
		(ASN_TAG_CLASS_CONTEXT | (18 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_PDPAddress,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"iPMulticastSourceAddress"
		},
};
static ber_tlv_tag_t asn_DEF_GWMBMSRecord_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (17 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_GWMBMSRecord_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* recordType */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* mbmsGWAddress */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* chargingID */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* listofDownstreamNodes */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* accessPointNameNI */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* pdpPDNType */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 }, /* servedPDPPDNAddress */
    { (ASN_TAG_CLASS_CONTEXT | (7 << 2)), 7, 0, 0 }, /* listOfTrafficVolumes */
    { (ASN_TAG_CLASS_CONTEXT | (8 << 2)), 8, 0, 0 }, /* recordOpeningTime */
    { (ASN_TAG_CLASS_CONTEXT | (9 << 2)), 9, 0, 0 }, /* duration */
    { (ASN_TAG_CLASS_CONTEXT | (10 << 2)), 10, 0, 0 }, /* causeForRecClosing */
    { (ASN_TAG_CLASS_CONTEXT | (11 << 2)), 11, 0, 0 }, /* diagnostics */
    { (ASN_TAG_CLASS_CONTEXT | (12 << 2)), 12, 0, 0 }, /* recordSequenceNumber */
    { (ASN_TAG_CLASS_CONTEXT | (13 << 2)), 13, 0, 0 }, /* nodeID */
    { (ASN_TAG_CLASS_CONTEXT | (14 << 2)), 14, 0, 0 }, /* recordExtensions */
    { (ASN_TAG_CLASS_CONTEXT | (15 << 2)), 15, 0, 0 }, /* localSequenceNumber */
    { (ASN_TAG_CLASS_CONTEXT | (16 << 2)), 16, 0, 0 }, /* mbmsInformation */
    { (ASN_TAG_CLASS_CONTEXT | (17 << 2)), 17, 0, 0 }, /* commonTeid */
    { (ASN_TAG_CLASS_CONTEXT | (18 << 2)), 18, 0, 0 } /* iPMulticastSourceAddress */
};
static uint8_t asn_MAP_GWMBMSRecord_mmap_1[(19 + (8 * sizeof(unsigned int)) - 1) / 8] = {
	(1 << 7) | (1 << 6) | (1 << 5) | (1 << 4) | (0 << 3) | (0 << 2) | (0 << 1) | (0 << 0),
	(1 << 7) | (1 << 6) | (1 << 5) | (0 << 4) | (0 << 3) | (0 << 2) | (0 << 1) | (0 << 0),
	(0 << 7) | (0 << 6) | (0 << 5)
};
static asn_SET_specifics_t asn_SPC_GWMBMSRecord_specs_1 = {
	sizeof(struct GWMBMSRecord),
	offsetof(struct GWMBMSRecord, _asn_ctx),
	offsetof(struct GWMBMSRecord, _presence_map),
	asn_MAP_GWMBMSRecord_tag2el_1,
	19,	/* Count of tags in the map */
	asn_MAP_GWMBMSRecord_tag2el_1,	/* Same as above */
	19,	/* Count of tags in the CXER map */
	0,	/* Whether extensible */
	(unsigned int *)asn_MAP_GWMBMSRecord_mmap_1	/* Mandatory elements map */
};
asn_TYPE_descriptor_t asn_DEF_GWMBMSRecord = {
	"GWMBMSRecord",
	"GWMBMSRecord",
	SET_free,
	SET_print,
	SET_constraint,
	SET_decode_ber,
	SET_encode_der,
	SET_decode_xer,
	SET_encode_xer,
	0, 0,	/* No PER support, use "-gen-PER" to enable */
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_GWMBMSRecord_tags_1,
	sizeof(asn_DEF_GWMBMSRecord_tags_1)
		/sizeof(asn_DEF_GWMBMSRecord_tags_1[0]), /* 1 */
	asn_DEF_GWMBMSRecord_tags_1,	/* Same as above */
	sizeof(asn_DEF_GWMBMSRecord_tags_1)
		/sizeof(asn_DEF_GWMBMSRecord_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_GWMBMSRecord_1,
	19,	/* Elements count */
	&asn_SPC_GWMBMSRecord_specs_1	/* Additional specs */
};

