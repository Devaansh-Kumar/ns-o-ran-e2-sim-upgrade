/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "E2SM-KPM-RC"
 * 	found in "e2sm-kpm-rc.asn"
 * 	`asn1c -fcompound-names -fno-include-deps -findirect-choice -pdu=auto -gen-PER -gen-OER -no-gen-example -D .`
 */

#ifndef	_RANParameter_Item_H_
#define	_RANParameter_Item_H_


#include "asn_application.h"

/* Including external dependencies */
#include "RANParameter-ID.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct RANParameter_ValueType;

/* RANParameter-Item */
typedef struct RANParameter_Item {
	RANParameter_ID_t	 ranParameterItem_ID;
	struct RANParameter_ValueType	*ranParameterItem_valueType;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RANParameter_Item_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RANParameter_Item;
extern asn_SEQUENCE_specifics_t asn_SPC_RANParameter_Item_specs_1;
extern asn_TYPE_member_t asn_MBR_RANParameter_Item_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _RANParameter_Item_H_ */
#include "asn_internal.h"
