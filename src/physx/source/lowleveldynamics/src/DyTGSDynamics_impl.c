#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_3328d0(__int64, unsigned int, unsigned int, unsigned int,
                           float, float, float, float);
__int64 GameRoutine_3b87a0(__int64 result, unsigned int);
__int64
physx_Dy_FeatherstoneArticulation_concludeInternalConstraints(__int64 result,
                                                              char);
__int64
physx_Dy_FeatherstoneArticulation_writebackInternalConstraints(__int64 result,
                                                               char);
extern _UNKNOWN* GameData_2135928;
extern _UNKNOWN* GameData_2135930;
extern _UNKNOWN* GameData_2135938;
float* physx_Dy_DynamicsTGSContext_applySubstepGravity(float* result, __int64,
                                                       __int64*, int, __int64,
                                                       __int64, __int64, float);
float GameRoutine_327c40(__int64, float result);
float physx_Dy_FeatherstoneArticulation_applyTgsSubstepForces(__int64*, float*,
                                                              float result);
float physx_Dy_integrateCoreStep(__int64, float*, float);
void physx_Dy_FeatherstoneArticulation_recordDeltaMotion(__int64*, __int64,
                                                         float);
void physx_Dy_DynamicsTGSContext_iterativeSolveIsland(__int64 a1, __int64 a2,
                                                      int* a3, __int64 a4,
                                                      unsigned int a5, int a6,
                                                      __int64 a7, float a8,
                                                      double a9, float a10);

