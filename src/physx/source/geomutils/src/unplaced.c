#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_QWORD* physx_Gu_NodeAllocator_NodeAllocator(_QWORD* result);
_QWORD* physx_Gu_NodeAllocator_getBiNode(__int64);
__int64 GameRoutine_42d900(__int64 result, unsigned int, __int64*);
__int64 PxGetBroadcastAllocator(_BYTE*);
__int64 physx_Gu_NodeAllocator_Destroy_NodeAllocator(__int64);
__int64 physx_Gu_buildAABBTree(unsigned int*, __int64*, int*);
float* physx_source_geomutils_src_50d320(float* result, __int64 a2, int* a3,
                                         __int64 a4, __int64 a5);
__int64 physx_source_geomutils_src_50e140(int a1, __int64 a2, __int64* a3);
float physx_source_geomutils_src_50fa40(__int64 a1, float* a2);

float* physx_source_geomutils_src_50d320(float* result, __int64 a2, int* a3,
                                         __int64 a4, __int64 a5)
{

#pragma clang fp contract(off)
  __int64 v5;
  __int64 v6;
  __int64 v7;
  unsigned int* v8;
  __int64 v9;
  _OWORD* v10;
  int32x4_t v11;
  int8x16_t v12;
  float32x4_t v13;
  __int64 v14;
  __int64 v15;
  unsigned __int64 v16;
  unsigned int* v17;
  unsigned int v18;
  _OWORD* v19;
  float32x4_t v20;
  float32x4_t v21;
  __int64 v22;
  float32x4_t v23;
  float32x4_t v24;
  _OWORD* v25;
  float32x4_t v26;
  float32x4_t v27;
  float32x4_t v28;
  float32x4_t v29;
  float32x4_t v30;
  __int64 v31;
  unsigned int* v32;
  unsigned int v33;
  __int64 v34;
  __int64 v35;
  float32x4_t v36;
  __int64 v37;
  float32x4_t v38;
  __int64 v39;
  unsigned int* v40;
  float32x4_t v41;
  float32x4_t v42;
  float32x4_t v43;
  float32x4_t v44;
  float32x4_t v45;
  float32x4_t v46;
  float32x4_t v47;
  float32x4_t v48;
  float32x4_t v49;
  float32x4_t v50;
  float32x4_t v51;
  unsigned int v52;
  unsigned int v53;
  float32x4_t v54;
  float32x4_t v55;
  float32x4_t v56;
  float32x4_t v57;
  float32x4_t v58;
  unsigned int* v59;
  unsigned int v60;
  float32x4_t v61;
  float32x4_t v62;
  __int64 v63;
  __int64 v64;
  __int64 v65;
  float v66;
  float v67;
  __int64 v68;
  __int64 v69;
  __int64 v70;
  unsigned int v71;
  unsigned int* v72;
  unsigned int v73;
  unsigned int v74;
  unsigned int v75;
  unsigned int v76;
  __int64 v77;
  __int64 v78;
  _DWORD* v79;
  float* v80;
  float v81;
  float v82;
  float* v83;
  float v84;
  float v85;
  float v86;
  float v87;
  unsigned int v88;
  float* v89;
  float v90;
  float v91;
  float v92;
  float v93;
  float* v94;
  unsigned int* v95;
  unsigned int v96;
  float* v97;
  unsigned int* v98;
  unsigned int v99;
  float* v100;
  int v102;
  int v103;
  int v104;
  unsigned __int64 v105;

  v6 = *((unsigned int*)result + 8);
  v5 = *((unsigned int*)result + 9);
  v7 = *(_QWORD*)(a2 + 16);
  v8 = (unsigned int*)(a5 + 4 * v6);
  v9 = **(_QWORD**)(a2 + 8);
  v10 = (_OWORD*)(v9 + 24LL * *v8);
  v11 = *(int32x4_t*)v10;
  v12 = *(int8x16_t*)((char*)v10 + 12);
  v13 = *(float32x4_t*)(v7 + 12LL * *v8);
  if ((unsigned int)v5 >= 2) {
    v14 = (v5 - 1) & 3;
    if ((unsigned __int64)(v5 - 2) >= 3) {
      v16 = (v5 - 1) & 0xFFFFFFFFFFFFFFFCLL;
      v17 = v8 + 2;
      v15 = 1;
      do {
        v18 = *(v17 - 1);
        v15 += 4;
        v16 -= 4LL;
        v19 = (_OWORD*)(v9 + 24LL * v18);
        v20 = *(float32x4_t*)v19;
        v21 = *(float32x4_t*)((char*)v19 + 12);
        LODWORD(v19) = v17[1];
        v22 = v9 + 24LL * *v17;
        v23 = vmaxq_f32(v12, v21);
        v24 = vaddq_f32(v13, *(float32x4_t*)(v7 + 12LL * v18));
        v25 = (_OWORD*)(v9 + 24LL * (unsigned int)v19);
        v26 = vaddq_f32(v24, *(float32x4_t*)(v7 + 12LL * *v17));
        v27 = vminq_f32(vminq_f32(v11, v20), *(float32x4_t*)v22);
        v28 = *(float32x4_t*)v25;
        v29 = *(float32x4_t*)((char*)v25 + 12);
        v30 = *(float32x4_t*)(v7 + 12LL * (unsigned int)v19);
        LODWORD(v25) = v17[2];
        v17 += 4;
        v31 = v9 + 24LL * (unsigned int)v25;
        v13 = vaddq_f32(vaddq_f32(v26, v30),
                        *(float32x4_t*)(v7 + 12LL * (unsigned int)v25));
        v11 = vminq_f32(vminq_f32(v27, v28), *(float32x4_t*)v31);
        v12 =
            vmaxq_f32(vmaxq_f32(vmaxq_f32(v23, *(float32x4_t*)(v22 + 12)), v29),
                      *(float32x4_t*)(v31 + 12));
      } while (v16 != 0);
    }
    else {
      v15 = 1;
    }
    if (v14 != 0) {
      v32 = (unsigned int*)(a5 + 4 * v15 + 4 * v6);
      do {
        v33 = *v32++;
        --v14;
        v34 = v9 + 24LL * v33;
        v13 = vaddq_f32(v13, *(float32x4_t*)(v7 + 12LL * v33));
        v11 = vminq_f32(v11, *(float32x4_t*)v34);
        v12 = vmaxq_f32(v12, *(float32x4_t*)(v34 + 12));
      } while (v14 != 0);
    }
  }
  *((_QWORD*)result + 2) = LANES128_OF(vextq_s8(v12, v12, 4u)).n128_u64[0];
  *(_QWORD*)result = LANES128(v11).n128_u64[0];
  *((_QWORD*)result + 1) =
      LANES128_OF(vzip2q_s32(v11, vuzp1q_s32(v11, v12))).n128_u64[0];
  if ((unsigned int)v5 <= *(_DWORD*)a2) {
    return result;
  }
  v35 = v5 & 7;
  v36 = vmulq_n_f32(v13, 0x1.0000000000000p+0f / (float)(unsigned int)v5);
  if ((unsigned int)v5 < 8) {
    v37 = 0;
    v38 = (__typeof__(v38)){0};
    if ((v5 & 7) == 0) {
      goto LABEL_18;
    }
    goto LABEL_16;
  }
  v38 = (__typeof__(v38)){0};
  v39 = 0;
  v40 = (unsigned int*)(a5 + 4 * v6 + 16);
  do {
    v39 -= 8;
    v41 = vsubq_f32(*(float32x4_t*)(v7 + 12LL * *(v40 - 4)), v36);
    v42 = vaddq_f32(v38, vmulq_f32(v41, v41));
    v43 = vsubq_f32(*(float32x4_t*)(v7 + 12LL * *(v40 - 3)), v36);
    v44 = vaddq_f32(v42, vmulq_f32(v43, v43));
    v45 = vsubq_f32(*(float32x4_t*)(v7 + 12LL * *(v40 - 2)), v36);
    v46 = vaddq_f32(v44, vmulq_f32(v45, v45));
    v47 = vsubq_f32(*(float32x4_t*)(v7 + 12LL * *(v40 - 1)), v36);
    v48 = vaddq_f32(v46, vmulq_f32(v47, v47));
    v49 = vsubq_f32(*(float32x4_t*)(v7 + 12LL * *v40), v36);
    v50 = vaddq_f32(v48, vmulq_f32(v49, v49));
    v51 = *(float32x4_t*)(v7 + 12LL * v40[1]);
    v53 = v40[2];
    v52 = v40[3];
    v40 += 8;
    v54 = vsubq_f32(v51, v36);
    v55 = vaddq_f32(v50, vmulq_f32(v54, v54));
    v56 = vsubq_f32(*(float32x4_t*)(v7 + 12LL * v53), v36);
    v57 = vaddq_f32(v55, vmulq_f32(v56, v56));
    v58 = vsubq_f32(*(float32x4_t*)(v7 + 12LL * v52), v36);
    v38 = vaddq_f32(v57, vmulq_f32(v58, v58));
  } while (-(__int64)((unsigned int)v5 & 0xFFFFFFF8) != v39);
  v37 = -v39;
  if ((v5 & 7) != 0) {
  LABEL_16:
    v59 = (unsigned int*)(a5 + 4 * v37 + 4 * v6);
    do {
      v60 = *v59++;
      --v35;
      v61 = vsubq_f32(*(float32x4_t*)(v7 + 12LL * v60), v36);
      v38 = vaddq_f32(v38, vmulq_f32(v61, v61));
    } while (v35 != 0);
  }
LABEL_18:
  v62 = vmulq_n_f32(v38, 0x1.0000000000000p+0f / (float)(unsigned int)(v5 - 1));
  v105 = LANES128(v62).n128_u64[0];
  v63 = LANES128(v62).n128_f32[1] > LANES128(v62).n128_f32[0];
  if (LANES128(v62).n128_f32[2] > *((float*)&v105 + v63)) {
    v63 = 2;
  }
  if (*(_DWORD*)(a2 + 24) == 1) {
    v64 = v5 & 3;
    if ((unsigned int)v5 >= 4) {
      v66 = 0x0.0p+0f;
      v78 = 0;
      v79 = (_DWORD*)(a5 + 4 * v6 + 8);
      do {
        v78 -= 4;
        v80 = (float*)(v9 + 24LL * (unsigned int)*(v79 - 2) + 4 * v63);
        v81 = *v80;
        v82 = v80[3];
        v83 = (float*)(v9 + 24LL * (unsigned int)*(v79 - 1) + 4 * v63);
        v84 = v81 + v82;
        v85 = v83[3];
        v86 = v66 + (float)(v84 * 0x1.0000000000000p-1f);
        v87 = *v83;
        LODWORD(v83) = *v79;
        v88 = v79[1];
        v79 += 4;
        v89 = (float*)(v9 + 24LL * (unsigned int)v83 + 4 * v63);
        v90 = (float)(v87 + v85) * 0x1.0000000000000p-1f;
        v91 = v89[3];
        v92 = v86 + v90;
        v93 = *v89;
        v94 = (float*)(v9 + 24LL * v88 + 4 * v63);
        v66 =
            (float)(v92 + (float)((float)(v93 + v91) * 0x1.0000000000000p-1f)) +
            (float)((float)(*v94 + v94[3]) * 0x1.0000000000000p-1f);
      } while (-(__int64)((unsigned int)v5 & 0xFFFFFFFC) != v78);
      v65 = -v78;
      if ((v5 & 3) == 0) {
      LABEL_43:
        v67 = v66 / (float)(unsigned int)v5;
        v68 = v7 + 4 * v63;
        v69 = v5 & 3;
        if ((unsigned int)v5 < 4) {
        LABEL_44:
          v77 = 0;
          v71 = 0;
          if (v69 != 0) {
            goto LABEL_45;
          }
          goto LABEL_49;
        }
        goto LABEL_25;
      }
    }
    else {
      v65 = 0;
      v66 = 0x0.0p+0f;
      if ((v5 & 3) == 0) {
        goto LABEL_43;
      }
    }
    v95 = (unsigned int*)(a5 + 4 * v65 + 4 * v6);
    do {
      v96 = *v95++;
      --v64;
      v97 = (float*)(v9 + 24LL * v96 + 4 * v63);
      v66 = v66 + (float)((float)(*v97 + v97[3]) * 0x1.0000000000000p-1f);
    } while (v64 != 0);
    goto LABEL_43;
  }
  v67 = (float)(result[v63] + result[v63 + 3]) * 0x1.0000000000000p-1f;
  v68 = v7 + 4 * v63;
  v69 = v5 & 3;
  if ((unsigned int)v5 < 4) {
    goto LABEL_44;
  }
LABEL_25:
  v70 = 0;
  v71 = 0;
  v72 = (unsigned int*)(a5 + 4 * v6 + 8);
  do {
    v73 = *(v72 - 2);
    if (*(float*)(v68 + 12LL * v73) > v67) {
      *(v72 - 2) = v8[v71];
      v8[v71++] = v73;
      v74 = *(v72 - 1);
      if (*(float*)(v68 + 12LL * v74) <= v67) {
      LABEL_29:
        v75 = *v72;
        if (*(float*)(v68 + 12LL * *v72) > v67) {
          goto LABEL_34;
        }
        goto LABEL_30;
      }
    }
    else {
      v74 = *(v72 - 1);
      if (*(float*)(v68 + 12LL * v74) <= v67) {
        goto LABEL_29;
      }
    }
    *(v72 - 1) = v8[v71];
    v8[v71++] = v74;
    v75 = *v72;
    if (*(float*)(v68 + 12LL * *v72) > v67) {
    LABEL_34:
      *v72 = v8[v71];
      v8[v71++] = v75;
      v76 = v72[1];
      if (*(float*)(v68 + 12LL * v76) <= v67) {
        goto LABEL_26;
      }
      goto LABEL_35;
    }
  LABEL_30:
    v76 = v72[1];
    if (*(float*)(v68 + 12LL * v76) > v67) {
    LABEL_35:
      v72[1] = v8[v71];
      v8[v71++] = v76;
    }
  LABEL_26:
    v70 -= 4;
    v72 += 4;
  } while (-(__int64)((unsigned int)v5 & 0xFFFFFFFC) != v70);
  v77 = -v70;
  if (v69 != 0) {
  LABEL_45:
    v98 = (unsigned int*)(a5 + 4 * v77 + 4 * v6);
    do {
      v99 = *v98;
      if (*(float*)(v68 + 12LL * *v98) > v67) {
        *v98 = v8[v71];
        v8[v71++] = v99;
      }
      ++v98;
      --v69;
    } while (v69 != 0);
  }
LABEL_49:
  if (v71 != 0 && v71 != (_DWORD)v5) {
  LABEL_53:
    v100 = result;
    result = (float*)physx_Gu_NodeAllocator_getBiNode(a4);
    v102 = *a3;
    *((_DWORD*)result + 9) = v71;
    *((_QWORD*)v100 + 3) = result;
    *a3 = v102 + 2;
    v103 = *((_DWORD*)v100 + 8);
    v104 = *((_DWORD*)v100 + 9);
    *((_DWORD*)result + 8) = v103;
    *((_DWORD*)result + 18) = v103 + v71;
    *((_DWORD*)result + 19) = v104 - v71;
  }
  else if ((unsigned int)v5 > *(_DWORD*)a2) {
    v71 = (unsigned int)v5 >> 1;
    goto LABEL_53;
  }
  return result;
}

