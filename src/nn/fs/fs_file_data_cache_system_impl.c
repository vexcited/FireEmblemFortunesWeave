#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 memcpy_plt(_QWORD, _QWORD, _QWORD);
__int64 nn_diag_detail_AbortImpl_plt_856170(_QWORD);
__int64 nn_diag_detail_NotNullImpl_plt(_QWORD);
__int64 nn_fs_detail_FileDataCacheSystem_CommitCachePages_plt(_QWORD, _QWORD,
                                                              _QWORD, _QWORD,
                                                              _QWORD);
__int64 nn_fs_detail_FileDataCacheSystem_DoCacheForce_plt(_QWORD, _QWORD,
                                                          _QWORD, _QWORD,
                                                          _QWORD, _QWORD);
__int64 nn_fs_detail_FileDataCacheSystem_DoCache_plt(_QWORD, _QWORD, _QWORD,
                                                     _QWORD, _QWORD, _QWORD);
__int64 nn_fs_detail_FileDataCacheSystem_DoCompaction_plt(_QWORD);
__int64 nn_fs_detail_FileDataCacheSystem_DoCopy_plt(_QWORD, _QWORD, _QWORD,
                                                    _QWORD, _QWORD);
__int64 nn_fs_detail_FileDataCacheSystem_ReserveFreePagesByGatherCompaction_plt(
    _QWORD, _QWORD, _QWORD, _QWORD);
__int64
    nn_fs_detail_FileDataCacheSystem_ReserveFreePagesBySinglePageReservation_plt(
        _QWORD, _QWORD, _QWORD, _QWORD);
__int64 nn_os_AcquireReadLock_plt(_QWORD);
__int64 nn_os_AcquireWriteLock_plt(_QWORD);
__int64 nn_os_ReleaseReadLock_plt(_QWORD);
__int64 nn_os_ReleaseWriteLock_plt(_QWORD);
__int64 nn_os_SdkMutexType_Lock_plt(_QWORD);
__int64 nn_os_SdkMutexType_Unlock_plt(_QWORD);
__int64 nn_os_WaitLightEvent_plt(_QWORD);
extern __int64 SdkData_e86e00;
extern __int64 SdkData_e86e08;
__int64 fs_file_data_cache_system_12bea0(__int64 a1, __int64 a2, __int64 a3,
                                         unsigned __int64 a4,
                                         unsigned __int64 a5);
__int64 fs_file_data_cache_system_12c024(__int64 a1);
__int64 fs_file_data_cache_system_12c05c(__int64 a1);
__int64 nn_fs_detail_FileDataCacheSystem_Read(__int64 a1, __int64 a2,
                                              __int64 a3, __int64 a4,
                                              __int64 a5, __int64 a6,
                                              __int64 a7, __int64 a8);
__int64 nn_fs_detail_FileDataCacheSystem_DoCache(__int64 a1, __int64 a2,
                                                 __int64 a3, signed __int64* a4,
                                                 __int64 a5, __int64 a6);
__int64 nn_fs_detail_FileDataCacheSystem_DoCacheForce(__int64 a1, __int64* a2,
                                                      __int64 a3,
                                                      signed __int64* a4,
                                                      signed __int64* a5,
                                                      _QWORD* a6);
__int64 nn_fs_detail_FileDataCacheSystem_ReserveFreePagesByGatherCompaction(
    void* this_, void* a2, unsigned __int64 a3, __int64 a4);

__int64 fs_file_data_cache_system_12bea0(__int64 a1, __int64 a2, __int64 a3,
                                         unsigned __int64 a4,
                                         unsigned __int64 a5)
{
  __int64 result;
  unsigned __int64 v11;
  __int64 v12;
  __int64 v13;
  _QWORD* v14;
  __int64* v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  _QWORD* v19;

  result = nn_diag_detail_NotNullImpl_plt(a2);
  if ((result & 1) == 0) {
    result = nn_diag_detail_AbortImpl_plt_856170(result);
  }
  else if ((a5 & (a5 - 1)) == 0) {
    v11 = (a2 + 7 + (a4 << 6)) & 0xFFFFFFFFFFFFFFF8LL;
    if (v11 + 16 * a5 > a3 + a2) {
    LABEL_16:
      result = nn_diag_detail_AbortImpl_plt_856170(result);
      goto LABEL_17;
    }
    *(_DWORD*)(a1 + 8) = 0;
    *(_QWORD*)(a1 + 24) = (a2 + 7) & 0xFFFFFFFFFFFFFFF8LL;
    if (a4 >> 31 != 0) {
    LABEL_17:
      result = nn_diag_detail_AbortImpl_plt_856170(result);
    LABEL_18:
      result = nn_diag_detail_AbortImpl_plt_856170(result);
    LABEL_19:
      nn_diag_detail_AbortImpl_plt_856170(result);
      __udf(0);
    }
    *(_DWORD*)(a1 + 12) = a4;
    if (a4 != 0) {
      v12 = 0;
      v13 = 0;
      do {
        ++v13;
        v14 = (_QWORD*)(*(_QWORD*)(a1 + 24) + v12);
        *v14 = v14;
        v14[1] = v14;
        v14[4] = 0;
        v14[5] = -1;
        v14[2] = v14 + 2;
        v14[3] = v14 + 2;
        v15 = (__int64*)(*(_QWORD*)(a1 + 24) + v12);
        v12 += 64;
        v16 = *v15;
        *v15 = *(_QWORD*)(a1 + 48);
        *(_QWORD*)(v16 + 8) = a1 + 48;
        *(_QWORD*)(*(_QWORD*)(a1 + 48) + 8LL) = v15;
        *(_QWORD*)(a1 + 48) = v16;
      } while (v13 < *(int*)(a1 + 12));
    }
    if (*(_QWORD*)(a1 + 64) != 0) {
      goto LABEL_18;
    }
    *(_QWORD*)(a1 + 64) = v11;
    if (a5 >> 31 != 0) {
      goto LABEL_19;
    }
    *(_DWORD*)(a1 + 16) = a5;
    if (a5 != 0) {
      v17 = 0;
      v18 = 0;
      do {
        ++v18;
        v19 = (_QWORD*)(*(_QWORD*)(a1 + 64) + v17);
        v17 += 16;
        *v19 = v19;
        v19[1] = v19;
      } while (v18 < *(int*)(a1 + 16));
    }
    return result;
  }
  result = nn_diag_detail_AbortImpl_plt_856170(result);
  goto LABEL_16;
}

__int64 fs_file_data_cache_system_12c024(__int64 a1)
{
  __int64 v1;
  __int64 v2;

  v1 = *(_QWORD*)(a1 + 24);
  v2 = SdkData_e86e00;
  *(_DWORD*)(v1 + 8) = 0;
  *(_QWORD*)(v1 + 24) = 0;
  *(_QWORD*)(v1 + 32) = 0;
  *(_QWORD*)(v1 + 40) = 0;
  *(_QWORD*)(v1 + 48) = 0;
  *(_QWORD*)(v1 + 56) = 0;
  *(_QWORD*)(v1 + 64) = 0;
  *(_QWORD*)(v1 + 72) = 0;
  *(_QWORD*)(v1 + 80) = 0;
  *(_QWORD*)(v1 + 88) = 0;
  *(_QWORD*)v1 = v2 + 16;
  *(_QWORD*)(a1 + 24) = v1;
  return 0;
}

__int64 fs_file_data_cache_system_12c05c(__int64 a1)
{
  __int64 v1;
  __int64 v2;

  v1 = *(_QWORD*)(a1 + 24);
  v2 = SdkData_e86e08 + 16;
  *(_DWORD*)(v1 + 8) = 0;
  *(_QWORD*)(v1 + 24) = 0;
  *(_QWORD*)(v1 + 32) = 0;
  *(_QWORD*)(v1 + 40) = 0;
  *(_QWORD*)(v1 + 48) = 0;
  *(_QWORD*)(v1 + 56) = 0;
  *(_QWORD*)(v1 + 64) = 0;
  *(_QWORD*)(v1 + 72) = 0;
  *(_QWORD*)(v1 + 80) = 0;
  *(_QWORD*)v1 = v2;
  *(_QWORD*)(v1 + 88) = 0x20000;
  *(_QWORD*)(a1 + 24) = v1;
  return 0;
}

