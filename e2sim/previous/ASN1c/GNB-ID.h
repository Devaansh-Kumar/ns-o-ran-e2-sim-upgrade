/*****************************************************************************
#                                                                            *
# Copyright 2019 AT&T Intellectual Property                                  *
#                                                                            *
# Licensed under the Apache License, Version 2.0 (the "License");            *
# you may not use this file except in compliance with the License.           *
# You may obtain a copy of the License at                                    *
#                                                                            *
#      http://www.apache.org/licenses/LICENSE-2.0                            *
#                                                                            *
# Unless required by applicable law or agreed to in writing, software        *
# distributed under the License is distributed on an "AS IS" BASIS,          *
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.   *
# See the License for the specific language governing permissions and        *
# limitations under the License.                                             *
#                                                                            *
******************************************************************************/

/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "X2AP-IEs"
 * 	found in "../../asnFiles/X2AP-IEs.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -fno-include-deps -findirect-choice -gen-PER -no-gen-OER -D.`
 */

#ifndef	_GNB_ID_H_
#define	_GNB_ID_H_


#include "asn_application.h"

/* Including external dependencies */
#include "BIT_STRING.h"
#include "constr_CHOICE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum GNB_ID_PR {
	GNB_ID_PR_NOTHING,	/* No components present */
	GNB_ID_PR_gNB_ID
	/* Extensions may appear below */
	
} GNB_ID_PR;

/* GNB-ID */
typedef struct GNB_ID {
	GNB_ID_PR present;
	union GNB_ID_u {
		BIT_STRING_t	 gNB_ID;
		/*
		 * This type is extensible,
		 * possible extensions are below.
		 */
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} GNB_ID_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_GNB_ID;
extern asn_CHOICE_specifics_t asn_SPC_GNB_ID_specs_1;
extern asn_TYPE_member_t asn_MBR_GNB_ID_1[1];
extern asn_per_constraints_t asn_PER_type_GNB_ID_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _GNB_ID_H_ */
#include "asn_internal.h"