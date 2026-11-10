#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 SdkRoutine_85fd80(_QWORD, _QWORD);
__int64 SdkRoutine_85fde0(_QWORD, _QWORD);
__int64 SdkRoutine_85fe00(_QWORD, _QWORD);
__int64 SdkRoutine_85fe20(_QWORD, _QWORD);
__int64 SdkRoutine_85fed0(_QWORD, _QWORD);
__int64
    nn_account_DeviceMigrationUserImporter_Destroy_DeviceMigrationUserImporter_plt(
        _QWORD);
__int64
    nn_account_DeviceMigrationUserImporter_DeviceMigrationUserImporter_plt_85fec0(
        _QWORD, _QWORD);
__int64
    nn_account_ExternalNetworkServiceAccountRegistrar_Destroy_ExternalNetworkServiceAccountRegistrar_plt(
        _QWORD);
__int64
    nn_account_ExternalNetworkServiceAccountRegistrar_ExternalNetworkServiceAccountRegistrar_plt_85fdd0(
        _QWORD, _QWORD);
__int64 nn_account_ProfileEditor_Destroy_ProfileEditor_plt(_QWORD);
__int64 nn_account_ProfileEditor_ProfileEditor_plt_85fd60(_QWORD, _QWORD,
                                                          _QWORD);
__int64 nn_account_ProfileEditor_Refresh_plt(_QWORD);
__int64
    nn_account_UserCreationProcedure_UserCreationProcedure_plt_85fe10(_QWORD,
                                                                      _QWORD);
__int64
    nn_account_UserRegistrationProcedure_UserRegistrationProcedure_plt_85fdf0(
        _QWORD, _QWORD);
__int64 nn_account_detail_GetAccountServiceObjectForAdministrator_plt(void);
__int64
nn_account_detail_GetAccountServiceObjectForSystemServiceWithProfileEditor_plt(
    void);
__int64
    nn_account_detail_OAuthProcedureBase_Destroy_OAuthProcedureBase_plt_85fa40(
        _QWORD);
__int64 nn_diag_detail_AbortImpl_plt_858db0(_QWORD);
__int64 nn_os_CloseNativeHandle_plt(_QWORD);
__int64 nn_os_CreateTransferMemory_plt(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 nn_os_DestroyTransferMemory_plt(_QWORD);
__int64 nn_os_DetachTransferMemory_plt(_QWORD);
__int64 nn_account_GetProfileEditor(__int64 a1, __int64 a2);
__int64 nn_account_CreateExternalNetworkServiceAccountRegistrar(void* this_,
                                                                void* a2,
                                                                void* a3);
__int64 nn_account_CreateProcedureToRegisterUser(__int64 a1, __int64 a2,
                                                 __int64 a3);
__int64 nn_account_ResumeProcedureToRegisterUser(__int64 a1, __int64* a2,
                                                 __int64 a3, __int64 a4);
__int64 nn_account_CreateProcedureToCreateUserLinkedWithNintendoAccount(
    __int64 a1, __int64 a2, __int64 a3);
__int64 nn_account_ResumeProcedureToCreateUserLinkedWithNintendoAccount(
    __int64 a1, __int64* a2, __int64 a3, __int64 a4);
__int64
nn_account_ResumeProcedureToCreateUserLinkedWithNintendoAccountAfterApplyResponse(
    __int64 a1, __int64* a2, __int64 a3, __int64 a4);
__int64 nn_account_CreateDeviceMigrationUserImporter_1ac8f0(__int64 a1,
                                                            __int64 a2,
                                                            __int64 a3);

__int64 nn_account_GetProfileEditor(__int64 a1, __int64 a2)
{
  __int64 v4;
  unsigned int v5;
  __int64 v6;
  _QWORD v8[27];
  __int64 v9;

  v9 = 0;
  v4 =
      nn_account_detail_GetAccountServiceObjectForSystemServiceWithProfileEditor_plt();
  v8[0] = &v9;
  v5 = (*(__int64 (**)(__int64, _QWORD*, __int64))(*(_QWORD*)v4 + 312LL))(
      v4, v8, a2);
  if (v5 == 0) {
    v6 = v9;
    memset(v8, 0, sizeof(v8));
    v9 = 0;
    nn_account_ProfileEditor_ProfileEditor_plt_85fd60(v8, a2, v6);
    v5 = nn_account_ProfileEditor_Refresh_plt(v8);
    if (v5 == 0) {
      SdkRoutine_85fd80(a1, v8);
    }
    nn_account_ProfileEditor_Destroy_ProfileEditor_plt(v8);
  }
  if (v9 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v9 + 8LL))(v9);
  }
  return v5;
}