__int64 nn_fs_detail_FileDataCacheSystem_Read(__int64 a1, __int64 a2,
                                              __int64 a3, __int64 a4,
                                              __int64 a5, __int64 a6,
                                              __int64 a7, __int64 a8)
{
  __int64 v10;
  signed __int64 v12;
  __int64 v13;
  __int64 v14;
  signed __int64 v15;
  __int64 v16;
  bool v17;
  char v18;
  __int64 v19;
  _QWORD* v20;
  bool v21;
  __int64 v23;
  __int64 v24;
  unsigned __int64 v25;
  signed __int64 v26;
  signed __int64 v27;
  unsigned int v28;
  signed __int64 v29;
  __int64 v30;
  unsigned int v31;
  __int64 v34;
  __int64 v35;
  _QWORD v36[5];
  _QWORD v37[2];
  __int64 v38;
  signed __int64 v39;
  __int64 v40;
  __int64 v41;
  signed __int64 v42;
  __int64 v43;
  _QWORD v44[3];

  if (a7 - a6 < 0) {
    a1 = nn_diag_detail_AbortImpl_plt_856170(a1);
  LABEL_51:
    nn_diag_detail_AbortImpl_plt_856170(a1);
    __udf(0);
  }
  v44[2] = a7 - a6;
  v44[0] = a8;
  v44[1] = a6;
  v42 = 0;
  v43 = 0;
  v40 = 0;
  v41 = 0;
  v38 = 0;
  v39 = 0;
  v37[0] = a3;
  v37[1] = a5;
  *(_BYTE*)(a8 + 136) = 1;
  if (a5 < 0) {
    goto LABEL_51;
  }
  v10 = a1;
  v12 = a3 & 0xFFFFFFFFFFFFC000LL;
  v36[0] = a3;
  v36[1] = a5;
  v36[2] = a6;
  v36[3] = a7;
  v36[4] = a2;
  nn_os_AcquireReadLock_plt(a1 + 120);
  v13 = a5 + a3;
  if (v12 < a5 + a3) {
    v34 = 0;
    v35 = 0;
    v14 = 0;
    v15 = 0;
    v16 = 0;
    v17 = false;
    v18 = 0;
    while (2) {
      nn_os_SdkMutexType_Lock_plt(v10 + 116);
      v19 = *(_QWORD*)(*(_QWORD*)(v10 + 16) + 64LL) +
            16LL * (int)((*(_DWORD*)(*(_QWORD*)(v10 + 16) + 16LL) - 1) &
                         ((unsigned __int64)v12 >> 14));
      v20 = (_QWORD*)v19;
      while (1) {
        v20 = (_QWORD*)v20[1];
        v21 = v20 != (_QWORD*)v19;
        if (v20 == (_QWORD*)v19) {
          break;
        }
        if (v20[2] == a2 && v20[3] == v12) {
          nn_os_SdkMutexType_Unlock_plt(v10 + 116);
          if (v17) {
            v35 += 0x4000;
            v40 = v35;
          }
          else {
            v39 = v12;
            v40 = 0x4000;
            LOBYTE(v38) = 1;
            BYTE4(v34) = 1;
            v35 = 0x4000;
          }
          goto LABEL_6;
        }
      }
      nn_os_SdkMutexType_Unlock_plt(v10 + 116);
      v23 = *(_QWORD*)(v10 + 24);
      if (v23 != 0) {
        (*(void (**)(__int64, _QWORD*, signed __int64))(*(_QWORD*)v23 + 32LL))(
            v23, v36, v12);
        v16 = v24;
      }
      if ((v18 & 1) != 0) {
        v25 = v14 + 0x4000;
        if (!v17) {
          v43 = v14 + 0x4000;
          v18 = 1;
          v14 += 0x4000;
          goto LABEL_6;
        }
        v26 = v15 + v14;
        if (v12 >= v15) {
          v27 = v15;
        }
        else {
          v27 = v12;
        }
        if (v26 <= v12 + 0x4000) {
          v26 = v12 + 0x4000;
        }
        if (v14 < 0) {
          v14 = v26 - v27;
          if ((__int64)(v26 - v27 - v25) < (__int64)(2 * v25) / 3) {
            goto LABEL_35;
          }
        }
        else {
          if (v25 >> 16 == 0) {
            v14 = v26 - v27;
            if ((__int64)(v26 - v27 - v25) >= (__int64)(v25 >> 1)) {
              goto LABEL_28;
            }
          LABEL_35:
            BYTE4(v34) = 0;
            v42 = v27;
            v43 = v14;
            v18 = 1;
            v15 = v27;
            LOBYTE(v38) = 0;
            goto LABEL_6;
          }
          if (v25 >> 17 != 0) {
            v29 = v25 / 0xA;
          }
          else {
            v29 =
                (1717986919 * (unsigned __int64)(unsigned int)(2 * v25)) >> 33;
          }
          v14 = v26 - v27;
          if ((__int64)(v26 - v27 - v25) < v29) {
            goto LABEL_35;
          }
        }
      LABEL_28:
        nn_fs_detail_FileDataCacheSystem_DoCopy_plt(v10, a2, a4, &v39, v37);
        LOBYTE(v38) = 0;
        v28 = nn_fs_detail_FileDataCacheSystem_DoCache_plt(v10, a2, a4, &v42,
                                                           v37, v44);
        if (v28 == 0) {
          v18 = 1;
          v14 = 0x4000;
          BYTE4(v34) = 0;
          v15 = v12;
          v42 = v12;
          v43 = 0x4000;
          goto LABEL_6;
        }
        goto LABEL_49;
      }
      if (v17) {
        nn_fs_detail_FileDataCacheSystem_DoCopy_plt(v10, a2, a4, &v39, v37);
        BYTE4(v34) = 0;
        LOBYTE(v38) = 0;
      }
      v14 = 0x4000;
      v15 = v12;
      v18 = 1;
      v42 = v12;
      v43 = 0x4000;
      LOBYTE(v41) = 1;
      LOBYTE(v34) = 1;
    LABEL_6:
      v12 += 0x4000LL;
      v17 = v21;
      if (v12 < v13 + v16) {
        continue;
      }
      break;
    }
    if ((v34 & 0x100000000LL) != 0) {
      nn_fs_detail_FileDataCacheSystem_DoCopy_plt(v10, a2, a4, &v39, v37);
    }
    if ((v34 & 1) != 0) {
      v28 = nn_fs_detail_FileDataCacheSystem_DoCache_plt(v10, a2, a4, &v42, v37,
                                                         v44);
      if (v28 != 0) {
      LABEL_49:
        v31 = v28;
        goto LABEL_48;
      }
    }
  }
  v30 = *(_QWORD*)(v10 + 24);
  if (v30 != 0) {
    (*(void (**)(__int64, _QWORD*))(*(_QWORD*)v30 + 40LL))(v30, v36);
  }
  v31 = 0;
LABEL_48:
  nn_os_ReleaseReadLock_plt(v10 + 120);
  return v31;
}

