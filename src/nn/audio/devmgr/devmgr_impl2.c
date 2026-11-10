#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 SdkRoutine_2acc80(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                          _QWORD);
__int64 SdkRoutine_2ace60(_QWORD, _QWORD);
__int64 nn_lmem_CreateUnitHeap_plt(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                                   _QWORD);
__int64 nn_lmem_DestroyUnitHeap_plt(_QWORD);
__int64 nn_os_SdkMutexType_Lock_plt(_QWORD);
__int64 nn_os_SdkMutexType_Unlock_plt(_QWORD);
__int64 nn_sf_hipc_ConnectToHipcService_plt(_QWORD, _QWORD);
__int64 nn_sf_hipc_FinalizeHipcServiceResolution_plt(_QWORD);
__int64 nn_sf_hipc_InitializeHipcServiceResolution_plt(_QWORD);
extern _UNKNOWN SdkData_f27ef8;
extern _UNKNOWN SdkData_f27f00;
extern _UNKNOWN SdkData_f27fa0;
extern _UNKNOWN _ZN2nn5audio6devmgr6detail22g_InitializationStateE;
extern __int64 SdkData_e87068;
extern __int64 SdkData_e876f0;
extern __int64 SdkData_f27f90;
extern __int64 SdkData_f27f98;
extern __int64 nn_audio_devmgr_detail_g_ServiceObjectAllocator;
extern int SdkData_f27efc;
__int64 nn_audio_devmgr_detail_CreateProxyContextImpl(_QWORD* a1, __int64 a2);

__int64 nn_audio_devmgr_detail_CreateProxyContextImpl(_QWORD* a1, __int64 a2)
{
  int v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  int v9;
  unsigned int v10;
  __int64* v12;
  int v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64* v19;
  __int64* v20;
  __int64 v21;

  nn_os_SdkMutexType_Lock_plt(
      &_ZN2nn5audio6devmgr6detail22g_InitializationStateE);
  nn_os_SdkMutexType_Lock_plt(&SdkData_f27ef8);
  if (SdkData_f27efc != 0) {
    v4 = SdkData_f27efc + 1;
  }
  else {
    v5 = nn_lmem_CreateUnitHeap_plt(&SdkData_f27fa0, 1216, 64, 4, 16,
                                    &SdkData_f27f00);
    nn_audio_devmgr_detail_g_ServiceObjectAllocator = (__int64)&SdkData_f27f00;
    SdkData_f27f90 = SdkData_e87068 + 16;
    SdkData_f27f98 = v5;
    v4 = 1;
  }
  SdkData_f27efc = v4;
  v6 = nn_os_SdkMutexType_Unlock_plt(&SdkData_f27ef8);
  v7 = nn_audio_devmgr_detail_g_ServiceObjectAllocator;
  v18 = 0;
  LODWORD(v19) = 0;
  nn_sf_hipc_InitializeHipcServiceResolution_plt(v6);
  v8 = nn_sf_hipc_ConnectToHipcService_plt(&v19, "auddmg:u");
  v9 = v8;
  nn_sf_hipc_FinalizeHipcServiceResolution_plt(v8);
  if (v9 != 0) {
    v10 = 2713;
    goto LABEL_6;
  }
  v12 = (__int64*)(v7 + 144);
  v13 = (int)v19;
  v14 = (*(__int64 (**)(__int64, __int64, __int64))(*(_QWORD*)(v7 + 144) +
                                                    16LL))(v7 + 144, 40, 8);
  v15 = v14;
  if (v14 != 0) {
    *(_DWORD*)(v14 + 24) = 1;
    *(_DWORD*)(v14 + 8) = 1;
    *(_DWORD*)(v14 + 12) = v13;
    v16 = SdkData_e876f0;
    *(_QWORD*)(v14 + 32) = v12;
    *(_QWORD*)v14 = v16 + 16;
    *(_QWORD*)(v14 + 16) = v16 + 80;
  }
  else {
    v12 = nullptr;
  }
  v21 = 0;
  v19 = v12;
  v20 = &v21;
  SdkRoutine_2ace60(&v19, 0);
  if (v20 == nullptr) {
    v10 = 5642;
    v17 = v21;
    if (v21 == 0) {
      goto LABEL_16;
    }
    goto LABEL_15;
  }
  v19 = &v18;
  v10 = SdkRoutine_2acc80(v15 + 8, &v19, 2, a2, 0, 0, &v21);
  v17 = v21;
  if (v21 != 0) {
  LABEL_15:
    (*(void (**)(__int64))(*(_QWORD*)v17 + 8LL))(v17);
  }
LABEL_16:
  (*(void (**)(__int64))(*(_QWORD*)v15 + 8LL))(v15);
  if (v10 == 0) {
    *a1 = v18;
    a1[1] = a2;
    goto LABEL_9;
  }
  if (v18 != 0) {
    (*(void (**)(void*))(*(_QWORD*)v18 + 8))((void*)v18);
  }
LABEL_6:
  nn_os_SdkMutexType_Lock_plt(&SdkData_f27ef8);
  if (--SdkData_f27efc == 0) {
    nn_lmem_DestroyUnitHeap_plt(
        *(_QWORD*)(nn_audio_devmgr_detail_g_ServiceObjectAllocator + 152));
    nn_audio_devmgr_detail_g_ServiceObjectAllocator = 0;
  }
  nn_os_SdkMutexType_Unlock_plt(&SdkData_f27ef8);
LABEL_9:
  nn_os_SdkMutexType_Unlock_plt(
      &_ZN2nn5audio6devmgr6detail22g_InitializationStateE);
  return v10;
}

#pragma GCC visibility pop