__int64 nn_account_CreateExternalNetworkServiceAccountRegistrar(void* this_,
                                                                void* a2,
                                                                void* a3)
{
  unsigned int v4;
  __int64 v5;
  unsigned int v6;
  unsigned int v7;
  __int64 v8;
  __int64 v10;
  struct {
    unsigned int v11;
    char v12;
  } v11_;
  __int64 v13;
  _QWORD v14[8];
  __int64* v15;

  v4 = (unsigned int)a3;
  memset(v14, 0, sizeof(v14));
  LODWORD(v15) = nn_os_CreateTransferMemory_plt(v14, a2, a3, 0);
  if ((_DWORD)v15 != 0) {
    nn_diag_detail_AbortImpl_plt_858db0(&v15);
  }
  v13 = 0;
  v5 = nn_account_detail_GetAccountServiceObjectForAdministrator_plt();
  v11_.v11 = nn_os_DetachTransferMemory_plt(v14);
  v11_.v12 = 1;
  v15 = &v13;
  v6 = (*(__int64 (**)(__int64, __int64**, unsigned int*, _QWORD))(
      *(_QWORD*)v5 + 368LL))(v5, &v15, &v11_.v11, v4);
  v7 = v6;
  if (v11_.v12 == 1) {
    nn_os_CloseNativeHandle_plt(v11_.v11);
    if (v7 != 0) {
    LABEL_4:
      v8 = v13;
      if (v13 == 0) {
        goto LABEL_6;
      }
      goto LABEL_5;
    }
  }
  else if (v6 != 0) {
    goto LABEL_4;
  }
  v10 = v13;
  v13 = 0;
  nn_account_ExternalNetworkServiceAccountRegistrar_ExternalNetworkServiceAccountRegistrar_plt_85fdd0(
      &v15, v10);
  SdkRoutine_85fde0(this_, &v15);
  nn_account_ExternalNetworkServiceAccountRegistrar_Destroy_ExternalNetworkServiceAccountRegistrar_plt(
      &v15);
  v8 = v13;
  if (v13 != 0) {
  LABEL_5:
    (*(void (**)(__int64))(*(_QWORD*)v8 + 8LL))(v8);
  }
LABEL_6:
  if (LOBYTE(v14[0]) != 0) {
    nn_os_DestroyTransferMemory_plt(v14);
  }
  return v7;
}

