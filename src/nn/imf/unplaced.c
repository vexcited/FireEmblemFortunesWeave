#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_lmem_CreateUnitHeap_plt(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                                   _QWORD);
__int64 nn_os_SdkMutexType_Lock_plt(_QWORD);
__int64 nn_os_SdkMutexType_Unlock_plt(_QWORD);
__int64 nn_sf_hipc_ConnectToHipcService_plt(_QWORD, _QWORD);
__int64 nn_sf_hipc_FinalizeHipcServiceResolution_plt(void);
__int64 nn_sf_hipc_InitializeHipcServiceResolution_plt(_QWORD);
extern _UNKNOWN SdkData_1048c64;
extern _UNKNOWN SdkData_1048c78;
extern _UNKNOWN SdkData_1048c80;
extern _UNKNOWN SdkData_1048d20;
extern _UNKNOWN SdkData_ca6300;
extern __int64 SdkData_1048c70;
extern __int64 SdkData_1048d10;
extern __int64 SdkData_1048d18;
extern __int64 SdkData_e87068;
extern __int64 SdkData_e891d0;
extern char SdkData_1048c60;
extern int SdkData_1048c7c;
__int64 nn_imf_detail_CreateClientServiceProxyForIpc(__int64 a1);

__int64 nn_imf_detail_CreateClientServiceProxyForIpc(__int64 a1)
{
  _QWORD** v1;
  int v2;
  __int64 v3;
  __int64 v4;
  unsigned int v5;
  __int64 v6;
  __int64 v7;
  int v8;
  __int64 v9;
  __int64 v10;
  _QWORD* v11;
  int v13;

  v1 = (_QWORD**)a1;
  if ((atomic_load_explicit((atomic_uchar* volatile)&SdkData_1048c60,
                            memory_order_acquire) &
       1) == 0) {
    nn_os_SdkMutexType_Lock_plt(&SdkData_1048c64);
    if ((SdkData_1048c60 & 1) == 0) {
      nn_os_SdkMutexType_Lock_plt(&SdkData_1048c78);
      if (SdkData_1048c7c != 0) {
        v2 = SdkData_1048c7c + 1;
      }
      else {
        v3 = nn_lmem_CreateUnitHeap_plt(&SdkData_1048d20, 1024, 64, 4, 16,
                                        &SdkData_1048c80);
        SdkData_1048c70 = (__int64)&SdkData_1048c80;
        SdkData_1048d10 = SdkData_e87068 + 16;
        SdkData_1048d18 = v3;
        v2 = 1;
      }
      SdkData_1048c7c = v2;
      nn_os_SdkMutexType_Unlock_plt(&SdkData_1048c78);
      atomic_store(1u, (unsigned __int8*)&SdkData_1048c60);
    }
    a1 = nn_os_SdkMutexType_Unlock_plt(&SdkData_1048c64);
  }
  v13 = 0;
  v4 = SdkData_1048c70;
  nn_sf_hipc_InitializeHipcServiceResolution_plt(a1);
  v5 = nn_sf_hipc_ConnectToHipcService_plt(&v13, &SdkData_ca6300);
  nn_sf_hipc_FinalizeHipcServiceResolution_plt();
  if (v5 == 0) {
    v7 = *(_QWORD*)(v4 + 144);
    v6 = v4 + 144;
    v8 = v13;
    v9 = (*(__int64 (**)(__int64, __int64, __int64))(v7 + 16))(v6, 40, 8);
    if (v9 != 0) {
      *(_DWORD*)(v9 + 24) = 1;
      *(_DWORD*)(v9 + 8) = 1;
      *(_DWORD*)(v9 + 12) = v8;
      v10 = SdkData_e891d0;
      *(_QWORD*)(v9 + 32) = v6;
      *(_QWORD*)v9 = v10 + 16;
      *(_QWORD*)(v9 + 16) = v10 + 80;
    }
    v11 = *v1;
    *v1 = (_QWORD*)v9;
    if (v11 != nullptr) {
      (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, _QWORD*))(*v11 + 8LL))(
          (void*)v11, v11);
    }
  }
  return v5;
}

#pragma GCC visibility pop
