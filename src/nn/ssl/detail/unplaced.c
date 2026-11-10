#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 SdkRoutine_5cbd20(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 SdkRoutine_5cbf70(_QWORD, _QWORD);
__int64 nn_lmem_AllocateFromExpHeap_plt_859a90(_QWORD, _QWORD);
__int64 nn_lmem_FreeToExpHeap_plt(_QWORD, _QWORD);
__int64 nn_os_LockMutex_plt(_QWORD);
__int64 nn_os_SdkConditionVariableType_Broadcast_plt(_QWORD);
__int64 nn_os_SdkMutexType_Lock_plt(_QWORD);
__int64 nn_os_SdkMutexType_Unlock_plt(_QWORD);
__int64 nn_os_UnlockMutex_plt(_QWORD);
__int64 nn_sf_hipc_client_DestroyDomainObject(__int64 result);
__int64 nn_sf_hipc_client_HipcClientSessionManager_ConvertToDomainImpl_plt(
    _QWORD, _QWORD, _QWORD);
__int64 nn_sf_impl_detail_ServiceObjectImplBase2_ReleaseImpl_plt(_QWORD);
extern __int64 SdkData_e88ee0;
__int64 nn_ssl_detail_5cb8d0(__int64 a1, __int64* a2, _QWORD* a3,
                             unsigned int a4);
__int64 nn_ssl_detail_5cb9e0(__int64 a1);
__int64 nn_ssl_detail_5cba40(__int64 a1, __int64* a2, unsigned int a3,
                             __int64 a4);

__int64 nn_ssl_detail_5cb8d0(__int64 a1, __int64* a2, _QWORD* a3,
                             unsigned int a4)
{
  __int64 result;
  int v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  int v15;

  v15 = 0;
  result = nn_sf_hipc_client_HipcClientSessionManager_ConvertToDomainImpl_plt(
      a1, &v15, a4);
  if ((_DWORD)result == 0) {
    v9 = v15;
    nn_os_LockMutex_plt(a3 + 1);
    v10 = nn_lmem_AllocateFromExpHeap_plt_859a90(*a3, 56);
    nn_os_UnlockMutex_plt(a3 + 1);
    if (v10 != 0) {
      *(_QWORD*)(v10 + 16) = a1;
      *(_DWORD*)(v10 + 24) = v9;
      *(_DWORD*)(v10 + 28) = 0;
      *(_DWORD*)(v10 + 40) = 1;
      *(_BYTE*)(v10 + 8) = 1;
      v11 = SdkData_e88ee0;
      *(_QWORD*)(v10 + 48) = a3;
      *(_QWORD*)v10 = v11 + 16;
      *(_QWORD*)(v10 + 32) = v11 + 200;
    }
    v12 = *a2;
    *a2 = v10;
    if (v12 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)v12 + 8LL))(v12);
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

__int64 nn_ssl_detail_5cb9e0(__int64 a1)
{
  __int64 result;
  _QWORD* v3;

  result = nn_sf_impl_detail_ServiceObjectImplBase2_ReleaseImpl_plt(a1 + 40);
  if ((result & 1) != 0) {
    v3 = *(_QWORD**)(a1 + 48);
    nn_sf_hipc_client_DestroyDomainObject(a1 + 8);
    nn_os_LockMutex_plt(v3 + 1);
    nn_lmem_FreeToExpHeap_plt(*v3, a1);
    return nn_os_UnlockMutex_plt(v3 + 1);
  }
  return result;
}

__int64 nn_ssl_detail_5cba40(__int64 a1, __int64* a2, unsigned int a3,
                             __int64 a4)
{
  __int64 v4;
  unsigned int v9;
  __int64 v10;
  __int64 v12;
  __int64* v13;
  __int64 v14;

  v4 = *(_QWORD*)(a1 + 48);
  v14 = 0;
  v12 = v4;
  v13 = &v14;
  SdkRoutine_5cbf70(&v12, 0);
  if (v13 == nullptr) {
    v9 = 5642;
    v10 = v14;
    if (v14 == 0) {
      return v9;
    }
    goto LABEL_3;
  }
  v12 = *a2;
  v9 = SdkRoutine_5cbd20(a1 + 8, &v12, a3, a4, 0, &v14);
  v10 = v14;
  if (v14 != 0) {
  LABEL_3:
    (*(void (**)(__int64))(*(_QWORD*)v10 + 8LL))(v10);
  }
  return v9;
}

#pragma GCC visibility pop
