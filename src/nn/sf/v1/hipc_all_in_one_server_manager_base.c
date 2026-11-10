#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 SdkRoutine_85e410(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 nn_diag_detail_AbortImpl_plt_856170(_QWORD);
__int64 nn_diag_detail_AbortImpl_plt_858db0(_QWORD);
__int64 nn_os_ClearEvent_plt(_QWORD);
__int64 nn_os_FinalizeEvent_plt(_QWORD);
__int64 nn_os_FinalizeMultiWaitHolder_plt(_QWORD);
__int64 nn_os_FinalizeMultiWait_plt(_QWORD);
__int64 nn_os_GetMultiWaitHolderUserData_plt(_QWORD);
__int64 nn_os_InitializeEvent_plt(_QWORD, _QWORD, _QWORD);
__int64 nn_os_InitializeMultiWaitHolder_plt_858be0(_QWORD, _QWORD);
__int64 nn_os_InitializeMultiWait_plt(_QWORD);
__int64 nn_os_LinkMultiWaitHolder_plt(_QWORD, _QWORD);
__int64 nn_os_MoveAllMultiWaitHolder_plt(_QWORD, _QWORD);
__int64 nn_os_SdkMutexType_Lock_plt(_QWORD);
__int64 nn_os_SdkMutexType_Unlock_plt(_QWORD);
__int64 nn_os_SetMultiWaitHolderUserData_plt(_QWORD, _QWORD);
__int64 nn_os_SignalEvent_plt(_QWORD);
__int64 nn_os_UnlinkAllMultiWaitHolder_plt(_QWORD);
__int64 nn_os_UnlinkMultiWaitHolder_plt(_QWORD);
__int64 nn_os_WaitAny_plt(_QWORD);
__int64 nn_sf_cmif_server_CmifServerDomainManager_CmifServerDomainManager_plt(
    _QWORD);
__int64
    nn_sf_cmif_server_CmifServerDomainManager_EntryAllocator_Destroy_EntryAllocator_plt(
        _QWORD);
__int64 nn_sf_hipc_AttachWaitHolderForAccept_plt(_QWORD, _QWORD);
__int64 nn_sf_hipc_CloseServerPortHandle_plt(_QWORD);
__int64 nn_sf_hipc_FinalizeHipcServiceResolution_plt(_QWORD);
__int64 nn_sf_hipc_GetMessageBufferOnTls_plt(_QWORD);
__int64 nn_sf_hipc_InitializeHipcServiceResolution_plt(_QWORD);
__int64 nn_sf_hipc_RegisterHipcService_plt(_QWORD, _QWORD, _QWORD);
__int64 nn_sf_hipc_UnregisterHipcService_plt(_QWORD);
__int64 nn_sf_hipc_server_v1_HipcServerSessionBase_Receive_plt(_QWORD, _QWORD,
                                                               _QWORD);