__int64 nn_account_CreateProcedureToRegisterUser(__int64 a1, __int64 a2,
                                                 __int64 a3)
{
  unsigned int v4;
  __int64 v5;
  unsigned int v6;
  unsigned int v7;
  __int64 v8;
  __int64 v10;
  _QWORD v11[4];
  unsigned int v12;
  char v13;
  _QWORD v14[8];
  __int64 v15;

  v4 = a3;
  memset(v14, 0, sizeof(v14));
  LODWORD(v11[0]) = nn_os_CreateTransferMemory_plt(v14, a2, a3, 0);
  if (LODWORD(v11[0]) != 0) {
    nn_diag_detail_AbortImpl_plt_858db0(v11);
    __udf(0);
  }
  v15 = 0;
  v5 = nn_account_detail_GetAccountServiceObjectForAdministrator_plt();
  v12 = nn_os_DetachTransferMemory_plt(v14);
  v13 = 1;
  v11[0] = &v15;
  v6 = (*(__int64 (**)(__int64, _QWORD*, unsigned int*, _QWORD))(
      *(_QWORD*)v5 + 376LL))(v5, v11, &v12, v4);
  v7 = v6;
  if (v13 == 1) {
    nn_os_CloseNativeHandle_plt(v12);
    if (v7 != 0) {
    LABEL_4:
      v8 = v15;
      if (v15 == 0) {
        goto LABEL_6;
      }
      goto LABEL_5;
    }
  }
  else if (v6 != 0) {
    goto LABEL_4;
  }
  v10 = v15;
  v15 = 0;
  nn_account_UserRegistrationProcedure_UserRegistrationProcedure_plt_85fdf0(
      v11, v10);
  SdkRoutine_85fe00(a1, v11);
  nn_account_detail_OAuthProcedureBase_Destroy_OAuthProcedureBase_plt_85fa40(
      v11);
  v8 = v15;
  if (v15 != 0) {
  LABEL_5:
    (*(void (**)(__int64))(*(_QWORD*)v8 + 8LL))(v8);
  }
LABEL_6:
  if (LOBYTE(v14[0]) != 0) {
    nn_os_DestroyTransferMemory_plt(v14);
  }
  return v7;
}

__int64 nn_account_ResumeProcedureToRegisterUser(__int64 a1, __int64* a2,
                                                 __int64 a3, __int64 a4)
{
  unsigned int v5;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  unsigned int v10;
  __int64 v11;
  __int64 v13;
  _QWORD v14[4];
  unsigned int v15;
  char v16;
  _QWORD v17[2];
  _QWORD v18[8];
  __int64 v19;

  v5 = a4;
  memset(v18, 0, sizeof(v18));
  LODWORD(v14[0]) = nn_os_CreateTransferMemory_plt(v18, a3, a4, 0);
  if (LODWORD(v14[0]) != 0) {
    nn_diag_detail_AbortImpl_plt_858db0(v14);
    __udf(0);
  }
  v7 = *a2;
  v8 = a2[1];
  v19 = 0;
  v17[0] = v7;
  v17[1] = v8;
  v9 = nn_account_detail_GetAccountServiceObjectForAdministrator_plt();
  v15 = nn_os_DetachTransferMemory_plt(v18);
  v16 = 1;
  v14[0] = &v19;
  v10 = (*(__int64 (**)(__int64, _QWORD*, _QWORD*, unsigned int*, _QWORD))(
      *(_QWORD*)v9 + 384LL))(v9, v14, v17, &v15, v5);
  if (v16 == 1) {
    nn_os_CloseNativeHandle_plt(v15);
    if (v10 != 0) {
    LABEL_4:
      v11 = v19;
      if (v19 == 0) {
        goto LABEL_6;
      }
      goto LABEL_5;
    }
  }
  else if (v10 != 0) {
    goto LABEL_4;
  }
  v13 = v19;
  v19 = 0;
  nn_account_UserRegistrationProcedure_UserRegistrationProcedure_plt_85fdf0(
      v14, v13);
  SdkRoutine_85fe00(a1, v14);
  nn_account_detail_OAuthProcedureBase_Destroy_OAuthProcedureBase_plt_85fa40(
      v14);
  v11 = v19;
  if (v19 != 0) {
  LABEL_5:
    (*(void (**)(__int64))(*(_QWORD*)v11 + 8LL))(v11);
  }
LABEL_6:
  if (LOBYTE(v18[0]) != 0) {
    nn_os_DestroyTransferMemory_plt(v18);
  }
  return v10;
}

