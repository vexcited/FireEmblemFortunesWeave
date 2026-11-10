#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

float MmlSequenceTrack_293db0(unsigned __int8 a1);
__attribute__((swiftcall)) void
MmlSequenceTrack_294a80(PSEUDO_X8 x8_, __int64 unused_int0, __int64* a1,
                        float* a2, __int64 a3, int a4, float a6, float a7,
                        float a8);
__int64 MmlSequenceTrack_294260(__int64 a1, char a2);

float MmlSequenceTrack_293db0(unsigned __int8 a1)
{

#pragma clang fp contract(off)
  return (float)a1 * 0x1.0204080000000p-7f;
}

__int64 MmlSequenceTrack_294260(__int64 a1, char a2)
{
  int v2;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  bool v10;
  bool v11;
  int v12;
  __int64 result;
  int v14;
  unsigned int i;

  if (*(_BYTE*)(a1 + 9) != 1) {
    return 0;
  }
  v2 = *(__int16*)(a1 + 392);
  if (v2 < *(__int16*)(a1 + 390)) {
    *(_WORD*)(a1 + 392) = v2 + 1;
    v5 = *(__int16*)(a1 + 398);
    if (v5 >= *(__int16*)(a1 + 396)) {
    LABEL_4:
      v6 = *(__int16*)(a1 + 404);
      if (v6 >= *(__int16*)(a1 + 402)) {
        goto LABEL_5;
      }
      goto LABEL_16;
    }
  }
  else {
    v5 = *(__int16*)(a1 + 398);
    if (v5 >= *(__int16*)(a1 + 396)) {
      goto LABEL_4;
    }
  }
  *(_WORD*)(a1 + 398) = v5 + 1;
  v6 = *(__int16*)(a1 + 404);
  if (v6 >= *(__int16*)(a1 + 402)) {
  LABEL_5:
    v7 = *(__int16*)(a1 + 410);
    if (v7 >= *(__int16*)(a1 + 408)) {
      goto LABEL_6;
    }
    goto LABEL_17;
  }
LABEL_16:
  *(_WORD*)(a1 + 404) = v6 + 1;
  v7 = *(__int16*)(a1 + 410);
  if (v7 >= *(__int16*)(a1 + 408)) {
  LABEL_6:
    v8 = *(__int16*)(a1 + 416);
    if (v8 >= *(__int16*)(a1 + 414)) {
      goto LABEL_7;
    }
    goto LABEL_18;
  }
LABEL_17:
  *(_WORD*)(a1 + 410) = v7 + 1;
  v8 = *(__int16*)(a1 + 416);
  if (v8 >= *(__int16*)(a1 + 414)) {
  LABEL_7:
    if (*(_BYTE*)(a1 + 376) != 1) {
      goto LABEL_8;
    }
    goto LABEL_19;
  }
LABEL_18:
  *(_WORD*)(a1 + 416) = v8 + 1;
  if (*(_BYTE*)(a1 + 376) != 1) {
  LABEL_8:
    v9 = *(_DWORD*)(a1 + 372);
    v11 = __OFSUB__(v9, 1);
    v12 = v9 - 1;
    v10 = v12 == 0;
    if (v12 < 0 == v11) {
    LABEL_9:
      result = 1;
      *(_DWORD*)(a1 + 372) = v12;
      if (!v10 || *(_QWORD*)(a1 + 192) == 0) {
        return result;
      }
      goto LABEL_23;
    }
    goto LABEL_22;
  }
LABEL_19:
  if (*(_QWORD*)(a1 + 608) != 0) {
    return 1;
  }
  *(_BYTE*)(a1 + 376) = 0;
  v14 = *(_DWORD*)(a1 + 372);
  v11 = __OFSUB__(v14, 1);
  v12 = v14 - 1;
  v10 = v12 == 0;
  if (v12 < 0 == v11) {
    goto LABEL_9;
  }
LABEL_22:
  if (*(_QWORD*)(a1 + 192) == 0) {
    return 1;
  }
LABEL_23:
  for (i = 0;; ++i) {
    result = 1;
    if (*(_DWORD*)(a1 + 372) != 0 || (*(_BYTE*)(a1 + 376) & 1) != 0 ||
        i >> 4 > 0x270) {
      break;
    }
    if ((*(unsigned int (**)(__int64, _QWORD))(*(_QWORD*)a1 + 16LL))(
            a1, a2 & 1) == 1) {
      return 0xFFFFFFFFLL;
    }
  }
  return result;
}

__attribute__((swiftcall)) void