__int64
    nn_sf_hipc_server_v1_detail_HipcAllInOneServerManagerBase_InitializePortImpl_plt(
        _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64
    nn_sf_hipc_server_v1_detail_HipcAllInOneServerManagerBase_ProcessAsPort_plt(
        _QWORD, _QWORD);
__int64
    nn_sf_hipc_server_v1_detail_HipcAllInOneServerManagerBase_ProcessAuto_plt(
        _QWORD, _QWORD);
__int64
    nn_sf_hipc_server_v1_detail_HipcAllInOneServerManagerBase_RegisterPortImpl_plt(
        _QWORD, _QWORD, _QWORD);
__int64
nn_sf_hipc_server_v1_detail_HipcAllInOneServerManagerBase_WaitSignaled_plt(
    void);
__int64 nn_sf_v1_17e660(_QWORD, _QWORD);
__int64 nn_sf_v1_17e660_alt1(__int64*, __int64 (***)(_QWORD, __int64*)) __asm__(
    "nn_sf_v1_17e660");
__int64 strcpy_plt(void* this_, char*);
extern __int64 SdkData_e86fe8;
extern __int64 SdkData_e86ff0;
extern __int64 SdkData_e87030;
__int64
nn_sf_hipc_server_v1_detail_HipcAllInOneServerManagerBase_DoRegisterServerSessionToWait(
    _QWORD* a1, __int64 a2);
__int64
nn_sf_hipc_server_v1_detail_HipcAllInOneServerManagerBase_HipcAllInOneServerManagerBase(
    __int64 a1);
void nn_sf_hipc_server_v1_detail_HipcAllInOneServerManagerBase_Destroy_HipcAllInOneServerManagerBase(
    void* this_);
__int64
nn_sf_hipc_server_v1_detail_HipcAllInOneServerManagerBase_RegisterPortImpl(
    __int64 a1, __int64 a2, unsigned int a3);
__int64
nn_sf_hipc_server_v1_detail_HipcAllInOneServerManagerBase_InitializePort_17ca60(
    __int64 a1, int a2, unsigned int a3);
__int64
nn_sf_hipc_server_v1_detail_HipcAllInOneServerManagerBase_InitializePortImpl_17cac0(
    __int64 a1, int a2, __int64* a3, unsigned int a4);
__int64
nn_sf_hipc_server_v1_detail_HipcAllInOneServerManagerBase_InitializePort_17cb50(
    __int64 a1, __int64 a2, unsigned int a3, __int64 a4);
__int64
nn_sf_hipc_server_v1_detail_HipcAllInOneServerManagerBase_InitializePortImpl_17cbb0(
    __int64 a1, int a2, __int64* a3, unsigned int a4, __int64 a5);
__int64
nn_sf_hipc_server_v1_detail_HipcAllInOneServerManagerBase_AssignPointerTransferBufferTo(
    __int64 result, __int64 a2);
void* nn_sf_hipc_server_v1_detail_HipcAllInOneServerManagerBase_WaitSignaled(
    void* this_);
__int64
nn_sf_hipc_server_v1_detail_HipcAllInOneServerManagerBase_ReceiveAsSession_17cdf0(
    __int64 a1, __int64 a2);
__int64
nn_sf_hipc_server_v1_detail_HipcAllInOneServerManagerBase_ReceiveAsSession_17ce70(
    __int64 a1, __int64 a2, __int64 a3, __int64 a4);
__int64
nn_sf_hipc_server_v1_detail_HipcAllInOneServerManagerBase_ProcessAsSession_17cef0(
    __int64 a1, __int64 a2);
__int64
nn_sf_hipc_server_v1_detail_HipcAllInOneServerManagerBase_ProcessAsSession_17cfb0(
    __int64 a1, __int64 a2, __int64 a3, __int64 a4);
__int64
nn_sf_hipc_server_v1_detail_HipcAllInOneServerManagerBase_ProcessInvokeRequest(
    __int64 a1, __int64 a2);
__int64
nn_sf_hipc_server_v1_detail_HipcAllInOneServerManagerBase_ProcessInvokeRequestWithDefer(
    __int64 a1, __int64 a2);
__int64 nn_sf_hipc_server_v1_detail_HipcAllInOneServerManagerBase_ProcessAuto(
    __int64 a1, __int64 a2);
bool nn_sf_hipc_server_v1_detail_HipcAllInOneServerManagerBase_WaitAndProcessAutoImpl(
    void* this_);
__int64
nn_sf_hipc_server_v1_detail_HipcAllInOneServerManagerBase_WaitAndProcessAuto(
    void* this_);
__int64
nn_sf_hipc_server_v1_detail_HipcAllInOneServerManagerBase_WakeupOneWaitingLoop(
    void* this_);
__int64
nn_sf_hipc_server_v1_detail_HipcAllInOneServerManagerBase_LoopAuto_17d5d0(
    __int64 a1, __int64 a2);
__int64
nn_sf_hipc_server_v1_detail_HipcAllInOneServerManagerBase_LoopAuto_17d690(
    void* this_);
__int64
nn_sf_hipc_server_v1_detail_HipcAllInOneServerManagerBase_AddUserWaitHolder(
    __int64 a1, __int64 a2);
__int64

nn_sf_hipc_server_v1_detail_HipcAllInOneServerManagerBase_DoRegisterServerSessionToWait(
    _QWORD* a1, __int64 a2)
{
  _QWORD* v4;

  if (*(_QWORD*)(a2 + 80) != 0) {
    *(_QWORD*)(a2 + 80) = 0;
    (*(void (**)(_QWORD*))(*a1 + 80LL))(a1);
  }
  nn_os_SetMultiWaitHolderUserData_plt(a2, 1);
  nn_os_SdkMutexType_Lock_plt(a1 + 43);
  nn_os_LinkMultiWaitHolder_plt(a1 + 44, a2);
  nn_os_SignalEvent_plt(a1 + 27);
  nn_os_SdkMutexType_Lock_plt(a1 + 50);
  v4 = (_QWORD*)a1[52];
  if (v4 != a1 + 51) {
    nn_os_SignalEvent_plt(v4 + 17);
  }
  nn_os_SdkMutexType_Unlock_plt(a1 + 50);
  return nn_os_SdkMutexType_Unlock_plt(a1 + 43);
}

__int64

nn_sf_hipc_server_v1_detail_HipcAllInOneServerManagerBase_HipcAllInOneServerManagerBase(
    __int64 a1)
{
  __int64 v2;

  *(_QWORD*)a1 = SdkData_e86ff0 + 16;
  *(_QWORD*)(a1 + 8) = 0;
  nn_sf_cmif_server_CmifServerDomainManager_CmifServerDomainManager_plt(a1 +
                                                                        16);
  v2 = SdkData_e87030 + 120;
  *(_QWORD*)a1 = SdkData_e87030 + 16;
  *(_QWORD*)(a1 + 16) = v2;
  nn_os_InitializeEvent_plt(a1 + 112, 0, 0);
  nn_os_InitializeEvent_plt(a1 + 216, 0, 1);
  *(_DWORD*)(a1 + 320) = 0;
  *(_DWORD*)(a1 + 344) = 0;
  *(_DWORD*)(a1 + 400) = 0;
  *(_QWORD*)(a1 + 328) = a1 + 328;
  *(_QWORD*)(a1 + 336) = a1 + 328;
  *(_QWORD*)(a1 + 408) = a1 + 408;
  *(_QWORD*)(a1 + 416) = a1 + 408;
  nn_os_InitializeMultiWait_plt(a1 + 64);
  nn_os_InitializeMultiWaitHolder_plt_858be0(a1 + 152, a1 + 112);
  nn_os_LinkMultiWaitHolder_plt(a1 + 64, a1 + 152);
  nn_os_InitializeMultiWaitHolder_plt_858be0(a1 + 256, a1 + 216);
  nn_os_LinkMultiWaitHolder_plt(a1 + 64, a1 + 256);
  return nn_os_InitializeMultiWait_plt(a1 + 352);
}

void nn_sf_hipc_server_v1_detail_HipcAllInOneServerManagerBase_Destroy_HipcAllInOneServerManagerBase(
    void* this_)
{
  char* v1;
  __int64 v3;
  __int64 v4;
  int v5;
  __int64 v6;
  struct {
    __int64 v7;
    int v8;
  } v7_;

  v1 = (char*)this_ + 328;
  v3 = *((_QWORD*)this_ + 42);
  v4 = SdkData_e87030 + 120;
  *(_QWORD*)this_ = SdkData_e87030 + 16;
  *((_QWORD*)this_ + 2) = v4;
  while ((char*)v3 != v1) {
    nn_os_UnlinkMultiWaitHolder_plt(v3 - 64);
    nn_os_FinalizeMultiWaitHolder_plt(v3 - 64);
    if (*(_BYTE*)(v3 + 37) == 1) {
      v5 = *(_DWORD*)(v3 + 24);
      v7_.v7 = v3 + 28;
      v7_.v8 = v5;
      v6 = nn_sf_hipc_UnregisterHipcService_plt(&v7_.v7);
      nn_sf_hipc_FinalizeHipcServiceResolution_plt(v6);
      nn_sf_hipc_CloseServerPortHandle_plt(*(unsigned int*)(v3 + 20));
    }
    v3 = *(_QWORD*)(v3 + 8);
  }
  nn_os_UnlinkMultiWaitHolder_plt((char*)this_ + 256);
  nn_os_FinalizeMultiWaitHolder_plt((char*)this_ + 256);
  nn_os_UnlinkMultiWaitHolder_plt((char*)this_ + 152);
  nn_os_FinalizeMultiWaitHolder_plt((char*)this_ + 152);
  nn_os_UnlinkAllMultiWaitHolder_plt((char*)this_ + 352);
  nn_os_UnlinkAllMultiWaitHolder_plt((char*)this_ + 64);
  nn_os_FinalizeMultiWait_plt((char*)this_ + 352);
  nn_os_FinalizeMultiWait_plt((char*)this_ + 64);
  nn_os_FinalizeEvent_plt((char*)this_ + 216);
  nn_os_FinalizeEvent_plt((char*)this_ + 112);
  *((_QWORD*)this_ + 2) = SdkData_e86fe8 + 16;
  nn_sf_cmif_server_CmifServerDomainManager_EntryAllocator_Destroy_EntryAllocator_plt(
      (char*)this_ + 32);
}

__int64

nn_sf_hipc_server_v1_detail_HipcAllInOneServerManagerBase_RegisterPortImpl(
    __int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v5;
  __int64 result;
  _QWORD* v7;
  __int64 v8;

  *(_DWORD*)(a2 + 84) = a3;
  nn_sf_hipc_AttachWaitHolderForAccept_plt(a2, a3);
  nn_os_SetMultiWaitHolderUserData_plt(a2, 2);
  nn_os_SdkMutexType_Lock_plt(a1 + 344);
  nn_os_LinkMultiWaitHolder_plt(a1 + 352, a2);
  nn_os_SignalEvent_plt(a1 + 216);
  nn_os_SdkMutexType_Lock_plt(a1 + 400);
  v5 = *(_QWORD*)(a1 + 416);
  if (v5 != a1 + 408) {
    nn_os_SignalEvent_plt(v5 + 136);
  }
  nn_os_SdkMutexType_Unlock_plt(a1 + 400);
  result = nn_os_SdkMutexType_Unlock_plt(a1 + 344);
  v8 = *(_QWORD*)(a2 + 64);
  v7 = (_QWORD*)(a2 + 64);
  *v7 = *(_QWORD*)(a1 + 328);
  *(_QWORD*)(v8 + 8) = a1 + 328;
  *(_QWORD*)(*(_QWORD*)(a1 + 328) + 8LL) = v7;
  *(_QWORD*)(a1 + 328) = v8;
  return result;
}

__int64

nn_sf_hipc_server_v1_detail_HipcAllInOneServerManagerBase_InitializePort_17ca60(
    __int64 a1, int a2, unsigned int a3)
{
  __int64 v5;
  __int64 v6;

  v5 = a3;
  v6 = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 56LL))(a1);
  *(_BYTE*)(v6 + 101) = 0;
  *(_DWORD*)(v6 + 80) = a2;
  return nn_sf_hipc_server_v1_detail_HipcAllInOneServerManagerBase_RegisterPortImpl_plt(
      a1, v6, v5);
}

