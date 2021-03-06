/*
 * Generated by asn1c-0.9.27 (http://lionet.info/asn1c)
 * From ASN.1 module "GPRSChargingDataTypesV1171"
 * 	found in "../GPRSChargingDataTypesV1171_py_asn1c_2.asn"
 */

#ifndef	_SGSNMOLCSRecord_H_
#define	_SGSNMOLCSRecord_H_


#include <asn_application.h>

/* Including external dependencies */
#include "RecordType.h"
#include "RecordingEntity.h"
#include "LCSClientType.h"
#include "IMSI.h"
#include "MSISDN.h"
#include "LocationMethod.h"
#include "LCSQoSInfo.h"
#include "LCS-Priority.h"
#include "ISDN-AddressString.h"
#include "TimeStamp.h"
#include "CallDuration.h"
#include "RoutingAreaCode.h"
#include "Ext-GeographicalInformation.h"
#include "PositioningData.h"
#include "LCSCause.h"
#include "NodeID.h"
#include "LocalSequenceNumber.h"
#include "ChargingCharacteristics.h"
#include "ChChSelectionMode.h"
#include "RATType.h"
#include "CauseForRecClosing.h"
#include <constr_SET.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */

/*
 * Method of determining the components presence
 */
typedef enum SGSNMOLCSRecord_PR {
	SGSNMOLCSRecord_PR_recordType,	/* Member recordType is present */
	SGSNMOLCSRecord_PR_recordingEntity,	/* Member recordingEntity is present */
	SGSNMOLCSRecord_PR_lcsClientType,	/* Member lcsClientType is present */
	SGSNMOLCSRecord_PR_lcsClientIdentity,	/* Member lcsClientIdentity is present */
	SGSNMOLCSRecord_PR_servedIMSI,	/* Member servedIMSI is present */
	SGSNMOLCSRecord_PR_servedMSISDN,	/* Member servedMSISDN is present */
	SGSNMOLCSRecord_PR_sgsnAddress,	/* Member sgsnAddress is present */
	SGSNMOLCSRecord_PR_locationMethod,	/* Member locationMethod is present */
	SGSNMOLCSRecord_PR_lcsQos,	/* Member lcsQos is present */
	SGSNMOLCSRecord_PR_lcsPriority,	/* Member lcsPriority is present */
	SGSNMOLCSRecord_PR_mlcNumber,	/* Member mlcNumber is present */
	SGSNMOLCSRecord_PR_eventTimeStamp,	/* Member eventTimeStamp is present */
	SGSNMOLCSRecord_PR_measurementDuration,	/* Member measurementDuration is present */
	SGSNMOLCSRecord_PR_location,	/* Member location is present */
	SGSNMOLCSRecord_PR_routingArea,	/* Member routingArea is present */
	SGSNMOLCSRecord_PR_locationEstimate,	/* Member locationEstimate is present */
	SGSNMOLCSRecord_PR_positioningData,	/* Member positioningData is present */
	SGSNMOLCSRecord_PR_lcsCause,	/* Member lcsCause is present */
	SGSNMOLCSRecord_PR_diagnostics,	/* Member diagnostics is present */
	SGSNMOLCSRecord_PR_nodeID,	/* Member nodeID is present */
	SGSNMOLCSRecord_PR_localSequenceNumber,	/* Member localSequenceNumber is present */
	SGSNMOLCSRecord_PR_chargingCharacteristics,	/* Member chargingCharacteristics is present */
	SGSNMOLCSRecord_PR_chChSelectionMode,	/* Member chChSelectionMode is present */
	SGSNMOLCSRecord_PR_rATType,	/* Member rATType is present */
	SGSNMOLCSRecord_PR_recordExtensions,	/* Member recordExtensions is present */
	SGSNMOLCSRecord_PR_causeForRecClosing,	/* Member causeForRecClosing is present */
} SGSNMOLCSRecord_PR;

/* Forward declarations */
struct LCSClientIdentity;
struct IPAddress;
struct LocationAreaAndCell;
struct Diagnostics;
struct ManagementExtensions;

/* SGSNMOLCSRecord */
typedef struct SGSNMOLCSRecord {
	RecordType_t	 recordType;
	RecordingEntity_t	 recordingEntity;
	LCSClientType_t	*lcsClientType	/* OPTIONAL */;
	struct LCSClientIdentity	*lcsClientIdentity	/* OPTIONAL */;
	IMSI_t	 servedIMSI;
	MSISDN_t	*servedMSISDN	/* OPTIONAL */;
	struct IPAddress	*sgsnAddress	/* OPTIONAL */;
	LocationMethod_t	 locationMethod;
	LCSQoSInfo_t	*lcsQos	/* OPTIONAL */;
	LCS_Priority_t	*lcsPriority	/* OPTIONAL */;
	ISDN_AddressString_t	*mlcNumber	/* OPTIONAL */;
	TimeStamp_t	 eventTimeStamp;
	CallDuration_t	*measurementDuration	/* OPTIONAL */;
	struct LocationAreaAndCell	*location	/* OPTIONAL */;
	RoutingAreaCode_t	*routingArea	/* OPTIONAL */;
	Ext_GeographicalInformation_t	*locationEstimate	/* OPTIONAL */;
	PositioningData_t	*positioningData	/* OPTIONAL */;
	LCSCause_t	*lcsCause	/* OPTIONAL */;
	struct Diagnostics	*diagnostics	/* OPTIONAL */;
	NodeID_t	*nodeID	/* OPTIONAL */;
	LocalSequenceNumber_t	*localSequenceNumber	/* OPTIONAL */;
	ChargingCharacteristics_t	 chargingCharacteristics;
	ChChSelectionMode_t	*chChSelectionMode	/* OPTIONAL */;
	RATType_t	*rATType	/* OPTIONAL */;
	struct ManagementExtensions	*recordExtensions	/* OPTIONAL */;
	CauseForRecClosing_t	 causeForRecClosing;
	
	/* Presence bitmask: ASN_SET_ISPRESENT(pSGSNMOLCSRecord, SGSNMOLCSRecord_PR_x) */
	unsigned int _presence_map
		[((26+(8*sizeof(unsigned int))-1)/(8*sizeof(unsigned int)))];
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SGSNMOLCSRecord_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SGSNMOLCSRecord;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "LCSClientIdentity.h"
#include "GSNAddress.h"
#include "LocationAreaAndCell.h"
#include "Diagnostics.h"
#include "ManagementExtensions.h"

#endif	/* _SGSNMOLCSRecord_H_ */
#include <asn_internal.h>
