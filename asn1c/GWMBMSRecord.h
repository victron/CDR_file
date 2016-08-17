/*
 * Generated by asn1c-0.9.27 (http://lionet.info/asn1c)
 * From ASN.1 module "GPRSChargingDataTypesV1171"
 * 	found in "../GPRSChargingDataTypesV1171_py_asn1c_2.asn"
 */

#ifndef	_GWMBMSRecord_H_
#define	_GWMBMSRecord_H_


#include <asn_application.h>

/* Including external dependencies */
#include "RecordType.h"
#include "GSNAddress.h"
#include "ChargingID.h"
#include "AccessPointNameNI.h"
#include "PDPType.h"
#include "TimeStamp.h"
#include "CallDuration.h"
#include "CauseForRecClosing.h"
#include <NativeInteger.h>
#include "NodeID.h"
#include "LocalSequenceNumber.h"
#include "CTEID.h"
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>
#include <constr_SET.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */

/*
 * Method of determining the components presence
 */
typedef enum GWMBMSRecord_PR {
	GWMBMSRecord_PR_recordType,	/* Member recordType is present */
	GWMBMSRecord_PR_mbmsGWAddress,	/* Member mbmsGWAddress is present */
	GWMBMSRecord_PR_chargingID,	/* Member chargingID is present */
	GWMBMSRecord_PR_listofDownstreamNodes,	/* Member listofDownstreamNodes is present */
	GWMBMSRecord_PR_accessPointNameNI,	/* Member accessPointNameNI is present */
	GWMBMSRecord_PR_pdpPDNType,	/* Member pdpPDNType is present */
	GWMBMSRecord_PR_servedPDPPDNAddress,	/* Member servedPDPPDNAddress is present */
	GWMBMSRecord_PR_listOfTrafficVolumes,	/* Member listOfTrafficVolumes is present */
	GWMBMSRecord_PR_recordOpeningTime,	/* Member recordOpeningTime is present */
	GWMBMSRecord_PR_duration,	/* Member duration is present */
	GWMBMSRecord_PR_causeForRecClosing,	/* Member causeForRecClosing is present */
	GWMBMSRecord_PR_diagnostics,	/* Member diagnostics is present */
	GWMBMSRecord_PR_recordSequenceNumber,	/* Member recordSequenceNumber is present */
	GWMBMSRecord_PR_nodeID,	/* Member nodeID is present */
	GWMBMSRecord_PR_recordExtensions,	/* Member recordExtensions is present */
	GWMBMSRecord_PR_localSequenceNumber,	/* Member localSequenceNumber is present */
	GWMBMSRecord_PR_mbmsInformation,	/* Member mbmsInformation is present */
	GWMBMSRecord_PR_commonTeid,	/* Member commonTeid is present */
	GWMBMSRecord_PR_iPMulticastSourceAddress,	/* Member iPMulticastSourceAddress is present */
} GWMBMSRecord_PR;

/* Forward declarations */
struct PDPAddress;
struct Diagnostics;
struct ManagementExtensions;
struct MBMSInformation;
struct IPAddress;
struct ChangeOfMBMSCondition;

/* GWMBMSRecord */
typedef struct GWMBMSRecord {
	RecordType_t	 recordType;
	GSNAddress_t	 mbmsGWAddress;
	ChargingID_t	 chargingID;
	struct GWMBMSRecord__listofDownstreamNodes {
		A_SEQUENCE_OF(struct IPAddress) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} listofDownstreamNodes;
	AccessPointNameNI_t	*accessPointNameNI	/* OPTIONAL */;
	PDPType_t	*pdpPDNType	/* OPTIONAL */;
	struct PDPAddress	*servedPDPPDNAddress	/* OPTIONAL */;
	struct GWMBMSRecord__listOfTrafficVolumes {
		A_SEQUENCE_OF(struct ChangeOfMBMSCondition) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *listOfTrafficVolumes;
	TimeStamp_t	 recordOpeningTime;
	CallDuration_t	 duration;
	CauseForRecClosing_t	 causeForRecClosing;
	struct Diagnostics	*diagnostics	/* OPTIONAL */;
	long	*recordSequenceNumber	/* OPTIONAL */;
	NodeID_t	*nodeID	/* OPTIONAL */;
	struct ManagementExtensions	*recordExtensions	/* OPTIONAL */;
	LocalSequenceNumber_t	*localSequenceNumber	/* OPTIONAL */;
	struct MBMSInformation	*mbmsInformation	/* OPTIONAL */;
	CTEID_t	*commonTeid	/* OPTIONAL */;
	struct PDPAddress	*iPMulticastSourceAddress	/* OPTIONAL */;
	
	/* Presence bitmask: ASN_SET_ISPRESENT(pGWMBMSRecord, GWMBMSRecord_PR_x) */
	unsigned int _presence_map
		[((19+(8*sizeof(unsigned int))-1)/(8*sizeof(unsigned int)))];
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} GWMBMSRecord_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_GWMBMSRecord;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "PDPAddress.h"
#include "Diagnostics.h"
#include "ManagementExtensions.h"
#include "MBMSInformation.h"
#include "GSNAddress.h"
#include "ChangeOfMBMSCondition.h"

#endif	/* _GWMBMSRecord_H_ */
#include <asn_internal.h>