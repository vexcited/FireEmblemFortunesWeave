#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

struct PseudoSret {
  _QWORD words[3];
};
__int64 nn_diag_detail_AbortImpl_plt_858db0(_QWORD);
__int64 nn_fs_detail_Allocate_plt(_QWORD);
__int64 nn_fs_detail_Deallocate_plt(_QWORD, _QWORD);
__int64 nn_fs_detail_IsAbortNeeded_plt(_QWORD);
__int64 nn_fs_detail_LogResultErrorMessage_plt(_QWORD, _QWORD);
extern __int64 SdkData_e86dd0;
extern __int64 SdkData_e86dd8;
extern __int64 SdkData_e86de0;
extern __int64 SdkData_e86de8;
extern __int64 SdkData_e86df0;
struct PseudoSret nn_fs_detail_GetFileSystemProxyServiceObject_plt(void);
__int64 fs_save_data_transfer_127450(_QWORD* a1);
__int64 SetDivisionCount(__int64 a1);
__int64 fs_save_data_transfer_127540(__int64 a1, _QWORD** a2);
__int64 fs_save_data_transfer_127670(__int64 a1, _QWORD** a2,
                                     unsigned __int16 a3);
__int64 GetLocalKeySeedPackage(__int64 a1, __int64 a2);
__int64 FinalizeExport(__int64 a1);
__int64 CancelExport(__int64 a1);
__int64 SuspendExport(__int64 a1, __int64 a2);
__int64 fs_save_data_transfer_127bf0(__int64 a1, _QWORD* a2);
__int64 SetExportInitialDataAad(__int64 a1);
__int64 fs_save_data_transfer_127ea0(__int64 a1);
__int64 fs_save_data_transfer_127f30(_QWORD* a1);
__int64 fs_save_data_transfer_127f60(_QWORD* a1);
__int64 GetId(__int64 a1);
__int64 IsEnd(__int64 a1);
__int64 fs_save_data_transfer_128140(_QWORD* a1);
__int64 fs_save_data_transfer_1281a0(__int64 a1, _QWORD* a2, __int64 a3,
                                     __int64 a4);
__int64 GetRestRawDataSize(__int64 a1);
__int64 fs_save_data_transfer_1282e0(_QWORD* a1);
__int64 fs_save_data_transfer_128340(__int64 a1, _QWORD** a2);
__int64 InitializeImport(__int64 a1);
__int64 FinalizeImport(__int64 a1);
__int64 FinalizeImportWithoutSwap(__int64 a1);
__int64 CancelImport(__int64 a1);
__int64 GetImportContext(__int64 a1, __int64 a2);
__int64 SuspendImport(__int64 a1);
__int64 OpenSaveDataChunkImporter(__int64 a1, _QWORD** a2, unsigned __int16 a3);
__int64 fs_save_data_transfer_128b30(__int64 a1);
__int64 fs_save_data_transfer_128bc0(_QWORD* a1);
__int64 fs_save_data_transfer_128bf0(_QWORD* a1);
__int64 fs_save_data_transfer_128c50(__int64 a1, __int64 a2, __int64 a3);

__int64 fs_save_data_transfer_127450(_QWORD* a1)
{
  _QWORD* v1;
  _QWORD* v2;

  *a1 = SdkData_e86dd0 + 16;
  v1 = (_QWORD*)a1[1];
  if (v1 != nullptr) {
    v2 = a1;
    (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, _QWORD))(*v1 + 8LL))(
        (void*)v1, a1[1]);
    a1 = v2;
  }
  return nn_fs_detail_Deallocate_plt(a1, 16);
}

__int64 SetDivisionCount(__int64 a1)
{
  unsigned int v1;
  unsigned int v3;

  v1 = (*(__int64 (**)(_QWORD))(**(_QWORD**)(a1 + 8) + 32LL))(
      *(_QWORD*)(a1 + 8));
  if ((nn_fs_detail_IsAbortNeeded_plt(v1) & 1) != 0) {
    nn_fs_detail_LogResultErrorMessage_plt(v1, "SetDivisionCount");
    v3 = v1;
    if (v1 != 0) {
      nn_diag_detail_AbortImpl_plt_858db0(&v3);
      __udf(0);
    }
  }
  else if (v1 != 0) {
    return v1;
  }
  return 0;
}

