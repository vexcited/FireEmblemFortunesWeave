#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 __cxa_guard_acquire_plt(_QWORD);
__int64 __cxa_guard_release_plt(_QWORD);
__int64 fw_rtld_RegisterCrtDestructor();
__int64 nn_diag_detail_AbortImpl_plt_856170(_QWORD);
__int64 nn_lmem_CreateUnitHeap_plt(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                                   _QWORD);
__int64 nn_os_SdkMutexType_IsLockedByCurrentThread_plt(_QWORD);
__int64 nn_os_SdkMutexType_Lock_plt(_QWORD);
__int64 nn_os_SdkMutexType_Unlock_plt(_QWORD);
__int64 nn_settings_detail_CreateSystemSettingsServerProxyForIpc_plt(_QWORD);
__int64 nn_sf_hipc_ConnectToHipcService_plt(_QWORD, _QWORD);
__int64 nn_sf_hipc_FinalizeHipcServiceResolution_plt(_QWORD);
__int64 nn_sf_hipc_InitializeHipcServiceResolution_plt(_QWORD);
extern _UNKNOWN SdkData_c60d78;
extern _UNKNOWN SdkData_f6a3e0;
extern _UNKNOWN SdkData_f6a524;
extern _UNKNOWN SdkData_f6a538;
extern _UNKNOWN SdkData_f6a540;
extern _UNKNOWN SdkData_f6a5e0;
extern _UNKNOWN SdkData_f6a9e4;
extern _UNKNOWN SdkData_f6a9f8;
extern _UNKNOWN SdkData_f6aa00;
extern _UNKNOWN SdkData_f6aaa0;
extern _UNKNOWN SdkData_f6b394;
extern _UNKNOWN SdkData_f6b3a8;
extern _UNKNOWN SdkData_f6b3b0;
extern _UNKNOWN SdkData_f6b450;
extern _UNKNOWN SdkData_f6b858;
extern _UNKNOWN SdkData_f6b868;
extern _UNKNOWN SdkData_f6b878;
extern _UNKNOWN SdkData_f6b880;
extern _UNKNOWN SdkData_f6b920;
extern __int64 SdkData_e87068;
extern __int64 SdkData_e88e90;
extern __int64 SdkData_e88e98;
extern __int64 SdkData_e88ea8;
extern __int64 SdkData_e88eb0;
extern __int64 SdkData_f6a3e8;
extern __int64 SdkData_f6a3f0;
extern __int64 SdkData_f6a3f8;
extern __int64 SdkData_f6a400;
extern __int64 SdkData_f6a408;
extern __int64 SdkData_f6a410;
extern __int64 SdkData_f6a418;
extern __int64 SdkData_f6a420;
extern __int64 SdkData_f6a530;
extern __int64 SdkData_f6a5d0;
extern __int64 SdkData_f6a5d8;
extern __int64 SdkData_f6a9f0;
extern __int64 SdkData_f6aa90;
extern __int64 SdkData_f6aa98;
extern __int64 SdkData_f6b3a0;
extern __int64 SdkData_f6b440;
extern __int64 SdkData_f6b448;
extern __int64 SdkData_f6b860;
extern __int64 SdkData_f6b870;
extern __int64 SdkData_f6b910;
extern __int64 SdkData_f6b918;
extern char SdkData_f6a3e4;
extern char SdkData_f6a520;
extern char SdkData_f6a9e0;
extern char SdkData_f6b390;
extern char SdkData_f6b850;
extern char SdkData_f6b854;
extern int SdkData_f6a53c;
extern int SdkData_f6a9fc;
extern int SdkData_f6b3ac;
extern int SdkData_f6b87c;
__int64 nn_settings_detail_GetDefaultAccountUserSettings(__int64* a1);
__int64 nn_settings_detail_5b6100(_DWORD* a1);
__int64 nn_settings_detail_CreateFactorySettingsServerProxyForIpc(__int64 a1);
__int64
nn_settings_detail_CreateFirmwareDebugSettingsServerProxyForIpc(__int64 a1);
__int64 nn_settings_detail_CreateSettingsServerProxyForIpc(__int64 a1);
__int64 nn_settings_detail_CreateSystemSettingsServerProxyForIpc(__int64* a1);

