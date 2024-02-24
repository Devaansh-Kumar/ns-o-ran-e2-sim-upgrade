/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "E2SM-KPM-RC"
 * 	found in "e2sm-kpm-rc.asn"
 * 	`asn1c -fcompound-names -fno-include-deps -findirect-choice -pdu=auto -gen-PER -gen-OER -no-gen-example -D .`
 */

#ifndef	_E2SM_KPM_RANFunctionDefinition_H_
#define	_E2SM_KPM_RANFunctionDefinition_H_


#include "asn_application.h"

/* Including external dependencies */
#include "RANfunction-Name.h"
#include "asn_SEQUENCE_OF.h"
#include "constr_SEQUENCE_OF.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct RIC_EventTriggerStyle_Item;
struct RIC_ReportStyle_Item;

/* E2SM-KPM-RANFunctionDefinition */
typedef struct E2SM_KPM_RANFunctionDefinition {
	RANfunction_Name_t	 ranFunction_Name;
	struct E2SM_KPM_RANFunctionDefinition__ric_EventTriggerStyle_List {
		A_SEQUENCE_OF(struct RIC_EventTriggerStyle_Item) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ric_EventTriggerStyle_List;
	struct E2SM_KPM_RANFunctionDefinition__ric_ReportStyle_List {
		A_SEQUENCE_OF(struct RIC_ReportStyle_Item) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ric_ReportStyle_List;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} E2SM_KPM_RANFunctionDefinition_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_E2SM_KPM_RANFunctionDefinition;

#ifdef __cplusplus
}
#endif

#endif	/* _E2SM_KPM_RANFunctionDefinition_H_ */
#include "asn_internal.h"
