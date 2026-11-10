#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 fw_rtld_RegisterCrtDestructor();
__int64 nn_diag_detail_AbortImpl_plt_858db0(_QWORD);
__int64 nn_lmem_AllocateFromExpHeap_plt_859a90(_QWORD, _QWORD);
__int64 nn_os_LockMutex_plt(_QWORD);
__int64 nn_os_SdkConditionVariableType_Broadcast_plt(_QWORD);
__int64 nn_os_SdkConditionVariableType_Initialize_plt(_QWORD);
__int64 nn_os_SdkMutexType_Lock_plt(_QWORD);
__int64 nn_os_SdkMutexType_Unlock_plt(_QWORD);
__int64 nn_os_UnlockMutex_plt(_QWORD);
__int64 nn_sf_hipc_ConnectToHipcService_plt(_QWORD, _QWORD);
__int64 nn_sf_hipc_FinalizeHipcServiceResolution_plt(_QWORD);
__int64 nn_sf_hipc_InitializeHipcServiceResolution_plt(_QWORD);
__int64 nn_sf_hipc_client_HipcClientSessionManager_ConvertToDomainImpl_plt(
    _QWORD, _QWORD, _QWORD);
extern _UNKNOWN SdkData_f3f068;
extern _UNKNOWN SdkData_f430ec;
extern __int64 (*SdkData_e65188)();
extern __int64 (*nn_aoc_detail_AddProxyReference_ptr[])();
extern __int64 (*nn_sf_hipc_client_AddDomainProxyReference_ptr[])();
extern __int64 (*nn_sf_hipc_client_GetDomainProxyOwner_ptr)();
extern __int64 SdkData_e86d80;
extern __int64 SdkData_f3f060;
extern __int64 SdkData_f430d0;
extern __int64 SdkData_f430e0;
extern __int64 SdkData_f430f0;
extern __int64 SdkData_f430f8;
extern __int64 SdkData_f43100;
extern __int64 SdkData_f43108;
extern int SdkData_f430e8;
extern int SdkData_f43110;
extern int SdkData_f43118;
extern int SdkData_f43128;
extern int SdkData_f43138;
extern int SdkData_f43148;
extern int SdkData_f43158;
extern int SdkData_f43168;
extern int SdkData_f43178;
extern int SdkData_f43188;
extern int SdkData_f43198;
extern int SdkData_f431a8;
extern int SdkData_f431b8;
extern int SdkData_f431c8;
extern int SdkData_f431d8;
extern int SdkData_f431e8;
extern int SdkData_f431f8;
extern int SdkData_f43208;
__attribute__((swiftcall)) void
nn_htcs_CreateHtcsManagerByHipc_490bd0(PSEUDO_X8 x8_, __int64 a1);
__attribute__((swiftcall)) void
nn_htcs_CreateHtcsManagerByHipc_490cb0(PSEUDO_X8 x8_, __int64 a1, __int64 a2);
__int64 nn_htcs_49aca0();
__attribute__((swiftcall)) void

nn_htcs_CreateHtcsManagerByHipc_490bd0(PSEUDO_X8 x8_, __int64 a1)
{
  __int64* a2 = (__int64*)PSEUDO_X8_VALUE(x8_);
  const char* v3;
  const char* v4;
  __int64 v5;
  int v6;
  int v7;
  __int64 v8;
  __int64 result;
  int v10;
  int v11;

  *a2 = 0;
  v3 = "htcs:sys";
  v11 = 0;
  if ((_DWORD)a1 != 1) {
    v3 = nullptr;
  }
  if ((_DWORD)a1 != 0) {
    v4 = v3;
  }
  else {
    v4 = "htcs";
  }
  nn_sf_hipc_InitializeHipcServiceResolution_plt(a1);
  v5 = nn_sf_hipc_ConnectToHipcService_plt(&v11, v4);
  v6 = v5;
  nn_sf_hipc_FinalizeHipcServiceResolution_plt(v5);
  if (v6 != 0) {
    v10 = v6;
    nn_diag_detail_AbortImpl_plt_858db0(&v10);
  }
  v7 = v11;
  nn_os_LockMutex_plt(&SdkData_f3f068);
  v8 = nn_lmem_AllocateFromExpHeap_plt_859a90(SdkData_f3f060, 32);
  result = nn_os_UnlockMutex_plt(&SdkData_f3f068);
  if (v8 != 0) {
    *(_DWORD*)(v8 + 24) = 1;
    *(_DWORD*)(v8 + 8) = 1;
    *(_DWORD*)(v8 + 12) = v7;
    *(_QWORD*)v8 = nn_aoc_detail_AddProxyReference_ptr;
    *(_QWORD*)(v8 + 16) = &SdkData_e65188;
  }
  *a2 = v8;
  {
    result;
    return;
  }
}

__attribute__((swiftcall)) void