__int64

nn_sf_hipc_server_v1_detail_HipcAllInOneServerManagerBase_InitializePortImpl_17cac0(
    __int64 a1, int a2, __int64* a3, unsigned int a4)
{
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;

  v8 = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 56LL))(a1);
  *(_BYTE*)(v8 + 101) = 0;
  v9 = v8;
  v10 = *a3;
  if (*a3 != 0) {
    *a3 = 0;
    v11 = a3[1];
    v12 = *(_QWORD*)(v8 + 104);
    *(_QWORD*)(v9 + 104) = v10;
    *(_QWORD*)(v9 + 112) = v11;
    if (v12 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)v12 + 8LL))(v12);
    }
  }
  else {
    *(_DWORD*)(v8 + 80) = a2;
  }
  return nn_sf_hipc_server_v1_detail_HipcAllInOneServerManagerBase_RegisterPortImpl_plt(
      a1, v9, a4);
}

__int64

nn_sf_hipc_server_v1_detail_HipcAllInOneServerManagerBase_InitializePort_17cb50(
    __int64 a1, __int64 a2, unsigned int a3, __int64 a4)
{
  __int64 result;
  unsigned int v5;
  _QWORD* v6[2];

  v6[0] = nullptr;
  v6[1] = nullptr;
  result =
      nn_sf_hipc_server_v1_detail_HipcAllInOneServerManagerBase_InitializePortImpl_plt(
          a1, a2, v6, a3, a4);
  if (v6[0] != nullptr) {
    v5 = result;
    (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, _QWORD*))(*v6[0] + 8LL))(
        (void*)v6[0], v6[0]);
    return v5;
  }
  return result;
}

