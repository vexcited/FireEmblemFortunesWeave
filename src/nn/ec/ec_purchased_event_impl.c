#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_aoc_detail_GetObjectHolder_plt(_QWORD);
__int64 nn_diag_detail_AbortImpl_plt_858db0(_QWORD);
__int64 nn_os_AttachReadableHandleToSystemEvent_plt(_QWORD, _QWORD, _QWORD,
                                                    _QWORD);
__int64 nn_os_DestroySystemEvent_plt(_QWORD);
extern _UNKNOWN SdkData_f2a788;
extern __int64 SdkData_f2a778;
extern char SdkData_f2a780;
extern char SdkData_f2a7b0;
__int64 nn_ec_InitializePermanentPurchasedEvent(__int64 result);
bool nn_ec_PopPurchasedItemInfo(_QWORD* a1);

__int64 nn_ec_InitializePermanentPurchasedEvent(__int64 result)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  _QWORD v4[2];
  int v5;
  __int64 v6;

  if (SdkData_f2a778 == 0) {
    v6 = 0;
    v1 = *(_QWORD*)nn_aoc_detail_GetObjectHolder_plt(result);
    v4[0] = &v6;
    LODWORD(v4[0]) = (*(__int64 (**)(__int64, _QWORD*, _QWORD))(
        *(_QWORD*)v1 + 128LL))(v1, v4, 0);
    if (LODWORD(v4[0]) != 0) {
      nn_diag_detail_AbortImpl_plt_858db0(v4);
    }
    v2 = v6;
    v3 = SdkData_f2a778;
    v6 = 0;
    SdkData_f2a778 = v2;
    if (v3 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)v3 + 8LL))(v3);
      if (v6 != 0) {
        (*(void (**)(__int64))(*(_QWORD*)v6 + 8LL))(v6);
      }
    }
    v6 = 0x100000000LL;
    v4[0] = &v6;
    v4[1] = 2;
    v5 = (*(__int64 (**)(__int64, _QWORD, _QWORD*))(
        *(_QWORD*)SdkData_f2a778 + 32LL))(SdkData_f2a778, 0, v4);
    if (v5 != 0) {
      nn_diag_detail_AbortImpl_plt_858db0(&v5);
    }
    v4[0] = 0;
    v5 = (*(__int64 (**)(__int64, _QWORD*))(*(_QWORD*)SdkData_f2a778 + 48LL))(
        SdkData_f2a778, v4);
    if (v5 != 0) {
      nn_diag_detail_AbortImpl_plt_858db0(&v5);
    }
    if (SdkData_f2a780 == 1 && SdkData_f2a7b0 != 0) {
      nn_os_DestroySystemEvent_plt(&SdkData_f2a788);
    }
    SdkData_f2a7b0 = 0;
    SdkData_f2a780 = 1;
    return nn_os_AttachReadableHandleToSystemEvent_plt(
        &SdkData_f2a788, LODWORD(v4[0]), BYTE4(v4[0]), 0);
  }
  return result;
}

bool nn_ec_PopPurchasedItemInfo(_QWORD* a1)
{
  int v2;
  __int64 v3;
  int v4;
  __int64 v5;
  struct {
    __int64 v7;
    __int64 v8;
    __int64 v9;
    __int64 v10;
    __int64 v11;
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
  } v7_;
  int v23;

  v7_.v21 = 0;
  v7_.v22 = 0;
  v7_.v19 = 0;
  v7_.v20 = 0;
  v7_.v17 = 0;
  v7_.v18 = 0;
  v7_.v15 = 0;
  v7_.v16 = 0;
  v7_.v13 = 0;
  v7_.v14 = 0;
  v7_.v11 = 0;
  v7_.v12 = 0;
  v7_.v9 = 0;
  v7_.v10 = 0;
  v7_.v7 = 0;
  v7_.v8 = 0;
  v2 = (*(__int64 (**)(__int64, __int64*))(*(_QWORD*)SdkData_f2a778 + 56LL))(
      SdkData_f2a778, &v7_.v7);
  if ((v2 & 0x3FFFFF) != 0x320A4) {
    v23 = v2;
    if (v2 != 0) {
      nn_diag_detail_AbortImpl_plt_858db0(&v23);
    }
    v3 = v7_.v7;
    v4 = v7_.v8;
    a1[2] = 0;
    a1[3] = 0;
    a1[4] = 0;
    a1[5] = 0;
    *a1 = 0;
    a1[1] = v3;
    *(_DWORD*)a1 = v4;
    if (v4 == 0) {
      v5 = v7_.v11;
      a1[3] = v7_.v10;
      a1[4] = v5;
      *((_BYTE*)a1 + 40) = v7_.v12;
    }
  }
  return (v2 & 0x3FFFFF) != 204964;
}

#pragma GCC visibility pop
