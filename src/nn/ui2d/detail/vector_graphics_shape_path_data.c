#include "decomp/pseudo_helpers.h"

#include "decomp/pseudo_float.h"

#pragma GCC visibility push(hidden)

__int64 memset(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
float GameRoutine_5a3700(unsigned __int16*, float);
__int64 VectorGraphicsShapePathData_Unknown2(__int64 result, __int64 a2,
                                             __int64 a3, __int64 a4, __int64 a5,
                                             __int64 a6);
__int64 VectorGraphicsShapePathData_Unknown3(__int64 result);
void VectorGraphicsShapePathData_Unknown5(__int64 a1, float a2);
__int64 VectorGraphicsShapePathData_Unknown9(_QWORD* a1);
bool VectorGraphicsShapePathData_Unknown14(__int64 a1);
bool VectorGraphicsShapePathData_5ae140(__int64 a1);
__int64 VectorGraphicsShapePathData_Unknown4(__int64 a1);
__int64 VectorGraphicsShapePathData_Unknown10(__int64 a1);
__int64 VectorGraphicsShapePathData_5a3ca0(float* a1, float32x2_t* a2,
                                           unsigned int* a3, __int64 a4,
                                           _DWORD* a5);

__int64 VectorGraphicsShapePathData_5a3ca0(float* a1, float32x2_t* a2,
                                           unsigned int* a3, __int64 a4,
                                           _DWORD* a5)
{
  float v5;
  float v6;
  unsigned int v7;
  char v13;
  float v14;
  int v15;
  __int64 v17;
  __int64 v18;
  float* v19;
  __int64 v20;
  float v21;
  float v22;
  float v23;
  float v24;
  float v25;
  float v26;
  float v27;
  float v28;
  float v29;
  float v30;
  float v31;
  float* v32;
  float v33;
  float v34;
  float v35;
  float v36;
  float v37;
  float v38;
  __int64 result;
  float32x2_t* v40;
  __int64 v41;
  float v42;
  float v43;
  __int64 v44;
  float v45;
  float v46;
  float32x2_t* v47;
  float32x2_t v48;
  float v49;
  __int64 v50;
  float32x2_t v51;
  unsigned __int64 v52;
  float32x2_t v53;
  float32x2_t v54;
  __int64 v55;
  __int64 v56;
  __int64 v57;
  int v58;
  int v59;
  unsigned __int64 v60;
  __int64 v61;

  v5 = a1[2];
  v6 = a1[3];
  v7 = *a3;
  v13 = (*(__int64 (**)(float*))(*(_QWORD*)a1 + 80LL))(a1);
  v14 = a1[4];
  v15 = (__PAIR64__(v7, v13 & 1) - 1) >> 32;
  if (v14 != 0x0.0p+0f || v15 < 1) {
    goto LABEL_13;
  }
  v17 = v15 & 3;
  if ((unsigned int)v15 >= 4) {
    v19 = (float*)&a2[2] + 1;
    v20 = 0;
    do {
      v20 -= 4;
      v21 = *(v19 - 4) - *(v19 - 2);
      v22 = *(v19 - 5) - *(v19 - 3);
      v23 =
          v14 + sqrtf((float)(PSEUDO_UNFUSED(v21 * v21)) + (float)(v22 * v22));
      a1[4] = v23;
      v24 = *(v19 - 3) - *(v19 - 1);
      v25 = v23 + sqrtf((float)(PSEUDO_UNFUSED((float)(*(v19 - 2) - *v19) *
                                               (float)(*(v19 - 2) - *v19))) +
                        (float)(v24 * v24));
      a1[4] = v25;
      v26 = *(v19 - 1) - v19[1];
      v27 = v25 + sqrtf((float)(PSEUDO_UNFUSED((float)(*v19 - v19[2]) *
                                               (float)(*v19 - v19[2]))) +
                        (float)(v26 * v26));
      a1[4] = v27;
      v28 = v19[1];
      v29 = v19[2];
      v30 = v19[3];
      v31 = v19[4];
      v19 += 8;
      v14 = v27 + sqrtf((float)(PSEUDO_UNFUSED((float)(v29 - v31) *
                                               (float)(v29 - v31))) +
                        (float)((float)(v28 - v30) * (float)(v28 - v30)));
      a1[4] = v14;
    } while (-(__int64)(v15 & 0x7FFFFFFC) != v20);
    v18 = -v20;
    if ((v15 & 3) == 0) {
      goto LABEL_13;
    }
    goto LABEL_11;
  }
  v18 = 0;
  if ((v15 & 3) != 0) {
  LABEL_11:
    v32 = (float*)&a2[v18 + 1];
    do {
      v33 = *(v32 - 2);
      v34 = *(v32 - 1);
      v35 = *v32;
      v36 = v32[1];
      v32 += 2;
      --v17;
      v14 = v14 + sqrtf((float)(PSEUDO_UNFUSED((float)(v34 - v36) *
                                               (float)(v34 - v36))) +
                        (float)((float)(v33 - v35) * (float)(v33 - v35)));
      a1[4] = v14;
    } while (v17 != 0);
  }
LABEL_13:
  v37 = v5 * v14;
  v38 = v6 * v14;
  result = 0xFFFFFFFFLL;
  v40 = a2;
  v41 = -(__int64)(v15 & (unsigned int)~(v15 >> 31));
  v42 = 0x0.0p+0f;
  v43 = 0x0.0p+0f;
  v44 = -1;
  do {
    if (v41 + v44 == -1) {
      return result;
    }
    v45 = v43;
    v46 = sqrtf(
        (float)(PSEUDO_UNFUSED(
            (float)(LANES64(*(v40)).n64_f32[1] - LANES64(v40[1]).n64_f32[1]) *
            (float)(LANES64(*(v40)).n64_f32[1] - LANES64(v40[1]).n64_f32[1]))) +
        (float)((float)(LANES64(*(v40)).n64_f32[0] -
                        LANES64(v40[1]).n64_f32[0]) *
                (float)(LANES64(*(v40)).n64_f32[0] -
                        LANES64(v40[1]).n64_f32[0])));
    v43 = v43 + v46;
    if (v43 >= v37 && (result & 0x80000000) != 0) {
      result = (unsigned int)(v44 + 1);
      v42 = (float)(v37 - v45) / v46;
    }
    ++v44;
    ++v40;
  } while (v43 < v38);
  v47 = &a2[(int)result];
  PSEUDO_LOW_LANE64(v48, n64_u64, LANES64(*(v47)).n64_u64[0]);
  v49 = (float)(v38 - (float)(v43 - v46)) / v46;
  if ((_DWORD)v44 == (_DWORD)result) {
    v50 = (int)result;
    LANES64(v51).n64_u64[0] = LANES64_OF(vsub_f32(v47[1], v48)).n64_u64[0];
    v52 = LANES64_OF(vadd_f32(v48, vmul_n_f32(v51, v42))).n64_u64[0];
    LANES64(v53).n64_u64[0] =
        LANES64_OF(vadd_f32(v48, vmul_n_f32(v51, v49))).n64_u64[0];
    LANES64(*(v47)).n64_u64[0] = v52;
    LANES64(v47[1]).n64_u32[0] = LANES64(v53).n64_u32[0];
  }
  else {
    PSEUDO_LOW_LANE64(v54, n64_u64, (unsigned __int64)a2[v44]);
    LANES64(*(v47)).n64_u64[0] =
        LANES64_OF(vadd_f32(v48, vmul_n_f32(vsub_f32(v47[1], v48), v42)))
            .n64_u64[0];
    LANES64(v53).n64_u64[0] =
        LANES64_OF(
            vadd_f32(v54,
                     vmul_n_f32(vsub_f32(COERCE_AS(float32x2_t,
                                                   LANES64(*(v40)).n64_u64[0]),
                                         v54),
                                v49)))
            .n64_u64[0];
    LANES64(*(v40)).n64_u32[0] = LANES64(v53).n64_u32[0];
    v50 = v44;
  }
  LANES64(a2[v50 + 1]).n64_u32[1] = LANES64(v53).n64_u32[1];
  *a3 = v44 + 1;
  v55 = (unsigned int)*a5;
  if ((int)v55 > 0) {
    v56 = a4 + 16;
    v57 = 0;
    v58 = 0;
    do {
      v59 = result - v58;
      if ((int)result >= v58) {
        v58 += *(_DWORD*)v56;
        if ((int)result < v58) {
          v60 = LANES64(*(v47)).n64_u64[0];
          v61 = *(_QWORD*)(v56 - 8) + 8LL * v59;
          *(_DWORD*)v56 -= v59;
          *(_QWORD*)(v56 - 16) = v60;
          *(_QWORD*)(v56 - 8) = v61;
        LABEL_29:
          if (v58 > (int)v44) {
            goto LABEL_35;
          }
          goto LABEL_33;
        }
      }
      else {
        v58 += *(_DWORD*)v56;
        if (v58 > (int)result) {
          goto LABEL_29;
        }
      }
      *(_BYTE*)(v56 + 4) = 1;
      if (v58 > (int)v44) {
      LABEL_35:
        LODWORD(v55) = v57 + 1;
        *(_DWORD*)v56 = *(_DWORD*)v56 - v58 + v44 + 1;
        break;
      }
    LABEL_33:
      ++v57;
      v56 += 24;
    } while (v55 != v57);
  }
  *a5 = v55;
  return result;
}

__int64 VectorGraphicsShapePathData_Unknown2(__int64 result, __int64 a2,
                                             __int64 a3, __int64 a4, __int64 a5,
                                             __int64 a6)
{
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  bool v10;

  v6 = *(_QWORD*)(result + 24);
  v7 = result;
  v8 = *(int*)(*(_QWORD*)(result + 32) + 24LL);
  v9 = *(_QWORD*)(v6 + 16);
  v10 = (int)v8 < 1 || v9 == 0;
  *(_QWORD*)(v6 + 16) = v9 + 24LL * (int)v8;
  if (!v10) {
    result = memset(v9, 0, 24 * v8, a4, a5, a6);
  }
  *(_QWORD*)(v7 + 40) = v9;
  return result;
}

__int64 VectorGraphicsShapePathData_Unknown3(__int64 result)
{
  if (*(_QWORD*)(result + 40) != 0) {
    *(_QWORD*)(result + 40) = 0;
  }
  return result;
}

void VectorGraphicsShapePathData_Unknown5(__int64 a1, float a2)
{
  __int64 v2;
  __int64 v5;
  __int64 v6;
  unsigned __int64 v7;
  unsigned __int16* v8;
  float v9;
  __int64 v10;

  v2 = *(_QWORD*)(a1 + 32);
  if (*(_DWORD*)(v2 + 24) != 0) {
    v5 = 80;
    v6 = 0;
    v7 = 0;
    do {
      v8 = (unsigned __int16*)(*(_QWORD*)(v2 + 32) + v5);
      *(float*)(*(_QWORD*)(a1 + 40) + v6) = GameRoutine_5a3700(v8 - 40, a2);
      *(float*)(*(_QWORD*)(a1 + 40) + v6 + 4) = GameRoutine_5a3700(v8 - 32, a2);
      *(float*)(*(_QWORD*)(a1 + 40) + v6 + 8) = GameRoutine_5a3700(v8 - 24, a2);
      *(float*)(*(_QWORD*)(a1 + 40) + v6 + 12) =
          GameRoutine_5a3700(v8 - 16, a2);
      *(float*)(*(_QWORD*)(a1 + 40) + v6 + 16) = GameRoutine_5a3700(v8 - 8, a2);
      v9 = GameRoutine_5a3700(v8, a2);
      ++v7;
      v5 += 96;
      v10 = *(_QWORD*)(a1 + 40) + v6;
      v6 += 24;
      *(float*)(v10 + 20) = v9;
      v2 = *(_QWORD*)(a1 + 32);
    } while (v7 < *(unsigned int*)(v2 + 24));
  }
  if ((*(_BYTE*)(a1 + 20) & 1) != 0) {
    *(_DWORD*)(a1 + 16) = 0;
  }
}

__int64 VectorGraphicsShapePathData_Unknown9(_QWORD* a1)
{
  unsigned int v1;
  unsigned int v3;

  if (*(_DWORD*)(a1[4] + 24LL) == 0) {
    return 1;
  }
  v1 = 1;
  v3 = 0;
  do {
    v1 += (*(__int64 (**)(_QWORD*, _QWORD))(*a1 + 64LL))(a1, v3++);
  } while (v3 < *(_DWORD*)(a1[4] + 24LL));
  return v1;
}

bool VectorGraphicsShapePathData_Unknown14(__int64 a1)
{
  return (*(_BYTE*)(*(_QWORD*)(a1 + 32) + 1LL) & 2) != 0;
}

double VectorGraphicsShapePathData_Unknown6() { return 0.0; }

bool VectorGraphicsShapePathData_5ae140(__int64 a1)
{
  return *(float*)(a1 + 12) < 1.0 || *(float*)(a1 + 8) > 0.0;
}

__int64 VectorGraphicsShapePathData_Unknown4(__int64 a1)
{
  return **(unsigned __int8**)(a1 + 32);
}

__int64 VectorGraphicsShapePathData_Unknown10(__int64 a1)
{
  return *(_BYTE*)(*(_QWORD*)(a1 + 32) + 28LL) & 1;
}

#pragma GCC visibility pop
