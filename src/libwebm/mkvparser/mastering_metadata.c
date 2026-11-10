#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64* SdkRoutine_55daf0(__int64* result);
__int64 SdkRoutine_4c3860(__int64, __int64, _QWORD**);
__int64 __cxa_guard_acquire_plt(_QWORD);
__int64 __cxa_guard_release_plt(_QWORD);
__int64 mkvparser_ParseElementHeader_plt(_QWORD, _QWORD, _QWORD, _QWORD,
                                         _QWORD);
__int64 mkvparser_PrimaryChromaticity_Parse_plt(_QWORD, _QWORD, _QWORD, _QWORD,
                                                _QWORD);
__int64 nn_movie_detail_FreeMemory(__int64 result, _QWORD*);
__int64 nn_os_GetTlsValue_plt(_QWORD);
extern __int64 SdkData_e88330;
extern void (*SdkData_e88338[493])();
__int64 mkvparser_MasteringMetadata_Parse(__int64 result, __int64 a2,
                                          __int64 a3, __int64* a4);

__int64 mkvparser_MasteringMetadata_Parse(__int64 result, __int64 a2,
                                          __int64 a3, __int64* a4)
{

#pragma clang fp contract(off)
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 (***v8)(_QWORD, __int64, __int64, _QWORD*, long double);
  unsigned __int8 explicit;
  void(__attribute__((noreturn)) * v12)();
  _QWORD** v13;
  _QWORD* v14;
  _QWORD* v15;
  _QWORD* v16;
  __int64 v17;
  __int64 v18;
  _QWORD* v19;
  long double v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 (**v25)(_QWORD, __int64, __int64, _QWORD*, long double);
  int v26;
  int v27;
  __int64 (**v28)(_QWORD, __int64, __int64, _QWORD*, long double);
  int v29;
  int v30;
  float v31;
  bool v32;
  double v33;
  int v34;
  float v35;
  double v36;
  int v37;
  _QWORD* v38;
  void(__attribute__((noreturn)) * v39)();
  __int64 v41;
  __int64 v42;
  __int64 v43;
  _QWORD v44[5];

  if (result == 0) {
    return result;
  }
  if (*a4 != 0) {
    return 0;
  }
  v44[1] = v7;
  v44[2] = v6;
  v44[3] = v4;
  v44[4] = v5;
  v8 = (__int64 (***)(_QWORD, __int64, __int64, _QWORD*, long double))result;
  explicit = atomic_load_explicit((atomic_uchar* volatile)SdkData_e88330,
                                  memory_order_acquire);
  v12 = SdkData_e88338[0];
  if ((explicit & 1) == 0 &&
      (unsigned int)__cxa_guard_acquire_plt(SdkData_e88330) != 0) {
    *(_DWORD*)v12 = 0;
    *((_BYTE*)((__int64*)0x4LL) + (_QWORD)v12) = 1;
    __cxa_guard_release_plt(SdkData_e88330);
  }
  v13 = (_QWORD**)nn_os_GetTlsValue_plt(*(unsigned int*)v12);
  v14 = (_QWORD*)SdkRoutine_4c3860(16, 40, v13);
  v14[1] = 0;
  v15 = v14 + 1;
  v14[2] = 0;
  v16 = v14 + 2;
  v17 = a3 + a2;
  v18 = (__int64)v14;
  *v14 = 0;
  v14[3] = 0;
  v19 = v14 + 3;
  v43 = a2;
  v14[4] = 0x7F7FFFFF7F7FFFFFLL;
  do {
    if (a2 >= v17) {
      *a4 = v18;
      return 1;
    }
    v41 = 0;
    v42 = 0;
    if (mkvparser_ParseElementHeader_plt(v8, &v43, v17, &v42, &v41) < 0) {
      break;
    }
    if (v42 <= 21974) {
      if ((unsigned __int64)(v42 - 21969) < 2) {
        v21 = 21969;
        v22 = v18;
      }
      else if ((unsigned __int64)(v42 - 21971) < 2) {
        v21 = 21971;
        v22 = (__int64)v15;
      }
      else {
        if ((unsigned __int64)(v42 - 21973) >= 2) {
          break;
        }
        v21 = 21973;
        v22 = (__int64)v16;
      }
    LABEL_27:
      v23 = v43;
      v24 = v41;
      if ((mkvparser_PrimaryChromaticity_Parse_plt(v8, v43, v41, v42 == v21,
                                                   v22) &
           1) == 0) {
        break;
      }
      goto LABEL_28;
    }
    if ((unsigned __int64)(v42 - 21975) < 2) {
      v21 = 21975;
      v22 = (__int64)v19;
      goto LABEL_27;
    }
    if (v42 != 21978) {
      if (v42 != 21977) {
        break;
      }
      v23 = v43;
      v24 = v41;
      *(_QWORD*)&v20 = 0;
      if (v43 < 0 || v41 != 8 && v41 != 4) {
        goto LABEL_52;
      }
      v25 = *v8;
      v44[0] = 0;
      if (((*v25)(v8, v43, v41, v44, v20) & 0x80000000) != 0) {
        v27 = 1;
        *(_QWORD*)&v20 = 0;
      }
      else {
        v26 = (LOBYTE(v44[0]) << 16) | (BYTE1(v44[0]) << 8);
        if (v24 == 4) {
          *(double*)&v20 =
              COERCE_FLOAT(BYTE3(v44[0]) | ((v26 | BYTE2(v44[0])) << 8));
          if (COERCE__INT64(fabs(*(double*)&v20)) != 0x7FF0000000000000LL) {
            goto LABEL_23;
          }
        LABEL_52:
          v27 = 1;
        }
        else {
          *(_QWORD*)&v20 =
              ((unsigned __int64)BYTE6(v44[0]) << 8) |
              ((unsigned __int64)BYTE5(v44[0]) << 16) |
              ((((unsigned __int64)(v26 | (unsigned int)BYTE2(v44[0])) << 16) |
                ((unsigned __int64)BYTE3(v44[0]) << 8) | BYTE4(v44[0]))
               << 24) |
              HIBYTE(v44[0]);
          if ((((unsigned __int64)BYTE6(v44[0]) << 8) |
               ((unsigned __int64)BYTE5(v44[0]) << 16) |
               ((((unsigned __int64)(v26 | (unsigned int)BYTE2(v44[0])) << 16) |
                 ((unsigned __int64)BYTE3(v44[0]) << 8) | BYTE4(v44[0]))
                << 24) &
                   0x7FFFFFFFFFFFFFFFLL |
               HIBYTE(v44[0])) == 0x7FF0000000000000LL) {
            goto LABEL_52;
          }
        LABEL_23:
          v27 = 0;
        }
      }
      if (fabs(*(double*)&v20) > 0x1.fffffe0000000p+127 ||
          *(double*)&v20 > 0x0.0p+0 &&
              *(double*)&v20 < 0x1.0000000000000p-126) {
        break;
      }
      v35 = *(double*)&v20;
      *(float*)(v18 + 32) = v35;
      v32 = v35 < 0x0.0p+0f;
      v36 = v35;
      v37 = v32;
      if (v36 > 0x1.387feb851eb85p+13) {
        v37 = 1;
      }
      if (((v27 | v37) & 1) != 0) {
        break;
      }
      goto LABEL_28;
    }
    v23 = v43;
    v24 = v41;
    *(_QWORD*)&v20 = 0;
    if ((v43 & 0x8000000000000000LL) == 0 && (v41 == 8 || v41 == 4)) {
      v28 = *v8;
      v44[0] = 0;
      if (((*v28)(v8, v43, v41, v44, v20) & 0x80000000) != 0) {
        v30 = 1;
        *(_QWORD*)&v20 = 0;
        goto LABEL_41;
      }
      v29 = (LOBYTE(v44[0]) << 16) | (BYTE1(v44[0]) << 8);
      if (v24 == 4) {
        *(double*)&v20 =
            COERCE_FLOAT(BYTE3(v44[0]) | ((v29 | BYTE2(v44[0])) << 8));
        if (COERCE__INT64(fabs(*(double*)&v20)) != 0x7FF0000000000000LL) {
          goto LABEL_36;
        }
      }
      else {
        *(_QWORD*)&v20 =
            ((unsigned __int64)BYTE6(v44[0]) << 8) |
            ((unsigned __int64)BYTE5(v44[0]) << 16) |
            ((((unsigned __int64)(v29 | (unsigned int)BYTE2(v44[0])) << 16) |
              ((unsigned __int64)BYTE3(v44[0]) << 8) | BYTE4(v44[0]))
             << 24) |
            HIBYTE(v44[0]);
        if ((((unsigned __int64)BYTE6(v44[0]) << 8) |
             ((unsigned __int64)BYTE5(v44[0]) << 16) |
             ((((unsigned __int64)(v29 | (unsigned int)BYTE2(v44[0])) << 16) |
               ((unsigned __int64)BYTE3(v44[0]) << 8) | BYTE4(v44[0]))
              << 24) &
                 0x7FFFFFFFFFFFFFFFLL |
             HIBYTE(v44[0])) != 0x7FF0000000000000LL) {
        LABEL_36:
          v30 = 0;
          goto LABEL_41;
        }
      }
    }
    v30 = 1;
  LABEL_41:
    if (fabs(*(double*)&v20) > 0x1.fffffe0000000p+127 ||
        *(double*)&v20 > 0x0.0p+0 && *(double*)&v20 < 0x1.0000000000000p-126) {
      break;
    }
    v31 = *(double*)&v20;
    *(float*)(v18 + 36) = v31;
    v32 = v31 < 0x0.0p+0f;
    v33 = v31;
    v34 = v32;
    if (v33 > 0x1.f3fffcb923a2ap+9) {
      v34 = 1;
    }
    if (((v30 | v34) & 1) != 0) {
      break;
    }
  LABEL_28:
    a2 = v23 + v24;
    v43 = a2;
  } while (a2 <= v17);
  SdkRoutine_55daf0((__int64*)v18);
  if ((atomic_load_explicit((atomic_uchar* volatile)SdkData_e88330,
                            memory_order_acquire) &
       1) == 0 &&
      (unsigned int)__cxa_guard_acquire_plt(SdkData_e88330) != 0) {
    v39 = SdkData_e88338[0];
    *(_DWORD*)SdkData_e88338[0] = 0;
    *((_BYTE*)((__int64*)0x4LL) + (_QWORD)v39) = 1;
    __cxa_guard_release_plt(SdkData_e88330);
  }
  v38 = (_QWORD*)nn_os_GetTlsValue_plt(*(unsigned int*)SdkData_e88338[0]);
  nn_movie_detail_FreeMemory(v18, v38);
  return 0;
}

#pragma GCC visibility pop
