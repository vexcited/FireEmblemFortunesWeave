#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 SdkRoutine_5ac450();
__int64 memset_plt(void* this_, void*, int, unsigned __int64);
__int64 nn_diag_detail_AbortImpl_plt_856170(_QWORD);
__int64 nn_diag_detail_AbortImpl_plt_858db0(_QWORD);
__int64 nn_lmem_CreateUnitHeap_plt(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                                   _QWORD);
__int64 nn_lmem_DestroyUnitHeap_plt(_QWORD);
__int64 nn_os_ConvertToTick_plt(_QWORD);
__int64 nn_os_GetSystemTick_plt(_QWORD);
__int64 nn_os_SdkConditionVariableType_Broadcast_plt(_QWORD);
__int64 nn_os_SdkConditionVariableType_Initialize_plt(_QWORD);
__int64 nn_os_SdkMutexType_Lock_plt(_QWORD);
__int64 nn_os_SdkMutexType_Unlock_plt(_QWORD);
__int64 nn_prepo_detail_5aa7d0_alt1(_QWORD, _QWORD, _QWORD,
                                    _QWORD) __asm__("nn_prepo_detail_5aa7d0");
__int64 nn_sf_hipc_ConnectToHipcService_plt(_QWORD, _QWORD);
__int64 nn_sf_hipc_FinalizeHipcServiceResolution_plt(_QWORD);
__int64 nn_sf_hipc_InitializeHipcServiceResolution_plt(_QWORD);
__int64 nn_sf_hipc_client_HipcClientSessionManager_ConvertToDomainImpl_plt(
    _QWORD, _QWORD, _QWORD);
__int64 nn_sf_hipc_client_ResizeSessions(__int64, int);
extern _UNKNOWN* SdkData_f6a080;
extern _UNKNOWN SdkData_f6a078;
extern _UNKNOWN SdkData_f6a090;
extern _UNKNOWN SdkData_f6a280;
extern _UNKNOWN SdkData_f6a2c0;
extern _UNKNOWN nn_prepo_detail_ipc_g_ServiceState;
extern __int64 SdkData_e86d80;
extern __int64 SdkData_e87068;
extern __int64 SdkData_e88e60;
extern __int64 SdkData_e88e68;
extern __int64 SdkData_e88e70;
extern __int64 SdkData_e88e78;
extern __int64 SdkData_e88e80;
extern __int64 SdkData_f6a068;
extern __int64 SdkData_f6a088;
extern __int64 nn_prepo_detail_ipc_g_SessionHolder;
extern int SdkData_f6a07c;
extern int SdkData_f6a2b8;
__int64 nn_prepo_detail_5a9f60(__int64* a1, __int64 a2, __int64 a3,
                               unsigned __int64 a4);
__int64 nn_prepo_detail_ipc_Initialize(void* this_);
__int64 nn_prepo_detail_5aa4e0(__int64* a1, _QWORD** a2);
__int64 nn_prepo_detail_5aa7d0(__int64 a1, __int64* a2, __int64 a3,
                               unsigned int a4);

__int64 nn_prepo_detail_5a9f60(__int64* a1, __int64 a2, __int64 a3,
                               unsigned __int64 a4)
{
  __int64 v5;
  __int64 v6;
  __int64* v7;
  __int64 v8;
  __int64 result;
  __int64 v10;
  __int64 v11;

  *a1 = 5400000000000LL;
  v5 = memset_plt((void*)(a1 + 1), nullptr, 7208, a4);
  v6 = nn_os_GetSystemTick_plt(v5);
  v8 = *a1;
  v7 = a1 + 16;
  result = nn_os_ConvertToTick_plt(v8);
  v10 = v6 - result;
  v11 = 7200;
  do {
    *(v7 - 14) = v10;
    *(v7 - 13) = v10;
    *(v7 - 12) = v10;
    *(v7 - 11) = v10;
    v11 -= 240;
    *(v7 - 10) = v10;
    *(v7 - 9) = v10;
    *(v7 - 8) = v10;
    *(v7 - 7) = v10;
    *(v7 - 6) = v10;
    *(v7 - 5) = v10;
    *(v7 - 4) = v10;
    *(v7 - 3) = v10;
    *(v7 - 2) = v10;
    *(v7 - 1) = v10;
    *v7 = v10;
    v7[1] = v10;
    v7[2] = v10;
    v7[3] = v10;
    v7[4] = v10;
    v7[5] = v10;
    v7[6] = v10;
    v7[7] = v10;
    v7[8] = v10;
    v7[9] = v10;
    v7[10] = v10;
    v7[11] = v10;
    v7[12] = v10;
    v7[13] = v10;
    v7[14] = v10;
    v7[15] = v10;
    v7 += 30;
  } while (v11 != 0);
  return result;
}

