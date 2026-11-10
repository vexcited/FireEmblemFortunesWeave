#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_5a2080(__int64);
__int64 GameRoutine_5b2420(_QWORD);
__int64 GameRoutine_5b2430(_QWORD);
__int64 GameRoutine_5b2470(_QWORD);
__int64 GameRoutine_5b2480(_QWORD);
__int64 GameRoutine_5b24a0(_QWORD);
__int64 GameRoutine_5b24b0(_QWORD);
__int64 GameRoutine_5b24c0(_QWORD);
__int64 GameRoutine_5b24e0(_QWORD, _QWORD);
__int64 GameRoutine_5b24f0(_QWORD, _QWORD);
__int64 GameRoutine_5b2500(_QWORD, _QWORD);
__int64 GameRoutine_5b2540(_QWORD, _QWORD);
__int64 LayoutEx_579180(__int64);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 nn_detail_UnexpectedDefaultImpl(long double, float, long double,
                                        long double, long double);
__int64 RoundRectShape_5a1f80(_DWORD* a1, _DWORD* a2);
__int64 RoundRectShape_Unknown2(__int64 a1, __int64 a2, __int64 a3, __int64 a4);

__int64 RoundRectShape_5a1f80(_DWORD* a1, _DWORD* a2)
{
  unsigned int v4;
  unsigned int v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;

  a1[16] = a2[16];
  a1[17] = a2[17];
  a1[18] = a2[18];
  v4 = GameRoutine_5b24b0(a2);
  GameRoutine_5b2500(a1, v4);
  v5 = GameRoutine_5b24c0(a2);
  GameRoutine_5b2540(a1, v5);
  v6 = GameRoutine_5b2470(a2);
  v7 = LayoutEx_579180(v6);
  v8 = GameRoutine_5b2430(a2);
  v9 = GameRoutine_5b2470(a2);
  memcpy(v7, v8, v9);
  GameRoutine_5b24e0(a1, v7);
  v10 = GameRoutine_5b2480(a2);
  v11 = LayoutEx_579180(v10);
  v12 = GameRoutine_5b2420(a2);
  v13 = GameRoutine_5b2480(a2);
  memcpy(v11, v12, v13);
  return GameRoutine_5b24f0(a1, v11);
}

