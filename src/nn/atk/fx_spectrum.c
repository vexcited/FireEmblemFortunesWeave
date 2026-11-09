#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_2af380(_QWORD);
__int64 nn_diag_detail_AbortImpl_1a0a590(_QWORD);
__int64 nn_os_FinalizeMutex(_QWORD);
__int64 nn_os_LockMutex(_QWORD);
__n128 nn_os_UnlockMutex(_QWORD);
extern __int64 GameData_2134798[8];
__int64 FxSpectrum_Destructor_16f7c0(_QWORD* a1);
__n128 FxSpectrum_Unknown5(__int64 a1, __int64 a2, int* a3);

__int64 FxSpectrum_Destructor_16f7c0(_QWORD* a1)
{
  *a1 = GameData_2134798[0] + 16;
  nn_os_FinalizeMutex(a1 + 4111);
  return GameRoutine_2af380(a1);
}

__n128 FxSpectrum_Unknown5(__int64 a1, __int64 a2, int* a3)
{
  int v3;
  int v4;
  int v5;
  __int64 v7;
  __int64 v8;
  int v10;
  __int64 v11;
  int v12;
  int v13;
  int v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  int v19;
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
  unsigned int v40;
  __int64 v41;
  int v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  int v51;
  __int64 v52;
  int v53;
  int v54;
  int v55;
  int v57;
  __int64 v58;
  int v59;
  __int64 v60;
  __int64 v61;
  __int64 v62;
  int v63;
  __int64 v64;
  __int64 v65;
  __int64 v66;
  int v67;
  __int64 v68;
  __int64 v69;
  __int64 v70;

  v3 = a3[4];
  v4 = a3[3] * *a3;
  v5 = v3 / v4;
  if (v3 % v4 != 0) {
    a1 = nn_diag_detail_AbortImpl_1a0a590(a1);
  LABEL_76:
    nn_diag_detail_AbortImpl_1a0a590(a1);
    __udf(0);
  }
  if (v5 > a3[2]) {
    goto LABEL_76;
  }
  v7 = a1;
  v8 = a1 + 0x8000;
  nn_os_LockMutex(a1 + 32888);
  if ((a3[3] | 2) != 6) {
    if (v5 < 1) {
      return nn_os_UnlockMutex(v7 + 32888);
    }
    v40 = *(_DWORD*)(v8 + 104);
    v41 = v7 + 104;
    v42 = 0;
    while (1) {
      v43 = *a3;
      v40 += v43;
      if (v40 >> 13 != 0) {
      LABEL_40:
        if ((*(_BYTE*)(v8 + 112) & 1) != 0) {
          v51 = a3[3];
          if (v51 >= 1) {
            LODWORD(v52) = *a3;
            if (v5 == 1) {
              v53 = 0;
              v54 = *a3;
              v55 = *a3;
            }
            else {
              v57 = 1;
              v53 = 0;
              LODWORD(v58) = *a3;
              v54 = *a3;
              v55 = *a3;
              do {
                if (v51 >= 1) {
                  if (v54 < 1) {
                    v55 = v54;
                  }
                  else {
                    v59 = 0;
                    v60 = a2 + 4LL * v55 * v51 * v53;
                    do {
                      if ((int)v58 >= 1) {
                        v61 = 0;
                        v62 = v60 + 4LL * (int)v58 * v59;
                        do {
                          *(_DWORD*)(v62 + 4 * v61++) = 0;
                          v58 = *a3;
                        } while (v61 < v58);
                        v51 = a3[3];
                      }
                      ++v59;
                      v54 = v58;
                      v55 = v58;
                    } while (v59 < v51);
                  }
                }
                if (v51 < 1) {
                  LODWORD(v52) = v58;
                }
                else if (v54 < 1) {
                  LODWORD(v52) = v58;
                  v55 = v54;
                }
                else {
                  v63 = 0;
                  v64 = a2 + 4LL * v55 * v51 * v57;
                  LODWORD(v52) = v58;
                  do {
                    if ((int)v52 >= 1) {
                      v65 = 0;
                      v66 = v64 + 4LL * (int)v52 * v63;
                      do {
                        *(_DWORD*)(v66 + 4 * v65++) = 0;
                        v52 = *a3;
                      } while (v65 < v52);
                      v51 = a3[3];
                    }
                    ++v63;
                    v54 = v52;
                    v55 = v52;
                  } while (v63 < v51);
                }
                v53 += 2;
                v57 += 2;
                LODWORD(v58) = v52;
              } while (v53 != (v5 & 0x7FFFFFFE));
            }
            if ((v5 & 1) != 0 && v51 >= 1 && v54 >= 1) {
              v67 = 0;
              v68 = a2 + 4LL * v55 * v53 * v51;
              do {
                if ((int)v52 >= 1) {
                  v69 = 0;
                  v70 = v68 + 4LL * (int)v52 * v67;
                  do {
                    *(_DWORD*)(v70 + 4 * v69++) = 0;
                    v52 = *a3;
                  } while (v69 < v52);
                  v51 = a3[3];
                }
                ++v67;
              } while (v67 < v51);
            }
          }
        }
        return nn_os_UnlockMutex(v7 + 32888);
      }
      if ((int)v43 >= 1) {
        break;
      }
    LABEL_30:
      ++v42;
      *(_DWORD*)(v8 + 104) = v40;
      if (v42 == v5) {
        goto LABEL_40;
      }
    }
    v44 = 0;
    v45 = 4LL * a3[3] * (int)v43 * v42;
    v46 = v45 + 4 * v43;
    v47 = a2 + v45;
    v48 = a2 + v46;
    while (1) {
      *(_DWORD*)(v41 + 4 * (v44 + *(int*)(v8 + 104))) =
          *(_DWORD*)(v48 + 4 * v44) + *(_DWORD*)(v47 + 4 * v44);
      v50 = v44 + *(int*)(v8 + 104);
      if (*(int*)(v41 + 4 * v50) >= 0x8000) {
        *(_DWORD*)(v41 + 4 * v50) = 0x7FFF;
        v50 = (int)v44 + *(_DWORD*)(v8 + 104);
        if (*(int*)(v41 + 4 * v50) < -32768) {
        LABEL_39:
          *(_DWORD*)(v41 + 4 * v50) = -32768;
        }
      }
      else if (*(int*)(v41 + 4 * v50) < -32768) {
        goto LABEL_39;
      }
      v49 = *a3;
      if (++v44 >= v49) {
        v40 = *(_DWORD*)(v8 + 104) + v49;
        goto LABEL_30;
      }
    }
  }
  if (v5 >= 1) {
    v10 = *(_DWORD*)(v8 + 104);
    v11 = v7 + 104;
    v12 = 0;
    while (1) {
      v13 = *a3;
      if ((unsigned int)(*a3 + v10) >> 13 != 0) {
        goto LABEL_40;
      }
      v14 = a3[3];
      v15 = v13;
      v16 = 2 * v13;
      v17 = 3 * v13;
      if (v14 == 6) {
        if (v13 < 1) {
          goto LABEL_7;
        }
        v18 = 0;
        v19 = 4 * v13;
        v20 = 4LL * 6 * v13 * v12;
        v21 = v20 + 4 * v17;
        v22 = v20 + 4 * v15;
        v23 = v20 + 4LL * v19;
        v24 = v20 + 4 * v16;
        v25 = a2 + v20;
        v26 = a2 + v21;
        v27 = a2 + v22;
        v28 = a2 + v23;
        v29 = a2 + v24;
        while (2) {
          *(_DWORD*)(v11 + 4 * (v18 + *(int*)(v8 + 104))) =
              *(_DWORD*)(v27 + 4 * v18) + *(_DWORD*)(v25 + 4 * v18) +
              (int)(float)((float)*(int*)(v29 + 4 * v18) * 0.70795f) +
              2 * (int)(float)((float)*(int*)(v28 + 4 * v18) * 0.70795f) +
              (int)(float)((float)*(int*)(v26 + 4 * v18) * 0.70795f);
          v30 = v18 + *(int*)(v8 + 104);
          if (*(int*)(v11 + 4 * v30) >= 0x8000) {
            *(_DWORD*)(v11 + 4 * v30) = 0x7FFF;
            v30 = (int)v18 + *(_DWORD*)(v8 + 104);
            if (*(int*)(v11 + 4 * v30) < -32768) {
              goto LABEL_17;
            }
          }
          else if (*(int*)(v11 + 4 * v30) < -32768) {
          LABEL_17:
            *(_DWORD*)(v11 + 4 * v30) = -32768;
          }
          if (++v18 >= *a3) {
            v13 = *a3;
            goto LABEL_7;
          }
          continue;
        }
      }
      if (v13 < 1) {
        goto LABEL_7;
      }
      v31 = 0;
      v32 = 4LL * v14 * v13 * v12;
      v33 = v32 + 4 * v17;
      v34 = v32 + 4 * v16;
      v35 = a2 + v32;
      v36 = a2 + v33;
      v37 = a2 + v32 + 4 * v15;
      v38 = a2 + v34;
      do {
        *(_DWORD*)(v11 + 4 * (v31 + *(int*)(v8 + 104))) =
            *(_DWORD*)(v37 + 4 * v31) + *(_DWORD*)(v35 + 4 * v31) +
            (int)(float)((float)*(int*)(v38 + 4 * v31) * 0.70795f) +
            (int)(float)((float)*(int*)(v36 + 4 * v31) * 0.70795f);
        v39 = v31 + *(int*)(v8 + 104);
        if (*(int*)(v11 + 4 * v39) >= 0x8000) {
          *(_DWORD*)(v11 + 4 * v39) = 0x7FFF;
          v39 = (int)v31 + *(_DWORD*)(v8 + 104);
          if (*(int*)(v11 + 4 * v39) >= -32768) {
            goto LABEL_20;
          }
        }
        else if (*(int*)(v11 + 4 * v39) >= -32768) {
          goto LABEL_20;
        }
        *(_DWORD*)(v11 + 4 * v39) = -32768;
      LABEL_20:
        ++v31;
      } while (v31 < *a3);
      v13 = *a3;
    LABEL_7:
      ++v12;
      v10 = *(_DWORD*)(v8 + 104) + v13;
      *(_DWORD*)(v8 + 104) = v10;
      if (v12 == v5) {
        goto LABEL_40;
      }
    }
  }
  return nn_os_UnlockMutex(v7 + 32888);
}

#pragma GCC visibility pop
