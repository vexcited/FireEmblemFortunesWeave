#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_diag_baba0_alt1(_QWORD, _QWORD) __asm__("nn_diag_baba0");
__int64 nn_diag_bac90_alt1(_QWORD, _QWORD) __asm__("nn_diag_bac90");
__int64 nn_diag_bade0_alt1(_QWORD, _QWORD, _QWORD) __asm__("nn_diag_bade0");
__int64 nn_diag_bb320_alt1(_QWORD) __asm__("nn_diag_bb320");
__int64 nn_diag_detail_PrintDebugString_plt(_QWORD, _QWORD);
__int64 nn_os_AcquireWriteLock_plt(_QWORD);
__int64 nn_os_ConvertToTimeSpan_plt(_QWORD);
__int64 nn_os_GetSystemTick_plt(_QWORD);
__int64 nn_os_InitializeReaderWriterLock_plt(_QWORD);
__int64 nn_os_LockMutex_plt(_QWORD);
__int64 nn_os_ReleaseWriteLock_plt(_QWORD);
__int64 nn_os_UnlockMutex_plt(_QWORD);
__int64 nn_util_SNPrintf_plt(_QWORD, _QWORD, const char*, ...);
__int64 strlen_plt(_QWORD);
extern _UNKNOWN SdkData_ea1860;
extern _UNKNOWN SdkData_eae1a0;
extern _UNKNOWN SdkData_eae2c0;
extern _UNKNOWN* SdkData_eae290;
extern __int64 SdkData_e86cc8;
extern __int64 SdkData_eae298;
extern __int64 SdkData_eae2a8;
extern __int64 SdkData_eae2b0;
extern __int64 SdkData_eae2b8;
extern char SdkData_bbbd5c;
extern char SdkData_eae2a0;
extern char* SdkData_e4d108;
__int64 nn_diag_b9220(__int64 result);
__int64 nn_diag_detail_PrintDebugStringLogObserver(__int64 a1, __int64 a2);
__int64 nn_diag_b9f70();
__int64 threadName(__int64 a1);
__int64 nn_diag_baba0(__int64 a1, char** a2);
__int64 nn_diag_bac90(__int64 a1, _BYTE* a2);
_QWORD* nn_diag_bade0(_QWORD* result, __int64* a2, unsigned __int64 a3);
_QWORD* nn_diag_bb320(_QWORD* result);
_QWORD* nn_diag_bbbf0(_QWORD* result);

__int64 nn_diag_b9220(__int64 result)
{
  if ((unsigned int)result >= 3) {
    return 3;
  }
  else {
    return (unsigned int)result;
  }
}