__int64

nn_sf_hipc_server_v1_detail_HipcAllInOneServerManagerBase_InitializePortImpl_17cbb0(
    __int64 a1, int a2, __int64* a3, unsigned int a4, __int64 a5)
{
  __int64 v10;
  unsigned int v11;
  __int64 v12;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  unsigned int v18;

  nn_sf_hipc_InitializeHipcServiceResolution_plt(a1);
  v18 = 0;
  v10 = nn_sf_hipc_RegisterHipcService_plt(&v18, a4, a5);
  v11 = v10;
  if ((_DWORD)v10 != 0) {
    nn_sf_hipc_FinalizeHipcServiceResolution_plt(v10);
  }
  else {
    v12 = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 56LL))(a1);
    *(_DWORD*)(v12 + 88) = *(_DWORD*)(a5 + 8);
    strcpy_plt((void*)(v12 + 92), *(char**)a5);
    *(_BYTE*)(v12 + 101) = 1;
    v14 = *a3;
    if (*a3 != 0) {
      *a3 = 0;
      v15 = a3[1];
      v16 = *(_QWORD*)(v12 + 104);
      *(_QWORD*)(v12 + 104) = v14;
      *(_QWORD*)(v12 + 112) = v15;
      if (v16 != 0) {
        (*(void (**)(__int64))(*(_QWORD*)v16 + 8LL))(v16);
      }
    }
    else {
      *(_DWORD*)(v12 + 80) = a2;
    }
    nn_sf_hipc_server_v1_detail_HipcAllInOneServerManagerBase_RegisterPortImpl_plt(
        a1, v12, v18);
  }
  return v11;
}

__int64

nn_sf_hipc_server_v1_detail_HipcAllInOneServerManagerBase_AssignPointerTransferBufferTo(
    __int64 result, __int64 a2)
{
  if (*(_QWORD*)(a2 + 88) != 0 && *(_DWORD*)(a2 + 64) == 1) {
    result = (*(__int64 (**)(__int64))(*(_QWORD*)result + 72LL))(result);
    *(_QWORD*)(a2 + 80) = result;
  }
  return result;
}