__int64 nn_settings_detail_GetDefaultAccountUserSettings(__int64* a1)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64* v8;
  __int64 v9;
  unsigned int v10;

  v10 = 0;
  if ((atomic_load_explicit((atomic_uchar* volatile)&SdkData_f6a3e4,
                            memory_order_acquire) &
       1) == 0) {
    v8 = a1;
    v9 = nn_os_SdkMutexType_IsLockedByCurrentThread_plt(&SdkData_f6a3e0);
    if ((v9 & 1) != 0) {
      nn_diag_detail_AbortImpl_plt_856170(v9);
    }
    nn_os_SdkMutexType_Lock_plt(&SdkData_f6a3e0);
    if ((SdkData_f6a3e4 & 1) == 0) {
      nn_settings_detail_5b6100(&v10);
      atomic_store(1u, (unsigned __int8*)&SdkData_f6a3e4);
    }
    nn_os_SdkMutexType_Unlock_plt(&SdkData_f6a3e0);
    a1 = v8;
  }
  v1 = SdkData_f6a3e8;
  v2 = SdkData_f6a3f0;
  v3 = SdkData_f6a400;
  a1[2] = SdkData_f6a3f8;
  a1[3] = v3;
  *a1 = v1;
  a1[1] = v2;
  v4 = SdkData_f6a408;
  v5 = SdkData_f6a410;
  v6 = SdkData_f6a420;
  a1[6] = SdkData_f6a418;
  a1[7] = v6;
  a1[4] = v4;
  a1[5] = v5;
  return v10;
}

__int64 nn_settings_detail_5b6100(_DWORD* a1)
{
  int v2;
  __int64 result;
  __int64 v4;

  v4 = 0;
  v2 = nn_settings_detail_CreateSystemSettingsServerProxyForIpc_plt(&v4);
  if (v2 == 0) {
    v2 = (*(__int64 (**)(__int64, __int64*))(*(_QWORD*)v4 + 1896LL))(
        v4, &SdkData_f6a3e8);
  }
  result = v4;
  if (v4 != 0) {
    result = (*(__int64 (**)(__int64))(*(_QWORD*)v4 + 8LL))(v4);
  }
  *a1 = v2;
  return result;
}

__int64 nn_settings_detail_CreateFactorySettingsServerProxyForIpc(__int64 a1)
{
  _QWORD** v1;
  int v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  unsigned int v6;
  __int64 v7;
  __int64 v8;
  int v9;
  __int64 v10;
  __int64 v11;
  _QWORD* v12;
  int v14;

  v1 = (_QWORD**)a1;
  if ((atomic_load_explicit((atomic_uchar* volatile)&SdkData_f6a520,
                            memory_order_acquire) &
       1) == 0) {
    nn_os_SdkMutexType_Lock_plt(&SdkData_f6a524);
    if ((SdkData_f6a520 & 1) == 0) {
      nn_os_SdkMutexType_Lock_plt(&SdkData_f6a538);
      if (SdkData_f6a53c != 0) {
        v2 = SdkData_f6a53c + 1;
      }
      else {
        v3 = nn_lmem_CreateUnitHeap_plt(&SdkData_f6a5e0, 1024, 64, 4, 16,
                                        &SdkData_f6a540);
        SdkData_f6a530 = (__int64)&SdkData_f6a540;
        SdkData_f6a5d0 = SdkData_e87068 + 16;
        SdkData_f6a5d8 = v3;
        v2 = 1;
      }
      SdkData_f6a53c = v2;
      nn_os_SdkMutexType_Unlock_plt(&SdkData_f6a538);
      atomic_store(1u, (unsigned __int8*)&SdkData_f6a520);
    }
    a1 = nn_os_SdkMutexType_Unlock_plt(&SdkData_f6a524);
  }
  v14 = 0;
  v4 = SdkData_f6a530;
  nn_sf_hipc_InitializeHipcServiceResolution_plt(a1);
  v5 = nn_sf_hipc_ConnectToHipcService_plt(&v14, "set:cal");
  v6 = v5;
  nn_sf_hipc_FinalizeHipcServiceResolution_plt(v5);
  if (v6 == 0) {
    v8 = *(_QWORD*)(v4 + 144);
    v7 = v4 + 144;
    v9 = v14;
    v10 = (*(__int64 (**)(__int64, __int64, __int64))(v8 + 16))(v7, 40, 8);
    if (v10 != 0) {
      *(_DWORD*)(v10 + 24) = 1;
      *(_DWORD*)(v10 + 8) = 1;
      *(_DWORD*)(v10 + 12) = v9;
      v11 = SdkData_e88e90;
      *(_QWORD*)(v10 + 32) = v7;
      *(_QWORD*)v10 = v11 + 16;
      *(_QWORD*)(v10 + 16) = v11 + 704;
    }
    v12 = *v1;
    *v1 = (_QWORD*)v10;
    if (v12 != nullptr) {
      (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, _QWORD*))(*v12 + 8LL))(
          (void*)v12, v12);
    }
  }
  return v6;
}

__int64

