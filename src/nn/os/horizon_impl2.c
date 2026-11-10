#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 SdkRoutine_1a5430(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 SdkRoutine_1a5438(_QWORD, _QWORD, _QWORD);
__int64 SdkRoutine_1a5458(_QWORD);
__int64 SdkRoutine_1a5570(_QWORD);
__int64 SdkRoutine_85dee0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 SdkRoutine_85def0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 nn_diag_detail_AbortImpl_plt_856170(_QWORD);
__int64 nn_diag_detail_AbortImpl_plt_858db0(_QWORD);
__int64 nn_os_169240(__int64);
extern __int64 SdkData_e86f70;
extern void (*SdkData_e86ef0[281])();
__int64 horizon_16d180(__int64 a1, __int64 (*a2)(void));
__int64 nn_os_detail_DispatchFiberContext(_QWORD* a1, __int64* a2, __int64 a3,
                                          unsigned __int64 a4, __int64 a5,
                                          unsigned __int64 a6, __int64 a7,
                                          unsigned __int64 a8, __int64 a9);
__int64 horizon_16d3f0(__int64 a1, __int64 a2, int a3, int a4);
__int64 nn_os_detail_SharedMemoryImplByHorizon_Map(__int64* a1, unsigned int a2,
                                                   unsigned __int64 a3,
                                                   unsigned int a4);
__int64 horizon_16d180(__int64 a1, __int64 (*a2)(void)) { return a2(); }

__int64 nn_os_detail_DispatchFiberContext(_QWORD* a1, __int64* a2, __int64 a3,
                                          unsigned __int64 a4, __int64 a5,
                                          unsigned __int64 a6, __int64 a7,
                                          unsigned __int64 a8, __int64 a9)
{
  __int64 v9;
  __int64 v10;
  __int64 v11;
  unsigned __int64 v12;
  unsigned __int64 v13;
  __int64 v14;
  __int64 result;
  unsigned __int64 v16;
  __int64 v17[12];
  __int64 v18;
  unsigned __int64 v19;

  v11 = v10 ^ 2;
  if ((v11 & 3) != 2) {
    __udf(0x800Du);
  }
  v12 = a5 | HIDWORD(a6);
  v13 = a7 | HIDWORD(a8);
  v17[0] = 0;
  v17[11] = v9;
  v18 = v11;
  v19 = (a3 | HIDWORD(a4)) ^ v13 ^ v12;
  *a1 = v17;
  v14 = *a2;
  result = v17[0];
  v16 = v19;
  v19 = 0;
  if ((v18 & 1) != 0) {
    if (((unsigned __int64)&a9 | 0x8030000000000000LL) == v16 &&
        (__int64 (*)(__int64))(v18 ^ 1) == nn_os_169240) {
      return nn_os_169240(v17[0]);
    }
  LABEL_9:
    __udf(0x8009u);
  }
  if (((v14 | HIDWORD(a4)) ^ (v13 | HIDWORD(a8)) ^ (v12 | HIDWORD(a6))) !=
      v16) {
    goto LABEL_9;
  }
  return result;
}

__int64 horizon_16d3f0(__int64 a1, __int64 a2, int a3, int a4)
{
  _DWORD* v4;
  __int64 result;
  unsigned int v6;
  __int64 v7;
  int v8;
  __int64* v9;
  __int64 v10;
  __int64 v11;
  int v12;
  int v13;

  if ((a3 | 2) != 3) {
    a1 = nn_diag_detail_AbortImpl_plt_856170(a1);
  }
  else if ((a4 | 2) == 3) {
    v4 = (_DWORD*)a1;
    v13 = 0;
    result = SdkRoutine_1a5570(&v13);
    if ((_DWORD)result == 0) {
      *v4 = v13;
      return result;
    }
    if ((result & 0x3FFFFF) == 0xCE01) {
      return 4611;
    }
    if ((result & 0x3FFFFF) == 0xD001) {
      return 4099;
    }
  LABEL_11:
    v12 = result;
    v6 = nn_diag_detail_AbortImpl_plt_858db0(&v12);
    v9 = &v11;
    v10 = v7;
    result = SdkRoutine_1a5458(v6);
    v8 = result;
    if ((_DWORD)result != 0) {
      nn_diag_detail_AbortImpl_plt_858db0(&v8);
      __udf(0);
    }
    return result;
  }
  LODWORD(result) = nn_diag_detail_AbortImpl_plt_856170(a1);
  goto LABEL_11;
}

