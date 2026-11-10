#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 SdkRoutine_85e340(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 SdkRoutine_85e460(_QWORD, _QWORD);
__int64 nn_detail_UnexpectedDefaultImpl_plt_857150(_QWORD);
__int64 nn_diag_detail_AbortImpl_plt_856170(_QWORD);
__int64 nn_os_FinalizeMultiWaitHolder_plt(_QWORD);
__int64 nn_sf_hipc_CloseServerSessionHandle_plt(_QWORD);
__int64 nn_sf_hipc_Reply_plt(_QWORD, _QWORD);
__int64
    nn_sf_hipc_server_v1_detail_HipcAllInOneServerManagerBase_DoRegisterServerSessionToWait_plt(
        _QWORD, _QWORD);
__int64 nn_sf_hipc_server_v1_HipcServerSessionManagerBase_ProcessRequest(
    __int64 a1, _BYTE* a2, __int64 a3, _WORD* a4, __int64 a5, char a6);
__int64 nn_sf_hipc_server_v1_HipcServerSessionManagerBase_CloseSessionBase(
    void (***a1)(_QWORD, __int64), __int64 a2);

__int64 nn_sf_hipc_server_v1_HipcServerSessionManagerBase_ProcessRequest(
    __int64 a1, _BYTE* a2, __int64 a3, _WORD* a4, __int64 a5, char a6)
{
  int v6;
  __int64 result;
  __int64 v9;
  void (***v10)(_QWORD, __int64);
  __int64 v13;
  int v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  void (***v20)(_QWORD, __int64);

  *a2 = 0;
  if (*(_DWORD*)(a3 + 64) != 2) {
    result = nn_diag_detail_AbortImpl_plt_856170(a1);
    goto LABEL_25;
  }
  v6 = *(unsigned __int8*)(a3 + 68);
  if (v6 != 1) {
    if (v6 == 3) {
    LABEL_6:
      *(_DWORD*)(a3 + 64) = 1;
    LABEL_7:
      nn_sf_hipc_server_v1_detail_HipcAllInOneServerManagerBase_DoRegisterServerSessionToWait_plt(
          a1, a3);
      return 0;
    }
    if (v6 != 2) {
      a1 = nn_detail_UnexpectedDefaultImpl_plt_857150(a1);
      goto LABEL_6;
    }
  }
  else if (*a4 != 2) {
    v13 = a1;
    result = SdkRoutine_85e340(a1, a3, a4, a5, a4);
    if ((_DWORD)result == 0) {
      if ((a6 & 1) != 0) {
        *a2 = 1;
        return 0;
      }
      v15 = *(_DWORD*)(a3 + 64);
      if (v15 == 1) {
        goto LABEL_20;
      }
      if (v15 == 3) {
        if ((unsigned int)nn_sf_hipc_Reply_plt(*(unsigned int*)(a3 + 72), a4) !=
            0) {
        LABEL_18:
          SdkRoutine_85e460(v13, a3);
          return 0;
        }
        *(_DWORD*)(a3 + 64) = 1;
      LABEL_20:
        a1 = v13;
        goto LABEL_7;
      }
    LABEL_25:
      v16 = nn_diag_detail_AbortImpl_plt_856170(result);
      v18 = *(unsigned int*)(v17 + 72);
      v19 = v17;
      v20 = (void (***)(_QWORD, __int64))v16;
      nn_os_FinalizeMultiWaitHolder_plt(v17);
      (**v20)(v20, v19);
      return nn_sf_hipc_CloseServerSessionHandle_plt(v18);
    }
    if ((result & 0x1FF) != 0xA ||
        (((unsigned int)result >> 9) & 0x1FFC) - 800 >= 0x64) {
      goto LABEL_18;
    }
    return result;
  }
  v9 = *(unsigned int*)(a3 + 72);
  v10 = (void (***)(_QWORD, __int64))a1;
  nn_os_FinalizeMultiWaitHolder_plt(a3);
  (**v10)(v10, a3);
  nn_sf_hipc_CloseServerSessionHandle_plt(v9);
  return 0;
}

__int64 nn_sf_hipc_server_v1_HipcServerSessionManagerBase_CloseSessionBase(
    void (***a1)(_QWORD, __int64), __int64 a2)
{
  __int64 v2;

  v2 = *(unsigned int*)(a2 + 72);
  nn_os_FinalizeMultiWaitHolder_plt(a2);
  (**a1)(a1, a2);
  return nn_sf_hipc_CloseServerSessionHandle_plt(v2);
}

#pragma GCC visibility pop