__int64 fs_save_data_transfer_127540(__int64 a1, _QWORD** a2)
{
  __int64 v2;
  unsigned int v4;
  _QWORD* v6;
  __int64 v7;
  _QWORD* v8;
  __int64 v9;
  __int64* v10;

  v2 = *(_QWORD*)(a1 + 8);
  v9 = 0;
  v10 = &v9;
  v4 = (*(__int64 (**)(__int64, __int64**))(*(_QWORD*)v2 + 48LL))(v2, &v10);
  if ((nn_fs_detail_IsAbortNeeded_plt(v4) & 1) != 0) {
    nn_fs_detail_LogResultErrorMessage_plt(v4, "OpenSaveDataDiffChunkIterator");
    LODWORD(v10) = v4;
    if (v4 != 0) {
      nn_diag_detail_AbortImpl_plt_858db0(&v10);
      __udf(0);
    }
  }
  else if (v4 != 0) {
    goto LABEL_3;
  }
  v6 = (_QWORD*)nn_fs_detail_Allocate_plt(16);
  if (v6 != nullptr) {
    *v6 = SdkData_e86de0 + 16;
    v7 = v9;
    v9 = 0;
    v6[1] = v7;
    v8 = *a2;
    *a2 = v6;
    if (v8 != nullptr) {
      (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, _QWORD*))(*v8 + 8LL))(
          (void*)v8, v8);
      v4 = 0;
      goto LABEL_3;
    }
    return 0;
  }
  v4 = 1751042;
  if ((nn_fs_detail_IsAbortNeeded_plt(1751042) & 1) != 0) {
    nn_fs_detail_LogResultErrorMessage_plt(1751042,
                                           "OpenSaveDataDiffChunkIterator");
    LODWORD(v10) = 1751042;
    nn_diag_detail_AbortImpl_plt_858db0(&v10);
    return 0;
  }
LABEL_3:
  if (v9 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v9 + 8LL))(v9);
  }
  return v4;
}

__int64 fs_save_data_transfer_127670(__int64 a1, _QWORD** a2,
                                     unsigned __int16 a3)
{
  __int64 v3;
  __int64 v5;
  _QWORD* v7;
  __int64 v8;
  _QWORD* v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  _QWORD* v13;
  _QWORD* v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  _QWORD* v22;
  _QWORD* v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  _DWORD* v28;
  _DWORD* v29;
  unsigned int v30;
  unsigned int v31;
  int v32;
  __int64 v33;
  _QWORD* v34;
  __int64 v35;
  __int64 v36;
  _QWORD* v37;
  __int64 v38;
  __int64 v39;
  int v40;
  __int64 v41;
  _QWORD* v42;
  _QWORD v43[2];
  __int64 v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  _QWORD v49[3];
  int v50;
  __int64 v51;
  _QWORD** v52;
  __int64 v53;
  __int64 v54;
  __int64* v55;

  v3 = *(_QWORD*)(a1 + 8);
  v53 = 0;
  v55 = &v53;
  v5 = (*(unsigned int (**)(__int64, __int64**, _QWORD))(*(_QWORD*)v3 + 56LL))(
      v3, &v55, a3);
  if ((nn_fs_detail_IsAbortNeeded_plt(v5) & 1) == 0) {
    if ((_DWORD)v5 != 0) {
      goto LABEL_3;
    }
  LABEL_7:
    v7 = (_QWORD*)nn_fs_detail_Allocate_plt(16);
    if (v7 != nullptr) {
      *v7 = SdkData_e86de8 + 16;
      v8 = v53;
      v53 = 0;
      v7[1] = v8;
      v9 = *a2;
      *a2 = v7;
      if (v9 != nullptr) {
        (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, _QWORD*))(
            *v9 + 8LL))((void*)v9, v9);
        LODWORD(v5) = 0;
        goto LABEL_3;
      }
    }
    else {
      LODWORD(v5) = 1751042;
      if ((nn_fs_detail_IsAbortNeeded_plt(1751042) & 1) == 0) {
      LABEL_3:
        if (v53 != 0) {
          (*(void (**)(__int64))(*(_QWORD*)v53 + 8LL))(v53);
        }
        return (unsigned int)v5;
      }
      nn_fs_detail_LogResultErrorMessage_plt(1751042,
                                             "OpenSaveDataChunkExporter");
      LODWORD(v55) = 1751042;
      nn_diag_detail_AbortImpl_plt_858db0(&v55);
    }
    LODWORD(v5) = 0;
    return (unsigned int)v5;
  }
  nn_fs_detail_LogResultErrorMessage_plt(v5, "OpenSaveDataChunkExporter");
  LODWORD(v55) = v5;
  if ((_DWORD)v5 == 0) {
    goto LABEL_7;
  }
  v10 = nn_diag_detail_AbortImpl_plt_858db0(&v55);
  v49[0] = &v54;
  v49[1] = v11;
  v49[2] = v5;
  v51 = v5;
  v52 = a2;
  v12 = *(_QWORD*)(v10 + 8);
  v47 = 0;
  v48 = 0;
  v45 = 0;
  v46 = 0;
  v14 = v13;
  v50 = 0;
  v43[0] = &v44;
  v43[1] = 32;
  v44 = 0;
  v15 = (*(unsigned int (**)(__int64, _QWORD*, int*))(*(_QWORD*)v12 + 104LL))(
      v12, v43, &v50);
  if ((nn_fs_detail_IsAbortNeeded_plt(v15) & 1) == 0) {
    if ((_DWORD)v15 != 0) {
      return (unsigned int)v15;
    }
  LABEL_15:
    v16 = v50;
    v17 = v47;
    LODWORD(v15) = 0;
    v48 = v50;
    v14[2] = v46;
    v14[3] = v17;
    v14[4] = v16;
    v18 = v45;
    *v14 = v44;
    v14[1] = v18;
    return (unsigned int)v15;
  }
  nn_fs_detail_LogResultErrorMessage_plt(v15, "GetKeySeed");
  LODWORD(v43[0]) = v15;
  if ((_DWORD)v15 == 0) {
    goto LABEL_15;
  }
  v19 = nn_diag_detail_AbortImpl_plt_858db0(v43);
  v37 = v49;
  v38 = v20;
  v39 = v15;
  v41 = v15;
  v42 = v14;
  v21 = *(_QWORD*)(v19 + 8);
  v35 = 0;
  v36 = 0;
  v23 = v22;
  v24 = (*(unsigned int (**)(__int64, __int64*))(*(_QWORD*)v21 + 80LL))(v21,
                                                                        &v35);
  if ((nn_fs_detail_IsAbortNeeded_plt(v24) & 1) == 0) {
    if ((_DWORD)v24 != 0) {
      return (unsigned int)v24;
    }
  LABEL_20:
    v25 = v36;
    LODWORD(v24) = 0;
    *v23 = v35;
    v23[1] = v25;
    return (unsigned int)v24;
  }
  nn_fs_detail_LogResultErrorMessage_plt(v24, "GetInitialDataMac");
  v40 = v24;
  if ((_DWORD)v24 == 0) {
    goto LABEL_20;
  }
  v26 = nn_diag_detail_AbortImpl_plt_858db0(&v40);
  v33 = v24;
  v34 = v23;
  v27 = *(_QWORD*)(v26 + 8);
  v29 = v28;
  v32 = 0;
  v30 = (*(__int64 (**)(__int64, int*))(*(_QWORD*)v27 + 96LL))(v27, &v32);
  if ((nn_fs_detail_IsAbortNeeded_plt(v30) & 1) != 0) {
    nn_fs_detail_LogResultErrorMessage_plt(v30,
                                           "GetInitialDataMacKeyGeneration");
    v31 = v30;
    if (v30 != 0) {
      nn_diag_detail_AbortImpl_plt_858db0(&v31);
      __udf(0);
    }
  }
  else if (v30 != 0) {
    return v30;
  }
  *v29 = v32;
  return 0;
}

