#include "decomp/pseudo_helpers.h"

#include "decomp/pseudo_float.h"

#pragma GCC visibility push(hidden)

float GameRoutine_5a3700(unsigned __int16*, float);
float acosf(float);
void VectorGraphicsShapePathRect_Unknown5(__int64 a1, float a2);
__int64 VectorGraphicsShapePathRect_Unknown7(__int64 a1);
__int64 VectorGraphicsShapePathRect_Unknown8(__int64 a1);
__int64 VectorGraphicsShapePathRect_Unknown9(__int64 a1);
bool VectorGraphicsShapePathRect_Unknown14(__int64 a1);
__int64 VectorGraphicsShapePathRect_Unknown4(__int64 a1);
float VectorGraphicsShapePathRect_Unknown6(__int64 a1);
__int64 VectorGraphicsShapePathData_5a3ca0(float*, float32x2_t*, unsigned int*,
                                           __int64, _DWORD*);
extern _UNKNOWN* GameData_2135448;
double VectorGraphicsShapePathRect_5a5320(float* a1, double** a2, _DWORD* a3);
__int64 VectorGraphicsShapePathRect_Unknown13(float* a1, double** a2, int* a3,
                                              _DWORD** a4, _DWORD* a5,
                                              __int64 a6, long double a7);

void VectorGraphicsShapePathRect_Unknown5(__int64 a1, float a2)
{
  float v4;
  __int64 v5;
  float v6;
  __int64 v7;
  float v8;
  __int64 v9;
  float v10;
  __int64 v11;
  float v12;
  int v13;

  v4 = GameRoutine_5a3700((unsigned __int16*)(*(_QWORD*)(a1 + 32) + 56LL), a2);
  v5 = *(_QWORD*)(a1 + 32);
  *(float*)(a1 + 48) = v4;
  v6 = GameRoutine_5a3700((unsigned __int16*)(v5 + 72), a2);
  v7 = *(_QWORD*)(a1 + 32);
  *(float*)(a1 + 52) = v6;
  v8 = GameRoutine_5a3700((unsigned __int16*)(v7 + 24), a2);
  v9 = *(_QWORD*)(a1 + 32);
  *(float*)(a1 + 40) = v8;
  v10 = GameRoutine_5a3700((unsigned __int16*)(v9 + 40), a2);
  v11 = *(_QWORD*)(a1 + 32);
  *(float*)(a1 + 44) = v10;
  v12 = GameRoutine_5a3700((unsigned __int16*)(v11 + 88), a2);
  v13 = *(unsigned __int8*)(a1 + 20);
  *(float*)(a1 + 56) = v12;
  if (v13 == 1) {
    *(_DWORD*)(a1 + 16) = 0;
  }
}

__int64 VectorGraphicsShapePathRect_Unknown7(__int64 a1)
{
  if (*(float*)(a1 + 56) > 0.0) {
    return 1;
  }
  else {
    return 4;
  }
}

__int64 VectorGraphicsShapePathRect_Unknown8(__int64 a1)
{
  float v1;
  float v2;

  v1 = *(float*)(a1 + 56);
  if (v1 <= 0.0f) {
    return 1;
  }
  v2 = acosf((float)(-2.0f / v1) + 1.0f);
  if (v2 <= 0.0f) {
    return 8;
  }
  else {
    return (unsigned int)(4 * (int)(float)(3.1416f / v2) + 8);
  }
}

__int64 VectorGraphicsShapePathRect_Unknown9(__int64 a1)
{
  unsigned int v2;
  unsigned int v3;

  if ((*(unsigned int (**)(__int64))(*(_QWORD*)a1 + 56LL))(a1) == 0) {
    return 1;
  }
  v2 = 1;
  v3 = 0;
  do {
    v2 += (*(__int64 (**)(__int64, _QWORD))(*(_QWORD*)a1 + 64LL))(a1, v3++);
  } while (v3 < (*(unsigned int (**)(__int64))(*(_QWORD*)a1 + 56LL))(a1));
  return v2;
}

