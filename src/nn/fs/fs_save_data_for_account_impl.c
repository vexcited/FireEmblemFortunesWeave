#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_am_GetApplicationFunctions_plt(_QWORD);
__int64 nn_diag_detail_AbortImpl_plt_858db0(_QWORD);
__int64 nn_err_ShowError_plt_868bb0(_QWORD);
__int64 nn_fs_CheckUid_plt(_QWORD);
__int64 nn_fs_ExtendDeviceSaveData(__int64*);
__int64 nn_fs_detail_EnsureApplicationDeviceSaveData_plt(_QWORD, _QWORD);
__int64 nn_fs_detail_IsAbortNeeded_plt(_QWORD);
__int64 nn_fs_detail_IsEnabledAccessLog_plt_85a3e0(_QWORD, _QWORD);
__int64 nn_fs_detail_IsEnabledHandleAccessLog_plt_85a9a0(_QWORD);
__int64 nn_fs_detail_LogResultErrorMessage_plt(_QWORD, _QWORD);
__int64 nn_fs_detail_OutputAccessLog_plt_85a860(_QWORD, _QWORD, _QWORD, _QWORD,
                                                _QWORD, const char*, ...);
__int64 nn_la_CommonArgumentsWriter_CommonArgumentsWriter_plt_85fb00(_QWORD,
                                                                     _QWORD);
__int64 nn_la_CommonArgumentsWriter_Destroy_CommonArgumentsWriter_plt(_QWORD);
__int64 nn_la_StartLibraryAppletEasy_plt(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                                         _QWORD, _QWORD, _QWORD);
__int64 nn_os_GetSystemTick_plt(_QWORD);
__int64 nn_fs_ExtendDeviceSaveData_464a60(void* this_, __int64 a2);
__int64 fs_save_data_for_account_465080(__int64 result);
__int64 fs_save_data_for_account_465220(__int64 a1);
__int64 fs_save_data_for_account_465390(__int64* a1);
__int64 fs_save_data_for_account_465770(__int64 a1);

__int64 nn_fs_ExtendDeviceSaveData_464a60(void* this_, __int64 a2)
{
  __int64 v4;
  __int64 v5;
  __int64 v6;
  unsigned int v7;
  __int64 v8;
  __int64 v9;
  __int64 v11[2];
  unsigned int v12;

  v11[0] = (__int64)this_;
  v11[1] = a2;
  if ((nn_fs_detail_IsEnabledAccessLog_plt_85a3e0(this_, a2) & 1) != 0 &&
      ((v4 = nn_fs_detail_IsEnabledHandleAccessLog_plt_85a9a0(0)) & 1) != 0) {
    v5 = nn_os_GetSystemTick_plt(v4);
    v6 = nn_fs_ExtendDeviceSaveData(v11);
    v7 = v6;
    v8 = nn_os_GetSystemTick_plt(v6);
    v9 = v7;
    nn_fs_detail_OutputAccessLog_plt_85a860(
        v7, v5, v8, "ExtendDeviceSaveData", 0,
        ", save_data_size: %ld, save_data_journal_size: %ld", this_, a2);
  }
  else {
    v7 = nn_fs_ExtendDeviceSaveData(v11);
    v9 = v7;
  }
  if ((nn_fs_detail_IsAbortNeeded_plt(v9) & 1) != 0) {
    nn_fs_detail_LogResultErrorMessage_plt(v9, "ExtendDeviceSaveData");
    v12 = v7;
    if (v7 != 0) {
      nn_diag_detail_AbortImpl_plt_858db0(&v12);
    }
  }
  else if (v7 != 0) {
    return v7;
  }
  return 0;
}