__int64 GetLocalKeySeedPackage(__int64 a1, __int64 a2)
{
  __int64 v2;
  unsigned int v3;
  _QWORD v5[2];

  v2 = *(_QWORD*)(a1 + 8);
  v5[0] = a2;
  v5[1] = 512;
  v3 = (*(__int64 (**)(__int64, _QWORD*))(*(_QWORD*)v2 + 112LL))(v2, v5);
  if ((nn_fs_detail_IsAbortNeeded_plt(v3) & 1) != 0) {
    nn_fs_detail_LogResultErrorMessage_plt(v3, "GetLocalKeySeedPackage");
    LODWORD(v5[0]) = v3;
    if (v3 != 0) {
      nn_diag_detail_AbortImpl_plt_858db0(v5);
      __udf(0);
    }
  }
  else if (v3 != 0) {
    return v3;
  }
  return 0;
}

__int64 FinalizeExport(__int64 a1)
{
  unsigned int v1;
  unsigned int v3;

  v1 = (*(__int64 (**)(_QWORD))(**(_QWORD**)(a1 + 8) + 88LL))(
      *(_QWORD*)(a1 + 8));
  if ((nn_fs_detail_IsAbortNeeded_plt(v1) & 1) != 0) {
    nn_fs_detail_LogResultErrorMessage_plt(v1, "FinalizeExport");
    v3 = v1;
    if (v1 != 0) {
      nn_diag_detail_AbortImpl_plt_858db0(&v3);
      __udf(0);
    }
  }
  else if (v1 != 0) {
    return v1;
  }
  return 0;
}

