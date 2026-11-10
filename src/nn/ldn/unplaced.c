#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_diag_detail_AbortImpl_plt_856170(_QWORD);
__int64 nn_diag_detail_AbortImpl_plt_858db0(_QWORD);
__int64 nn_lmem_AllocateFromExpHeap_plt_859a90(_QWORD, _QWORD);
__int64 nn_lmem_CreateExpHeap_plt(_QWORD, _QWORD, _QWORD);
__int64 nn_lmem_FreeToExpHeap_plt(_QWORD, _QWORD);
__int64 nn_os_InitializeMutex_plt(_QWORD, _QWORD, _QWORD);
__int64 nn_os_LockMutex_plt(_QWORD);
__int64 nn_os_SdkConditionVariableType_Broadcast_plt(_QWORD);
__int64 nn_os_SdkConditionVariableType_Initialize_plt(_QWORD);
__int64 nn_os_SdkMutexType_Lock_plt(_QWORD);
__int64 nn_os_SdkMutexType_Unlock_plt(_QWORD);
__int64 nn_os_UnlockMutex_plt(_QWORD);
__int64 nn_sf_hipc_ConnectToHipcService_plt(_QWORD, _QWORD);
__int64 nn_sf_hipc_FinalizeHipcServiceResolution_plt(_QWORD);
__int64 nn_sf_hipc_InitializeHipcServiceResolution_plt(_QWORD);
__int64 nn_sf_hipc_client_DestroyDomainObject(__int64 result);
__int64 nn_sf_hipc_client_HipcClientSessionManager_ConvertToDomainImpl_plt(
    _QWORD, _QWORD, _QWORD);
__int64 nn_sf_hipc_client_ResizeSessions(__int64, int);
__int64 nn_sf_impl_detail_ServiceObjectImplBase2_ReleaseImpl_plt(_QWORD);
extern _UNKNOWN SdkData_1051408;
extern _UNKNOWN SdkData_1051430;
extern _UNKNOWN SdkData_1055434;
extern _UNKNOWN SdkData_1055438;
extern _UNKNOWN SdkData_1055450;
extern _UNKNOWN SdkData_1055454;
extern _UNKNOWN SdkData_1055478;
extern _UNKNOWN SdkData_1055588;
extern _UNKNOWN SdkData_10555a0;
extern _UNKNOWN SdkData_10555a4;
extern _UNKNOWN SdkData_10555c8;
extern __int64 (*nn_sf_hipc_client_AddDomainProxyReference_ptr[])();
extern __int64 (*nn_sf_hipc_client_GetDomainProxyOwner_ptr)();
extern __int64 SdkData_1051400;
extern __int64 SdkData_1055458;
extern __int64 SdkData_1055460;
extern __int64 SdkData_10555a8;
extern __int64 SdkData_10555b0;
extern __int64 SdkData_e86d80;
extern char SdkData_1055430;
extern int SdkData_1055470;
extern int SdkData_1055474;
extern int SdkData_10555c0;
extern int SdkData_10555c4;
__attribute__((swiftcall)) void
nn_ldn_detail_CreateUserServiceCreatorByHipc(PSEUDO_X8 x8_);
__int64 nn_ldn_75fda0(__int64 a1);
__attribute__((swiftcall)) void
nn_ldn_detail_CreateSystemServiceCreatorByHipc(PSEUDO_X8 x8_);
__int64 nn_ldn_760230(__int64 a1);
__attribute__((swiftcall)) void