__int64 nn_diag_detail_PrintDebugStringLogObserver(__int64 a1, __int64 a2)
{
  __int64 v4;
  const char* v5;
  unsigned __int64 v6;
  bool v7;
  void* v8;
  int v9;
  __int64 v10;
  __int64 v11;
  char* v12;
  __int64 v13;
  int v14;
  int v15;
  __int64 v16;
  __int64 v17;
  _BYTE* v18;
  int v19;
  unsigned __int64 v20;
  __int64 v21;
  __int64 v22;
  unsigned __int64 v23;
  unsigned __int64 v24;

  nn_os_LockMutex_plt(&SdkData_ea1860);
  v4 = *(unsigned int*)(a1 + 32);
  if ((unsigned int)v4 > 4) {
    v5 = nullptr;
    v6 = *(_QWORD*)(a1 + 24);
    if (v6 != 0) {
    LABEL_3:
      v6 = strlen_plt(v6);
      v7 = v6 > 1;
      if (v6 > 1) {
        goto LABEL_9;
      }
      goto LABEL_7;
    }
  }
  else {
    v5 = (&SdkData_e4d108)[v4];
    v6 = *(_QWORD*)(a1 + 24);
    if (v6 != 0) {
      goto LABEL_3;
    }
  }
  v7 = false;
LABEL_7:
  if (v5 == nullptr) {
    v8 = *(void**)a2;
    v9 = *(_DWORD*)(a2 + 8);
    goto LABEL_26;
  }
LABEL_9:
  if ((v7 & *(_BYTE*)(a2 + 16)) == 1) {
    v10 = nn_os_GetSystemTick_plt(v6);
    v11 = nn_os_ConvertToTimeSpan_plt(v10);
    if (v5 != nullptr) {
      v12 = (char*)v5;
    }
    else {
      v12 = &SdkData_bbbd5c;
    }
    v13 = (unsigned int)(v11 / 3600000000000LL);
    v14 = v11 / 60000000000LL;
    v15 = v11 / 1000000000;
    v16 = (unsigned int)(v14 - 60 * v13);
    v17 = (unsigned int)(v15 - 60 * v14);
    v18 = *(_BYTE**)(a1 + 24);
    if (*v18 == 36) {
      ++v18;
    }
    v19 = nn_util_SNPrintf_plt(
        &SdkData_eae1a0, 226, "%s%d:%02d:%02d.%03d [%-5.63s] ", v12, v13, v16,
        v17, (unsigned int)(v11 / 1000000) - 1000 * v15, v18);
  }
  else if (v5 != nullptr) {
    v19 = nn_util_SNPrintf_plt(&SdkData_eae1a0, 226, "%s", v5);
  }
  else {
    v19 = 0;
  }
  v20 = *(_QWORD*)(a2 + 8);
  v8 = &SdkData_eae1a0;
  v21 = 226LL - v19;
  v22 = -4;
  if (v5 == nullptr) {
    v22 = 0;
  }
  v23 = v21 + v22;
  if (v23 >= v20) {
    v24 = *(_QWORD*)(a2 + 8);
  }
  else {
    v24 = v23;
  }
  if (v20 != 0) {
    v24 -= *(unsigned __int8*)(*(_QWORD*)a2 + v20 - 1) == 10;
  }
  v9 =
      nn_util_SNPrintf_plt((char*)&SdkData_eae1a0 + v19, v21, "%.*s%s%s", v24) +
      v19;
LABEL_26:
  nn_diag_detail_PrintDebugString_plt(v8, v9);
  return nn_os_UnlockMutex_plt(&SdkData_ea1860);
}

__int64 nn_diag_b9f70()
{
  SdkData_eae2b0 = 0;
  SdkData_eae2b8 = (__int64)&SdkData_eae2b0;
  nn_os_InitializeReaderWriterLock_plt(&SdkData_eae2c0);
  SdkData_eae298 = 0;
  SdkData_eae2a0 = 0;
  SdkData_eae2a8 = 0;
  SdkData_eae290 = (_UNKNOWN*)SdkData_e86cc8;
  nn_os_AcquireWriteLock_plt(&SdkData_eae2c0);
  *(_QWORD*)SdkData_eae2b8 = &SdkData_eae290;
  SdkData_eae2b8 = (__int64)&SdkData_eae298;
  SdkData_eae298 = 0;
  SdkData_eae2a0 = 1;
  return nn_os_ReleaseWriteLock_plt(&SdkData_eae2c0);
}

__int64 threadName(__int64 a1)
{
  __int64 v2;

  v2 = a1;
  return nn_diag_baba0_alt1("threadName", &v2);
}

__int64 nn_diag_baba0(__int64 a1, char** a2)
{
  char* v3;
  char v4;
  int v5;
  char* v6;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  _BYTE* v15;

  v14 = 0;
  v8 = 0;
  v9 = 0x737F648B6C189868LL;
  v10 = 0x647071D67128D7E5LL;
  v11 = 0x6C696E8B720E8F7CLL;
  v12 = 0x747A67D56638DDFBLL;
  v13 = 0;
  nn_diag_bac90_alt1(&v8, a1);
  v3 = *a2;
  if (*a2 != nullptr) {
    v4 = *v3;
    if (*v3 != 0) {
      do {
        LOBYTE(v15) = v4;
        nn_diag_bade0_alt1(&v8, &v15, 1);
        v5 = (unsigned __int8)*++v3;
        v4 = v5;
      } while (v5 != 0);
      v6 = *a2;
    }
    else {
      v6 = *a2;
    }
    v15 = (_BYTE*)(v3 - v6);
    nn_diag_bade0_alt1(&v8, &v15, 8);
  }
  nn_diag_bb320_alt1(&v8);
  return v10 ^ v9 ^ v11 ^ v12;
}

