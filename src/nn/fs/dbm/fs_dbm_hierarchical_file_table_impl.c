#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 SdkRoutine_85ac20(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 SdkRoutine_85ac80(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 SdkRoutine_85ac90(_QWORD, _QWORD);
__int64 SdkRoutine_85ad00(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 SdkRoutine_85ad30(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 SdkRoutine_85ad90(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 SdkRoutine_d4340(__int64*, __int64, __int64, unsigned int);
__int64 SdkRoutine_d6240(_QWORD, _QWORD, _QWORD);
__int64 nn_fs_dbm_BufferedAllocationTableStorage_EnterHoldingCacheSection_plt(
    _QWORD);
__int64 nn_fs_dbm_BufferedAllocationTableStorage_LeaveHoldingCacheSection_plt(
    _QWORD);
__int64 nn_fs_dbm_PathTool_GetDirectoryNameLength_plt(_QWORD);
__int64 nn_fs_dbm_PathTool_PathParser_GetAsDirectoryName_plt(_QWORD, _QWORD,
                                                             _QWORD);
__int64 nn_fs_dbm_PathTool_PathParser_Initialize_plt(_QWORD, _QWORD);
__int64 nn_fs_dbm_PathTool_PathParser_PathParser_plt(_QWORD);
__int64 nn_fs_dbm_HierarchicalFileTableTemplate_RenameDirectory(
    _QWORD* a1, _BYTE* a2, _BYTE* a3, _BYTE* a4, __int64 a5, __int64 a6);
__int64 nn_fs_dbm_HierarchicalFileTableTemplate_FindDirectoryRecursive(
    __int64* a1, __int64 a2, __int64 a3, unsigned int* a4, __int64 a5);

__int64 nn_fs_dbm_HierarchicalFileTableTemplate_RenameDirectory(
    _QWORD* a1, _BYTE* a2, _BYTE* a3, _BYTE* a4, __int64 a5, __int64 a6)
{
  __int64 v12;
  unsigned int v13;
  unsigned int v14;
  unsigned int v15;
  bool v17;
  bool v18;
  bool v19;
  bool v20;
  bool v21;
  bool v22;
  unsigned __int64 v24;
  int v25;
  bool v26;
  bool v27;
  bool v28;
  bool v29;
  bool v30;
  bool v31;
  bool v32;
  unsigned __int64 v33;
  __int64 v34;
  unsigned int v35;
  unsigned int v36;
  __int64 v37;
  unsigned int v38;
  unsigned int v39;
  int v40;
  unsigned int v41;
  int v42;
  __int64 v43;
  __int64 v44;
  unsigned int v45;
  __int64 v46;
  _QWORD v47[9];
  _QWORD v48[9];
  _QWORD v49[9];
  __int64 v50;
  __int64 v51;
  __int64 v52;
  _QWORD v53[9];
  __int64 v54;
  __int128 v55;
  unsigned int v56;
  _QWORD v57[9];
  _QWORD v58[3];
  _QWORD v59[9];
  __int64 v60;
  __int64 v61;
  __int64 v62;
  __int64 v63;
  __int64 v64;
  __int64 v65;
  __int64 v66;
  __int64 v67;
  _QWORD v68[4];

  *a2 = 0;
  *a3 = 0;
  *a4 = 0;
  v12 = a1[2];
  memset(v59, 0, 68);
  memset(v58, 0, sizeof(v58));
  memset(v57, 0, 68);
  v56 = 0;
  v55 = 0u;
  v54 = 0;
  memset(v53, 0, 68);
  v51 = 0;
  v52 = 0;
  v50 = 0;
  memset(v49, 0, 68);
  nn_fs_dbm_BufferedAllocationTableStorage_EnterHoldingCacheSection_plt(v12);
  nn_fs_dbm_BufferedAllocationTableStorage_EnterHoldingCacheSection_plt(*a1);
  v13 = SdkRoutine_85ac80(a1, v59, v58, v57, a6);
  if (v13 != 0) {
    goto LABEL_2;
  }
  v13 = SdkRoutine_85ac20(a1, &v56, &v54, v57);
  if (v13 != 0) {
    goto LABEL_2;
  }
  v15 = SdkRoutine_85ac80(a1, v53, &v50, v49, a5);
  if (v15 != 0) {
    if (LODWORD(v57[0]) == LODWORD(v59[0])) {
      v14 = 3088386;
    }
    else {
      v14 = v15;
    }
    goto LABEL_8;
  }
  if (LODWORD(v57[0]) == LODWORD(v49[0])) {
    v17 = *(_QWORD*)((char*)v57 + 4) == *(_QWORD*)((char*)v49 + 4) &&
          *(_QWORD*)((char*)&v57[1] + 4) == *(_QWORD*)((char*)&v49[1] + 4);
    v18 =
        v17 && *(_QWORD*)((char*)&v57[2] + 4) == *(_QWORD*)((char*)&v49[2] + 4);
    v19 =
        v18 && *(_QWORD*)((char*)&v57[3] + 4) == *(_QWORD*)((char*)&v49[3] + 4);
    v20 =
        v19 && *(_QWORD*)((char*)&v57[4] + 4) == *(_QWORD*)((char*)&v49[4] + 4);
    v21 =
        v20 && *(_QWORD*)((char*)&v57[5] + 4) == *(_QWORD*)((char*)&v49[5] + 4);
    v22 =
        v21 && *(_QWORD*)((char*)&v57[6] + 4) == *(_QWORD*)((char*)&v49[6] + 4);
    if (v22 &&
        *(_QWORD*)((char*)&v57[7] + 4) == *(_QWORD*)((char*)&v49[7] + 4)) {
      v14 = 0;
      *a3 = 1;
      goto LABEL_8;
    }
  }
  v14 = 3088386;
  if (LODWORD(v57[0]) != LODWORD(v59[0])) {
    if (LODWORD(v49[0]) == LODWORD(v53[0])) {
    LABEL_67:
      *a4 = 1;
      goto LABEL_8;
    }
    qmemcpy(v48, v53, 68);
    v24 = LODWORD(v53[0]);
    if (LODWORD(v53[0]) != 0) {
      v25 = 2420226;
      do {
        v26 = *(_QWORD*)((char*)v57 + 4) == *(_QWORD*)((char*)v48 + 4) &&
              *(_QWORD*)((char*)&v57[1] + 4) == *(_QWORD*)((char*)&v48[1] + 4);
        v27 = v26 &&
              *(_QWORD*)((char*)&v57[2] + 4) == *(_QWORD*)((char*)&v48[2] + 4);
        v28 = v27 &&
              *(_QWORD*)((char*)&v57[3] + 4) == *(_QWORD*)((char*)&v48[3] + 4);
        v29 = v28 &&
              *(_QWORD*)((char*)&v57[4] + 4) == *(_QWORD*)((char*)&v48[4] + 4);
        v30 = v29 &&
              *(_QWORD*)((char*)&v57[5] + 4) == *(_QWORD*)((char*)&v48[5] + 4);
        v31 = v30 &&
              *(_QWORD*)((char*)&v57[6] + 4) == *(_QWORD*)((char*)&v48[6] + 4);
        v32 = v31 &&
              *(_QWORD*)((char*)&v57[7] + 4) == *(_QWORD*)((char*)&v48[7] + 4);
        if (v32 && LODWORD(v57[0]) == v24) {
          goto LABEL_8;
        }
        v33 = *((unsigned int*)a1 + 2);
        if (v24 >= v33 && v33 != 1) {
          goto LABEL_73;
        }
        v34 = *a1;
        memset(v68, 0, sizeof(v68));
        v66 = 0;
        v67 = 0;
        v64 = 0;
        v65 = 0;
        v62 = 0;
        v63 = 0;
        v60 = 0;
        v61 = 0;
        v13 = (*(__int64 (**)(__int64, unsigned __int64, __int64*, __int64,
                              _QWORD, _QWORD))(*(_QWORD*)v34 + 16LL))(
            v34, 96 * v24, &v60, 96, *(_QWORD*)((char*)&v57[7] + 4),
            *(_QWORD*)((char*)&v48[7] + 4));
        if (v13 != 0) {
          goto LABEL_2;
        }
        if (HIDWORD(v68[3]) >= v33) {
          v25 = 2418178;
        LABEL_73:
          v14 = v25;
          goto LABEL_8;
        }
        v48[6] = v66;
        v48[7] = v67;
        LODWORD(v48[8]) = v68[0];
        v48[2] = v62;
        v48[3] = v63;
        v48[4] = v64;
        v48[5] = v65;
        v48[0] = v60;
        v48[1] = v61;
        v24 = (unsigned int)v60;
      } while ((_DWORD)v60 != 0);
    }
    qmemcpy(v47, v59, 68);
    v35 = SdkRoutine_85ad30(a1, v49, v47, 3088386);
    if (v35 != 0) {
      v14 = v35;
      goto LABEL_67;
    }
    v36 = v49[0];
    v37 = nn_fs_dbm_PathTool_GetDirectoryNameLength_plt((char*)v49 + 4);
    v13 = SdkRoutine_85ad00(a1, a2, v36, (char*)v49 + 4, v37, 1537538);
    if (v13 == 0) {
      v38 = v49[0];
      if (LODWORD(v57[0]) != LODWORD(v49[0])) {
        v39 = v50;
        if ((_DWORD)v50 == v56) {
          LODWORD(v50) = v54;
        }
        else {
          v13 = SdkRoutine_85ac90(a1, v58);
          if (v13 != 0) {
            goto LABEL_2;
          }
          v39 = v56;
          v38 = v49[0];
        }
        v40 = HIDWORD(v50);
        v41 = *((_DWORD*)a1 + 2);
        HIDWORD(v50) = v39;
        v42 = 2420226;
        LODWORD(v54) = v40;
        if (v38 >= v41 && v41 != 1) {
          goto LABEL_80;
        }
        v43 = *a1;
        memset(v68, 0, sizeof(v68));
        v66 = 0;
        v67 = 0;
        v64 = 0;
        v65 = 0;
        v62 = 0;
        v63 = 0;
        v60 = 0;
        v61 = 0;
        v13 = (*(__int64 (**)(__int64, __int64, __int64*, __int64))(
            *(_QWORD*)v43 + 16LL))(v43, 96LL * v38, &v60, 96);
        if (v13 != 0) {
          goto LABEL_2;
        }
        v14 = 2418178;
        if (HIDWORD(v68[3]) >= v41) {
          goto LABEL_8;
        }
        *(_QWORD*)((char*)v68 + 4) = v50;
        *(_QWORD*)((char*)&v68[1] + 4) = v51;
        *(_QWORD*)((char*)&v68[2] + 4) = v52;
        if (v38 >= *((_DWORD*)a1 + 2)) {
        LABEL_80:
          v14 = 2420226;
          goto LABEL_8;
        }
        v13 = (*(__int64 (**)(_QWORD, __int64, __int64*, __int64))(
            *(_QWORD*)*a1 + 24LL))(*a1, 96LL * v38, &v60, 96);
        if (v13 != 0) {
          goto LABEL_2;
        }
        v44 = v56;
        v45 = *((_DWORD*)a1 + 2);
        if (v56 >= v45 && v45 != 1) {
          goto LABEL_92;
        }
        v46 = *a1;
        memset(v68, 0, sizeof(v68));
        v66 = 0;
        v67 = 0;
        v64 = 0;
        v65 = 0;
        v62 = 0;
        v63 = 0;
        v60 = 0;
        v61 = 0;
        v13 = (*(__int64 (**)(__int64, __int64, __int64*, __int64))(
            *(_QWORD*)v46 + 16LL))(v46, 96LL * v56, &v60, 96);
        if (v13 != 0) {
          goto LABEL_2;
        }
        v42 = 2418178;
        if (HIDWORD(v68[3]) >= v45 ||
            (v42 = 2420226, *(_QWORD*)((char*)v68 + 4) = v54,
             *(_OWORD*)((char*)&v68[1] + 4) = v55,
             (unsigned int)v44 >= *((_DWORD*)a1 + 2))) {
        LABEL_92:
          v14 = v42;
          goto LABEL_8;
        }
        v13 = (*(__int64 (**)(_QWORD, __int64, __int64*, __int64))(
            *(_QWORD*)*a1 + 24LL))(*a1, 96 * v44, &v60, 96);
        if (v13 != 0) {
          goto LABEL_2;
        }
      }
      v13 = SdkRoutine_d6240(a1, v49, v57);
    }
  LABEL_2:
    v14 = v13;
  }
LABEL_8:
  nn_fs_dbm_BufferedAllocationTableStorage_LeaveHoldingCacheSection_plt(a1[2]);
  nn_fs_dbm_BufferedAllocationTableStorage_LeaveHoldingCacheSection_plt(*a1);
  return v14;
}

__int64 nn_fs_dbm_HierarchicalFileTableTemplate_FindDirectoryRecursive(
    __int64* a1, __int64 a2, __int64 a3, unsigned int* a4, __int64 a5)
{
  int v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  unsigned int v17;
  unsigned int v18;
  unsigned int v19;
  unsigned int v20;
  __int64 v22;
  __int64 v23;
  int v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  unsigned __int64 v29;
  __int64 v30;
  _QWORD v31[4];
  struct {
    __int64 v32;
    __int64 v33;
    __int64 v34;
    __int64 v35;
    __int64 v36;
    __int64 v37;
    __int64 v38;
    __int64 v39;
  } v32_;
  _QWORD v40[4];
  unsigned int v41;

  nn_fs_dbm_BufferedAllocationTableStorage_EnterHoldingCacheSection_plt(a1[2]);
  nn_fs_dbm_BufferedAllocationTableStorage_EnterHoldingCacheSection_plt(*a1);
  memset(v31, 0, sizeof(v31));
  nn_fs_dbm_PathTool_PathParser_PathParser_plt(v31);
  v10 = nn_fs_dbm_PathTool_PathParser_Initialize_plt(v31, a5);
  if (v10 != 0) {
    goto LABEL_22;
  }
  v41 = 0;
  v10 = SdkRoutine_85ad90(a1, &v41, a2, a3, v31);
  if (v10 != 0) {
    goto LABEL_22;
  }
  v30 = 0;
  v10 = nn_fs_dbm_PathTool_PathParser_GetAsDirectoryName_plt(v31, a4 + 1, &v30);
  if (v10 != 0) {
    goto LABEL_22;
  }
  if (v30 != 2) {
    if (v30 == 1 && *((_BYTE*)a4 + 4) == 46) {
      *(_QWORD*)a4 = *(_QWORD*)a2;
      v11 = *(_QWORD*)(a2 + 8);
      v12 = *(_QWORD*)(a2 + 16);
      v13 = *(_QWORD*)(a2 + 32);
      *((_QWORD*)a4 + 3) = *(_QWORD*)(a2 + 24);
      *((_QWORD*)a4 + 4) = v13;
      *((_QWORD*)a4 + 1) = v11;
      *((_QWORD*)a4 + 2) = v12;
      v14 = *(_QWORD*)(a2 + 48);
      v15 = *(_QWORD*)(a2 + 56);
      LODWORD(v13) = *(_DWORD*)(a2 + 64);
      *((_QWORD*)a4 + 5) = *(_QWORD*)(a2 + 40);
      v16 = *a4;
      a4[16] = v13;
      *((_QWORD*)a4 + 6) = v14;
      *((_QWORD*)a4 + 7) = v15;
      if ((_DWORD)v16 != 0) {
        v17 = *((_DWORD*)a1 + 2);
        if ((unsigned int)v16 < v17 || v17 == 1) {
          v22 = *a1;
          memset(v40, 0, sizeof(v40));
          v32_.v38 = 0;
          v32_.v39 = 0;
          v32_.v36 = 0;
          v32_.v37 = 0;
          v32_.v34 = 0;
          v32_.v35 = 0;
          v32_.v32 = 0;
          v32_.v33 = 0;
          v10 = (*(__int64 (**)(__int64, __int64, __int64*, __int64))(
              *(_QWORD*)v22 + 16LL))(v22, 96 * v16, &v32_.v32, 96);
          if (v10 == 0) {
            v10 = 2418178;
            if (HIDWORD(v40[3]) < v17) {
              v23 = v32_.v35;
              v24 = v40[0];
              v10 = 0;
              *(_QWORD*)(a2 + 16) = v32_.v34;
              *(_QWORD*)(a2 + 24) = v23;
              v26 = v32_.v38;
              v25 = v32_.v39;
              *(_DWORD*)(a2 + 64) = v24;
              *(_QWORD*)(a2 + 48) = v26;
              *(_QWORD*)(a2 + 56) = v25;
              v27 = v32_.v37;
              *(_QWORD*)(a2 + 32) = v32_.v36;
              *(_QWORD*)(a2 + 40) = v27;
              v28 = v32_.v33;
              *(_QWORD*)a2 = v32_.v32;
              *(_QWORD*)(a2 + 8) = v28;
              v29 = *(_QWORD*)((char*)&v40[1] + 4);
              *(_QWORD*)a3 = *(_QWORD*)((char*)v40 + 4);
              *(_OWORD*)(a3 + 8) =
                  __PAIR128__(*(_QWORD*)((char*)&v40[2] + 4), v29);
            }
          }
        }
        else {
          v10 = 2420226;
        }
        goto LABEL_22;
      }
    LABEL_28:
      v10 = 0;
      goto LABEL_22;
    }
  }
  else if (*((_BYTE*)a4 + 4) == 46 && *((_BYTE*)a4 + 5) == 46) {
    v18 = *(_DWORD*)a2;
    if (*(_DWORD*)a2 == 0) {
      v10 = 3075074;
      goto LABEL_22;
    }
    v32_.v33 = 0;
    v32_.v34 = 0;
    v32_.v32 = 0;
    v10 = SdkRoutine_d4340(a1, (__int64)a4, (__int64)&v32_.v32, v18);
    if (v10 == 0) {
      if (*a4 != 0) {
        v10 = SdkRoutine_d4340(a1, a2, a3, *a4);
        if (v10 != 0) {
          goto LABEL_22;
        }
      }
      else {
        *(_DWORD*)a2 = 0;
      }
      goto LABEL_28;
    }
  LABEL_22:
    v20 = v10;
    nn_fs_dbm_BufferedAllocationTableStorage_LeaveHoldingCacheSection_plt(
        a1[2]);
    nn_fs_dbm_BufferedAllocationTableStorage_LeaveHoldingCacheSection_plt(*a1);
    return v20;
  }
  v10 = 0;
  if (v30 != 0) {
    v19 = v41;
  }
  else {
    v19 = 0;
  }
  *a4 = v19;
  goto LABEL_22;
}

#pragma GCC visibility pop
