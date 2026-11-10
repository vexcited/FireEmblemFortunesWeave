#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 SdkRoutine_328a40(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                          _QWORD);
__int64 SdkRoutine_328c60(_QWORD, _QWORD);
__int64 SdkRoutine_32a6a0();
__int64 memset_plt(void* this_, void*, int, unsigned __int64);
__int64 nn_codec_328510_alt1(_QWORD, _QWORD, _QWORD,
                             _QWORD) __asm__("nn_codec_328510");
__int64 nn_diag_detail_AbortImpl_plt_856170(_QWORD);
__int64 nn_diag_detail_AbortImpl_plt_858db0(_QWORD);
__int64 nn_lmem_CreateUnitHeap_plt(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                                   _QWORD);
__int64 nn_lmem_DestroyUnitHeap_plt(_QWORD);
__int64 nn_os_SdkConditionVariableType_Broadcast_plt(_QWORD);
__int64 nn_os_SdkConditionVariableType_Initialize_plt(_QWORD);
__int64 nn_os_SdkMutexType_Lock_plt(_QWORD);
__int64 nn_os_SdkMutexType_Unlock_plt(_QWORD);
__int64 nn_sf_hipc_ConnectToHipcService_plt(_QWORD, _QWORD);
__int64 nn_sf_hipc_FinalizeHipcServiceResolution_plt(void);
__int64 nn_sf_hipc_InitializeHipcServiceResolution_plt(_QWORD);
__int64 nn_sf_hipc_client_HipcClientSessionManager_ConvertToDomainImpl_plt(
    _QWORD, _QWORD, _QWORD);
__int64 nn_sf_hipc_client_ResizeSessions(__int64, int);
extern __int64 SdkData_e86d80;
extern __int64 SdkData_e87068;
extern __int64 SdkData_e879e8;
__int64 nn_codec_328100(__int64 a1, __int64 a2, __int64 a3,
                        unsigned __int64 a4);
__int64 nn_codec_328220(__int64* a1, _QWORD** a2);
__int64 nn_codec_328510(__int64 a1, __int64* a2, __int64 a3, unsigned int a4);
__int64 nn_codec_328620(__int64 a1, __int64* a2, __int64 a3, __int64 a4,
                        unsigned int a5);

__int64 nn_codec_328100(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4)
{
  int v5;
  int v6;
  __int64 v7;
  int v8;
  __int64 result;
  int v10;
  __int64 v11[3];
  _QWORD* v12;

  memset_plt((void*)a1, nullptr, 2592, a4);
  v11[2] = 0;
  v11[0] = a1;
  v11[1] = (__int64)"hwopus";
  nn_os_SdkMutexType_Lock_plt(a1 + 2568);
  v5 = *(_DWORD*)(a1 + 2572);
  if (v5 != 0) {
    if (*(_QWORD*)(a1 + 2576) == 0) {
      *(_QWORD*)(a1 + 2584) = a1;
      *(_QWORD*)(a1 + 2576) = SdkRoutine_32a6a0;
    }
    *(_DWORD*)(a1 + 2572) = v5 + 1;
  }
  else {
    v12 = nullptr;
    v6 = nn_codec_328220(v11, &v12);
    if (v6 != 0) {
      v10 = v6;
      if (v12 != nullptr) {
        (*(void (**)(_QWORD*))(*v12 + 8LL))(v12);
      }
      nn_os_SdkMutexType_Unlock_plt(a1 + 2568);
      LODWORD(v11[0]) = v10;
      nn_diag_detail_AbortImpl_plt_858db0(v11);
    }
    *(_QWORD*)(a1 + 2584) = a1;
    *(_DWORD*)(a1 + 2572) = 1;
    *(_QWORD*)(a1 + 2560) = v12;
    *(_QWORD*)(a1 + 2576) = SdkRoutine_32a6a0;
  }
  nn_os_SdkMutexType_Unlock_plt(a1 + 2568);
  v7 = nn_os_SdkMutexType_Lock_plt(a1 + 2288);
  if (*(int*)(a1 + 2280) <= 2) {
    nn_diag_detail_AbortImpl_plt_856170(v7);
  }
  v8 = nn_sf_hipc_client_ResizeSessions(a1 + 2224, 3);
  result = nn_os_SdkMutexType_Unlock_plt(a1 + 2288);
  LODWORD(v11[0]) = v8;
  if (v8 != 0) {
    nn_diag_detail_AbortImpl_plt_858db0(v11);
  }
  return result;
}