__int64 nn_fs_detail_FileDataCacheSystem_DoCache(__int64 a1, __int64 a2,
                                                 __int64 a3, signed __int64* a4,
                                                 __int64 a5, __int64 a6)
{
  __int64 v12;
  signed __int64 v13;
  char v14;
  char v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  bool v19;
  char v20;
  __int64 v21;
  _QWORD* v22;
  bool v23;
  unsigned __int64 v25;
  __int64 v26;
  __int64 v27;
  unsigned int v28;
  __int64 v29;
  signed __int64 v30;
  unsigned int v31;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;

  nn_os_ReleaseReadLock_plt(a1 + 120);
  nn_os_AcquireWriteLock_plt(a1 + 120);
  v12 = a4[1];
  v37 = 0;
  v38 = 0;
  v36 = 0;
  v34 = 0;
  v35 = 0;
  if (v12 < 1) {
  LABEL_38:
    v31 = 0;
    goto LABEL_42;
  }
  v13 = *a4;
  v14 = 0;
  v15 = 0;
  v16 = 0;
  v17 = 0;
  v18 = 0;
  v19 = false;
  v20 = 0;
  while (2) {
    v21 = *(_QWORD*)(*(_QWORD*)(a1 + 16) + 64LL) +
          16LL * (int)((*(_DWORD*)(*(_QWORD*)(a1 + 16) + 16LL) - 1) &
                       ((unsigned __int64)v13 >> 14));
    v22 = (_QWORD*)v21;
    while (1) {
      v22 = (_QWORD*)v22[1];
      v23 = v22 != (_QWORD*)v21;
      if (v22 == (_QWORD*)v21) {
        break;
      }
      if (v22[2] == a2 && v22[3] == v13) {
        if (v19) {
          v18 += 0x4000;
          v35 = v18;
        }
        else {
          v15 = 1;
          v34 = v13;
          v35 = 0x4000;
          v18 = 0x4000;
        }
        goto LABEL_4;
      }
    }
    if ((v20 & 1) == 0) {
      if (v19) {
        v29 = v18;
        nn_fs_detail_FileDataCacheSystem_DoCopy_plt(a1, a2, a3, &v34, a5);
        v18 = v29;
        v15 = 0;
      }
      v14 = 1;
      v37 = v13;
      v38 = 0x4000;
      v16 = 0x4000;
      v17 = v13;
      v20 = 1;
      LOBYTE(v36) = 1;
      goto LABEL_4;
    }
    v25 = v16 + 0x4000;
    if (!v19) {
      v38 = v16 + 0x4000;
      v20 = 1;
      v16 += 0x4000;
      goto LABEL_4;
    }
    v26 = v17 + v16;
    if (v13 >= v17) {
      v27 = v17;
    }
    else {
      v27 = v13;
    }
    if (v26 <= v13 + 0x4000) {
      v26 = v13 + 0x4000;
    }
    if (v16 < 0) {
      v16 = v26 - v27;
      if ((__int64)(v26 - v27 - v25) < (__int64)(2 * v25) / 3) {
        goto LABEL_31;
      }
    }
    else {
      if (v25 >> 16 == 0) {
        v16 = v26 - v27;
        if ((__int64)(v26 - v27 - v25) >= (__int64)(v25 >> 1)) {
          goto LABEL_24;
        }
      LABEL_31:
        v15 = 0;
        v37 = v27;
        v38 = v16;
        v20 = 1;
        v17 = v27;
        goto LABEL_4;
      }
      v30 = v25 / 0xA;
      if (v25 >> 17 == 0) {
        v30 = (1717986919 * (unsigned __int64)(unsigned int)(2 * v25)) >> 33;
      }
      v16 = v26 - v27;
      if ((__int64)(v26 - v27 - v25) < v30) {
        goto LABEL_31;
      }
    }
  LABEL_24:
    v33 = v18;
    nn_fs_detail_FileDataCacheSystem_DoCopy_plt(a1, a2, a3, &v34, a5);
    v28 = nn_fs_detail_FileDataCacheSystem_DoCacheForce_plt(a1, a2, a3, &v37,
                                                            a5, a6);
    if (v28 != 0) {
      goto LABEL_41;
    }
    v18 = v33;
    v20 = 1;
    v15 = 0;
    v17 = v13;
    v37 = v13;
    v38 = 0x4000;
    v16 = 0x4000;
  LABEL_4:
    v13 += 0x4000LL;
    v19 = v23;
    if (v13 < a4[1] + *a4) {
      continue;
    }
    break;
  }
  if ((v15 & 1) != 0) {
    nn_fs_detail_FileDataCacheSystem_DoCopy_plt(a1, a2, a3, &v34, a5);
    if ((v14 & 1) == 0) {
      goto LABEL_38;
    }
  }
  else if ((v14 & 1) == 0) {
    goto LABEL_38;
  }
  v28 = nn_fs_detail_FileDataCacheSystem_DoCacheForce_plt(a1, a2, a3, &v37, a5,
                                                          a6);
LABEL_41:
  v31 = v28;
LABEL_42:
  nn_os_ReleaseWriteLock_plt(a1 + 120);
  nn_os_AcquireReadLock_plt(a1 + 120);
  return v31;
}