__int64 fs_save_data_for_account_465080(__int64 result)
{
  __int64* v1;
  __int64 v2;
  __int64 v4;
  __int64 v5;
  int v6;
  unsigned __int64 v7;
  int v8;
  int v9;
  __int64 v10;
  unsigned int v11;
  __int64 v12;
  unsigned __int64 v13;
  int v14;
  _QWORD v15[3];
  __int64 v16;
  int v17;
  int v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  int v23;
  int v24;

  v1 = (__int64*)result;
  if (*(_OWORD*)result == 0 ||
      (_DWORD)(result = nn_fs_CheckUid_plt(result)) == 0) {
    v12 = 0;
    v2 = nn_am_GetApplicationFunctions_plt(result);
    result = (*(__int64 (**)(__int64, __int64*, __int64*))(*(_QWORD*)v2 +
                                                           88LL))(v2, &v12, v1);
    if ((result & 0x3FFFFF) != 0x1010 && (result & 0x3FFFFF) != 52381) {
      if ((_DWORD)result != 0) {
        return result;
      }
      if (v12 != 0) {
        v4 = *v1;
        v5 = v1[1];
        v16 = v12;
        v18 = 0;
        v19 = 0;
        v20 = 0;
        memset(v15, 0, sizeof(v15));
        v17 = 1;
        v21 = v4;
        v22 = v5;
        v24 = 0;
        v23 = 1;
        nn_la_CommonArgumentsWriter_CommonArgumentsWriter_plt_85fb00(v15, 2);
        v14 = 0;
        v13 = 0;
        v6 = nn_la_StartLibraryAppletEasy_plt(16777229, v15, &v16, 56, &v14, 4,
                                              &v13, 0);
        v7 = v13;
        v8 = v14;
        v9 = v6;
        nn_la_CommonArgumentsWriter_Destroy_CommonArgumentsWriter_plt(v15);
        result = 15874;
        if (v9 != 0) {
          return result;
        }
        if (v7 < 4) {
          return result;
        }
        if (v8 != 0) {
          return result;
        }
        v10 = nn_am_GetApplicationFunctions_plt(15874);
        v11 = (*(__int64 (**)(__int64, __int64*, __int64*))(
            *(_QWORD*)v10 + 88LL))(v10, &v12, v1);
        result = 0;
        if ((v11 & 0x3FFFFF) == 0x1010) {
          return result;
        }
        if ((v11 & 0x3FFFFF) == 0xCC9D) {
          return result;
        }
        result = v11;
        if (v11 != 0) {
          return result;
        }
        if (v12 != 0) {
          nn_err_ShowError_plt_868bb0(16386);
          return 15874;
        }
      }
    }
    return 0;
  }
  return result;
}

__int64 fs_save_data_for_account_465220(__int64 a1)
{
  _QWORD* v2;
  __int64 result;
  _QWORD* v4;
  int v5;
  unsigned __int64 v6;
  int v7;
  int v8;
  __int64 v9;
  unsigned __int64 v10;
  int v11;
  _QWORD v12[3];
  __int64 v13;
  int v14;
  int v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  int v20;
  int v21;

  v2 = *(_QWORD**)a1;
  result = 3104770;
  if ((*v2 & 0x3FFFLL) == 0 && (**(_QWORD**)(a1 + 8) & 0x3FFFLL) == 0) {
    v4 = *(_QWORD**)(a1 + 16);
    v9 = 0;
    result = nn_fs_detail_EnsureApplicationDeviceSaveData_plt(&v9, *v4);
    if ((_DWORD)result == 0) {
      if (v9 != 0) {
        v13 = v9;
        v15 = 0;
        v19 = 0;
        v21 = 0;
        v16 = 0;
        v17 = 0;
        v18 = 0;
        memset(v12, 0, sizeof(v12));
        v14 = 1;
        v20 = 3;
        nn_la_CommonArgumentsWriter_CommonArgumentsWriter_plt_85fb00(v12, 2);
        v11 = 0;
        v10 = 0;
        v5 = nn_la_StartLibraryAppletEasy_plt(16777229, v12, &v13, 56, &v11, 4,
                                              &v10, 0);
        v6 = v10;
        v7 = v11;
        v8 = v5;
        nn_la_CommonArgumentsWriter_Destroy_CommonArgumentsWriter_plt(v12);
        result = 15874;
        if (v8 != 0) {
          return result;
        }
        if (v6 < 4) {
          return result;
        }
        if (v7 != 0) {
          return result;
        }
        result = nn_fs_detail_EnsureApplicationDeviceSaveData_plt(
            &v9, **(_QWORD**)(a1 + 16));
        if ((_DWORD)result != 0) {
          return result;
        }
        if (v9 != 0) {
          nn_err_ShowError_plt_868bb0(16386);
          return 15874;
        }
      }
      return 0;
    }
  }
  return result;
}

