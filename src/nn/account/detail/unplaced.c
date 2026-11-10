#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 fw_rtld_RegisterCrtDestructor();
__int64 nn_account_detail_ClientUserHandleStore_Clear_plt(_QWORD);
__int64 nn_account_detail_ObjectHolder_AcquireForApplication_plt(_QWORD);
__int64 nn_account_detail_ObjectHolder_GetForApplication_plt(_QWORD);
__int64 nn_account_detail_ObjectHolder_ObjectHolder_plt(_QWORD);
__int64 nn_applet_GetStorageSize_plt(_QWORD);
__int64 nn_applet_ReadFromStorage_plt(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 nn_applet_ReleaseStorage_plt(_QWORD);
__int64 nn_applet_TryPopFromApplicationParameterChannel_plt(_QWORD, _QWORD);
__int64 nn_diag_detail_AbortImpl_plt_856170(_QWORD);
__int64 nn_diag_detail_AbortImpl_plt_858db0(_QWORD);
__int64 nn_lmem_FreeToExpHeap_plt(_QWORD, _QWORD);
__int64 nn_os_LockMutex_plt(_QWORD);
__int64 nn_os_SdkMutexType_Lock_plt(_QWORD);
__int64 nn_os_SdkMutexType_Unlock_plt(_QWORD);
__int64 nn_os_UnlockMutex_plt(_QWORD);
__int64 nn_sf_hipc_client_DestroyDomainObject(__int64 result);
__int64 nn_sf_impl_detail_ServiceObjectImplBase2_ReleaseImpl_plt(_QWORD);
extern _UNKNOWN SdkData_ea1b84;
extern _UNKNOWN SdkData_ebb738;
extern _UNKNOWN SdkData_ebb8b8;
extern __int64 SdkData_ebb720;
extern __int64 SdkData_ebb728;
extern __int64 SdkData_ebb730;
extern __int64 SdkData_ebb8b0;
extern int SdkData_ea1b80;
__int64 nn_account_detail_InitializeForApplication(void* this_);
__int64 nn_account_detail_InitializeForMicroApplication();
__int64 nn_account_detail_1b53c0();
__int64 nn_account_detail_1b5f30(__int64 a1);

__int64 nn_account_detail_InitializeForApplication(void* this_)
{
  __int64 v1;
  int v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  unsigned __int64 v6;
  __int64 v7;
  int v9;
  struct {
    __int64 v10;
    __int64 v11;
    __int64 v12;
    __int64 v13;
    __int64 v14;
    __int64 v15;
    __int64 v16;
    __int64 v17;
    __int64 v18;
    __int64 v19;
    __int64 v20;
    __int64 v21;
    __int64 v22;
    __int64 v23;
    __int64 v24;
    __int64 v25;
    __int64 v26;
  } v10_;
  __int64 v27;

  v1 = nn_os_SdkMutexType_Lock_plt(&SdkData_ea1b84);
  v2 = SdkData_ea1b80;
  if (SdkData_ea1b80 != 0) {
    if (SdkData_ea1b80 == -1) {
      nn_diag_detail_AbortImpl_plt_856170(v1);
    }
  }
  else {
    nn_account_detail_ClientUserHandleStore_Clear_plt(v1);
    LODWORD(v10_.v10) =
        nn_account_detail_ObjectHolder_AcquireForApplication_plt(
            &SdkData_ebb738);
    if ((_DWORD)v10_.v10 != 0) {
      nn_diag_detail_AbortImpl_plt_858db0(&v10_.v10);
    }
    v3 = nn_account_detail_ObjectHolder_GetForApplication_plt(&SdkData_ebb738);
    LODWORD(v10_.v10) =
        (*(__int64 (**)(__int64, _QWORD))(*(_QWORD*)v3 + 216LL))(v3, 0);
    if ((_DWORD)v10_.v10 != 0) {
      nn_diag_detail_AbortImpl_plt_858db0(&v10_.v10);
    }
    v27 = 0;
    v4 = 0;
    v5 = 0;
    if ((nn_applet_TryPopFromApplicationParameterChannel_plt(&v27, 2) & 1) !=
        0) {
      v6 = nn_applet_GetStorageSize_plt(v27);
      if (v6 <= 0x87) {
        nn_diag_detail_AbortImpl_plt_856170(v6);
      }
      v10_.v26 = 0;
      v10_.v24 = 0;
      v10_.v25 = 0;
      v10_.v22 = 0;
      v10_.v23 = 0;
      v10_.v20 = 0;
      v10_.v21 = 0;
      v10_.v18 = 0;
      v10_.v19 = 0;
      v10_.v16 = 0;
      v10_.v17 = 0;
      v10_.v14 = 0;
      v10_.v15 = 0;
      v10_.v12 = 0;
      v10_.v13 = 0;
      v10_.v10 = 0;
      v10_.v11 = 0;
      v7 = nn_applet_ReadFromStorage_plt(v27, 0, &v10_.v10, 136);
      v9 = v7;
      if ((_DWORD)v7 != 0) {
        nn_diag_detail_AbortImpl_plt_858db0(&v9);
      }
      if ((_DWORD)v10_.v10 != -946563126) {
        nn_diag_detail_AbortImpl_plt_856170(v7);
      }
      if (BYTE4(v10_.v10) != 1) {
        nn_diag_detail_AbortImpl_plt_856170(v7);
      }
      v4 = v10_.v11;
      v5 = v10_.v12;
      nn_applet_ReleaseStorage_plt(v27);
    }
    SdkData_ebb720 = v4;
    SdkData_ebb728 = v5;
    LODWORD(v10_.v10) = (*(__int64 (**)(__int64, __int64*))(
        *(_QWORD*)v3 + 208LL))(v3, &SdkData_ebb730);
    if ((_DWORD)v10_.v10 != 0) {
      nn_diag_detail_AbortImpl_plt_858db0(&v10_.v10);
    }
    v2 = SdkData_ea1b80;
  }
  SdkData_ea1b80 = v2 + 1;
  return nn_os_SdkMutexType_Unlock_plt(&SdkData_ea1b84);
}

__int64 nn_account_detail_InitializeForMicroApplication()
{
  __int64 v0;
  int v1;
  __int64 v2;
  int v4;
  int v5;
  int v6;

  v0 = nn_os_SdkMutexType_Lock_plt(&SdkData_ea1b84);
  v1 = SdkData_ea1b80;
  if (SdkData_ea1b80 != 0) {
    if (SdkData_ea1b80 == -1) {
      nn_diag_detail_AbortImpl_plt_856170(v0);
    }
  }
  else {
    nn_account_detail_ClientUserHandleStore_Clear_plt(v0);
    v6 = nn_account_detail_ObjectHolder_AcquireForApplication_plt(
        &SdkData_ebb738);
    if (v6 != 0) {
      nn_diag_detail_AbortImpl_plt_858db0(&v6);
    }
    v2 = nn_account_detail_ObjectHolder_GetForApplication_plt(&SdkData_ebb738);
    v5 = (*(__int64 (**)(__int64, _QWORD))(*(_QWORD*)v2 + 216LL))(v2, 0);
    if (v5 != 0) {
      nn_diag_detail_AbortImpl_plt_858db0(&v5);
    }
    v4 = (*(__int64 (**)(__int64, __int64*))(*(_QWORD*)v2 + 208LL))(
        v2, &SdkData_ebb730);
    if (v4 != 0) {
      nn_diag_detail_AbortImpl_plt_858db0(&v4);
    }
    v1 = SdkData_ea1b80;
  }
  SdkData_ea1b80 = v1 + 1;
  return nn_os_SdkMutexType_Unlock_plt(&SdkData_ea1b84);
}

__int64 nn_account_detail_1b53c0()
{
  nn_account_detail_ObjectHolder_ObjectHolder_plt(&SdkData_ebb738);
  return fw_rtld_RegisterCrtDestructor();
}

__int64 nn_account_detail_1b5f30(__int64 a1)
{
  __int64 result;

  result = nn_sf_impl_detail_ServiceObjectImplBase2_ReleaseImpl_plt(a1 + 40);
  if ((result & 1) != 0) {
    nn_sf_hipc_client_DestroyDomainObject(a1 + 8);
    nn_os_LockMutex_plt(&SdkData_ebb8b8);
    nn_lmem_FreeToExpHeap_plt(SdkData_ebb8b0, a1);
    return nn_os_UnlockMutex_plt(&SdkData_ebb8b8);
  }
  return result;
}

#pragma GCC visibility pop
