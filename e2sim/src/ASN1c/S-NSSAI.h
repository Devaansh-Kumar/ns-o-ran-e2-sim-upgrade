/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "E2SM-KPM-RC"
 * 	found in "e2sm-kpm-rc.asn"
 * 	`asn1c -fcompound-names -fno-include-deps -findirect-choice -pdu=auto -gen-PER -gen-OER -no-gen-example -D .`
 */

#ifndef	_S_NSSAI_H_
#define	_S_NSSAI_H_


#include "asn_application.h"

/* Including external dependencies */
#include "OCTET_STRING.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* S-NSSAI */
typedef struct S_NSSAI {
	OCTET_STRING_t	 sST;
	OCTET_STRING_t	*sD;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} S_NSSAI_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_S_NSSAI;
extern asn_SEQUENCE_specifics_t asn_SPC_S_NSSAI_specs_1;
extern asn_TYPE_member_t asn_MBR_S_NSSAI_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _S_NSSAI_H_ */
#include "asn_internal.h"