__int64 fs_save_data_for_account_465390(__int64* a1)
{
  __int64 v1;
  __int64 v2;
  __int64 v4;
  __int64 result;
  int v6;
  __int64 v8;
  __int64 v9;
  int v10;
  unsigned __int64 v11;
  int v12;
  int v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  unsigned int v17;
  int v18;
  __int64 v19;
  unsigned __int64 v20;
  int v21;
  _QWORD v22[3];
  __int64 v23;
  int v24;
  int v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  int v30;
  int v31;

  v1 = a1[2];
  v2 = a1[3];
  v19 = 0;
  v4 = nn_am_GetApplicationFunctions_plt(a1);
  result =
      (*(__int64 (**)(__int64, __int64*, __int64, __int64*, __int64, __int64))(
          *(_QWORD*)v4 + 128LL))(v4, &v19, 1, a1, v1, v2);
  v6 = result & 0x3FFFFF;
  if ((result & 0x3FFFFF) == 0xE02) {
    return 1538050;
  }
  if (v6 == 52381 || v6 == 4112) {
    return 0;
  }
  if ((_DWORD)result == 0) {
    if (v19 != 0) {
      v8 = *a1;
      v9 = a1[1];
      v23 = v19;
      v25 = 0;
      v26 = 0;
      v27 = 0;
      memset(v22, 0, sizeof(v22));
      v24 = 1;
      v28 = v8;
      v29 = v9;
      v31 = 0;
      v30 = 1;
      nn_la_CommonArgumentsWriter_CommonArgumentsWriter_plt_85fb00(v22, 2);
      v21 = 0;
      v20 = 0;
      v10 = nn_la_StartLibraryAppletEasy_plt(16777229, v22, &v23, 56, &v21, 4,
                                             &v20, 0);
      v11 = v20;
      v12 = v21;
      v13 = v10;
      nn_la_CommonArgumentsWriter_Destroy_CommonArgumentsWriter_plt(v22);
      result = 15874;
      if (v13 != 0) {
        return result;
      }
      if (v11 < 4) {
        return result;
      }
      if (v12 != 0) {
        return result;
      }
      v14 = a1[2];
      v15 = a1[3];
      v16 = nn_am_GetApplicationFunctions_plt(15874);
      v17 = (*(__int64 (**)(__int64, __int64*, __int64, __int64*, __int64,
                            __int64))(*(_QWORD*)v16 + 128LL))(v16, &v19, 1, a1,
                                                              v14, v15);
      v18 = v17 & 0x3FFFFF;
      result = 1538050;
      if ((v17 & 0x3FFFFF) == 0xE02) {
        return result;
      }
      if (v18 != 52381 && v18 != 4112) {
        result = v17;
        if (v17 != 0) {
          return result;
        }
        if (v19 != 0) {
          nn_err_ShowError_plt_868bb0(16386);
          return 15874;
        }
      }
    }
    return 0;
  }
  return result;
}

__int64 fs_save_data_for_account_465770(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  unsigned int v3;
  __int64 v5;
  __int64 result;
  int v8;
  unsigned __int64 v9;
  int v10;
  int v11;
  __int64 v12;
  __int64 v13;
  unsigned int v14;
  __int64 v15;
  unsigned int v16;
  int v17;
  __int64 v18;
  unsigned __int64 v19;
  int v20;
  _QWORD v21[3];
  __int64 v22;
  int v23;
  int v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  int v29;
  int v30;

  if ((*(_DWORD*)a1 & 0x80000000) != 0) {
    return 3072514;
  }
  v1 = *(_QWORD*)(a1 + 8);
  v2 = *(_QWORD*)(a1 + 16);
  v3 = *(unsigned __int16*)(a1 + 4);
  v18 = 0;
  v17 = 0;
  v5 = nn_am_GetApplicationFunctions_plt(a1);
  result = (*(__int64 (**)(__int64, __int64*, int*, _QWORD, __int64, __int64))(
      *(_QWORD*)v5 + 144LL))(v5, &v18, &v17, v3, v1, v2);
  if ((result & 0x3FFFFF) == 0x1010 || (result & 0x3FFFFF) == 52381) {
    return 0;
  }
  if ((_DWORD)result == 0) {
    if (v18 != 0) {
      v22 = v18;
      v24 = 0;
      v28 = 0;
      v30 = 0;
      v25 = 0;
      v26 = 0;
      v27 = 0;
      memset(v21, 0, sizeof(v21));
      v29 = 2;
      v23 = v17;
      nn_la_CommonArgumentsWriter_CommonArgumentsWriter_plt_85fb00(v21, 2);
      v20 = 0;
      v19 = 0;
      v8 = nn_la_StartLibraryAppletEasy_plt(16777229, v21, &v22, 56, &v20, 4,
                                            &v19, 0);
      v9 = v19;
      v10 = v20;
      v11 = v8;
      nn_la_CommonArgumentsWriter_Destroy_CommonArgumentsWriter_plt(v21);
      result = 16898;
      if (v11 != 0) {
        return result;
      }
      if (v9 < 4) {
        return result;
      }
      if (v10 != 0) {
        return result;
      }
      v12 = *(_QWORD*)(a1 + 8);
      v13 = *(_QWORD*)(a1 + 16);
      v14 = *(unsigned __int16*)(a1 + 4);
      v15 = nn_am_GetApplicationFunctions_plt(16898);
      v16 = (*(__int64 (**)(__int64, __int64*, int*, _QWORD, __int64, __int64))(
          *(_QWORD*)v15 + 144LL))(v15, &v18, &v17, v14, v12, v13);
      result = 0;
      if ((v16 & 0x3FFFFF) == 0x1010) {
        return result;
      }
      if ((v16 & 0x3FFFFF) == 0xCC9D) {
        return result;
      }
      result = v16;
      if (v16 != 0) {
        return result;
      }
      if (v18 != 0) {
        nn_err_ShowError_plt_868bb0(16386);
        return 16898;
      }
    }
    return 0;
  }
  return result;
}

#pragma GCC visibility pop