__int64 nn_diag_bac90(__int64 a1, _BYTE* a2)
{
  _BYTE v5[8];
  _BYTE v6[4];

  v6[0] = *a2;
  nn_diag_bade0_alt1(a1, v6, 1);
  v6[0] = a2[1];
  nn_diag_bade0_alt1(a1, v6, 1);
  v6[0] = a2[2];
  nn_diag_bade0_alt1(a1, v6, 1);
  v6[0] = a2[3];
  nn_diag_bade0_alt1(a1, v6, 1);
  v6[0] = a2[4];
  nn_diag_bade0_alt1(a1, v6, 1);
  v6[0] = a2[5];
  nn_diag_bade0_alt1(a1, v6, 1);
  v6[0] = a2[6];
  nn_diag_bade0_alt1(a1, v6, 1);
  v6[0] = a2[7];
  nn_diag_bade0_alt1(a1, v6, 1);
  v6[0] = a2[8];
  nn_diag_bade0_alt1(a1, v6, 1);
  v6[0] = a2[9];
  nn_diag_bade0_alt1(a1, v6, 1);
  v6[0] = a2[10];
  nn_diag_bade0_alt1(a1, v6, 1);
  memset(&v5[1], 0, 7);
  v5[0] = 11;
  return nn_diag_bade0_alt1(a1, v5, 8);
}