void* nn_sf_hipc_server_v1_detail_HipcAllInOneServerManagerBase_WaitSignaled(
    void* this_)
{
  void* v2;
  void* v3;

  nn_os_SdkMutexType_Lock_plt((char*)this_ + 320);
  nn_os_SdkMutexType_Lock_plt((char*)this_ + 344);
  nn_os_MoveAllMultiWaitHolder_plt((char*)this_ + 64, (char*)this_ + 352);
  nn_os_SdkMutexType_Unlock_plt((char*)this_ + 344);
  v2 = (void*)nn_os_WaitAny_plt((char*)this_ + 64);
  if (v2 == (void*)((char*)this_ + 152)) {
  LABEL_4:
    v3 = nullptr;
  }
  else {
    while (v2 == (void*)((char*)this_ + 256)) {
      nn_os_ClearEvent_plt((char*)this_ + 216);
      nn_os_SdkMutexType_Lock_plt((char*)this_ + 344);
      nn_os_MoveAllMultiWaitHolder_plt((char*)this_ + 64, (char*)this_ + 352);
      nn_os_SdkMutexType_Unlock_plt((char*)this_ + 344);
      v2 = (void*)nn_os_WaitAny_plt((char*)this_ + 64);
      if (v2 == (void*)((char*)this_ + 152)) {
        goto LABEL_4;
      }
    }
    v3 = v2;
    nn_os_UnlinkMultiWaitHolder_plt(v2);
  }
  nn_os_SdkMutexType_Unlock_plt((char*)this_ + 320);
  return v3;
}

__int64

nn_sf_hipc_server_v1_detail_HipcAllInOneServerManagerBase_ReceiveAsSession_17cdf0(
    __int64 a1, __int64 a2)
{
  __int64 v2;
  __int64 v5;
  __int64 v6;
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
  __int64 result;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  _BYTE v24[4];
  __int64 v25;
  __int64 v26;
  __int64* v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;

  v5 = nn_sf_hipc_GetMessageBufferOnTls_plt(a1);
  v6 = nn_os_GetMultiWaitHolderUserData_plt(a2);
  if (v6 == 1) {
    if (*(_QWORD*)(a2 + 88) != 0 && *(_DWORD*)(a2 + 64) == 1) {
      *(_QWORD*)(a2 + 80) = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 72LL))(a1);
    }
    return nn_sf_hipc_server_v1_HipcServerSessionBase_Receive_plt(a2, v5, 256);
  }
  else {
    v7 = nn_diag_detail_AbortImpl_plt_856170(v6);
    v27 = &v33;
    v28 = v8;
    v29 = v2;
    v30 = a1;
    v31 = v5;
    v32 = a2;
    v10 = v9;
    v12 = v11;
    v14 = v13;
    v15 = v7;
    v16 = nn_os_GetMultiWaitHolderUserData_plt(v13);
    if (v16 == 1) {
      if (*(_QWORD*)(v14 + 88) != 0 && *(_DWORD*)(v14 + 64) == 1) {
        *(_QWORD*)(v14 + 80) =
            (*(__int64 (**)(__int64))(*(_QWORD*)v15 + 72LL))(v15);
      }
      return nn_sf_hipc_server_v1_HipcServerSessionBase_Receive_plt(v14, v12,
                                                                    v10);
    }
    else {
      v18 = nn_diag_detail_AbortImpl_plt_856170(v16);
      v25 = v12;
      v26 = v10;
      v20 = v19;
      v21 = v18;
      v22 = nn_sf_hipc_GetMessageBufferOnTls_plt(v18);
      v23 = nn_os_GetMultiWaitHolderUserData_plt(v20);
      if (v23 != 1) {
        nn_diag_detail_AbortImpl_plt_856170(v23);
        __udf(0);
      }
      if (*(_QWORD*)(v20 + 88) != 0 && *(_DWORD*)(v20 + 64) == 1) {
        *(_QWORD*)(v20 + 80) =
            (*(__int64 (**)(__int64))(*(_QWORD*)v21 + 72LL))(v21);
      }
      result =
          nn_sf_hipc_server_v1_HipcServerSessionBase_Receive_plt(v20, v22, 256);
      if ((_DWORD)result == 0) {
        v24[0] = 0;
        return SdkRoutine_85e410(v21, v24, v20, v22, 256, 0);
      }
    }
  }
  return result;
}

__int64

nn_sf_hipc_server_v1_detail_HipcAllInOneServerManagerBase_ReceiveAsSession_17ce70(
    __int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v8;

  v8 = nn_os_GetMultiWaitHolderUserData_plt(a2);
  if (v8 != 1) {
    nn_diag_detail_AbortImpl_plt_856170(v8);
  }
  if (*(_QWORD*)(a2 + 88) != 0 && *(_DWORD*)(a2 + 64) == 1) {
    *(_QWORD*)(a2 + 80) = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 72LL))(a1);
  }
  return nn_sf_hipc_server_v1_HipcServerSessionBase_Receive_plt(a2, a3, a4);
}

__int64