__int64 CancelExport(__int64 a1)
{
  unsigned int v1;
  unsigned int v3;

  v1 = (*(__int64 (**)(_QWORD))(**(_QWORD**)(a1 + 8) + 64LL))(
      *(_QWORD*)(a1 + 8));
  if ((nn_fs_detail_IsAbortNeeded_plt(v1) & 1) != 0) {
    nn_fs_detail_LogResultErrorMessage_plt(v1, "CancelExport");
    v3 = v1;
    if (v1 != 0) {
      nn_diag_detail_AbortImpl_plt_858db0(&v3);
      __udf(0);
    }
  }
  else if (v1 != 0) {
    return v1;
  }
  return 0;
}

__int64 SuspendExport(__int64 a1, __int64 a2)
{
  __int64 v2;
  unsigned int v3;
  _QWORD v5[2];

  v2 = *(_QWORD*)(a1 + 8);
  v5[0] = a2;
  v5[1] = 0x4000;
  v3 = (*(__int64 (**)(__int64, _QWORD*))(*(_QWORD*)v2 + 72LL))(v2, v5);
  if ((nn_fs_detail_IsAbortNeeded_plt(v3) & 1) != 0) {
    nn_fs_detail_LogResultErrorMessage_plt(v3, "SuspendExport");
    LODWORD(v5[0]) = v3;
    if (v3 != 0) {
      nn_diag_detail_AbortImpl_plt_858db0(v5);
      __udf(0);
    }
  }
  else if (v3 != 0) {
    return v3;
  }
  return 0;
}

__int64 fs_save_data_transfer_127bf0(__int64 a1, _QWORD* a2)
{
  __int64 v2;
  unsigned int v4;
  __int64 v5;
  __int64 v6;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  unsigned int v12;

  v2 = *(_QWORD*)(a1 + 8);
  v10 = 0;
  v11 = 0;
  v8 = 0;
  v9 = 0;
  v4 = (*(__int64 (**)(__int64, __int64*))(*(_QWORD*)v2 + 120LL))(v2, &v8);
  if ((nn_fs_detail_IsAbortNeeded_plt(v4) & 1) != 0) {
    nn_fs_detail_LogResultErrorMessage_plt(v4, "GetImportInitialDataAad");
    v12 = v4;
    if (v4 != 0) {
      nn_diag_detail_AbortImpl_plt_858db0(&v12);
      __udf(0);
    }
  }
  else if (v4 != 0) {
    return v4;
  }
  v5 = v9;
  v4 = 0;
  *a2 = v8;
  a2[1] = v5;
  v6 = v11;
  a2[2] = v10;
  a2[3] = v6;
  return v4;
}

__int64 SetExportInitialDataAad(__int64 a1)
{
  unsigned int v1;
  unsigned int v3;

  v1 = (*(__int64 (**)(_QWORD))(**(_QWORD**)(a1 + 8) + 128LL))(
      *(_QWORD*)(a1 + 8));
  if ((nn_fs_detail_IsAbortNeeded_plt(v1) & 1) != 0) {
    nn_fs_detail_LogResultErrorMessage_plt(v1, "SetExportInitialDataAad");
    v3 = v1;
    if (v1 != 0) {
      nn_diag_detail_AbortImpl_plt_858db0(&v3);
      __udf(0);
    }
  }
  else if (v1 != 0) {
    return v1;
  }
  return 0;
}

__int64 fs_save_data_transfer_127ea0(__int64 a1)
{
  unsigned int v1;
  unsigned int v3;

  v1 = (*(__int64 (**)(_QWORD))(**(_QWORD**)(a1 + 8) + 136LL))(
      *(_QWORD*)(a1 + 8));
  if ((nn_fs_detail_IsAbortNeeded_plt(v1) & 1) != 0) {
    nn_fs_detail_LogResultErrorMessage_plt(v1, "GetReportInfo");
    v3 = v1;
    if (v1 != 0) {
      nn_diag_detail_AbortImpl_plt_858db0(&v3);
      __udf(0);
    }
  }
  else if (v1 != 0) {
    return v1;
  }
  return 0;
}

__int64 fs_save_data_transfer_127f30(_QWORD* a1)
{
  __int64 result;

  *a1 = SdkData_e86de0 + 16;
  result = a1[1];
  if (result != 0) {
    return (*(__int64 (**)(__int64))(*(_QWORD*)result + 8LL))(result);
  }
  return result;
}

__int64 fs_save_data_transfer_127f60(_QWORD* a1)
{
  _QWORD* v1;
  _QWORD* v2;

  *a1 = SdkData_e86de0 + 16;
  v1 = (_QWORD*)a1[1];
  if (v1 != nullptr) {
    v2 = a1;
    (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, _QWORD))(*v1 + 8LL))(
        (void*)v1, a1[1]);
    a1 = v2;
  }
  return nn_fs_detail_Deallocate_plt(a1, 16);
}