__int64 nn_prepo_detail_ipc_Initialize(void* this_)
{
  int v1;
  __int64 v2;
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;
  __int64 v8;
  int v9;
  __int64 v11;
  struct {
    __int64 v12[2];
    __int64 v13;
  } v12_;
  _QWORD* v14;

  nn_os_SdkMutexType_Lock_plt(&nn_prepo_detail_ipc_g_ServiceState);
  v12_.v13 = 0;
  v12_.v12[0] = (__int64)&SdkData_f6a090;
  v12_.v12[1] = SdkData_e88e60;
  nn_os_SdkMutexType_Lock_plt(&SdkData_f6a078);
  v1 = SdkData_f6a07c;
  if (SdkData_f6a07c != 0) {
  LABEL_2:
    if (SdkData_f6a080 == nullptr) {
      SdkData_f6a080 = SdkRoutine_5ac450;
      SdkData_f6a088 = (__int64)&SdkData_f6a090;
    }
    SdkData_f6a07c = v1 + 1;
    nn_os_SdkMutexType_Unlock_plt(&SdkData_f6a078);
    v2 = nn_prepo_detail_ipc_g_SessionHolder;
    if (nn_prepo_detail_ipc_g_SessionHolder != 0) {
      goto LABEL_5;
    }
    goto LABEL_23;
  }
  v14 = nullptr;
  v3 = nn_prepo_detail_5aa4e0(v12_.v12, &v14);
  if (v3 != 0) {
    v4 = v3;
    if (v14 != nullptr) {
      (*(void (**)(_QWORD*))(*v14 + 8LL))(v14);
    }
    nn_os_SdkMutexType_Unlock_plt(&SdkData_f6a078);
    if ((v4 & 0x3FFFFF) == 0x1015) {
      v12_.v13 = 0;
      v12_.v12[0] = (__int64)&SdkData_f6a090;
      v12_.v12[1] = SdkData_e88e68;
      nn_os_SdkMutexType_Lock_plt(&SdkData_f6a078);
      v1 = SdkData_f6a07c;
      if (SdkData_f6a07c != 0) {
        goto LABEL_2;
      }
      v14 = nullptr;
      v5 = nn_prepo_detail_5aa4e0(v12_.v12, &v14);
      if (v5 == 0) {
        goto LABEL_22;
      }
      v4 = v5;
      if (v14 != nullptr) {
        (*(void (**)(_QWORD*))(*v14 + 8LL))(v14);
      }
      nn_os_SdkMutexType_Unlock_plt(&SdkData_f6a078);
      if ((v4 & 0x3FFFFF) == 0x1015) {
        v12_.v13 = 0;
        v12_.v12[0] = (__int64)&SdkData_f6a090;
        v12_.v12[1] = SdkData_e88e70;
        nn_os_SdkMutexType_Lock_plt(&SdkData_f6a078);
        v1 = SdkData_f6a07c;
        if (SdkData_f6a07c != 0) {
          goto LABEL_2;
        }
        v14 = nullptr;
        v6 = nn_prepo_detail_5aa4e0(v12_.v12, &v14);
        if (v6 == 0) {
          goto LABEL_22;
        }
        v4 = v6;
        if (v14 != nullptr) {
          (*(void (**)(_QWORD*))(*v14 + 8LL))(v14);
        }
        nn_os_SdkMutexType_Unlock_plt(&SdkData_f6a078);
        if ((v4 & 0x3FFFFF) == 0x1015) {
          v12_.v13 = 0;
          v12_.v12[0] = (__int64)&SdkData_f6a090;
          v12_.v12[1] = SdkData_e88e78;
          nn_os_SdkMutexType_Lock_plt(&SdkData_f6a078);
          v1 = SdkData_f6a07c;
          if (SdkData_f6a07c != 0) {
            goto LABEL_2;
          }
          v14 = nullptr;
          v7 = nn_prepo_detail_5aa4e0(v12_.v12, &v14);
          if (v7 == 0) {
            goto LABEL_22;
          }
          v4 = v7;
          if (v14 != nullptr) {
            (*(void (**)(_QWORD*))(*v14 + 8LL))(v14);
          }
          v11 = nn_os_SdkMutexType_Unlock_plt(&SdkData_f6a078);
          if ((v4 & 0x3FFFFF) == 0x1015) {
            nn_diag_detail_AbortImpl_plt_856170(v11);
          }
        }
      }
    }
    LODWORD(v12_.v12[0]) = v4;
    nn_diag_detail_AbortImpl_plt_858db0(v12_.v12);
  }
LABEL_22:
  SdkData_f6a07c = 1;
  nn_prepo_detail_ipc_g_SessionHolder = (__int64)v14;
  SdkData_f6a080 = SdkRoutine_5ac450;
  SdkData_f6a088 = (__int64)&SdkData_f6a090;
  nn_os_SdkMutexType_Unlock_plt(&SdkData_f6a078);
  v2 = nn_prepo_detail_ipc_g_SessionHolder;
  if (nn_prepo_detail_ipc_g_SessionHolder != 0) {
  LABEL_5:
    (**(void (***)(__int64))v2)(v2);
    SdkData_f6a068 = v2;
    (*(void (**)(__int64))(*(_QWORD*)v2 + 8LL))(v2);
    goto LABEL_24;
  }
LABEL_23:
  SdkData_f6a068 = 0;
LABEL_24:
  v8 = nn_os_SdkMutexType_Lock_plt(&SdkData_f6a2c0);
  if (SdkData_f6a2b8 <= 0) {
    nn_diag_detail_AbortImpl_plt_856170(v8);
  }
  v9 = nn_sf_hipc_client_ResizeSessions((__int64)&SdkData_f6a280, 1);
  nn_os_SdkMutexType_Unlock_plt(&SdkData_f6a2c0);
  LODWORD(v12_.v12[0]) = v9;
  if (v9 != 0) {
    nn_diag_detail_AbortImpl_plt_858db0(v12_.v12);
  }
  return nn_os_SdkMutexType_Unlock_plt(&nn_prepo_detail_ipc_g_ServiceState);
}