nn_settings_detail_CreateFirmwareDebugSettingsServerProxyForIpc(__int64 a1)
{
  _QWORD** v1;
  int v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  unsigned int v6;
  __int64 v7;
  __int64 v8;
  int v9;
  __int64 v10;
  __int64 v11;
  _QWORD* v12;
  int v14;

  v1 = (_QWORD**)a1;
  if ((atomic_load_explicit((atomic_uchar* volatile)&SdkData_f6a9e0,
                            memory_order_acquire) &
       1) == 0) {
    nn_os_SdkMutexType_Lock_plt(&SdkData_f6a9e4);
    if ((SdkData_f6a9e0 & 1) == 0) {
      nn_os_SdkMutexType_Lock_plt(&SdkData_f6a9f8);
      if (SdkData_f6a9fc != 0) {
        v2 = SdkData_f6a9fc + 1;
      }
      else {
        v3 = nn_lmem_CreateUnitHeap_plt(&SdkData_f6aaa0, 1024, 64, 4, 16,
                                        &SdkData_f6aa00);
        SdkData_f6a9f0 = (__int64)&SdkData_f6aa00;
        SdkData_f6aa90 = SdkData_e87068 + 16;
        SdkData_f6aa98 = v3;
        v2 = 1;
      }
      SdkData_f6a9fc = v2;
      nn_os_SdkMutexType_Unlock_plt(&SdkData_f6a9f8);
      atomic_store(1u, (unsigned __int8*)&SdkData_f6a9e0);
    }
    a1 = nn_os_SdkMutexType_Unlock_plt(&SdkData_f6a9e4);
  }
  v14 = 0;
  v4 = SdkData_f6a9f0;
  nn_sf_hipc_InitializeHipcServiceResolution_plt(a1);
  v5 = nn_sf_hipc_ConnectToHipcService_plt(&v14, "set:fd");
  v6 = v5;
  nn_sf_hipc_FinalizeHipcServiceResolution_plt(v5);
  if (v6 == 0) {
    v8 = *(_QWORD*)(v4 + 144);
    v7 = v4 + 144;
    v9 = v14;
    v10 = (*(__int64 (**)(__int64, __int64, __int64))(v8 + 16))(v7, 40, 8);
    if (v10 != 0) {
      *(_DWORD*)(v10 + 24) = 1;
      *(_DWORD*)(v10 + 8) = 1;
      *(_DWORD*)(v10 + 12) = v9;
      v11 = SdkData_e88e98;
      *(_QWORD*)(v10 + 32) = v7;
      *(_QWORD*)v10 = v11 + 16;
      *(_QWORD*)(v10 + 16) = v11 + 176;
    }
    v12 = *v1;
    *v1 = (_QWORD*)v10;
    if (v12 != nullptr) {
      (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, _QWORD*))(*v12 + 8LL))(
          (void*)v12, v12);
    }
  }
  return v6;
}

__int64 nn_settings_detail_CreateSettingsServerProxyForIpc(__int64 a1)
{
  _QWORD** v1;
  int v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  unsigned int v6;
  __int64 v7;
  __int64 v8;
  int v9;
  __int64 v10;
  __int64 v11;
  _QWORD* v12;
  int v14;

  v1 = (_QWORD**)a1;
  if ((atomic_load_explicit((atomic_uchar* volatile)&SdkData_f6b390,
                            memory_order_acquire) &
       1) == 0) {
    nn_os_SdkMutexType_Lock_plt(&SdkData_f6b394);
    if ((SdkData_f6b390 & 1) == 0) {
      nn_os_SdkMutexType_Lock_plt(&SdkData_f6b3a8);
      if (SdkData_f6b3ac != 0) {
        v2 = SdkData_f6b3ac + 1;
      }
      else {
        v3 = nn_lmem_CreateUnitHeap_plt(&SdkData_f6b450, 1024, 64, 4, 16,
                                        &SdkData_f6b3b0);
        SdkData_f6b3a0 = (__int64)&SdkData_f6b3b0;
        SdkData_f6b440 = SdkData_e87068 + 16;
        SdkData_f6b448 = v3;
        v2 = 1;
      }
      SdkData_f6b3ac = v2;
      nn_os_SdkMutexType_Unlock_plt(&SdkData_f6b3a8);
      atomic_store(1u, (unsigned __int8*)&SdkData_f6b390);
    }
    a1 = nn_os_SdkMutexType_Unlock_plt(&SdkData_f6b394);
  }
  v14 = 0;
  v4 = SdkData_f6b3a0;
  nn_sf_hipc_InitializeHipcServiceResolution_plt(a1);
  v5 = nn_sf_hipc_ConnectToHipcService_plt(&v14, &SdkData_c60d78);
  v6 = v5;
  nn_sf_hipc_FinalizeHipcServiceResolution_plt(v5);
  if (v6 == 0) {
    v8 = *(_QWORD*)(v4 + 144);
    v7 = v4 + 144;
    v9 = v14;
    v10 = (*(__int64 (**)(__int64, __int64, __int64))(v8 + 16))(v7, 40, 8);
    if (v10 != 0) {
      *(_DWORD*)(v10 + 24) = 1;
      *(_DWORD*)(v10 + 8) = 1;
      *(_DWORD*)(v10 + 12) = v9;
      v11 = SdkData_e88ea8;
      *(_QWORD*)(v10 + 32) = v7;
      *(_QWORD*)v10 = v11 + 16;
      *(_QWORD*)(v10 + 16) = v11 + 208;
    }
    v12 = *v1;
    *v1 = (_QWORD*)v10;
    if (v12 != nullptr) {
      (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, _QWORD*))(*v12 + 8LL))(
          (void*)v12, v12);
    }
  }
  return v6;
}

