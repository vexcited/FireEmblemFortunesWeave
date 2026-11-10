#include "decomp/pseudo_helpers.h"

#include "decomp/pseudo_float.h"

#pragma GCC visibility push(hidden)

__attribute__((swiftcall)) void physx_Gu_getPlane(PSEUDO_X8, float*);
__int64 physx_Cm_FastVertex2ShapeScaling_init(__int64 result, __int64,
                                              int32x4_t*);
float GameRoutine_4223a0(float*, __int64, float*, float*);
__int64 sweepConvex_PlaneGeom(float a1, float a2, __int64 a3, float* a4,
                              __int64 a5, float* a6, float* a7, __int64 a8,
                              __int16* a9);

__int64 sweepConvex_PlaneGeom(float a1, float a2, __int64 a3, float* a4,
                              __int64 a5, float* a6, float* a7, __int64 a8,
                              __int16* a9)
{
  __int64 v9;
  __int16 v10;
  __int64 v18;
  unsigned int v19;
  int v20;
  float v21;
  char v22;
  float v23;
  float v24;
  float v25;
  float v26;
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
  float* v37;
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
  float v60;
  float v61;
  float v62;
  struct {
    float v63[3];
    float v64;
  } v63_;
  _DWORD v65[19];

  v9 = *(_QWORD*)(a5 + 40);
  v10 = *a9;
  *(_DWORD*)a8 = -1;
  v18 = *(_QWORD*)(v9 + 56);
  v19 = *(unsigned __int8*)(v9 + 55);
  v20 = *(unsigned __int8*)(v9 + 54);
  physx_Cm_FastVertex2ShapeScaling_init((__int64)v65, a5 + 8,
                                        (int32x4_t*)(a5 + 20));
  physx_Gu_getPlane((void*)(v63_.v63), a4);
  v21 = v63_.v64;
  *(float*)(a8 + 32) = a1;
  v22 = 0;
  v62 = v21 - a2;
  v63_.v64 = v21 - a2;
  if (v20 != 0) {
    v23 = a6[2];
    v24 = a6[3];
    v25 = *a6;
    v26 = a6[1];
    v27 = v63_.v63[0];
    v28 = v63_.v63[1];
    v29 = v63_.v63[2];
    v30 = *(float*)&v65[6];
    v31 = *(float*)&v65[7];
    v32 = *(float*)&v65[3];
    v33 = *(float*)v65;
    v34 = *(float*)&v65[1];
    v36 = *(float*)&v65[4];
    v35 = *(float*)&v65[5];
    v37 = (float*)(v18 + 20LL * v19 + 8);
    v38 = (float)(v24 * v24) + -0x1.0000000000000p-1f;
    v39 = -*a6;
    v60 = *(float*)&v65[2];
    v61 = *(float*)&v65[8];
    do {
      v40 = *a7;
      v41 = a7[1];
      v42 = a7[2];
      v43 = (float)((float)(PSEUDO_UNFUSED(v41 * v28)) + (float)(*a7 * v27)) +
            (float)(v42 * v29);
      if (fabsf(v43) >= 0x1.ad7f2a0000000p-24f) {
        v44 = *(v37 - 2);
        v45 = *(v37 - 1);
        v46 = v44 * v33;
        v47 = (float)((float)((float)(PSEUDO_UNFUSED(v44 * v60)) +
                              (float)(PSEUDO_UNFUSED(v45 * v35))) +
                      (float)(PSEUDO_UNFUSED(*v37 * v61))) +
              (float)((float)((float)(PSEUDO_UNFUSED(v44 * v60)) +
                              (float)(PSEUDO_UNFUSED(v45 * v35))) +
                      (float)(PSEUDO_UNFUSED(*v37 * v61)));
        v48 = (float)((float)(PSEUDO_UNFUSED(v44 * v34)) +
                      (float)(PSEUDO_UNFUSED(v45 * v36))) +
              (float)(PSEUDO_UNFUSED(*v37 * v31));
        v49 = (float)(v46 + (float)(PSEUDO_UNFUSED(v45 * v32))) +
              (float)(PSEUDO_UNFUSED(*v37 * v30));
        v50 = v48 + v48;
        v51 = v49 + v49;
        v52 = (float)((float)(PSEUDO_UNFUSED(v26 * (float)(v48 + v48))) +
                      (float)(v25 * v51)) +
              (float)(v23 * v47);
        v53 = a6[6] +
              (float)((float)((float)(PSEUDO_UNFUSED(
                                  v24 *
                                  (float)((float)(PSEUDO_UNFUSED(v51 *
                                                                 (float)-v26)) +
                                          (float)(v25 * (float)(v48 + v48))))) +
                              (float)(v47 * v38)) +
                      (float)(v23 * v52));
        v54 = a6[5] +
              (float)((float)((float)(PSEUDO_UNFUSED(
                                  (float)((float)(PSEUDO_UNFUSED(v47 * v39)) +
                                          (float)(v23 * v51)) *
                                  v24)) +
                              (float)(v50 * v38)) +
                      (float)(v26 * v52));
        v55 =
            a6[4] + (float)((float)((float)(PSEUDO_UNFUSED(
                                        v24 * (float)((float)(PSEUDO_UNFUSED(
                                                          v50 * (float)-v23)) +
                                                      (float)(v26 * v47)))) +
                                    (float)(v51 * v38)) +
                            (float)(v25 * v52));
        v56 = v62 + (float)((float)((float)(PSEUDO_UNFUSED(v28 * v54)) +
                                    (float)(v55 * v27)) +
                            (float)(v53 * v29));
        if (v56 <= 0x0.0p+0f) {
          if ((v10 & 0x200) != 0) {
            *(_WORD*)(a8 + 4) = 3;
            GameRoutine_4223a0(v63_.v63, a5, a6, (float*)a8);
          }
          else {
            v22 = 1;
            *(_DWORD*)(a8 + 32) = 0;
            *(_WORD*)(a8 + 4) = 2;
            *(float*)(a8 + 20) = -v40;
            *(float*)(a8 + 24) = -v41;
            *(float*)(a8 + 28) = -v42;
          }
          return v22 & 1;
        }
        v57 = (float)-v56 / v43;
        if (v57 > 0x0.0p+0f && v57 <= a1) {
          v22 = 1;
          *(float*)(a8 + 28) = v29;
          *(float*)(a8 + 32) = v57;
          *(_WORD*)(a8 + 4) = 3;
          *(float*)(a8 + 24) = v28;
          a1 = v57;
          *(float*)(a8 + 8) = v55 + (float)(PSEUDO_UNFUSED(v40 * v57));
          *(float*)(a8 + 12) = v54 + (float)(PSEUDO_UNFUSED(v41 * v57));
          *(float*)(a8 + 16) = v53 + (float)(PSEUDO_UNFUSED(v42 * v57));
          *(float*)(a8 + 20) = v27;
        }
      }
      --v20;
      v37 += 3;
    } while (v20 != 0);
  }
  return v22 & 1;
}

#pragma GCC visibility pop