nn_sf_hipc_server_v1_detail_HipcAllInOneServerManagerBase_ProcessAsSession_17cef0(
    __int64 a1, __int64 a2)
{
  __int64 v4;
  __int64 v5;
  __int64 result;
  _BYTE v7[4];

  v4 = nn_sf_hipc_GetMessageBufferOnTls_plt(a1);
  v5 = nn_os_GetMultiWaitHolderUserData_plt(a2);
  if (v5 != 1) {
    nn_diag_detail_AbortImpl_plt_856170(v5);
  }
  if (*(_QWORD*)(a2 + 88) != 0 && *(_DWORD*)(a2 + 64) == 1) {
    *(_QWORD*)(a2 + 80) = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 72LL))(a1);
  }
  result = nn_sf_hipc_server_v1_HipcServerSessionBase_Receive_plt(a2, v4, 256);
  if ((_DWORD)result == 0) {
    v7[0] = 0;
    return SdkRoutine_85e410(a1, v7, a2, v4, 256, 0);
  }
  return result;
}

__int64

nn_sf_hipc_server_v1_detail_HipcAllInOneServerManagerBase_ProcessAsSession_17cfb0(
    __int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v8;
  __int64 result;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  unsigned int v17;
  unsigned int v18;
  unsigned int v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  unsigned int v26;
  char v28[4];
  __int64 v29;
  __int64 v30;
  __int64* v31;
  __int64 v32;
  __int64 v33;
  char v34[4];
  __int64 v35;
  __int64 v36;
  char v37[4];
  __int64 vars0;

  v8 = nn_os_GetMultiWaitHolderUserData_plt(a2);
  if (v8 == 1) {
    if (*(_QWORD*)(a2 + 88) != 0 && *(_DWORD*)(a2 + 64) == 1) {
      *(_QWORD*)(a2 + 80) = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 72LL))(a1);
    }
    result = nn_sf_hipc_server_v1_HipcServerSessionBase_Receive_plt(a2, a3, a4);
    if ((_DWORD)result == 0) {
      v37[0] = 0;
      return SdkRoutine_85e410(a1, v37, a2, a3, a4, 0);
    }
    return result;
  }
  v10 = nn_diag_detail_AbortImpl_plt_856170(v8);
  v31 = &vars0;
  v32 = v11;
  v33 = a2;
  v35 = a3;
  v36 = a4;
  v13 = v12;
  v14 = v10;
  v15 = nn_os_GetMultiWaitHolderUserData_plt(v12);
  if (v15 == 1) {
    v16 = nn_sf_hipc_GetMessageBufferOnTls_plt(1);
    if (*(_QWORD*)(v13 + 88) != 0 && *(_DWORD*)(v13 + 64) == 1) {
      *(_QWORD*)(v13 + 80) =
          (*(__int64 (**)(__int64))(*(_QWORD*)v14 + 72LL))(v14);
    }
    v17 = nn_sf_hipc_server_v1_HipcServerSessionBase_Receive_plt(v13, v16, 256);
    if (v17 != 0) {
      return v17;
    }
    v34[0] = 0;
    result = SdkRoutine_85e410(v14, v34, v13, v16, 256, 0);
    v17 = 0;
    if ((_DWORD)result == 0) {
      return v17;
    }
    v18 = ((unsigned int)result >> 9) & 0x1FFF;
    if ((result & 0x1FF) != 0xA || v18 - 811 > 8) {
      if ((result & 0x1FF) != 0xA) {
        return result;
      }
      v19 = v18 - 801;
      v17 = result;
      if (v19 <= 8) {
        return nn_diag_detail_AbortImpl_plt_856170(result);
      }
      return v17;
    }
  }
  else {
    result = nn_diag_detail_AbortImpl_plt_856170(v15);
  }
  v20 = nn_diag_detail_AbortImpl_plt_856170(result);
  v29 = v14;
  v30 = v13;
  v22 = v21;
  v23 = v20;
  v24 = nn_os_GetMultiWaitHolderUserData_plt(v21);
  if (v24 != 1) {
    nn_diag_detail_AbortImpl_plt_856170(v24);
    __udf(0);
  }
  v25 = nn_sf_hipc_GetMessageBufferOnTls_plt(1);
  if (*(_QWORD*)(v22 + 88) != 0 && *(_DWORD*)(v22 + 64) == 1) {
    *(_QWORD*)(v22 + 80) =
        (*(__int64 (**)(__int64))(*(_QWORD*)v23 + 72LL))(v23);
  }
  result =
      nn_sf_hipc_server_v1_HipcServerSessionBase_Receive_plt(v22, v25, 256);
  if ((_DWORD)result == 0) {
    v28[0] = 0;
    v26 = SdkRoutine_85e410(v23, v28, v22, v25, 256, 0);
    result = 0;
    if (v26 != 0) {
      if (((v26 >> 9) & 0x1FFF) - 801 < 9 && (v26 & 0x1FF) == 10) {
        return 0;
      }
      else {
        return v26;
      }
    }
  }
  return result;
}

__int64