__int64 physx_source_geomutils_src_50e140(int a1, __int64 a2, __int64* a3)
{
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  unsigned int v14;
  unsigned int* v15;
  int v16;
  int v17;
  __int64* v18;
  int v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  int v23;
  __int64 v24;
  __int64 v25;
  unsigned __int64 v26;
  int v27;
  unsigned int* v28;
  __int64 v29;
  unsigned __int64 v30;
  int v31;
  unsigned __int64 v32;
  unsigned __int64 v33;
  bool v34;
  unsigned int v35;
  int v36;
  int v37;
  __int64 v38;
  __int64 v39;
  unsigned __int64 v40;
  int v41;
  unsigned int* v42;
  __int64 v43;
  unsigned __int64 v44;
  int v45;
  unsigned __int64 v46;
  unsigned __int64 v47;
  unsigned int v49;
  __int64 v50;
  __int64 v51;
  unsigned __int64 v52;
  int v53;
  unsigned int* v54;
  __int64 v55;
  unsigned __int64 v56;
  int v57;
  unsigned __int64 v58;
  unsigned __int64 v59;
  unsigned int v61;
  __int64 v62;
  struct {
    __int64 v64[2];
    __int64 v65;
    int v66;
  } v64_;
  struct {
    __int64 v67;
    __int64 v68;
    unsigned int v69;
  } v67_;
  __int64 v70;

  v70 = 0;
  physx_Gu_NodeAllocator_NodeAllocator(&v67_.v67);
  v64_.v64[1] = a2;
  v64_.v65 = 0;
  v64_.v66 = 0;
  LODWORD(v64_.v64[0]) = 1;
  HIDWORD(v64_.v64[0]) = a1;
  v6 = physx_Gu_buildAABBTree((unsigned int*)v64_.v64, &v67_.v67, (int*)&v70);
  v7 = v64_.v65;
  v8 = v6;
  if (v64_.v65 != 0) {
    v9 = PxGetBroadcastAllocator(nullptr);
    (*(void (**)(__int64, __int64))(*(_QWORD*)v9 + 24LL))(v9, v7);
  }
  GameRoutine_42d900((__int64)a3, v70, v64_.v64);
  v10 = v67_.v69;
  if (v67_.v69 != 0) {
    v11 = v67_.v68;
    v12 = *a3;
    v13 = 0;
    v14 = 0;
    v15 = (unsigned int*)(v67_.v68 + 8);
    do {
      v18 = (__int64*)(v11 + 16 * v13);
      v19 = *((_DWORD*)v18 + 2);
      if (v19 != 0) {
        v20 = *v18;
        if (v19 == 1) {
          v21 = 0;
        }
        else {
          v22 = v19 & 0xFFFFFFFE;
          v21 = 0;
          do {
            while (1) {
              v24 = v20 + 40 * v21;
              v25 = v12 + 28LL * v14;
              *(_QWORD*)v25 = *(_QWORD*)v24;
              *(_DWORD*)(v25 + 8) = *(_DWORD*)(v24 + 8);
              *(_DWORD*)(v25 + 12) = *(_DWORD*)(v24 + 12);
              *(_DWORD*)(v25 + 16) = *(_DWORD*)(v24 + 16);
              *(_DWORD*)(v25 + 20) = *(_DWORD*)(v24 + 20);
              v26 = *(_QWORD*)(v24 + 24);
              if (v26 != 0) {
                v27 = 0;
                v28 = v15;
                v29 = v10;
                do {
                  v30 = *((_QWORD*)v28 - 1);
                  v31 = *v28;
                  v32 = v30 + 40LL * *v28;
                  v34 = v26 >= v30;
                  v33 = v26 - v30;
                  v34 = !v34 || v26 >= v32;
                  if (!v34) {
                    v37 = -858993459 * (v33 >> 3);
                    goto LABEL_25;
                  }
                  v28 += 4;
                  v27 += v31;
                  --v29;
                } while (v29 != 0);
                v37 = -1;
              LABEL_25:
                v36 = 2 * (v37 + v27);
              }
              else {
                v35 = *(_DWORD*)(v24 + 32);
                if (v8 != 0) {
                  v35 = *(_DWORD*)(v8 + 4LL * v35);
                }
                v36 = (32 * v35) | (2 * (*(_DWORD*)(v24 + 36) & 0xF)) | 1;
              }
              *(_DWORD*)(v25 + 24) = v36;
              v38 = v12 + 28LL * (v14 + 1);
              v39 = v20 + 40 * (v21 | 1);
              *(_QWORD*)v38 = *(_QWORD*)v39;
              *(_DWORD*)(v38 + 8) = *(_DWORD*)(v39 + 8);
              *(_DWORD*)(v38 + 12) = *(_DWORD*)(v39 + 12);
              *(_DWORD*)(v38 + 16) = *(_DWORD*)(v39 + 16);
              *(_DWORD*)(v38 + 20) = *(_DWORD*)(v39 + 20);
              v40 = *(_QWORD*)(v39 + 24);
              if (v40 != 0) {
                break;
              }
              v49 = *(_DWORD*)(v39 + 32);
              if (v8 != 0) {
                v49 = *(_DWORD*)(v8 + 4LL * v49);
              }
              v14 += 2;
              v21 += 2;
              *(_DWORD*)(v38 + 24) =
                  (32 * v49) | (2 * (*(_DWORD*)(v39 + 36) & 0xF)) | 1;
              if (v21 == v22) {
                goto LABEL_38;
              }
            }
            v41 = 0;
            v42 = v15;
            v43 = v10;
            do {
              v44 = *((_QWORD*)v42 - 1);
              v45 = *v42;
              v46 = v44 + 40LL * *v42;
              v34 = v40 >= v44;
              v47 = v40 - v44;
              if (v34 && v40 < v46) {
                v23 = -858993459 * (v47 >> 3);
                goto LABEL_12;
              }
              v42 += 4;
              v41 += v45;
              --v43;
            } while (v43 != 0);
            v23 = -1;
          LABEL_12:
            v14 += 2;
            v21 += 2;
            *(_DWORD*)(v38 + 24) = 2 * (v23 + v41);
          } while (v21 != v22);
        }
      LABEL_38:
        if ((v19 & 1) != 0) {
          v50 = v20 + 40 * v21;
          v51 = v12 + 28LL * v14;
          *(_QWORD*)v51 = *(_QWORD*)v50;
          *(_DWORD*)(v51 + 8) = *(_DWORD*)(v50 + 8);
          *(_DWORD*)(v51 + 12) = *(_DWORD*)(v50 + 12);
          *(_DWORD*)(v51 + 16) = *(_DWORD*)(v50 + 16);
          *(_DWORD*)(v51 + 20) = *(_DWORD*)(v50 + 20);
          v52 = *(_QWORD*)(v50 + 24);
          if (v52 != 0) {
            v53 = 0;
            v54 = v15;
            v55 = v10;
            do {
              v56 = *((_QWORD*)v54 - 1);
              v57 = *v54;
              v58 = v56 + 40LL * *v54;
              v34 = v52 >= v56;
              v59 = v52 - v56;
              if (v34 && v52 < v58) {
                v16 = -858993459 * (v59 >> 3);
                goto LABEL_5;
              }
              v54 += 4;
              v53 += v57;
              --v55;
            } while (v55 != 0);
            v16 = -1;
          LABEL_5:
            v17 = 2 * (v16 + v53);
          }
          else {
            v61 = *(_DWORD*)(v50 + 32);
            if (v8 != 0) {
              v61 = *(_DWORD*)(v8 + 4LL * v61);
            }
            v17 = (32 * v61) | (2 * (*(_DWORD*)(v50 + 36) & 0xF)) | 1;
          }
          ++v14;
          *(_DWORD*)(v51 + 24) = v17;
        }
      }
      ++v13;
    } while (v13 != v10);
  }
  if (v8 != 0) {
    v62 = PxGetBroadcastAllocator(nullptr);
    (*(void (**)(__int64, __int64))(*(_QWORD*)v62 + 24LL))(v62, v8);
  }
  return physx_Gu_NodeAllocator_Destroy_NodeAllocator((__int64)&v67_.v67);
}

