#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 __cxa_guard_acquire_plt(_QWORD);
__int64 __cxa_guard_release_plt(_QWORD);
__int64 fw_rtld_RegisterCrtDestructor();
__int64 nn_lmem_CreateUnitHeap_plt(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                                   _QWORD);
__int64 nn_os_SdkMutexType_Lock_plt(_QWORD);
__int64 nn_os_SdkMutexType_Unlock_plt(_QWORD);
__int64 nn_sf_hipc_ConnectToHipcService_plt(_QWORD, _QWORD);
__int64 nn_sf_hipc_FinalizeHipcServiceResolution_plt(void);
__int64 nn_sf_hipc_InitializeHipcServiceResolution_plt(_QWORD);
extern _UNKNOWN SdkData_1047028;
extern _UNKNOWN SdkData_1047038;
extern _UNKNOWN SdkData_1047048;
extern _UNKNOWN SdkData_1047050;
extern _UNKNOWN SdkData_10470f0;
extern _UNKNOWN SdkData_10478f8;
extern _UNKNOWN SdkData_1047908;
extern _UNKNOWN SdkData_1047918;
extern _UNKNOWN SdkData_1047920;
extern _UNKNOWN SdkData_10479c0;
extern _UNKNOWN SdkData_10481c8;
extern _UNKNOWN SdkData_10481d8;
extern _UNKNOWN SdkData_10481e8;
extern _UNKNOWN SdkData_10481f0;
extern _UNKNOWN SdkData_1048290;
extern __int64 SdkData_1047030;
extern __int64 SdkData_1047040;
extern __int64 SdkData_10470e0;
extern __int64 SdkData_10470e8;
extern __int64 SdkData_1047900;
extern __int64 SdkData_1047910;
extern __int64 SdkData_10479b0;
extern __int64 SdkData_10479b8;
extern __int64 SdkData_10481d0;
extern __int64 SdkData_10481e0;
extern __int64 SdkData_1048280;
extern __int64 SdkData_1048288;
extern __int64 SdkData_e87068;
extern __int64 SdkData_e89128;
extern __int64 SdkData_e89140;
extern __int64 SdkData_e89148;
extern char SdkData_1047020;
extern char SdkData_1047024;
extern char SdkData_10478f0;
extern char SdkData_10478f4;
extern char SdkData_10481c0;
extern char SdkData_10481c4;
extern int SdkData_104704c;
extern int SdkData_104791c;
extern int SdkData_10481ec;
__int64 nn_hid_server_CreateHidServerProxy(__int64* a1);
__int64 nn_hid_server_CreateHidDebugServerProxy(__int64* a1);
__int64 nn_hid_server_CreateHidSystemServerProxy(__int64* a1);

__int64 nn_hid_server_CreateHidServerProxy(__int64* a1)
{
  int v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  unsigned int v6;
  __int64 result;
  __int64 v8;
  int v9;
  __int64 v10;
  __int64 v11;
  _QWORD* v12;
  __int64 v13;
  int v14;

  if ((atomic_load_explicit((atomic_uchar* volatile)&SdkData_1047020,
                            memory_order_acquire) &
       1) == 0) {
    nn_os_SdkMutexType_Lock_plt(&SdkData_1047028);
    if ((SdkData_1047020 & 1) == 0) {
      nn_os_SdkMutexType_Lock_plt(&SdkData_1047048);
      if (SdkData_104704c != 0) {
        v2 = SdkData_104704c + 1;
      }
      else {
        v3 = nn_lmem_CreateUnitHeap_plt(&SdkData_10470f0, 2048, 64, 4, 16,
                                        &SdkData_1047050);
        SdkData_1047040 = (__int64)&SdkData_1047050;
        SdkData_10470e0 = SdkData_e87068 + 16;
        SdkData_10470e8 = v3;
        v2 = 1;
      }
      SdkData_104704c = v2;
      nn_os_SdkMutexType_Unlock_plt(&SdkData_1047048);
      atomic_store(1u, (unsigned __int8*)&SdkData_1047020);
    }
    nn_os_SdkMutexType_Unlock_plt(&SdkData_1047028);
  }
  if ((atomic_load_explicit((atomic_uchar* volatile)&SdkData_1047038,
                            memory_order_acquire) &
       1) == 0 &&
      (unsigned int)__cxa_guard_acquire_plt(&SdkData_1047038) != 0) {
    fw_rtld_RegisterCrtDestructor();
    __cxa_guard_release_plt(&SdkData_1047038);
  }
  if ((atomic_load_explicit((atomic_uchar* volatile)&SdkData_1047024,
                            memory_order_acquire) &
       1) == 0) {
    v4 = nn_os_SdkMutexType_Lock_plt(&SdkData_1047028);
    if ((SdkData_1047024 & 1) == 0) {
      v14 = 0;
      v5 = SdkData_1047040;
      nn_sf_hipc_InitializeHipcServiceResolution_plt(v4);
      v6 = nn_sf_hipc_ConnectToHipcService_plt(&v14, "hid");
      nn_sf_hipc_FinalizeHipcServiceResolution_plt();
      if (v6 != 0) {
        nn_os_SdkMutexType_Unlock_plt(&SdkData_1047028);
        return v6;
      }
      v8 = v5 + 144;
      v9 = v14;
      v10 = (*(__int64 (**)(__int64, __int64, __int64))(*(_QWORD*)v8 + 16LL))(
          v8, 40, 8);
      if (v10 != 0) {
        *(_DWORD*)(v10 + 24) = 1;
        *(_DWORD*)(v10 + 8) = 1;
        *(_DWORD*)(v10 + 12) = v9;
        v11 = SdkData_e89128;
        *(_QWORD*)(v10 + 32) = v8;
        *(_QWORD*)v10 = v11 + 16;
        *(_QWORD*)(v10 + 16) = v11 + 1576;
      }
      v12 = (_QWORD*)SdkData_1047030;
      SdkData_1047030 = v10;
      if (v12 != nullptr) {
        (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, _QWORD*))(
            *v12 + 8LL))((void*)(v12), v12);
      }
      atomic_store(1u, (unsigned __int8*)&SdkData_1047024);
    }
    nn_os_SdkMutexType_Unlock_plt(&SdkData_1047028);
  }
  v13 = SdkData_1047030;
  if (SdkData_1047030 != 0) {
    (**(void (***)(__int64))SdkData_1047030)(SdkData_1047030);
  }
  result = *a1;
  *a1 = v13;
  if (result != 0) {
    (*(void (**)(__int64))(*(_QWORD*)result + 8LL))(result);
    return 0;
  }
  return result;
}