__int64 nn_settings_detail_CreateSystemSettingsServerProxyForIpc(__int64* a1)
{
  int v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  unsigned int v7;
  __int64 result;
  __int64 v9;
  int v10;
  __int64 v11;
  __int64 v12;
  _QWORD* v13;
  __int64 v14;
  int v15;

  if ((atomic_load_explicit((atomic_uchar* volatile)&SdkData_f6b868,
                            memory_order_acquire) &
       1) == 0 &&
      (unsigned int)__cxa_guard_acquire_plt(&SdkData_f6b868) != 0) {
    fw_rtld_RegisterCrtDestructor();
    __cxa_guard_release_plt(&SdkData_f6b868);
  }
  if ((atomic_load_explicit((atomic_uchar* volatile)&SdkData_f6b850,
                            memory_order_acquire) &
       1) == 0) {
    nn_os_SdkMutexType_Lock_plt(&SdkData_f6b858);
    if ((SdkData_f6b850 & 1) == 0) {
      nn_os_SdkMutexType_Lock_plt(&SdkData_f6b878);
      if (SdkData_f6b87c != 0) {
        v2 = SdkData_f6b87c + 1;
      }
      else {
        v3 = nn_lmem_CreateUnitHeap_plt(&SdkData_f6b920, 64, 64, 4, 16,
                                        &SdkData_f6b880);
        SdkData_f6b870 = (__int64)&SdkData_f6b880;
        SdkData_f6b910 = SdkData_e87068 + 16;
        SdkData_f6b918 = v3;
        v2 = 1;
      }
      SdkData_f6b87c = v2;
      nn_os_SdkMutexType_Unlock_plt(&SdkData_f6b878);
      atomic_store(1u, (unsigned __int8*)&SdkData_f6b850);
    }
    nn_os_SdkMutexType_Unlock_plt(&SdkData_f6b858);
  }
  if ((atomic_load_explicit((atomic_uchar* volatile)&SdkData_f6b854,
                            memory_order_acquire) &
       1) == 0) {
    v4 = nn_os_SdkMutexType_Lock_plt(&SdkData_f6b858);
    if ((SdkData_f6b854 & 1) == 0) {
      v15 = 0;
      v5 = SdkData_f6b870;
      nn_sf_hipc_InitializeHipcServiceResolution_plt(v4);
      v6 = nn_sf_hipc_ConnectToHipcService_plt(&v15, "set:sys");
      v7 = v6;
      nn_sf_hipc_FinalizeHipcServiceResolution_plt(v6);
      if (v7 != 0) {
        nn_os_SdkMutexType_Unlock_plt(&SdkData_f6b858);
        return v7;
      }
      v9 = v5 + 144;
      v10 = v15;
      v11 = (*(__int64 (**)(__int64, __int64, __int64))(*(_QWORD*)v9 + 16LL))(
          v9, 40, 8);
      if (v11 != 0) {
        *(_DWORD*)(v11 + 24) = 1;
        *(_DWORD*)(v11 + 8) = 1;
        *(_DWORD*)(v11 + 12) = v10;
        v12 = SdkData_e88eb0;
        *(_QWORD*)(v11 + 32) = v9;
        *(_QWORD*)v11 = v12 + 16;
        *(_QWORD*)(v11 + 16) = v12 + 2016;
      }
      v13 = (_QWORD*)SdkData_f6b860;
      SdkData_f6b860 = v11;
      if (v13 != nullptr) {
        (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, _QWORD*))(
            *v13 + 8LL))((void*)v13, v13);
      }
      atomic_store(1u, (unsigned __int8*)&SdkData_f6b854);
    }
    nn_os_SdkMutexType_Unlock_plt(&SdkData_f6b858);
  }
  v14 = SdkData_f6b860;
  if (SdkData_f6b860 != 0) {
    (**(void (***)(__int64))SdkData_f6b860)(SdkData_f6b860);
  }
  result = *a1;
  *a1 = v14;
  if (result != 0) {
    (*(void (**)(__int64))(*(_QWORD*)result + 8LL))(result);
    return 0;
  }
  return result;
}

#pragma GCC visibility pop
