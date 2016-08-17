/*
 * Generated by asn1c-0.9.27 (http://lionet.info/asn1c)
 * From ASN.1 module "GPRSChargingDataTypesV1171"
 * 	found in "../GPRSChargingDataTypesV1171_py_asn1c_2.asn"
 */

#include "IPBinV6AddressWithPrefixLength.h"

static int asn_DFL_3_set_64(int set_value, void **sptr) {
	PDPAddressPrefixLength_t *st = *sptr;
	
	if(!st) {
		if(!set_value) return -1;	/* Not a default value */
		st = (*sptr = CALLOC(1, sizeof(*st)));
		if(!st) return -1;
	}
	
	if(set_value) {
		/* Install default value 64 */
		*st = 64;
		return 0;
	} else {
		/* Test default value 64 */
		return (*st == 64);
	}
}
static asn_TYPE_member_t asn_MBR_IPBinV6AddressWithPrefixLength_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct IPBinV6AddressWithPrefixLength, iPBinV6Address),
		(ASN_TAG_CLASS_UNIVERSAL | (4 << 2)),
		0,
		&asn_DEF_IPBinV6Address,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"iPBinV6Address"
		},
	{ ATF_POINTER, 1, offsetof(struct IPBinV6AddressWithPrefixLength, pDPAddressPrefixLength),
		(ASN_TAG_CLASS_UNIVERSAL | (2 << 2)),
		0,
		&asn_DEF_PDPAddressPrefixLength,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		asn_DFL_3_set_64,	/* DEFAULT 64 */
		"pDPAddressPrefixLength"
		},
};
static ber_tlv_tag_t asn_DEF_IPBinV6AddressWithPrefixLength_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_IPBinV6AddressWithPrefixLength_tag2el_1[] = {
    { (ASN_TAG_CLASS_UNIVERSAL | (2 << 2)), 1, 0, 0 }, /* pDPAddressPrefixLength */
    { (ASN_TAG_CLASS_UNIVERSAL | (4 << 2)), 0, 0, 0 } /* iPBinV6Address */
};
static asn_SEQUENCE_specifics_t asn_SPC_IPBinV6AddressWithPrefixLength_specs_1 = {
	sizeof(struct IPBinV6AddressWithPrefixLength),
	offsetof(struct IPBinV6AddressWithPrefixLength, _asn_ctx),
	asn_MAP_IPBinV6AddressWithPrefixLength_tag2el_1,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_IPBinV6AddressWithPrefixLength = {
	"IPBinV6AddressWithPrefixLength",
	"IPBinV6AddressWithPrefixLength",
	SEQUENCE_free,
	SEQUENCE_print,
	SEQUENCE_constraint,
	SEQUENCE_decode_ber,
	SEQUENCE_encode_der,
	SEQUENCE_decode_xer,
	SEQUENCE_encode_xer,
	0, 0,	/* No PER support, use "-gen-PER" to enable */
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_IPBinV6AddressWithPrefixLength_tags_1,
	sizeof(asn_DEF_IPBinV6AddressWithPrefixLength_tags_1)
		/sizeof(asn_DEF_IPBinV6AddressWithPrefixLength_tags_1[0]), /* 1 */
	asn_DEF_IPBinV6AddressWithPrefixLength_tags_1,	/* Same as above */
	sizeof(asn_DEF_IPBinV6AddressWithPrefixLength_tags_1)
		/sizeof(asn_DEF_IPBinV6AddressWithPrefixLength_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_IPBinV6AddressWithPrefixLength_1,
	2,	/* Elements count */
	&asn_SPC_IPBinV6AddressWithPrefixLength_specs_1	/* Additional specs */
};