__int64 nn_hid_server_CreateHidDebugServerProxy(__int64* a1)
{
  int v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  unsigned int v6;
  __int64 result;
  __int64 v8;
  int v9;
  __int64 v10;
  __int64 v11;
  _QWORD* v12;
  __int64 v13;
  int v14;

  if ((atomic_load_explicit((atomic_uchar* volatile)&SdkData_10478f0,
                            memory_order_acquire) &
       1) == 0) {
    nn_os_SdkMutexType_Lock_plt(&SdkData_10478f8);
    if ((SdkData_10478f0 & 1) == 0) {
      nn_os_SdkMutexType_Lock_plt(&SdkData_1047918);
      if (SdkData_104791c != 0) {
        v2 = SdkData_104791c + 1;
      }
      else {
        v3 = nn_lmem_CreateUnitHeap_plt(&SdkData_10479c0, 2048, 64, 4, 16,
                                        &SdkData_1047920);
        SdkData_1047910 = (__int64)&SdkData_1047920;
        SdkData_10479b0 = SdkData_e87068 + 16;
        SdkData_10479b8 = v3;
        v2 = 1;
      }
      SdkData_104791c = v2;
      nn_os_SdkMutexType_Unlock_plt(&SdkData_1047918);
      atomic_store(1u, (unsigned __int8*)&SdkData_10478f0);
    }
    nn_os_SdkMutexType_Unlock_plt(&SdkData_10478f8);
  }
  if ((atomic_load_explicit((atomic_uchar* volatile)&SdkData_1047908,
                            memory_order_acquire) &
       1) == 0 &&
      (unsigned int)__cxa_guard_acquire_plt(&SdkData_1047908) != 0) {
    fw_rtld_RegisterCrtDestructor();
    __cxa_guard_release_plt(&SdkData_1047908);
  }
  if ((atomic_load_explicit((atomic_uchar* volatile)&SdkData_10478f4,
                            memory_order_acquire) &
       1) == 0) {
    v4 = nn_os_SdkMutexType_Lock_plt(&SdkData_10478f8);
    if ((SdkData_10478f4 & 1) == 0) {
      v14 = 0;
      v5 = SdkData_1047910;
      nn_sf_hipc_InitializeHipcServiceResolution_plt(v4);
      v6 = nn_sf_hipc_ConnectToHipcService_plt(&v14, "hid:dbg");
      nn_sf_hipc_FinalizeHipcServiceResolution_plt();
      if (v6 != 0) {
        nn_os_SdkMutexType_Unlock_plt(&SdkData_10478f8);
        return v6;
      }
      v8 = v5 + 144;
      v9 = v14;
      v10 = (*(__int64 (**)(__int64, __int64, __int64))(*(_QWORD*)v8 + 16LL))(
          v8, 40, 8);
      if (v10 != 0) {
        *(_DWORD*)(v10 + 24) = 1;
        *(_DWORD*)(v10 + 8) = 1;
        *(_DWORD*)(v10 + 12) = v9;
        v11 = SdkData_e89140;
        *(_QWORD*)(v10 + 32) = v8;
        *(_QWORD*)v10 = v11 + 16;
        *(_QWORD*)(v10 + 16) = v11 + 1424;
      }
      v12 = (_QWORD*)SdkData_1047900;
      SdkData_1047900 = v10;
      if (v12 != nullptr) {
        (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, _QWORD*))(
            *v12 + 8LL))((void*)v12, v12);
      }
      atomic_store(1u, (unsigned __int8*)&SdkData_10478f4);
    }
    nn_os_SdkMutexType_Unlock_plt(&SdkData_10478f8);
  }
  v13 = SdkData_1047900;
  if (SdkData_1047900 != 0) {
    (**(void (***)(__int64))SdkData_1047900)(SdkData_1047900);
  }
  result = *a1;
  *a1 = v13;
  if (result != 0) {
    (*(void (**)(__int64))(*(_QWORD*)result + 8LL))(result);
    return 0;
  }
  return result;
}