__int64 GetId(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  __int64 result;
  __int64 v4;
  __int64 v5;
  unsigned int v6;
  unsigned int v7;
  __int64* v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  int v12;
  unsigned int v13;
  __int64 vars0;

  v1 = *(_QWORD*)(a1 + 8);
  v13 = 0;
  v2 = (*(unsigned int (**)(__int64, unsigned int*))(*(_QWORD*)v1 + 48LL))(
      v1, &v13);
  nn_fs_detail_IsAbortNeeded_plt(v2);
  nn_fs_detail_LogResultErrorMessage_plt(v2, "GetId");
  v12 = v2;
  if ((_DWORD)v2 == 0) {
    return v13;
  }
  v4 = nn_diag_detail_AbortImpl_plt_858db0(&v12);
  v8 = &vars0;
  v9 = v5;
  v10 = v2;
  v11 = v2;
  v6 = (*(__int64 (**)(_QWORD))(**(_QWORD**)(v4 + 8) + 32LL))(
      *(_QWORD*)(v4 + 8));
  nn_fs_detail_IsAbortNeeded_plt(v6);
  result = nn_fs_detail_LogResultErrorMessage_plt(v6, "Next");
  v7 = v6;
  if (v6 != 0) {
    nn_diag_detail_AbortImpl_plt_858db0(&v7);
    __udf(0);
  }
  return result;
}

__int64 IsEnd(__int64 a1)
{
  __int64 v1;
  unsigned int v2;
  unsigned int v4;
  _BYTE v5[4];

  v1 = *(_QWORD*)(a1 + 8);
  v5[0] = 0;
  v2 = (*(__int64 (**)(__int64, _BYTE*))(*(_QWORD*)v1 + 40LL))(v1, v5);
  nn_fs_detail_IsAbortNeeded_plt(v2);
  nn_fs_detail_LogResultErrorMessage_plt(v2, "IsEnd");
  v4 = v2;
  if (v2 != 0) {
    nn_diag_detail_AbortImpl_plt_858db0(&v4);
  }
  return v5[0];
}

__int64 fs_save_data_transfer_128140(_QWORD* a1)
{
  _QWORD* v1;
  _QWORD* v2;

  *a1 = SdkData_e86de8 + 16;
  v1 = (_QWORD*)a1[1];
  if (v1 != nullptr) {
    v2 = a1;
    (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, _QWORD))(*v1 + 8LL))(
        (void*)v1, a1[1]);
    a1 = v2;
  }
  return nn_fs_detail_Deallocate_plt(a1, 16);
}

__int64 fs_save_data_transfer_1281a0(__int64 a1, _QWORD* a2, __int64 a3,
                                     __int64 a4)
{
  __int64 v4;
  unsigned int v6;
  _QWORD v8[2];
  __int64 v9;

  v4 = *(_QWORD*)(a1 + 8);
  v9 = 0;
  v8[0] = a3;
  v8[1] = a4;
  v6 = (*(__int64 (**)(__int64, __int64*, _QWORD*))(*(_QWORD*)v4 + 32LL))(
      v4, &v9, v8);
  if ((nn_fs_detail_IsAbortNeeded_plt(v6) & 1) != 0) {
    nn_fs_detail_LogResultErrorMessage_plt(v6, "Pull");
    LODWORD(v8[0]) = v6;
    if (v6 != 0) {
      nn_diag_detail_AbortImpl_plt_858db0(v8);
      __udf(0);
    }
  }
  else if (v6 != 0) {
    return v6;
  }
  v6 = 0;
  *a2 = v9;
  return v6;
}

__int64 GetRestRawDataSize(__int64 a1)
{
  __int64 v1;
  unsigned int v2;
  unsigned int v4;
  __int64 v5;

  v1 = *(_QWORD*)(a1 + 8);
  v5 = 0;
  v2 = (*(__int64 (**)(__int64, __int64*))(*(_QWORD*)v1 + 40LL))(v1, &v5);
  nn_fs_detail_IsAbortNeeded_plt(v2);
  nn_fs_detail_LogResultErrorMessage_plt(v2, "GetRestRawDataSize");
  v4 = v2;
  if (v2 != 0) {
    nn_diag_detail_AbortImpl_plt_858db0(&v4);
  }
  return v5;
}

