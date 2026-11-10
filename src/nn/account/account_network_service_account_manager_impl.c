#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 SdkRoutine_860020(_QWORD, _QWORD);
__int64 SdkRoutine_860060(_QWORD, _QWORD);
__int64
    nn_account_NetworkServiceAccountDeviceHistoryRequestContext_Destroy_NetworkServiceAccountDeviceHistoryRequestContext_plt(
        _QWORD);
__int64 nn_account_NetworkServiceAccountDeviceHistoryRequestContext_Invoke_plt(
    _QWORD);
__int64
    nn_account_NetworkServiceAccountDeviceHistoryRequestContext_NetworkServiceAccountDeviceHistoryRequestContext_plt_860040(
        _QWORD, _QWORD, _QWORD);
__int64
    nn_account_NintendoAccountAuthorizationRequestContext_Destroy_NintendoAccountAuthorizationRequestContext_plt(
        _QWORD);
__int64
    nn_account_NintendoAccountAuthorizationRequestContext_Invoke_plt(_QWORD);
__int64
    nn_account_NintendoAccountAuthorizationRequestContext_NintendoAccountAuthorizationRequestContext_plt_860000(
        _QWORD, _QWORD, _QWORD);
__int64 nn_diag_detail_AbortImpl_plt_858db0(_QWORD);
__int64 nn_os_CloseNativeHandle_plt(_QWORD);
__int64 nn_os_CreateTransferMemory_plt(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 nn_os_DestroyTransferMemory_plt(_QWORD);
__int64 nn_os_DetachTransferMemory_plt(_QWORD);
__int64 strncpy_plt(_QWORD, _QWORD, _QWORD);
__int64
nn_account_NetworkServiceAccountManager_CreateNintendoAccountAuthorizationRequest(
    __int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6,
    __int64 a7, __int64 a8);
__int64
nn_account_NetworkServiceAccountManager_DebugCreateNintendoAccountAuthorizationRequest(
    __int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6,
    __int64 a7, __int64 a8);
__int64
nn_account_NetworkServiceAccountManager_CreateNetworkServiceAccountDeviceHistoryRequest(
    __int64 a1, __int64 a2, __int64 a3, __int64 a4);
__int64
nn_account_NetworkServiceAccountAdministrator_DebugSetNetworkServiceAccountAvailabilityError(
    __int64 a1, int a2);
__int64

nn_account_NetworkServiceAccountManager_CreateNintendoAccountAuthorizationRequest(
    __int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6,
    __int64 a7, __int64 a8)
{
  __int64 v13;
  unsigned int v14;
  __int64 v15;
  __int64 v17;
  _QWORD v18[7];
  unsigned int v19;
  char v20;
  __int64 v21;
  _QWORD v22[8];
  __int64 v23;
  _BYTE v24[256];

  v23 = a3;
  strncpy_plt(v24, a4, 256);
  v24[255] = 0;
  memset(v22, 0, sizeof(v22));
  LODWORD(v18[0]) = nn_os_CreateTransferMemory_plt(v22, a7, a8, 3);
  if (LODWORD(v18[0]) != 0) {
    nn_diag_detail_AbortImpl_plt_858db0(v18);
    __udf(0);
  }
  v13 = *(_QWORD*)(a1 + 24);
  v21 = 0;
  v19 = nn_os_DetachTransferMemory_plt(v22);
  v20 = 1;
  v18[0] = &v21;
  v14 = (*(__int64 (**)(__int64, _QWORD*, __int64*, __int64, unsigned int*,
                        _QWORD))(*(_QWORD*)v13 + 216LL))(
      v13, v18, &v23, a6, &v19, (unsigned int)a8);
  if (v20 == 1) {
    nn_os_CloseNativeHandle_plt(v19);
    if (v14 != 0) {
    LABEL_4:
      v15 = v21;
      if (v21 == 0) {
        goto LABEL_6;
      }
      goto LABEL_5;
    }
  }
  else if (v14 != 0) {
    goto LABEL_4;
  }
  v17 = v21;
  memset(v18, 0, sizeof(v18));
  v21 = 0;
  nn_account_NintendoAccountAuthorizationRequestContext_NintendoAccountAuthorizationRequestContext_plt_860000(
      v18, v17, a1 + 8);
  v14 = nn_account_NintendoAccountAuthorizationRequestContext_Invoke_plt(v18);
  if (v14 == 0) {
    SdkRoutine_860020(a2, v18);
  }
  nn_account_NintendoAccountAuthorizationRequestContext_Destroy_NintendoAccountAuthorizationRequestContext_plt(
      v18);
  v15 = v21;
  if (v21 != 0) {
  LABEL_5:
    (*(void (**)(__int64))(*(_QWORD*)v15 + 8LL))(v15);
  }
LABEL_6:
  if (LOBYTE(v22[0]) != 0) {
    nn_os_DestroyTransferMemory_plt(v22);
  }
  return v14;
}

__int64

nn_account_NetworkServiceAccountManager_DebugCreateNintendoAccountAuthorizationRequest(
    __int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6,
    __int64 a7, __int64 a8)
{
  __int64 v13;
  unsigned int v14;
  __int64 v15;
  __int64 v17;
  _QWORD v18[7];
  unsigned int v19;
  char v20;
  __int64 v21;
  _QWORD v22[8];
  __int64 v23;
  _BYTE v24[256];

  v23 = a3;
  strncpy_plt(v24, a4, 256);
  v24[255] = 0;
  memset(v22, 0, sizeof(v22));
  LODWORD(v18[0]) = nn_os_CreateTransferMemory_plt(v22, a7, a8, 3);
  if (LODWORD(v18[0]) != 0) {
    nn_diag_detail_AbortImpl_plt_858db0(v18);
    __udf(0);
  }
  v13 = *(_QWORD*)(a1 + 24);
  v21 = 0;
  v19 = nn_os_DetachTransferMemory_plt(v22);
  v20 = 1;
  v18[0] = &v21;
  v14 = (*(__int64 (**)(__int64, _QWORD*, __int64*, __int64, unsigned int*,
                        _QWORD))(*(_QWORD*)v13 + 216LL))(
      v13, v18, &v23, a6, &v19, (unsigned int)a8);
  if (v20 == 1) {
    nn_os_CloseNativeHandle_plt(v19);
    if (v14 != 0) {
    LABEL_4:
      v15 = v21;
      if (v21 == 0) {
        goto LABEL_6;
      }
      goto LABEL_5;
    }
  }
  else if (v14 != 0) {
    goto LABEL_4;
  }
  v17 = v21;
  memset(v18, 0, sizeof(v18));
  v21 = 0;
  nn_account_NintendoAccountAuthorizationRequestContext_NintendoAccountAuthorizationRequestContext_plt_860000(
      v18, v17, a1 + 8);
  SdkRoutine_860020(a2, v18);
  nn_account_NintendoAccountAuthorizationRequestContext_Destroy_NintendoAccountAuthorizationRequestContext_plt(
      v18);
  v15 = v21;
  if (v21 != 0) {
  LABEL_5:
    (*(void (**)(__int64))(*(_QWORD*)v15 + 8LL))(v15);
  }
LABEL_6:
  if (LOBYTE(v22[0]) != 0) {
    nn_os_DestroyTransferMemory_plt(v22);
  }
  return v14;
}

__int64

nn_account_NetworkServiceAccountManager_CreateNetworkServiceAccountDeviceHistoryRequest(
    __int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v7;
  unsigned int v8;
  unsigned int v9;
  __int64 v10;
  __int64 v12;
  _QWORD v13[7];
  unsigned int v14;
  char v15;
  __int64 v16;
  _QWORD v17[8];

  memset(v17, 0, sizeof(v17));
  LODWORD(v13[0]) = nn_os_CreateTransferMemory_plt(v17, a3, a4, 3);
  if (LODWORD(v13[0]) != 0) {
    nn_diag_detail_AbortImpl_plt_858db0(v13);
    __udf(0);
  }
  v7 = *(_QWORD*)(a1 + 24);
  v16 = 0;
  v14 = nn_os_DetachTransferMemory_plt(v17);
  v15 = 1;
  v13[0] = &v16;
  v8 = (*(__int64 (**)(__int64, _QWORD*, unsigned int*, __int64))(
      *(_QWORD*)v7 + 240LL))(v7, v13, &v14, a4);
  v9 = v8;
  if (v15 == 1) {
    nn_os_CloseNativeHandle_plt(v14);
    if (v9 != 0) {
    LABEL_4:
      v10 = v16;
      if (v16 == 0) {
        goto LABEL_6;
      }
      goto LABEL_5;
    }
  }
  else if (v8 != 0) {
    goto LABEL_4;
  }
  v12 = v16;
  memset(v13, 0, sizeof(v13));
  v16 = 0;
  nn_account_NetworkServiceAccountDeviceHistoryRequestContext_NetworkServiceAccountDeviceHistoryRequestContext_plt_860040(
      v13, v12, a1 + 8);
  v9 = nn_account_NetworkServiceAccountDeviceHistoryRequestContext_Invoke_plt(
      v13);
  if (v9 == 0) {
    SdkRoutine_860060(a2, v13);
  }
  nn_account_NetworkServiceAccountDeviceHistoryRequestContext_Destroy_NetworkServiceAccountDeviceHistoryRequestContext_plt(
      v13);
  v10 = v16;
  if (v16 != 0) {
  LABEL_5:
    (*(void (**)(__int64))(*(_QWORD*)v10 + 8LL))(v10);
  }
LABEL_6:
  if (LOBYTE(v17[0]) != 0) {
    nn_os_DestroyTransferMemory_plt(v17);
  }
  return v9;
}

__int64

nn_account_NetworkServiceAccountAdministrator_DebugSetNetworkServiceAccountAvailabilityError(
    __int64 a1, int a2)
{
  __int64 v2;

  if (a2 == 0) {
    return 5756;
  }
  v2 = *(_QWORD*)&a2 & 0x3FFFFFLL;
  if ((*(_QWORD*)&a2 & 0x3FFFFFuLL) <= 0x1E27B) {
    if ((*(_QWORD*)&a2 & 0x3FFFFFuLL) <= 0x1A87B) {
      if (v2 != 107644) {
        if (v2 == 108156) {
          return (*(__int64 (**)(_QWORD, __int64))(
              **(_QWORD**)(a1 + 24) + 464LL))(*(_QWORD*)(a1 + 24), 2);
        }
        return 5756;
      }
      return (*(__int64 (**)(_QWORD, __int64))(**(_QWORD**)(a1 + 24) + 464LL))(
          *(_QWORD*)(a1 + 24), 1);
    }
    else {
      switch (v2) {
      case 108668LL:
        return (*(__int64 (**)(_QWORD, __int64))(
            **(_QWORD**)(a1 + 24) + 464LL))(*(_QWORD*)(a1 + 24), 3);
      case 117884LL:
        return (*(__int64 (**)(_QWORD, __int64))(
            **(_QWORD**)(a1 + 24) + 464LL))(*(_QWORD*)(a1 + 24), 257);
      case 123004LL:
        return (*(__int64 (**)(_QWORD, __int64))(
            **(_QWORD**)(a1 + 24) + 464LL))(*(_QWORD*)(a1 + 24), 513);
      default:
        return 5756;
      }
    }
  }
  else if ((*(_QWORD*)&a2 & 0x3FFFFFuLL) > 0x1E87B) {
    switch (v2) {
    case 125052LL:
      return (*(__int64 (**)(_QWORD, __int64))(**(_QWORD**)(a1 + 24) + 464LL))(
          *(_QWORD*)(a1 + 24), 517);
    case 125564LL:
      return (*(__int64 (**)(_QWORD, __int64))(**(_QWORD**)(a1 + 24) + 464LL))(
          *(_QWORD*)(a1 + 24), 518);
    case 132732LL:
      return (*(__int64 (**)(_QWORD, __int64))(**(_QWORD**)(a1 + 24) + 464LL))(
          *(_QWORD*)(a1 + 24), 519);
    default:
      return 5756;
    }
  }
  else {
    switch (v2) {
    case 123516LL:
      return (*(__int64 (**)(_QWORD, __int64))(**(_QWORD**)(a1 + 24) + 464LL))(
          *(_QWORD*)(a1 + 24), 514);
    case 124028LL:
      return (*(__int64 (**)(_QWORD, __int64))(**(_QWORD**)(a1 + 24) + 464LL))(
          *(_QWORD*)(a1 + 24), 515);
    case 124540LL:
      return (*(__int64 (**)(_QWORD, __int64))(**(_QWORD**)(a1 + 24) + 464LL))(
          *(_QWORD*)(a1 + 24), 516);
    default:
      return 5756;
    }
  }
}

#pragma GCC visibility pop
