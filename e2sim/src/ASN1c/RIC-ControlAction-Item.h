/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "E2SM-KPM-RC"
 * 	found in "e2sm-kpm-rc.asn"
 * 	`asn1c -fcompound-names -fno-include-deps -findirect-choice -pdu=auto -gen-PER -gen-OER -no-gen-example -D .`
 */

#ifndef	_RIC_ControlAction_Item_H_
#define	_RIC_ControlAction_Item_H_


#include "asn_application.h"

/* Including external dependencies */
#include "RIC-ControlAction-ID.h"
#include "RIC-ControlAction-Name.h"
#include "asn_SEQUENCE_OF.h"
#include "constr_SEQUENCE_OF.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct RAN_ControlParameter_Item;

/* RIC-ControlAction-Item */
typedef struct RIC_ControlAction_Item {
	RIC_ControlAction_ID_t	 ric_ControlAction_ID;
	RIC_ControlAction_Name_t	 ric_ControlAction_Name;
	struct RIC_ControlAction_Item__ran_ControlParameters_List {
		A_SEQUENCE_OF(struct RAN_ControlParameter_Item) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ran_ControlParameters_List;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RIC_ControlAction_Item_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RIC_ControlAction_Item;
extern asn_SEQUENCE_specifics_t asn_SPC_RIC_ControlAction_Item_specs_1;
extern asn_TYPE_member_t asn_MBR_RIC_ControlAction_Item_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _RIC_ControlAction_Item_H_ */
#include "asn_internal.h"