__int64 nn_codec_328220(__int64* a1, _QWORD** a2)
{
  __int64 v2;
  int v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  _QWORD* v11;
  unsigned int v12;
  unsigned int v13;
  __int64 v14;
  __int64 v15;
  _QWORD* v16;
  int v17;
  _QWORD* v19;
  _QWORD* v20;
  unsigned int v21;

  v2 = *a1;
  nn_os_SdkMutexType_Lock_plt(*a1 + 8);
  v5 = *(_DWORD*)(v2 + 12);
  if (v5 != 0) {
    *(_DWORD*)(v2 + 12) = v5 + 1;
    nn_os_SdkMutexType_Unlock_plt(v2 + 8);
    if (a1[2] != 0) {
      goto LABEL_4;
    }
    goto LABEL_3;
  }
  v14 = nn_lmem_CreateUnitHeap_plt(v2 + 176, 2048, 64, 4, 16, v2 + 16);
  v15 = SdkData_e87068;
  *(_QWORD*)v2 = v2 + 16;
  *(_QWORD*)(v2 + 160) = v15 + 16;
  *(_QWORD*)(v2 + 168) = v14;
  *(_DWORD*)(v2 + 12) = 1;
  nn_os_SdkMutexType_Unlock_plt(v2 + 8);
  if (a1[2] == 0) {
  LABEL_3:
    a1[2] = *(_QWORD*)v2 + 144LL;
  }
LABEL_4:
  v6 = SdkData_e86d80;
  *(_DWORD*)(v2 + 2248) = 0;
  *(_QWORD*)(v2 + 2224) = v6 + 16;
  *(_QWORD*)(v2 + 2240) = v2 + 2296;
  v7 = nn_os_SdkConditionVariableType_Initialize_plt(v2 + 2252);
  v8 = *(_QWORD*)(v2 + 2240);
  *(_QWORD*)(v2 + 2256) = 0;
  *(_QWORD*)(v2 + 2272) = v2 + 2224;
  *(_QWORD*)(v2 + 2264) = v8;
  *(_QWORD*)(v8 + 8) = v8 + 16;
  *(_QWORD*)(*(_QWORD*)(v2 + 2240) + 24LL) = *(_QWORD*)(v2 + 2240) + 32LL;
  *(_QWORD*)(*(_QWORD*)(v2 + 2240) + 40LL) = *(_QWORD*)(v2 + 2240) + 48LL;
  *(_QWORD*)(*(_QWORD*)(v2 + 2240) + 56LL) = *(_QWORD*)(v2 + 2240) + 64LL;
  *(_QWORD*)(*(_QWORD*)(v2 + 2240) + 72LL) = *(_QWORD*)(v2 + 2240) + 80LL;
  *(_QWORD*)(*(_QWORD*)(v2 + 2240) + 88LL) = *(_QWORD*)(v2 + 2240) + 96LL;
  *(_QWORD*)(*(_QWORD*)(v2 + 2240) + 104LL) = *(_QWORD*)(v2 + 2240) + 112LL;
  *(_QWORD*)(*(_QWORD*)(v2 + 2240) + 120LL) = *(_QWORD*)(v2 + 2240) + 128LL;
  *(_QWORD*)(*(_QWORD*)(v2 + 2240) + 136LL) = *(_QWORD*)(v2 + 2240) + 144LL;
  *(_QWORD*)(*(_QWORD*)(v2 + 2240) + 152LL) = *(_QWORD*)(v2 + 2240) + 160LL;
  *(_QWORD*)(*(_QWORD*)(v2 + 2240) + 168LL) = *(_QWORD*)(v2 + 2240) + 176LL;
  *(_QWORD*)(*(_QWORD*)(v2 + 2240) + 184LL) = *(_QWORD*)(v2 + 2240) + 192LL;
  *(_QWORD*)(*(_QWORD*)(v2 + 2240) + 200LL) = *(_QWORD*)(v2 + 2240) + 208LL;
  *(_QWORD*)(*(_QWORD*)(v2 + 2240) + 216LL) = *(_QWORD*)(v2 + 2240) + 224LL;
  *(_QWORD*)(*(_QWORD*)(v2 + 2240) + 232LL) = *(_QWORD*)(v2 + 2240) + 240LL;
  *(_QWORD*)(*(_QWORD*)(v2 + 2240) + 248LL) = 0;
  *(_DWORD*)(v2 + 2288) = 0;
  *(_DWORD*)(v2 + 2296) = 0;
  *(_DWORD*)(v2 + 2312) = 0;
  *(_DWORD*)(v2 + 2328) = 0;
  *(_DWORD*)(v2 + 2344) = 0;
  *(_DWORD*)(v2 + 2360) = 0;
  *(_DWORD*)(v2 + 2376) = 0;
  *(_DWORD*)(v2 + 2392) = 0;
  *(_DWORD*)(v2 + 2408) = 0;
  *(_DWORD*)(v2 + 2424) = 0;
  *(_DWORD*)(v2 + 2440) = 0;
  *(_DWORD*)(v2 + 2456) = 0;
  *(_DWORD*)(v2 + 2472) = 0;
  *(_DWORD*)(v2 + 2488) = 0;
  *(_DWORD*)(v2 + 2504) = 0;
  *(_DWORD*)(v2 + 2520) = 0;
  *(_DWORD*)(v2 + 2536) = 0;
  v20 = nullptr;
  *(_QWORD*)(v2 + 2280) = 16;
  v11 = a1 + 1;
  v9 = a1[1];
  v10 = v11[1];
  nn_sf_hipc_InitializeHipcServiceResolution_plt(v7);
  v21 = 0;
  v12 = nn_sf_hipc_ConnectToHipcService_plt(&v21, v9);
  if (v12 == 0) {
    v13 = nn_codec_328510_alt1(v2 + 2224, &v20, v10, v21);
    nn_sf_hipc_FinalizeHipcServiceResolution_plt();
    v16 = v20;
    if (v13 != 0) {
      if (v20 == nullptr) {
        goto LABEL_11;
      }
    }
    else {
      v19 = *a2;
      v20 = nullptr;
      *a2 = v16;
      if (v19 == nullptr) {
        return 0;
      }
      (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, _QWORD*))(*v19 + 8LL))(
          (void*)v19, v19);
      v16 = v20;
      if (v20 == nullptr) {
      LABEL_11:
        if (v13 == 0) {
          return v13;
        }
        goto LABEL_12;
      }
    }
    (*(void (**)(_QWORD*))(*v16 + 8LL))(v16);
    goto LABEL_11;
  }
  v13 = v12;
  nn_sf_hipc_FinalizeHipcServiceResolution_plt();