__int64 RoundRectShape_Unknown2(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v6;
  long double v7;
  float v8;
  long double v9;
  long double v10;
  long double v11;
  __int64 result;
  float v13;
  float v14;
  int v15;
  bool v17;
  bool v19;
  unsigned int v20;
  int v21;
  int v22;
  __int16 v23;
  __int16 v24;
  int v25;
  int v26;
  int v27;
  __int16 v28;
  int v29;
  int v30;
  int v31;
  __int16 v32;
  int v33;
  int v34;
  __int16 v35;
  int v36;
  int v37;
  int v38;
  __int16 v39;
  int v40;
  int v41;
  __int16 v42;
  int v43;
  __int16 v44;
  __int16 v45;
  float v46;
  float v47;
  int v48;
  bool v50;
  bool v52;
  unsigned int v53;
  int v54;
  int v55;
  int v56;
  int v57;
  int v58;
  int v59;
  int v60;
  int v61;
  int v62;
  int v63;
  int v64;
  int v65;
  int v66;
  int v67;
  int v68;
  int v69;
  int v70;
  int v71;
  int v72;
  int v73;
  int v74;
  int v75;
  int v76;
  int v77;
  int v78;
  int v79;
  int v80;
  int v81;
  int v82;
  __int64 vars10;
  __int64 vars10a;
  __int64 _18;

  GameRoutine_5b24e0(a1, a2);
  GameRoutine_5a2080(a1);
  GameRoutine_5b24f0(a1, a4);
  v6 = GameRoutine_5b24a0(a1);
  if (v6 == 2) {
    vars10a = _18;
    result = GameRoutine_5b2420(a1);
    v46 = *(float*)(a1 + 64);
    v47 = *(float*)(a1 + 68);
    v48 = *(_DWORD*)(a1 + 72);
    v50 = (float)(v46 + v46) < 2.0 && v46 <= 1.0;
    v52 = (float)(v47 + v47) < 2.0 && v47 <= 1.0;
    if ((unsigned int)(v48 + 1) < 2) {
      goto LABEL_100;
    }
    v53 = v48 - 1;
    v54 = *(_DWORD*)(a1 + 72) & 7;
    if ((unsigned int)(v48 - 1) >= 7) {
      v57 = 9;
      do {
        *(_DWORD*)result = 0;
        *(_DWORD*)(result + 4) = v57 - 8;
        *(_DWORD*)(result + 24) = 0;
        *(_DWORD*)(result + 28) = v57 - 6;
        *(_DWORD*)(result + 8) = v57 - 7;
        *(_DWORD*)(result + 12) = 0;
        *(_DWORD*)(result + 16) = v57 - 7;
        *(_DWORD*)(result + 20) = v57 - 6;
        *(_DWORD*)(result + 32) = v57 - 5;
        *(_DWORD*)(result + 36) = 0;
        *(_DWORD*)(result + 40) = v57 - 5;
        *(_DWORD*)(result + 44) = v57 - 4;
        *(_DWORD*)(result + 48) = 0;
        *(_DWORD*)(result + 52) = v57 - 4;
        *(_DWORD*)(result + 56) = v57 - 3;
        *(_DWORD*)(result + 60) = 0;
        *(_DWORD*)(result + 64) = v57 - 3;
        *(_DWORD*)(result + 68) = v57 - 2;
        v58 = v57 - 1;
        *(_DWORD*)(result + 72) = 0;
        *(_DWORD*)(result + 76) = v57 - 2;
        *(_DWORD*)(result + 88) = v57 - 1;
        *(_DWORD*)(result + 92) = v57;
        v57 += 8;
        *(_DWORD*)(result + 80) = v58;
        *(_DWORD*)(result + 84) = 0;
        result += 96;
      } while (v57 - (v48 & 0xFFFFFFF8) != 9);
      v55 = v57 - 8;
      v56 = v48 + 2;
      if ((v48 & 7) == 0) {
      LABEL_76:
        if (v53 >= 7) {
          v61 = 0;
          do {
            v62 = v48 + v61;
            v61 += 8;
            *(_DWORD*)result = v56;
            *(_DWORD*)(result + 4) = v62 + 3;
            *(_DWORD*)(result + 8) = v62 + 4;
            *(_DWORD*)(result + 12) = v56;
            *(_DWORD*)(result + 16) = v62 + 4;
            *(_DWORD*)(result + 20) = v62 + 5;
            *(_DWORD*)(result + 24) = v56;
            *(_DWORD*)(result + 28) = v62 + 5;
            *(_DWORD*)(result + 32) = v62 + 6;
            *(_DWORD*)(result + 36) = v56;
            *(_DWORD*)(result + 40) = v62 + 6;
            *(_DWORD*)(result + 44) = v62 + 7;
            *(_DWORD*)(result + 48) = v56;
            *(_DWORD*)(result + 52) = v62 + 7;
            *(_DWORD*)(result + 56) = v62 + 8;
            *(_DWORD*)(result + 60) = v56;
            *(_DWORD*)(result + 64) = v62 + 8;
            *(_DWORD*)(result + 68) = v62 + 9;
            *(_DWORD*)(result + 72) = v56;
            *(_DWORD*)(result + 76) = v62 + 9;
            *(_DWORD*)(result + 80) = v62 + 10;
            *(_DWORD*)(result + 84) = v56;
            *(_DWORD*)(result + 88) = v62 + 10;
            *(_DWORD*)(result + 92) = v62 + 11;
            result += 96;
          } while ((v48 & 0xFFFFFFF8) != v61);
          v60 = v61 + 1;
          if ((v48 & 7) == 0) {
          LABEL_84:
            v67 = 2 * v56;
            if (v53 >= 7) {
              v69 = 0;
              do {
                v70 = 2 * v48 + v69;
                v69 += 8;
                *(_DWORD*)result = v67;
                *(_DWORD*)(result + 4) = v70 + 5;
                *(_DWORD*)(result + 8) = v70 + 6;
                *(_DWORD*)(result + 12) = v67;
                *(_DWORD*)(result + 16) = v70 + 6;
                *(_DWORD*)(result + 20) = v70 + 7;
                *(_DWORD*)(result + 24) = v67;
                *(_DWORD*)(result + 28) = v70 + 7;
                *(_DWORD*)(result + 32) = v70 + 8;
                *(_DWORD*)(result + 36) = v67;
                *(_DWORD*)(result + 40) = v70 + 8;
                *(_DWORD*)(result + 44) = v70 + 9;
                *(_DWORD*)(result + 48) = v67;
                *(_DWORD*)(result + 52) = v70 + 9;
                *(_DWORD*)(result + 56) = v70 + 10;
                *(_DWORD*)(result + 60) = v67;
                *(_DWORD*)(result + 64) = v70 + 10;
                *(_DWORD*)(result + 68) = v70 + 11;
                *(_DWORD*)(result + 72) = v67;
                *(_DWORD*)(result + 76) = v70 + 11;
                *(_DWORD*)(result + 80) = v70 + 12;
                *(_DWORD*)(result + 84) = v67;
                *(_DWORD*)(result + 88) = v70 + 12;
                *(_DWORD*)(result + 92) = v70 + 13;
                result += 96;
              } while ((v48 & 0xFFFFFFF8) != v69);
              v68 = v69 + 1;
              if ((v48 & 7) == 0) {
                goto LABEL_92;
              }
            }
            else {
              v68 = 1;
              if ((v48 & 7) == 0) {
              LABEL_92:
                v75 = 3 * v56;
                if (v53 < 7) {
                  v76 = 1;
                  if ((v48 & 7) == 0) {
                    goto LABEL_100;
                  }
                  goto LABEL_98;
                }
                v77 = 0;
                do {
                  v78 = 3 * v48 + v77;
                  v77 += 8;
                  *(_DWORD*)result = v75;
                  *(_DWORD*)(result + 4) = v78 + 7;
                  *(_DWORD*)(result + 8) = v78 + 8;
                  *(_DWORD*)(result + 12) = v75;
                  *(_DWORD*)(result + 16) = v78 + 8;
                  *(_DWORD*)(result + 20) = v78 + 9;
                  *(_DWORD*)(result + 24) = v75;
                  *(_DWORD*)(result + 28) = v78 + 9;
                  *(_DWORD*)(result + 32) = v78 + 10;
                  *(_DWORD*)(result + 36) = v75;
                  *(_DWORD*)(result + 40) = v78 + 10;
                  *(_DWORD*)(result + 44) = v78 + 11;
                  *(_DWORD*)(result + 48) = v75;
                  *(_DWORD*)(result + 52) = v78 + 11;
                  *(_DWORD*)(result + 56) = v78 + 12;
                  *(_DWORD*)(result + 60) = v75;
                  *(_DWORD*)(result + 64) = v78 + 12;
                  *(_DWORD*)(result + 68) = v78 + 13;
                  *(_DWORD*)(result + 72) = v75;
                  *(_DWORD*)(result + 76) = v78 + 13;
                  *(_DWORD*)(result + 80) = v78 + 14;
                  *(_DWORD*)(result + 84) = v75;
                  *(_DWORD*)(result + 88) = v78 + 14;
                  *(_DWORD*)(result + 92) = v78 + 15;
                  result += 96;
                } while ((v48 & 0xFFFFFFF8) != v77);
                v76 = v77 + 1;
                if ((v48 & 7) != 0) {
                LABEL_98:
                  v79 = v76 + 3 * v48 + 7;
                  do {
                    v80 = v79 - 1;
                    *(_DWORD*)(result + 8) = v79++;
                    --v54;
                    *(_DWORD*)result = v75;
                    *(_DWORD*)(result + 4) = v80;
                    result += 12;
                  } while (v54 != 0);
                }
              LABEL_100:
                v81 = 4 * v48;
                v82 = 4 * v48 + 8;
                if (v50) {
                  *(_DWORD*)result = v82;
                  *(_DWORD*)(result + 4) = v81 + 10;
                  *(_DWORD*)(result + 8) = v81 + 11;
                  *(_DWORD*)(result + 12) = v82;
                  *(_DWORD*)(result + 16) = v81 + 11;
                  *(_DWORD*)(result + 20) = v81 + 9;
                  *(_DWORD*)(result + 24) = v81 + 12;
                  *(_DWORD*)(result + 28) = v81 + 15;
                  *(_DWORD*)(result + 32) = v81 + 14;
                  *(_DWORD*)(result + 36) = v81 + 12;
                  *(_DWORD*)(result + 40) = v81 + 13;
                  *(_DWORD*)(result + 44) = v81 + 15;
                  result += 48;
                  v82 = v81 + 16;
                  if (!v52) {
                    return result;
                  }
                }
                else if (!v52) {
                  return result;
                }
                *(_DWORD*)result = v82;
                *(_DWORD*)(result + 4) = v82 + 1;
                *(_DWORD*)(result + 8) = v82 + 2;
                *(_DWORD*)(result + 12) = v82;
                *(_DWORD*)(result + 16) = v82 + 2;
                *(_DWORD*)(result + 20) = v82 + 3;
                return result;
              }
            }
            v71 = v68 + 2 * v48;
            v72 = v48 & 7;
            v73 = v71 + 5;
            do {
              v74 = v73 - 1;
              *(_DWORD*)(result + 8) = v73++;
              --v72;
              *(_DWORD*)result = v67;
              *(_DWORD*)(result + 4) = v74;
              result += 12;
            } while (v72 != 0);
            goto LABEL_92;
          }
        }
        else {
          v60 = 1;
          if ((v48 & 7) == 0) {
            goto LABEL_84;
          }
        }
        v63 = v60 + v48;
        v64 = v48 & 7;
        v65 = v63 + 3;
        do {
          v66 = v65 - 1;
          *(_DWORD*)(result + 8) = v65++;
          --v64;
          *(_DWORD*)result = v56;
          *(_DWORD*)(result + 4) = v66;
          result += 12;
        } while (v64 != 0);
        goto LABEL_84;
      }
    }
    else {
      v55 = 1;
      v56 = v48 + 2;
      if ((v48 & 7) == 0) {
        goto LABEL_76;
      }
    }
    v59 = v48 & 7;
    do {
      *(_DWORD*)result = 0;
      *(_DWORD*)(result + 4) = v55++;
      --v59;
      *(_DWORD*)(result + 8) = v55;
      result += 12;
    } while (v59 != 0);
    goto LABEL_76;
  }
  if (v6 != 1) {
    nn_detail_UnexpectedDefaultImpl(v7, v8, v9, v10, v11);
    __udf(0);
  }
  vars10 = _18;
  result = GameRoutine_5b2420(a1);
  v13 = *(float*)(a1 + 64);
  v14 = *(float*)(a1 + 68);
  v15 = *(_DWORD*)(a1 + 72);
  v17 = (float)(v13 + v13) < 2.0 && v13 <= 1.0;
  v19 = (float)(v14 + v14) < 2.0 && v14 <= 1.0;
  if ((unsigned int)(v15 + 1) < 2) {
    goto LABEL_50;
  }
  v20 = v15 - 1;
  v21 = *(_DWORD*)(a1 + 72) & 7;
  if ((unsigned int)(v15 - 1) >= 7) {
    v22 = 1;
    do {
      *(_WORD*)(result + 2) = v22;
      *(_WORD*)result = 0;
      *(_WORD*)(result + 6) = 0;
      *(_WORD*)(result + 12) = 0;
      *(_WORD*)(result + 18) = 0;
      *(_WORD*)(result + 24) = 0;
      *(_WORD*)(result + 30) = 0;
      *(_WORD*)(result + 36) = 0;
      *(_WORD*)(result + 42) = 0;
      *(_WORD*)(result + 4) = v22 + 1;
      *(_WORD*)(result + 8) = v22 + 1;
      *(_WORD*)(result + 10) = v22 + 2;
      *(_WORD*)(result + 14) = v22 + 2;
      *(_WORD*)(result + 16) = v22 + 3;
      *(_WORD*)(result + 20) = v22 + 3;
      *(_WORD*)(result + 22) = v22 + 4;
      *(_WORD*)(result + 26) = v22 + 4;
      *(_WORD*)(result + 28) = v22 + 5;
      *(_WORD*)(result + 32) = v22 + 5;
      *(_WORD*)(result + 34) = v22 + 6;
      *(_WORD*)(result + 38) = v22 + 6;
      v23 = v22 + 7;
      v22 += 8;
      *(_WORD*)(result + 40) = v23;
      *(_WORD*)(result + 44) = v23;
      *(_WORD*)(result + 46) = v22;
      result += 48;
    } while (v22 - (v15 & 0xFFFFFFF8) != 1);
  }
  else {
    v22 = 1;
  }
  v24 = v15 + 2;
  if ((v15 & 7) != 0) {
    v25 = v15 & 7;
    do {
      *(_WORD*)(result + 2) = v22++;
      *(_WORD*)result = 0;
      --v25;
      *(_WORD*)(result + 4) = v22;
      result += 6;
    } while (v25 != 0);
  }
  if (v20 < 7) {
    v26 = 1;
    if ((v15 & 7) == 0) {
      goto LABEL_34;
    }
    goto LABEL_32;
  }
  v27 = 0;
  do {
    v28 = v15 + v27;
    *(_WORD*)result = v24;
    *(_WORD*)(result + 6) = v24;
    v27 += 8;
    *(_WORD*)(result + 12) = v24;
    *(_WORD*)(result + 18) = v24;
    *(_WORD*)(result + 24) = v24;
    *(_WORD*)(result + 30) = v24;
    *(_WORD*)(result + 36) = v24;
    *(_WORD*)(result + 42) = v24;
    *(_WORD*)(result + 2) = v28 + 3;
    *(_WORD*)(result + 4) = v28 + 4;
    *(_WORD*)(result + 8) = v28 + 4;
    *(_WORD*)(result + 10) = v28 + 5;
    *(_WORD*)(result + 14) = v28 + 5;
    *(_WORD*)(result + 16) = v28 + 6;
    *(_WORD*)(result + 20) = v28 + 6;
    *(_WORD*)(result + 22) = v28 + 7;
    *(_WORD*)(result + 26) = v28 + 7;
    *(_WORD*)(result + 28) = v28 + 8;
    *(_WORD*)(result + 32) = v28 + 8;
    *(_WORD*)(result + 34) = v28 + 9;
    *(_WORD*)(result + 38) = v28 + 9;
    *(_WORD*)(result + 40) = v28 + 10;
    *(_WORD*)(result + 44) = v28 + 10;
    *(_WORD*)(result + 46) = v28 + 11;
    result += 48;
  } while ((v15 & 0xFFFFFFF8) != v27);
  v26 = v27 + 1;
  if ((v15 & 7) != 0) {
  LABEL_32:
    v29 = v26 + v15;
    v30 = v15 & 7;
    v31 = v29 + 2;
    do {
      *(_WORD*)(result + 2) = v31++;
      *(_WORD*)result = v24;
      --v30;
      *(_WORD*)(result + 4) = v31;
      result += 6;
    } while (v30 != 0);
  }
LABEL_34:
  v32 = 2 * v24;
  if (v20 < 7) {
    v33 = 1;
    if ((v15 & 7) == 0) {
      goto LABEL_42;
    }
    goto LABEL_40;
  }
  v34 = 0;
  do {
    v35 = 2 * v15 + v34;
    *(_WORD*)result = v32;
    *(_WORD*)(result + 6) = v32;
    v34 += 8;
    *(_WORD*)(result + 12) = v32;
    *(_WORD*)(result + 18) = v32;
    *(_WORD*)(result + 24) = v32;
    *(_WORD*)(result + 30) = v32;
    *(_WORD*)(result + 36) = v32;
    *(_WORD*)(result + 42) = v32;
    *(_WORD*)(result + 2) = v35 + 5;
    *(_WORD*)(result + 4) = v35 + 6;
    *(_WORD*)(result + 8) = v35 + 6;
    *(_WORD*)(result + 10) = v35 + 7;
    *(_WORD*)(result + 14) = v35 + 7;
    *(_WORD*)(result + 16) = v35 + 8;
    *(_WORD*)(result + 20) = v35 + 8;
    *(_WORD*)(result + 22) = v35 + 9;
    *(_WORD*)(result + 26) = v35 + 9;
    *(_WORD*)(result + 28) = v35 + 10;
    *(_WORD*)(result + 32) = v35 + 10;
    *(_WORD*)(result + 34) = v35 + 11;
    *(_WORD*)(result + 38) = v35 + 11;
    *(_WORD*)(result + 40) = v35 + 12;
    *(_WORD*)(result + 44) = v35 + 12;
    *(_WORD*)(result + 46) = v35 + 13;
    result += 48;
  } while ((v15 & 0xFFFFFFF8) != v34);
  v33 = v34 + 1;
  if ((v15 & 7) != 0) {
  LABEL_40:
    v36 = v33 + 2 * v15;
    v37 = v15 & 7;
    v38 = v36 + 4;
    do {
      *(_WORD*)(result + 2) = v38++;
      *(_WORD*)result = v32;
      --v37;
      *(_WORD*)(result + 4) = v38;
      result += 6;
    } while (v37 != 0);
  }
LABEL_42:
  v39 = 3 * v24;
  if (v20 >= 7) {
    v41 = 0;
    do {
      v42 = 3 * v15 + v41;
      *(_WORD*)result = v39;
      *(_WORD*)(result + 6) = v39;
      v41 += 8;
      *(_WORD*)(result + 12) = v39;
      *(_WORD*)(result + 18) = v39;
      *(_WORD*)(result + 24) = v39;
      *(_WORD*)(result + 30) = v39;
      *(_WORD*)(result + 36) = v39;
      *(_WORD*)(result + 42) = v39;
      *(_WORD*)(result + 2) = v42 + 7;
      *(_WORD*)(result + 4) = v42 + 8;
      *(_WORD*)(result + 8) = v42 + 8;
      *(_WORD*)(result + 10) = v42 + 9;
      *(_WORD*)(result + 14) = v42 + 9;
      *(_WORD*)(result + 16) = v42 + 10;
      *(_WORD*)(result + 20) = v42 + 10;
      *(_WORD*)(result + 22) = v42 + 11;
      *(_WORD*)(result + 26) = v42 + 11;
      *(_WORD*)(result + 28) = v42 + 12;
      *(_WORD*)(result + 32) = v42 + 12;
      *(_WORD*)(result + 34) = v42 + 13;
      *(_WORD*)(result + 38) = v42 + 13;
      *(_WORD*)(result + 40) = v42 + 14;
      *(_WORD*)(result + 44) = v42 + 14;
      *(_WORD*)(result + 46) = v42 + 15;
      result += 48;
    } while ((v15 & 0xFFFFFFF8) != v41);
    v40 = v41 + 1;
    if ((v15 & 7) == 0) {
      goto LABEL_50;
    }
    goto LABEL_48;
  }
  v40 = 1;
  if ((v15 & 7) != 0) {
  LABEL_48:
    v43 = v40 + 3 * v15 + 6;
    do {
      *(_WORD*)(result + 2) = v43++;
      *(_WORD*)result = v39;
      --v21;
      *(_WORD*)(result + 4) = v43;
      result += 6;
    } while (v21 != 0);
  }
LABEL_50:
  v44 = 4 * v15;
  v45 = 4 * v15 + 8;
  if (!v17) {
    if (!v19) {
      return result;
    }
  LABEL_54:
    *(_WORD*)result = v45;
    *(_WORD*)(result + 6) = v45;
    *(_WORD*)(result + 2) = v45 + 1;
    *(_WORD*)(result + 4) = v45 + 2;
    *(_WORD*)(result + 8) = v45 + 2;
    *(_WORD*)(result + 10) = v45 + 3;
    return result;
  }
  *(_WORD*)result = v45;
  *(_WORD*)(result + 6) = v45;
  *(_WORD*)(result + 2) = v44 + 10;
  *(_WORD*)(result + 4) = v44 + 11;
  *(_WORD*)(result + 8) = v44 + 11;
  *(_WORD*)(result + 14) = v44 + 15;
  *(_WORD*)(result + 22) = v44 + 15;
  v45 = v44 + 16;
  *(_WORD*)(result + 10) = v44 + 9;
  *(_WORD*)(result + 16) = v44 + 14;
  *(_WORD*)(result + 12) = v44 + 12;
  *(_WORD*)(result + 18) = v44 + 12;
  *(_WORD*)(result + 20) = v44 + 13;
  result += 24;
  if (v19) {
    goto LABEL_54;
  }
  return result;
}

#pragma GCC visibility pop
