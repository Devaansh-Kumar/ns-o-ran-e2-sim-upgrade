/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "E2SM-KPM-RC"
 * 	found in "e2sm-kpm-rc.asn"
 * 	`asn1c -fcompound-names -fno-include-deps -findirect-choice -pdu=auto -gen-PER -gen-OER -no-gen-example -D .`
 */

#ifndef	_RRCEvent_H_
#define	_RRCEvent_H_


#include "asn_application.h"

/* Including external dependencies */
#include "NativeEnumerated.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum RRCEvent {
	RRCEvent_b1	= 0,
	RRCEvent_a3	= 1,
	RRCEvent_a5	= 2,
	RRCEvent_periodic	= 3
	/*
	 * Enumeration is extensible
	 */
} e_RRCEvent;

/* RRCEvent */
typedef long	 RRCEvent_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_RRCEvent_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_RRCEvent;
extern const asn_INTEGER_specifics_t asn_SPC_RRCEvent_specs_1;
asn_struct_free_f RRCEvent_free;
asn_struct_print_f RRCEvent_print;
asn_constr_check_f RRCEvent_constraint;
ber_type_decoder_f RRCEvent_decode_ber;
der_type_encoder_f RRCEvent_encode_der;
xer_type_decoder_f RRCEvent_decode_xer;
xer_type_encoder_f RRCEvent_encode_xer;
oer_type_decoder_f RRCEvent_decode_oer;
oer_type_encoder_f RRCEvent_encode_oer;
per_type_decoder_f RRCEvent_decode_uper;
per_type_encoder_f RRCEvent_encode_uper;
per_type_decoder_f RRCEvent_decode_aper;
per_type_encoder_f RRCEvent_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _RRCEvent_H_ */
#include "asn_internal.h"
