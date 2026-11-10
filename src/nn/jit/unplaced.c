#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_DWORD* SdkRoutine_1a5558(_DWORD* result, int);
__attribute__((swiftcall)) void nn_jit_GetJitService_plt(PSEUDO_X8);
__int64 nn_diag_detail_AbortImpl_plt_856170(_QWORD);
__int64 nn_diag_detail_AbortImpl_plt_858db0(_QWORD);
__int64 nn_jit_CloseJitEnvironment_plt(_QWORD);
__int64 nn_jit_GetImpl_plt(_QWORD);
__int64 nn_jit_NewJitEnvironment_plt(void);
__int64 nn_os_CloseNativeHandle_plt(_QWORD);
__int64 nn_os_CreateTransferMemory_plt(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 nn_os_DestroyTransferMemory_plt(_QWORD);
__int64 nn_os_DetachTransferMemory_plt(_QWORD);
__int64 nn_jit_CreateJitEnvironment(__int64* a1, __int64* a2, __int64* a3,
                                    __int64 a4, unsigned __int64 a5);

__int64 nn_jit_CreateJitEnvironment(__int64* a1, __int64* a2, __int64* a3,
                                    __int64 a4, unsigned __int64 a5)
{
  __int64 v10;
  _QWORD* v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  unsigned int v16;
  unsigned int v17;
  unsigned int v18;
  int v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  unsigned int v27;
  __int64 v28;
  __int64 v29;
  _QWORD* v30;
  __int64 v31;
  __int64 v32;
  __int64 v34;
  _QWORD v35[8];
  _QWORD v36[2];
  _QWORD v37[2];
  __int64 v38;
  __int64 v39;

  v10 = nn_jit_NewJitEnvironment_plt();
  v11 = X8CALL_X0(void*, nn_jit_GetJitService_plt((void*)(&v34)));
  v12 = *a2;
  if ((*a2 & 0x1FFFFF) != 0) {
    nn_diag_detail_AbortImpl_plt_856170(v11);
  }
  v13 = a2[1];
  if ((v13 & 0x1FFFFF) != 0) {
    nn_diag_detail_AbortImpl_plt_856170(v11);
  }
  v14 = a3[4];
  if ((v14 & 0x1FFFFF) != 0) {
    nn_diag_detail_AbortImpl_plt_856170(v11);
  }
  if ((a4 & 0x1FFFFF) != 0) {
    nn_diag_detail_AbortImpl_plt_856170(v11);
  }
  if (v13 + v12 + v14 > a5) {
    nn_diag_detail_AbortImpl_plt_856170(v11);
  }
  v15 = v34;
  v39 = 0;
  v37[0] = 0;
  if (v12 != 0) {
    LODWORD(v35[0]) = 0;
    v16 = (unsigned int)SdkRoutine_1a5558(v35, a4);
    if (v16 != 0) {
      v17 = v16;
      goto LABEL_32;
    }
    v20 = a2[1];
    LODWORD(v37[0]) = v35[0];
    BYTE4(v37[0]) = 1;
    a4 += v12;
    v36[0] = 0;
    if (v20 == 0) {
      goto LABEL_15;
    }
  }
  else {
    v36[0] = 0;
    if (v13 == 0) {
    LABEL_15:
      v21 = 0;
      goto LABEL_17;
    }
  }
  LODWORD(v35[0]) = 0;
  v18 = (unsigned int)SdkRoutine_1a5558(v35, a4);
  if (v18 != 0) {
    v17 = v18;
    goto LABEL_12;
  }
  v21 = a2[1];
  LODWORD(v36[0]) = v35[0];
  BYTE4(v36[0]) = 1;
LABEL_17:
  BYTE4(v38) = 0;
  v22 = *a2;
  LODWORD(v38) = -32767;
  v35[0] = &v39;
  v17 = (*(__int64 (**)(__int64, _QWORD*, __int64*, _QWORD*, __int64, _QWORD*,
                        __int64))(*(_QWORD*)v15 + 32LL))(v15, v35, &v38, v37,
                                                         v22, v36, v21);
  if (BYTE4(v38) == 1) {
    nn_os_CloseNativeHandle_plt((unsigned int)v38);
  }
  if (v17 == 0) {
    v19 = 1;
    if (BYTE4(v36[0]) != 1) {
      goto LABEL_22;
    }
    goto LABEL_21;
  }
LABEL_12:
  v19 = 0;
  if (BYTE4(v36[0]) == 1) {
  LABEL_21:
    nn_os_CloseNativeHandle_plt(LODWORD(v36[0]));
  }
LABEL_22:
  if (BYTE4(v37[0]) == 1) {
    nn_os_CloseNativeHandle_plt(LODWORD(v37[0]));
    if ((v19 & 1) == 0) {
    LABEL_32:
      if (v39 != 0) {
        (*(void (**)(__int64))(*(_QWORD*)v39 + 8LL))(v39);
      }
      v28 = 0;
      v29 = v34;
      if (v34 != 0) {
        goto LABEL_35;
      }
      goto LABEL_36;
    }
  }
  else if (v19 == 0) {
    goto LABEL_32;
  }
  v23 = *a3;
  v24 = a3[1];
  v25 = a3[4];
  memset(v35, 0, sizeof(v35));
  v37[0] = v23;
  v37[1] = v24;
  v26 = a3[3];
  v36[0] = a3[2];
  v36[1] = v26;
  LODWORD(v38) = nn_os_CreateTransferMemory_plt(v35, v13 + a4, v25, 0);
  if ((_DWORD)v38 != 0) {
    nn_diag_detail_AbortImpl_plt_858db0(&v38);
  }
  v38 = 0x100000000LL;
  LODWORD(v38) = nn_os_DetachTransferMemory_plt(v35);
  v27 = (*(__int64 (**)(__int64, _QWORD*, _QWORD*, __int64*, __int64))(
      *(_QWORD*)v39 + 32LL))(v39, v37, v36, &v38, a3[4]);
  if (v27 != 0) {
    v17 = v27;
    if (BYTE4(v38) != 1) {
    LABEL_29:
      if (LOBYTE(v35[0]) == 0) {
        goto LABEL_31;
      }
      goto LABEL_30;
    }
  }
  else if (BYTE4(v38) != 1) {
    goto LABEL_29;
  }
  nn_os_CloseNativeHandle_plt((unsigned int)v38);
  if (LOBYTE(v35[0]) != 0) {
  LABEL_30:
    nn_os_DestroyTransferMemory_plt(v35);
  }
LABEL_31:
  if (v27 != 0) {
    goto LABEL_32;
  }
  v28 = v39;
  v17 = 0;
  v29 = v34;
  if (v34 != 0) {
  LABEL_35:
    (*(void (**)(__int64))(*(_QWORD*)v29 + 8LL))(v29);
  }
LABEL_36:
  if (v17 != 0) {
    if (v28 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)v28 + 8LL))(v28);
    }
    nn_jit_CloseJitEnvironment_plt(v10);
  }
  else {
    v35[0] = 0;
    v37[0] = 0;
    LODWORD(v36[0]) = (*(__int64 (**)(__int64, _QWORD*, _QWORD*))(
        *(_QWORD*)v28 + 40LL))(v28, v35, v37);
    if (LODWORD(v36[0]) != 0) {
      nn_diag_detail_AbortImpl_plt_858db0(v36);
    }
    v30 = (_QWORD*)nn_jit_GetImpl_plt(v10);
    v31 = v37[0];
    v30[1] = v35[0];
    v30[2] = *a2;
    v30[3] = v31;
    v32 = a2[1];
    *v30 = v28;
    v30[4] = v32;
    *a1 = v10;
  }
  return v17;
}

#pragma GCC visibility pop
