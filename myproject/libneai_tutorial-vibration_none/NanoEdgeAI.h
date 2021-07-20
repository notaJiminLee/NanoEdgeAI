/* =============
Copyright (c) 2020, Cartesiam

All rights reserved.

Redistribution and use in source and binary forms, with or without modification, are permitted provided that
the following conditions are met:

* Redistributions of source code must retain the above copyright notice, this list of conditions and the
  following disclaimer.

* Redistributions in binary form must reproduce the above copyright notice, this list of conditions and the
  following disclaimer in the documentation and/or other materials provided with the distribution.

* Neither the name of the copyright holders nor the names of its contributors may be used to endorse or promote
  products derived from this software without specific prior written permission.

*THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES,
INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY,
WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE
USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.*
*/

/**
 * NanoEdge AI header file
 */

/* Includes */
#include <stdint.h>

/* Define */
#define NEAI_ID "606fe5838de1036cee648ace"
#define AXIS_NUMBER 3
#define DATA_INPUT_USER 512

/* Function prototypes */
#ifdef __cplusplus
extern "C" {
#endif
	uint8_t NanoEdgeAI_initialize(void);
	uint8_t NanoEdgeAI_learn(float data_input[]);
	uint8_t NanoEdgeAI_detect(float data_input[]);
	void NanoEdgeAI_set_sensitivity(float sensitivity);
	float NanoEdgeAI_get_sensitivity(void);
	uint8_t NanoEdgeAI_get_status(void);
#ifdef __cplusplus
}
#endif