nn_ldn_detail_CreateUserServiceCreatorByHipc(PSEUDO_X8 x8_)
{
  __int64* a1 = (__int64*)PSEUDO_X8_VALUE(x8_);
  char v3;
  __int64 v4;
  int v5;
  unsigned int v6;
  int v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  int v13;
  int v15;
  unsigned int v16;
  int v17;

  nn_os_SdkMutexType_Lock_plt(&SdkData_1055434);
  v3 = SdkData_1055430;
  *a1 = 0;
  if ((v3 & 1) == 0) {
    SdkData_1055430 = 1;
    SdkData_1051400 = nn_lmem_CreateExpHeap_plt(&SdkData_1051430, 0x4000, 0);
    nn_os_InitializeMutex_plt(&SdkData_1051408, 0, 0);
  }
  v4 = nn_ldn_75fda0((__int64)&SdkData_1055438);
  nn_sf_hipc_InitializeHipcServiceResolution_plt(v4);
  v16 = 0;
  v5 = nn_sf_hipc_ConnectToHipcService_plt(&v16, "ldn:u");
  if (v5 != 0 ||
      (v6 = v16, v17 = 0,
       (v5 = nn_sf_hipc_client_HipcClientSessionManager_ConvertToDomainImpl_plt(
            &SdkData_1055438, &v17, v16)) != 0)) {
    v15 = v5;
    ((void (*)(void))nn_sf_hipc_FinalizeHipcServiceResolution_plt)();
    v17 = v15;
    nn_diag_detail_AbortImpl_plt_858db0(&v17);
  }
  v7 = v17;
  nn_os_LockMutex_plt(&SdkData_1051408);
  v8 = nn_lmem_AllocateFromExpHeap_plt_859a90(SdkData_1051400, 48);
  nn_os_UnlockMutex_plt(&SdkData_1051408);
  if (v8 != 0) {
    *(_QWORD*)(v8 + 16) = &SdkData_1055438;
    *(_DWORD*)(v8 + 24) = v7;
    *(_DWORD*)(v8 + 28) = 0;
    *(_DWORD*)(v8 + 40) = 1;
    *(_BYTE*)(v8 + 8) = 1;
    *(_QWORD*)v8 = nn_sf_hipc_client_AddDomainProxyReference_ptr;
    *(_QWORD*)(v8 + 32) = &nn_sf_hipc_client_GetDomainProxyOwner_ptr;
  }
  *a1 = v8;
  nn_os_SdkMutexType_Lock_plt(&SdkData_1055450);
  v9 = SdkData_1055458;
  v10 = SdkData_1055460;
  SdkData_1055460 = *(_QWORD*)(SdkData_1055460 + 8);
  *(_QWORD*)(v10 + 8) = SdkData_1055458;
  SdkData_1055458 = v10;
  *(_DWORD*)v10 = v6;
  if (v9 == 0) {
    nn_os_SdkConditionVariableType_Broadcast_plt(&SdkData_1055454);
  }
  v11 = nn_os_SdkMutexType_Unlock_plt(&SdkData_1055450);
  ++SdkData_1055474;
  nn_sf_hipc_FinalizeHipcServiceResolution_plt(v11);
  v12 = nn_os_SdkMutexType_Lock_plt(&SdkData_1055478);
  if (SdkData_1055470 <= 2) {
    nn_diag_detail_AbortImpl_plt_856170(v12);
  }
  v13 = nn_sf_hipc_client_ResizeSessions((__int64)&SdkData_1055438, 3);
  nn_os_SdkMutexType_Unlock_plt(&SdkData_1055478);
  v17 = v13;
  if (v13 != 0) {
    nn_diag_detail_AbortImpl_plt_858db0(&v17);
  }
  {
    nn_os_SdkMutexType_Unlock_plt(&SdkData_1055434);
    return;
  }
}

