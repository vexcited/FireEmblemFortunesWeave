#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 SdkRoutine_85e320(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                          _QWORD);
__int64 nn_diag_detail_AbortImpl_plt_856170(_QWORD);
__int64 nn_os_CloseNativeHandle_plt(_QWORD);
__int64 nn_sf_cmif_SetInlineContext_plt(_QWORD);
__int64 nn_sf_e3940(__int64, unsigned int*);
__int64 nn_sf_hipc_AttachWaitHolderForReceive_plt(_QWORD, _QWORD);
__int64 nn_sf_hipc_Reply_plt(_QWORD, _QWORD);
__int64 nn_sf_hipc_server_SetCurrentClientInfo_plt(_QWORD);
__int64
    nn_sf_hipc_server_v1_detail_HipcAllInOneServerManagerBase_DoRegisterServerSessionToWait_plt(
        _QWORD, _QWORD);
extern __int64 SdkData_e86ff0;
extern __int64 SdkData_e86ff8;
extern __int64 SdkData_e87000;
_QWORD* nn_sf_hipc_server_v1_HipcServerSessionManager_HipcServerSessionManager(
    _QWORD* result);
__int64 nn_sf_hipc_server_v1_HipcServerSessionManager_Register(__int64 a1,
                                                               unsigned int a2,
                                                               __int64 a3,
                                                               __int64 a4);
__int64 nn_sf_hipc_server_v1_HipcServerSessionManager_Process2InvokeMethodImpl(
    __int64 a1, __int64 a2, __int64 a3, unsigned int* a4, unsigned __int64 a5,
    __int64 a6, __int64 a7);
__int64 nn_sf_hipc_server_v1_HipcServerSessionManager_DoProcessMessage2(
    __int64 a1, __int64 a2, _DWORD* a3, __int64 a4, __int64 a5, __int64 a6);
_QWORD* nn_sf_hipc_server_v1_HipcServerSessionManager_CreateServerSession(
    _QWORD* a1, __int64* a2, _QWORD* a3);
__int64
nn_sf_hipc_server_v1_HipcServerSessionManager_DestroyServerSession(_QWORD* a1,
                                                                   _QWORD* a2);

_QWORD* nn_sf_hipc_server_v1_HipcServerSessionManager_HipcServerSessionManager(
    _QWORD* result)
{
  *result = SdkData_e86ff0 + 16;
  result[1] = 0;
  return result;
}

__int64 nn_sf_hipc_server_v1_HipcServerSessionManager_Register(__int64 a1,
                                                               unsigned int a2,
                                                               __int64 a3,
                                                               __int64 a4)
{
  __int64 v6;
  __int64 v7;

  v6 = (*(__int64 (**)(__int64, __int64, __int64))(*(_QWORD*)a1 + 8LL))(a1, a3,
                                                                        a4);
  if (v6 == 0) {
    return 52235;
  }
  v7 = v6;
  nn_sf_hipc_AttachWaitHolderForReceive_plt(v6, a2);
  *(_BYTE*)(v7 + 68) = 0;
  *(_DWORD*)(v7 + 72) = a2;
  *(_DWORD*)(v7 + 64) = 1;
  nn_sf_hipc_server_v1_detail_HipcAllInOneServerManagerBase_DoRegisterServerSessionToWait_plt(
      a1, v7);
  return 0;
}

__int64 nn_sf_hipc_server_v1_HipcServerSessionManager_Process2InvokeMethodImpl(
    __int64 a1, __int64 a2, __int64 a3, unsigned int* a4, unsigned __int64 a5,
    __int64 a6, __int64 a7)
{
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 result;
  __int64 v17;
  unsigned int v18;
  unsigned int v19;
  __int64 i;
  _QWORD v21[2];
  _QWORD v22[18];
  int v23;
  _DWORD v24[9];
  _QWORD v25[2];
  _QWORD v26[2];
  __int64 v27;
  __int64 v28;
  __int64 v29;

  v28 = 0;
  v29 = 0;
  v26[1] = 0;
  v27 = 0;
  v26[0] = 0;
  nn_sf_e3940((__int64)v26, a4);
  if (a5 < 4 * (unsigned __int64)WORD2(v29)) {
    return 205835;
  }
  v22[2] = v26;
  v22[7] = a6;
  v22[8] = a7;
  v23 = 0;
  v25[0] = SdkData_e86ff8 + 16;
  v25[1] = a1;
  v13 = *(_QWORD*)(a1 + 8);
  v14 = *(_QWORD*)(a3 + 80);
  v15 = *(_QWORD*)(a3 + 88);
  v22[0] = SdkData_e87000 + 16;
  v22[1] = v25;
  v22[14] = v14;
  v22[15] = v15;
  if (v13 == 0 ||
      (nn_sf_hipc_server_SetCurrentClientInfo_plt(a3 + 128),
       (_DWORD)(result = (**(__int64 (***)(__int64))v13)(v13)) == 0)) {
    if ((unsigned __int16)v27 <= 0xFu) {
      v17 = 0;
    }
    else {
      v17 = (unsigned __int16)v27 - 16LL;
    }
    v21[0] = (v26[0] + 4LL * BYTE1(v29) + 15) & 0xFFFFFFFFFFFFFFF0LL;
    v21[1] = v17;
    result = (**(__int64 (***)(_QWORD, _QWORD*, _QWORD*))(a2 + 8))(*(_QWORD*)a2,
                                                                   v22, v21);
    if (v13 != 0) {
      v18 = result;
      (*(void (**)(__int64))(*(_QWORD*)v13 + 8LL))(v13);
      v21[0] = 0;
      nn_sf_hipc_server_SetCurrentClientInfo_plt(v21);
      result = v18;
    }
    if ((_DWORD)result == 0) {
      if (v23 < 1) {
        *(_DWORD*)(a3 + 64) = 3;
        return 0;
      }
      if (*(_DWORD*)(a3 + 64) != 2) {
        nn_diag_detail_AbortImpl_plt_856170(result);
        __udf(0);
      }
      v19 = nn_sf_hipc_Reply_plt(*(unsigned int*)(a3 + 72), a6);
      if (v19 == 0) {
        *(_DWORD*)(a3 + 64) = 1;
      }
      if (v23 >= 1) {
        for (i = 0; i < v23;
             nn_os_CloseNativeHandle_plt((unsigned int)v24[i++]))
          ;
      }
      result = v19;
      if (v19 == 0) {
        return 0;
      }
    }
  }
  return result;
}

