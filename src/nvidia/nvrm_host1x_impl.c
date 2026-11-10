#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 NvOsAlloc_plt(_QWORD);
__int64 NvOsFree_plt(_QWORD);
__int64 SdkRoutine_5fec50(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 memcpy_plt(_QWORD, _QWORD, _QWORD);
__int64 NvRmChannelMapRelocs(__int64 a1, __int64 a2, unsigned int a3, char a4);
__int64 NvRmChannelSubmit(__int64 a1, __int64 a2, unsigned int a3, __int64 a4,
                          __int64 a5, __int64 a6, __int64 a7, unsigned int a8,
                          __int64 a9, __int64 a10, __int64 a11, __int64 a12,
                          __int64 a13, __int64 a14, __int64 a15, __int64 a16,
                          __int64 a17, unsigned int a18, __int64 a19,
                          __int64 a20);

__int64 NvRmChannelMapRelocs(__int64 a1, __int64 a2, unsigned int a3, char a4)
{
  unsigned int v8;
  unsigned int* v9;
  unsigned int* v10;
  __int64 v11;
  __int64 v12;
  _DWORD* v14;
  unsigned int* v15;
  __int64 v16;
  unsigned int v17;
  int v18;
  unsigned int v19;
  __int64 v20;
  unsigned int* v21;
  unsigned int v22;
  int v23;
  __int64 v24;
  bool v25;
  int v26;
  int v27;
  int v28;
  unsigned int v29;
  unsigned int v31;
  __int64 v32;
  __int64 v33;
  unsigned int* v34;
  _QWORD* v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  unsigned int* v39;
  _QWORD* v40;
  unsigned int v41;

  v8 = 8 * a3 + 12;
  v9 = (unsigned int*)NvOsAlloc_plt(v8);
  if (v9 == nullptr) {
    return 6;
  }
  v10 = v9;
  if (a3 != 0) {
    v11 = a3 & 7;
    if (a3 >= 8) {
      v14 = v9 + 9;
      v15 = (unsigned int*)(a2 + 104);
      v16 = 0;
      do {
        v17 = *v15;
        v16 -= 8;
        *(v14 - 6) = *(v15 - 24);
        *(v14 - 5) = 0;
        v18 = *(v15 - 18);
        *((_QWORD*)v14 + 1) = v17;
        *(v14 - 4) = v18;
        *(v14 - 3) = 0;
        *(v14 - 2) = *(v15 - 12);
        *(v14 - 1) = 0;
        *v14 = *(v15 - 6);
        v14[1] = 0;
        v14[4] = v15[6];
        v14[5] = 0;
        v14[6] = v15[12];
        v14[7] = 0;
        v19 = v15[18];
        v15 += 48;
        *((_QWORD*)v14 + 4) = v19;
        v14 += 16;
      } while (-(__int64)(a3 & 0xFFFFFFF8) != v16);
      v12 = -v16;
      if ((a3 & 7) == 0) {
        goto LABEL_12;
      }
    }
    else {
      v12 = 0;
      if ((a3 & 7) == 0) {
        goto LABEL_12;
      }
    }
    v20 = (__int64)&v9[2 * v12 + 4];
    v21 = (unsigned int*)(a2 + 24 * v12 + 8);
    do {
      v22 = *v21;
      v21 += 6;
      --v11;
      *(_QWORD*)(v20 - 4) = v22;
      v20 += 8;
    } while (v11 != 0);
  }
LABEL_12:
  *v9 = a3;
  v9[1] = (_DWORD)v9 + 12;
  v23 = *(_DWORD*)(a1 + 24);
  v24 = *(unsigned int*)(a1 + 8);
  v10[2] = 0;
  v25 = (v23 & 1) == 0;
  if ((v23 & 1) != 0) {
    v26 = -1072955355;
  }
  else {
    v26 = -1072955383;
  }
  if (v25) {
    v27 = -1072955382;
  }
  else {
    v27 = -1072955354;
  }
  if (a4 != 0) {
    v28 = v26;
  }
  else {
    v28 = v27;
  }
  v29 = SdkRoutine_5fec50(v24, v28 & 0xC000002F | (((v8 >> 2) & 0xFFF) << 18),
                          v10, 8);
  if (v28 == -1072955355 && v29 == 5) {
    v29 = SdkRoutine_5fec50(*(unsigned int*)(a1 + 8), (v8 << 16) | 0xC0000009,
                            v10, 8);
  }
  v31 = v29;
  if (a4 == 0 || a3 == 0) {
    goto LABEL_37;
  }
  v32 = a3 & 7;
  if (a3 >= 8) {
    v34 = v10 + 10;
    v35 = (_QWORD*)(a2 + 112);
    v36 = 0;
    do {
      v36 -= 8;
      *(v35 - 12) = *(v34 - 6);
      *(v35 - 9) = *(v34 - 4);
      *(v35 - 6) = *(v34 - 2);
      *(v35 - 3) = *v34;
      *v35 = v34[2];
      v35[3] = v34[4];
      v35[6] = v34[6];
      v37 = v34[8];
      v34 += 16;
      v35[9] = v37;
      v35 += 24;
    } while (-(__int64)(a3 & 0xFFFFFFF8) != v36);
    v33 = -v36;
    if ((a3 & 7) == 0) {
      goto LABEL_37;
    }
    goto LABEL_35;
  }
  v33 = 0;
  if ((a3 & 7) != 0) {
  LABEL_35:
    v38 = a2 + 24 * v33;
    v39 = &v10[2 * v33 + 4];
    v40 = (_QWORD*)(v38 + 16);
    do {
      v41 = *v39;
      v39 += 2;
      --v32;
      *v40 = v41;
      v40 += 3;
    } while (v32 != 0);
  }
LABEL_37:
  NvOsFree_plt(v10);
  return v31;
}

__int64 NvRmChannelSubmit(__int64 a1, __int64 a2, unsigned int a3, __int64 a4,
                          __int64 a5, __int64 a6, __int64 a7, unsigned int a8,
                          __int64 a9, __int64 a10, __int64 a11, __int64 a12,
                          __int64 a13, __int64 a14, __int64 a15, __int64 a16,
                          __int64 a17, unsigned int a18, __int64 a19,
                          __int64 a20)
{
  __int64 v21;
  __int64 v22;
  __int64 v23;
  unsigned int v26;
  unsigned int* v27;
  unsigned int* v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  _DWORD* v33;
  __int64 v34;
  __int64 v35;
  int v36;
  int v37;
  int v38;
  int v39;
  int v40;
  int v41;
  int v42;
  __int64 v43;
  unsigned int* v44;
  unsigned int v45;
  __int64 v46;
  __int64 v47;
  unsigned int* v48;
  unsigned __int64 v49;
  __int64* v50;
  __int64 v51;
  unsigned int* v52;
  __int64 v53;
  __int64 v54;
  __int64 v55;
  unsigned int v56;
  unsigned int* v57;
  __int64* v58;
  unsigned int* v59;
  __int64 v60;
  unsigned int v61;
  unsigned int v62;
  __int64 v63;
  __int64 v64;
  __int64 v65;
  _DWORD* v66;
  __int64 v67;
  __int64 v68;
  int v69;
  int v70;
  int v71;
  int v72;
  int v73;
  int v74;
  int v75;
  int v76;
  int v77;
  unsigned int* v78;
  unsigned int* v79;
  unsigned int v80;
  unsigned int v81;
  unsigned int v82;
  int v83;
  unsigned int v84;
  unsigned int v87;

  v21 = a3;
  v22 = a8;
  v23 = 4LL * a8;
  if (a16 != 0) {
    v26 = a18;
  }
  else {
    v26 = 0;
  }
  v87 = v23 + 16 * (a8 + a3) + 20 * a18 + 4 * v26 + 16;
  v27 = (unsigned int*)NvOsAlloc_plt(v87);
  if (v27 == nullptr) {
    return 6;
  }
  v28 = v27;
  *v27 = a3;
  v27[1] = a8;
  v27[2] = a18;
  v27[3] = v26;
  v29 = (__int64)&v27[4 * v21 + 4 + 4 * v22];
  if (a8 != 0) {
    v30 = v22 & 3;
    if (a8 >= 4) {
      v33 = (_DWORD*)(a5 + 48);
      v34 = 0;
      v35 = (__int64)&v28[4 * v21 + 10];
      do {
        v36 = *(v33 - 11);
        v34 -= 4;
        *(_DWORD*)(v35 - 24) = *(v33 - 12);
        *(_DWORD*)(v35 - 20) = v36;
        *(_QWORD*)(v35 - 16) = *((_QWORD*)v33 - 5);
        v37 = *(v33 - 5);
        *(_DWORD*)(v35 - 8) = *(v33 - 6);
        *(_DWORD*)(v35 - 4) = v37;
        *(_QWORD*)v35 = *((_QWORD*)v33 - 2);
        v38 = v33[1];
        *(_DWORD*)(v35 + 8) = *v33;
        *(_DWORD*)(v35 + 12) = v38;
        v39 = v33[3];
        *(_DWORD*)(v35 + 16) = v33[2];
        *(_DWORD*)(v35 + 20) = v39;
        v40 = v33[7];
        *(_DWORD*)(v35 + 24) = v33[6];
        *(_DWORD*)(v35 + 28) = v40;
        v41 = v33[8];
        v42 = v33[9];
        v33 += 24;
        *(_DWORD*)(v35 + 32) = v41;
        *(_DWORD*)(v35 + 36) = v42;
        v35 += 64;
      } while (-(__int64)((unsigned int)v22 & 0xFFFFFFFC) != v34);
      v31 = -v34;
      if ((v22 & 3) == 0) {
        goto LABEL_15;
      }
    }
    else {
      v31 = 0;
      if ((v22 & 3) == 0) {
        goto LABEL_15;
      }
    }
    v43 = a5 + 24 * v31 + 8;
    v44 = &v28[4 * v31 + 7 + 4 * v21];
    do {
      --v30;
      *(v44 - 3) = *(_DWORD*)(v43 - 8);
      *((_QWORD*)v44 - 1) = *(_QWORD*)(v43 - 4);
      v45 = *(_DWORD*)(v43 + 4);
      v43 += 24;
      *v44 = v45;
      v44 += 4;
    } while (v30 != 0);
  }
LABEL_15:
  if (a3 != 0) {
    v46 = v21 & 3;
    if (a3 >= 4) {
      v48 = (unsigned int*)(a20 + 8);
      v49 = 0;
      v47 = 0;
      v50 = (__int64*)(a2 + 24);
      do {
        v51 = *(v50 - 3);
        v52 = &v28[v49 / 4];
        v47 += 4;
        v49 += 64LL;
        v52[6] = *((_DWORD*)v50 - 4);
        *((_QWORD*)v52 + 2) = v51;
        v52[7] = *(v48 - 2);
        v53 = *(__int64*)((char*)v50 - 12);
        v52[10] = *((_DWORD*)v50 - 1);
        *((_QWORD*)v52 + 4) = v53;
        v52[11] = *(v48 - 1);
        v54 = *v50;
        v52[14] = *((_DWORD*)v50 + 2);
        *((_QWORD*)v52 + 6) = v54;
        v52[15] = *v48;
        v55 = *(__int64*)((char*)v50 + 12);
        v56 = *((_DWORD*)v50 + 5);
        v50 += 6;
        v52[18] = v56;
        *((_QWORD*)v52 + 8) = v55;
        LODWORD(v55) = v48[1];
        v48 += 4;
        v52[19] = v55;
      } while (((16 * v21) & 0xFFFFFFFC0LL) != v49);
    }
    else {
      v47 = 0;
    }
    if ((v21 & 3) != 0) {
      v57 = (unsigned int*)(a20 + 4 * v47);
      v58 = (__int64*)(a2 + 12 * v47);
      v59 = &v28[4 * v47 + 7];
      do {
        v60 = *v58;
        v61 = *((_DWORD*)v58 + 2);
        v58 = (__int64*)((char*)v58 + 12);
        --v46;
        *(v59 - 1) = v61;
        *(_QWORD*)(v59 - 3) = v60;
        v62 = *v57++;
        *v59 = v62;
        v59 += 4;
      } while (v46 != 0);
    }
  }
  v63 = v29 + 4 * v22 + 20LL * a18;
  memcpy_plt(v29, a6, v23);
  if (a18 == 0) {
    goto LABEL_32;
  }
  v64 = a18 & 3;
  if (a18 >= 4) {
    v66 = (_DWORD*)(a17 + 32);
    v67 = 0;
    v68 = (__int64)&v28[5 * (unsigned int)v22 + 12 + 4 * v21];
    do {
      v69 = *(v66 - 7);
      v70 = *(v66 - 6);
      v67 -= 4;
      *(_DWORD*)(v68 - 32) = *(v66 - 8);
      *(_DWORD*)(v68 - 28) = v69;
      *(_DWORD*)(v68 - 24) = -1;
      *(_DWORD*)(v68 - 20) = v70;
      *(_QWORD*)(v68 - 16) = *(_QWORD*)(v66 - 5);
      *(_DWORD*)(v68 - 8) = *(v66 - 3);
      *(_DWORD*)(v68 - 4) = -1;
      *(_QWORD*)v68 = *((_QWORD*)v66 - 1);
      v71 = v66[1];
      v72 = v66[2];
      v73 = v66[3];
      *(_DWORD*)(v68 + 8) = *v66;
      *(_DWORD*)(v68 + 12) = v71;
      v74 = v66[4];
      v75 = v66[5];
      *(_DWORD*)(v68 + 16) = -1;
      *(_DWORD*)(v68 + 20) = v72;
      *(_DWORD*)(v68 + 24) = v73;
      *(_DWORD*)(v68 + 28) = v74;
      *(_DWORD*)(v68 + 32) = v75;
      *(_DWORD*)(v68 + 36) = -1;
      v76 = v66[6];
      v77 = v66[7];
      v66 += 16;
      *(_DWORD*)(v68 + 40) = v76;
      *(_DWORD*)(v68 + 44) = v77;
      v68 += 80;
    } while (-(__int64)(a18 & 0xFFFFFFFC) != v67);
    v65 = -v67;
    if ((a18 & 3) == 0) {
      goto LABEL_32;
    }
    goto LABEL_30;
  }
  v65 = 0;
  if ((a18 & 3) != 0) {
  LABEL_30:
    v78 = (unsigned int*)(a17 + 16 * v65 + 8);
    v79 = &v28[5 * v65 + 8 + 5 * (unsigned int)v22 + 4 * v21];
    do {
      v80 = *(v78 - 1);
      --v64;
      *(v79 - 4) = *(v78 - 2);
      *(v79 - 3) = v80;
      v81 = *v78;
      v82 = v78[1];
      v78 += 4;
      *(v79 - 2) = -1;
      *(v79 - 1) = v81;
      *v79 = v82;
      v79 += 5;
    } while (v64 != 0);
  }
LABEL_32:
  if (a16 != 0) {
    memcpy_plt(v63, a16, 4LL * a18);
  }
  if ((*(_DWORD*)(a1 + 24) & 1) != 0) {
    v83 = -1073741788;
  }
  else {
    v83 = -1073741823;
  }
  v84 = SdkRoutine_5fec50(*(unsigned int*)(a1 + 8),
                          v83 & 0xC000FFFF | ((v87 & 0x3FFF) << 16), v28, 8);
  memcpy_plt(a16, v63, 4LL * a18);
  NvOsFree_plt(v28);
  return v84;
}

#pragma GCC visibility pop