__int64 fs_save_data_transfer_1282e0(_QWORD* a1)
{
  _QWORD* v1;
  _QWORD* v2;

  *a1 = SdkData_e86dd8 + 16;
  v1 = (_QWORD*)a1[1];
  if (v1 != nullptr) {
    v2 = a1;
    (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, _QWORD))(*v1 + 8LL))(
        (void*)v1, a1[1]);
    a1 = v2;
  }
  return nn_fs_detail_Deallocate_plt(a1, 16);
}

__int64 fs_save_data_transfer_128340(__int64 a1, _QWORD** a2)
{
  __int64 v2;
  unsigned int v4;
  _QWORD* v6;
  __int64 v7;
  _QWORD* v8;
  __int64 v9;
  __int64* v10;

  v2 = *(_QWORD*)(a1 + 8);
  v9 = 0;
  v10 = &v9;
  v4 = (*(__int64 (**)(__int64, __int64**))(*(_QWORD*)v2 + 40LL))(v2, &v10);
  if ((nn_fs_detail_IsAbortNeeded_plt(v4) & 1) != 0) {
    nn_fs_detail_LogResultErrorMessage_plt(v4, "OpenSaveDataDiffChunkIterator");
    LODWORD(v10) = v4;
    if (v4 != 0) {
      nn_diag_detail_AbortImpl_plt_858db0(&v10);
      __udf(0);
    }
  }
  else if (v4 != 0) {
    goto LABEL_3;
  }
  v6 = (_QWORD*)nn_fs_detail_Allocate_plt(16);
  if (v6 != nullptr) {
    *v6 = SdkData_e86de0 + 16;
    v7 = v9;
    v9 = 0;
    v6[1] = v7;
    v8 = *a2;
    *a2 = v6;
    if (v8 != nullptr) {
      (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, _QWORD*))(*v8 + 8LL))(
          (void*)v8, v8);
      v4 = 0;
      goto LABEL_3;
    }
    return 0;
  }
  v4 = 1751042;
  if ((nn_fs_detail_IsAbortNeeded_plt(1751042) & 1) != 0) {
    nn_fs_detail_LogResultErrorMessage_plt(1751042,
                                           "OpenSaveDataDiffChunkIterator");
    LODWORD(v10) = 1751042;
    nn_diag_detail_AbortImpl_plt_858db0(&v10);
    return 0;
  }
LABEL_3:
  if (v9 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v9 + 8LL))(v9);
  }
  return v4;
}

__int64 InitializeImport(__int64 a1)
{
  unsigned int v1;
  unsigned int v3;

  v1 = (*(__int64 (**)(_QWORD))(**(_QWORD**)(a1 + 8) + 48LL))(
      *(_QWORD*)(a1 + 8));
  if ((nn_fs_detail_IsAbortNeeded_plt(v1) & 1) != 0) {
    nn_fs_detail_LogResultErrorMessage_plt(v1, "InitializeImport");
    v3 = v1;
    if (v1 != 0) {
      nn_diag_detail_AbortImpl_plt_858db0(&v3);
      __udf(0);
    }
  }
  else if (v1 != 0) {
    return v1;
  }
  return 0;
}

__int64 FinalizeImport(__int64 a1)
{
  unsigned int v1;
  unsigned int v3;

  v1 = (*(__int64 (**)(_QWORD))(**(_QWORD**)(a1 + 8) + 56LL))(
      *(_QWORD*)(a1 + 8));
  if ((nn_fs_detail_IsAbortNeeded_plt(v1) & 1) != 0) {
    nn_fs_detail_LogResultErrorMessage_plt(v1, "FinalizeImport");
    v3 = v1;
    if (v1 != 0) {
      nn_diag_detail_AbortImpl_plt_858db0(&v3);
      __udf(0);
    }
  }
  else if (v1 != 0) {
    return v1;
  }
  return 0;
}

__int64 FinalizeImportWithoutSwap(__int64 a1)
{
  unsigned int v1;
  unsigned int v3;

  v1 = (*(__int64 (**)(_QWORD))(**(_QWORD**)(a1 + 8) + 88LL))(
      *(_QWORD*)(a1 + 8));
  if ((nn_fs_detail_IsAbortNeeded_plt(v1) & 1) != 0) {
    nn_fs_detail_LogResultErrorMessage_plt(v1, "FinalizeImportWithoutSwap");
    v3 = v1;
    if (v1 != 0) {
      nn_diag_detail_AbortImpl_plt_858db0(&v3);
      __udf(0);
    }
  }
  else if (v1 != 0) {
    return v1;
  }
  return 0;
}