double VectorGraphicsShapePathRect_5a5320(float* a1, double** a2, _DWORD* a3)
{
  double* v3;
  float v7;
  float v8;
  float v9;
  float v10;
  unsigned int v11;
  float v12;
  __int64 v13;
  char* v14;
  int v15;
  float v16;
  float v17;
  float v18;
  float* v19;
  float v20;
  float v21;
  float v22;
  float v23;
  float v24;
  float v25;
  float v26;
  unsigned int v27;
  float v28;
  float v29;
  float* v30;
  float v31;
  float v32;
  float v33;
  float v34;
  float v35;
  float* v36;
  float v37;
  float v38;
  float v39;
  float v40;
  float v41;
  float v42;
  unsigned __int64 v43;
  float v44;
  float* v45;
  float v46;
  float v47;
  float* v48;
  float v49;
  float v50;
  float v51;
  int v52;
  float v53;
  float* v54;
  float v55;
  float v56;
  float v57;
  unsigned int v58;
  unsigned int v59;
  unsigned int v60;
  float v61;
  unsigned int v62;
  float v63;
  unsigned int v64;
  float v65;
  unsigned int v66;
  __int64 v67;
  float* v68;
  float v69;
  float v70;
  float v71;
  __int64 v72;
  float* v73;
  float v74;
  float v75;
  float v76;
  __int64 v77;
  float* v78;
  float v79;
  float v80;
  float v81;
  __int64 v82;
  float* v83;
  float v84;
  float v85;
  float v86;
  int v87;
  __int64 v88;
  float* v89;
  float v90;
  float v91;
  float v92;
  double result;
  _QWORD v94[4];

  v3 = *a2;
  v7 = a1[12] * 0x1.0000000000000p-1f;
  if (a1[14] <= v7) {
    v7 = a1[14];
  }
  if (v7 <= (float)(a1[13] * 0x1.0000000000000p-1f)) {
    v8 = v7;
  }
  else {
    v8 = a1[13] * 0x1.0000000000000p-1f;
  }
  v9 = acosf((float)(-0x1.0000000000000p+1f / v8) + 0x1.0000000000000p+0f);
  if (v9 <= 0x0.0p+0f) {
    v11 = 1;
    v12 = 0x1.921fb60000000p+0f;
  LABEL_10:
    v13 = 0;
    v14 = (char*)GameData_2135448;
    v15 = (v11 + 1) & 3;
    while (1) {
      v16 = a1[12];
      v17 = a1[13];
      v18 = a1[14];
      v94[0] = 0xBF8000003F800000LL;
      v94[1] = 0xBF800000BF800000LL;
      v19 = (float*)&v94[v13];
      v20 = v17 * 0x1.0000000000000p-1f;
      v94[2] = 0x3F800000BF800000LL;
      v94[3] = 0x3F8000003F800000LL;
      v21 = v18 <= (float)(v16 * 0x1.0000000000000p-1f)
                ? v18
                : v16 * 0x1.0000000000000p-1f;
      v22 = v18 + v18;
      v23 = v21 <= v20 ? v21 : v17 * 0x1.0000000000000p-1f;
      v24 = a1[10] + (float)(*v19 * (float)((float)(PSEUDO_UNFUSED(
                                                v16 * 0x1.0000000000000p-1f)) -
                                            v23));
      v25 = a1[11] + (float)(v19[1] * (float)(v20 - v23));
      v26 = (float)(unsigned int)v13 * 0x1.921fb60000000p+0f;
      if ((v13 & 1) != 0) {
        if (v22 <= v17) {
        LABEL_20:
          v27 = (v11 + 1) & 0xFFFFFFFC;
          if (v11 >= 3) {
            do {
              v27 -= 4;
              v28 = v26 * 0x1.45f3060000000p+29f;
              v29 = v12 + v26;
              v30 = (float*)&v14[16 * ((unsigned int)(__int64)v28 >> 24)];
              v31 = vcvts_n_f32_u32((__int64)v28 & 0xFFFFFF, 0x18u);
              v32 = *v30 + (float)(v30[2] * v31);
              v33 = v25 - (float)((float)(v30[1] + (float)(v30[3] * v31)) * v8);
              *(float*)*a2 = v24 + (float)(v32 * v8);
              *((float*)*a2 + 1) = v33;
              v34 = v29 * 0x1.45f3060000000p+29f;
              v35 = v12 + v29;
              ++*a2;
              v36 = (float*)&v14[16 * ((unsigned int)(__int64)v34 >> 24)];
              ++*a3;
              v37 = vcvts_n_f32_u32((__int64)v34 & 0xFFFFFF, 0x18u);
              v38 = *v36 + (float)(v36[2] * v37);
              v39 = v25 - (float)((float)(v36[1] + (float)(v36[3] * v37)) * v8);
              *(float*)*a2 = v24 + (float)(v38 * v8);
              *((float*)*a2 + 1) = v39;
              v40 = v35 * 0x1.45f3060000000p+29f;
              v41 = v12 + v35;
              v42 = v41 * 0x1.45f3060000000p+29f;
              v26 = v12 + v41;
              ++*a2;
              v43 = (unsigned __int64)(__int64)v40 >> 24;
              v44 = vcvts_n_f32_u32((__int64)v40 & 0xFFFFFF, 0x18u);
              ++*a3;
              v45 = (float*)&v14[16 * (unsigned __int8)v43];
              v46 = v45[3];
              v47 = v45[1];
              *(float*)*a2 =
                  v24 + (float)((float)(*v45 + (float)(v45[2] * v44)) * v8);
              *((float*)(*a2)++ + 1) =
                  v25 - (float)((float)(v47 + (float)(v46 * v44)) * v8);
              ++*a3;
              v48 = (float*)&v14[16 * ((unsigned int)(__int64)v42 >> 24)];
              v49 = vcvts_n_f32_u32((__int64)v42 & 0xFFFFFF, 0x18u);
              v50 = v24 + (float)((float)(*v48 + (float)(v48[2] * v49)) * v8);
              v51 = v25 - (float)((float)(v48[1] + (float)(v48[3] * v49)) * v8);
              *(float*)*a2 = v50;
              *((float*)(*a2)++ + 1) = v51;
              ++*a3;
            } while (v27 != 0);
          }
          if (v15 != 0) {
            v52 = (v11 + 1) & 3;
            do {
              --v52;
              v53 = v26 * 0x1.45f3060000000p+29f;
              v26 = v12 + v26;
              v54 = (float*)&v14[16 * ((unsigned int)(__int64)v53 >> 24)];
              v55 = vcvts_n_f32_u32((__int64)v53 & 0xFFFFFF, 0x18u);
              v56 = v24 + (float)((float)(*v54 + (float)(v54[2] * v55)) * v8);
              v57 = v25 - (float)((float)(v54[1] + (float)(v54[3] * v55)) * v8);
              *(float*)*a2 = v56;
              *((float*)(*a2)++ + 1) = v57;
              ++*a3;
            } while (v52 != 0);
          }
          goto LABEL_11;
        }
      }
      else if (v22 <= v16) {
        goto LABEL_20;
      }
      if (v11 >= 3) {
        break;
      }
      v58 = 0;
      if (v15 != 0) {
      LABEL_42:
        v87 = (v11 + 1) & 3;
        do {
          if (v58 < v11) {
            v88 = (__int64)(float)(v26 * 0x1.45f3060000000p+29f);
            v89 = (float*)&v14[16 * BYTE3(v88)];
            v90 = vcvts_n_f32_u32(v88 & 0xFFFFFF, 0x18u);
            v91 = v24 + (float)((float)(*v89 + (float)(v89[2] * v90)) * v8);
            v92 = v25 - (float)((float)(v89[1] + (float)(v89[3] * v90)) * v8);
            *(float*)*a2 = v91;
            *((float*)(*a2)++ + 1) = v92;
            ++*a3;
          }
          v26 = v12 + v26;
          ++v58;
          --v87;
        } while (v87 != 0);
      }
    LABEL_11:
      if (++v13 == 4) {
        goto LABEL_46;
      }
    }
    v59 = 0;
    while (1) {
      v60 = v59;
      if (v59 < v11) {
        v67 = (__int64)(float)(v26 * 0x1.45f3060000000p+29f);
        v68 = (float*)&v14[16 * BYTE3(v67)];
        v69 = vcvts_n_f32_u32(v67 & 0xFFFFFF, 0x18u);
        v70 = v24 + (float)((float)(*v68 + (float)(v68[2] * v69)) * v8);
        v71 = v25 - (float)((float)(v68[1] + (float)(v68[3] * v69)) * v8);
        *(float*)*a2 = v70;
        *((float*)(*a2)++ + 1) = v71;
        ++*a3;
        v61 = v12 + v26;
        v62 = v60 + 1;
        if (v60 + 1 >= v11) {
        LABEL_34:
          v63 = v12 + v61;
          v64 = v62 + 1;
          if (v64 >= v11) {
            goto LABEL_35;
          }
          goto LABEL_39;
        }
      }
      else {
        v61 = v12 + v26;
        v62 = v59 + 1;
        if (v60 + 1 >= v11) {
          goto LABEL_34;
        }
      }
      v72 = (__int64)(float)(v61 * 0x1.45f3060000000p+29f);
      v73 = (float*)&v14[16 * BYTE3(v72)];
      v74 = vcvts_n_f32_u32(v72 & 0xFFFFFF, 0x18u);
      v75 = v24 + (float)((float)(*v73 + (float)(v73[2] * v74)) * v8);
      v76 = v25 - (float)((float)(v73[1] + (float)(v73[3] * v74)) * v8);
      *(float*)*a2 = v75;
      *((float*)(*a2)++ + 1) = v76;
      ++*a3;
      v63 = v12 + v61;
      v64 = v62 + 1;
      if (v64 >= v11) {
      LABEL_35:
        v65 = v12 + v63;
        v66 = v64 + 1;
        if (v66 < v11) {
          goto LABEL_40;
        }
        goto LABEL_31;
      }
    LABEL_39:
      v77 = (__int64)(float)(v63 * 0x1.45f3060000000p+29f);
      v78 = (float*)&v14[16 * BYTE3(v77)];
      v79 = vcvts_n_f32_u32(v77 & 0xFFFFFF, 0x18u);
      v80 = v24 + (float)((float)(*v78 + (float)(v78[2] * v79)) * v8);
      v81 = v25 - (float)((float)(v78[1] + (float)(v78[3] * v79)) * v8);
      *(float*)*a2 = v80;
      *((float*)(*a2)++ + 1) = v81;
      ++*a3;
      v65 = v12 + v63;
      v66 = v64 + 1;
      if (v66 < v11) {
      LABEL_40:
        v82 = (__int64)(float)(v65 * 0x1.45f3060000000p+29f);
        v83 = (float*)&v14[16 * BYTE3(v82)];
        v84 = vcvts_n_f32_u32(v82 & 0xFFFFFF, 0x18u);
        v85 = v24 + (float)((float)(*v83 + (float)(v83[2] * v84)) * v8);
        v86 = v25 - (float)((float)(v83[1] + (float)(v83[3] * v84)) * v8);
        *(float*)*a2 = v85;
        *((float*)(*a2)++ + 1) = v86;
        ++*a3;
      }
    LABEL_31:
      v26 = v12 + v65;
      v59 = v66 + 1;
      if (v59 == ((v11 + 1) & 0xFFFFFFFC)) {
        v58 = v60 + 4;
        if (v15 != 0) {
          goto LABEL_42;
        }
        goto LABEL_11;
      }
    }
  }
  v10 = 0x1.921fb60000000p+1f / v9;
  v11 = (int)v10 + 1;
  if ((int)v10 != -2) {
    v12 = 0x1.921fb60000000p+0f / (float)v11;
    goto LABEL_10;
  }
LABEL_46:
  result = *v3;
  *(*a2)++ = *v3;
  ++*a3;
  return result;
}

