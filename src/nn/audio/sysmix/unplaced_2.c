#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 SdkRoutine_2b1e80(__int64, __int64*, __int64, unsigned int);
__int64 nn_dd_GetCurrentProcessHandle_plt(__int64);
__int64 nn_diag_detail_AbortImpl_plt_858db0(__int64);
__int64 nn_lmem_CreateUnitHeap_plt(__int64, unsigned __int64, unsigned __int64,
                                   int, int, __int64);
__int64 nn_lmem_DestroyUnitHeap_plt(__int64);
__int64 nn_os_CloseNativeHandle_plt(unsigned int);
__int64 nn_os_SdkMutexType_Lock_plt(__int64);
__int64 nn_os_SdkMutexType_Unlock_plt(__int64);
__int64 nn_os_SdkRecursiveMutexType_Lock_plt(__int64);
__int64 nn_os_SdkRecursiveMutexType_Unlock_plt(void* this_);
__int64 nn_sf_hipc_ConnectToHipcService_plt(__int64, const char*);
__int64 nn_sf_hipc_FinalizeHipcServiceResolution_plt(_QWORD);
__int64 nn_sf_hipc_InitializeHipcServiceResolution_plt(__int64);
__int64 nn_sf_hipc_client_ResizeSessions(__int64, int);
extern _UNKNOWN SdkData_f28608;
extern _UNKNOWN SdkData_f28610;
extern _UNKNOWN SdkData_f286b0;
extern __int64 SdkData_e87068;
extern __int64 SdkData_f28490;
extern __int64 SdkData_f284b0;
extern __int64 SdkData_f284e8;
extern __int64 SdkData_f285f8;
extern __int64 SdkData_f28600;
extern __int64 SdkData_f286a0;
extern __int64 SdkData_f286a8;
extern __int64 nn_audio_sysmix_detail_g_StreamManager;
extern char SdkData_f284a8;
extern int SdkData_f28498;
extern int SdkData_f284f0;
extern int SdkData_f2860c;
void nn_diag_detail_AbortImpl_plt_856170();
__int64 nn_audio_sysmix_2b07a0(void* this_);
__int64 nn_audio_sysmix_2b0a30(void* this_);

__int64 nn_audio_sysmix_2b07a0(void* this_)
{
  __int64 v1;
  int v2;
  unsigned int v3;
  unsigned int v4;
  int v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  unsigned int v10;
  __int64 v13;
  int v14;
  __int64 v15;
  struct {
    unsigned int v16;
    char v17;
  } v16_;
  __int64* v18;

  v1 = nn_os_SdkRecursiveMutexType_Lock_plt((__int64)&SdkData_f28490);
  v2 = SdkData_f28498;
  if (SdkData_f28498 != 0) {
    goto LABEL_2;
  }
  v4 = nn_dd_GetCurrentProcessHandle_plt(v1);
  nn_os_SdkRecursiveMutexType_Lock_plt((__int64)&SdkData_f28490);
  nn_os_SdkMutexType_Lock_plt((__int64)&SdkData_f28608);
  if (SdkData_f2860c != 0) {
    v5 = SdkData_f2860c + 1;
  }
  else {
    v6 = nn_lmem_CreateUnitHeap_plt((__int64)&SdkData_f286b0, 0x3C0u, 0x40u, 4,
                                    16, (__int64)&SdkData_f28610);
    SdkData_f28600 = (__int64)&SdkData_f28610;
    SdkData_f286a0 = SdkData_e87068 + 16;
    SdkData_f286a8 = v6;
    v5 = 1;
  }
  SdkData_f2860c = v5;
  v7 = nn_os_SdkMutexType_Unlock_plt((__int64)&SdkData_f28608);
  v8 = SdkData_f28600;
  nn_sf_hipc_InitializeHipcServiceResolution_plt(v7);
  LODWORD(v18) = 0;
  v9 = nn_sf_hipc_ConnectToHipcService_plt((__int64)&v18, "audsmx:u");
  if ((_DWORD)v9 != 0) {
    v10 = v9;
    nn_sf_hipc_FinalizeHipcServiceResolution_plt(v9);
  LABEL_8:
    if (((v10 >> 9) & 0x1FFE) - 10 < 0xA && (v10 & 0x1FF) == 10) {
      v3 = 2713;
    }
    else {
      v3 = v10;
    }
    goto LABEL_14;
  }
  v13 = SdkRoutine_2b1e80((__int64)&SdkData_f284b0, &SdkData_f285f8, v8 + 144,
                          (unsigned int)v18);
  v10 = v13;
  nn_sf_hipc_FinalizeHipcServiceResolution_plt(v13);
  if (v10 != 0) {
    goto LABEL_8;
  }
  nn_os_SdkMutexType_Lock_plt((__int64)&SdkData_f284f0);
  if ((int)SdkData_f284e8 <= 0) {
    nn_diag_detail_AbortImpl_plt_856170();
  }
  v14 = nn_sf_hipc_client_ResizeSessions((__int64)&SdkData_f284b0, 1);
  nn_os_SdkMutexType_Unlock_plt((__int64)&SdkData_f284f0);
  LODWORD(v18) = v14;
  if (v14 != 0) {
    nn_diag_detail_AbortImpl_plt_858db0((__int64)&v18);
  }
  v16_.v16 = v4;
  v16_.v17 = 0;
  v18 = &nn_audio_sysmix_detail_g_StreamManager;
  v3 = (*(__int64 (**)(__int64, __int64**, unsigned int*, __int64, _QWORD))(
      *(_QWORD*)SdkData_f285f8 + 32LL))(SdkData_f285f8, &v18, &v16_.v16, 1, 0);
  if (v16_.v17 == 1) {
    nn_os_CloseNativeHandle_plt(v16_.v16);
  }
  if (v3 == 0) {
    SdkData_f284a8 = 1;
    nn_os_SdkRecursiveMutexType_Unlock_plt((void*)&SdkData_f28490);
    v2 = SdkData_f28498;
  LABEL_2:
    v3 = 0;
    SdkData_f28498 = v2 + 1;
    goto LABEL_17;
  }
  v15 = SdkData_f285f8;
  SdkData_f285f8 = 0;
  if (v15 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v15 + 8LL))(v15);
  }
  nn_os_SdkMutexType_Lock_plt((__int64)&SdkData_f284f0);
  nn_sf_hipc_client_ResizeSessions((__int64)&SdkData_f284b0, 0);
  nn_os_SdkMutexType_Unlock_plt((__int64)&SdkData_f284f0);
