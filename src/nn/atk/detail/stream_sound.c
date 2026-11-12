#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 BasicSound_Unknown4(__int64 result);
__int64 GameRoutine_280260(__int64, unsigned __int64, __int64, __int64, __int64,
                           __int64);
__int64 GameRoutine_2a0820(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_2a0e80(_QWORD, _QWORD);
__int64 GameRoutine_2a1860(_QWORD, _QWORD);
__int64 StreamSoundPlayer_299550(_QWORD);
__int64 StreamSoundPlayer_Destructor(_QWORD);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
extern __int64 (*nn_atk_detail_BasicSound_vtable[])(void);
extern __int64* GameData_21353b0[4];
__int64 StreamSound_Unknown3(__int64 a1, unsigned __int64 a2, __int64 a3,
                             __int64 a4, __int64 a5, __int64 a6);
__int64 StreamSound_Unknown4(__int64 result);
__int64 StreamSound_295440(__int64 a1, __int64 a2);
__int64 StreamSound_2959f0(__int64 a1, __int64 a2);
__int64 StreamSound_295a80(__int64 a1, __int64 a2, __int64 a3);
__int64 StreamSound_Unknown11(__int64 a1, __int64 a2);
__int64 StreamSound_2960a0(__int64 result, int a2, int a3, float a4);
__int64 StreamSound_Unknown9(__int64 result);
__int64 StreamSound_2964c0(__int64 a1);
__int64 StreamSound_2964e0(__int64 a1, char a2);
__int64 StreamSound_Unknown5(_BYTE* a1);
__int64 StreamSound_DeletingDestructor(__int64 a1);
_DWORD* BasicSound_281a40(_DWORD* result);
_DWORD* StreamSound_Unknown10(__int64 a1);

__int64 StreamSound_Unknown3(__int64 a1, unsigned __int64 a2, __int64 a3,
                             __int64 a4, __int64 a5, __int64 a6)
{
  char v7;

  v7 = GameRoutine_280260(a1, a2, a3, a4, a5, a6);
  if ((v7 & 1) != 0) {
    *(_QWORD*)(a1 + 560) = 0;
    *(_DWORD*)(a1 + 700) = 0;
    *(_QWORD*)(a1 + 576) = 0x3F80000000000000LL;
    *(_DWORD*)(a1 + 584) = 1;
    *(_QWORD*)(a1 + 588) = 0;
    *(_QWORD*)(a1 + 604) = 0;
    *(_QWORD*)(a1 + 620) = 0;
    *(_QWORD*)(a1 + 636) = 0;
    *(_QWORD*)(a1 + 652) = 0;
    *(_QWORD*)(a1 + 668) = 0;
    *(_QWORD*)(a1 + 684) = 0;
    *(_QWORD*)(a1 + 708) = 0;
    *(_BYTE*)(a1 + 706) = 1;
    *(_QWORD*)(a1 + 596) = 0x13F800000LL;
    *(_QWORD*)(a1 + 612) = 0x13F800000LL;
    *(_QWORD*)(a1 + 628) = 0x13F800000LL;
    *(_QWORD*)(a1 + 644) = 0x13F800000LL;
    *(_QWORD*)(a1 + 660) = 0x13F800000LL;
    *(_QWORD*)(a1 + 676) = 0x13F800000LL;
    *(_QWORD*)(a1 + 692) = 0x13F800000LL;
  }
  return v7 & 1;
}

__int64 StreamSound_Unknown4(__int64 result)
{
  _QWORD* v1;
  __int64 v2;
  _QWORD* v3;
  __int64* v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;

  if (*(_BYTE*)(result + 706) == 1) {
    v1 = (_QWORD*)result;
    *(_BYTE*)(result + 706) = 0;
    BasicSound_Unknown4(result);
    v2 = v1[71];
    v3 = v1 + 68;
    if (v1 + 68 != (_QWORD*)(v2 + 32)) {
      v4 = (__int64*)v1[69];
      v5 = *v4;
      *(_QWORD*)(v1[68] + 8LL) = v4;
      *v4 = v1[68];
      *(_QWORD*)(v5 + 8) = v3;
      v1[68] = v5;
    }
    result = (*(__int64 (**)(_QWORD*))(*v1 + 32LL))(v1);
    v6 = v1[68];
    v8 = *(_QWORD*)(v2 + 48);
    v7 = v2 + 48;
    v1[68] = v8;
    *(_QWORD*)(v6 + 8) = v7;
    *(_QWORD*)(*(_QWORD*)v7 + 8LL) = v3;
    *(_QWORD*)v7 = v6;
  }
  return result;
}

__int64 StreamSound_295440(__int64 a1, __int64 a2)
{
  __int64 v4;
  __int64 v5;
  __int64 result;
  unsigned int v7;
  __int64 v8;
  __int64 v9;
  int* v10;
  __int64 v11;
  __int64 v12;
  int v13;
  int v14;
  int v15;
  int v16;
  _DWORD* v17;
  unsigned int v18;
  __int64 v19;
  __int64 v20;
  int* v21;
  __int64 v22;
  __int64 v23;
  int v24;
  int v25;
  int v26;
  int v27;
  _DWORD* v28;
  unsigned int v29;
  __int64 v30;
  __int64 v31;
  int* v32;
  __int64 v33;
  __int64 v34;
  int v35;
  int v36;
  int v37;
  int v38;
  _DWORD* v39;
  unsigned int v40;
  __int64 v41;
  __int64 v42;
  int* v43;
  __int64 v44;
  __int64 v45;
  int v46;
  int v47;
  int v48;
  int v49;
  _DWORD* v50;
  unsigned int v51;
  __int64 v52;
  __int64 v53;
  int* v54;
  __int64 v55;
  __int64 v56;
  int v57;
  int v58;
  int v59;
  int v60;
  _DWORD* v61;
  unsigned int v62;
  __int64 v63;
  __int64 v64;
  int* v65;
  __int64 v66;
  __int64 v67;
  int v68;
  int v69;
  int v70;
  int v71;
  _DWORD* v72;
  unsigned int v73;
  __int64 v74;
  __int64 v75;
  int* v76;
  __int64 v77;
  __int64 v78;
  int v79;
  int v80;
  int v81;
  int v82;
  _DWORD* v83;
  unsigned int v84;
  __int64 v85;
  __int64 v86;
  int* v87;
  __int64 v88;
  __int64 v89;
  int v90;
  int v91;
  int v92;
  int v93;
  _DWORD* v94;

  *(_WORD*)(a1 + 704) = *(_WORD*)(a2 + 12);
  v4 = GameRoutine_2a1860(a1, a2);
  v5 = GameRoutine_2a0820(v4, 200, 8, 1);
  *(_DWORD*)(v5 + 8) = 51;
  *(_QWORD*)(v5 + 24) = a1 + 768;
  memcpy(v5 + 32, a2, 168);
  result = GameRoutine_2a0e80(v4, v5);
  v7 = *(unsigned __int8*)(a2 + 28);
  if (*(_BYTE*)(a2 + 28) != 0) {
    v8 = v7 & 7;
    if (v7 < 8) {
      v9 = 0;
      if ((v7 & 7) == 0) {
        goto LABEL_10;
      }
      goto LABEL_8;
    }
    v10 = (int*)(a1 + 736);
    v11 = 0;
    v12 = -(__int64)((unsigned __int8)v7 & 0xF8);
    do {
      v11 -= 8;
      v13 = *(v10 - 6) + 1;
      ++*(v10 - 7);
      *(v10 - 6) = v13;
      v14 = *(v10 - 4) + 1;
      ++*(v10 - 5);
      *(v10 - 4) = v14;
      v15 = *(v10 - 2) + 1;
      ++*(v10 - 3);
      *(v10 - 2) = v15;
      v16 = *v10 + 1;
      ++*(v10 - 1);
      *v10 = v16;
      v10 += 8;
    } while (v12 != v11);
    v9 = -v11;
    if (v8 != 0) {
    LABEL_8:
      v17 = (_DWORD*)(a1 + 4 * v9 + 708);
      do {
        --v8;
        ++*v17++;
      } while (v8 != 0);
    }
  }

LABEL_10:
  v18 = *(unsigned __int8*)(a2 + 42);
  if (*(_BYTE*)(a2 + 42) == 0) {
    goto LABEL_19;
  }
  v19 = v18 & 7;
  if (v18 < 8) {
    v20 = 0;
    if ((v18 & 7) == 0) {
      goto LABEL_19;
    }
    goto LABEL_17;
  }
  v21 = (int*)(a1 + 736);
  v22 = 0;
  v23 = -(__int64)((unsigned __int8)v18 & 0xF8);
  do {
    v22 -= 8;
    v24 = *(v21 - 6) + 2;
    *(v21 - 7) += 2;
    *(v21 - 6) = v24;
    v25 = *(v21 - 4) + 2;
    *(v21 - 5) += 2;
    *(v21 - 4) = v25;
    v26 = *(v21 - 2) + 2;
    *(v21 - 3) += 2;
    *(v21 - 2) = v26;
    v27 = *v21 + 2;
    *(v21 - 1) += 2;
    *v21 = v27;
    v21 += 8;
  } while (v23 != v22);
  v20 = -v22;
  if (v19 != 0) {
  LABEL_17:
    v28 = (_DWORD*)(a1 + 4 * v20 + 708);
    do {
      --v19;
      *v28++ += 2;
    } while (v19 != 0);
  }

LABEL_19:
  v29 = *(unsigned __int8*)(a2 + 56);
  if (*(_BYTE*)(a2 + 56) == 0) {
    goto LABEL_28;
  }
  v30 = v29 & 7;
  if (v29 < 8) {
    v31 = 0;
    if ((v29 & 7) == 0) {
      goto LABEL_28;
    }
    goto LABEL_26;
  }
  v32 = (int*)(a1 + 736);
  v33 = 0;
  v34 = -(__int64)((unsigned __int8)v29 & 0xF8);
  do {
    v33 -= 8;
    v35 = *(v32 - 6) + 4;
    *(v32 - 7) += 4;
    *(v32 - 6) = v35;
    v36 = *(v32 - 4) + 4;
    *(v32 - 5) += 4;
    *(v32 - 4) = v36;
    v37 = *(v32 - 2) + 4;
    *(v32 - 3) += 4;
    *(v32 - 2) = v37;
    v38 = *v32 + 4;
    *(v32 - 1) += 4;
    *v32 = v38;
    v32 += 8;
  } while (v34 != v33);
  v31 = -v33;
  if (v30 != 0) {
  LABEL_26:
    v39 = (_DWORD*)(a1 + 4 * v31 + 708);
    do {
      --v30;
      *v39++ += 4;
    } while (v30 != 0);
  }

LABEL_28:
  v40 = *(unsigned __int8*)(a2 + 70);
  if (*(_BYTE*)(a2 + 70) == 0) {
    goto LABEL_37;
  }
  v41 = v40 & 7;
  if (v40 < 8) {
    v42 = 0;
    if ((v40 & 7) == 0) {
      goto LABEL_37;
    }
    goto LABEL_35;
  }
  v43 = (int*)(a1 + 736);
  v44 = 0;
  v45 = -(__int64)((unsigned __int8)v40 & 0xF8);
  do {
    v44 -= 8;
    v46 = *(v43 - 6) + 8;
    *(v43 - 7) += 8;
    *(v43 - 6) = v46;
    v47 = *(v43 - 4) + 8;
    *(v43 - 5) += 8;
    *(v43 - 4) = v47;
    v48 = *(v43 - 2) + 8;
    *(v43 - 3) += 8;
    *(v43 - 2) = v48;
    v49 = *v43 + 8;
    *(v43 - 1) += 8;
    *v43 = v49;
    v43 += 8;
  } while (v45 != v44);
  v42 = -v44;
  if (v41 != 0) {
  LABEL_35:
    v50 = (_DWORD*)(a1 + 4 * v42 + 708);
    do {
      --v41;
      *v50++ += 8;
    } while (v41 != 0);
  }

LABEL_37:
  v51 = *(unsigned __int8*)(a2 + 84);
  if (*(_BYTE*)(a2 + 84) == 0) {
    goto LABEL_46;
  }
  v52 = v51 & 7;
  if (v51 < 8) {
    v53 = 0;
    if ((v51 & 7) == 0) {
      goto LABEL_46;
    }
    goto LABEL_44;
  }
  v54 = (int*)(a1 + 736);
  v55 = 0;
  v56 = -(__int64)((unsigned __int8)v51 & 0xF8);
  do {
    v55 -= 8;
    v57 = *(v54 - 6) + 16;
    *(v54 - 7) += 16;
    *(v54 - 6) = v57;
    v58 = *(v54 - 4) + 16;
    *(v54 - 5) += 16;
    *(v54 - 4) = v58;
    v59 = *(v54 - 2) + 16;
    *(v54 - 3) += 16;
    *(v54 - 2) = v59;
    v60 = *v54 + 16;
    *(v54 - 1) += 16;
    *v54 = v60;
    v54 += 8;
  } while (v56 != v55);
  v53 = -v55;
  if (v52 != 0) {
  LABEL_44:
    v61 = (_DWORD*)(a1 + 4 * v53 + 708);
    do {
      --v52;
      *v61++ += 16;
    } while (v52 != 0);
  }

LABEL_46:
  v62 = *(unsigned __int8*)(a2 + 98);
  if (*(_BYTE*)(a2 + 98) == 0) {
    goto LABEL_55;
  }
  v63 = v62 & 7;
  if (v62 < 8) {
    v64 = 0;
    if ((v62 & 7) == 0) {
      goto LABEL_55;
    }
    goto LABEL_53;
  }
  v65 = (int*)(a1 + 736);
  v66 = 0;
  v67 = -(__int64)((unsigned __int8)v62 & 0xF8);
  do {
    v66 -= 8;
    v68 = *(v65 - 6) + 32;
    *(v65 - 7) += 32;
    *(v65 - 6) = v68;
    v69 = *(v65 - 4) + 32;
    *(v65 - 5) += 32;
    *(v65 - 4) = v69;
    v70 = *(v65 - 2) + 32;
    *(v65 - 3) += 32;
    *(v65 - 2) = v70;
    v71 = *v65 + 32;
    *(v65 - 1) += 32;
    *v65 = v71;
    v65 += 8;
  } while (v67 != v66);
  v64 = -v66;
  if (v63 != 0) {
  LABEL_53:
    v72 = (_DWORD*)(a1 + 4 * v64 + 708);
    do {
      --v63;
      *v72++ += 32;
    } while (v63 != 0);
  }

LABEL_55:
  v73 = *(unsigned __int8*)(a2 + 112);
  if (*(_BYTE*)(a2 + 112) == 0) {
    goto LABEL_64;
  }
  v74 = v73 & 7;
  if (v73 < 8) {
    v75 = 0;
    if ((v73 & 7) == 0) {
      goto LABEL_64;
    }
    goto LABEL_62;
  }
  v76 = (int*)(a1 + 736);
  v77 = 0;
  v78 = -(__int64)((unsigned __int8)v73 & 0xF8);
  do {
    v77 -= 8;
    v79 = *(v76 - 6) + 64;
    *(v76 - 7) += 64;
    *(v76 - 6) = v79;
    v80 = *(v76 - 4) + 64;
    *(v76 - 5) += 64;
    *(v76 - 4) = v80;
    v81 = *(v76 - 2) + 64;
    *(v76 - 3) += 64;
    *(v76 - 2) = v81;
    v82 = *v76 + 64;
    *(v76 - 1) += 64;
    *v76 = v82;
    v76 += 8;
  } while (v78 != v77);
  v75 = -v77;
  if (v74 != 0) {
  LABEL_62:
    v83 = (_DWORD*)(a1 + 4 * v75 + 708);
    do {
      --v74;
      *v83++ += 64;
    } while (v74 != 0);
  }

LABEL_64:
  v84 = *(unsigned __int8*)(a2 + 126);
  if (*(_BYTE*)(a2 + 126) == 0) {
    return result;
  }
  v85 = v84 & 7;
  if (v84 < 8) {
    v86 = 0;
    if ((v84 & 7) == 0) {
      return result;
    }
    goto LABEL_71;
  }
  v87 = (int*)(a1 + 736);
  v88 = 0;
  v89 = -(__int64)((unsigned __int8)v84 & 0xF8);
  do {
    v88 -= 8;
    v90 = *(v87 - 6) + 128;
    *(v87 - 7) += 128;
    *(v87 - 6) = v90;
    v91 = *(v87 - 4) + 128;
    *(v87 - 5) += 128;
    *(v87 - 4) = v91;
    v92 = *(v87 - 2) + 128;
    *(v87 - 3) += 128;
    *(v87 - 2) = v92;
    v93 = *v87 + 128;
    *(v87 - 1) += 128;
    *v87 = v93;
    v87 += 8;
  } while (v89 != v88);
  v86 = -v88;
  if (v85 != 0) {
  LABEL_71:
    v94 = (_DWORD*)(a1 + 4 * v86 + 708);
    do {
      --v85;
      *v94++ += 128;
    } while (v85 != 0);
  }
  return result;
}

__int64 StreamSound_2959f0(__int64 a1, __int64 a2)
{
  __int64 v4;
  __int64 v5;

  v4 = GameRoutine_2a1860(a1, a2);
  v5 = GameRoutine_2a0820(v4, 776, 8, 1);
  *(_DWORD*)(v5 + 8) = 52;
  *(_QWORD*)(v5 + 24) = a1 + 768;
  memcpy(v5 + 32, a2, 728);
  *(_QWORD*)(v5 + 760) = *(_QWORD*)(a1 + 720);
  *(_QWORD*)(v5 + 768) = *(_QWORD*)(a1 + 728);
  return GameRoutine_2a0e80(v4, v5);
}

__int64 StreamSound_295a80(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6;
  __int64 v7;

  v6 = GameRoutine_2a1860(a1, a2);
  v7 = GameRoutine_2a0820(v6, 768, 8, 1);
  *(_QWORD*)(v7 + 760) = a2;
  *(_DWORD*)(v7 + 8) = 53;
  *(_QWORD*)(v7 + 24) = a1 + 768;
  memcpy(v7 + 32, a3, 728);
  return GameRoutine_2a0e80(v6, v7);
}

_DWORD* StreamSound_Unknown10(__int64 a1)
{
  _DWORD* result;
  __int16 v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;

  result = BasicSound_281a40((_DWORD*)a1);
  v3 = *(_WORD*)(a1 + 704);
  if ((v3 & 1) != 0) {
    v4 = *(_DWORD*)(a1 + 588);
    if (v4 < (signed __int32)*(_DWORD*)(a1 + 584)) {
      *(_DWORD*)(a1 + 588) = v4 + 1;
    }
  }
  if ((v3 & 2) != 0) {
    v5 = *(_DWORD*)(a1 + 604);
    if (v5 < (signed __int32)*(_DWORD*)(a1 + 600)) {
      *(_DWORD*)(a1 + 604) = v5 + 1;
    }
  }
  if ((v3 & 4) != 0) {
    v6 = *(_DWORD*)(a1 + 620);
    if (v6 < (signed __int32)*(_DWORD*)(a1 + 616)) {
      *(_DWORD*)(a1 + 620) = v6 + 1;
    }
  }
  if ((v3 & 8) != 0) {
    v7 = *(_DWORD*)(a1 + 636);
    if (v7 < (signed __int32)*(_DWORD*)(a1 + 632)) {
      *(_DWORD*)(a1 + 636) = v7 + 1;
    }
  }
  if ((v3 & 0x10) != 0) {
    v8 = *(_DWORD*)(a1 + 652);
    if (v8 < (signed __int32)*(_DWORD*)(a1 + 648)) {
      *(_DWORD*)(a1 + 652) = v8 + 1;
    }
  }
  if ((v3 & 0x20) != 0) {
    v9 = *(_DWORD*)(a1 + 668);
    if (v9 < (signed __int32)*(_DWORD*)(a1 + 664)) {
      *(_DWORD*)(a1 + 668) = v9 + 1;
    }
  }
  if ((v3 & 0x40) != 0) {
    v10 = *(_DWORD*)(a1 + 684);
    if (v10 < (signed __int32)*(_DWORD*)(a1 + 680)) {
      *(_DWORD*)(a1 + 684) = v10 + 1;
    }
  }
  if ((v3 & 0x80) != 0) {
    v11 = *(_DWORD*)(a1 + 700);
    if (v11 < (signed __int32)*(_DWORD*)(a1 + 696)) {
      *(_DWORD*)(a1 + 700) = v11 + 1;
    }
  }
  return result;
}

__int64 StreamSound_Unknown11(__int64 a1, __int64 a2)
{
  __int64 result;
  __int16 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  int v8;
  int v9;
  __int64 v10;
  int v11;
  int v12;
  __int64 v13;
  int v14;
  int v15;
  __int64 v16;
  int v17;
  int v18;
  __int64 v19;
  int v20;
  int v21;
  __int64 v22;
  int v23;
  int v24;
  __int64 v25;
  int v26;
  int v27;
  __int64 v28;
  int v29;
  int v30;
  float v31;

  result = GameRoutine_2a1860(a1, a2);
  v4 = *(_WORD*)(a1 + 704);
  v5 = a1 + 768;
  v6 = result;
  if ((v4 & 1) == 0) {
    if ((v4 & 2) == 0) {
      goto LABEL_3;
    }
  LABEL_14:
    v10 = GameRoutine_2a0820(v6, 48, 8, 1);
    *(_QWORD*)(v10 + 24) = v5;
    *(_DWORD*)(v10 + 8) = 57;
    *(_DWORD*)(v10 + 32) = 2;
    v11 = *(_DWORD*)(a1 + 604);
    v12 = *(_DWORD*)(a1 + 600);
    if (v11 >= v12) {
      *(_DWORD*)(v10 + 36) = *(_DWORD*)(a1 + 596);
      result = GameRoutine_2a0e80(v6, v10);
      if ((v4 & 4) != 0) {
        goto LABEL_18;
      }
    }
    else {
      *(float*)(v10 + 36) =
          *(float*)(a1 + 592) +
          (float)((float)((float)(*(float*)(a1 + 596) - *(float*)(a1 + 592)) *
                          (float)v11) /
                  (float)v12);
      result = GameRoutine_2a0e80(v6, v10);
      if ((v4 & 4) != 0) {
        goto LABEL_18;
      }
    }
  LABEL_4:
    if ((v4 & 8) == 0) {
      goto LABEL_5;
    }
  LABEL_22:
    v16 = GameRoutine_2a0820(v6, 48, 8, 1);
    *(_QWORD*)(v16 + 24) = v5;
    *(_DWORD*)(v16 + 32) = 8;
    *(_DWORD*)(v16 + 8) = 57;
    v17 = *(_DWORD*)(a1 + 636);
    v18 = *(_DWORD*)(a1 + 632);
    if (v17 >= v18) {
      *(_DWORD*)(v16 + 36) = *(_DWORD*)(a1 + 628);
      result = GameRoutine_2a0e80(v6, v16);
      if ((v4 & 0x10) != 0) {
        goto LABEL_26;
      }
    }
    else {
      *(float*)(v16 + 36) =
          *(float*)(a1 + 624) +
          (float)((float)((float)(*(float*)(a1 + 628) - *(float*)(a1 + 624)) *
                          (float)v17) /
                  (float)v18);
      result = GameRoutine_2a0e80(v6, v16);
      if ((v4 & 0x10) != 0) {
        goto LABEL_26;
      }
    }
  LABEL_6:
    if ((v4 & 0x20) == 0) {
      goto LABEL_7;
    }
  LABEL_30:
    v22 = GameRoutine_2a0820(v6, 48, 8, 1);
    *(_QWORD*)(v22 + 24) = v5;
    *(_DWORD*)(v22 + 8) = 57;
    *(_DWORD*)(v22 + 32) = 32;
    v23 = *(_DWORD*)(a1 + 668);
    v24 = *(_DWORD*)(a1 + 664);
    if (v23 >= v24) {
      *(_DWORD*)(v22 + 36) = *(_DWORD*)(a1 + 660);
      result = GameRoutine_2a0e80(v6, v22);
      if ((v4 & 0x40) != 0) {
        goto LABEL_34;
      }
    }
    else {
      *(float*)(v22 + 36) =
          *(float*)(a1 + 656) +
          (float)((float)((float)(*(float*)(a1 + 660) - *(float*)(a1 + 656)) *
                          (float)v23) /
                  (float)v24);
      result = GameRoutine_2a0e80(v6, v22);
      if ((v4 & 0x40) != 0) {
        goto LABEL_34;
      }
    }
  LABEL_8:
    if ((v4 & 0x80) == 0) {
      return result;
    }
    goto LABEL_38;
  }
  v7 = GameRoutine_2a0820(result, 48, 8, 1);
  *(_QWORD*)(v7 + 24) = v5;
  *(_DWORD*)(v7 + 32) = 1;
  *(_DWORD*)(v7 + 8) = 57;
  v8 = *(_DWORD*)(a1 + 588);
  v9 = *(_DWORD*)(a1 + 584);
  if (v8 >= v9) {
    *(_DWORD*)(v7 + 36) = *(_DWORD*)(a1 + 580);
    result = GameRoutine_2a0e80(v6, v7);
    if ((v4 & 2) != 0) {
      goto LABEL_14;
    }
  }
  else {
    *(float*)(v7 + 36) =
        *(float*)(a1 + 576) +
        (float)((float)((float)(*(float*)(a1 + 580) - *(float*)(a1 + 576)) *
                        (float)v8) /
                (float)v9);
    result = GameRoutine_2a0e80(v6, v7);
    if ((v4 & 2) != 0) {
      goto LABEL_14;
    }
  }

LABEL_3:
  if ((v4 & 4) == 0) {
    goto LABEL_4;
  }

LABEL_18:
  v13 = GameRoutine_2a0820(v6, 48, 8, 1);
  *(_QWORD*)(v13 + 24) = v5;
  *(_DWORD*)(v13 + 8) = 57;
  *(_DWORD*)(v13 + 32) = 4;
  v14 = *(_DWORD*)(a1 + 620);
  v15 = *(_DWORD*)(a1 + 616);
  if (v14 >= v15) {
    *(_DWORD*)(v13 + 36) = *(_DWORD*)(a1 + 612);
    result = GameRoutine_2a0e80(v6, v13);
    if ((v4 & 8) != 0) {
      goto LABEL_22;
    }
  }
  else {
    *(float*)(v13 + 36) =
        *(float*)(a1 + 608) +
        (float)((float)((float)(*(float*)(a1 + 612) - *(float*)(a1 + 608)) *
                        (float)v14) /
                (float)v15);
    result = GameRoutine_2a0e80(v6, v13);
    if ((v4 & 8) != 0) {
      goto LABEL_22;
    }
  }

LABEL_5:
  if ((v4 & 0x10) == 0) {
    goto LABEL_6;
  }

LABEL_26:
  v19 = GameRoutine_2a0820(v6, 48, 8, 1);
  *(_QWORD*)(v19 + 24) = v5;
  *(_DWORD*)(v19 + 8) = 57;
  *(_DWORD*)(v19 + 32) = 16;
  v20 = *(_DWORD*)(a1 + 652);
  v21 = *(_DWORD*)(a1 + 648);
  if (v20 >= v21) {
    *(_DWORD*)(v19 + 36) = *(_DWORD*)(a1 + 644);
    result = GameRoutine_2a0e80(v6, v19);
    if ((v4 & 0x20) != 0) {
      goto LABEL_30;
    }
  }
  else {
    *(float*)(v19 + 36) =
        *(float*)(a1 + 640) +
        (float)((float)((float)(*(float*)(a1 + 644) - *(float*)(a1 + 640)) *
                        (float)v20) /
                (float)v21);
    result = GameRoutine_2a0e80(v6, v19);
    if ((v4 & 0x20) != 0) {
      goto LABEL_30;
    }
  }

LABEL_7:
  if ((v4 & 0x40) == 0) {
    goto LABEL_8;
  }

LABEL_34:
  v25 = GameRoutine_2a0820(v6, 48, 8, 1);
  *(_QWORD*)(v25 + 24) = v5;
  *(_DWORD*)(v25 + 8) = 57;
  *(_DWORD*)(v25 + 32) = 64;
  v26 = *(_DWORD*)(a1 + 684);
  v27 = *(_DWORD*)(a1 + 680);
  if (v26 >= v27) {
    *(_DWORD*)(v25 + 36) = *(_DWORD*)(a1 + 676);
    result = GameRoutine_2a0e80(v6, v25);
    if ((v4 & 0x80) == 0) {
      return result;
    }
  }
  else {
    *(float*)(v25 + 36) =
        *(float*)(a1 + 672) +
        (float)((float)((float)(*(float*)(a1 + 676) - *(float*)(a1 + 672)) *
                        (float)v26) /
                (float)v27);
    result = GameRoutine_2a0e80(v6, v25);
    if ((v4 & 0x80) == 0) {
      return result;
    }
  }

LABEL_38:
  v28 = GameRoutine_2a0820(v6, 48, 8, 1);
  *(_QWORD*)(v28 + 24) = v5;
  *(_DWORD*)(v28 + 8) = 57;
  *(_DWORD*)(v28 + 32) = 128;
  v29 = *(_DWORD*)(a1 + 700);
  v30 = *(_DWORD*)(a1 + 696);
  if (v29 >= v30) {
    v31 = *(float*)(a1 + 692);
  }
  else {
    v31 = *(float*)(a1 + 688) +
          (float)((float)((float)(*(float*)(a1 + 692) - *(float*)(a1 + 688)) *
                          (float)v29) /
                  (float)v30);
  }
  *(float*)(v28 + 36) = v31;
  return GameRoutine_2a0e80(v6, v28);
}

__int64 StreamSound_2960a0(__int64 result, int a2, int a3, float a4)
{
  __int16 v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int v15;
  int v16;
  int v17;
  int v18;
  int v19;
  int v20;

  if (a4 < 0.0) {
    a4 = 0.0;
  }
  if (a2 != 0) {
    v4 = a2 & *(_WORD*)(result + 704);
    if ((v4 & 1) == 0) {
      if ((v4 & 2) == 0) {
        goto LABEL_6;
      }
    LABEL_17:
      v7 = *(_DWORD*)(result + 604);
      v8 = *(_DWORD*)(result + 600);
      if (v7 >= v8) {
        *(_DWORD*)(result + 592) = *(_DWORD*)(result + 596);
        *(float*)(result + 596) = a4;
        *(_DWORD*)(result + 600) = a3;
        *(_DWORD*)(result + 604) = 0;
        if ((v4 & 4) != 0) {
          goto LABEL_21;
        }
      }
      else {
        *(float*)(result + 592) =
            *(float*)(result + 592) +
            (float)((float)((float)(*(float*)(result + 596) -
                                    *(float*)(result + 592)) *
                            (float)v7) /
                    (float)v8);
        *(float*)(result + 596) = a4;
        *(_DWORD*)(result + 600) = a3;
        *(_DWORD*)(result + 604) = 0;
        if ((v4 & 4) != 0) {
          goto LABEL_21;
        }
      }
    LABEL_7:
      if ((v4 & 8) == 0) {
        goto LABEL_8;
      }
    LABEL_25:
      v11 = *(_DWORD*)(result + 636);
      v12 = *(_DWORD*)(result + 632);
      if (v11 >= v12) {
        *(_DWORD*)(result + 624) = *(_DWORD*)(result + 628);
        *(float*)(result + 628) = a4;
        *(_DWORD*)(result + 632) = a3;
        *(_DWORD*)(result + 636) = 0;
        if ((v4 & 0x10) != 0) {
          goto LABEL_29;
        }
      }
      else {
        *(float*)(result + 624) =
            *(float*)(result + 624) +
            (float)((float)((float)(*(float*)(result + 628) -
                                    *(float*)(result + 624)) *
                            (float)v11) /
                    (float)v12);
        *(float*)(result + 628) = a4;
        *(_DWORD*)(result + 632) = a3;
        *(_DWORD*)(result + 636) = 0;
        if ((v4 & 0x10) != 0) {
          goto LABEL_29;
        }
      }
    LABEL_9:
      if ((v4 & 0x20) == 0) {
        goto LABEL_10;
      }
    LABEL_33:
      v15 = *(_DWORD*)(result + 668);
      v16 = *(_DWORD*)(result + 664);
      if (v15 >= v16) {
        *(_DWORD*)(result + 656) = *(_DWORD*)(result + 660);
        *(float*)(result + 660) = a4;
        *(_DWORD*)(result + 664) = a3;
        *(_DWORD*)(result + 668) = 0;
        if ((v4 & 0x40) != 0) {
          goto LABEL_37;
        }
      }
      else {
        *(float*)(result + 656) =
            *(float*)(result + 656) +
            (float)((float)((float)(*(float*)(result + 660) -
                                    *(float*)(result + 656)) *
                            (float)v15) /
                    (float)v16);
        *(float*)(result + 660) = a4;
        *(_DWORD*)(result + 664) = a3;
        *(_DWORD*)(result + 668) = 0;
        if ((v4 & 0x40) != 0) {
          goto LABEL_37;
        }
      }
    LABEL_11:
      if ((v4 & 0x80) == 0) {
        return result;
      }
    LABEL_41:
      v19 = *(_DWORD*)(result + 700);
      v20 = *(_DWORD*)(result + 696);
      if (v19 >= v20) {
        *(_DWORD*)(result + 688) = *(_DWORD*)(result + 692);
      }
      else {
        *(float*)(result + 688) =
            *(float*)(result + 688) +
            (float)((float)((float)(*(float*)(result + 692) -
                                    *(float*)(result + 688)) *
                            (float)v19) /
                    (float)v20);
      }
      *(float*)(result + 692) = a4;
      *(_DWORD*)(result + 696) = a3;
      *(_DWORD*)(result + 700) = 0;
      return result;
    }
    v5 = *(_DWORD*)(result + 588);
    v6 = *(_DWORD*)(result + 584);
    if (v5 >= v6) {
      *(_DWORD*)(result + 576) = *(_DWORD*)(result + 580);
      *(float*)(result + 580) = a4;
      *(_DWORD*)(result + 584) = a3;
      *(_DWORD*)(result + 588) = 0;
      if ((v4 & 2) != 0) {
        goto LABEL_17;
      }
    }
    else {
      *(float*)(result + 576) =
          *(float*)(result + 576) +
          (float)((float)((float)(*(float*)(result + 580) -
                                  *(float*)(result + 576)) *
                          (float)v5) /
                  (float)v6);
      *(float*)(result + 580) = a4;
      *(_DWORD*)(result + 584) = a3;
      *(_DWORD*)(result + 588) = 0;
      if ((v4 & 2) != 0) {
        goto LABEL_17;
      }
    }
  LABEL_6:
    if ((v4 & 4) == 0) {
      goto LABEL_7;
    }
  LABEL_21:
    v9 = *(_DWORD*)(result + 620);
    v10 = *(_DWORD*)(result + 616);
    if (v9 >= v10) {
      *(_DWORD*)(result + 608) = *(_DWORD*)(result + 612);
      *(float*)(result + 612) = a4;
      *(_DWORD*)(result + 616) = a3;
      *(_DWORD*)(result + 620) = 0;
      if ((v4 & 8) != 0) {
        goto LABEL_25;
      }
    }
    else {
      *(float*)(result + 608) =
          *(float*)(result + 608) +
          (float)((float)((float)(*(float*)(result + 612) -
                                  *(float*)(result + 608)) *
                          (float)v9) /
                  (float)v10);
      *(float*)(result + 612) = a4;
      *(_DWORD*)(result + 616) = a3;
      *(_DWORD*)(result + 620) = 0;
      if ((v4 & 8) != 0) {
        goto LABEL_25;
      }
    }
  LABEL_8:
    if ((v4 & 0x10) == 0) {
      goto LABEL_9;
    }
  LABEL_29:
    v13 = *(_DWORD*)(result + 652);
    v14 = *(_DWORD*)(result + 648);
    if (v13 >= v14) {
      *(_DWORD*)(result + 640) = *(_DWORD*)(result + 644);
      *(float*)(result + 644) = a4;
      *(_DWORD*)(result + 648) = a3;
      *(_DWORD*)(result + 652) = 0;
      if ((v4 & 0x20) != 0) {
        goto LABEL_33;
      }
    }
    else {
      *(float*)(result + 640) =
          *(float*)(result + 640) +
          (float)((float)((float)(*(float*)(result + 644) -
                                  *(float*)(result + 640)) *
                          (float)v13) /
                  (float)v14);
      *(float*)(result + 644) = a4;
      *(_DWORD*)(result + 648) = a3;
      *(_DWORD*)(result + 652) = 0;
      if ((v4 & 0x20) != 0) {
        goto LABEL_33;
      }
    }
  LABEL_10:
    if ((v4 & 0x40) == 0) {
      goto LABEL_11;
    }
  LABEL_37:
    v17 = *(_DWORD*)(result + 684);
    v18 = *(_DWORD*)(result + 680);
    if (v17 >= v18) {
      *(_DWORD*)(result + 672) = *(_DWORD*)(result + 676);
      *(float*)(result + 676) = a4;
      *(_DWORD*)(result + 680) = a3;
      *(_DWORD*)(result + 684) = 0;
      if ((v4 & 0x80) == 0) {
        return result;
      }
    }
    else {
      *(float*)(result + 672) =
          *(float*)(result + 672) +
          (float)((float)((float)(*(float*)(result + 676) -
                                  *(float*)(result + 672)) *
                          (float)v17) /
                  (float)v18);
      *(float*)(result + 676) = a4;
      *(_DWORD*)(result + 680) = a3;
      *(_DWORD*)(result + 684) = 0;
      if ((v4 & 0x80) == 0) {
        return result;
      }
    }
    goto LABEL_41;
  }
  return result;
}

__int64 StreamSound_Unknown9(__int64 result)
{
  __int64 v1;
  int v2;
  int v3;
  __int64* v4;
  _QWORD* v5;
  __int64* v6;
  __int64 v7;
  _QWORD* v8;
  unsigned int v9;
  int v10;
  __int64 v11;

  v1 = *(_QWORD*)(result + 568);
  v2 = *(unsigned __int8*)(result + 256);
  v3 = *(_DWORD*)(result + 124);
  v4 = (__int64*)(result + 544);
  v5 = (_QWORD*)(v1 + 32);
  if (result + 544 != v1 + 32) {
    v6 = *(__int64**)(result + 552);
    v7 = *v6;
    *(_QWORD*)(*(_QWORD*)(result + 544) + 8LL) = v6;
    *v6 = *(_QWORD*)(result + 544);
    *(_QWORD*)(v7 + 8) = v4;
    *(_QWORD*)(result + 544) = v7;
  }
  v8 = *(_QWORD**)(v1 + 40);
  if (v8 != v5) {
    v9 = (v3 + v2) & ~((v3 + v2) >> 31);
    do {
      v10 = (*((_DWORD*)v8 - 105) + *((unsigned __int8*)v8 - 288)) &
            ~((*((_DWORD*)v8 - 105) + *((unsigned __int8*)v8 - 288)) >> 31);
      if (v10 >= 127) {
        v10 = 127;
      }
      if (v9 < v10) {
        break;
      }
      v8 = (_QWORD*)v8[1];
    } while (v8 != v5);
  }
  v11 = *v4;
  *v4 = *v8;
  *(_QWORD*)(v11 + 8) = v8;
  *(_QWORD*)(*v8 + 8LL) = v4;
  *v8 = v11;
  return result;
}

__int64 StreamSound_2964c0(__int64 a1)
{
  if (*(_BYTE*)(a1 + 248) == 1) {
    return StreamSoundPlayer_299550(a1 + 768);
  }
  else {
    return 0;
  }
}

__int64 StreamSound_2964e0(__int64 a1, char a2)
{
  __int64 v2;
  __int64 v4;

  if (*(_BYTE*)(a1 + 248) != 1) {
    return 0;
  }
  v2 = a1 + 768;
  v4 = 72200;
  if ((a2 & 1) != 0) {
    v4 = 72208;
  }
  return *(_QWORD*)(v2 + v4);
}

__int64 StreamSound_Unknown5(_BYTE* a1)
{
  if (a1[248] == 1) {
    return (a1[993] | a1[995]) & 1;
  }
  else {
    return 0;
  }
}

__int64 StreamSound_DeletingDestructor(__int64 a1)
{
  __int64 result;

  *(_QWORD*)a1 = GameData_21353b0[0] + 2;
  result = StreamSoundPlayer_Destructor(a1 + 768);
  *(_QWORD*)a1 = nn_atk_detail_BasicSound_vtable;
  *(_DWORD*)(a1 + 260) = 3;
  return result;
}

#pragma GCC visibility pop
