/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "E2SM-KPM-RC"
 * 	found in "e2sm-kpm-rc.asn"
 * 	`asn1c -fcompound-names -fno-include-deps -findirect-choice -pdu=auto -gen-PER -gen-OER -no-gen-example -D .`
 */

#ifndef	_NRCGI_H_
#define	_NRCGI_H_


#include "asn_application.h"

/* Including external dependencies */
#include "PLMN-Identity.h"
#include "NRCellIdentity.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* NRCGI */
typedef struct NRCGI {
	PLMN_Identity_t	 pLMN_Identity;
	NRCellIdentity_t	 nRCellIdentity;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NRCGI_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_NRCGI;
extern asn_SEQUENCE_specifics_t asn_SPC_NRCGI_specs_1;
extern asn_TYPE_member_t asn_MBR_NRCGI_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _NRCGI_H_ */
#include "asn_internal.h"