LABEL_12:
  *(_QWORD*)(v2 + 2224) = v6 + 16;
  nn_os_SdkMutexType_Lock_plt(v2 + 2288);
  nn_sf_hipc_client_ResizeSessions(v2 + 2224, 0);
  nn_os_SdkMutexType_Unlock_plt(v2 + 2288);
  nn_os_SdkMutexType_Lock_plt(v2 + 8);
  v17 = *(_DWORD*)(v2 + 12) - 1;
  *(_DWORD*)(v2 + 12) = v17;
  if (v17 == 0) {
    nn_lmem_DestroyUnitHeap_plt(*(_QWORD*)(*(_QWORD*)v2 + 152LL));
    *(_QWORD*)v2 = 0;
  }
  nn_os_SdkMutexType_Unlock_plt(v2 + 8);
  return v13;
}

__int64 nn_codec_328510(__int64 a1, __int64* a2, __int64 a3, unsigned int a4)
{
  __int64 result;
  int v9;
  __int64 v10;
  __int64 v11;
  _QWORD* v12;
  __int64 v13;
  __int64 v14;
  int v15;

  v15 = 0;
  result = nn_sf_hipc_client_HipcClientSessionManager_ConvertToDomainImpl_plt(
      a1, &v15, a4);
  if ((_DWORD)result == 0) {
    v9 = v15;
    v10 = (*(__int64 (**)(__int64, __int64, __int64))(*(_QWORD*)a3 + 16LL))(
        a3, 56, 8);
    if (v10 != 0) {
      *(_QWORD*)(v10 + 16) = a1;
      *(_DWORD*)(v10 + 24) = v9;
      *(_DWORD*)(v10 + 28) = 0;
      *(_DWORD*)(v10 + 40) = 1;
      *(_BYTE*)(v10 + 8) = 1;
      v11 = SdkData_e879e8;
      *(_QWORD*)(v10 + 48) = a3;
      *(_QWORD*)v10 = v11 + 16;
      *(_QWORD*)(v10 + 32) = v11 + 160;
    }
    v12 = (_QWORD*)*a2;
    *a2 = v10;
    if (v12 != nullptr) {
      (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, _QWORD*))(*v12 + 8LL))(
          (void*)v12, v12);
    }
    nn_os_SdkMutexType_Lock_plt(a1 + 24);
    v13 = *(_QWORD*)(a1 + 32);
    v14 = *(_QWORD*)(a1 + 40);
    *(_QWORD*)(a1 + 40) = *(_QWORD*)(v14 + 8);
    *(_QWORD*)(v14 + 8) = v13;
    *(_QWORD*)(a1 + 32) = v14;
    *(_DWORD*)v14 = a4;
    if (v13 == 0) {
      nn_os_SdkConditionVariableType_Broadcast_plt(a1 + 28);
    }
    nn_os_SdkMutexType_Unlock_plt(a1 + 24);
    ++*(_DWORD*)(a1 + 60);
    return 0;
  }
  return result;
}

__int64 nn_codec_328620(__int64 a1, __int64* a2, __int64 a3, __int64 a4,
                        unsigned int a5)
{
  __int64 v5;
  unsigned int v11;
  __int64 v12;
  __int64 v14;
  __int64* v15;
  __int64 v16;

  v5 = *(_QWORD*)(a1 + 48);
  v16 = 0;
  v14 = v5;
  v15 = &v16;
  SdkRoutine_328c60(&v14, 0);
  if (v15 == nullptr) {
    v11 = 5642;
    v12 = v16;
    if (v16 == 0) {
      return v11;
    }
    goto LABEL_3;
  }
  v14 = *a2;
  v11 = SdkRoutine_328a40(a1 + 8, &v14, a3, a4, a5, 0, &v16);
  v12 = v16;
  if (v16 != 0) {
  LABEL_3:
    (*(void (**)(__int64))(*(_QWORD*)v12 + 8LL))(v12);
  }
  return v11;
}

#pragma GCC visibility pop