float physx_source_geomutils_src_50fa40(__int64 a1, float* a2)
{

#pragma clang fp contract(off)
  int v2;
  __int64 v3;
  __int64 v4;
  float* v5;
  float v6;
  float v7;
  float v8;
  float result;
  float v10;
  float* v11;
  float v12;
  float v13;
  float v14;
  float v15;
  float v16;
  float v17;
  float v18;
  float v19;

  result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(float, "s0", "=w"));
  v2 = *(_DWORD*)(a1 + 4);
  if (v2 != 0) {
    v3 = *(_QWORD*)(a1 + 8);
    if (v2 == 1) {
      v4 = 0;
    }
    else {
      v11 = (float*)(v3 + 28);
      v4 = 0;
      do {
        v4 += 2;
        v16 = *(v11 - 6) - a2[1];
        *(v11 - 7) = *(v11 - 7) - *a2;
        *(v11 - 6) = v16;
        v17 = a2[1];
        v18 = *(v11 - 4) - *a2;
        *(v11 - 5) = *(v11 - 5) - a2[2];
        *(v11 - 4) = v18;
        v19 = *(v11 - 2) - a2[2];
        *(v11 - 3) = *(v11 - 3) - v17;
        *(v11 - 2) = v19;
        v12 = v11[1] - a2[1];
        *v11 = *v11 - *a2;
        v11[1] = v12;
        v13 = a2[1];
        v14 = v11[3] - *a2;
        v11[2] = v11[2] - a2[2];
        v11[3] = v14;
        result = v11[4] - v13;
        v15 = v11[5] - a2[2];
        v11[4] = result;
        v11[5] = v15;
        v11 += 14;
      } while ((v2 & 0xFFFFFFFE) != v4);
    }
    if ((v2 & 1) != 0) {
      v5 = (float*)(v3 + 28 * v4);
      v6 = v5[1] - a2[1];
      *v5 = *v5 - *a2;
      v5[1] = v6;
      v7 = a2[1];
      v8 = v5[3] - *a2;
      v5[2] = v5[2] - a2[2];
      v5[3] = v8;
      result = v5[4] - v7;
      v10 = v5[5] - a2[2];
      v5[4] = result;
      v5[5] = v10;
    }
  }
  return result;
}

#pragma GCC visibility pop