__int64 nn_sf_hipc_server_v1_HipcServerSessionManager_DoProcessMessage2(
    __int64 a1, __int64 a2, _DWORD* a3, __int64 a4, __int64 a5, __int64 a6)
{
  int v12;
  unsigned int v13;
  int v14;
  int v15;
  int v16;
  unsigned int v17;
  unsigned int v18;
  unsigned int v19;
  void (***v20)(_QWORD);
  _QWORD v22[2];

  v12 = (unsigned __int16)*a3;
  if ((*a3 & 0xFFFE) != 6) {
    v17 = nn_sf_cmif_SetInlineContext_plt(0);
    v18 = 206347;
    if (v12 <= 5) {
      goto LABEL_10;
    }
  LABEL_5:
    if (v12 == 7) {
    LABEL_12:
      v18 = (*(__int64 (**)(__int64, __int64, _DWORD*, __int64, __int64,
                            __int64))(*(_QWORD*)a1 + 32LL))(a1, a2, a3, a4, a5,
                                                            a6);
      goto LABEL_17;
    }
    if (v12 != 6) {
      goto LABEL_17;
    }
    goto LABEL_13;
  }
  v13 = a3[1];
  if ((v13 & 0x80000000) != 0) {
    v19 = a3[2];
    v15 = (v19 >> 1) & 0xF;
    v16 = (v19 >> 5) & 0xF;
    v14 = 2 * (v19 & 1);
  }
  else {
    v14 = 0;
    v15 = 0;
    v16 = 0;
  }
  v17 = nn_sf_cmif_SetInlineContext_plt(
      (unsigned int)
          a3[((((*a3 >> 15) & 0x1E) +
               3 * (((*a3 >> 20) & 0xF) + (*a3 >> 28) + (HIBYTE(*a3) & 0xF)) +
               (v13 >> 31) + v14 + v15 + v16 + 5) &
              0xFFFFFFFC) +
             3]);
  v18 = 206347;
  if (v12 > 5) {
    goto LABEL_5;
  }
LABEL_10:
  if (v12 == 4) {
  LABEL_13:
    v20 = *(void (****)(_QWORD))(a2 + 112);
    v22[0] = v20;
    if (v20 != nullptr) {
      (**v20)(v20);
    }
    v22[1] = *(_QWORD*)(a2 + 120);
    v18 = SdkRoutine_85e320(a1, v22, a2, a3, a4, a5, a6);
    if (v22[0] != 0) {
      (*(void (**)(_QWORD))(*(_QWORD*)v22[0] + 8LL))(v22[0]);
    }
    goto LABEL_17;
  }
  if (v12 == 5) {
    goto LABEL_12;
  }
LABEL_17:
  nn_sf_cmif_SetInlineContext_plt(v17);
  return v18;
}

_QWORD* nn_sf_hipc_server_v1_HipcServerSessionManager_CreateServerSession(
    _QWORD* a1, __int64* a2, _QWORD* a3)
{
  __int64 v6;
  _QWORD* v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;

  v6 = (*(__int64 (**)(_QWORD*))(*a1 + 16LL))(a1);
  v7 = (_QWORD*)v6;
  if (v6 != 0) {
    v8 = *a2;
    v9 = a2[1];
    *a2 = 0;
    v10 = *(_QWORD*)(v6 + 112);
    v7[14] = v8;
    v7[15] = v9;
    if (v10 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)v10 + 8LL))(v10);
    }
    v7[16] = *a3;
    v11 = a1[1];
    if (v11 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)v11 + 16LL))(v11);
    }
  }
  return v7;
}

__int64

nn_sf_hipc_server_v1_HipcServerSessionManager_DestroyServerSession(_QWORD* a1,
                                                                   _QWORD* a2)
{
  __int64 v3;
  __int64 v5;

  v3 = a2[14];
  a2[14] = 0;
  if (v3 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v3 + 8LL))(v3);
  }
  a2[15] = 0;
  v5 = a1[1];
  if (v5 != 0) {
    (*(void (**)(__int64, _QWORD))(*(_QWORD*)v5 + 24LL))(v5, a2[16]);
  }
  a2[16] = 0;
  return (*(__int64 (**)(_QWORD*, _QWORD*))(*a1 + 24LL))(a1, a2);
}

#pragma GCC visibility pop
