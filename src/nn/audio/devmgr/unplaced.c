#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_QWORD* SdkRoutine_2ace60(_QWORD* result, int);
_QWORD* SdkRoutine_2baa00(_QWORD* result, int);
__int64 SdkRoutine_2acc80(__int64, __int64**, int, __int64, __int64,
                          unsigned int, _QWORD*);
__int64 SdkRoutine_2ba830(__int64, __int64**, int, __int64, unsigned int,
                          _QWORD*);
__int64 nn_applet_GetAppletResourceUserId_plt(void* this_);
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
extern _UNKNOWN SdkData_f28ca8;
extern _UNKNOWN SdkData_f28cb0;
extern _UNKNOWN SdkData_f28d50;
extern _UNKNOWN _ZN2nn5audio6devmgr6detail22g_InitializationStateE;
extern _UNKNOWN _ZN2nn5audio6devmgr6detail28g_SystemInitializationStateE;
extern __int64 SdkData_e87068;
extern __int64 SdkData_e876f0;
extern __int64 SdkData_e87738;
extern __int64 SdkData_f27f90;
extern __int64 SdkData_f27f98;
extern __int64 SdkData_f28d40;
extern __int64 SdkData_f28d48;
extern __int64 nn_audio_devmgr_detail_g_DefaultContext;
extern __int64 nn_audio_devmgr_detail_g_ServiceObjectAllocator;
extern __int64 nn_audio_devmgr_detail_g_SystemManager;
extern __int64 nn_audio_devmgr_detail_g_SystemServiceObjectAllocator;
extern int SdkData_f27ee4;
extern int SdkData_f27efc;
extern int SdkData_f28c94;
extern int SdkData_f28cac;
__int64 nn_audio_devmgr_detail_InitializeImpl(void* this_);
__int64 nn_audio_devmgr_detail_InitializeSystemImpl(void* this_);

__int64 nn_audio_devmgr_detail_InitializeImpl(void* this_)
{
  int v1;
  unsigned int v2;
  int v3;
  __int64 v4;
  void* v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  int v10;
  __int64* v11;
  __int64 v12;
  int v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  struct {
    __int64* v19;
    __int64* v20;
  } v19_;
  __int64 v21;

  nn_os_SdkMutexType_Lock_plt(
      &_ZN2nn5audio6devmgr6detail22g_InitializationStateE);
  v1 = SdkData_f27ee4;
  if (SdkData_f27ee4 != 0) {
    goto LABEL_2;
  }
  nn_os_SdkMutexType_Lock_plt(&SdkData_f27ef8);
  if (SdkData_f27efc != 0) {
    v3 = SdkData_f27efc + 1;
  }
  else {
    v4 = nn_lmem_CreateUnitHeap_plt(&SdkData_f27fa0, 1216, 64, 4, 16,
                                    &SdkData_f27f00);
    nn_audio_devmgr_detail_g_ServiceObjectAllocator = (__int64)&SdkData_f27f00;
    SdkData_f27f90 = SdkData_e87068 + 16;
    SdkData_f27f98 = v4;
    v3 = 1;
  }
  SdkData_f27efc = v3;
  v5 = (void*)nn_os_SdkMutexType_Unlock_plt(&SdkData_f27ef8);
  v6 = nn_applet_GetAppletResourceUserId_plt(v5);
  v7 = nn_audio_devmgr_detail_g_ServiceObjectAllocator;
  v8 = v6;
  LODWORD(v19_.v19) = 0;
  nn_sf_hipc_InitializeHipcServiceResolution_plt(v6);
  v9 = nn_sf_hipc_ConnectToHipcService_plt(&v19_.v19, "auddmg:u");
  v10 = v9;
  nn_sf_hipc_FinalizeHipcServiceResolution_plt(v9);
  if (v10 != 0) {
    v2 = 2713;
    goto LABEL_15;
  }
  v12 = *(_QWORD*)(v7 + 144);
  v11 = (__int64*)(v7 + 144);
  v13 = (int)v19_.v19;
  v14 = (*(__int64 (**)(__int64*, __int64, __int64))(v12 + 16))(v11, 40, 8);
  v15 = v14;
  if (v14 != 0) {
    *(_DWORD*)(v14 + 24) = 1;
    *(_DWORD*)(v14 + 8) = 1;
    *(_DWORD*)(v14 + 12) = v13;
    v16 = SdkData_e876f0;
    *(_QWORD*)(v14 + 32) = v11;
    *(_QWORD*)v14 = v16 + 16;
    *(_QWORD*)(v14 + 16) = v16 + 80;
  }
  else {
    v11 = nullptr;
  }
  v21 = 0;
  v19_.v19 = v11;
  v19_.v20 = &v21;
  SdkRoutine_2ace60(&v19_.v19, 0);
  if (v19_.v20 != nullptr) {
    v19_.v19 = &nn_audio_devmgr_detail_g_DefaultContext;
    v2 = SdkRoutine_2acc80(v15 + 8, &v19_.v19, 2, v8, 0, 0, &v21);
    v17 = v21;
    if (v21 == 0) {
      goto LABEL_14;
    }
    goto LABEL_13;
  }
  v2 = 5642;
  v17 = v21;
  if (v21 != 0) {
  LABEL_13:
    (*(void (**)(__int64))(*(_QWORD*)v17 + 8LL))(v17);
  }
LABEL_14:
  (*(void (**)(__int64))(*(_QWORD*)v15 + 8LL))(v15);
  if (v2 == 0) {
    v1 = SdkData_f27ee4;
  LABEL_2:
    v2 = 0;
    SdkData_f27ee4 = v1 + 1;
    goto LABEL_18;
  }
LABEL_15:
  nn_os_SdkMutexType_Lock_plt(&SdkData_f27ef8);
  if (--SdkData_f27efc == 0) {
    nn_lmem_DestroyUnitHeap_plt(
        *(_QWORD*)(nn_audio_devmgr_detail_g_ServiceObjectAllocator + 152));
    nn_audio_devmgr_detail_g_ServiceObjectAllocator = 0;
  }
  nn_os_SdkMutexType_Unlock_plt(&SdkData_f27ef8);
LABEL_18:
  nn_os_SdkMutexType_Unlock_plt(
      &_ZN2nn5audio6devmgr6detail22g_InitializationStateE);
  return v2;
}

