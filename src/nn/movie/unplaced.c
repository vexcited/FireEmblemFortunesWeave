#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 fw_rtld_RegisterCrtDestructor();
__int64 nn_fs_dc120(_QWORD, _QWORD);
__int64 nn_lmem_CreateExpHeap_plt(_QWORD, _QWORD, _QWORD);
__int64 nn_movie_detail_AllocateMemory(_QWORD);
__int64 nn_movie_detail_FreeMemory(_QWORD, _QWORD);
extern _UNKNOWN SdkData_f44a40;
extern __int64 SdkData_f4ca48;
extern __int64 SdkData_f4ca50;
extern __int64 SdkData_f4ca60;
extern __int64 SdkData_f4ca68;
extern __int64 SdkData_f4ca70;
extern __int64 SdkData_f4ca78;
extern __int64 SdkData_f4ca80;
extern __int64 SdkData_f4ca88;
extern __int64 SdkData_f4ca90;
extern __int64 SdkData_f4ca98;
extern __int64 SdkData_f4caa0;
extern int SdkData_f4ca58;
_QWORD* nn_movie_4c5920(_QWORD* result, unsigned __int64* a2, __int64 a3,
                        __int64 a4, __int64* a5);
__int64 nn_movie_4c5aa0(__int64 result, _QWORD* a2);
__int64 nn_movie_4c5af0();

_QWORD* nn_movie_4c5920(_QWORD* result, unsigned __int64* a2, __int64 a3,
                        __int64 a4, __int64* a5)
{
  __int64* v5;
  __int64 v6;
  unsigned __int64* v7;
  unsigned __int64* v8;
  __int64** v9;
  _QWORD* v10;
  __int64* v11;
  __int64* v12;
  __int64* v13;
  unsigned __int64 v14;
  __int64* v15;
  __int64* v16;
  __int64* v17;
  _QWORD* v18;
  unsigned __int64 v19;
  __int64* v20;
  unsigned __int64 v21;

  result[1] = 0;
  v5 = result + 1;
  result[2] = 0;
  *result = 0;
  v6 = *a5;
  *result = result + 1;
  result[2] = v6;
  result[3] = 0;
  if (a3 != 0) {
    v7 = &a2[a3];
    v8 = a2;
    v9 = (__int64**)result;
    while (1) {
      v11 = v9[1];
      v12 = v5;
      if (v5 == *v9) {
        goto LABEL_13;
      }
      v13 = v9[1];
      v12 = v5;
      if (v11 != nullptr) {
        break;
      }
      do {
        v15 = v12;
        v12 = (__int64*)v12[2];
      } while (v15 == (__int64*)*v12);
      v16 = v5;
      v17 = v5;
      if (v12[4] < *v8) {
        goto LABEL_13;
      }
    LABEL_20:
      v18 = (_QWORD*)nn_movie_detail_AllocateMemory(40);
      v19 = *v8;
      *v18 = 0;
      v18[1] = 0;
      v18[2] = v17;
      v18[4] = v19;
      *v16 = (__int64)v18;
      v20 = (__int64*)**v9;
      if (v20 != nullptr) {
        *v9 = v20;
        v10 = (_QWORD*)*v16;
      }
      else {
        v10 = v18;
      }
      result = (_QWORD*)nn_fs_dc120(v9[1], v10);
      v9[3] = (__int64*)((char*)v9[3] + 1);
    LABEL_5:
      if (++v8 == v7) {
        return result;
      }
    }
    do {
      v12 = v13;
      v13 = (__int64*)v13[1];
    } while (v13 != nullptr);
    v14 = *v8;
    if (v12[4] >= *v8) {
      while (1) {
        while (1) {
          v17 = v11;
          v21 = v11[4];
          if (v14 >= v21) {
            break;
          }
          v11 = (__int64*)*v17;
          v16 = v17;
          if (*v17 == 0) {
            goto LABEL_20;
          }
        }
        if (v21 >= v14) {
          goto LABEL_5;
        }
        v11 = (__int64*)v17[1];
        if (v11 == nullptr) {
          v16 = v17 + 1;
          goto LABEL_20;
        }
      }
    }
  LABEL_13:
    if (v11 != nullptr) {
      v16 = v12 + 1;
    }
    else {
      v16 = v5;
    }
    if (v11 != nullptr) {
      v17 = v12;
    }
    else {
      v17 = v5;
    }
    if (*v16 != 0) {
      goto LABEL_5;
    }
    goto LABEL_20;
  }
  return result;
}

__int64 nn_movie_4c5aa0(__int64 result, _QWORD* a2)
{
  __int64 v2;

  if (a2 != nullptr) {
    v2 = result;
    nn_movie_4c5aa0(result, *a2);
    nn_movie_4c5aa0(v2, a2[1]);
    return nn_movie_detail_FreeMemory(a2, *(_QWORD*)(v2 + 16));
  }
  return result;
}

__int64 nn_movie_4c5af0()
{
  SdkData_f4ca90 = 0;
  SdkData_f4ca98 = 0;
  SdkData_f4ca80 = 0;
  SdkData_f4ca88 = 0;
  SdkData_f4ca70 = 0;
  SdkData_f4ca78 = 0;
  SdkData_f4ca60 = 0;
  SdkData_f4ca68 = 0;
  SdkData_f4ca48 = 0;
  SdkData_f4ca50 = 0;
  SdkData_f4ca58 = 0;
  SdkData_f4caa0 = 1;
  SdkData_f4ca48 = nn_lmem_CreateExpHeap_plt(&SdkData_f44a40, 0x8000, 0);
  SdkData_f4ca50 = (__int64)&SdkData_f4ca48;
  SdkData_f4ca58 = 2;
  return fw_rtld_RegisterCrtDestructor();
}

#pragma GCC visibility pop
