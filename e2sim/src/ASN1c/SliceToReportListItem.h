/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "E2SM-KPM-RC"
 * 	found in "e2sm-kpm-rc.asn"
 * 	`asn1c -fcompound-names -fno-include-deps -findirect-choice -pdu=auto -gen-PER -gen-OER -no-gen-example -D .`
 */

#ifndef	_SliceToReportListItem_H_
#define	_SliceToReportListItem_H_


#include "asn_application.h"

/* Including external dependencies */
#include "S-NSSAI.h"
#include "asn_SEQUENCE_OF.h"
#include "constr_SEQUENCE_OF.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct FQIPERSlicesPerPlmnListItem;

/* SliceToReportListItem */
typedef struct SliceToReportListItem {
	S_NSSAI_t	 sliceID;
	struct SliceToReportListItem__fQIPERSlicesPerPlmnList {
		A_SEQUENCE_OF(struct FQIPERSlicesPerPlmnListItem) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} fQIPERSlicesPerPlmnList;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SliceToReportListItem_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SliceToReportListItem;
extern asn_SEQUENCE_specifics_t asn_SPC_SliceToReportListItem_specs_1;
extern asn_TYPE_member_t asn_MBR_SliceToReportListItem_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _SliceToReportListItem_H_ */
#include "asn_internal.h"
