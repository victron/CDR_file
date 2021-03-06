/*
 * Generated by asn1c-0.9.27 (http://lionet.info/asn1c)
 * From ASN.1 module "GPRSChargingDataTypesV1171"
 * 	found in "../GPRSChargingDataTypesV1171_py_asn1c_2.asn"
 */

#include "SGWRecord.h"

static asn_TYPE_member_t asn_MBR_servingNodeAddress_6[] = {
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
static ber_tlv_tag_t asn_DEF_servingNodeAddress_tags_6[] = {
	(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_servingNodeAddress_specs_6 = {
	sizeof(struct SGWRecord__servingNodeAddress),
	offsetof(struct SGWRecord__servingNodeAddress, _asn_ctx),
	2,	/* XER encoding is XMLValueList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_servingNodeAddress_6 = {
	"servingNodeAddress",
	"servingNodeAddress",
	SEQUENCE_OF_free,
	SEQUENCE_OF_print,
	SEQUENCE_OF_constraint,
	SEQUENCE_OF_decode_ber,
	SEQUENCE_OF_encode_der,
	SEQUENCE_OF_decode_xer,
	SEQUENCE_OF_encode_xer,
	0, 0,	/* No PER support, use "-gen-PER" to enable */
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_servingNodeAddress_tags_6,
	sizeof(asn_DEF_servingNodeAddress_tags_6)
		/sizeof(asn_DEF_servingNodeAddress_tags_6[0]) - 1, /* 1 */
	asn_DEF_servingNodeAddress_tags_6,	/* Same as above */
	sizeof(asn_DEF_servingNodeAddress_tags_6)
		/sizeof(asn_DEF_servingNodeAddress_tags_6[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_servingNodeAddress_6,
	1,	/* Single element */
	&asn_SPC_servingNodeAddress_specs_6	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_listOfTrafficVolumes_12[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_ChangeOfCharCondition,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		""
		},
};
static ber_tlv_tag_t asn_DEF_listOfTrafficVolumes_tags_12[] = {
	(ASN_TAG_CLASS_CONTEXT | (12 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_listOfTrafficVolumes_specs_12 = {
	sizeof(struct SGWRecord__listOfTrafficVolumes),
	offsetof(struct SGWRecord__listOfTrafficVolumes, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_listOfTrafficVolumes_12 = {
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
	asn_DEF_listOfTrafficVolumes_tags_12,
	sizeof(asn_DEF_listOfTrafficVolumes_tags_12)
		/sizeof(asn_DEF_listOfTrafficVolumes_tags_12[0]) - 1, /* 1 */
	asn_DEF_listOfTrafficVolumes_tags_12,	/* Same as above */
	sizeof(asn_DEF_listOfTrafficVolumes_tags_12)
		/sizeof(asn_DEF_listOfTrafficVolumes_tags_12[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_listOfTrafficVolumes_12,
	1,	/* Single element */
	&asn_SPC_listOfTrafficVolumes_specs_12	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_servingNodeType_33[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (10 << 2)),
		0,
		&asn_DEF_ServingNodeType,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		""
		},
};
static ber_tlv_tag_t asn_DEF_servingNodeType_tags_33[] = {
	(ASN_TAG_CLASS_CONTEXT | (35 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_servingNodeType_specs_33 = {
	sizeof(struct SGWRecord__servingNodeType),
	offsetof(struct SGWRecord__servingNodeType, _asn_ctx),
	1,	/* XER encoding is XMLValueList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_servingNodeType_33 = {
	"servingNodeType",
	"servingNodeType",
	SEQUENCE_OF_free,
	SEQUENCE_OF_print,
	SEQUENCE_OF_constraint,
	SEQUENCE_OF_decode_ber,
	SEQUENCE_OF_encode_der,
	SEQUENCE_OF_decode_xer,
	SEQUENCE_OF_encode_xer,
	0, 0,	/* No PER support, use "-gen-PER" to enable */
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_servingNodeType_tags_33,
	sizeof(asn_DEF_servingNodeType_tags_33)
		/sizeof(asn_DEF_servingNodeType_tags_33[0]) - 1, /* 1 */
	asn_DEF_servingNodeType_tags_33,	/* Same as above */
	sizeof(asn_DEF_servingNodeType_tags_33)
		/sizeof(asn_DEF_servingNodeType_tags_33[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_servingNodeType_33,
	1,	/* Single element */
	&asn_SPC_servingNodeType_specs_33	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_servingNodeiPv6Address_46[] = {
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
static ber_tlv_tag_t asn_DEF_servingNodeiPv6Address_tags_46[] = {
	(ASN_TAG_CLASS_CONTEXT | (49 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_servingNodeiPv6Address_specs_46 = {
	sizeof(struct SGWRecord__servingNodeiPv6Address),
	offsetof(struct SGWRecord__servingNodeiPv6Address, _asn_ctx),
	2,	/* XER encoding is XMLValueList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_servingNodeiPv6Address_46 = {
	"servingNodeiPv6Address",
	"servingNodeiPv6Address",
	SEQUENCE_OF_free,
	SEQUENCE_OF_print,
	SEQUENCE_OF_constraint,
	SEQUENCE_OF_decode_ber,
	SEQUENCE_OF_encode_der,
	SEQUENCE_OF_decode_xer,
	SEQUENCE_OF_encode_xer,
	0, 0,	/* No PER support, use "-gen-PER" to enable */
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_servingNodeiPv6Address_tags_46,
	sizeof(asn_DEF_servingNodeiPv6Address_tags_46)
		/sizeof(asn_DEF_servingNodeiPv6Address_tags_46[0]) - 1, /* 1 */
	asn_DEF_servingNodeiPv6Address_tags_46,	/* Same as above */
	sizeof(asn_DEF_servingNodeiPv6Address_tags_46)
		/sizeof(asn_DEF_servingNodeiPv6Address_tags_46[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_servingNodeiPv6Address_46,
	1,	/* Single element */
	&asn_SPC_servingNodeiPv6Address_specs_46	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_SGWRecord_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct SGWRecord, recordType),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RecordType,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"recordType"
		},
	{ ATF_POINTER, 1, offsetof(struct SGWRecord, servedIMSI),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_IMSI,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"servedIMSI"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SGWRecord, s_GWAddress),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_GSNAddress,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"s-GWAddress"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SGWRecord, chargingID),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ChargingID,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"chargingID"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SGWRecord, servingNodeAddress),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		0,
		&asn_DEF_servingNodeAddress_6,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"servingNodeAddress"
		},
	{ ATF_POINTER, 5, offsetof(struct SGWRecord, accessPointNameNI),
		(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_AccessPointNameNI,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"accessPointNameNI"
		},
	{ ATF_POINTER, 4, offsetof(struct SGWRecord, pdpPDNType),
		(ASN_TAG_CLASS_CONTEXT | (8 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PDPType,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"pdpPDNType"
		},
	{ ATF_POINTER, 3, offsetof(struct SGWRecord, servedPDPPDNAddress),
		(ASN_TAG_CLASS_CONTEXT | (9 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_PDPAddress,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"servedPDPPDNAddress"
		},
	{ ATF_POINTER, 2, offsetof(struct SGWRecord, dynamicAddressFlag),
		(ASN_TAG_CLASS_CONTEXT | (11 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_DynamicAddressFlag,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"dynamicAddressFlag"
		},
	{ ATF_POINTER, 1, offsetof(struct SGWRecord, listOfTrafficVolumes),
		(ASN_TAG_CLASS_CONTEXT | (12 << 2)),
		0,
		&asn_DEF_listOfTrafficVolumes_12,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"listOfTrafficVolumes"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SGWRecord, recordOpeningTime),
		(ASN_TAG_CLASS_CONTEXT | (13 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_TimeStamp,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"recordOpeningTime"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SGWRecord, duration),
		(ASN_TAG_CLASS_CONTEXT | (14 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CallDuration,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"duration"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SGWRecord, causeForRecClosing),
		(ASN_TAG_CLASS_CONTEXT | (15 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CauseForRecClosing,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"causeForRecClosing"
		},
	{ ATF_POINTER, 7, offsetof(struct SGWRecord, diagnostics),
		(ASN_TAG_CLASS_CONTEXT | (16 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_Diagnostics,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"diagnostics"
		},
	{ ATF_POINTER, 6, offsetof(struct SGWRecord, recordSequenceNumber),
		(ASN_TAG_CLASS_CONTEXT | (17 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"recordSequenceNumber"
		},
	{ ATF_POINTER, 5, offsetof(struct SGWRecord, nodeID),
		(ASN_TAG_CLASS_CONTEXT | (18 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NodeID,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"nodeID"
		},
	{ ATF_POINTER, 4, offsetof(struct SGWRecord, recordExtensions),
		(ASN_TAG_CLASS_CONTEXT | (19 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ManagementExtensions,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"recordExtensions"
		},
	{ ATF_POINTER, 3, offsetof(struct SGWRecord, localSequenceNumber),
		(ASN_TAG_CLASS_CONTEXT | (20 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LocalSequenceNumber,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"localSequenceNumber"
		},
	{ ATF_POINTER, 2, offsetof(struct SGWRecord, apnSelectionMode),
		(ASN_TAG_CLASS_CONTEXT | (21 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_APNSelectionMode,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"apnSelectionMode"
		},
	{ ATF_POINTER, 1, offsetof(struct SGWRecord, servedMSISDN),
		(ASN_TAG_CLASS_CONTEXT | (22 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MSISDN,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"servedMSISDN"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SGWRecord, chargingCharacteristics),
		(ASN_TAG_CLASS_CONTEXT | (23 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ChargingCharacteristics,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"chargingCharacteristics"
		},
	{ ATF_POINTER, 8, offsetof(struct SGWRecord, chChSelectionMode),
		(ASN_TAG_CLASS_CONTEXT | (24 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ChChSelectionMode,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"chChSelectionMode"
		},
	{ ATF_POINTER, 7, offsetof(struct SGWRecord, iMSsignalingContext),
		(ASN_TAG_CLASS_CONTEXT | (25 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NULL,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"iMSsignalingContext"
		},
	{ ATF_POINTER, 6, offsetof(struct SGWRecord, servingNodePLMNIdentifier),
		(ASN_TAG_CLASS_CONTEXT | (27 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PLMN_Id,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"servingNodePLMNIdentifier"
		},
	{ ATF_POINTER, 5, offsetof(struct SGWRecord, servedIMEISV),
		(ASN_TAG_CLASS_CONTEXT | (29 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_IMEI,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"servedIMEISV"
		},
	{ ATF_POINTER, 4, offsetof(struct SGWRecord, rATType),
		(ASN_TAG_CLASS_CONTEXT | (30 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RATType,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"rATType"
		},
	{ ATF_POINTER, 3, offsetof(struct SGWRecord, mSTimeZone),
		(ASN_TAG_CLASS_CONTEXT | (31 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MSTimeZone,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"mSTimeZone"
		},
	{ ATF_POINTER, 2, offsetof(struct SGWRecord, userLocationInformation),
		(ASN_TAG_CLASS_CONTEXT | (32 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_OCTET_STRING,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"userLocationInformation"
		},
	{ ATF_POINTER, 1, offsetof(struct SGWRecord, sGWChange),
		(ASN_TAG_CLASS_CONTEXT | (34 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SGWChange,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"sGWChange"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SGWRecord, servingNodeType),
		(ASN_TAG_CLASS_CONTEXT | (35 << 2)),
		0,
		&asn_DEF_servingNodeType_33,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"servingNodeType"
		},
	{ ATF_POINTER, 13, offsetof(struct SGWRecord, p_GWAddressUsed),
		(ASN_TAG_CLASS_CONTEXT | (36 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_GSNAddress,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"p-GWAddressUsed"
		},
	{ ATF_POINTER, 12, offsetof(struct SGWRecord, p_GWPLMNIdentifier),
		(ASN_TAG_CLASS_CONTEXT | (37 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PLMN_Id,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"p-GWPLMNIdentifier"
		},
	{ ATF_POINTER, 11, offsetof(struct SGWRecord, startTime),
		(ASN_TAG_CLASS_CONTEXT | (38 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_TimeStamp,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"startTime"
		},
	{ ATF_POINTER, 10, offsetof(struct SGWRecord, stopTime),
		(ASN_TAG_CLASS_CONTEXT | (39 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_TimeStamp,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"stopTime"
		},
	{ ATF_POINTER, 9, offsetof(struct SGWRecord, pDNConnectionChargingID),
		(ASN_TAG_CLASS_CONTEXT | (40 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ChargingID,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"pDNConnectionChargingID"
		},
	{ ATF_POINTER, 8, offsetof(struct SGWRecord, iMSIunauthenticatedFlag),
		(ASN_TAG_CLASS_CONTEXT | (41 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NULL,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"iMSIunauthenticatedFlag"
		},
	{ ATF_POINTER, 7, offsetof(struct SGWRecord, userCSGInformation),
		(ASN_TAG_CLASS_CONTEXT | (42 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_UserCSGInformation,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"userCSGInformation"
		},
	{ ATF_POINTER, 6, offsetof(struct SGWRecord, servedPDPPDNAddressExt),
		(ASN_TAG_CLASS_CONTEXT | (43 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_PDPAddress,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"servedPDPPDNAddressExt"
		},
	{ ATF_POINTER, 5, offsetof(struct SGWRecord, lowPriorityIndicator),
		(ASN_TAG_CLASS_CONTEXT | (44 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NULL,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"lowPriorityIndicator"
		},
	{ ATF_POINTER, 4, offsetof(struct SGWRecord, dynamicAddressFlagExt),
		(ASN_TAG_CLASS_CONTEXT | (47 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_DynamicAddressFlag,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"dynamicAddressFlagExt"
		},
	{ ATF_POINTER, 3, offsetof(struct SGWRecord, s_GWiPv6Address),
		(ASN_TAG_CLASS_CONTEXT | (48 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_GSNAddress,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"s-GWiPv6Address"
		},
	{ ATF_POINTER, 2, offsetof(struct SGWRecord, servingNodeiPv6Address),
		(ASN_TAG_CLASS_CONTEXT | (49 << 2)),
		0,
		&asn_DEF_servingNodeiPv6Address_46,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"servingNodeiPv6Address"
		},
	{ ATF_POINTER, 1, offsetof(struct SGWRecord, p_GWiPv6AddressUsed),
		(ASN_TAG_CLASS_CONTEXT | (50 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_GSNAddress,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"p-GWiPv6AddressUsed"
		},
};
static ber_tlv_tag_t asn_DEF_SGWRecord_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (17 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_SGWRecord_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* recordType */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 1, 0, 0 }, /* servedIMSI */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 2, 0, 0 }, /* s-GWAddress */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 3, 0, 0 }, /* chargingID */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 4, 0, 0 }, /* servingNodeAddress */
    { (ASN_TAG_CLASS_CONTEXT | (7 << 2)), 5, 0, 0 }, /* accessPointNameNI */
    { (ASN_TAG_CLASS_CONTEXT | (8 << 2)), 6, 0, 0 }, /* pdpPDNType */
    { (ASN_TAG_CLASS_CONTEXT | (9 << 2)), 7, 0, 0 }, /* servedPDPPDNAddress */
    { (ASN_TAG_CLASS_CONTEXT | (11 << 2)), 8, 0, 0 }, /* dynamicAddressFlag */
    { (ASN_TAG_CLASS_CONTEXT | (12 << 2)), 9, 0, 0 }, /* listOfTrafficVolumes */
    { (ASN_TAG_CLASS_CONTEXT | (13 << 2)), 10, 0, 0 }, /* recordOpeningTime */
    { (ASN_TAG_CLASS_CONTEXT | (14 << 2)), 11, 0, 0 }, /* duration */
    { (ASN_TAG_CLASS_CONTEXT | (15 << 2)), 12, 0, 0 }, /* causeForRecClosing */
    { (ASN_TAG_CLASS_CONTEXT | (16 << 2)), 13, 0, 0 }, /* diagnostics */
    { (ASN_TAG_CLASS_CONTEXT | (17 << 2)), 14, 0, 0 }, /* recordSequenceNumber */
    { (ASN_TAG_CLASS_CONTEXT | (18 << 2)), 15, 0, 0 }, /* nodeID */
    { (ASN_TAG_CLASS_CONTEXT | (19 << 2)), 16, 0, 0 }, /* recordExtensions */
    { (ASN_TAG_CLASS_CONTEXT | (20 << 2)), 17, 0, 0 }, /* localSequenceNumber */
    { (ASN_TAG_CLASS_CONTEXT | (21 << 2)), 18, 0, 0 }, /* apnSelectionMode */
    { (ASN_TAG_CLASS_CONTEXT | (22 << 2)), 19, 0, 0 }, /* servedMSISDN */
    { (ASN_TAG_CLASS_CONTEXT | (23 << 2)), 20, 0, 0 }, /* chargingCharacteristics */
    { (ASN_TAG_CLASS_CONTEXT | (24 << 2)), 21, 0, 0 }, /* chChSelectionMode */
    { (ASN_TAG_CLASS_CONTEXT | (25 << 2)), 22, 0, 0 }, /* iMSsignalingContext */
    { (ASN_TAG_CLASS_CONTEXT | (27 << 2)), 23, 0, 0 }, /* servingNodePLMNIdentifier */
    { (ASN_TAG_CLASS_CONTEXT | (29 << 2)), 24, 0, 0 }, /* servedIMEISV */
    { (ASN_TAG_CLASS_CONTEXT | (30 << 2)), 25, 0, 0 }, /* rATType */
    { (ASN_TAG_CLASS_CONTEXT | (31 << 2)), 26, 0, 0 }, /* mSTimeZone */
    { (ASN_TAG_CLASS_CONTEXT | (32 << 2)), 27, 0, 0 }, /* userLocationInformation */
    { (ASN_TAG_CLASS_CONTEXT | (34 << 2)), 28, 0, 0 }, /* sGWChange */
    { (ASN_TAG_CLASS_CONTEXT | (35 << 2)), 29, 0, 0 }, /* servingNodeType */
    { (ASN_TAG_CLASS_CONTEXT | (36 << 2)), 30, 0, 0 }, /* p-GWAddressUsed */
    { (ASN_TAG_CLASS_CONTEXT | (37 << 2)), 31, 0, 0 }, /* p-GWPLMNIdentifier */
    { (ASN_TAG_CLASS_CONTEXT | (38 << 2)), 32, 0, 0 }, /* startTime */
    { (ASN_TAG_CLASS_CONTEXT | (39 << 2)), 33, 0, 0 }, /* stopTime */
    { (ASN_TAG_CLASS_CONTEXT | (40 << 2)), 34, 0, 0 }, /* pDNConnectionChargingID */
    { (ASN_TAG_CLASS_CONTEXT | (41 << 2)), 35, 0, 0 }, /* iMSIunauthenticatedFlag */
    { (ASN_TAG_CLASS_CONTEXT | (42 << 2)), 36, 0, 0 }, /* userCSGInformation */
    { (ASN_TAG_CLASS_CONTEXT | (43 << 2)), 37, 0, 0 }, /* servedPDPPDNAddressExt */
    { (ASN_TAG_CLASS_CONTEXT | (44 << 2)), 38, 0, 0 }, /* lowPriorityIndicator */
    { (ASN_TAG_CLASS_CONTEXT | (47 << 2)), 39, 0, 0 }, /* dynamicAddressFlagExt */
    { (ASN_TAG_CLASS_CONTEXT | (48 << 2)), 40, 0, 0 }, /* s-GWiPv6Address */
    { (ASN_TAG_CLASS_CONTEXT | (49 << 2)), 41, 0, 0 }, /* servingNodeiPv6Address */
    { (ASN_TAG_CLASS_CONTEXT | (50 << 2)), 42, 0, 0 } /* p-GWiPv6AddressUsed */
};
static uint8_t asn_MAP_SGWRecord_mmap_1[(43 + (8 * sizeof(unsigned int)) - 1) / 8] = {
	(1 << 7) | (0 << 6) | (1 << 5) | (1 << 4) | (1 << 3) | (0 << 2) | (0 << 1) | (0 << 0),
	(0 << 7) | (0 << 6) | (1 << 5) | (1 << 4) | (1 << 3) | (0 << 2) | (0 << 1) | (0 << 0),
	(0 << 7) | (0 << 6) | (0 << 5) | (0 << 4) | (1 << 3) | (0 << 2) | (0 << 1) | (0 << 0),
	(0 << 7) | (0 << 6) | (0 << 5) | (0 << 4) | (0 << 3) | (1 << 2) | (0 << 1) | (0 << 0),
	(0 << 7) | (0 << 6) | (0 << 5) | (0 << 4) | (0 << 3) | (0 << 2) | (0 << 1) | (0 << 0),
	(0 << 7) | (0 << 6) | (0 << 5)
};
static asn_SET_specifics_t asn_SPC_SGWRecord_specs_1 = {
	sizeof(struct SGWRecord),
	offsetof(struct SGWRecord, _asn_ctx),
	offsetof(struct SGWRecord, _presence_map),
	asn_MAP_SGWRecord_tag2el_1,
	43,	/* Count of tags in the map */
	asn_MAP_SGWRecord_tag2el_1,	/* Same as above */
	43,	/* Count of tags in the CXER map */
	0,	/* Whether extensible */
	(unsigned int *)asn_MAP_SGWRecord_mmap_1	/* Mandatory elements map */
};
asn_TYPE_descriptor_t asn_DEF_SGWRecord = {
	"SGWRecord",
	"SGWRecord",
	SET_free,
	SET_print,
	SET_constraint,
	SET_decode_ber,
	SET_encode_der,
	SET_decode_xer,
	SET_encode_xer,
	0, 0,	/* No PER support, use "-gen-PER" to enable */
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_SGWRecord_tags_1,
	sizeof(asn_DEF_SGWRecord_tags_1)
		/sizeof(asn_DEF_SGWRecord_tags_1[0]), /* 1 */
	asn_DEF_SGWRecord_tags_1,	/* Same as above */
	sizeof(asn_DEF_SGWRecord_tags_1)
		/sizeof(asn_DEF_SGWRecord_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_SGWRecord_1,
	43,	/* Elements count */
	&asn_SPC_SGWRecord_specs_1	/* Additional specs */
};