__int64 nn_hid_server_CreateHidSystemServerProxy(__int64* a1)
{
  int v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  unsigned int v6;
  __int64 result;
  __int64 v8;
  int v9;
  __int64 v10;
  __int64 v11;
  _QWORD* v12;
  __int64 v13;
  int v14;

  if ((atomic_load_explicit((atomic_uchar* volatile)&SdkData_10481c0,
                            memory_order_acquire) &
       1) == 0) {
    nn_os_SdkMutexType_Lock_plt(&SdkData_10481c8);
    if ((SdkData_10481c0 & 1) == 0) {
      nn_os_SdkMutexType_Lock_plt(&SdkData_10481e8);
      if (SdkData_10481ec != 0) {
        v2 = SdkData_10481ec + 1;
      }
      else {
        v3 = nn_lmem_CreateUnitHeap_plt(&SdkData_1048290, 2048, 64, 4, 16,
                                        &SdkData_10481f0);
        SdkData_10481e0 = (__int64)&SdkData_10481f0;
        SdkData_1048280 = SdkData_e87068 + 16;
        SdkData_1048288 = v3;
        v2 = 1;
      }
      SdkData_10481ec = v2;
      nn_os_SdkMutexType_Unlock_plt(&SdkData_10481e8);
      atomic_store(1u, (unsigned __int8*)&SdkData_10481c0);
    }
    nn_os_SdkMutexType_Unlock_plt(&SdkData_10481c8);
  }
  if ((atomic_load_explicit((atomic_uchar* volatile)&SdkData_10481d8,
                            memory_order_acquire) &
       1) == 0 &&
      (unsigned int)__cxa_guard_acquire_plt(&SdkData_10481d8) != 0) {
    fw_rtld_RegisterCrtDestructor();
    __cxa_guard_release_plt(&SdkData_10481d8);
  }
  if ((atomic_load_explicit((atomic_uchar* volatile)&SdkData_10481c4,
                            memory_order_acquire) &
       1) == 0) {
    v4 = nn_os_SdkMutexType_Lock_plt(&SdkData_10481c8);
    if ((SdkData_10481c4 & 1) == 0) {
      v14 = 0;
      v5 = SdkData_10481e0;
      nn_sf_hipc_InitializeHipcServiceResolution_plt(v4);
      v6 = nn_sf_hipc_ConnectToHipcService_plt(&v14, "hid:sys");
      nn_sf_hipc_FinalizeHipcServiceResolution_plt();
      if (v6 != 0) {
        nn_os_SdkMutexType_Unlock_plt(&SdkData_10481c8);
        return v6;
      }
      v8 = v5 + 144;
      v9 = v14;
      v10 = (*(__int64 (**)(__int64, __int64, __int64))(*(_QWORD*)v8 + 16LL))(
          v8, 40, 8);
      if (v10 != 0) {
        *(_DWORD*)(v10 + 24) = 1;
        *(_DWORD*)(v10 + 8) = 1;
        *(_DWORD*)(v10 + 12) = v9;
        v11 = SdkData_e89148;
        *(_QWORD*)(v10 + 32) = v8;
        *(_QWORD*)v10 = v11 + 16;
        *(_QWORD*)(v10 + 16) = v11 + 2504;
      }
      v12 = (_QWORD*)SdkData_10481d0;
      SdkData_10481d0 = v10;
      if (v12 != nullptr) {
        (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, _QWORD*))(
            *v12 + 8LL))((void*)v12, v12);
      }
      atomic_store(1u, (unsigned __int8*)&SdkData_10481c4);
    }
    nn_os_SdkMutexType_Unlock_plt(&SdkData_10481c8);
  }
  v13 = SdkData_10481d0;
  if (SdkData_10481d0 != 0) {
    (**(void (***)(__int64))SdkData_10481d0)(SdkData_10481d0);
  }
  result = *a1;
  *a1 = v13;
  if (result != 0) {
    (*(void (**)(__int64))(*(_QWORD*)result + 8LL))(result);
    return 0;
  }
  return result;
}

#pragma GCC visibility pop
