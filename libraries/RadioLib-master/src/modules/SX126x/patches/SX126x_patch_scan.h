/*
Binary in this file originates from https://github.com/Lora-net/sx1302_hal/tree/master
As such, license of the above repository is reproduced here.

Copyright (c) 2019, SEMTECH S.A.
All rights reserved.

Redistribution and use in source and binary forms, with or without
modification, are permitted provided that the following conditions are met:
	* Redistributions of source code must retain the above copyright
	  notice, this list of conditions and the following disclaimer.
	* Redistributions in binary form must reproduce the above copyright
	  notice, this list of conditions and the following disclaimer in the
	  documentation and/or other materials provided with the distribution.
	* Neither the name of the Semtech corporation nor the
	  names of its contributors may be used to endorse or promote products
	  derived from this software without specific prior written permission.

THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
DISCLAIMED. IN NO EVENT SHALL SEMTECH S.A. BE LIABLE FOR ANY
DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
(INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
(INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
*/

#if !defined(_RADIOLIB_SX126X_PATCH_SCAN_H)
#define _RADIOLIB_SX126X_PATCH_SCAN_H

#include "../../../TypeDef.h"

#if !RADIOLIB_EXCLUDE_SX126X

// the following is a binary patch to the SX1262
// this patch is needed to enable spectral scan functionality
const uint32_t sx126x_patch_scan[] RADIOLIB_NONVOLATILE = {
    0x337fe1, 0x337fdb, 0x337fd5, 0x337fcf, 0x3a7fc8, 0x3f3fff,
    0x0378ff, 0x0379ff, 0x3a7fb7, 0x16a901, 0x16a801, 0x23ffff,
    0x0378ff, 0x0379ff, 0x3a7faf, 0x16a901, 0x16a801, 0x23ffff,
    0x0378ff, 0x0379ff, 0x3a7f34, 0x16a901, 0x16a801, 0x23ffff,
    0x0378ff, 0x0379ff, 0x3a7e80, 0x16a901, 0x16a801, 0x23ffff,
    0x0378ff, 0x0379ff, 0x3a7fc3, 0x16a901, 0x16a801, 0x337fc9,
    0x0378ff, 0x0379ff, 0x3a7fc0, 0x16a901, 0x16a801, 0x337fc9,
    0x0378ff, 0x0379ff, 0x3a7fbd, 0x16a901, 0x16a801, 0x337fc9,
    0x0378ff, 0x0379ff, 0x3a7fba, 0x16a901, 0x16a801, 0x337fc9,
    0x23ffff, 0x0ea1fc, 0x0ea0df, 0x0eafc9, 0x02cf0e, 0x23ffff,
    0x0eacff, 0x0eabff, 0x23ffff, 0x0eacff, 0x0eabff, 0x23ffff,
    0x0eacff, 0x0eabff, 0x23ffff, 0x0eacff, 0x0eabff, 0x23ffff,
    0x0378ff, 0x0379ff, 0x3a7fc8, 0x0eacfd, 0x0eabff, 0x16a901,
    0x16a801, 0x23ffff, 0x0374ff, 0x0375ff, 0x0378ff, 0x0379ff,
    0x16affe, 0x0ea5ff, 0x0ea465, 0x1dbb04, 0x0e1bfd, 0x307fa3,
    0x1caf00, 0x327fa0, 0x0eacf7, 0x0eabff, 0x337f3a, 0x1cad04,
    0x0eacfe, 0x0eabff, 0x0dbfdd, 0x307f97, 0x0dafcc, 0x0defbb,
    0x0dbfdd, 0x347f9b, 0x0eecef, 0x0caffc, 0x04ade8, 0x0cbdcd,
    0x01bde8, 0x04abe8, 0x0ebbbf, 0x01bbe8, 0x04abe8, 0x0ebbdf,
    0x01bbe8, 0x1ca800, 0x0ea9ff, 0x04abe3, 0x0e2b01, 0x01bbe3,
    0x04abee, 0x0e2b01, 0x01bbee, 0x1ca202, 0x1ca301, 0x02f300,
    0x02f201, 0x0ea064, 0x0ea1f7, 0x18ab00, 0x367f58, 0x0ea041,
    0x0ea1f7, 0x18ab00, 0x1c1b03, 0x317f3f, 0x1ea201, 0x1ea300,
    0x0cb23f, 0x327f4a, 0x1cab04, 0x0eaefe, 0x0dbfbb, 0x307f6c,
    0x0dafee, 0x0dbfbb, 0x347f6f, 0x04abee, 0x0cbbeb, 0x01bbee,
    0x0eacff, 0x0eabff, 0x0c1b9f, 0x327f64, 0x0c1c8f, 0x317f5c,
    0x3fffff, 0x0d1fcc, 0x0d5fbb, 0x0c1b9f, 0x327f5d, 0x0c1c8f,
    0x357f63, 0x0ea064, 0x0ea1f7, 0x18ab00, 0x327f7c, 0x1cad04,
    0x0eacfe, 0x0dbfdd, 0x307f51, 0x0dafcc, 0x0dbfdd, 0x347f54,
    0x0d8fcb, 0x04acee, 0x0c2bcb, 0x01bbee, 0x0eacfd, 0x0eabff,
    0x337f3a, 0x1cad04, 0x0eacfe, 0x0dbfdd, 0x307f43, 0x0dafcc,
    0x0dbfdd, 0x347f46, 0x0d8fcb, 0x04acee, 0x0c2bcb, 0x337f6a,
    0x0cb23f, 0x367f75, 0x0dbf22, 0x0dff33, 0x337f75, 0x16af02,
    0x16a901, 0x16a801, 0x16a501, 0x16a401, 0x23ffff, 0x0374ff,
    0x0375ff, 0x0378ff, 0x0379ff, 0x16afe0, 0x0ea5ff, 0x0ea465,
    0x1ca802, 0x0ea9ff, 0x0eafff, 0x02ff00, 0x0eaff7, 0x02ff01,
    0x0eafef, 0x02ff02, 0x0eafe7, 0x02ff03, 0x0eafdf, 0x02ff04,
    0x0eafd7, 0x02ff05, 0x0eafcf, 0x02ff06, 0x0eafc7, 0x02ff07,
    0x0eafbf, 0x02ff08, 0x0eafb7, 0x02ff09, 0x0eafaf, 0x02ff0a,
    0x0eafa7, 0x02ff0b, 0x0eaf9f, 0x02ff0c, 0x0eaf97, 0x02ff0d,
    0x0eaf8f, 0x02ff0e, 0x0eaf87, 0x02ff0f, 0x0eaf7f, 0x02ff10,
    0x0eaf77, 0x02ff11, 0x0eaf6f, 0x02ff12, 0x0eaf67, 0x02ff13,
    0x0eaf5f, 0x02ff14, 0x0eaf57, 0x02ff15, 0x0eaf4f, 0x02ff16,
    0x0eaf47, 0x02ff17, 0x0eaf3f, 0x02ff18, 0x0eaf37, 0x02ff19,
    0x0eaf2f, 0x02ff1a, 0x0eaf27, 0x02ff1b, 0x0eaf1f, 0x02ff1c,
    0x0eaf17, 0x02ff1d, 0x0eaf0f, 0x02ff1e, 0x0eaf07, 0x02ff1f,
    0x04abee, 0x0e2b01, 0x01bbee, 0x0eacff, 0x0eabff, 0x0cafc0,
    0x0ec0ff, 0x0cafb1, 0x0ed1fb, 0x0eafff, 0x02cf00, 0x0d1fcc,
    0x0d5fbb, 0x0e1bff, 0x327edb, 0x0e1c00, 0x347ee6, 0x0ea2ff,
    0x0ea3ff, 0x0ea032, 0x0ea1f8, 0x0eaff0, 0x02cf00, 0x0ea064,
    0x0ea1f7, 0x18ad00, 0x1c1300, 0x327ece, 0x1c1201, 0x317e9b,
    0x0e1dff, 0x367e9b, 0x0ea041, 0x0ea1f7, 0x18ab00, 0x0eebdf,
    0x0cafbc, 0x0eabff, 0x0ccccc, 0x0cdbbb, 0x0cafc0, 0x0ec0ff,
    0x0cafb1, 0x0ed1fb, 0x18ab01, 0x0eacff, 0x18ae02, 0x0eadff,
    0x0ccecc, 0x0cddbb, 0x0d1fcc, 0x0d5fbb, 0x0cafbe, 0x0eadff,
    0x02ce01, 0x02cc02, 0x0d1f22, 0x0d5f33, 0x0ea064, 0x0ea1f7,
    0x18ad00, 0x0eacff, 0x0eabff, 0x0c1b9f, 0x327ea9, 0x0c1c8f,
    0x317ea1, 0x3fffff, 0x0d1fcc, 0x0d5fbb, 0x0c1b9f, 0x327ea2,
    0x0c1c8f, 0x357ea8, 0x1c1300, 0x327e9e, 0x1c1201, 0x317e9b,
    0x0e1dff, 0x327ecb, 0x0e1dff, 0x367e90, 0x0ea032, 0x0ea1f8,
    0x0eaf00, 0x02cf00, 0x0ea1fb, 0x0ea0ff, 0x0eaf00, 0x02cf00,
    0x337e88, 0x0ea032, 0x0ea1f8, 0x0eaf0f, 0x02cf00, 0x0ea1fb,
    0x0ea0ff, 0x0eaf0f, 0x02cf00, 0x0eacfd, 0x0eabff, 0x16af20,
    0x16a901, 0x16a801, 0x16a501, 0x16a401, 0x23ffff, 0x0eacf7,
    0x0eabff, 0x23ffff
};

#endif

#endif