LABEL_14:
  nn_os_SdkMutexType_Lock_plt((__int64)&SdkData_f28608);
  if (--SdkData_f2860c == 0) {
    nn_lmem_DestroyUnitHeap_plt(*(_QWORD*)(SdkData_f28600 + 152));
    SdkData_f28600 = 0;
  }
  nn_os_SdkMutexType_Unlock_plt((__int64)&SdkData_f28608);
  nn_os_SdkRecursiveMutexType_Unlock_plt((void*)&SdkData_f28490);
LABEL_17:
  nn_os_SdkRecursiveMutexType_Unlock_plt((void*)&SdkData_f28490);
  return v3;
}

__int64 nn_audio_sysmix_2b0a30(void* this_)
{
  __int64 v1;
  __int64 v2;

  nn_os_SdkRecursiveMutexType_Lock_plt((__int64)&SdkData_f28490);
  if (SdkData_f28498 == 1) {
    v1 = nn_audio_sysmix_detail_g_StreamManager;
    nn_audio_sysmix_detail_g_StreamManager = 0;
    if (v1 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)v1 + 8LL))(v1);
    }
    if (SdkData_f284a8 == 1) {
      v2 = SdkData_f285f8;
      SdkData_f285f8 = 0;
      if (v2 != 0) {
        (*(void (**)(__int64))(*(_QWORD*)v2 + 8LL))(v2);
      }
      nn_os_SdkMutexType_Lock_plt((__int64)&SdkData_f284f0);
      nn_sf_hipc_client_ResizeSessions((__int64)&SdkData_f284b0, 0);
      nn_os_SdkMutexType_Unlock_plt((__int64)&SdkData_f284f0);
      nn_os_SdkMutexType_Lock_plt((__int64)&SdkData_f28608);
      if (--SdkData_f2860c == 0) {
        nn_lmem_DestroyUnitHeap_plt(*(_QWORD*)(SdkData_f28600 + 152));
        SdkData_f28600 = 0;
      }
      nn_os_SdkMutexType_Unlock_plt((__int64)&SdkData_f28608);
      SdkData_f284a8 = 0;
    }
  }
  --SdkData_f28498;
  return nn_os_SdkRecursiveMutexType_Unlock_plt((void*)&SdkData_f28490);
}

#pragma GCC visibility pop