void physx_Dy_DynamicsTGSContext_iterativeSolveIsland(__int64 a1, __int64 a2,
                                                      int* a3, __int64 a4,
                                                      unsigned int a5, int a6,
                                                      __int64 a7, float a8,
                                                      double a9, float a10)
{

#pragma clang fp contract(off)
  __int64 v11;
  __int64 v12;
  unsigned int v13;
  __int64 v18;
  void (**v19)(__int64, __int64, __int64, __int64, float, float);
  float v20;
  int v21;
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
  float* v32;
  __int64 v33;
  __int64 v34;
  unsigned __int64 v35;
  unsigned __int64 v36;
  __int64 v37;
  unsigned __int64 v38;
  unsigned __int64 v39;
  __int64* v40;
  float v41;
  unsigned int i;
  unsigned int j;
  int k;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  int v48;
  __int64 v49;
  float* v50;
  __int64 m;
  __int64 v52;
  __int64 v53;
  __int64 v54;
  __int64 v55;
  __int64 v56;
  __int64 v57;
  __int64 v58;
  __int64 v59;
  void (**v60)(__int64, __int64, __int64, __int64, float);
  unsigned __int64 v61;
  __int64 v62;
  unsigned __int64 v63;
  __int64 v64;
  float v65;
  __int64 v66;
  __int64 v67;
  float* v68;
  __int64 v69;
  __int64 v70;
  unsigned __int64 v71;
  __int64 v72;
  unsigned __int64 n;
  int v74;
  __int64 v75;
  int v76;
  float v77;
  unsigned int v78;
  __int64 v79;
  __int64 v80;
  __int64 v81;
  __int64 v82;
  __int64 v83;
  unsigned __int64 v84;
  __int64 v85;
  __int64 v86;
  __int64 v87;
  void (**v88)(__int64, __int64, __int64);
  __int64 v89;
  unsigned __int64 v90;
  float v91;
  __int64 v92;
  float* v93;
  __int64 v94;
  int v95;
  unsigned int v96;
  __int64 v97;
  __int64 v98;
  __int64 v99;
  int v101;
  int v102;
  __int64 v104;

  v11 = a4 + 36864;
  v12 = *(unsigned int*)(a2 + 112);
  v13 = a5;
  v101 = *(unsigned __int8*)(a1 + 1488);
  if (*(_DWORD*)(a4 + 37864) == 0) {
    if (a3[1] != 0) {
      v39 = 0;
      do {
        v40 = (__int64*)(*(_QWORD*)(v11 + 1096) + 72 * v39);
        if (v13 != 0) {
          if ((v101 & 1) != 0) {
            v41 = 0x0.0p+0f;
            for (i = v13; i != 0; --i) {
              physx_Dy_FeatherstoneArticulation_applyTgsSubstepForces(
                  v40, *(float**)(v11 + 1016), a8);
              GameRoutine_3328d0(*v40, 0, 1u, *(unsigned __int8*)(a1 + 312), a8,
                                 0x1.0000000000000p+0f / a8, v41, a10);
              physx_Dy_FeatherstoneArticulation_recordDeltaMotion(
                  v40, *(_QWORD*)(v11 + 1032), a8);
              v41 = v41 + a8;
            }
          }
          else {
            v41 = 0x0.0p+0f;
            for (j = v13; j != 0; --j) {
              GameRoutine_3328d0(*v40, 0, 1u, *(unsigned __int8*)(a1 + 312), a8,
                                 0x1.0000000000000p+0f / a8, v41, a10);
              physx_Dy_FeatherstoneArticulation_recordDeltaMotion(
                  v40, *(_QWORD*)(v11 + 1032), a8);
              v41 = v41 + a8;
            }
          }
        }
        else {
          v41 = 0x0.0p+0f;
        }
        GameRoutine_327c40(*v40, *(float*)(a1 + 92));
        physx_Dy_FeatherstoneArticulation_concludeInternalConstraints(*v40, 1);
        for (k = a6; k != 0; --k) {
          GameRoutine_3328d0(*v40, 1u, 1u, *(unsigned __int8*)(a1 + 312), a8,
                             0x1.0000000000000p+0f / a8, v41, a10);
        }
        physx_Dy_FeatherstoneArticulation_writebackInternalConstraints(*v40, 1);
        ++v39;
      } while (v39 < (unsigned int)a3[1]);
    }
    v45 = (unsigned int)*a3;
    v46 = v12 << 6;
    v47 = *(_QWORD*)(a1 + 1456);
    v104 = *(_QWORD*)(a1 + 1440);
    if ((v101 & 1) != 0) {
      if (v13 != 0) {
        if ((_DWORD)v45 != 0) {
          v48 = 0;
          do {
            physx_Dy_DynamicsTGSContext_applySubstepGravity(
                (float*)a1, *(_QWORD*)a2, *(__int64**)(a2 + 120), v45,
                v104 + v46, v47 + v46, *(_QWORD*)(a2 + 56), a8);
            v49 = v104 + v46 + 64;
            v50 = (float*)(v47 + v46 + 64);
            for (m = v45; m != 0; --m) {
              physx_Dy_integrateCoreStep(v49, v50, a8);
              v50 += 16;
              v49 += 64;
            }
            ++v48;
          } while (v48 != a5);
        }
        else {
          v95 = a5 & 7;
          if (a5 >= 8) {
            v96 = a5 & 0xFFFFFFF8;
            do {
              v96 -= 8;
            } while (v96 != 0);
          }
          if ((a5 & 7) != 0) {
            do {
              --v95;
            } while (v95 != 0);
          }
        }
      }
    }
    else if ((_DWORD)v45 != 0) {
      v91 = *(float*)(a1 + 88);
      v92 = v46 + 64;
      v93 = (float*)(v47 + v46 + 64);
      v94 = v104 + v92;
      do {
        physx_Dy_integrateCoreStep(v94, v93, v91);
        --v45;
        v93 += 16;
        v94 += 64;
      } while (v45 != 0);
    }
    return;
  }
  if (*(_BYTE*)(a1 + 312) != 0) {
    v18 = a4 + 37992;
  }
  else {
    v18 = 0;
  }
  *(_QWORD*)(a7 + 64) = v18;
  *(_BYTE*)(a7 + 2) = 1;
  v19 = (void (**)(__int64, __int64, __int64, __int64, float,
                   float))GameData_2135928;
  v97 = v12;
  if (a5 >= 2) {
    v20 = 0x0.0p+0f;
    v21 = 1;
    v98 = v12 << 6;
    v99 = (v12 << 6) + 64;
    do {
      v102 = v21;
      v22 = *(_QWORD*)(a7 + 64);
      if (v22 != 0) {
        *(_QWORD*)v22 = 0;
        *(_DWORD*)(v22 + 8) = 0;
      }
      if (v101 != 0) {
        physx_Dy_DynamicsTGSContext_applySubstepGravity(
            (float*)a1, *(_QWORD*)a2, *(__int64**)(a2 + 120), *a3,
            *(_QWORD*)(a1 + 1440) + v98, *(_QWORD*)(a1 + 1456) + v98,
            *(_QWORD*)(a2 + 56), a8);
        v23 = (unsigned int)a3[1];
        if ((_DWORD)v23 != 0) {
          v24 = 0;
          v25 = 72 * v23;
          do {
            v26 = *(_QWORD*)(v11 + 1096) + v24;
            GameRoutine_3b87a0(v11 + 1016, *(unsigned __int8*)(v26 + 64));
            physx_Dy_FeatherstoneArticulation_applyTgsSubstepForces(
                (__int64*)v26, *(float**)(v11 + 1016), a8);
            v24 += 72;
          } while (v25 != v24);
        }
      }
      v27 = *(unsigned int*)(v11 + 1000);
      v28 = *(_QWORD*)(a1 + 1456);
      if ((_DWORD)v27 != 0) {
        v29 = *(_QWORD*)(a2 + 72);
        v30 = *(_QWORD*)(a2 + 88);
        do {
          v19[*(unsigned __int16*)(v30 + 6)](v30, v29, v28, a7,
                                             -0x1.fffffe0000000p+127f, v20);
          --v27;
          v30 += 8;
        } while (v27 != 0);
        v28 = *(_QWORD*)(a1 + 1456);
        v13 = a5;
      }
      v31 = (unsigned int)*a3;
      if ((_DWORD)v31 != 0) {
        v32 = (float*)(v28 + v99);
        v33 = *(_QWORD*)(a1 + 1440) + v99;
        do {
          physx_Dy_integrateCoreStep(v33, v32, a8);
          --v31;
          v32 += 16;
          v33 += 64;
        } while (v31 != 0);
      }
      if (a3[1] != 0) {
        v34 = 0;
        v35 = 0;
        do {
          GameRoutine_3328d0(*(_QWORD*)(*(_QWORD*)(v11 + 1096) + v34), 0, 1u,
                             *(unsigned __int8*)(a1 + 312), a8,
                             0x1.0000000000000p+0f / a8, v20, a10);
          v36 = (unsigned int)a3[1];
          ++v35;
          v34 += 72;
        } while (v35 < v36);
        if ((_DWORD)v36 != 0) {
          v37 = 0;
          v38 = 0;
          do {
            physx_Dy_FeatherstoneArticulation_recordDeltaMotion(
                (__int64*)(*(_QWORD*)(v11 + 1096) + v37),
                *(_QWORD*)(v11 + 1032), a8);
            ++v38;
            v37 += 72;
          } while (v38 < (unsigned int)a3[1]);
        }
      }
      v20 = v20 + a8;
      v21 = v102 + 1;
    } while (v102 + 1 != v13);
    v18 = *(_QWORD*)(a7 + 64);
    if (v18 == 0) {
      goto LABEL_54;
    }
    goto LABEL_53;
  }
  v20 = 0x0.0p+0f;
  if (v18 != 0) {
  LABEL_53:
    *(_QWORD*)v18 = 0;
    *(_DWORD*)(v18 + 8) = 0;
  }
LABEL_54:
  if (v101 != 0) {
    physx_Dy_DynamicsTGSContext_applySubstepGravity(
        (float*)a1, *(_QWORD*)a2, *(__int64**)(a2 + 120), *a3,
        *(_QWORD*)(a1 + 1440) + (v97 << 6), *(_QWORD*)(a1 + 1456) + (v97 << 6),
        *(_QWORD*)(a2 + 56), a8);
    v52 = (unsigned int)a3[1];
    if ((_DWORD)v52 != 0) {
      v53 = 0;
      v54 = 72 * v52;
      do {
        v55 = *(_QWORD*)(v11 + 1096) + v53;
        GameRoutine_3b87a0(v11 + 1016, *(unsigned __int8*)(v55 + 64));
        physx_Dy_FeatherstoneArticulation_applyTgsSubstepForces(
            (__int64*)v55, *(float**)(v11 + 1016), a8);
        v53 += 72;
      } while (v54 != v53);
    }
  }
  v56 = *(unsigned int*)(v11 + 1000);
  if ((_DWORD)v56 != 0) {
    v57 = *(_QWORD*)(a1 + 1456);
    v58 = *(_QWORD*)(a2 + 72);
    v59 = *(_QWORD*)(a2 + 88);
    v60 =
        (void (**)(__int64, __int64, __int64, __int64, float))GameData_2135938;
    do {
      v60[*(unsigned __int16*)(v59 + 6)](v59, v58, v57, a7, v20);
      --v56;
      v59 += 8;
    } while (v56 != 0);
  }
  LODWORD(v61) = a3[1];
  if ((_DWORD)v61 != 0) {
    v62 = 0;
    v63 = 0;
    do {
      v64 = *(_QWORD*)(v11 + 1096);
      GameRoutine_3328d0(*(_QWORD*)(v64 + v62), 0, 1u,
                         *(unsigned __int8*)(a1 + 312), a8,
                         0x1.0000000000000p+0f / a8, v20, a10);
      physx_Dy_FeatherstoneArticulation_concludeInternalConstraints(
          *(_QWORD*)(v64 + v62), 1);
      v61 = (unsigned int)a3[1];
      ++v63;
      v62 += 72;
    } while (v63 < v61);
  }
  v65 = *(float*)(a1 + 92);
  v66 = (unsigned int)*a3;
  if ((_DWORD)v66 != 0) {
    v67 = (v97 << 6) + 64;
    v68 = (float*)(*(_QWORD*)(a1 + 1456) + v67);
    v69 = *(_QWORD*)(a1 + 1440) + v67;
    do {
      physx_Dy_integrateCoreStep(v69, v68, a8);
      --v66;
      v68 += 16;
      v69 += 64;
    } while (v66 != 0);
    LODWORD(v61) = a3[1];
  }
  if ((_DWORD)v61 != 0) {
    v70 = 0;
    v71 = 0;
    do {
      physx_Dy_FeatherstoneArticulation_recordDeltaMotion(
          (__int64*)(*(_QWORD*)(v11 + 1096) + v70), *(_QWORD*)(v11 + 1032), a8);
      v61 = (unsigned int)a3[1];
      ++v71;
      v70 += 72;
    } while (v71 < v61);
    if ((_DWORD)v61 != 0) {
      v72 = 0;
      for (n = 0; n < v61; ++n) {
        GameRoutine_327c40(*(_QWORD*)(*(_QWORD*)(v11 + 1096) + v72), v65);
        v61 = (unsigned int)a3[1];
        v72 += 72;
      }
    }
  }
  v74 = *(unsigned __int8*)(a1 + 312);
  v75 = v11 + 1140;
  *(_BYTE*)(a7 + 2) = 0;
  if (v74 == 0) {
    v75 = 0;
  }
  *(_QWORD*)(a7 + 64) = v75;
  if (a6 != 0) {
    v76 = 0;
    v77 = v20 + a8;
    v78 = v61;
    if (v75 == 0) {
      goto LABEL_79;
    }
  LABEL_78:
    *(_QWORD*)v75 = 0;
    *(_DWORD*)(v75 + 8) = 0;
    while (1) {
    LABEL_79:
      v79 = *(unsigned int*)(v11 + 1000);
      if ((_DWORD)v79 != 0) {
        v80 = *(_QWORD*)(a1 + 1456);
        v81 = *(_QWORD*)(a2 + 72);
        v82 = *(_QWORD*)(a2 + 88);
        do {
          v19[*(unsigned __int16*)(v82 + 6)](v82, v81, v80, a7, 0x0.0p+0, v77);
          --v79;
          v82 += 8;
        } while (v79 != 0);
        LODWORD(v61) = a3[1];
        v78 = v61;
      }
      if (v78 != 0) {
        v83 = 0;
        v84 = 0;
        do {
          GameRoutine_3328d0(*(_QWORD*)(*(_QWORD*)(v11 + 1096) + v83), 1u, 1u,
                             *(unsigned __int8*)(a1 + 312), a8,
                             0x1.0000000000000p+0f / a8, v77, a10);
          v61 = (unsigned int)a3[1];
          ++v84;
          v83 += 72;
        } while (v84 < v61);
        v78 = a3[1];
      }
      if (++v76 == a6) {
        break;
      }
      v75 = *(_QWORD*)(a7 + 64);
      if (v75 != 0) {
        goto LABEL_78;
      }
    }
  }
  v85 = *(unsigned int*)(v11 + 1000);
  if ((_DWORD)v85 != 0) {
    v86 = *(_QWORD*)(a2 + 88);
    v87 = *(_QWORD*)(a2 + 72);
    v88 = (void (**)(__int64, __int64, __int64))GameData_2135930;
    do {
      v88[*(unsigned __int16*)(v86 + 6)](v86, v87, a7);
      --v85;
      v86 += 8;
    } while (v85 != 0);
    LODWORD(v61) = a3[1];
  }
  if ((_DWORD)v61 != 0) {
    v89 = 0;
    v90 = 0;
    do {
      physx_Dy_FeatherstoneArticulation_writebackInternalConstraints(
          *(_QWORD*)(*(_QWORD*)(v11 + 1096) + v89), 1);
      ++v90;
      v89 += 72;
    } while (v90 < (unsigned int)a3[1]);
  }
}

#pragma GCC visibility pop