__int64 nn_account_CreateProcedureToCreateUserLinkedWithNintendoAccount(
    __int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v4;
  __int64 v5;
  unsigned int v6;
  unsigned int v7;
  __int64 v8;
  __int64 v10;
  _QWORD v11[4];
  unsigned int v12;
  char v13;
  _QWORD v14[8];
  __int64 v15;

  v4 = a3;
  memset(v14, 0, sizeof(v14));
  LODWORD(v11[0]) = nn_os_CreateTransferMemory_plt(v14, a2, a3, 0);
  if (LODWORD(v11[0]) != 0) {
    nn_diag_detail_AbortImpl_plt_858db0(v11);
    __udf(0);
  }
  v15 = 0;
  v5 = nn_account_detail_GetAccountServiceObjectForAdministrator_plt();
  v12 = nn_os_DetachTransferMemory_plt(v14);
  v13 = 1;
  v11[0] = &v15;
  v6 = (*(__int64 (**)(__int64, _QWORD*, unsigned int*, _QWORD))(
      *(_QWORD*)v5 + 376LL))(v5, v11, &v12, v4);
  v7 = v6;
  if (v13 == 1) {
    nn_os_CloseNativeHandle_plt(v12);
    if (v7 != 0) {
    LABEL_4:
      v8 = v15;
      if (v15 == 0) {
        goto LABEL_6;
      }
      goto LABEL_5;
    }
  }
  else if (v6 != 0) {
    goto LABEL_4;
  }
  v10 = v15;
  v15 = 0;
  nn_account_UserCreationProcedure_UserCreationProcedure_plt_85fe10(v11, v10);
  SdkRoutine_85fe20(a1, v11);
  nn_account_detail_OAuthProcedureBase_Destroy_OAuthProcedureBase_plt_85fa40(
      v11);
  v8 = v15;
  if (v15 != 0) {
  LABEL_5:
    (*(void (**)(__int64))(*(_QWORD*)v8 + 8LL))(v8);
  }
LABEL_6:
  if (LOBYTE(v14[0]) != 0) {
    nn_os_DestroyTransferMemory_plt(v14);
  }
  return v7;
}

__int64 nn_account_ResumeProcedureToCreateUserLinkedWithNintendoAccount(
    __int64 a1, __int64* a2, __int64 a3, __int64 a4)
{
  unsigned int v5;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  unsigned int v10;
  __int64 v11;
  __int64 v13;
  _QWORD v14[4];
  unsigned int v15;
  char v16;
  _QWORD v17[2];
  _QWORD v18[8];
  __int64 v19;

  v5 = a4;
  memset(v18, 0, sizeof(v18));
  LODWORD(v14[0]) = nn_os_CreateTransferMemory_plt(v18, a3, a4, 0);
  if (LODWORD(v14[0]) != 0) {
    nn_diag_detail_AbortImpl_plt_858db0(v14);
    __udf(0);
  }
  v7 = *a2;
  v8 = a2[1];
  v19 = 0;
  v17[0] = v7;
  v17[1] = v8;
  v9 = nn_account_detail_GetAccountServiceObjectForAdministrator_plt();
  v15 = nn_os_DetachTransferMemory_plt(v18);
  v16 = 1;
  v14[0] = &v19;
  v10 = (*(__int64 (**)(__int64, _QWORD*, _QWORD*, unsigned int*, _QWORD))(
      *(_QWORD*)v9 + 400LL))(v9, v14, v17, &v15, v5);
  if (v16 == 1) {
    nn_os_CloseNativeHandle_plt(v15);
    if (v10 != 0) {
    LABEL_4:
      v11 = v19;
      if (v19 == 0) {
        goto LABEL_6;
      }
      goto LABEL_5;
    }
  }
  else if (v10 != 0) {
    goto LABEL_4;
  }
  v13 = v19;
  v19 = 0;
  nn_account_UserCreationProcedure_UserCreationProcedure_plt_85fe10(v14, v13);
  SdkRoutine_85fe20(a1, v14);
  nn_account_detail_OAuthProcedureBase_Destroy_OAuthProcedureBase_plt_85fa40(
      v14);
  v11 = v19;
  if (v19 != 0) {
  LABEL_5:
    (*(void (**)(__int64))(*(_QWORD*)v11 + 8LL))(v11);
  }
LABEL_6:
  if (LOBYTE(v18[0]) != 0) {
    nn_os_DestroyTransferMemory_plt(v18);
  }
  return v10;
}

__int64

