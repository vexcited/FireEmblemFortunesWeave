#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 Config_bc7840(__int64, __int64);
__int64 GameRoutine_18e4620(_QWORD, _QWORD);
__int64 eft_EmitterSetHandle_Get_5b6700(_QWORD);
__int64 eft_EmitterSet_Release(void);
extern __int64 eft_g_effectSystem;
extern __int64* eft_g_effectSystem_ptr[3];
_QWORD* Stack_bcc040(_QWORD* result);
__int64 Stack_bcc1a0(__int64 result, int a2);

_QWORD* Stack_bcc040(_QWORD* result)
{
  _QWORD* v1;
  _QWORD* v2;
  __int64 i;
  unsigned __int64 v4;
  unsigned __int64 j;
  __int64 v6;
  _QWORD* k;
  __int64* m;
  __int64* v9;
  __int64 v10;
  __int64* v11;
  __int64 v12;

  v1 = result;
  if (*(_BYTE*)result == 1) {
    *(_BYTE*)result = 0;
    v2 = result + 6;
    for (i = result[7]; (_QWORD*)i != v2; i = *(_QWORD*)(i + 8)) {
      v4 = *(unsigned int*)(i + 36);
      *(_BYTE*)(i + 34) = 0;
      if ((_DWORD)v4 != 0) {
        for (j = 0; j < v4; ++j) {
          result = *(_QWORD**)(i + 40 + 8 * j);
          if (result != nullptr) {
            result =
                (_QWORD*)(*(__int64 (**)(_QWORD*))(*result + 64LL))(result);
            v4 = *(unsigned int*)(i + 36);
          }
        }
      }
    }
  }
  else {
    v6 = result[7];
    for (k = result + 6; (_QWORD*)v6 != k; v6 = v1[7]) {
      result = (_QWORD*)Config_bc7840(eft_g_effectSystem, v6);
    }
    for (m = (__int64*)v1[9]; m != v1 + 8; m = (__int64*)v1[9]) {
      v10 = eft_g_effectSystem;
      if (m != (__int64*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(eft_g_effectSystem +
                                                           296) -
                                                24LL) +
                                     8LL * *((unsigned int*)m + 10)) +
                          64LL)) {
        v11 = (__int64*)m[1];
        v12 = *v11;
        *(_QWORD*)(*m + 8) = v11;
        *v11 = *m;
        *(_QWORD*)(v12 + 8) = m;
        *m = v12;
      }
      v9 = m - 17;
      GameRoutine_18e4620(*(_QWORD*)(v10 + 440), m - 17);
      result = (_QWORD*)(*(__int64 (**)(__int64*))(*v9 + 8))(v9);
    }
  }
  return result;
}

__int64 Stack_bcc1a0(__int64 result, int a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v5;
  __int64* v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64* v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;

  v2 = *(_QWORD*)(result + 72);
  v3 = result + 64;
  v5 = result;
  v6 = eft_g_effectSystem_ptr[0];
  if (v2 != result + 64) {
    do {
      v8 = *(_QWORD*)(v2 + 8);
      if (*(_DWORD*)(v2 + 284) == 0) {
        result = eft_EmitterSetHandle_Get_5b6700(v2 + 336);
        if (result != 0 && *(_DWORD*)(result + 48) == a2) {
          *(_QWORD*)(result + 448) = 0;
          result = eft_EmitterSet_Release();
        }
      }
      v9 = *(_QWORD*)(v2 + 16);
      if (v9 != 0) {
        v10 = *(_QWORD*)(v9 + 24);
        if (v10 != 0 && (*(_QWORD*)(v10 + 8 * ((__int64)a2 >> 6) + 120) &
                         (1LL << a2)) != 0) {
          v11 = *v6;
          if (v2 != *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*v6 + 296) - 24LL) +
                               8LL * *(unsigned int*)(v2 + 40)) +
                        64LL) {
            v12 = *(__int64**)(v2 + 8);
            v13 = *v12;
            *(_QWORD*)(*(_QWORD*)v2 + 8LL) = v12;
            *v12 = *(_QWORD*)v2;
            *(_QWORD*)(v13 + 8) = v2;
            *(_QWORD*)v2 = v13;
          }
          v7 = v2 - 136;
          GameRoutine_18e4620(*(_QWORD*)(v11 + 440), v7);
          result = (*(__int64 (**)(__int64))(*(_QWORD*)v7 + 8LL))(v7);
        }
      }
      v2 = v8;
    } while (v8 != v3);
  }
  v14 = *(_QWORD*)(v5 + 56);
  v15 = v5 + 48;
  if (v14 != v5 + 48) {
    v16 = (__int64)a2 >> 6;
    v17 = 1LL << a2;
    do {
      v18 = *(_QWORD*)(v14 + 8);
      v19 = *(_QWORD*)(v14 + 24);
      if (v19 != 0 && (*(_QWORD*)(v19 + 8 * v16 + 120) & v17) != 0) {
        result = Config_bc7840(*v6, v14);
      }
      v14 = v18;
    } while (v18 != v15);
  }
  return result;
}

#pragma GCC visibility pop