nn_sf_hipc_server_v1_detail_HipcAllInOneServerManagerBase_ProcessInvokeRequest(
    __int64 a1, __int64 a2)
{
  __int64 v4;
  __int64 v5;
  unsigned int v6;
  __int64 result;
  unsigned int v8;
  unsigned int v9;
  _BYTE v10[4];

  v4 = nn_os_GetMultiWaitHolderUserData_plt(a2);
  if (v4 != 1) {
    nn_diag_detail_AbortImpl_plt_856170(v4);
  }
  v5 = nn_sf_hipc_GetMessageBufferOnTls_plt(1);
  if (*(_QWORD*)(a2 + 88) != 0 && *(_DWORD*)(a2 + 64) == 1) {
    *(_QWORD*)(a2 + 80) = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 72LL))(a1);
  }
  v6 = nn_sf_hipc_server_v1_HipcServerSessionBase_Receive_plt(a2, v5, 256);
  if (v6 != 0) {
    return v6;
  }
  v10[0] = 0;
  result = SdkRoutine_85e410(a1, v10, a2, v5, 256, 0);
  v6 = 0;
  if ((_DWORD)result == 0) {
    return v6;
  }
  v8 = ((unsigned int)result >> 9) & 0x1FFF;
  if ((result & 0x1FF) == 0xA && v8 - 811 <= 8) {
    nn_diag_detail_AbortImpl_plt_856170(result);
  }
  if ((result & 0x1FF) == 0xA) {
    v9 = v8 - 801;
    v6 = result;
    if (v9 <= 8) {
      nn_diag_detail_AbortImpl_plt_856170(result);
    }
    return v6;
  }
  return result;
}

__int64

nn_sf_hipc_server_v1_detail_HipcAllInOneServerManagerBase_ProcessInvokeRequestWithDefer(
    __int64 a1, __int64 a2)
{
  __int64 v4;
  __int64 v5;
  __int64 result;
  unsigned int v7;
  _BYTE v9[4];

  v4 = nn_os_GetMultiWaitHolderUserData_plt(a2);
  if (v4 != 1) {
    nn_diag_detail_AbortImpl_plt_856170(v4);
  }
  v5 = nn_sf_hipc_GetMessageBufferOnTls_plt(1);
  if (*(_QWORD*)(a2 + 88) != 0 && *(_DWORD*)(a2 + 64) == 1) {
    *(_QWORD*)(a2 + 80) = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 72LL))(a1);
  }
  result = nn_sf_hipc_server_v1_HipcServerSessionBase_Receive_plt(a2, v5, 256);
  if ((_DWORD)result == 0) {
    v9[0] = 0;
    v7 = SdkRoutine_85e410(a1, v9, a2, v5, 256, 0);
    result = 0;
    if (v7 != 0) {
      if (((v7 >> 9) & 0x1FFF) - 801 < 9 && (v7 & 0x1FF) == 10) {
        return 0;
      }
      else {
        return v7;
      }
    }
  }
  return result;
}

__int64 nn_sf_hipc_server_v1_detail_HipcAllInOneServerManagerBase_ProcessAuto(
    __int64 a1, __int64 a2)
{
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 result;
  _BYTE v8[4];

  v4 = nn_os_GetMultiWaitHolderUserData_plt(a2);
  if (v4 == 2) {
    return nn_sf_hipc_server_v1_detail_HipcAllInOneServerManagerBase_ProcessAsPort_plt(
        a1, a2);
  }
  if (v4 != 1) {
    nn_diag_detail_AbortImpl_plt_856170(v4);
  }
  v5 = nn_sf_hipc_GetMessageBufferOnTls_plt(1);
  v6 = nn_os_GetMultiWaitHolderUserData_plt(a2);
  if (v6 != 1) {
    nn_diag_detail_AbortImpl_plt_856170(v6);
  }
  if (*(_QWORD*)(a2 + 88) != 0 && *(_DWORD*)(a2 + 64) == 1) {
    *(_QWORD*)(a2 + 80) = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 72LL))(a1);
  }
  result = nn_sf_hipc_server_v1_HipcServerSessionBase_Receive_plt(a2, v5, 256);
  if ((_DWORD)result == 0) {
    v8[0] = 0;
    return SdkRoutine_85e410(a1, v8, a2, v5, 256, 0);
  }
  return result;
}

bool nn_sf_hipc_server_v1_detail_HipcAllInOneServerManagerBase_WaitAndProcessAutoImpl(
    void* this_)
{
  __int64 v2;
  int v4;

  v2 =
      nn_sf_hipc_server_v1_detail_HipcAllInOneServerManagerBase_WaitSignaled_plt();
  if (v2 != 0) {
    v4 =
        nn_sf_hipc_server_v1_detail_HipcAllInOneServerManagerBase_ProcessAuto_plt(
            this_, v2);
    if (v4 != 0) {
      nn_diag_detail_AbortImpl_plt_858db0(&v4);
    }
  }
  return v2 != 0;
}