nn_htcs_CreateHtcsManagerByHipc_490cb0(PSEUDO_X8 x8_, __int64 a1, __int64 a2)
{
  __int64* a3 = (__int64*)PSEUDO_X8_VALUE(x8_);
  const char* v4;
  const char* v6;
  __int64 v7;
  unsigned int v8;
  int v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  int v15;
  int v16;
  unsigned int v17;
  int v18;

  *a3 = 0;
  v4 = "htcs:sys";
  if ((_DWORD)a1 != 1) {
    v4 = nullptr;
  }
  if ((_DWORD)a1 != 0) {
    v6 = v4;
  }
  else {
    v6 = "htcs";
  }
  nn_sf_hipc_InitializeHipcServiceResolution_plt(a1);
  v17 = 0;
  v7 = nn_sf_hipc_ConnectToHipcService_plt(&v17, v6);
  if ((_DWORD)v7 != 0 ||
      (v8 = v17, v18 = 0,
       (_DWORD)(v7 =
                    nn_sf_hipc_client_HipcClientSessionManager_ConvertToDomainImpl_plt(
                        a2, &v18, v17)) != 0)) {
    v15 = v7;
    nn_sf_hipc_FinalizeHipcServiceResolution_plt(v7);
    v16 = v15;
    nn_diag_detail_AbortImpl_plt_858db0(&v16);
  }
  v9 = v18;
  nn_os_LockMutex_plt(&SdkData_f3f068);
  v10 = nn_lmem_AllocateFromExpHeap_plt_859a90(SdkData_f3f060, 48);
  nn_os_UnlockMutex_plt(&SdkData_f3f068);
  if (v10 != 0) {
    *(_QWORD*)(v10 + 16) = a2;
    *(_DWORD*)(v10 + 24) = v9;
    *(_DWORD*)(v10 + 28) = 0;
    *(_DWORD*)(v10 + 40) = 1;
    *(_BYTE*)(v10 + 8) = 1;
    *(_QWORD*)v10 = nn_sf_hipc_client_AddDomainProxyReference_ptr;
    *(_QWORD*)(v10 + 32) = &nn_sf_hipc_client_GetDomainProxyOwner_ptr;
  }
  *a3 = v10;
  nn_os_SdkMutexType_Lock_plt(a2 + 24);
  v11 = *(_QWORD*)(a2 + 32);
  v12 = *(_QWORD*)(a2 + 40);
  *(_QWORD*)(a2 + 40) = *(_QWORD*)(v12 + 8);
  *(_QWORD*)(v12 + 8) = v11;
  *(_QWORD*)(a2 + 32) = v12;
  *(_DWORD*)v12 = v8;
  if (v11 == 0) {
    nn_os_SdkConditionVariableType_Broadcast_plt(a2 + 28);
  }
  v13 = nn_os_SdkMutexType_Unlock_plt(a2 + 24);
  ++*(_DWORD*)(a2 + 60);
  {
    nn_sf_hipc_FinalizeHipcServiceResolution_plt(v13);
    return;
  }
}

__int64 nn_htcs_49aca0()
{
  SdkData_f430e8 = 0;
  SdkData_f430d0 = SdkData_e86d80 + 16;
  SdkData_f430e0 = (__int64)&SdkData_f43118;
  nn_os_SdkConditionVariableType_Initialize_plt(&SdkData_f430ec);
  SdkData_f430f0 = 0;
  SdkData_f430f8 = SdkData_f430e0;
  SdkData_f43100 = (__int64)&SdkData_f430d0;
  *(_QWORD*)(SdkData_f430e0 + 8) = SdkData_f430e0 + 16;
  *(_QWORD*)(SdkData_f430e0 + 24) = SdkData_f430e0 + 32;
  *(_QWORD*)(SdkData_f430e0 + 40) = SdkData_f430e0 + 48;
  *(_QWORD*)(SdkData_f430e0 + 56) = SdkData_f430e0 + 64;
  *(_QWORD*)(SdkData_f430e0 + 72) = SdkData_f430e0 + 80;
  *(_QWORD*)(SdkData_f430e0 + 88) = SdkData_f430e0 + 96;
  *(_QWORD*)(SdkData_f430e0 + 104) = SdkData_f430e0 + 112;
  *(_QWORD*)(SdkData_f430e0 + 120) = SdkData_f430e0 + 128;
  *(_QWORD*)(SdkData_f430e0 + 136) = SdkData_f430e0 + 144;
  *(_QWORD*)(SdkData_f430e0 + 152) = SdkData_f430e0 + 160;
  *(_QWORD*)(SdkData_f430e0 + 168) = SdkData_f430e0 + 176;
  *(_QWORD*)(SdkData_f430e0 + 184) = SdkData_f430e0 + 192;
  *(_QWORD*)(SdkData_f430e0 + 200) = SdkData_f430e0 + 208;
  *(_QWORD*)(SdkData_f430e0 + 216) = SdkData_f430e0 + 224;
  *(_QWORD*)(SdkData_f430e0 + 232) = SdkData_f430e0 + 240;
  *(_QWORD*)(SdkData_f430e0 + 248) = 0;
  SdkData_f43110 = 0;
  SdkData_f43118 = 0;
  SdkData_f43128 = 0;
  SdkData_f43138 = 0;
  SdkData_f43148 = 0;
  SdkData_f43158 = 0;
  SdkData_f43168 = 0;
  SdkData_f43178 = 0;
  SdkData_f43188 = 0;
  SdkData_f43198 = 0;
  SdkData_f431a8 = 0;
  SdkData_f431b8 = 0;
  SdkData_f431c8 = 0;
  SdkData_f431d8 = 0;
  SdkData_f431e8 = 0;
  SdkData_f431f8 = 0;
  SdkData_f43208 = 0;
  SdkData_f43108 = 16;
  return fw_rtld_RegisterCrtDestructor();
}

#pragma GCC visibility pop