__int64 nn_fs_detail_FileDataCacheSystem_DoCacheForce(__int64 a1, __int64* a2,
                                                      __int64 a3,
                                                      signed __int64* a4,
                                                      signed __int64* a5,
                                                      _QWORD* a6)
{
  __int64 v6;
  __int64 result;
  signed __int64 v12;
  int v13;
  signed __int64 v14;
  signed __int64 v15;
  signed __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  signed __int64 v20;
  __int64 v22;
  signed __int64 v23;
  __int64 v24;
  signed __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  unsigned __int64 v30;
  signed __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  signed __int64 v39;
  __int64 v40;
  unsigned int v41;
  __int64 v42;
  signed __int64 v43;
  __int64 v44;
  signed __int64 v45;
  __int64 v46;
  __int64 v47;
  int* v48;
  signed __int64 v49;
  __int64 v50;
  int* v51;
  __int64* v52;
  __int64* v53;
  __int64 v54;
  __int64* v55;
  __int64* v56;
  signed __int64 v57;
  __int64 v58;
  __int64 v59;
  __int64* v60;
  __int64 v61;
  signed __int64 v62;
  __int64 v63;
  signed __int64 v64;
  __int64 v65;
  __int64 v66;
  __int64 v67;
  unsigned __int64 v68;
  signed __int64 v69;
  __int64 v70;
  __int64 v71;
  unsigned __int64 v72;
  unsigned int v73;
  __int64 v74;
  __int64 v75;
  __int64 v76;
  __int64 v77;
  __int64 v78;
  __int64 v79;
  int* v80;
  __int64 v81;
  __int64 v82;
  int* v83;
  __int64 v84;
  __int64 v85;
  signed __int64 v86;
  __int64 v87;
  __int64 v88;
  __int64 v89;
  signed __int64 v90;
  __int64 v91;
  unsigned __int64 v92;
  __int64 v93;
  signed __int64 v94;
  __int64 v95;
  __int64 v96;
  unsigned __int64 v97;
  __int64 v98;
  signed __int64 v99;
  signed __int64 v100;
  signed __int64 v101;
  signed __int64 v102;
  signed __int64 v103;
  signed __int64 v104;
  int* v105;
  signed __int64 v106;
  __int64 v107;
  int* v108;
  unsigned __int64 v109;
  __int64 v110;
  signed __int64 v111;
  signed __int64 v112;
  signed __int64 v113;
  bool v114;
  __int64 v115;
  unsigned int v116;
  __int64 v117;
  signed __int64 v118;
  signed __int64 v119;
  signed __int64 v120;
  signed __int64 v121;
  signed __int64 v122;
  int* v123;
  signed __int64 v124;
  __int64 v125;
  int* v126;
  __int64* v127;
  __int64 v128;
  __int64 v129;
  signed __int64 v130;
  __int64 v131;
  __int64 v132;
  __int64 v133;
  signed __int64 v134;
  unsigned int v135;
  __int64 v136;
  signed __int64 v139;

  v6 = *a2;
  v139 = 0;
  result = (*(__int64 (**)(__int64*, signed __int64*))(v6 + 48))(a2, &v139);
  if ((_DWORD)result != 0) {
    return result;
  }
  v12 = v139;
  if (v139 < 0) {
    result = nn_diag_detail_AbortImpl_plt_856170(result);
    goto LABEL_253;
  }
  v13 = *(_DWORD*)(*(_QWORD*)(a1 + 16) + 12LL) +
        *(_DWORD*)(*(_QWORD*)(a1 + 16) + 8LL);
  v15 = *a5;
  v14 = a5[1];
  v16 = *a4;
  v17 = a4[1];
  v18 = (__int64)v13 << 14;
  v19 = v14 + v15;
  v20 = v17 + *a4;
  if (v19 >= *a4 && v20 >= v15) {
    if (v15 <= v16) {
      v22 = *a4;
    }
    else {
      v22 = v15;
    }
    if (v20 >= v19) {
      v23 = v19;
    }
    else {
      v23 = v17 + *a4;
    }
    if (v23 >= v22) {
      if (v23 == v22) {
        goto LABEL_15;
      }
      v136 = v19;
      if (v15 <= v16 && v19 >= v20) {
        v25 = v23;
        v26 = v22;
        v27 = nn_os_ReleaseWriteLock_plt(a1 + 120);
        v28 = 0;
        v29 = 0;
        if (v12 < v26) {
          v30 = v136;
          if (v136 < 0) {
            goto LABEL_108;
          }
        }
        else {
          v30 = v136;
          if ((v25 & 0x8000000000000000LL) == 0) {
            v29 = v26 & ~(v26 >> 63);
            v31 = v12 >= (unsigned __int64)v25 ? v25 : v12;
            v28 = v31 - v29;
            if (v28 < 0) {
              goto LABEL_260;
            }
          }
          if (v136 < v29) {
          LABEL_108:
            v74 = nn_os_AcquireWriteLock_plt(a1 + 120);
            v75 = a6[1];
            if (v25 < v75 || (v76 = a6[2] + v75) < v26) {
              *(_BYTE*)(*a6 + 136LL) = 1;
            }
            else {
              if (v26 <= v75) {
                v77 = a6[1];
              }
              else {
                v77 = v26;
              }
              if (v76 >= v25) {
                v78 = v25;
              }
              else {
                v78 = a6[2] + v75;
              }
              v79 = v78 - v77;
              if (v78 - v77 < 0) {
                goto LABEL_264;
              }
              v80 = (int*)*a6;
              *(_BYTE*)(*a6 + 136LL) = 1;
              if (v78 != v77) {
                v81 = v77 - v75;
                v82 = *v80;
                if ((int)v82 <= 7) {
                  v83 = &v80[4 * v82];
                  *v80 = v82 + 1;
                  *((_QWORD*)v83 + 1) = v81;
                  *((_QWORD*)v83 + 2) = v79;
                  v20 = *a4;
                  v84 = a4[1];
                  v85 = v84 - v18;
                  if (v84 <= v18) {
                    goto LABEL_218;
                  }
                LABEL_123:
                  v86 = v136;
                  if (v13 < 0) {
                  LABEL_265:
                    v74 = nn_diag_detail_AbortImpl_plt_856170(v74);
                  LABEL_266:
                    v98 = nn_diag_detail_AbortImpl_plt_856170(v74);
                  LABEL_267:
                    v65 = nn_diag_detail_AbortImpl_plt_856170(v98);
                  LABEL_268:
                    v65 = nn_diag_detail_AbortImpl_plt_856170(v65);
                  LABEL_269:
                    v87 = nn_diag_detail_AbortImpl_plt_856170(v65);
                  LABEL_270:
                    v91 = nn_diag_detail_AbortImpl_plt_856170(v87);
                  LABEL_271:
                    v117 = nn_diag_detail_AbortImpl_plt_856170(v91);
                  LABEL_272:
                    v98 = nn_diag_detail_AbortImpl_plt_856170(v117);
                  LABEL_273:
                    v98 = nn_diag_detail_AbortImpl_plt_856170(v98);
                    goto LABEL_274;
                  }
                  v20 += v85;
                  goto LABEL_219;
                }
                *((_QWORD*)v80 + 15) = v81;
                *((_QWORD*)v80 + 16) = v79;
                *((_BYTE*)v80 + 137) = 1;
                v20 = *a4;
                v84 = a4[1];
                v85 = v84 - v18;
                if (v84 > v18) {
                  goto LABEL_123;
                }
              LABEL_218:
                v86 = v136;
                v18 = v84;
              LABEL_219:
                if (v18 >
                    (unsigned __int64)((__int64)(*(_DWORD*)(*(_QWORD*)(a1 +
                                                                       16) +
                                                            12LL) +
                                                 *(_DWORD*)(*(_QWORD*)(a1 +
                                                                       16) +
                                                            8LL))
                                       << 14)) {
                LABEL_259:
                  v27 = nn_diag_detail_AbortImpl_plt_856170(v74);
                LABEL_260:
                  result = nn_diag_detail_AbortImpl_plt_856170(v27);
                  goto LABEL_261;
                }
                if (v18 != 0) {
                  if (v18 == 0x4000) {
                    v74 =
                        nn_fs_detail_FileDataCacheSystem_ReserveFreePagesBySinglePageReservation_plt(
                            a1, a2, v20, 0x4000);
                    v86 = v136;
                    v61 = v74;
                    if (v136 < v20) {
                      goto LABEL_236;
                    }
                  }
                  else {
                    v74 =
                        nn_fs_detail_FileDataCacheSystem_ReserveFreePagesByGatherCompaction_plt(
                            a1, a2, v20, v18);
                    v86 = v136;
                    v61 = v74;
                    if (v136 < v20) {
                      goto LABEL_236;
                    }
                  }
                }
                else {
                  v61 = 0;
                  if (v86 < v20) {
                    goto LABEL_236;
                  }
                }
                v130 = v20 + v18;
                if (v20 + v18 >= v15) {
                  if (v20 <= v15) {
                    v113 = v15;
                  }
                  else {
                    v113 = v20;
                  }
                  if (v86 < v130) {
                    v130 = v86;
                  }
                  v115 = v130 - v113;
                  v114 = v115 == 0;
                  if (v115 < 0) {
                    goto LABEL_266;
                  }
                  goto LABEL_234;
                }
              LABEL_236:
                v59 = a1;
                v60 = a2;
                v62 = v20;
                v63 = v18;
                goto LABEL_237;
              }
            }
            v20 = *a4;
            v84 = a4[1];
            v85 = v84 - v18;
            if (v84 > v18) {
              goto LABEL_123;
            }
            goto LABEL_218;
          }
        }
        v70 = v29 + v28;
        if (v70 < v15) {
          goto LABEL_108;
        }
        if (v15 <= v29) {
          v71 = v29;
        }
        else {
          v71 = v15;
        }
        if (v70 >= v30) {
          v72 = v30;
        }
        else {
          v72 = v70;
        }
        if ((__int64)(v72 - v71) < 0) {
          goto LABEL_263;
        }
        if (v72 == v71) {
          goto LABEL_108;
        }
        v73 = (*(__int64 (**)(__int64*, __int64, __int64, unsigned __int64))(
            *a2 + 16))(a2, v71, a3 + v71 - v15, v72 - v71);
        if (v73 == 0) {
          goto LABEL_108;
        }
      LABEL_251:
        v135 = v73;
        nn_os_AcquireWriteLock_plt(a1 + 120);
        return v135;
      }
      if (v17 > v18) {
        if (v13 < 0) {
        LABEL_261:
          result = nn_diag_detail_AbortImpl_plt_856170(result);
          goto LABEL_262;
        }
        v57 = v17 - v18 + v16;
        v17 = (__int64)v13 << 14;
        if (v57 <= v22) {
          v16 = v57;
        }
        else {
          v16 = v22 & 0xFFFFFFFFFFFFC000LL;
        }
        v20 = v18 + v16;
      }
      if (v16 <= v22 && v23 <= v20) {
        if (v17 > (unsigned __int64)v18) {
        LABEL_262:
          v27 = nn_diag_detail_AbortImpl_plt_856170(result);
        LABEL_263:
          v74 = nn_diag_detail_AbortImpl_plt_856170(v27);
        LABEL_264:
          v74 = nn_diag_detail_AbortImpl_plt_856170(v74);
          goto LABEL_265;
        }
        if (v17 != 0) {
          if (v17 == 0x4000) {
            v58 =
                nn_fs_detail_FileDataCacheSystem_ReserveFreePagesBySinglePageReservation_plt(
                    a1, a2, v16, 0x4000);
          }
          else {
            v58 =
                nn_fs_detail_FileDataCacheSystem_ReserveFreePagesByGatherCompaction_plt(
                    a1, a2, v16, v17);
          }
          v18 = v58;
        }
        else {
          v18 = 0;
        }
        v87 = nn_os_ReleaseWriteLock_plt(a1 + 120);
        v88 = 0;
        v89 = 0;
        if (v12 >= v16 && (v20 & 0x8000000000000000LL) == 0) {
          v89 = v16 & ~(v16 >> 63);
          v90 = v12 >= (unsigned __int64)v20 ? v20 : v12;
          v88 = v90 - v89;
          if (v88 < 0) {
            goto LABEL_270;
          }
        }
        v91 = 0;
        if (v20 < v89 || (__int64)(v92 = v89 + v88) < v16) {
        LABEL_192:
          v116 = v91;
          v117 = nn_os_AcquireWriteLock_plt(a1 + 120);
          v118 = a6[1];
          if (v20 < v118 || (v119 = a6[2] + v118) < v16) {
            result = v116;
            *(_BYTE*)(*a6 + 136LL) = 1;
          }
          else {
            if (v16 <= v118) {
              v120 = a6[1];
            }
            else {
              v120 = v16;
            }
            if (v119 >= v20) {
              v121 = v20;
            }
            else {
              v121 = a6[2] + v118;
            }
            v122 = v121 - v120;
            if (v121 - v120 < 0) {
              goto LABEL_272;
            }
            v123 = (int*)*a6;
            result = v116;
            *(_BYTE*)(*a6 + 136LL) = 1;
            if (v121 != v120) {
              v124 = v120 - v118;
              v125 = *v123;
              if ((int)v125 > 7) {
                *((_QWORD*)v123 + 15) = v124;
                *((_QWORD*)v123 + 16) = v122;
                *((_BYTE*)v123 + 137) = 1;
                if (v116 == 0) {
                  goto LABEL_241;
                }
              }
              else {
                v126 = &v123[4 * v125];
                *v123 = v125 + 1;
                *((_QWORD*)v126 + 1) = v124;
                *((_QWORD*)v126 + 2) = v122;
                if (v116 == 0) {
                LABEL_241:
                  v132 = nn_fs_detail_FileDataCacheSystem_CommitCachePages_plt(
                      a1, a2, v18, v16, v17);
                  v133 = v136;
                  if (v15 <= v16) {
                    v134 = v16;
                  }
                  else {
                    v134 = v15;
                  }
                  if (v20 < v136) {
                    v133 = v20;
                  }
                  if (v133 - v134 >= 0) {
                    if (v133 != v134) {
                      memcpy_plt(a3 + v134 - v15, v18 + v134 - v16,
                                 v133 - v134);
                    }
                    return 0;
                  }
                LABEL_275:
                  nn_diag_detail_AbortImpl_plt_856170(v132);
                  __udf(0);
                }
              }
            LABEL_207:
              v52 = *(__int64**)(a1 + 96);
              if (v52 == (__int64*)(a1 + 88)) {
              LABEL_210:
                result = nn_diag_detail_AbortImpl_plt_856170(result);
              }
              else {
                while (*((_DWORD*)v52 + 4) !=
                       (unsigned int)((unsigned __int64)(v18 - *(_QWORD*)a1) >>
                                      14)) {
                  v52 = (__int64*)v52[1];
                  if (v52 == (__int64*)(a1 + 88)) {
                    goto LABEL_210;
                  }
                }
              }
              v127 = (__int64*)v52[1];
              v128 = *v127;
              *(_QWORD*)(*v52 + 8) = v127;
              *v127 = *v52;
              *(_QWORD*)(v128 + 8) = v52;
              *v52 = v128;
              v55 = (__int64*)(a1 + 72);
              *(_DWORD*)(a1 + 40) -= *((_DWORD*)v52 + 5);
              v56 = (__int64*)(a1 + 72);
              while (1) {
                v56 = (__int64*)v56[1];
                if (v56 == v55) {
                  goto LABEL_215;
                }
                if (*((_DWORD*)v52 + 4) < *((_DWORD*)v56 + 4)) {
                  goto LABEL_216;
                }
              }
            }
          }
          if ((_DWORD)result == 0) {
            goto LABEL_241;
          }
          goto LABEL_207;
        }
        if (v16 <= v89) {
          v93 = v89;
        }
        else {
          v93 = v16;
        }
        if (v92 >= v20) {
          v94 = v20;
        }
        else {
          v94 = v92;
        }
        if (v94 - v93 < 0) {
          goto LABEL_271;
        }
        if (v94 == v93) {
          LODWORD(v91) = 0;
          goto LABEL_192;
        }
      LABEL_191:
        LODWORD(v91) = (*(__int64 (**)(__int64*))(*a2 + 16))(a2);
        goto LABEL_192;
      }
      v64 = v23;
      v16 = v22;
      v65 = nn_os_ReleaseWriteLock_plt(a1 + 120);
      v66 = 0;
      v67 = 0;
      if (v12 < v16) {
        v68 = v136;
        if (v136 < 0) {
          goto LABEL_156;
        }
      }
      else {
        v68 = v136;
        if ((v64 & 0x8000000000000000LL) == 0) {
          v67 = v16 & ~(v16 >> 63);
          v69 = v12 >= (unsigned __int64)v64 ? v64 : v12;
          v66 = v69 - v67;
          if (v66 < 0) {
            goto LABEL_268;
          }
        }
        if (v136 < v67) {
          goto LABEL_156;
        }
      }
      v95 = v67 + v66;
      if (v95 >= v15) {
        if (v15 <= v67) {
          v96 = v67;
        }
        else {
          v96 = v15;
        }
        if (v95 >= v68) {
          v97 = v68;
        }
        else {
          v97 = v95;
        }
        if ((__int64)(v97 - v96) < 0) {
          goto LABEL_269;
        }
        if (v97 != v96) {
          v73 = (*(__int64 (**)(__int64*, __int64, __int64, unsigned __int64))(
              *a2 + 16))(a2, v96, a3 + v96 - v15, v97 - v96);
          if (v73 != 0) {
            goto LABEL_251;
          }
        }
      }
    LABEL_156:
      v98 = nn_os_AcquireWriteLock_plt(a1 + 120);
      v99 = v64;
      v100 = a6[1];
      if (v64 < v100 || (v101 = a6[2] + v100) < v16) {
        *(_BYTE*)(*a6 + 136LL) = 1;
      }
      else {
        if (v16 <= v100) {
          v102 = a6[1];
        }
        else {
          v102 = v16;
        }
        if (v101 >= v64) {
          v103 = v64;
        }
        else {
          v103 = a6[2] + v100;
        }
        v104 = v103 - v102;
        if (v103 - v102 < 0) {
          goto LABEL_273;
        }
        v105 = (int*)*a6;
        *(_BYTE*)(*a6 + 136LL) = 1;
        if (v103 != v102) {
          v106 = v102 - v100;
          v107 = *v105;
          if ((int)v107 <= 7) {
            v108 = &v105[4 * v107];
            *v105 = v107 + 1;
            *((_QWORD*)v108 + 1) = v106;
            *((_QWORD*)v108 + 2) = v104;
            v20 = (v16 + 0x3FFF) & 0xFFFFFFFFFFFFC000LL;
            v109 = v99 & 0xFFFFFFFFFFFFC000LL;
            v110 = (v99 & 0xFFFFFFFFFFFFC000LL) - v20;
            if (v110 < 0) {
              goto LABEL_250;
            }
          LABEL_171:
            v111 = v136;
            if (v18 >= v110) {
              v18 = v110;
            }
            else {
              if (v13 < 0) {
              LABEL_274:
                v132 = nn_diag_detail_AbortImpl_plt_856170(v98);
                goto LABEL_275;
              }
              v20 = v109 - v18;
            }
            if (v18 >
                (unsigned __int64)((__int64)(*(_DWORD*)(*(_QWORD*)(a1 + 16) +
                                                        12LL) +
                                             *(_DWORD*)(*(_QWORD*)(a1 + 16) +
                                                        8LL))
                                   << 14)) {
              goto LABEL_267;
            }
            if (v18 != 0) {
              if (v18 == 0x4000) {
                v98 =
                    nn_fs_detail_FileDataCacheSystem_ReserveFreePagesBySinglePageReservation_plt(
                        a1, a2, v20, 0x4000);
              }
              else {
                v98 =
                    nn_fs_detail_FileDataCacheSystem_ReserveFreePagesByGatherCompaction_plt(
                        a1, a2, v20, v18);
              }
              v111 = v136;
              v61 = v98;
            }
            else {
              v61 = 0;
            }
            if (v111 < v20) {
              goto LABEL_236;
            }
            v112 = v20 + v18;
            if (v20 + v18 < v15) {
              goto LABEL_236;
            }
            if (v20 <= v15) {
              v113 = v15;
            }
            else {
              v113 = v20;
            }
            if (v111 < v112) {
              v112 = v111;
            }
            v115 = v112 - v113;
            v114 = v115 == 0;
            if (v115 >= 0) {
            LABEL_234:
              if (!v114) {
                v131 = v61;
                memcpy_plt(v61 + v113 - v20, a3 + v113 - v15, v115);
                v61 = v131;
              }
              goto LABEL_236;
            }
            nn_diag_detail_AbortImpl_plt_856170(v98);
            goto LABEL_191;
          }
          *((_QWORD*)v105 + 15) = v106;
          *((_QWORD*)v105 + 16) = v104;
          *((_BYTE*)v105 + 137) = 1;
          v20 = (v16 + 0x3FFF) & 0xFFFFFFFFFFFFC000LL;
          v109 = v99 & 0xFFFFFFFFFFFFC000LL;
          v110 = (v99 & 0xFFFFFFFFFFFFC000LL) - v20;
          if (v110 >= 0) {
            goto LABEL_171;
          }
        LABEL_250:
          v73 = nn_diag_detail_AbortImpl_plt_856170(v98);
          goto LABEL_251;
        }
      }
      v20 = (v16 + 0x3FFF) & 0xFFFFFFFFFFFFC000LL;
      v109 = v99 & 0xFFFFFFFFFFFFC000LL;
      v110 = (v99 & 0xFFFFFFFFFFFFC000LL) - v20;
      if (v110 >= 0) {
        goto LABEL_171;
      }
      goto LABEL_250;
    }
  LABEL_253:
    result = nn_diag_detail_AbortImpl_plt_856170(result);
  LABEL_254:
    result = nn_diag_detail_AbortImpl_plt_856170(result);
    goto LABEL_255;
  }
LABEL_15:
  if (v17 > v18) {
    if ((v13 & 0x80000000) == 0) {
      v16 = v20 - v18;
      v17 = (__int64)v13 << 14;
      goto LABEL_19;
    }
    goto LABEL_254;
  }
  if (v17 > (unsigned __int64)v18) {
  LABEL_255:
    v33 = nn_diag_detail_AbortImpl_plt_856170(result);
  LABEL_256:
    v38 = nn_diag_detail_AbortImpl_plt_856170(v33);
    goto LABEL_257;
  }
LABEL_19:
  if (v17 != 0) {
    if (v17 == 0x4000) {
      v24 =
          nn_fs_detail_FileDataCacheSystem_ReserveFreePagesBySinglePageReservation_plt(
              a1, a2, v16, 0x4000);
    }
    else {
      v24 =
          nn_fs_detail_FileDataCacheSystem_ReserveFreePagesByGatherCompaction_plt(
              a1, a2, v16, v17);
    }
    v32 = v24;
  }
  else {
    v32 = 0;
  }
  v33 = nn_os_ReleaseWriteLock_plt(a1 + 120);
  v34 = v17 + v16;
  v35 = 0;
  v36 = 0;
  if (v12 >= v16 && (v34 & 0x8000000000000000LL) == 0) {
    v36 = v16 & ~(v16 >> 63);
    v37 = v12 >= (unsigned __int64)v34 ? v17 + v16 : v12;
    v35 = v37 - v36;
    if (v35 < 0) {
      goto LABEL_256;
    }
  }
  v38 = 0;
  if (v34 >= v36) {
    v39 = v36 + v35;
    if (v39 >= v16) {
      if (v16 <= v36) {
        v40 = v36;
      }
      else {
        v40 = v16;
      }
      if (v39 >= (unsigned __int64)v34) {
        v39 = v17 + v16;
      }
      if (v39 - v40 >= 0) {
        if (v39 == v40) {
          LODWORD(v38) = 0;
        }
        else {
          LODWORD(v38) =
              (*(__int64 (**)(__int64*, __int64, __int64, signed __int64))(
                  *a2 + 16))(a2, v40, v32 + v40 - v16, v39 - v40);
        }
        goto LABEL_52;
      }
    LABEL_257:
      v42 = nn_diag_detail_AbortImpl_plt_856170(v38);
    LABEL_258:
      v74 = nn_diag_detail_AbortImpl_plt_856170(v42);
      goto LABEL_259;
    }
  }
LABEL_52:
  v41 = v38;
  v42 = nn_os_AcquireWriteLock_plt(a1 + 120);
  v43 = a6[1];
  if (v34 < v43 || (v44 = a6[2] + v43) < v16) {
    result = v41;
    *(_BYTE*)(*a6 + 136LL) = 1;
  LABEL_66:
    if ((_DWORD)result == 0) {
      goto LABEL_88;
    }
    goto LABEL_67;
  }
  if (v16 <= v43) {
    v45 = a6[1];
  }
  else {
    v45 = v16;
  }
  if (v44 >= v34) {
    v46 = v17 + v16;
  }
  else {
    v46 = a6[2] + v43;
  }
  v47 = v46 - v45;
  if (v46 - v45 < 0) {
    goto LABEL_258;
  }
  v48 = (int*)*a6;
  result = v41;
  *(_BYTE*)(*a6 + 136LL) = 1;
  if (v46 == v45) {
    goto LABEL_66;
  }
  v49 = v45 - v43;
  v50 = *v48;
  if ((int)v50 <= 7) {
    v51 = &v48[4 * v50];
    *v48 = v50 + 1;
    *((_QWORD*)v51 + 1) = v49;
    *((_QWORD*)v51 + 2) = v47;
    if (v41 == 0) {
      goto LABEL_88;
    }
    goto LABEL_67;
  }
  *((_QWORD*)v48 + 15) = v49;
  *((_QWORD*)v48 + 16) = v47;
  *((_BYTE*)v48 + 137) = 1;
  if (v41 == 0) {
  LABEL_88:
    v59 = a1;
    v60 = a2;
    v61 = v32;
    v62 = v16;
    v63 = v17;
  LABEL_237:
    nn_fs_detail_FileDataCacheSystem_CommitCachePages_plt(v59, v60, v61, v62,
                                                          v63);
    return 0;
  }
LABEL_67:
  v52 = *(__int64**)(a1 + 96);
  if (v52 == (__int64*)(a1 + 88)) {
  LABEL_70:
    result = nn_diag_detail_AbortImpl_plt_856170(result);
  }
  else {
    while (*((_DWORD*)v52 + 4) !=
           (unsigned int)((unsigned __int64)(v32 - *(_QWORD*)a1) >> 14)) {
      v52 = (__int64*)v52[1];
      if (v52 == (__int64*)(a1 + 88)) {
        goto LABEL_70;
      }
    }
  }
  v53 = (__int64*)v52[1];
  v54 = *v53;
  *(_QWORD*)(*v52 + 8) = v53;
  *v53 = *v52;
  *(_QWORD*)(v54 + 8) = v52;
  *v52 = v54;
  v55 = (__int64*)(a1 + 72);
  *(_DWORD*)(a1 + 40) -= *((_DWORD*)v52 + 5);
  v56 = (__int64*)(a1 + 72);
  while (1) {
    v56 = (__int64*)v56[1];
    if (v56 == v55) {
      break;
    }
    if (*((_DWORD*)v52 + 4) < *((_DWORD*)v56 + 4)) {
      goto LABEL_216;
    }
  }
LABEL_215:
  v56 = v55;
LABEL_216:
  v129 = *v52;
  *v52 = *v56;
  *(_QWORD*)(v129 + 8) = v56;
  *(_QWORD*)(*v56 + 8) = v52;
  *v56 = v129;
  *(_DWORD*)(a1 + 36) += *((_DWORD*)v52 + 5);
  return result;
}

