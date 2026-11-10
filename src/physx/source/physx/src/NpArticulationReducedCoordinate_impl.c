#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 PxGetFoundation(_QWORD, _QWORD);
__int64 physx_Dy_FeatherstoneArticulation_getCentroidalMomentumMatrix(_QWORD);
__attribute__((swiftcall)) void
physx_NpArticulationReducedCoordinate_computeArticulationCOM(PSEUDO_X8 x8_,
                                                             __int64 a1,
                                                             __int64 a2,
                                                             float result);
_QWORD* physx_NpArticulationReducedCoordinate_computeCentroidalMomentumMatrix(
    __int64 a1, __int64 a2);
__attribute__((swiftcall)) void

physx_NpArticulationReducedCoordinate_computeArticulationCOM(PSEUDO_X8 x8_,
                                                             __int64 a1,
                                                             __int64 a2,
                                                             float result)
{
  __int64 a3 = (__int64)PSEUDO_X8_VALUE(x8_);
  __int64 v4;
  __int64 v6;
  char v7;
  __int64* v8;
  __int64 v9;
  int v10;
  __int64 v11;
  float v12;
  float v13;
  __int64 v14;
  float v15;
  float v16;
  float** v17;
  float* v18;
  float* v19;
  float v20;
  float v21;
  float* v22;
  float v23;
  float v24;
  float v25;
  float v26;
  float v27;
  float* v28;
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

  v4 = *(_QWORD*)(a1 + 24);
  if (v4 != 0 && *(_BYTE*)(v4 + 1002) == 1) {
    v6 = PxGetFoundation(a1, a2);
    (*(void (**)(__int64, __int64, const char*, __int64, const char*))(
        *(_QWORD*)v6 + 88LL))(
        v6, 8,
        "/Inside/Lib/PhysX/O/physx/source/physx/src/"
        "NpArticulationReducedCoordinate.cpp",
        379,
        "PxArticulationReducedCoordinate::computeArticulationCOM() not allowed "
        "while simulation is running. Call will be ignored.");
    *(_QWORD*)a3 = 0;
    *(_DWORD*)(a3 + 8) = 0;
  }
  else {
    v7 = a2 & 1;
    v8 = *(__int64**)(a1 + 40);
    if (v8 != nullptr) {
      v9 = *v8;
      v10 = *(_DWORD*)(v9 + 936);
      if (v10 != 0) {
        v11 = *(_QWORD*)(v9 + 928);
        if (v10 == 1) {
          v12 = 0.0f;
          v13 = 0.0f;
          v14 = 0;
          v15 = 0.0f;
          v16 = 0.0f;
        }
        else {
          v12 = 0.0f;
          v17 = (float**)(v11 + 56);
          v14 = 0;
          v13 = 0.0f;
          v15 = 0.0f;
          v16 = 0.0f;
          do {
            v18 = *(v17 - 5);
            v14 += 2;
            v19 = *v17;
            v17 += 10;
            v20 = 1.0f / v18[31];
            v21 = 1.0f / v19[31];
            v12 = (float)(v12 + v20) + v21;
            v13 = (float)(v13 + (float)(v18[4] * v20)) + (float)(v19[4] * v21);
            v15 = (float)(v19[5] * v21) + (float)((float)(v18[5] * v20) + v15);
            v16 = (float)(v19[6] * v21) + (float)((float)(v18[6] * v20) + v16);
          } while ((v10 & 0xFFFFFFFE) != v14);
        }
        if ((v10 & 1) != 0) {
          v22 = *(float**)(v11 + 40 * v14 + 16);
          v23 = 1.0f / v22[31];
          v12 = v12 + v23;
          v13 = v13 + (float)(v22[4] * v23);
          v15 = (float)(v22[5] * v23) + v15;
          v16 = (float)(v22[6] * v23) + v16;
        }
      }
      else {
        v16 = 0.0f;
        v15 = 0.0f;
        v13 = 0.0f;
        v12 = 0.0f;
      }
      v24 = 1.0f / v12;
      result = (float)(1.0f / v12) * v13;
      v25 = v24 * v15;
      v26 = v24 * v16;
      *(float*)a3 = result;
      *(float*)(a3 + 4) = v25;
      *(float*)(a3 + 8) = v26;
      if ((v7 & 1) != 0) {
        v27 = v25 + v25;
        v28 = *(float**)(*(_QWORD*)(v9 + 928) + 16LL);
        v29 = v26 + v26;
        v30 = result + result;
        v32 = v28[2];
        v31 = v28[3];
        v33 = v28[5] * -2.0f;
        v34 = v28[1];
        v35 = v28[6] * -2.0f;
        v36 = v28[4] * -2.0f;
        v37 = (float)(v31 * v31) + -0.5f;
        v38 = (float)((float)(v33 * v34) + (float)(*v28 * v36)) +
              (float)(v32 * v35);
        v39 = (float)(v36 * v37) -
              (float)((float)((float)(v34 * v35) - (float)(v32 * v33)) * v31);
        v40 = (float)(v33 * v37) -
              (float)((float)((float)(v32 * v36) - (float)(*v28 * v35)) * v31);
        v41 = (float)(*v28 * v33) - (float)(v34 * v36);
        v42 = v39 + (float)(*v28 * v38);
        v43 = v40 + (float)(v34 * v38);
        v44 = (float)((float)-(float)(v34 * v27) - (float)(*v28 * v30)) -
              (float)(v32 * v29);
        v45 = (float)((float)(v35 * v37) - (float)(v41 * v31)) +
              (float)(v32 * v38);
        v46 = (float)((float)(v31 * (float)((float)(v27 * v32) -
                                            (float)(v34 * v29))) +
                      (float)(v30 * v37)) -
              (float)(*v28 * v44);
        v47 = (float)((float)(v31 * (float)((float)(v29 * *v28) -
                                            (float)(v32 * v30))) +
                      (float)(v27 * v37)) -
              (float)(v34 * v44);
        v48 = (float)(v31 * (float)((float)(v30 * v34) - (float)(*v28 * v27))) +
              (float)(v29 * v37);
        *(float*)a3 = v46 + v42;
        *(float*)(a3 + 4) = v47 + v43;
        result = (float)(v48 - (float)(v32 * v44)) + v45;
        *(float*)(a3 + 8) = result;
      }
    }
    else {
      *(_QWORD*)a3 = 0;
      *(_DWORD*)(a3 + 8) = 0;
    }
  }
  {
    result;
    return;
  }
}

_QWORD* physx_NpArticulationReducedCoordinate_computeCentroidalMomentumMatrix(
    __int64 a1, __int64 a2)
{
  __int64 v2;
  __int64 v3;
  _QWORD* result;

  v2 = *(_QWORD*)(a1 + 24);
  if (v2 != 0 && *(_BYTE*)(v2 + 1002) == 1) {
    v3 = PxGetFoundation(a1, a2);
    return (_QWORD*)(*(__int64 (**)(__int64, __int64, const char*, __int64,
                                    const char*))(*(_QWORD*)v3 + 88LL))(
        v3, 8,
        "/Inside/Lib/PhysX/O/physx/source/physx/src/"
        "NpArticulationReducedCoordinate.cpp",
        390,
        "PxArticulationReducedCoordinate::computeCentroidalMomentumMatrix() "
        "not allowed while simulation i"
        "s running. Call will be ignored.");
  }
  else {
    result = *(_QWORD**)(a1 + 40);
    if (result != nullptr) {
      return (_QWORD*)
          physx_Dy_FeatherstoneArticulation_getCentroidalMomentumMatrix(
              *result);
    }
  }
  return result;
}

#pragma GCC visibility pop