_QWORD* nn_diag_bade0(_QWORD* result, __int64* a2, unsigned __int64 a3)
{
  unsigned __int64 v3;
  unsigned __int64 v4;
  unsigned __int8* v5;
  __int64 v6;
  unsigned __int64 v7;
  unsigned __int64 v8;
  __int64 v9;
  unsigned __int64 v10;
  __int64 v11;
  _BYTE* v12;
  __int64 v13;
  _BYTE* v14;
  char v15;
  unsigned __int64 v16;
  char* v17;
  _BYTE* v18;
  char v19;
  __int64 v20;
  unsigned __int64 v21;
  unsigned int v22;
  int v23;
  __int64 v24;
  unsigned int v25;
  bool v26;
  unsigned __int64 v27;
  _BYTE* v28;
  __int64 v29;
  _BYTE* v30;
  char v31;
  unsigned __int64 v32;
  char* v33;
  _BYTE* v34;
  char v35;
  unsigned __int64 v36;
  unsigned int v37;
  int v38;
  __int64 v39;
  unsigned int v40;
  unsigned __int64 v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  __int64 v51;
  __int64 v52;
  __int64 v53;
  __int64 v54;
  __int64 v55;
  __int64 v56;
  __int64 v57;
  __int64 v58;
  __int64 v59;
  __int64 v60;
  __int64 v61;
  __int64 v62;
  __int64 v63;
  __int64 v64;
  __int64 v65;
  __int64 v66;
  __int64 v67;
  __int64 v68;
  __int64 v69;
  __int64 v70;
  __int64 v71;
  __int64 v72;
  __int64 v73;
  __int64 v74;
  __int64 v75;
  __int64 v76;
  __int64 v77;
  __int64 v78;
  char* v79;
  unsigned __int64 v80;
  _BYTE* v81;
  char v82;
  __int64 v83;
  __int64 v84;
  __int64 v85;
  __int64 v86;
  __int64 v87;
  _BYTE* v88;
  _BYTE* v89;
  char v90;
  unsigned __int64 v91;
  char* v92;
  char* v93;
  char* v94;
  char v95;
  unsigned __int64 v96;
  __int64 v97;
  __int64 v98;
  __int64 v99;
  __int64 v100;
  __int64 v101;
  __int64 v102;
  __int64 v103;
  __int64 v104;
  __int64 v105;
  __int64 v106;
  __int64 v107;
  __int64 v108;
  __int64 v109;
  __int64 v110;
  __int64 v111;
  __int64 v112;
  __int64 v113;

  v3 = result[6];
  v4 = v3 + a3;
  *result += a3;
  v5 = (unsigned __int8*)(result + 5);
  if (v3 + a3 > 7) {
    if (v3 == 0) {
      goto LABEL_34;
    }
    v6 = 8;
    v7 = 8 - v3;
    if (v3 == 8) {
    LABEL_28:
      v36 = v6 + v7;
      a2 = (__int64*)((char*)a2 + v7);
      a3 -= v7;
      result[6] = v36;
      if (v36 != 0) {
        v37 = 1;
        v38 = 0;
        v39 = 0;
        do {
          v40 = *v5++;
          v26 = v36 > v37++;
          v41 = (unsigned __int64)v40 << v38;
          v38 += 8;
          v39 |= v41;
        } while (v26);
      }
      else {
        v39 = 0;
      }
      v42 = result[3];
      v43 = result[2];
      v44 = result[4] ^ v39;
      v45 = result[1] + v43;
      result[6] = 0;
      v46 = v45 ^ __ROR8__(v43, 51);
      v47 = v42 + v44;
      v48 = v47 ^ __ROR8__(v44, 48);
      v49 = v47 + v46;
      v50 = v49 ^ __ROR8__(v46, 47);
      v51 = v48 + __ROR8__(v45, 32);
      v52 = v51 ^ __ROR8__(v48, 43);
      v53 = v51 + v50;
      v54 = v53 ^ __ROR8__(v50, 51);
      v55 = v52 + __ROR8__(v49, 32);
      v56 = v55 ^ __ROR8__(v52, 48);
      v57 = v55 + v54;
      v58 = v56 + __ROR8__(v53, 32);
      result[3] = __ROR8__(v57, 32);
      result[4] = v58 ^ __ROR8__(v56, 43);
      result[1] = v58 ^ v39;
      result[2] = v57 ^ __ROR8__(v54, 47);
    LABEL_34:
      if (a3 >= 8) {
        v60 = result[1];
        v59 = result[2];
        v61 = result[3];
        v62 = result[4];
        do {
          v63 = *a2++;
          v64 = v60 + v59;
          a3 -= 8LL;
          v65 = v64 ^ __ROR8__(v59, 51);
          v66 = v62 ^ v63;
          v67 = v61 + v66;
          v68 = v67 ^ __ROR8__(v66, 48);
          v69 = v67 + v65;
          v70 = v69 ^ __ROR8__(v65, 47);
          v71 = v68 + __ROR8__(v64, 32);
          v72 = v71 ^ __ROR8__(v68, 43);
          v73 = v71 + v70;
          v74 = v73 ^ __ROR8__(v70, 51);
          v75 = v72 + __ROR8__(v69, 32);
          v76 = v75 ^ __ROR8__(v72, 48);
          v77 = v75 + v74;
          v59 = v77 ^ __ROR8__(v74, 47);
          v61 = __ROR8__(v77, 32);
          v78 = v76 + __ROR8__(v73, 32);
          v62 = v78 ^ __ROR8__(v76, 43);
          v60 = v78 ^ v63;
          result[3] = v61;
          result[4] = v62;
          result[1] = v60;
          result[2] = v59;
        } while (a3 > 7);
      }
      if (a3 == 0) {
        result[6] = 0;
        return result;
      }
      v79 = (char*)a2;
      v80 = a3;
      v81 = result + 5;
      do {
        v82 = *v79++;
        --v80;
        *v81++ = v82;
      } while (v80 != 0);
      v4 = result[6] + a3;
      goto LABEL_42;
    }
    v8 = v7 & 7;
    if (v3 >= 8) {
      v28 = (char*)a2 + 3;
      v29 = 0;
      v30 = (char*)result + v3 + 47;
      do {
        v29 -= 8;
        *(v30 - 7) = *(v28 - 3);
        *(v30 - 6) = *(v28 - 2);
        *(v30 - 5) = *(v28 - 1);
        *(v30 - 4) = *v28;
        *(v30 - 3) = v28[1];
        *(v30 - 2) = v28[2];
        *(v30 - 1) = v28[3];
        v31 = v28[4];
        v28 += 8;
        *v30 = v31;
        v30 += 8;
      } while (-(__int64)(v7 & 0xFFFFFFFFFFFFFFF8LL) != v29);
      v9 = -v29;
      if ((v7 & 7) == 0) {
        goto LABEL_27;
      }
    }
    else {
      v9 = 0;
      if ((v7 & 7) == 0) {
      LABEL_27:
        v6 = result[6];
        goto LABEL_28;
      }
    }
    v32 = v9 + v3;
    v33 = (char*)a2 + v9;
    v34 = (char*)result + v32 + 40;
    do {
      v35 = *v33++;
      --v8;
      *v34++ = v35;
    } while (v8 != 0);
    goto LABEL_27;
  }
  if (a3 == 0) {
  LABEL_42:
    result[6] = v4;
    return result;
  }
  v10 = a3 & 7;
  if (a3 < 8) {
    v11 = 0;
    if ((a3 & 7) == 0) {
      goto LABEL_16;
    }
    goto LABEL_14;
  }
  v12 = (char*)a2 + 3;
  v13 = 0;
  v14 = (char*)result + v3 + 47;
  do {
    v13 -= 8;
    *(v14 - 7) = *(v12 - 3);
    *(v14 - 6) = *(v12 - 2);
    *(v14 - 5) = *(v12 - 1);
    *(v14 - 4) = *v12;
    *(v14 - 3) = v12[1];
    *(v14 - 2) = v12[2];
    *(v14 - 1) = v12[3];
    v15 = v12[4];
    v12 += 8;
    *v14 = v15;
    v14 += 8;
  } while (-(__int64)(a3 & 0xFFFFFFFFFFFFFFF8LL) != v13);
  v11 = -v13;
  if ((a3 & 7) != 0) {
  LABEL_14:
    v16 = v11 + v3;
    v17 = (char*)a2 + v11;
    v18 = (char*)result + v16 + 40;
    do {
      v19 = *v17++;
      --v10;
      *v18++ = v19;
    } while (v10 != 0);
  }
LABEL_16:
  v20 = result[6];
  v4 = v20 + a3;
  result[6] = v20 + a3;
  if (v20 + a3 <= 7) {
    goto LABEL_42;
  }
  if (v4 == 8) {
    v21 = 8;
    result[6] = 8;
  LABEL_19:
    v22 = 1;
    v23 = 0;
    v24 = 0;
    do {
      v25 = *v5++;
      v26 = v21 > v22++;
      v27 = (unsigned __int64)v25 << v23;
      v23 += 8;
      v24 |= v27;
    } while (v26);
    goto LABEL_53;
  }
  v83 = 8 - (v20 + a3);
  v84 = v83 & 7;
  if (v20 + a3 - 1 >= 7) {
    v86 = 0;
    v87 = -(__int64)(v83 & 0xFFFFFFFFFFFFFFF8LL);
    v88 = (char*)result + v20 + a3 + 47;
    v89 = (char*)a2 + a3 + 3;
    do {
      v86 -= 8;
      *(v88 - 7) = *(v89 - 3);
      *(v88 - 6) = *(v89 - 2);
      *(v88 - 5) = *(v89 - 1);
      *(v88 - 4) = *v89;
      *(v88 - 3) = v89[1];
      *(v88 - 2) = v89[2];
      *(v88 - 1) = v89[3];
      v90 = v89[4];
      v89 += 8;
      *v88 = v90;
      v88 += 8;
    } while (v87 != v86);
    v85 = -v86;
  }
  else {
    v85 = 0;
  }
  if (v84 != 0) {
    v91 = v85 + a3;
    v92 = (char*)result + v91;
    v93 = (char*)a2 + v91;
    v94 = &v92[v20 + 40];
    do {
      v95 = *v93++;
      --v84;
      *v94++ = v95;
    } while (v84 != 0);
  }
  v96 = result[6] - v4;
  v21 = v96 + 8;
  result[6] = v96 + 8;
  if (v96 != -8) {
    goto LABEL_19;
  }
  v24 = 0;
LABEL_53:
  v97 = result[3];
  v98 = result[2];
  v99 = result[4] ^ v24;
  v100 = result[1] + v98;
  result[6] = 0;
  v101 = v100 ^ __ROR8__(v98, 51);
  v102 = v97 + v99;
  v103 = v102 ^ __ROR8__(v99, 48);
  v104 = v102 + v101;
  v105 = v104 ^ __ROR8__(v101, 47);
  v106 = v103 + __ROR8__(v100, 32);
  v107 = v106 ^ __ROR8__(v103, 43);
  v108 = v106 + v105;
  v109 = v108 ^ __ROR8__(v105, 51);
  v110 = v107 + __ROR8__(v104, 32);
  v111 = v110 ^ __ROR8__(v107, 48);
  v112 = v110 + v109;
  v113 = v111 + __ROR8__(v108, 32);
  result[3] = __ROR8__(v112, 32);
  result[4] = v113 ^ __ROR8__(v111, 43);
  result[1] = v113 ^ v24;
  result[2] = v112 ^ __ROR8__(v109, 47);
  return result;
}