__int64 nn_fs_detail_FileDataCacheSystem_ReserveFreePagesByGatherCompaction(
    void* this_, void* a2, unsigned __int64 a3, __int64 a4)
{
  unsigned __int64 v4;
  __int64 v5;
  char* v6;
  char* v7;
  char* v12;
  unsigned __int64 v13;
  char* v14;
  __int64 v15;
  __int64 v16;
  __int64 v18;
  __int64* v19;
  __int64 v20;
  __int64 v21;
  _QWORD* v22;
  __int64* v23;
  __int64 v24;
  __int64 v25;
  char* v26;
  int v27;
  int v28;
  __int64** v29;
  __int64* v30;
  __int64* v31;
  int v32;
  __int64** v33;
  __int64* v34;
  __int64* v35;
  _QWORD* v36;
  char* v37;
  int v38;
  char* v39;
  int v40;
  char* v41;
  __int64 v42;
  _QWORD* v43;
  char* v44;
  _DWORD* v45;
  __int64 v46;
  char* v47;
  int v48;
  int v49;
  __int64** v50;
  __int64* v51;
  __int64* v52;
  int v53;
  __int64** v54;
  __int64* v55;
  __int64* v56;
  _QWORD* v57;
  char* v58;
  int v59;
  char* v60;
  int v61;
  char* v62;
  __int64 v63;
  _QWORD* v64;
  __int64 v65;
  int v66;
  int v67;
  int v68;
  int v69;
  int v70;
  int v71;
  __int64 v72;
  int v73;
  int v74;
  __int64 v75;
  __int64* v76;
  __int64 v77;
  _QWORD* v78;
  __int64* v79;
  __int64 v80;
  char* v81;

  v4 = (unsigned __int64)a4 >> 14;
  v5 = a4 + a3;
  v6 = (char*)this_ + 72;
  v7 = (char*)this_ + 56;
  v12 = (char*)this_ + 88;
LABEL_4:
  v13 = a3;
  if (a4 >= 1) {
    do {
      v15 = *((_QWORD*)this_ + 2);
      v16 = *(_QWORD*)(v15 + 64) +
            16LL * (int)((*(_DWORD*)(v15 + 16) - 1) & (v13 >> 14));
      do {
        v16 = *(_QWORD*)(v16 + 8);
        if (v16 == *(_QWORD*)(v15 + 64) +
                       16LL * (int)((*(_DWORD*)(v15 + 16) - 1) & (v13 >> 14))) {
          goto LABEL_8;
        }
      } while (*(void**)(v16 + 16) != a2 || *(_QWORD*)(v16 + 24) != v13);
      v18 = v16 - 16;
      if (v16 - 16 != v15 + 32) {
        v19 = *(__int64**)(v16 - 8);
        v20 = *v19;
        *(_QWORD*)(*(_QWORD*)(v16 - 16) + 8LL) = v19;
        *v19 = *(_QWORD*)(v16 - 16);
        *(_QWORD*)(v20 + 8) = v18;
        *(_QWORD*)(v16 - 16) = v20;
      }
      --*(_DWORD*)(v15 + 8);
      v21 = *(_QWORD*)(v16 - 16);
      *(_QWORD*)(v16 - 16) = v15 + 48;
      v22 = *(_QWORD**)(v15 + 56);
      *(_QWORD*)(v21 + 8) = v22;
      *v22 = v21;
      *(_QWORD*)(v15 + 56) = v18;
      LODWORD(v22) = *(_DWORD*)(v15 + 16) - 1;
      ++*(_DWORD*)(v15 + 12);
      if (v16 !=
          *(_QWORD*)(v15 + 64) +
              16LL * (int)((unsigned int)v22 & (*(_QWORD*)(v16 + 24) >> 14))) {
        v23 = *(__int64**)(v16 + 8);
        v24 = *v23;
        *(_QWORD*)(*(_QWORD*)v16 + 8LL) = v23;
        *v23 = *(_QWORD*)v16;
        *(_QWORD*)(v24 + 8) = v16;
        *(_QWORD*)v16 = v24;
      }
      v25 = (**(_QWORD**)(v16 + 32) - *(_QWORD*)this_) >> 14;
      v26 = *((char**)this_ + 10);
      if (v26 == v6) {
      LABEL_24:
        v29 = *((__int64***)this_ + 8);
        v30 = v29[1];
        v31 = (__int64*)*v30;
        (*v29)[1] = (__int64)v30;
        *v30 = (__int64)*v29;
        v31[1] = (__int64)v29;
        *v29 = v31;
        *((_DWORD*)v29 + 4) = v25;
        *((_DWORD*)v29 + 5) = 1;
        v14 = v6;
        while (1) {
          v14 = *((char**)v14 + 1);
          if (v14 == v6) {
            break;
          }
          if ((signed __int32)*((_DWORD*)v14 + 4) > (int)v25) {
            goto LABEL_7;
          }
        }
        v14 = v6;
      LABEL_7:
        *v29 = *(__int64**)v14;
        v31[1] = (__int64)v14;
        *(_QWORD*)(*(_QWORD*)v14 + 8LL) = v29;
        *(_QWORD*)v14 = v31;
        ++*((_DWORD*)this_ + 9);
      }
      else {
        while (1) {
          v27 = *((_DWORD*)v26 + 4);
          if (v27 == (_DWORD)v25 + 1) {
            break;
          }
          v28 = *((_DWORD*)v26 + 5);
          if (v28 + v27 == (_DWORD)v25) {
            *((_DWORD*)v26 + 5) = v28 + 1;
            ++*((_DWORD*)this_ + 9);
            if (v26 != *((char**)this_ + 10)) {
              goto LABEL_31;
            }
            goto LABEL_37;
          }
          v26 = *((char**)v26 + 1);
          if (v26 == v6) {
            goto LABEL_24;
          }
        }
        v32 = *((_DWORD*)v26 + 5) + 1;
        *((_DWORD*)v26 + 4) = v25;
        *((_DWORD*)v26 + 5) = v32;
        ++*((_DWORD*)this_ + 9);
        if (v26 != *((char**)this_ + 10)) {
        LABEL_31:
          v33 = (__int64**)v26;
          do {
            v37 = (char*)*v33;
            v38 = *((_DWORD*)*v33 + 4);
            if (*((_DWORD*)v37 + 5) + v38 != *((_DWORD*)v26 + 4)) {
              break;
            }
            *((_DWORD*)v26 + 4) = v38;
            *((_DWORD*)v26 + 5) += *((_DWORD*)v37 + 5);
            v35 = *(__int64**)v37;
            if (v37 == v6) {
              v33 = (__int64**)v37;
            }
            else {
              v33 = *((__int64***)v37 + 1);
              v34 = *v33;
              v35[1] = (__int64)v33;
              *v33 = *(__int64**)v37;
              v34[1] = (__int64)v37;
              v35 = v34;
            }
            *(_QWORD*)v37 = v7;
            v36 = *((_QWORD**)this_ + 8);
            v35[1] = (__int64)v36;
            *v36 = v35;
            *((_QWORD*)this_ + 8) = v37;
          } while (v33 != *((__int64***)this_ + 10));
        }
      LABEL_37:
        v39 = *((char**)v26 + 1);
        if (v39 != v6) {
          do {
            v40 = *((_DWORD*)v26 + 5);
            if (v40 + *((_DWORD*)v26 + 4) != *((_DWORD*)v39 + 4)) {
              break;
            }
            *((_DWORD*)v26 + 5) = *((_DWORD*)v39 + 5) + v40;
            v41 = *((char**)v39 + 1);
            v42 = *(_QWORD*)v41;
            *(_QWORD*)(*(_QWORD*)v39 + 8LL) = v41;
            *(_QWORD*)v41 = *(_QWORD*)v39;
            *(_QWORD*)(v42 + 8) = v39;
            *(_QWORD*)v39 = v7;
            v43 = *((_QWORD**)this_ + 8);
            *(_QWORD*)(v42 + 8) = v43;
            *v43 = v42;
            *((_QWORD*)this_ + 8) = v39;
            v39 = v41;
          } while (v41 != v6);
        }
      }
    LABEL_8:
      v13 += 0x4000LL;
    } while ((__int64)v13 < v5);
  }
  while ((signed __int32)*((_DWORD*)this_ + 9) < (int)v4) {
    v45 = *((_DWORD**)this_ + 2);
    if (v45[2] == 0) {
    LABEL_74:
      nn_os_ReleaseWriteLock_plt((char*)this_ + 120);
      nn_os_WaitLightEvent_plt((char*)this_ + 104);
      nn_os_AcquireWriteLock_plt((char*)this_ + 120);
      goto LABEL_4;
    }
    v46 = (*(_QWORD*)(*(__int64 (**)(_DWORD*))(*(_QWORD*)v45 + 32LL))(v45) -
           *(_QWORD*)this_) >>
          14;
    v47 = *((char**)this_ + 10);
    if (v47 == v6) {
    LABEL_49:
      v50 = *((__int64***)this_ + 8);
      v51 = v50[1];
      v52 = (__int64*)*v51;
      (*v50)[1] = (__int64)v51;
      *v51 = (__int64)*v50;
      v52[1] = (__int64)v50;
      *v50 = v52;
      *((_DWORD*)v50 + 4) = v46;
      *((_DWORD*)v50 + 5) = 1;
      v44 = v6;
      while (1) {
        v44 = *((char**)v44 + 1);
        if (v44 == v6) {
          break;
        }
        if ((signed __int32)*((_DWORD*)v44 + 4) > (int)v46) {
          goto LABEL_42;
        }
      }
      v44 = v6;
    LABEL_42:
      *v50 = *(__int64**)v44;
      v52[1] = (__int64)v44;
      *(_QWORD*)(*(_QWORD*)v44 + 8LL) = v50;
      *(_QWORD*)v44 = v52;
      ++*((_DWORD*)this_ + 9);
    }
    else {
      while (1) {
        v48 = *((_DWORD*)v47 + 4);
        if (v48 == (_DWORD)v46 + 1) {
          v53 = *((_DWORD*)v47 + 5) + 1;
          *((_DWORD*)v47 + 4) = v46;
          *((_DWORD*)v47 + 5) = v53;
          ++*((_DWORD*)this_ + 9);
          if (v47 == *((char**)this_ + 10)) {
            goto LABEL_62;
          }
          goto LABEL_56;
        }
        v49 = *((_DWORD*)v47 + 5);
        if (v49 + v48 == (_DWORD)v46) {
          break;
        }
        v47 = *((char**)v47 + 1);
        if (v47 == v6) {
          goto LABEL_49;
        }
      }
      *((_DWORD*)v47 + 5) = v49 + 1;
      ++*((_DWORD*)this_ + 9);
      if (v47 != *((char**)this_ + 10)) {
      LABEL_56:
        v54 = (__int64**)v47;
        do {
          v58 = (char*)*v54;
          v59 = *((_DWORD*)*v54 + 4);
          if (*((_DWORD*)v58 + 5) + v59 != *((_DWORD*)v47 + 4)) {
            break;
          }
          *((_DWORD*)v47 + 4) = v59;
          *((_DWORD*)v47 + 5) += *((_DWORD*)v58 + 5);
          v56 = *(__int64**)v58;
          if (v58 == v6) {
            v54 = (__int64**)v58;
          }
          else {
            v54 = *((__int64***)v58 + 1);
            v55 = *v54;
            v56[1] = (__int64)v54;
            *v54 = *(__int64**)v58;
            v55[1] = (__int64)v58;
            v56 = v55;
          }
          *(_QWORD*)v58 = v7;
          v57 = *((_QWORD**)this_ + 8);
          v56[1] = (__int64)v57;
          *v57 = v56;
          *((_QWORD*)this_ + 8) = v58;
        } while (v54 != *((__int64***)this_ + 10));
      }
    LABEL_62:
      v60 = *((char**)v47 + 1);
      if (v60 != v6) {
        do {
          v61 = *((_DWORD*)v47 + 5);
          if (v61 + *((_DWORD*)v47 + 4) != *((_DWORD*)v60 + 4)) {
            break;
          }
          *((_DWORD*)v47 + 5) = *((_DWORD*)v60 + 5) + v61;
          v62 = *((char**)v60 + 1);
          v63 = *(_QWORD*)v62;
          *(_QWORD*)(*(_QWORD*)v60 + 8LL) = v62;
          *(_QWORD*)v62 = *(_QWORD*)v60;
          *(_QWORD*)(v63 + 8) = v60;
          *(_QWORD*)v60 = v7;
          v64 = *((_QWORD**)this_ + 8);
          *(_QWORD*)(v63 + 8) = v64;
          *v64 = v63;
          *((_QWORD*)this_ + 8) = v60;
          v60 = v62;
        } while (v62 != v6);
      }
    }
  }
  v65 = *((_QWORD*)this_ + 12);
  if ((char*)v65 == v12) {
    if ((signed __int32)*((_DWORD*)this_ + 8) < (int)v4) {
      goto LABEL_74;
    }
  }
  else {
    v66 = 0;
    v67 = 0;
    do {
      v68 = *(_DWORD*)(v65 + 16);
      v69 = *(_DWORD*)(v65 + 20);
      v65 = *(_QWORD*)(v65 + 8);
      v70 = v68 - v67;
      if (v66 <= v70) {
        v66 = v70;
      }
      v67 = v69 + v68;
    } while ((char*)v65 != v12);
    v71 = *((_DWORD*)this_ + 8) - v67;
    if (v66 > v71) {
      v71 = v66;
    }
    if (v71 < (int)v4) {
      goto LABEL_74;
    }
  }
  v72 = nn_fs_detail_FileDataCacheSystem_DoCompaction_plt(this_);
  v73 = *(_DWORD*)(v72 + 16);
  v74 = *(_DWORD*)(v72 + 20) - v4;
  *(_DWORD*)(v72 + 16) = v73 + v4;
  *(_DWORD*)(v72 + 20) = v74;
  if (v74 != 0) {
    v72 = *((_QWORD*)this_ + 8);
  }
  else {
    v75 = *(_QWORD*)v72;
    if ((char*)v72 != v6) {
      v76 = *(__int64**)(v72 + 8);
      v77 = *v76;
      *(_QWORD*)(v75 + 8) = v76;
      *v76 = *(_QWORD*)v72;
      *(_QWORD*)(v77 + 8) = v72;
      v75 = v77;
    }
    *(_QWORD*)v72 = v7;
    v78 = *((_QWORD**)this_ + 8);
    *(_QWORD*)(v75 + 8) = v78;
    *v78 = v75;
    *((_QWORD*)this_ + 8) = v72;
  }
  *((_DWORD*)this_ + 9) -= v4;
  v79 = *(__int64**)(v72 + 8);
  v80 = *v79;
  *(_QWORD*)(*(_QWORD*)v72 + 8LL) = v79;
  *v79 = *(_QWORD*)v72;
  *(_QWORD*)(v80 + 8) = v72;
  *(_QWORD*)v72 = v80;
  *(_DWORD*)(v72 + 16) = v73;
  *(_DWORD*)(v72 + 20) = v4;
  v81 = v12;
  while (1) {
    v81 = *((char**)v81 + 1);
    if (v81 == v12) {
      break;
    }
    if (v73 < (signed __int32)*((_DWORD*)v81 + 4)) {
      goto LABEL_85;
    }
  }
  v81 = v12;
LABEL_85:
  *(_QWORD*)v72 = *(_QWORD*)v81;
  *(_QWORD*)(v80 + 8) = v81;
  *(_QWORD*)(*(_QWORD*)v81 + 8LL) = v72;
  *(_QWORD*)v81 = v80;
  *((_DWORD*)this_ + 10) += v4;
  return *(_QWORD*)this_ + ((__int64)v73 << 14);
}

#pragma GCC visibility pop
