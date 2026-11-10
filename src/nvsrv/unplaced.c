#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 NvOsDrvAttach_plt(_QWORD);
__int64 SdkRoutine_596650(__int64, unsigned int**, int*, __int64*, char*);
__int64 SdkRoutine_596840(_QWORD, _QWORD);
__int64 nn_diag_detail_AbortImpl_plt_856170(_QWORD);
__int64 nn_diag_detail_AbortImpl_plt_858db0(_QWORD);
__int64 nn_gsv_GetUserSession_plt(_QWORD);
__int64
nn_gsv_GetUserSession_plt_alt1(void) __asm__("nn_gsv_GetUserSession_plt");
__int64 nn_os_CloseNativeHandle_plt(_QWORD);
__int64 nn_os_CreateTransferMemory_plt(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 nn_os_DestroyTransferMemory_plt(_QWORD);
__int64 nn_os_DetachTransferMemory_plt(_QWORD);
extern _UNKNOWN* SdkData_f656c0;
extern __int64 SdkData_f656b0;
extern __int64 SdkData_f656b8;
__int64 nn_nvsrv_BootWithTransferMemory(__int64 a1, __int64 a2, char a3);
__int64 nn_nvsrv_BootWithRemoteMemory(__int64 a1, void* a2);

__int64 nn_nvsrv_BootWithTransferMemory(__int64 a1, __int64 a2, char a3)
{
  __int64 v5;
  __int64 v6;
  unsigned int v7;
  __int64 v8;
  unsigned int v9;
  __int64 result;
  __int64 v11;
  unsigned int v12;
  int v13;
  unsigned int v14;
  char v15[4];
  unsigned int* v16[8];

  v15[0] = a3;
  v5 = nn_gsv_GetUserSession_plt(a1);
  if (v5 == 0) {
    nn_diag_detail_AbortImpl_plt_856170(0);
  }
  v6 = v5;
  memset(v16, 0, sizeof(v16));
  LODWORD(v11) = nn_os_CreateTransferMemory_plt(v16, a1, a2, 0);
  if ((_DWORD)v11 != 0) {
    nn_diag_detail_AbortImpl_plt_858db0(&v11);
  }
  v7 = nn_os_DetachTransferMemory_plt(v16);
  nn_os_DestroyTransferMemory_plt(v16);
  v14 = 0;
  v12 = v7;
  v11 = a2;
  v16[0] = &v14;
  v8 = SdkRoutine_596650(v6, v16, (int*)&v12, &v11, v15);
  v13 = v8;
  if ((_DWORD)v8 != 0) {
    nn_diag_detail_AbortImpl_plt_858db0(&v13);
  }
  v9 = v14;
  if (v14 == 0) {
    nn_diag_detail_AbortImpl_plt_856170(v8);
  }
  v14 = 0;
  v16[0] = (unsigned int*)(v9 | 0x100000000LL);
  NvOsDrvAttach_plt(v16);
  SdkData_f656b0 = v6;
  SdkData_f656b8 = a1;
  SdkData_f656c0 = nullptr;
  if (BYTE4(v16[0]) == 1) {
    nn_os_CloseNativeHandle_plt(LODWORD(v16[0]));
  }
  result = v14;
  if (v14 != 0) {
    result = nn_os_CloseNativeHandle_plt(v14);
  }
  if (v7 != 0) {
    return nn_os_CloseNativeHandle_plt(v7);
  }
  return result;
}

__int64 nn_nvsrv_BootWithRemoteMemory(__int64 a1, void* a2)
{
  __int64 v3;
  __int64 v4;
  __int64 v5;
  unsigned int v6;
  __int64 result;
  __int64 v8;
  __int64 v9;
  _DWORD* v10;
  int v11;
  unsigned int v12;

  if ((unsigned __int8)a1 != 1) {
    v3 = nn_diag_detail_AbortImpl_plt_856170(a1);
    goto LABEL_11;
  }
  v3 = nn_gsv_GetUserSession_plt_alt1();
  if (v3 == 0) {
  LABEL_11:
    nn_diag_detail_AbortImpl_plt_856170(v3);
    goto LABEL_12;
  }
  v4 = v3;
  v12 = 0;
  v10 = &v12;
  v5 = SdkRoutine_596840(v3, &v10);
  v11 = v5;
  if ((_DWORD)v5 != 0) {
  LABEL_12:
    v5 = nn_diag_detail_AbortImpl_plt_858db0(&v11);
    goto LABEL_13;
  }
  v6 = v12;
  if (v12 == 0) {
  LABEL_13:
    v8 = nn_diag_detail_AbortImpl_plt_856170(v5);
    return SdkRoutine_596840(v8, v9);
  }
  v12 = 0;
  v10 = (_DWORD*)(v6 | 0x100000000LL);
  NvOsDrvAttach_plt(&v10);
  SdkData_f656b0 = v4;
  SdkData_f656c0 = a2;
  if (BYTE4(v10) == 1) {
    nn_os_CloseNativeHandle_plt((unsigned int)v10);
  }
  result = v12;
  if (v12 != 0) {
    return nn_os_CloseNativeHandle_plt(v12);
  }
  return result;
}

#pragma GCC visibility pop