__int64 nn_ldn_75fda0(__int64 a1)
{
  __int64 v2;
  __int64 v3;

  v2 = SdkData_e86d80;
  if (*(_BYTE*)(a1 + 328) == 1) {
    *(_QWORD*)a1 = SdkData_e86d80 + 16;
    nn_os_SdkMutexType_Lock_plt(a1 + 64);
    nn_sf_hipc_client_ResizeSessions(a1, 0);
    nn_os_SdkMutexType_Unlock_plt(a1 + 64);
    *(_BYTE*)(a1 + 328) = 0;
  }
  *(_DWORD*)(a1 + 24) = 0;
  *(_QWORD*)a1 = v2 + 16;
  *(_QWORD*)(a1 + 16) = a1 + 72;
  nn_os_SdkConditionVariableType_Initialize_plt(a1 + 28);
  v3 = *(_QWORD*)(a1 + 16);
  *(_QWORD*)(a1 + 32) = 0;
  *(_QWORD*)(a1 + 40) = v3;
  *(_QWORD*)(a1 + 48) = a1;
  *(_QWORD*)(v3 + 8) = v3 + 16;
  *(_QWORD*)(*(_QWORD*)(a1 + 16) + 24LL) = *(_QWORD*)(a1 + 16) + 32LL;
  *(_QWORD*)(*(_QWORD*)(a1 + 16) + 40LL) = *(_QWORD*)(a1 + 16) + 48LL;
  *(_QWORD*)(*(_QWORD*)(a1 + 16) + 56LL) = *(_QWORD*)(a1 + 16) + 64LL;
  *(_QWORD*)(*(_QWORD*)(a1 + 16) + 72LL) = *(_QWORD*)(a1 + 16) + 80LL;
  *(_QWORD*)(*(_QWORD*)(a1 + 16) + 88LL) = *(_QWORD*)(a1 + 16) + 96LL;
  *(_QWORD*)(*(_QWORD*)(a1 + 16) + 104LL) = *(_QWORD*)(a1 + 16) + 112LL;
  *(_QWORD*)(*(_QWORD*)(a1 + 16) + 120LL) = *(_QWORD*)(a1 + 16) + 128LL;
  *(_QWORD*)(*(_QWORD*)(a1 + 16) + 136LL) = *(_QWORD*)(a1 + 16) + 144LL;
  *(_QWORD*)(*(_QWORD*)(a1 + 16) + 152LL) = *(_QWORD*)(a1 + 16) + 160LL;
  *(_QWORD*)(*(_QWORD*)(a1 + 16) + 168LL) = *(_QWORD*)(a1 + 16) + 176LL;
  *(_QWORD*)(*(_QWORD*)(a1 + 16) + 184LL) = *(_QWORD*)(a1 + 16) + 192LL;
  *(_QWORD*)(*(_QWORD*)(a1 + 16) + 200LL) = *(_QWORD*)(a1 + 16) + 208LL;
  *(_QWORD*)(*(_QWORD*)(a1 + 16) + 216LL) = *(_QWORD*)(a1 + 16) + 224LL;
  *(_QWORD*)(*(_QWORD*)(a1 + 16) + 232LL) = *(_QWORD*)(a1 + 16) + 240LL;
  *(_QWORD*)(*(_QWORD*)(a1 + 16) + 248LL) = 0;
  *(_DWORD*)(a1 + 64) = 0;
  *(_DWORD*)(a1 + 72) = 0;
  *(_DWORD*)(a1 + 88) = 0;
  *(_DWORD*)(a1 + 104) = 0;
  *(_DWORD*)(a1 + 120) = 0;
  *(_DWORD*)(a1 + 136) = 0;
  *(_DWORD*)(a1 + 152) = 0;
  *(_DWORD*)(a1 + 168) = 0;
  *(_DWORD*)(a1 + 184) = 0;
  *(_DWORD*)(a1 + 200) = 0;
  *(_DWORD*)(a1 + 216) = 0;
  *(_DWORD*)(a1 + 232) = 0;
  *(_DWORD*)(a1 + 248) = 0;
  *(_DWORD*)(a1 + 264) = 0;
  *(_DWORD*)(a1 + 280) = 0;
  *(_DWORD*)(a1 + 296) = 0;
  *(_DWORD*)(a1 + 312) = 0;
  *(_QWORD*)(a1 + 56) = 16;
  *(_BYTE*)(a1 + 328) = 1;
  return a1;
}

__attribute__((swiftcall)) void

