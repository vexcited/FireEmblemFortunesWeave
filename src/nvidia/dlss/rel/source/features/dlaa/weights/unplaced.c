#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_QWORD* nvidia_dlss_rel_source_features_dlaa_976b0(_QWORD*);
__int64 NgxRoutine_2b0();
__int64 NgxRoutine_420(_QWORD);
__int64 NgxRoutine_420_alt1(unsigned __int64) __asm__("NgxRoutine_420");
__int64 NgxRoutine_430(_QWORD, _QWORD);
__int64 NgxRoutine_e3000(void);
__int64 memcpy_plt(_QWORD, _QWORD, _QWORD);
__int64 nvidia_dlss_a8840(_QWORD);
__int64 nvidia_dlss_rel_source_features_dlaa_weights_980c0_alt1(
    _QWORD,
    _QWORD) __asm__("nvidia_dlss_rel_source_features_dlaa_weights_980c0");
extern __int64 NgxData_2b6aec0;
extern __int64 NgxData_2b6aee8;
extern __int64 NgxData_2b6b230;
extern __int64 NgxData_952c18[4];
extern __int64* NgxData_952bc0;
void __attribute__((noreturn)) NgxRoutine_27cf0();
void __attribute__((noreturn)) nvidia_dlss_rel_source_common_33410();
_QWORD* nvidia_dlss_rel_source_features_dlaa_weights_97d20(_QWORD* result,
                                                           unsigned __int64 a2);
__int64 nvidia_dlss_rel_source_features_dlaa_weights_97ee0(__int64* a1,
                                                           __int64* a2);
_QWORD* nvidia_dlss_rel_source_features_dlaa_weights_980c0(_QWORD* result,
                                                           _QWORD* a2);
__int64 nvidia_dlss_rel_source_features_dlaa_weights_981e0();
__int64 nvidia_dlss_rel_source_features_dlaa_weights_98230();
__int64 nvidia_dlss_rel_source_features_dlaa_weights_98260();

_QWORD* nvidia_dlss_rel_source_features_dlaa_weights_97d20(_QWORD* result,
                                                           unsigned __int64 a2)
{
  __int64 v2;
  __int64 v3;
  _QWORD* v4;
  __int64 v5;
  __int64 v6;
  unsigned __int64 v7;
  __int64 v8;
  unsigned __int64 v9;
  __int64 v10;
  __int64 v11;
  unsigned __int64 v12;
  __int64 v13;
  bool v14;
  __int64 v15;
  unsigned __int64 v16;
  unsigned __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;

  v2 = result[1];
  v3 = result[2];
  v4 = result;
  if (a2 <= (v3 - v2) >> 1) {
    if (a2 != 0) {
      v11 = v2 + 2 * a2;
      v12 = 2 * a2 - 2;
      if ((~(_BYTE)v12 & 0xE) != 0) {
        v13 = -(__int64)(((unsigned __int8)((unsigned int)v12 >> 1) + 1) & 7);
        do {
          *(_WORD*)v2 = 0;
          v2 += 2;
          v14 = __CFADD__(v13++, 1);
        } while (!v14);
      }
      if (v12 >= 0xE) {
        do {
          *(_QWORD*)v2 = 0;
          *(_QWORD*)(v2 + 8) = 0;
          v2 += 16;
        } while (v2 != v11);
      }
      v2 = v11;
    }
    result[1] = v2;
  }
  else {
    v5 = v2 - *result;
    v6 = a2 + (v5 >> 1);
    if (v6 < 0) {
      nvidia_dlss_rel_source_common_33410();
    }
    v7 = v3 - *result;
    if (v7 > v6) {
      v6 = v7;
    }
    if (v7 >= 0x7FFFFFFFFFFFFFFELL) {
      v8 = 0x7FFFFFFFFFFFFFFFLL;
    }
    else {
      v8 = v6;
    }
    if (v8 != 0) {
      if (v8 < 0) {
        NgxRoutine_27cf0();
      }
      v9 = a2;
      v10 = NgxRoutine_420(2 * v8);
      a2 = v9;
    }
    else {
      v10 = 0;
    }
    v15 = v10 + v5;
    v16 = 2 * a2 - 2;
    v17 = v10 + v5 + 2 * a2;
    if ((~(_BYTE)v16 & 0xE) != 0) {
      v19 = -(__int64)(((unsigned __int8)((unsigned int)v16 >> 1) + 1) & 7);
      v18 = v10 + v5;
      do {
        *(_WORD*)v18 = 0;
        v18 += 2;
        v14 = __CFADD__(v19++, 1);
      } while (!v14);
    }
    else {
      v18 = v10 + v5;
    }
    if (v16 >= 0xE) {
      do {
        *(_QWORD*)v18 = 0;
        *(_QWORD*)(v18 + 8) = 0;
        v18 += 16;
      } while (v18 != v17);
    }
    v20 = v10 + 2 * v8;
    v21 = *v4;
    v22 = v4[1] - *v4;
    v23 = v15 - v22;
    result = (_QWORD*)memcpy_plt(v15 - v22, *v4, v22);
    v24 = v4[2];
    *v4 = v23;
    v4[1] = v17;
    v4[2] = v20;
    if (v21 != 0) {
      return (_QWORD*)NgxRoutine_430(v21, v24 - v21);
    }
  }
  return result;
}