nn_account_ResumeProcedureToCreateUserLinkedWithNintendoAccountAfterApplyResponse(
    __int64 a1, __int64* a2, __int64 a3, __int64 a4)
{
  unsigned int v5;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  unsigned int v10;
  __int64 v11;
  __int64 v13;
  _QWORD v14[4];
  unsigned int v15;
  char v16;
  _QWORD v17[2];
  _QWORD v18[8];
  __int64 v19;

  v5 = a4;
  memset(v18, 0, sizeof(v18));
  LODWORD(v14[0]) = nn_os_CreateTransferMemory_plt(v18, a3, a4, 0);
  if (LODWORD(v14[0]) != 0) {
    nn_diag_detail_AbortImpl_plt_858db0(v14);
    __udf(0);
  }
  v7 = *a2;
  v8 = a2[1];
  v19 = 0;
  v17[0] = v7;
  v17[1] = v8;
  v9 = nn_account_detail_GetAccountServiceObjectForAdministrator_plt();
  v15 = nn_os_DetachTransferMemory_plt(v18);
  v16 = 1;
  v14[0] = &v19;
  v10 = (*(__int64 (**)(__int64, _QWORD*, _QWORD*, unsigned int*, _QWORD))(
      *(_QWORD*)v9 + 408LL))(v9, v14, v17, &v15, v5);
  if (v16 == 1) {
    nn_os_CloseNativeHandle_plt(v15);
    if (v10 != 0) {
    LABEL_4:
      v11 = v19;
      if (v19 == 0) {
        goto LABEL_6;
      }
      goto LABEL_5;
    }
  }
  else if (v10 != 0) {
    goto LABEL_4;
  }
  v13 = v19;
  v19 = 0;
  nn_account_UserCreationProcedure_UserCreationProcedure_plt_85fe10(v14, v13);
  SdkRoutine_85fe20(a1, v14);
  nn_account_detail_OAuthProcedureBase_Destroy_OAuthProcedureBase_plt_85fa40(
      v14);
  v11 = v19;
  if (v19 != 0) {
  LABEL_5:
    (*(void (**)(__int64))(*(_QWORD*)v11 + 8LL))(v11);
  }
LABEL_6:
  if (LOBYTE(v18[0]) != 0) {
    nn_os_DestroyTransferMemory_plt(v18);
  }
  return v10;
}

__int64 nn_account_CreateDeviceMigrationUserImporter_1ac8f0(__int64 a1,
                                                            __int64 a2,
                                                            __int64 a3)
{
  unsigned int v4;
  __int64 result;
  __int64 v6;
  unsigned int v7;
  _QWORD* v8;
  _QWORD* v9;
  unsigned int v10;
  int v11;
  _QWORD v12[8];
  _QWORD** v13;

  v4 = a3;
  memset(v12, 0, sizeof(v12));
  result = nn_os_CreateTransferMemory_plt(v12, a2, a3, 0);
  if ((_DWORD)result == 0) {
    v11 = 1;
    v10 = nn_os_DetachTransferMemory_plt(v12);
    v9 = nullptr;
    v6 = nn_account_detail_GetAccountServiceObjectForAdministrator_plt();
    v13 = &v9;
    result = (*(__int64 (**)(__int64, _QWORD***, unsigned int*, _QWORD))(
        *(_QWORD*)v6 + 496LL))(v6, &v13, &v10, v4);
    v7 = result;
    if ((_DWORD)result == 0) {
      v8 = v9;
      v9 = nullptr;
      nn_account_DeviceMigrationUserImporter_DeviceMigrationUserImporter_plt_85fec0(
          &v13, v8);
      SdkRoutine_85fed0(a1, &v13);
      nn_account_DeviceMigrationUserImporter_Destroy_DeviceMigrationUserImporter_plt(
          &v13);
      result = 0;
    }
    if (v9 != nullptr) {
      (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, _QWORD*))(*v9 + 8LL))(
          (void*)v9, v9);
      result = v7;
    }
    if ((unsigned __int8)v11 == 1) {
      nn_os_CloseNativeHandle_plt(v10);
      return v7;
    }
  }
  return result;
}

#pragma GCC visibility pop
