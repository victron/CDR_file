/*
 * Generated by asn1c-0.9.27 (http://lionet.info/asn1c)
 * From ASN.1 module "GPRSChargingDataTypesV1171"
 * 	found in "../GPRSChargingDataTypesV1171_py_asn1c_2.asn"
 */

#ifndef	_SGSNSMTRecord_H_
#define	_SGSNSMTRecord_H_


#include <asn_application.h>

/* Including external dependencies */
#include "RecordType.h"
#include "IMSI.h"
#include "IMEI.h"
#include "MSISDN.h"
#include "MSNetworkCapability.h"
#include "AddressString.h"
#include "RecordingEntity.h"
#include "LocationAreaCode.h"
#include "RoutingAreaCode.h"
#include "CellId.h"
#include "TimeStamp.h"
#include "NodeID.h"
#include "LocalSequenceNumber.h"
#include "ChargingCharacteristics.h"
#include "RATType.h"
#include "ChChSelectionMode.h"
#include "ServingNodeType.h"
#include "DiameterIdentity.h"
#include <OCTET_STRING.h>
#include <constr_SET.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */

/*
 * Method of determining the components presence
 */
typedef enum SGSNSMTRecord_PR {
	SGSNSMTRecord_PR_recordType,	/* Member recordType is present */
	SGSNSMTRecord_PR_servedIMSI,	/* Member servedIMSI is present */
	SGSNSMTRecord_PR_servedIMEI,	/* Member servedIMEI is present */
	SGSNSMTRecord_PR_servedMSISDN,	/* Member servedMSISDN is present */
	SGSNSMTRecord_PR_msNetworkCapability,	/* Member msNetworkCapability is present */
	SGSNSMTRecord_PR_serviceCentre,	/* Member serviceCentre is present */
	SGSNSMTRecord_PR_recordingEntity,	/* Member recordingEntity is present */
	SGSNSMTRecord_PR_locationArea,	/* Member locationArea is present */
	SGSNSMTRecord_PR_routingArea,	/* Member routingArea is present */
	SGSNSMTRecord_PR_cellIdentifier,	/* Member cellIdentifier is present */
	SGSNSMTRecord_PR_eventTimeStamp,	/* Member eventTimeStamp is present */
	SGSNSMTRecord_PR_smsResult,	/* Member smsResult is present */
	SGSNSMTRecord_PR_recordExtensions,	/* Member recordExtensions is present */
	SGSNSMTRecord_PR_nodeID,	/* Member nodeID is present */
	SGSNSMTRecord_PR_localSequenceNumber,	/* Member localSequenceNumber is present */
	SGSNSMTRecord_PR_chargingCharacteristics,	/* Member chargingCharacteristics is present */
	SGSNSMTRecord_PR_rATType,	/* Member rATType is present */
	SGSNSMTRecord_PR_chChSelectionMode,	/* Member chChSelectionMode is present */
	SGSNSMTRecord_PR_cAMELInformationSMS,	/* Member cAMELInformationSMS is present */
	SGSNSMTRecord_PR_originatingAddress,	/* Member originatingAddress is present */
	SGSNSMTRecord_PR_servingNodeType,	/* Member servingNodeType is present */
	SGSNSMTRecord_PR_servingNodeAddress,	/* Member servingNodeAddress is present */
	SGSNSMTRecord_PR_servingNodeiPv6Address,	/* Member servingNodeiPv6Address is present */
	SGSNSMTRecord_PR_mMEName,	/* Member mMEName is present */
	SGSNSMTRecord_PR_mMERealm,	/* Member mMERealm is present */
	SGSNSMTRecord_PR_userLocationInformation,	/* Member userLocationInformation is present */
} SGSNSMTRecord_PR;

/* Forward declarations */
struct Diagnostics;
struct ManagementExtensions;
struct CAMELInformationSMS;
struct IPAddress;

/* SGSNSMTRecord */
typedef struct SGSNSMTRecord {
	RecordType_t	 recordType;
	IMSI_t	 servedIMSI;
	IMEI_t	*servedIMEI	/* OPTIONAL */;
	MSISDN_t	*servedMSISDN	/* OPTIONAL */;
	MSNetworkCapability_t	*msNetworkCapability	/* OPTIONAL */;
	AddressString_t	*serviceCentre	/* OPTIONAL */;
	RecordingEntity_t	*recordingEntity	/* OPTIONAL */;
	LocationAreaCode_t	*locationArea	/* OPTIONAL */;
	RoutingAreaCode_t	*routingArea	/* OPTIONAL */;
	CellId_t	*cellIdentifier	/* OPTIONAL */;
	TimeStamp_t	 eventTimeStamp;
	struct Diagnostics	*smsResult	/* OPTIONAL */;
	struct ManagementExtensions	*recordExtensions	/* OPTIONAL */;
	NodeID_t	*nodeID	/* OPTIONAL */;
	LocalSequenceNumber_t	*localSequenceNumber	/* OPTIONAL */;
	ChargingCharacteristics_t	 chargingCharacteristics;
	RATType_t	*rATType	/* OPTIONAL */;
	ChChSelectionMode_t	*chChSelectionMode	/* OPTIONAL */;
	struct CAMELInformationSMS	*cAMELInformationSMS	/* OPTIONAL */;
	AddressString_t	*originatingAddress	/* OPTIONAL */;
	ServingNodeType_t	 servingNodeType;
	struct IPAddress	*servingNodeAddress	/* OPTIONAL */;
	struct IPAddress	*servingNodeiPv6Address	/* OPTIONAL */;
	DiameterIdentity_t	*mMEName	/* OPTIONAL */;
	DiameterIdentity_t	*mMERealm	/* OPTIONAL */;
	OCTET_STRING_t	*userLocationInformation	/* OPTIONAL */;
	
	/* Presence bitmask: ASN_SET_ISPRESENT(pSGSNSMTRecord, SGSNSMTRecord_PR_x) */
	unsigned int _presence_map
		[((26+(8*sizeof(unsigned int))-1)/(8*sizeof(unsigned int)))];
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SGSNSMTRecord_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SGSNSMTRecord;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "SMSResult.h"
#include "ManagementExtensions.h"
#include "CAMELInformationSMS.h"
#include "GSNAddress.h"

#endif	/* _SGSNSMTRecord_H_ */
#include <asn_internal.h>