MmlSequenceTrack_294a80(PSEUDO_X8 x8_, __int64 unused_int0, __int64* a1,
                        float* a2, __int64 a3, int a4, float a6, float a7,
                        float a8)
{

#pragma clang fp contract(off)
  __int64 a5 = (__int64)PSEUDO_X8_VALUE(x8_);
  __int64 v8;
  float v9;
  float v10;
  float v11;
  float v12;
  float v13;
  float v14;
  float v15;
  float v16;
  float v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  float v22;
  float v23;
  float v24;
  float v25;
  __int64 v26;
  float v27;
  float v28;
  float v29;
  float v30;
  float v31;
  float v32;
  float v33;
  float v34;
  float v35;
  float v36;
  float v37;
  float v38;
  float v39;
  float v40;
  float v41;
  float v42;
  float v43;
  float v44;
  float v45;
  float v46;
  float v47;
  float v48;
  float v49;
  float v50;
  float v51;
  float v52;
  float v53;
  float v54;
  float v55;
  float v56;
  float v57;
  float result;
  __int64 v59;
  __int64 v60;
  float* v61;
  float* v62;
  __int64 v63;
  float v64;
  float v65;
  float v66;
  float v67;
  float v68;
  float v69;
  float v70;
  float v71;
  float v72;
  float v73;
  __int64 v74;
  float* v75;
  float* v76;
  float v77;

  v8 = a1[3];
  v9 = *a2;
  v10 = a2[2];
  v11 = a2[3];
  v12 = a2[4];
  v13 = a2[5];
  v14 = a2[6];
  v15 = a2[7];
  v16 = a2[8];
  v17 = a2[9];
  *(_QWORD*)(a5 + 16) = a1[2];
  *(_QWORD*)(a5 + 24) = v8;
  v18 = *a1;
  v19 = a1[1];
  v20 = a1[5];
  *(_QWORD*)(a5 + 32) = a1[4];
  *(_QWORD*)(a5 + 40) = v20;
  *(_QWORD*)a5 = v18;
  *(_QWORD*)(a5 + 8) = v19;
  v21 = a1[7];
  v22 = *(float*)a5;
  *(_QWORD*)(a5 + 48) = a1[6];
  *(_QWORD*)(a5 + 56) = v21;
  v23 = v9 * v22;
  v24 = *(float*)(a5 + 8);
  v25 = *(float*)(a5 + 12);
  v26 = a1[9];
  *(_QWORD*)(a5 + 64) = a1[8];
  *(_QWORD*)(a5 + 72) = v26;
  *(float*)a5 = v23;
  v27 = v10 * v24;
  v28 = v11 * v25;
  v29 = *(float*)(a5 + 16);
  v30 = *(float*)(a5 + 20);
  *(float*)(a5 + 8) = v27;
  *(float*)(a5 + 12) = v28;
  v31 = v12 * v29;
  v32 = v13 * v30;
  v33 = a2[10];
  v34 = a2[11];
  v35 = *(float*)(a5 + 24);
  v36 = *(float*)(a5 + 28);
  *(float*)(a5 + 16) = v31;
  *(float*)(a5 + 20) = v32;
  v37 = v14 * v35;
  v38 = v15 * v36;
  v39 = *(float*)(a5 + 32);
  v40 = *(float*)(a5 + 36);
  v41 = v33 * *(float*)(a5 + 40);
  v42 = v34 * *(float*)(a5 + 44);
  v43 = *(float*)(a5 + 48);
  v44 = *(float*)(a5 + 52);
  *(float*)(a5 + 24) = v37;
  *(float*)(a5 + 28) = v38;
  v45 = *(float*)(a5 + 72);
  v46 = *(float*)(a5 + 76);
  *(float*)(a5 + 40) = v41;
  *(float*)(a5 + 44) = v42;
  v47 = a2[12];
  v48 = a2[13];
  *(float*)(a5 + 32) = v16 * v39;
  *(float*)(a5 + 36) = v17 * v40;
  *(float*)(a5 + 48) = v47 * v43;
  *(float*)(a5 + 52) = v48 * v44;
  v49 = (float)(a7 + *(float*)(a5 + 60)) + a2[15];
  v50 = a2[16];
  v51 = a2[17];
  v52 = *(float*)(a5 + 64);
  v53 = *(float*)(a5 + 68);
  *(float*)(a5 + 56) = (float)(a6 + *(float*)(a5 + 56)) + a2[14];
  *(float*)(a5 + 60) = v49;
  v54 = v50 + v52;
  v55 = v51 + v53;
  v56 = a2[18];
  v57 = a2[19];
  result = a8 + v54;
  *(float*)(a5 + 64) = a8 + v54;
  *(float*)(a5 + 68) = v55;
  *(float*)(a5 + 72) = v56 + v45;
  *(float*)(a5 + 76) = v57 + v46;
  if (a4 >= 1) {
    v59 = a4 & 7;
    if ((unsigned int)a4 < 8) {
      v60 = 0;
      if ((a4 & 7) == 0) {
        result;
        return;
      }
      goto LABEL_8;
    }
    v61 = (float*)(a5 + 96);
    v62 = (float*)(a3 + 16);
    v63 = 0;
    do {
      v63 -= 8;
      v64 = *(v62 - 3) + *(v61 - 6);
      v65 = *(v62 - 2) + *(v61 - 5);
      v66 = *v62;
      v67 = v62[1];
      v68 = *(v62 - 1) + *(v61 - 4);
      v69 = *(v61 - 3);
      v70 = *(v61 - 2);
      *(v61 - 7) = *(v62 - 4) + *(v61 - 7);
      *(v61 - 6) = v64;
      v71 = v62[2];
      v72 = v62[3];
      *(v61 - 5) = v65;
      *(v61 - 4) = v68;
      v62 += 8;
      *(v61 - 3) = v66 + v69;
      *(v61 - 2) = v67 + v70;
      result = v71 + *(v61 - 1);
      v73 = v72 + *v61;
      *(v61 - 1) = result;
      *v61 = v73;
      v61 += 8;
    } while (-(__int64)(a4 & 0x7FFFFFF8) != v63);
    v60 = -v63;
    if ((a4 & 7) != 0) {
    LABEL_8:
      v74 = a5 + 4 * v60;
      v75 = (float*)(a3 + 4 * v60);
      v76 = (float*)(v74 + 68);
      do {
        v77 = *v75++;
        --v59;
        result = v77 + *v76;
        *v76++ = result;
      } while (v59 != 0);
    }
  }
  {
    result;
    return;
  }
}

#pragma GCC visibility pop