nn_ldn_detail_CreateSystemServiceCreatorByHipc(PSEUDO_X8 x8_)
{
  __int64* a1 = (__int64*)PSEUDO_X8_VALUE(x8_);
  char v2;
  __int64 v3;
  __int64 v4;
  unsigned int v5;
  int v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  int v12;
  int v14;
  unsigned int v15;
  int v16;

  nn_os_SdkMutexType_Lock_plt(&SdkData_1055434);
  v2 = SdkData_1055430;
  *a1 = 0;
  if ((v2 & 1) == 0) {
    SdkData_1055430 = 1;
    SdkData_1051400 = nn_lmem_CreateExpHeap_plt(&SdkData_1051430, 0x4000, 0);
    nn_os_InitializeMutex_plt(&SdkData_1051408, 0, 0);
  }
  v3 = nn_ldn_75fda0((__int64)&SdkData_1055588);
  nn_sf_hipc_InitializeHipcServiceResolution_plt(v3);
  v15 = 0;
  v4 = nn_sf_hipc_ConnectToHipcService_plt(&v15, "ldn:s");
  if ((_DWORD)v4 != 0 ||
      (v5 = v15, v16 = 0,
       (_DWORD)(v4 =
                    nn_sf_hipc_client_HipcClientSessionManager_ConvertToDomainImpl_plt(
                        &SdkData_1055588, &v16, v15)) != 0)) {
    v14 = v4;
    nn_sf_hipc_FinalizeHipcServiceResolution_plt(v4);
    v16 = v14;
    nn_diag_detail_AbortImpl_plt_858db0(&v16);
  }
  v6 = v16;
  nn_os_LockMutex_plt(&SdkData_1051408);
  v7 = nn_lmem_AllocateFromExpHeap_plt_859a90(SdkData_1051400, 48);
  nn_os_UnlockMutex_plt(&SdkData_1051408);
  if (v7 != 0) {
    *(_QWORD*)(v7 + 16) = &SdkData_1055588;
    *(_DWORD*)(v7 + 24) = v6;
    *(_DWORD*)(v7 + 28) = 0;
    *(_DWORD*)(v7 + 40) = 1;
    *(_BYTE*)(v7 + 8) = 1;
    *(_QWORD*)v7 = nn_sf_hipc_client_AddDomainProxyReference_ptr;
    *(_QWORD*)(v7 + 32) = &nn_sf_hipc_client_GetDomainProxyOwner_ptr;
  }
  *a1 = v7;
  nn_os_SdkMutexType_Lock_plt(&SdkData_10555a0);
  v8 = SdkData_10555a8;
  v9 = SdkData_10555b0;
  SdkData_10555b0 = *(_QWORD*)(SdkData_10555b0 + 8);
  *(_QWORD*)(v9 + 8) = SdkData_10555a8;
  SdkData_10555a8 = v9;
  *(_DWORD*)v9 = v5;
  if (v8 == 0) {
    nn_os_SdkConditionVariableType_Broadcast_plt(&SdkData_10555a4);
  }
  v10 = nn_os_SdkMutexType_Unlock_plt(&SdkData_10555a0);
  ++SdkData_10555c4;
  nn_sf_hipc_FinalizeHipcServiceResolution_plt(v10);
  v11 = nn_os_SdkMutexType_Lock_plt(&SdkData_10555c8);
  if (SdkData_10555c0 <= 2) {
    nn_diag_detail_AbortImpl_plt_856170(v11);
  }
  v12 = nn_sf_hipc_client_ResizeSessions((__int64)&SdkData_1055588, 3);
  nn_os_SdkMutexType_Unlock_plt(&SdkData_10555c8);
  v16 = v12;
  if (v12 != 0) {
    nn_diag_detail_AbortImpl_plt_858db0(&v16);
  }
  {
    nn_os_SdkMutexType_Unlock_plt(&SdkData_1055434);
    return;
  }
}

__int64 nn_ldn_760230(__int64 a1)
{
  __int64 result;

  result = nn_sf_impl_detail_ServiceObjectImplBase2_ReleaseImpl_plt(a1 + 40);
  if ((result & 1) != 0) {
    nn_sf_hipc_client_DestroyDomainObject(a1 + 8);
    nn_os_LockMutex_plt(&SdkData_1051408);
    nn_lmem_FreeToExpHeap_plt(SdkData_1051400, a1);
    return nn_os_UnlockMutex_plt(&SdkData_1051408);
  }
  return result;
}

#pragma GCC visibility pop