__int64 VectorGraphicsShapePathRect_Unknown13(float* a1, double** a2, int* a3,
                                              _DWORD** a4, _DWORD* a5,
                                              __int64 a6, long double a7)
{

#pragma clang fp contract(off)
  float v7;
  int v8;
  float32x2_t* v9;
  int v16;
  float v17;
  float v18;
  float v19;
  float v20;
  float v21;
  float* v22;
  float v23;
  float v24;
  float v25;
  float v26;
  unsigned int v27;
  float* v28;
  float v29;
  float v30;
  float v31;
  float v32;
  float v33;
  float v34;
  float v35;
  __int64 v36;
  float v37;
  float v38;
  float v39;
  float* v40;
  float v41;
  float v42;
  __int64 v43;
  float v44;
  double* v45;
  float v46;
  float v47;
  float v48;
  int v49;
  __int64 v50;
  signed int v51;
  __int64 v52;
  int v53;
  int v54;
  int v55;
  int v56;
  int v57;
  int v58;
  __int64 result;
  signed int v60;
  unsigned int v61;

  v7 = a1[14];
  v8 = *a3;
  v9 = (float32x2_t*)*a2;
  v61 = 0;
  if (v7 <= 0x0.0p+0f) {
    v17 = a1[12] * 0x1.0000000000000p-1f;
    v18 = a1[13] * 0x1.0000000000000p-1f;
    if (v7 > v17) {
      v7 = a1[12] * 0x1.0000000000000p-1f;
    }
    if (v7 > v18) {
      v7 = a1[13] * 0x1.0000000000000p-1f;
    }
    v19 = a1[10] + (float)(v17 - v7);
    v20 = a1[11] - (float)(v18 - v7);
    LANES64(*(v9)).n64_f32[0] = v19;
    *((float*)(*a2)++ + 1) = v20;
    ++*a3;
    v21 = a1[14];
    v22 = (float*)*a2;
    v23 = a1[12] * 0x1.0000000000000p-1f;
    v24 = a1[13] * 0x1.0000000000000p-1f;
    if (v21 > v23) {
      v21 = a1[12] * 0x1.0000000000000p-1f;
    }
    if (v21 > v24) {
      v21 = a1[13] * 0x1.0000000000000p-1f;
    }
    v25 = a1[10] - (float)(v23 - v21);
    v26 = a1[11] - (float)(v24 - v21);
    *v22 = v25;
    *((float*)(*a2)++ + 1) = v26;
    ++*a3;
    if ((*(_WORD*)(*((_QWORD*)a1 + 4) + 4LL) & 2) != 0) {
      *(_QWORD*)(a6 + 8) = v22;
      v27 = 1;
      *(float*)a6 = v19;
      *(float*)(a6 + 4) = v20;
      *(_BYTE*)(a6 + 20) = 0;
      *(_DWORD*)(a6 + 16) = 1;
    }
    else {
      v27 = 0;
    }
    v28 = (float*)*a2;
    v29 = a1[12] * 0x1.0000000000000p-1f;
    v30 = a1[13] * 0x1.0000000000000p-1f;
    v31 = a1[14];
    if (v31 > v29) {
      v31 = a1[12] * 0x1.0000000000000p-1f;
    }
    if (v31 <= v30) {
      v32 = v31;
    }
    else {
      v32 = a1[13] * 0x1.0000000000000p-1f;
    }
    v33 = a1[11];
    v34 = a1[10] - (float)(v29 - v32);
    *v28 = v34;
    v35 = (float)(v30 - v32) + v33;
    *((float*)(*a2)++ + 1) = v35;
    ++*a3;
    if ((*(_WORD*)(*((_QWORD*)a1 + 4) + 4LL) & 2) != 0) {
      v36 = a6 + 24LL * v27++;
      *(_QWORD*)(v36 + 8) = v28;
      *(float*)v36 = v25;
      *(float*)(v36 + 4) = v26;
      *(_BYTE*)(v36 + 20) = 0;
      *(_DWORD*)(v36 + 16) = 1;
    }
    v37 = a1[14];
    v38 = a1[12] * 0x1.0000000000000p-1f;
    v39 = a1[13] * 0x1.0000000000000p-1f;
    v40 = (float*)*a2;
    if (v37 > v38) {
      v37 = a1[12] * 0x1.0000000000000p-1f;
    }
    if (v37 > v39) {
      v37 = a1[13] * 0x1.0000000000000p-1f;
    }
    v41 = (float)(v38 - v37) + a1[10];
    v42 = (float)(v39 - v37) + a1[11];
    *v40 = v41;
    *((float*)(*a2)++ + 1) = v42;
    ++*a3;
    if ((*(_WORD*)(*((_QWORD*)a1 + 4) + 4LL) & 2) != 0) {
      v43 = a6 + 24LL * v27++;
      *(_QWORD*)(v43 + 8) = v40;
      *(float*)v43 = v34;
      *(float*)(v43 + 4) = v35;
      *(_BYTE*)(v43 + 20) = 0;
      *(_DWORD*)(v43 + 16) = 1;
    }
    v44 = a1[11];
    v45 = *a2;
    v46 = a1[12] * 0x1.0000000000000p-1f;
    v47 = a1[13] * 0x1.0000000000000p-1f;
    v48 = a1[14];
    if (v48 > v46) {
      v48 = a1[12] * 0x1.0000000000000p-1f;
    }
    if (v48 > v47) {
      v48 = a1[13] * 0x1.0000000000000p-1f;
    }
    *(float*)&a7 = (float)(v46 - v48) + a1[10];
    *(_DWORD*)v45 = LODWORD(a7);
    *((float*)(*a2)++ + 1) = v44 - (float)(v47 - v48);
    v49 = *a3 + 1;
    *a3 = v49;
    if ((*(_WORD*)(*((_QWORD*)a1 + 4) + 4LL) & 2) != 0) {
      v50 = a6 + 24LL * v27++;
      *(_QWORD*)(v50 + 8) = v45;
      *(float*)v50 = v41;
      *(float*)(v50 + 4) = v42;
      *(_BYTE*)(v50 + 20) = 0;
      *(_DWORD*)(v50 + 16) = 1;
      v49 = *a3;
    }
    v61 = v27;
    v16 = v49 - v8;
  }
  else {
    *(double*)&a7 = VectorGraphicsShapePathRect_5a5320(a1, a2, a3);
    v16 = *a3 - v8;
    if ((*(_WORD*)(*((_QWORD*)a1 + 4) + 4LL) & 2) != 0) {
      *(float32x2_t*)&a7 = COERCE_AS(float32x2_t, LANES64(*(v9)).n64_u64[0]);
      *(_BYTE*)(a6 + 20) = 0;
      *(_QWORD*)(a6 + 8) = v9 + 1;
      *(_DWORD*)(a6 + 16) = v16 - 1;
      v61 = 1;
      *(_QWORD*)a6 = *(_QWORD*)&a7;
    }
  }
  v51 = v16 - 1;
  v52 = *(_QWORD*)a1;
  v60 = v51;
  if (((*(__int64 (**)(float*, long double))(v52 + 88))(a1, a7) & 1) != 0) {
    v53 = VectorGraphicsShapePathData_5a3ca0(a1, v9, (unsigned int*)&v60, a6,
                                             &v61);
    v51 = v60;
    v54 = v53 & ~(v53 >> 31);
    v55 = v54 + v8;
    v56 = v60 - v54;
    if ((*(_WORD*)(*((_QWORD*)a1 + 4) + 4LL) & 1) == 0) {
      goto LABEL_44;
    }
  }
  else {
    v55 = v8;
    v56 = v51;
    if ((*(_WORD*)(*((_QWORD*)a1 + 4) + 4LL) & 1) == 0) {
      goto LABEL_44;
    }
  }
  if (v56 >= 1) {
    v57 = 0;
    if (v56 != 1) {
      do {
        *(*a4)++ = v55;
        ++*a5;
        v58 = v55 + v57;
        v57 += 2;
        *(*a4)++ = v58;
        ++*a5;
        *(*a4)++ = v58 + 1;
        ++*a5;
        *(*a4)++ = v55;
        ++*a5;
        *(*a4)++ = v58 + 1;
        ++*a5;
        *(*a4)++ = v58 + 2;
        ++*a5;
      } while ((v56 & 0x7FFFFFFE) != v57);
    }
    if ((v56 & 1) != 0) {
      *(*a4)++ = v55;
      ++*a5;
      *(*a4)++ = v57 + v55;
      ++*a5;
      *(*a4)++ = v55 + 1 + v57;
      ++*a5;
    }
  }
LABEL_44:
  result = v61;
  *a2 = LANES64(v9[v51 + 1]).n64_f64;
  *a3 = v8 + v51 + 1;
  return result;
}

bool VectorGraphicsShapePathRect_Unknown14(__int64 a1)
{
  return (*(_BYTE*)(*(_QWORD*)(a1 + 32) + 1LL) & 2) == 0;
}

__int64 VectorGraphicsShapePathRect_Unknown4(__int64 a1)
{
  return **(unsigned __int8**)(a1 + 32);
}

float VectorGraphicsShapePathRect_Unknown6(__int64 a1)
{
  return *(float*)(a1 + 40);
}

#pragma GCC visibility pop
