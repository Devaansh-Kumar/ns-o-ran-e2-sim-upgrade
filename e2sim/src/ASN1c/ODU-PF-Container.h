/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "E2SM-KPM-RC"
 * 	found in "e2sm-kpm-rc.asn"
 * 	`asn1c -fcompound-names -fno-include-deps -findirect-choice -pdu=auto -gen-PER -gen-OER -no-gen-example -D .`
 */

#ifndef	_ODU_PF_Container_H_
#define	_ODU_PF_Container_H_


#include "asn_application.h"

/* Including external dependencies */
#include "asn_SEQUENCE_OF.h"
#include "constr_SEQUENCE_OF.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct CellResourceReportListItem;

/* ODU-PF-Container */
typedef struct ODU_PF_Container {
	struct ODU_PF_Container__cellResourceReportList {
		A_SEQUENCE_OF(struct CellResourceReportListItem) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} cellResourceReportList;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ODU_PF_Container_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_ODU_PF_Container;
extern asn_SEQUENCE_specifics_t asn_SPC_ODU_PF_Container_specs_1;
extern asn_TYPE_member_t asn_MBR_ODU_PF_Container_1[1];

#ifdef __cplusplus
}
#endif

#endif	/* _ODU_PF_Container_H_ */
#include "asn_internal.h"
