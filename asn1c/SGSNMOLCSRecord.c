/*
 * Generated by asn1c-0.9.27 (http://lionet.info/asn1c)
 * From ASN.1 module "GPRSChargingDataTypesV1171"
 * 	found in "../GPRSChargingDataTypesV1171_py_asn1c_2.asn"
 */

#include "SGSNMOLCSRecord.h"

static asn_TYPE_member_t asn_MBR_SGSNMOLCSRecord_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct SGSNMOLCSRecord, recordType),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RecordType,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"recordType"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SGSNMOLCSRecord, recordingEntity),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RecordingEntity,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"recordingEntity"
		},
	{ ATF_POINTER, 2, offsetof(struct SGSNMOLCSRecord, lcsClientType),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LCSClientType,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"lcsClientType"
		},
	{ ATF_POINTER, 1, offsetof(struct SGSNMOLCSRecord, lcsClientIdentity),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LCSClientIdentity,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"lcsClientIdentity"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SGSNMOLCSRecord, servedIMSI),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_IMSI,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"servedIMSI"
		},
	{ ATF_POINTER, 2, offsetof(struct SGSNMOLCSRecord, servedMSISDN),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MSISDN,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"servedMSISDN"
		},
	{ ATF_POINTER, 1, offsetof(struct SGSNMOLCSRecord, sgsnAddress),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_GSNAddress,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"sgsnAddress"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SGSNMOLCSRecord, locationMethod),
		(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LocationMethod,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"locationMethod"
		},
	{ ATF_POINTER, 3, offsetof(struct SGSNMOLCSRecord, lcsQos),
		(ASN_TAG_CLASS_CONTEXT | (8 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LCSQoSInfo,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"lcsQos"
		},
	{ ATF_POINTER, 2, offsetof(struct SGSNMOLCSRecord, lcsPriority),
		(ASN_TAG_CLASS_CONTEXT | (9 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LCS_Priority,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"lcsPriority"
		},
	{ ATF_POINTER, 1, offsetof(struct SGSNMOLCSRecord, mlcNumber),
		(ASN_TAG_CLASS_CONTEXT | (10 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ISDN_AddressString,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"mlcNumber"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SGSNMOLCSRecord, eventTimeStamp),
		(ASN_TAG_CLASS_CONTEXT | (11 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_TimeStamp,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"eventTimeStamp"
		},
	{ ATF_POINTER, 9, offsetof(struct SGSNMOLCSRecord, measurementDuration),
		(ASN_TAG_CLASS_CONTEXT | (12 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CallDuration,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"measurementDuration"
		},
	{ ATF_POINTER, 8, offsetof(struct SGSNMOLCSRecord, location),
		(ASN_TAG_CLASS_CONTEXT | (13 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LocationAreaAndCell,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"location"
		},
	{ ATF_POINTER, 7, offsetof(struct SGSNMOLCSRecord, routingArea),
		(ASN_TAG_CLASS_CONTEXT | (14 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RoutingAreaCode,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"routingArea"
		},
	{ ATF_POINTER, 6, offsetof(struct SGSNMOLCSRecord, locationEstimate),
		(ASN_TAG_CLASS_CONTEXT | (15 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Ext_GeographicalInformation,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"locationEstimate"
		},
	{ ATF_POINTER, 5, offsetof(struct SGSNMOLCSRecord, positioningData),
		(ASN_TAG_CLASS_CONTEXT | (16 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PositioningData,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"positioningData"
		},
	{ ATF_POINTER, 4, offsetof(struct SGSNMOLCSRecord, lcsCause),
		(ASN_TAG_CLASS_CONTEXT | (17 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LCSCause,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"lcsCause"
		},
	{ ATF_POINTER, 3, offsetof(struct SGSNMOLCSRecord, diagnostics),
		(ASN_TAG_CLASS_CONTEXT | (18 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_Diagnostics,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"diagnostics"
		},
	{ ATF_POINTER, 2, offsetof(struct SGSNMOLCSRecord, nodeID),
		(ASN_TAG_CLASS_CONTEXT | (19 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NodeID,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"nodeID"
		},
	{ ATF_POINTER, 1, offsetof(struct SGSNMOLCSRecord, localSequenceNumber),
		(ASN_TAG_CLASS_CONTEXT | (20 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LocalSequenceNumber,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"localSequenceNumber"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SGSNMOLCSRecord, chargingCharacteristics),
		(ASN_TAG_CLASS_CONTEXT | (21 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ChargingCharacteristics,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"chargingCharacteristics"
		},
	{ ATF_POINTER, 3, offsetof(struct SGSNMOLCSRecord, chChSelectionMode),
		(ASN_TAG_CLASS_CONTEXT | (22 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ChChSelectionMode,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"chChSelectionMode"
		},
	{ ATF_POINTER, 2, offsetof(struct SGSNMOLCSRecord, rATType),
		(ASN_TAG_CLASS_CONTEXT | (23 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RATType,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"rATType"
		},
	{ ATF_POINTER, 1, offsetof(struct SGSNMOLCSRecord, recordExtensions),
		(ASN_TAG_CLASS_CONTEXT | (24 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ManagementExtensions,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"recordExtensions"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SGSNMOLCSRecord, causeForRecClosing),
		(ASN_TAG_CLASS_CONTEXT | (25 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CauseForRecClosing,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"causeForRecClosing"
		},
};
static ber_tlv_tag_t asn_DEF_SGSNMOLCSRecord_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (17 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_SGSNMOLCSRecord_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* recordType */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* recordingEntity */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* lcsClientType */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* lcsClientIdentity */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* servedIMSI */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* servedMSISDN */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 }, /* sgsnAddress */
    { (ASN_TAG_CLASS_CONTEXT | (7 << 2)), 7, 0, 0 }, /* locationMethod */
    { (ASN_TAG_CLASS_CONTEXT | (8 << 2)), 8, 0, 0 }, /* lcsQos */
    { (ASN_TAG_CLASS_CONTEXT | (9 << 2)), 9, 0, 0 }, /* lcsPriority */
    { (ASN_TAG_CLASS_CONTEXT | (10 << 2)), 10, 0, 0 }, /* mlcNumber */
    { (ASN_TAG_CLASS_CONTEXT | (11 << 2)), 11, 0, 0 }, /* eventTimeStamp */
    { (ASN_TAG_CLASS_CONTEXT | (12 << 2)), 12, 0, 0 }, /* measurementDuration */
    { (ASN_TAG_CLASS_CONTEXT | (13 << 2)), 13, 0, 0 }, /* location */
    { (ASN_TAG_CLASS_CONTEXT | (14 << 2)), 14, 0, 0 }, /* routingArea */
    { (ASN_TAG_CLASS_CONTEXT | (15 << 2)), 15, 0, 0 }, /* locationEstimate */
    { (ASN_TAG_CLASS_CONTEXT | (16 << 2)), 16, 0, 0 }, /* positioningData */
    { (ASN_TAG_CLASS_CONTEXT | (17 << 2)), 17, 0, 0 }, /* lcsCause */
    { (ASN_TAG_CLASS_CONTEXT | (18 << 2)), 18, 0, 0 }, /* diagnostics */
    { (ASN_TAG_CLASS_CONTEXT | (19 << 2)), 19, 0, 0 }, /* nodeID */
    { (ASN_TAG_CLASS_CONTEXT | (20 << 2)), 20, 0, 0 }, /* localSequenceNumber */
    { (ASN_TAG_CLASS_CONTEXT | (21 << 2)), 21, 0, 0 }, /* chargingCharacteristics */
    { (ASN_TAG_CLASS_CONTEXT | (22 << 2)), 22, 0, 0 }, /* chChSelectionMode */
    { (ASN_TAG_CLASS_CONTEXT | (23 << 2)), 23, 0, 0 }, /* rATType */
    { (ASN_TAG_CLASS_CONTEXT | (24 << 2)), 24, 0, 0 }, /* recordExtensions */
    { (ASN_TAG_CLASS_CONTEXT | (25 << 2)), 25, 0, 0 } /* causeForRecClosing */
};
static uint8_t asn_MAP_SGSNMOLCSRecord_mmap_1[(26 + (8 * sizeof(unsigned int)) - 1) / 8] = {
	(1 << 7) | (1 << 6) | (0 << 5) | (0 << 4) | (1 << 3) | (0 << 2) | (0 << 1) | (1 << 0),
	(0 << 7) | (0 << 6) | (0 << 5) | (1 << 4) | (0 << 3) | (0 << 2) | (0 << 1) | (0 << 0),
	(0 << 7) | (0 << 6) | (0 << 5) | (0 << 4) | (0 << 3) | (1 << 2) | (0 << 1) | (0 << 0),
	(0 << 7) | (1 << 6)
};
static asn_SET_specifics_t asn_SPC_SGSNMOLCSRecord_specs_1 = {
	sizeof(struct SGSNMOLCSRecord),
	offsetof(struct SGSNMOLCSRecord, _asn_ctx),
	offsetof(struct SGSNMOLCSRecord, _presence_map),
	asn_MAP_SGSNMOLCSRecord_tag2el_1,
	26,	/* Count of tags in the map */
	asn_MAP_SGSNMOLCSRecord_tag2el_1,	/* Same as above */
	26,	/* Count of tags in the CXER map */
	0,	/* Whether extensible */
	(unsigned int *)asn_MAP_SGSNMOLCSRecord_mmap_1	/* Mandatory elements map */
};
asn_TYPE_descriptor_t asn_DEF_SGSNMOLCSRecord = {
	"SGSNMOLCSRecord",
	"SGSNMOLCSRecord",
	SET_free,
	SET_print,
	SET_constraint,
	SET_decode_ber,
	SET_encode_der,
	SET_decode_xer,
	SET_encode_xer,
	0, 0,	/* No PER support, use "-gen-PER" to enable */
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_SGSNMOLCSRecord_tags_1,
	sizeof(asn_DEF_SGSNMOLCSRecord_tags_1)
		/sizeof(asn_DEF_SGSNMOLCSRecord_tags_1[0]), /* 1 */
	asn_DEF_SGSNMOLCSRecord_tags_1,	/* Same as above */
	sizeof(asn_DEF_SGSNMOLCSRecord_tags_1)
		/sizeof(asn_DEF_SGSNMOLCSRecord_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_SGSNMOLCSRecord_1,
	26,	/* Elements count */
	&asn_SPC_SGSNMOLCSRecord_specs_1	/* Additional specs */
};