__int64 nn_audio_devmgr_detail_InitializeSystemImpl(void* this_)
{
  int v1;
  unsigned int v2;
  int v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  int v8;
  __int64* v9;
  __int64 v10;
  int v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  struct {
    __int64* v17;
    __int64* v18;
  } v17_;
  __int64 v19;

  nn_os_SdkMutexType_Lock_plt(
      &_ZN2nn5audio6devmgr6detail28g_SystemInitializationStateE);
  v1 = SdkData_f28c94;
  if (SdkData_f28c94 != 0) {
    goto LABEL_2;
  }
  nn_os_SdkMutexType_Lock_plt(&SdkData_f28ca8);
  if (SdkData_f28cac != 0) {
    v3 = SdkData_f28cac + 1;
  }
  else {
    v4 = nn_lmem_CreateUnitHeap_plt(&SdkData_f28d50, 128, 64, 4, 16,
                                    &SdkData_f28cb0);
    nn_audio_devmgr_detail_g_SystemServiceObjectAllocator =
        (__int64)&SdkData_f28cb0;
    SdkData_f28d40 = SdkData_e87068 + 16;
    SdkData_f28d48 = v4;
    v3 = 1;
  }
  SdkData_f28cac = v3;
  v5 = nn_os_SdkMutexType_Unlock_plt(&SdkData_f28ca8);
  v6 = nn_audio_devmgr_detail_g_SystemServiceObjectAllocator;
  LODWORD(v17_.v17) = 0;
  nn_sf_hipc_InitializeHipcServiceResolution_plt(v5);
  v7 = nn_sf_hipc_ConnectToHipcService_plt(&v17_.v17, "auddmg:s");
  v8 = v7;
  nn_sf_hipc_FinalizeHipcServiceResolution_plt(v7);
  if (v8 != 0) {
    v2 = 2713;
    goto LABEL_15;
  }
  v10 = *(_QWORD*)(v6 + 144);
  v9 = (__int64*)(v6 + 144);
  v11 = (int)v17_.v17;
  v12 = (*(__int64 (**)(__int64*, __int64, __int64))(v10 + 16))(v9, 40, 8);
  v13 = v12;
  if (v12 != 0) {
    *(_DWORD*)(v12 + 24) = 1;
    *(_DWORD*)(v12 + 8) = 1;
    *(_DWORD*)(v12 + 12) = v11;
    v14 = SdkData_e87738;
    *(_QWORD*)(v12 + 32) = v9;
    *(_QWORD*)v12 = v14 + 16;
    *(_QWORD*)(v12 + 16) = v14 + 80;
  }
  else {
    v9 = nullptr;
  }
  v19 = 0;
  v17_.v17 = v9;
  v17_.v18 = &v19;
  SdkRoutine_2baa00(&v17_.v17, 0);
  if (v17_.v18 != nullptr) {
    v17_.v17 = &nn_audio_devmgr_detail_g_SystemManager;
    v2 = SdkRoutine_2ba830(v13 + 8, &v17_.v17, 2, 0, 0, &v19);
    v15 = v19;
    if (v19 == 0) {
      goto LABEL_14;
    }
    goto LABEL_13;
  }
  v2 = 5642;
  v15 = v19;
  if (v19 != 0) {
  LABEL_13:
    (*(void (**)(__int64))(*(_QWORD*)v15 + 8LL))(v15);
  }
LABEL_14:
  (*(void (**)(__int64))(*(_QWORD*)v13 + 8LL))(v13);
  if (v2 == 0) {
    v1 = SdkData_f28c94;
  LABEL_2:
    v2 = 0;
    SdkData_f28c94 = v1 + 1;
    goto LABEL_18;
  }
LABEL_15:
  nn_os_SdkMutexType_Lock_plt(&SdkData_f28ca8);
  if (--SdkData_f28cac == 0) {
    nn_lmem_DestroyUnitHeap_plt(*(
        _QWORD*)(nn_audio_devmgr_detail_g_SystemServiceObjectAllocator + 152));
    nn_audio_devmgr_detail_g_SystemServiceObjectAllocator = 0;
  }
  nn_os_SdkMutexType_Unlock_plt(&SdkData_f28ca8);
LABEL_18:
  nn_os_SdkMutexType_Unlock_plt(
      &_ZN2nn5audio6devmgr6detail28g_SystemInitializationStateE);
  return v2;
}

#pragma GCC visibility pop