__int64 CancelImport(__int64 a1)
{
  unsigned int v1;
  unsigned int v3;

  v1 = (*(__int64 (**)(_QWORD))(**(_QWORD**)(a1 + 8) + 64LL))(
      *(_QWORD*)(a1 + 8));
  if ((nn_fs_detail_IsAbortNeeded_plt(v1) & 1) != 0) {
    nn_fs_detail_LogResultErrorMessage_plt(v1, "CancelImport");
    v3 = v1;
    if (v1 != 0) {
      nn_diag_detail_AbortImpl_plt_858db0(&v3);
      __udf(0);
    }
  }
  else if (v1 != 0) {
    return v1;
  }
  return 0;
}

__int64 GetImportContext(__int64 a1, __int64 a2)
{
  __int64 v2;
  unsigned int v3;
  _QWORD v5[2];

  v2 = *(_QWORD*)(a1 + 8);
  v5[0] = a2;
  v5[1] = 0x4000;
  v3 = (*(__int64 (**)(__int64, _QWORD*))(*(_QWORD*)v2 + 72LL))(v2, v5);
  if ((nn_fs_detail_IsAbortNeeded_plt(v3) & 1) != 0) {
    nn_fs_detail_LogResultErrorMessage_plt(v3, "GetImportContext");
    LODWORD(v5[0]) = v3;
    if (v3 != 0) {
      nn_diag_detail_AbortImpl_plt_858db0(v5);
      __udf(0);
    }
  }
  else if (v3 != 0) {
    return v3;
  }
  return 0;
}

__int64 SuspendImport(__int64 a1)
{
  unsigned int v1;
  unsigned int v3;

  v1 = (*(__int64 (**)(_QWORD))(**(_QWORD**)(a1 + 8) + 80LL))(
      *(_QWORD*)(a1 + 8));
  if ((nn_fs_detail_IsAbortNeeded_plt(v1) & 1) != 0) {
    nn_fs_detail_LogResultErrorMessage_plt(v1, "SuspendImport");
    v3 = v1;
    if (v1 != 0) {
      nn_diag_detail_AbortImpl_plt_858db0(&v3);
      __udf(0);
    }
  }
  else if (v1 != 0) {
    return v1;
  }
  return 0;
}

__int64 OpenSaveDataChunkImporter(__int64 a1, _QWORD** a2, unsigned __int16 a3)
{
  __int64 v3;
  __int64 v5;
  _QWORD* v7;
  __int64 v8;
  _QWORD* v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  _QWORD* v13;
  _QWORD* v14;
  unsigned int v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64* v22;
  __int64 v23;
  __int64 v24;
  unsigned int v25;
  __int64 v26;
  _QWORD** v27;
  __int64 v28;
  __int64 v29;
  __int64* v30;

  v3 = *(_QWORD*)(a1 + 8);
  v28 = 0;
  v30 = &v28;
  v5 = (*(unsigned int (**)(__int64, __int64**, _QWORD))(*(_QWORD*)v3 + 96LL))(
      v3, &v30, a3);
  if ((nn_fs_detail_IsAbortNeeded_plt(v5) & 1) == 0) {
    if ((_DWORD)v5 != 0) {
      goto LABEL_3;
    }
  LABEL_7:
    v7 = (_QWORD*)nn_fs_detail_Allocate_plt(16);
    if (v7 != nullptr) {
      *v7 = SdkData_e86df0 + 16;
      v8 = v28;
      v28 = 0;
      v7[1] = v8;
      v9 = *a2;
      *a2 = v7;
      if (v9 != nullptr) {
        (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, _QWORD*))(
            *v9 + 8LL))((void*)v9, v9);
        LODWORD(v5) = 0;
        goto LABEL_3;
      }
    }
    else {
      LODWORD(v5) = 1751042;
      if ((nn_fs_detail_IsAbortNeeded_plt(1751042) & 1) == 0) {
      LABEL_3:
        if (v28 != 0) {
          (*(void (**)(__int64))(*(_QWORD*)v28 + 8LL))(v28);
        }
        return (unsigned int)v5;
      }
      nn_fs_detail_LogResultErrorMessage_plt(1751042,
                                             "OpenSaveDataChunkImporter");
      LODWORD(v30) = 1751042;
      nn_diag_detail_AbortImpl_plt_858db0(&v30);
    }
    LODWORD(v5) = 0;
    return (unsigned int)v5;
  }
  nn_fs_detail_LogResultErrorMessage_plt(v5, "OpenSaveDataChunkImporter");
  LODWORD(v30) = v5;
  if ((_DWORD)v5 == 0) {
    goto LABEL_7;
  }
  v10 = nn_diag_detail_AbortImpl_plt_858db0(&v30);
  v22 = &v29;
  v23 = v11;
  v24 = v5;
  v26 = v5;
  v27 = a2;
  v12 = *(_QWORD*)(v10 + 8);
  v20 = 0;
  v21 = 0;
  v18 = 0;
  v19 = 0;
  v14 = v13;
  v15 = (*(__int64 (**)(__int64, __int64*))(*(_QWORD*)v12 + 104LL))(v12, &v18);
  if ((nn_fs_detail_IsAbortNeeded_plt(v15) & 1) != 0) {
    nn_fs_detail_LogResultErrorMessage_plt(v15, "GetImportInitialDataAad");
    v25 = v15;
    if (v15 != 0) {
      nn_diag_detail_AbortImpl_plt_858db0(&v25);
      __udf(0);
    }
  }
  else if (v15 != 0) {
    return v15;
  }
  v16 = v19;
  v15 = 0;
  *v14 = v18;
  v14[1] = v16;
  v17 = v21;
  v14[2] = v20;
  v14[3] = v17;
  return v15;
}