__int64

nn_sf_hipc_server_v1_detail_HipcAllInOneServerManagerBase_WaitAndProcessAuto(
    void* this_)
{
  __int64 result;
  int v3;

  result =
      nn_sf_hipc_server_v1_detail_HipcAllInOneServerManagerBase_WaitSignaled_plt();
  if (result != 0) {
    result =
        nn_sf_hipc_server_v1_detail_HipcAllInOneServerManagerBase_ProcessAuto_plt(
            this_, result);
    v3 = result;
    if ((_DWORD)result != 0) {
      nn_diag_detail_AbortImpl_plt_858db0(&v3);
    }
  }
  return result;
}

__int64

nn_sf_hipc_server_v1_detail_HipcAllInOneServerManagerBase_WakeupOneWaitingLoop(
    void* this_)
{
  void* v2;

  nn_os_SdkMutexType_Lock_plt((char*)this_ + 400);
  v2 = *((void**)this_ + 52);
  if (v2 != (void*)((char*)this_ + 408)) {
    nn_os_SignalEvent_plt((char*)v2 + 136);
  }
  return nn_os_SdkMutexType_Unlock_plt((char*)this_ + 400);
}

__int64

nn_sf_hipc_server_v1_detail_HipcAllInOneServerManagerBase_LoopAuto_17d5d0(
    __int64 a1, __int64 a2)
{
  __int64 result;
  _QWORD v4[2];
  __int64 v5;
  _BYTE v6[48];
  _BYTE v7[64];
  _BYTE v8[40];
  _BYTE v9[72];

  v5 = a1;
  v4[0] = v4;
  v4[1] = v4;
  nn_os_InitializeEvent_plt(v8, 0, 0);
  v9[64] = 0;
  nn_os_InitializeMultiWait_plt(v6);
  nn_os_InitializeMultiWaitHolder_plt_858be0(v7, v5 + 112);
  nn_os_InitializeMultiWaitHolder_plt_858be0(v9, v8);
  LODWORD(a2) = nn_sf_v1_17e660(v4, a2);
  nn_os_FinalizeMultiWaitHolder_plt(v9);
  nn_os_FinalizeMultiWaitHolder_plt(v7);
  nn_os_FinalizeMultiWait_plt(v6);
  result = nn_os_FinalizeEvent_plt(v8);
  LODWORD(v4[0]) = a2;
  if ((_DWORD)a2 != 0) {
    nn_diag_detail_AbortImpl_plt_858db0(v4);
    __udf(0);
  }
  return result;
}

__int64

nn_sf_hipc_server_v1_detail_HipcAllInOneServerManagerBase_LoopAuto_17d690(
    void* this_)
{
  int v1;
  __int64 result;
  struct {
    __int64 v3[2];
    void* v4;
  } v3_;
  _BYTE v5[48];
  _BYTE v6[64];
  _BYTE v7[40];
  _BYTE v8[72];

  v3_.v4 = this_;
  v3_.v3[0] = (__int64)v3_.v3;
  v3_.v3[1] = (__int64)v3_.v3;
  nn_os_InitializeEvent_plt(v7, 0, 0);
  v8[64] = 0;
  nn_os_InitializeMultiWait_plt(v5);
  nn_os_InitializeMultiWaitHolder_plt_858be0(v6, (char*)v3_.v4 + 112);
  nn_os_InitializeMultiWaitHolder_plt_858be0(v8, v7);
  v1 = nn_sf_v1_17e660_alt1(v3_.v3, nullptr);
  nn_os_FinalizeMultiWaitHolder_plt(v8);
  nn_os_FinalizeMultiWaitHolder_plt(v6);
  nn_os_FinalizeMultiWait_plt(v5);
  result = nn_os_FinalizeEvent_plt(v7);
  LODWORD(v3_.v3[0]) = v1;
  if (v1 != 0) {
    nn_diag_detail_AbortImpl_plt_858db0(v3_.v3);
  }
  return result;
}

__int64

nn_sf_hipc_server_v1_detail_HipcAllInOneServerManagerBase_AddUserWaitHolder(
    __int64 a1, __int64 a2)
{
  __int64 v4;

  nn_os_GetMultiWaitHolderUserData_plt(a2);
  nn_os_SdkMutexType_Lock_plt(a1 + 344);
  nn_os_LinkMultiWaitHolder_plt(a1 + 352, a2);
  nn_os_SignalEvent_plt(a1 + 216);
  nn_os_SdkMutexType_Lock_plt(a1 + 400);
  v4 = *(_QWORD*)(a1 + 416);
  if (v4 != a1 + 408) {
    nn_os_SignalEvent_plt(v4 + 136);
  }
  nn_os_SdkMutexType_Unlock_plt(a1 + 400);
  return nn_os_SdkMutexType_Unlock_plt(a1 + 344);
}

#pragma GCC visibility pop