_QWORD* nn_diag_bb320(_QWORD* result)
{
  unsigned __int64 v1;
  unsigned __int8* v2;
  unsigned int v3;
  int v4;
  __int64 v5;
  unsigned int v6;
  bool v7;
  unsigned __int64 v8;
  __int64 v9;
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
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  __int64 v51;
  __int64 v52;
  __int64 v53;
  __int64 v54;
  __int64 v55;
  __int64 v56;
  __int64 v57;
  __int64 v58;
  __int64 v59;

  v1 = result[6];
  if (v1 != 0) {
    v2 = (unsigned __int8*)(result + 5);
    v3 = 1;
    v4 = 0;
    v5 = 0;
    do {
      v6 = *v2++;
      v7 = v1 > v3++;
      v8 = (unsigned __int64)v6 << v4;
      v4 += 8;
      v5 |= v8;
    } while (v7);
  }
  else {
    v5 = 0;
  }
  v9 = result[2];
  v10 = v5 | (*result << 56);
  v12 = result[3];
  v11 = result[4];
  v13 = result[1] + v9;
  result[6] = 0;
  v14 = v13 ^ __ROR8__(v9, 51);
  v15 = v10 ^ v11;
  v16 = v12 + v15;
  v17 = v16 ^ __ROR8__(v15, 48);
  v18 = v16 + v14;
  v19 = v18 ^ __ROR8__(v14, 47);
  v20 = v17 + __ROR8__(v13, 32);
  v21 = v20 ^ __ROR8__(v17, 43);
  v22 = v20 + v19;
  v23 = v22 ^ __ROR8__(v19, 51);
  v24 = v21 + __ROR8__(v18, 32);
  v25 = v24 ^ __ROR8__(v21, 48);
  v26 = v24 + v23;
  v27 = v26 ^ __ROR8__(v23, 47);
  v28 = v25 + __ROR8__(v22, 32);
  v29 = v28 ^ __ROR8__(v25, 43);
  v30 = (v28 ^ v10) + v27;
  v31 = (__ROR8__(v26, 32) ^ 0xFFLL) + v29;
  v32 = v30 ^ __ROR8__(v27, 51);
  v33 = v31 ^ __ROR8__(v29, 48);
  v34 = v31 + v32;
  v35 = v33 + __ROR8__(v30, 32);
  v36 = v34 ^ __ROR8__(v32, 47);
  v37 = v35 ^ __ROR8__(v33, 43);
  v38 = v35 + v36;
  v39 = __ROR8__(v34, 32) + v37;
  v40 = v38 ^ __ROR8__(v36, 51);
  v41 = v39 ^ __ROR8__(v37, 48);
  v42 = v39 + v40;
  v43 = v41 + __ROR8__(v38, 32);
  v44 = v42 ^ __ROR8__(v40, 47);
  v45 = v43 ^ __ROR8__(v41, 43);
  v46 = v43 + v44;
  v47 = __ROR8__(v42, 32) + v45;
  v48 = v46 ^ __ROR8__(v44, 51);
  v49 = v47 ^ __ROR8__(v45, 48);
  v50 = v47 + v48;
  v51 = v49 + __ROR8__(v46, 32);
  v52 = v50 ^ __ROR8__(v48, 47);
  v53 = v51 ^ __ROR8__(v49, 43);
  v54 = v51 + v52;
  v55 = __ROR8__(v50, 32) + v53;
  v56 = v54 ^ __ROR8__(v52, 51);
  v57 = v55 ^ __ROR8__(v53, 48);
  v58 = v55 + v56;
  v59 = v57 + __ROR8__(v54, 32);
  result[1] = v59;
  result[2] = v58 ^ __ROR8__(v56, 47);
  result[3] = __ROR8__(v58, 32);
  result[4] = v59 ^ __ROR8__(v57, 43);
  return result;
}

_QWORD* nn_diag_bbbf0(_QWORD* result)
{
  result[5] = 0;
  result[6] = 0;
  result[7] = 0;
  result[8] = 0;
  result[9] = 0;
  result[10] = 0;
  result[11] = 0;
  result[12] = 0;
  result[4] = 0;
  result[3] = 0;
  result[2] = 0;
  result[1] = 0;
  *result = 0;
  return result;
}

#pragma GCC visibility pop
