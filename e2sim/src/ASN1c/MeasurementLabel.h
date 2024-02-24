/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "E2SM-KPM-IEs"
 * 	found in "E2SM-KPM-v02.00.03.asn"
 * 	`asn1c -pdu=auto -fno-include-deps -fcompound-names -findirect-choice -gen-PER -gen-OER -no-gen-example -D E2SM-KPM-v02.00.03`
 */

#ifndef	_MeasurementLabel_H_
#define	_MeasurementLabel_H_


#include "asn_application.h"

/* Including external dependencies */
#include "PLMN-Identity.h"
#include "FiveQI.h"
#include "QFI.h"
#include "QCI.h"
#include "ARP.h"
#include "NativeInteger.h"
#include "NativeEnumerated.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum MeasurementLabel__sUM {
	MeasurementLabel__sUM_true	= 0
	/*
	 * Enumeration is extensible
	 */
} e_MeasurementLabel__sUM;
typedef enum MeasurementLabel__preLabelOverride {
	MeasurementLabel__preLabelOverride_true	= 0
	/*
	 * Enumeration is extensible
	 */
} e_MeasurementLabel__preLabelOverride;
typedef enum MeasurementLabel__startEndInd {
	MeasurementLabel__startEndInd_start	= 0,
	MeasurementLabel__startEndInd_end	= 1
	/*
	 * Enumeration is extensible
	 */
} e_MeasurementLabel__startEndInd;

/* Forward declarations */
struct SNSSAI;

/* MeasurementLabel */
typedef struct MeasurementLabel {
	PLMN_Identity_t	*plmnID;	/* OPTIONAL */
	struct SNSSAI	*sliceID;	/* OPTIONAL */
	FiveQI_t	*fiveQI;	/* OPTIONAL */
	QFI_t	*qFI;	/* OPTIONAL */
	QCI_t	*qCI;	/* OPTIONAL */
	QCI_t	*qCImax;	/* OPTIONAL */
	QCI_t	*qCImin;	/* OPTIONAL */
	ARP_t	*aRPmax;	/* OPTIONAL */
	ARP_t	*aRPmin;	/* OPTIONAL */
	long	*bitrateRange;	/* OPTIONAL */
	long	*layerMU_MIMO;	/* OPTIONAL */
	long	*sUM;	/* OPTIONAL */
	long	*distBinX;	/* OPTIONAL */
	long	*distBinY;	/* OPTIONAL */
	long	*distBinZ;	/* OPTIONAL */
	long	*preLabelOverride;	/* OPTIONAL */
	long	*startEndInd;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} MeasurementLabel_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_sUM_13;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_preLabelOverride_19;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_startEndInd_22;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_MeasurementLabel;
extern asn_SEQUENCE_specifics_t asn_SPC_MeasurementLabel_specs_1;
extern asn_TYPE_member_t asn_MBR_MeasurementLabel_1[17];

#ifdef __cplusplus
}
#endif

#endif	/* _MeasurementLabel_H_ */
#include "asn_internal.h"
