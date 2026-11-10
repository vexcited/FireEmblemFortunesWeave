#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 SdkRoutine_860020(_QWORD, _QWORD);
__int64 nn_account_GetUserId_plt(_QWORD, _QWORD);
__int64
    nn_account_NintendoAccountAuthorizationRequestContext_Destroy_NintendoAccountAuthorizationRequestContext_plt(
        _QWORD);
__int64
    nn_account_NintendoAccountAuthorizationRequestContext_Invoke_plt(_QWORD);
__int64
    nn_account_NintendoAccountAuthorizationRequestContext_NintendoAccountAuthorizationRequestContext_plt_860000(
        _QWORD, _QWORD, _QWORD);
__int64 nn_account_detail_CheckInternetAvailability_plt(void);
__int64 nn_diag_detail_AbortImpl_plt_858db0(_QWORD);
__int64 nn_os_CloseNativeHandle_plt(_QWORD);
__int64 nn_os_CreateTransferMemory_plt(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 nn_os_DestroyTransferMemory_plt(_QWORD);
__int64 nn_os_DetachTransferMemory_plt(_QWORD);
__int64 nn_account_CreateNintendoAccountAuthorizationRequest(
    __int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5);

__int64 nn_account_CreateNintendoAccountAuthorizationRequest(
    __int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 result;
  __int64 v11;
  unsigned int v12;
  _QWORD* v13;
  unsigned int v14;
  unsigned int v15;
  unsigned int v16;
  _QWORD v17[7];
  unsigned int v18;
  char v19;
  _QWORD v20[2];
  _QWORD v21[8];
  _QWORD* v22;

  result = nn_account_detail_CheckInternetAvailability_plt();
  if ((_DWORD)result == 0) {
    memset(v21, 0, sizeof(v21));
    LODWORD(v17[0]) = nn_os_CreateTransferMemory_plt(v21, a4, a5, 3);
    if (LODWORD(v17[0]) != 0) {
      nn_diag_detail_AbortImpl_plt_858db0(v17);
      __udf(0);
    }
    v20[0] = 0;
    v20[1] = 0;
    result = nn_account_GetUserId_plt(v20, a2);
    if ((_DWORD)result == 0) {
      v11 = *(_QWORD*)(a2 + 16);
      v22 = nullptr;
      v18 = nn_os_DetachTransferMemory_plt(v21);
      v19 = 1;
      v17[0] = &v22;
      result =
          (*(__int64 (**)(__int64, _QWORD*, __int64, unsigned int*, _QWORD))(
              *(_QWORD*)v11 + 80LL))(v11, v17, a3, &v18, (unsigned int)a5);
      if (v19 == 1) {
        v12 = result;
        nn_os_CloseNativeHandle_plt(v18);
        result = v12;
      }
      if ((_DWORD)result == 0) {
        v13 = v22;
        memset(v17, 0, sizeof(v17));
        v22 = nullptr;
        nn_account_NintendoAccountAuthorizationRequestContext_NintendoAccountAuthorizationRequestContext_plt_860000(
            v17, v13, v20);
        v14 = nn_account_NintendoAccountAuthorizationRequestContext_Invoke_plt(
            v17);
        if (v14 == 0) {
          SdkRoutine_860020(a1, v17);
        }
        nn_account_NintendoAccountAuthorizationRequestContext_Destroy_NintendoAccountAuthorizationRequestContext_plt(
            v17);
        result = v14;
      }
      if (v22 != nullptr) {
        v15 = result;
        (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, _QWORD*))(
            *v22 + 8LL))((void*)v22, v22);
        result = v15;
      }
    }
    if (LOBYTE(v21[0]) != 0) {
      v16 = result;
      nn_os_DestroyTransferMemory_plt(v21);
      return v16;
    }
  }
  return result;
}

#pragma GCC visibility pop