__int64 nn_prepo_detail_5aa4e0(__int64* a1, _QWORD** a2)
{
  __int64 v2;
  int v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  _QWORD* v11;
  __int64 v12;
  unsigned int v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  _QWORD* v17;
  int v18;
  _QWORD* v20;
  _QWORD* v21;
  unsigned int v22;

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
  v14 = nn_lmem_CreateUnitHeap_plt(v2 + 176, 320, 64, 4, 16, v2 + 16);
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
  *(_DWORD*)(v2 + 520) = 0;
  *(_QWORD*)(v2 + 496) = v6 + 16;
  *(_QWORD*)(v2 + 512) = v2 + 568;
  v7 = nn_os_SdkConditionVariableType_Initialize_plt(v2 + 524);
  v8 = *(_QWORD*)(v2 + 512);
  *(_QWORD*)(v2 + 528) = 0;
  *(_QWORD*)(v2 + 544) = v2 + 496;
  *(_QWORD*)(v2 + 536) = v8;
  *(_QWORD*)(v8 + 8) = v8 + 16;
  *(_QWORD*)(*(_QWORD*)(v2 + 512) + 24LL) = *(_QWORD*)(v2 + 512) + 32LL;
  *(_QWORD*)(*(_QWORD*)(v2 + 512) + 40LL) = *(_QWORD*)(v2 + 512) + 48LL;
  *(_QWORD*)(*(_QWORD*)(v2 + 512) + 56LL) = *(_QWORD*)(v2 + 512) + 64LL;
  *(_QWORD*)(*(_QWORD*)(v2 + 512) + 72LL) = *(_QWORD*)(v2 + 512) + 80LL;
  *(_QWORD*)(*(_QWORD*)(v2 + 512) + 88LL) = *(_QWORD*)(v2 + 512) + 96LL;
  *(_QWORD*)(*(_QWORD*)(v2 + 512) + 104LL) = *(_QWORD*)(v2 + 512) + 112LL;
  *(_QWORD*)(*(_QWORD*)(v2 + 512) + 120LL) = *(_QWORD*)(v2 + 512) + 128LL;
  *(_QWORD*)(*(_QWORD*)(v2 + 512) + 136LL) = *(_QWORD*)(v2 + 512) + 144LL;
  *(_QWORD*)(*(_QWORD*)(v2 + 512) + 152LL) = *(_QWORD*)(v2 + 512) + 160LL;
  *(_QWORD*)(*(_QWORD*)(v2 + 512) + 168LL) = *(_QWORD*)(v2 + 512) + 176LL;
  *(_QWORD*)(*(_QWORD*)(v2 + 512) + 184LL) = *(_QWORD*)(v2 + 512) + 192LL;
  *(_QWORD*)(*(_QWORD*)(v2 + 512) + 200LL) = *(_QWORD*)(v2 + 512) + 208LL;
  *(_QWORD*)(*(_QWORD*)(v2 + 512) + 216LL) = *(_QWORD*)(v2 + 512) + 224LL;
  *(_QWORD*)(*(_QWORD*)(v2 + 512) + 232LL) = *(_QWORD*)(v2 + 512) + 240LL;
  *(_QWORD*)(*(_QWORD*)(v2 + 512) + 248LL) = 0;
  *(_DWORD*)(v2 + 560) = 0;
  *(_DWORD*)(v2 + 568) = 0;
  *(_DWORD*)(v2 + 584) = 0;
  *(_DWORD*)(v2 + 600) = 0;
  *(_DWORD*)(v2 + 616) = 0;
  *(_DWORD*)(v2 + 632) = 0;
  *(_DWORD*)(v2 + 648) = 0;
  *(_DWORD*)(v2 + 664) = 0;
  *(_DWORD*)(v2 + 680) = 0;
  *(_DWORD*)(v2 + 696) = 0;
  *(_DWORD*)(v2 + 712) = 0;
  *(_DWORD*)(v2 + 728) = 0;
  *(_DWORD*)(v2 + 744) = 0;
  *(_DWORD*)(v2 + 760) = 0;
  *(_DWORD*)(v2 + 776) = 0;
  *(_DWORD*)(v2 + 792) = 0;
  *(_DWORD*)(v2 + 808) = 0;
  v21 = nullptr;
  *(_QWORD*)(v2 + 552) = 16;
  v11 = a1 + 1;
  v9 = a1[1];
  v10 = v11[1];
  nn_sf_hipc_InitializeHipcServiceResolution_plt(v7);
  v22 = 0;
  v12 = nn_sf_hipc_ConnectToHipcService_plt(&v22, v9);
  if ((_DWORD)v12 == 0) {
    v16 = nn_prepo_detail_5aa7d0_alt1(v2 + 496, &v21, v10, v22);
    v13 = v16;
    nn_sf_hipc_FinalizeHipcServiceResolution_plt(v16);
    v17 = v21;
    if (v13 != 0) {
      if (v21 == nullptr) {
        goto LABEL_11;
      }
    }
    else {
      v20 = *a2;
      v21 = nullptr;
      *a2 = v17;
      if (v20 == nullptr) {
        return 0;
      }
      (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, _QWORD*))(*v20 + 8LL))(
          (void*)v20, v20);
      v17 = v21;
      if (v21 == nullptr) {
      LABEL_11:
        if (v13 == 0) {
          return v13;
        }
        goto LABEL_12;
      }
    }
    (*(void (**)(_QWORD*))(*v17 + 8LL))(v17);
    goto LABEL_11;
  }
  v13 = v12;
  nn_sf_hipc_FinalizeHipcServiceResolution_plt(v12);
LABEL_12:
  *(_QWORD*)(v2 + 496) = v6 + 16;
  nn_os_SdkMutexType_Lock_plt(v2 + 560);
  nn_sf_hipc_client_ResizeSessions(v2 + 496, 0);
  nn_os_SdkMutexType_Unlock_plt(v2 + 560);
  nn_os_SdkMutexType_Lock_plt(v2 + 8);
  v18 = *(_DWORD*)(v2 + 12) - 1;
  *(_DWORD*)(v2 + 12) = v18;
  if (v18 == 0) {
    nn_lmem_DestroyUnitHeap_plt(*(_QWORD*)(*(_QWORD*)v2 + 152LL));
    *(_QWORD*)v2 = 0;
  }
  nn_os_SdkMutexType_Unlock_plt(v2 + 8);
  return v13;
}

__int64 nn_prepo_detail_5aa7d0(__int64 a1, __int64* a2, __int64 a3,
                               unsigned int a4)
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
      v11 = SdkData_e88e80;
      *(_QWORD*)(v10 + 48) = a3;
      *(_QWORD*)v10 = v11 + 16;
      *(_QWORD*)(v10 + 32) = v11 + 304;
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

#pragma GCC visibility pop