__int64 nn_os_detail_SharedMemoryImplByHorizon_Map(__int64* a1, unsigned int a2,
                                                   unsigned __int64 a3,
                                                   unsigned int a4)
{
  __int64 v7;
  void(__attribute__((noreturn)) * v8)();
  __int64 result;
  int v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  int v14;
  int v15;
  __int64 v16;
  __int64 v17;
  int v18;
  __int64 v19;
  __int64 v20;
  int v21;
  int v22;

  if ((a4 | 2) != 3) {
    nn_diag_detail_AbortImpl_plt_856170(a1);
  }
  v7 = a2;
  v8 = SdkData_e86ef0[0];
  if (a3 >= 0x200000) {
    v15 = 64;
    v16 = SdkData_e86f70;
    while (1) {
      v17 = SdkRoutine_85dee0((char*)v8 + 88, a3, 0x200000, 0, v16);
      if (v17 == 0) {
        v17 = SdkRoutine_85dee0((char*)v8 + 88, a3, 0x10000, 0, v16);
        if (v17 == 0) {
          v17 = SdkRoutine_85dee0((char*)v8 + 88, a3, 4096, 0, v16);
          if (v17 == 0) {
            break;
          }
        }
      }
      v13 = v17;
      v14 = SdkRoutine_1a5430(v7, v17, a3, a4);
      if (v14 == 0) {
      LABEL_26:
        if ((SdkRoutine_85def0((char*)v8 + 88, v13, a3, 0x4000) & 1) == 0) {
          v21 = SdkRoutine_1a5438(v7, v13, a3);
          if (v21 != 0) {
            nn_diag_detail_AbortImpl_plt_858db0(&v21);
          }
          v13 = 0;
        }
        result = 0;
        *a1 = v13;
        return result;
      }
      if ((v14 & 0x3FFFFF) != 0xD401) {
      LABEL_33:
        v22 = v14;
        nn_diag_detail_AbortImpl_plt_858db0(&v22);
      }
      if (--v15 == 0) {
        return 259075;
      }
    }
    return 259075;
  }
  if (a3 >= 0x10000) {
    v18 = 64;
    v19 = SdkData_e86f70;
    while (1) {
      v20 = SdkRoutine_85dee0((char*)v8 + 88, a3, 0x10000, 0, v19);
      if (v20 == 0) {
        v20 = SdkRoutine_85dee0((char*)v8 + 88, a3, 4096, 0, v19);
        if (v20 == 0) {
          return 259075;
        }
      }
      v13 = v20;
      v14 = SdkRoutine_1a5430(v7, v20, a3, a4);
      if (v14 == 0) {
        goto LABEL_26;
      }
      if ((v14 & 0x3FFFFF) != 0xD401) {
        goto LABEL_33;
      }
      if (--v18 == 0) {
        return 259075;
      }
    }
  }
  result = 259075;
  if (a3 >= 0x1000) {
    v10 = 64;
    v11 = SdkData_e86f70;
    do {
      v12 = SdkRoutine_85dee0((char*)v8 + 88, a3, 4096, 0, v11);
      if (v12 == 0) {
        break;
      }
      v13 = v12;
      v14 = SdkRoutine_1a5430(v7, v12, a3, a4);
      if (v14 == 0) {
        goto LABEL_26;
      }
      if ((v14 & 0x3FFFFF) != 0xD401) {
        goto LABEL_33;
      }
      --v10;
    } while (v10 != 0);
    return 259075;
  }
  return result;
}

#pragma GCC visibility pop