__int64 nvidia_dlss_rel_source_features_dlaa_weights_97ee0(__int64* a1,
                                                           __int64* a2)
{
  __int64 v2;
  __int64 v3;
  unsigned __int64 v4;
  __int64 v5;
  unsigned __int64 v8;
  unsigned __int64 v9;
  __int64 v10;
  __int64* v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64* v23;
  __int64* v24;
  __int64 v25;
  __int64* v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v31;
  __int64* v32;
  __int64* v33;
  unsigned __int64 v34;
  _QWORD* v35;

  v2 = *a1;
  v3 = a1[1] - *a1;
  v4 = 1 - 0x5555555555555555LL * (v3 >> 4);
  if (v4 > 0x555555555555555LL) {
    nvidia_dlss_rel_source_common_33410();
  }
  v5 = a1[2];
  v35 = a1 + 2;
  v8 = 0xAAAAAAAAAAAAAAABLL * ((v5 - v2) >> 4);
  if (2 * v8 > v4) {
    v4 = 2 * v8;
  }
  if (v8 >= 0x2AAAAAAAAAAAAAALL) {
    v9 = 0x555555555555555LL;
  }
  else {
    v9 = v4;
  }
  if (v9 != 0) {
    if (v9 > 0x555555555555555LL) {
      NgxRoutine_27cf0();
    }
    v10 = NgxRoutine_420_alt1(48 * v9);
  }
  else {
    v10 = 0;
  }
  v11 = (__int64*)(v10 + v3);
  v31 = v10;
  v32 = v11;
  *v11 = 0;
  v11[1] = 0;
  v11[2] = 0;
  v33 = (__int64*)(v10 + v3);
  v34 = v10 + 48 * v9;
  v13 = *a2;
  v12 = a2[1];
  v14 = v12 - *a2;
  if (v12 != *a2) {
    if (v14 < 0) {
      goto LABEL_26;
    }
    v15 = NgxRoutine_420_alt1(v12 - *a2);
    v16 = v15 + v14;
    *v11 = v15;
    v11[1] = v15;
    v11[2] = v15 + v14;
    memcpy_plt(v15, v13, v14);
    v11[1] = v16;
  }
  v18 = a2[3];
  v17 = a2[4];
  v11[3] = 0;
  v11[4] = 0;
  v19 = v17 - v18;
  v11[5] = 0;
  if (v17 != v18) {
    if ((v19 & 0x8000000000000000LL) == 0) {
      v20 = NgxRoutine_420_alt1(v17 - v18);
      v21 = v20 + v19;
      v11[3] = v20;
      v11[4] = v20;
      v11[5] = v20 + v19;
      memcpy_plt(v20, v18, v19);
      v11[4] = v21;
      goto LABEL_17;
    }
  LABEL_26:
    nvidia_dlss_rel_source_common_33410();
  }
LABEL_17:
  v33 = v11 + 6;
  nvidia_dlss_rel_source_features_dlaa_weights_980c0_alt1(a1, &v31);
  v22 = a1[1];
  v23 = v32;
  while (1) {
    v24 = v33;
    if (v23 == v33) {
      break;
    }
    v25 = *(v33 - 3);
    v26 = v33 - 6;
    v33 -= 6;
    if (v25 != 0) {
      v27 = *(v24 - 1);
      *(v24 - 2) = v25;
      NgxRoutine_430(v25, v27 - v25);
    }
    v28 = *v26;
    if (*v26 != 0) {
      v29 = *(v24 - 4);
      *(v24 - 5) = v28;
      NgxRoutine_430(v28, v29 - v28);
    }
  }
  if (v31 != 0) {
    NgxRoutine_430(v31, v34 - v31);
  }
  return v22;
}