__int64 fs_save_data_transfer_128b30(__int64 a1)
{
  unsigned int v1;
  unsigned int v3;

  v1 = (*(__int64 (**)(_QWORD))(**(_QWORD**)(a1 + 8) + 112LL))(
      *(_QWORD*)(a1 + 8));
  if ((nn_fs_detail_IsAbortNeeded_plt(v1) & 1) != 0) {
    nn_fs_detail_LogResultErrorMessage_plt(v1, "GetReportInfo");
    v3 = v1;
    if (v1 != 0) {
      nn_diag_detail_AbortImpl_plt_858db0(&v3);
      __udf(0);
    }
  }
  else if (v1 != 0) {
    return v1;
  }
  return 0;
}

__int64 fs_save_data_transfer_128bc0(_QWORD* a1)
{
  __int64 result;

  *a1 = SdkData_e86df0 + 16;
  result = a1[1];
  if (result != 0) {
    return (*(__int64 (**)(__int64))(*(_QWORD*)result + 8LL))(result);
  }
  return result;
}

__int64 fs_save_data_transfer_128bf0(_QWORD* a1)
{
  _QWORD* v1;
  _QWORD* v2;

  *a1 = SdkData_e86df0 + 16;
  v1 = (_QWORD*)a1[1];
  if (v1 != nullptr) {
    v2 = a1;
    (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, _QWORD))(*v1 + 8LL))(
        (void*)v1, a1[1]);
    a1 = v2;
  }
  return nn_fs_detail_Deallocate_plt(a1, 16);
}

__int64 fs_save_data_transfer_128c50(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3;
  __int64 v4;
  __int64 result;
  _QWORD* v6;
  __int64 v7;
  unsigned int v8;
  unsigned int v9;
  _QWORD* v10;
  unsigned int v11;
  __int64 v12;
  _QWORD v13[5];
  _QWORD v14[2];
  __int64 vars0;

  v3 = *(_QWORD*)(a1 + 8);
  v14[0] = a2;
  v14[1] = a3;
  v4 = (*(unsigned int (**)(__int64, _QWORD*))(*(_QWORD*)v3 + 32LL))(v3, v14);
  if ((nn_fs_detail_IsAbortNeeded_plt(v4) & 1) == 0) {
    if ((_DWORD)v4 != 0) {
      return (unsigned int)v4;
    }
    return 0;
  }
  nn_fs_detail_LogResultErrorMessage_plt(v4, "Push");
  LODWORD(v14[0]) = v4;
  if ((_DWORD)v4 == 0) {
    return 0;
  }
  v6 = (_QWORD*)nn_diag_detail_AbortImpl_plt_858db0(v14);
  v13[1] = &vars0;
  v13[2] = v7;
  v13[3] = v4;
  v13[4] = v4;
  v9 = v8;
  v10 = v6;
  *v6 = 0;
  v12 = 0;
  *(struct PseudoSret*)(&v12) =
      nn_fs_detail_GetFileSystemProxyServiceObject_plt();
  v13[0] = v10;
  v11 = (*(__int64 (**)(__int64, _QWORD*, _QWORD))(*(_QWORD*)v12 + 488LL))(
      v12, v13, v9);
  nn_fs_detail_IsAbortNeeded_plt(v11);
  nn_fs_detail_LogResultErrorMessage_plt(
      v11, "SaveDataTransferManagerForSaveDataRepair");
  LODWORD(v13[0]) = v11;
  if (v11 != 0) {
    nn_diag_detail_AbortImpl_plt_858db0(v13);
    __udf(0);
  }
  result = v12;
  if (v12 != 0) {
    return (*(__int64 (**)(__int64))(*(_QWORD*)v12 + 8LL))(v12);
  }
  return result;
}

#pragma GCC visibility pop
