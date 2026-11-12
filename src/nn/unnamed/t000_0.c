#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

extern _UNKNOWN SdkData_f38d28;

extern _UNKNOWN SdkData_f38d34;

extern _UNKNOWN SdkData_f38ea0;

extern _UNKNOWN SdkData_f38eb0;

extern _UNKNOWN SdkData_f38eb4;

extern __int64 SdkData_f38ec0;

__int64 SdkRoutine_421b40(_QWORD, _QWORD, _QWORD, _QWORD);

__int64 SdkRoutine_421c60(_QWORD, _QWORD);

__int64 SdkRoutine_469140(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                          _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                          _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);

__int64 SdkRoutine_46ac60(_QWORD, _QWORD, _QWORD);

__int64 SdkRoutine_856170(_QWORD);

__int64 SdkRoutine_857150(_QWORD);

__int64 SdkRoutine_858b60(_QWORD);

__int64 SdkRoutine_858b80(_QWORD);

__int64 SdkRoutine_85b0e0(_QWORD);

__int64 SdkRoutine_85d1a0(_QWORD);

__int64 SdkRoutine_85d450(_QWORD, _QWORD);

__int64 SdkRoutine_85d910(void);

__int64 SdkRoutine_869570(_QWORD, _QWORD, _QWORD);

__int64 SdkRoutine_8698c0(_QWORD);

__int64 SdkHr_421e90(__int64 a1, _DWORD* a2, __int64 a3)
{
  _DWORD* v3;
  int v4;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int v15;
  int v16;
  int v17;
  unsigned int v18;
  int v19;
  unsigned int v20;
  int v21;
  unsigned int v22;
  unsigned int v23;
  unsigned int v24;
  int v25;
  int v26;
  int v27;
  int v28;
  __int64 result;
  int v30;
  unsigned int v31;

  v3 = *(_DWORD**)(a1 + 56);
  v4 = a2[13];
  v8 = a2[1];
  v9 = (a2[14] << 16) / 100;
  v10 = *(unsigned __int16*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 48) + 56LL) +
                                        48LL) +
                             18LL);
  v11 = v3[2] / v10;
  v12 = v3[4] / v10;
  v13 = v3[3] / v10;
  v14 = v3[5] / v10;
  LODWORD(v3) = *a2 * v12 + v8 * v14;
  v15 = a2[6];
  v16 = a2[7];
  v17 = *a2 * v11 + v8 * v13;
  v18 = -(int)v3;
  v19 = v15 * v11;
  v20 = v15 * v12 + v16 * v14;
  v21 = a2[2];
  v22 = v19 + v16 * v13;
  v30 = v21 * v12 - (_DWORD)v3 + v4 * v14;
  v31 = v17 - v4 * v13 - v21 * v11;
  SdkRoutine_8698c0(&v30);
  v23 = v30;
  v24 = v31;
  v25 = SdkRoutine_869570(v18, v31, 16);
  v26 = SdkRoutine_869570((unsigned int)-v17, v23, 16);
  v27 = SdkRoutine_869570(v23, v22, 16);
  v28 = v26 + v25 + v27 + SdkRoutine_869570(v24, v20, 16);
  if (v28 < 0) {
    v28 = -v28;
  }
  if (v28 < v9) {
    result =
        SdkRoutine_421b40(a1, (unsigned int)a2[12], (unsigned int)a2[13], a3);
    if ((_DWORD)result != 0) {
      return result;
    }
    return 0;
  }
  result = SdkRoutine_421c60(a1, (unsigned int)a2[2]);
  if ((_DWORD)result == 0) {
    result = SdkRoutine_421c60(a1, (unsigned int)a2[8]);
    if ((_DWORD)result == 0) {
      return 0;
    }
  }
  return result;
}

__int64 SdkHr_468f40(_QWORD* a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5,
                     __int64 a6, unsigned __int8 a7)
{
  __int64 v14;
  __int64 v15;
  __int64 v16;
  unsigned int v17;
  __int64 v18;
  unsigned int v19;
  __int64 v20;
  __int64 v21;
  __int64 v23;
  _QWORD v24[2];
  __int64 v25;
  _QWORD v26[2];
  __int64* v27;
  __int64 v28;
  _BYTE v29[4];
  unsigned int v30;

  v30 = 0;
  do {
    v14 = SdkRoutine_85d910();
    v15 = SdkRoutine_85d1a0(1000000000);
    v16 = SdkRoutine_46ac60(&SdkData_f38ea0, &v30, v15 + v14);
  } while ((v16 & 1) == 0);
  v26[0] = a2;
  v26[1] = a3;
  v27 = &v28;
  v28 = 0;
  v25 = 1;
  v24[0] = a5;
  v24[1] = 40 * a6;
  v23 = 40;
  if (a7 >= 2u) {
  LABEL_19:
    SdkRoutine_857150(v16);
    __udf(0);
  }
  v29[0] = a7;
  v17 = ((__int64 (*)(void*, __int64**, _QWORD*, __int64*, __int64, _QWORD*,
                      __int64*, _BYTE*, unsigned int*))SdkRoutine_469140)(
      &SdkData_f38d34, &v27, v26, &v25, a4 + 8, v24, &v23, v29, &v30);
  do {
    v18 =
        SdkRoutine_85d450((char*)&SdkData_f38d28 + 48 * v30 + 416, 1000000000);
  } while ((v18 & 1) == 0);
  if (v17 != 0) {
    v19 = v30;
    if ((v30 & 0x80000000) != 0) {
      goto LABEL_18;
    }
  }
  else {
    *a1 = v28;
    v19 = v30;
    if ((v30 & 0x80000000) != 0) {
      goto LABEL_18;
    }
  }
  if (v19 + 1 <= 0x3F) {
    v20 = ~(-1LL << ((unsigned __int8)v19 + 1));
    if (v19 == 0) {
      if ((SdkData_f38ec0 & v20) != 0) {
        goto LABEL_16;
      }
      goto LABEL_18;
    }
    goto LABEL_14;
  }
  v20 = -1;
  v21 = -1;
  if (v19 <= 0x3F) {
  LABEL_14:
    v21 = ~(-1LL << v19);
  }
  if ((SdkData_f38ec0 & (v21 ^ v20)) == 0) {
  LABEL_18:
    v16 = SdkRoutine_856170(v18);
    goto LABEL_19;
  }
LABEL_16:
  SdkRoutine_858b60(&SdkData_f38eb0);
  atomic_fetch_and_explicit(
      (atomic_ullong* volatile)((char*)&SdkData_f38ea0 + 8 * (v19 >> 6) + 24),
      ~(1LL << v19), memory_order_release);
  SdkRoutine_85b0e0(&SdkData_f38eb4);
  SdkRoutine_858b80(&SdkData_f38eb0);
  return v17;
}

#pragma GCC visibility pop