_QWORD* nvidia_dlss_rel_source_features_dlaa_weights_980c0(_QWORD* result,
                                                           _QWORD* a2)
{
  _QWORD* v2;
  _QWORD* v3;
  _QWORD* v5;
  __int64 v6;
  _QWORD* v7;
  _QWORD* v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;

  v2 = (_QWORD*)*result;
  v3 = (_QWORD*)result[1];
  v5 = result;
  v6 = a2[1] + *result - (_QWORD)v3;
  if (v3 != (_QWORD*)*result) {
    v7 = (_QWORD*)*result;
    v8 = (_QWORD*)(a2[1] + *result - (_QWORD)v3);
    do {
      *v8 = 0;
      v8[1] = 0;
      v9 = v7[1];
      *v8 = *v7;
      v8[1] = v9;
      *v7 = 0;
      v7[1] = 0;
      v8[2] = 0;
      v8[3] = 0;
      v10 = v7[3];
      v8[2] = v7[2];
      v8[3] = v10;
      v7[2] = 0;
      v8[4] = 0;
      v8[5] = 0;
      v7[3] = 0;
      v11 = v7[5];
      v8[4] = v7[4];
      v8[5] = v11;
      v7[4] = 0;
      v7[5] = 0;
      v7 += 6;
      v8 += 6;
    } while (v7 != v3);
    do {
      v12 = v2[3];
      if (v12 != 0) {
        v13 = v2[5];
        v2[4] = v12;
        NgxRoutine_430(v12, v13 - v12);
      }
      result = (_QWORD*)*v2;
      if (*v2 != 0) {
        v14 = v2[2];
        v2[1] = result;
        result = (_QWORD*)NgxRoutine_430(result, v14 - (_QWORD)result);
      }
      v2 += 6;
    } while (v2 != v3);
    v2 = (_QWORD*)*v5;
  }
  a2[1] = v6;
  *v5 = v6;
  v5[1] = v2;
  v15 = a2[2];
  a2[1] = v2;
  v16 = v5[1];
  v5[1] = v15;
  a2[2] = v16;
  v17 = v5[2];
  v5[2] = a2[3];
  a2[3] = v17;
  *a2 = a2[1];
  return result;
}

__int64 nvidia_dlss_rel_source_features_dlaa_weights_981e0()
{
  nvidia_dlss_rel_source_features_dlaa_976b0(&NgxData_2b6aec0);
  return NgxRoutine_2b0();
}

__int64 nvidia_dlss_rel_source_features_dlaa_weights_98230()
{
  __int64 result;

  result = NgxRoutine_e3000();
  *NgxData_952bc0 = result;
  return result;
}

__int64 nvidia_dlss_rel_source_features_dlaa_weights_98260()
{
  nvidia_dlss_a8840(&NgxData_2b6aee8);
  NgxData_2b6b230 = 0;
  NgxData_2b6aee8 = NgxData_952c18[0] + 16;
  return NgxRoutine_2b0();
}

#pragma GCC visibility pop
