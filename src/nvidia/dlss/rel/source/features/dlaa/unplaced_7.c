#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 NgxRoutine_420(_QWORD);
__int64 NgxRoutine_430(_QWORD, _QWORD);
__int64 memcpy_plt(__int64, __int64, unsigned __int64);
__int64 nvidia_dlss_rel_source_features_dlaa_76570(__int64*, __int64, __int64,
                                                   unsigned __int64);
char* nvidia_dlss_rel_source_features_dlaa_97540(__int64, __int64, __int64*,
                                                 unsigned __int64);
float logf_plt(float);
float sqrtf_plt(float);
void __attribute__((noreturn)) nvidia_dlss_rel_source_common_33410();
__int64 nvidia_dlss_rel_source_features_dlaa_81ec0(_QWORD* a1, __int64* a2,
                                                   _QWORD* a3, __int64* a4);
void nvidia_dlss_rel_source_features_dlaa_92ea0(_QWORD* a1, __int64* a2,
                                                _QWORD* a3, __int64* a4);

__int64 nvidia_dlss_rel_source_features_dlaa_81ec0(_QWORD* a1, __int64* a2,
                                                   _QWORD* a3, __int64* a4)
{
  unsigned __int64* v5;
  unsigned __int64 v8;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  _QWORD* v14;
  __int64 v15;
  __int64 v16;
  _QWORD* v17;
  __int64 result;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  unsigned __int64 v23;
  _WORD* v24;
  int v25;
  __int64 v26;
  _WORD* v27;
  __int64 v28;
  int v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int16 v36;
  _QWORD v37[3];
  __int64 v38;

  {
    v5 = (unsigned __int64*)a1[1];
    __asm__ volatile("" ::"r"(v5));
  }
  {
    v8 = *v5;
    __asm__ volatile("" ::"r"(v8));
  }
  *a3 = *a1;
  if (a3 == a1) {
    a3[4] = a1[4];
  }
  else {
    nvidia_dlss_rel_source_features_dlaa_76570(
        a3 + 1, (__int64)v5, a1[2], (__int64)(a1[2] - (_QWORD)v5) >> 3);
    a3[4] = a1[4];
    nvidia_dlss_rel_source_features_dlaa_76570(a3 + 5, a1[5], a1[6],
                                               (__int64)(a1[6] - a1[5]) >> 3);
  }
  v37[0] = v8 >> 5;
  v37[1] = 32;
  v37[2] = 64;
  nvidia_dlss_rel_source_features_dlaa_97540((__int64)(a3 + 1), (__int64)v37,
                                             &v38, 3u);
  {
    v11 = *a2;
    __asm__ volatile("" ::"r"(v11));
  }
  {
    v10 = a2[1];
    __asm__ volatile("" ::"r"(v10));
  }
  v12 = v10 - *a2;
  if (v10 == *a2) {
    v14 = nullptr;
    v16 = 0;
    {
      result = *a4;
      __asm__ volatile("" ::"r"(result));
    }
    if (*a4 != 0) {
    LABEL_12:
      {
        v19 = a4[2];
        __asm__ volatile("" ::"r"(v19));
      }
      a4[1] = result;
      result = NgxRoutine_430(result, v19 - result);
    }
  }
  else {
    if (v12 < 0) {
      nvidia_dlss_rel_source_common_33410();
    }
    v13 = NgxRoutine_420(v10 - *a2);
    v14 = (_QWORD*)(v13 + v12);
    v15 = v12 & 7;
    v16 = v13;
    v17 = (_QWORD*)v13;
    if ((v12 & 7) != 0) {
      v17 = (_QWORD*)v13;
      do {
        *(_BYTE*)v17 = 0;
        v17 = (_QWORD*)((char*)v17 + 1);
        --v15;
      } while (v15 != 0);
    }
    if ((unsigned __int64)(v11 - v10) <= 0xFFFFFFFFFFFFFFF8LL) {
      do {
        *v17++ = 0;
      } while (v17 != v14);
    }
    {
      result = *a4;
      __asm__ volatile("" ::"r"(result));
    }
    if (*a4 != 0) {
      goto LABEL_12;
    }
  }
  *a4 = v16;
  a4[1] = (__int64)v14;
  a4[2] = (__int64)v14;
  if (v8 >= 0x20) {
    v20 = 0;
    v21 = 0;
    {
      v22 = *a2 + 8;
      __asm__ volatile("" ::"r"(v22));
    }
    do {
      v23 = 0;
      v24 = (_WORD*)v22;
      do {
        v25 = 0;
        v26 = 0;
        v27 = v24;
        result = (4 * (v23 & 7)) | 1;
        do {
          v28 = (unsigned int)v26 >> 4;
          v29 = v25 & 4;
          v26 += 8;
          v25 += 4;
          v30 = v16 + 2 * v20 + ((v28 | (v23 >> 2) & 4) << 9);
          v31 = v29 | (unsigned int)(v23 & 8);
          v32 = v30 + 64 * (v23 & 7);
          *(_WORD*)(v32 + v31) = *(v27 - 4);
          *(_WORD*)(v32 + v31 + 2) = *(v27 - 3);
          v33 = v30 + 16 * result;
          *(_WORD*)(v33 + v31) = *(v27 - 2);
          *(_WORD*)(v33 + v31 + 2) = *(v27 - 1);
          v34 = v30 + 16 * ((4 * (v23 & 7)) | 2);
          v35 = v30 + 16 * ((4 * (v23 & 7)) | 3);
          *(_WORD*)(v34 + v31) = *v27;
          *(_WORD*)(v34 + v31 + 2) = v27[1];
          *(_WORD*)(v35 + v31) = v27[2];
          {
            v36 = v27[3];
            __asm__ volatile("" ::"r"(v36));
          }
          v27 += 8;
          *(_WORD*)(v35 + v31 + 2) = v36;
        } while (v26 != 64);
        ++v23;
        v24 += 64;
      } while (v23 != 32);
      v20 += 2048;
      ++v21;
      v22 += 4096;
    } while (v21 != v8 >> 5);
  }
  return result;
}

void nvidia_dlss_rel_source_features_dlaa_92ea0(_QWORD* a1, __int64* a2,
                                                _QWORD* a3, __int64* a4)
{

#pragma clang fp contract(off)
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  _QWORD* v12;
  __int64 v13;
  __int64 v14;
  _QWORD* v15;
  __int64 v16;
  __int64 v17;
  unsigned __int64* v18;
  unsigned __int64* v19;
  unsigned __int64 v20;
  unsigned __int64* v21;
  __int64 v22;
  unsigned __int64 v23;
  unsigned __int64 v24;
  unsigned __int64 v25;
  float v26;
  float v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  float v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  unsigned __int64 v37;
  __int64 v38;
  __int64 i;
  int v40;
  __int64 v41;
  __int64 v42;
  unsigned int v43;
  unsigned int v44;
  unsigned int v45;
  int v46;
  unsigned int v47;
  int v48;
  unsigned int v49;
  unsigned int v50;
  char v51;
  int v52;
  char v53;
  int v54;
  bool v55;
  int v56;
  unsigned int v57;
  unsigned int v58;
  unsigned int v59;
  unsigned int v60;
  unsigned __int64 v61;
  _WORD* v62;
  int v63;
  __int64 v64;
  _WORD* v65;
  __int64 v66;
  int v67;
  __int64 v68;
  __int64 v69;
  __int64 v70;
  __int64 v71;
  __int64 v72;
  __int64 v73;
  __int16 v74;
  unsigned __int64 v75;
  _WORD* v76;
  int v77;
  __int64 v78;
  _WORD* v79;
  __int64 v80;
  int v81;
  __int64 v82;
  __int64 v83;
  __int64 v84;
  __int64 v85;
  __int64 v86;
  __int64 v87;
  __int16 v88;
  unsigned __int64 v89;
  __int64 v90;
  __int64 v91;
  __int64 v92;
  __int64 v93;
  __int64 v94;
  __int64 v95;
  _WORD* v96;
  _WORD* v97;
  __int64 v98;
  __int64 v99;
  __int64 v100;
  struct {
    unsigned int v101;
    float v102;
  } v101_;

  *a3 = *a1;
  if (a3 == a1) {
    a3[4] = a1[4];
    {
      v9 = *a2;
      __asm__ volatile("" ::"r"(v9));
    }
    {
      v8 = a2[1];
      __asm__ volatile("" ::"r"(v8));
    }
    v10 = v8 - *a2;
    if (v8 != *a2) {
    LABEL_3:
      if (v10 < 0) {
        nvidia_dlss_rel_source_common_33410();
      }
      v11 = NgxRoutine_420(v10);
      v12 = (_QWORD*)(v11 + v10);
      v13 = v10 & 7;
      v14 = v11;
      v15 = (_QWORD*)v11;
      if ((v10 & 7) != 0) {
        v15 = (_QWORD*)v11;
        do {
          *(_BYTE*)v15 = 0;
          v15 = (_QWORD*)((char*)v15 + 1);
          --v13;
        } while (v13 != 0);
      }
      if ((unsigned __int64)(v9 - v8) <= 0xFFFFFFFFFFFFFFF8LL) {
        do {
          *v15++ = 0;
        } while (v15 != v12);
      }
      {
        v16 = *a4;
        __asm__ volatile("" ::"r"(v16));
      }
      if (*a4 != 0) {
        goto LABEL_10;
      }
      goto LABEL_11;
    }
  }
  else {
    nvidia_dlss_rel_source_features_dlaa_76570(a3 + 1, a1[1], a1[2],
                                               (__int64)(a1[2] - a1[1]) >> 3);
    a3[4] = a1[4];
    nvidia_dlss_rel_source_features_dlaa_76570(a3 + 5, a1[5], a1[6],
                                               (__int64)(a1[6] - a1[5]) >> 3);
    {
      v9 = *a2;
      __asm__ volatile("" ::"r"(v9));
    }
    {
      v8 = a2[1];
      __asm__ volatile("" ::"r"(v8));
    }
    v10 = v8 - *a2;
    if (v8 != *a2) {
      goto LABEL_3;
    }
  }
  v12 = nullptr;
  v14 = 0;
  {
    v16 = *a4;
    __asm__ volatile("" ::"r"(v16));
  }
  if (*a4 != 0) {
  LABEL_10:
    {
      v17 = a4[2];
      __asm__ volatile("" ::"r"(v17));
    }
    a4[1] = v16;
    NgxRoutine_430(v16, v17 - v16);
  }
LABEL_11:
  *a4 = v14;
  a4[1] = (__int64)v12;
  a4[2] = (__int64)v12;
  {
    v18 = (unsigned __int64*)a1[1];
    __asm__ volatile("" ::"r"(v18));
  }
  {
    v19 = (unsigned __int64*)a1[2];
    __asm__ volatile("" ::"r"(v19));
  }
  if (v18 == v19) {
    v23 = 0;
  }
  else {
    v20 = 1;
    {
      v21 = (unsigned __int64*)a1[1];
      __asm__ volatile("" ::"r"(v21));
    }
    do {
      {
        v22 = *v21++;
        __asm__ volatile("" ::"r"(v22));
      }
      v20 *= v22;
    } while (v21 != v19);
    v23 = v20 / 3;
  }
  {
    v25 = *v18;
    __asm__ volatile("" ::"r"(v25));
  }
  {
    v24 = v18[1];
    __asm__ volatile("" ::"r"(v24));
  }
  v26 = logf_plt(0x1.0000000000000p+1f);
  v27 = sqrtf_plt(0x1.0000000000000p+5f);
  if (v25 >= 0x60 && v24 >= 0x20) {
    {
      v28 = *a2;
      __asm__ volatile("" ::"r"(v28));
    }
    v29 = 0;
    v30 = 0;
    v89 = v24 << 6;
    v100 = 2 * v24;
    v31 = v28 + 2 * v23 + 8;
    {
      v94 = *a4;
      __asm__ volatile("" ::"r"(v94));
    }
    v32 = 4 * v23 + v28 + 8;
    v33 = (float)(0x1.0000000000000p+0f / v26) *
          (float)(0x1.0000000000000p+0f / v27);
    do {
      v92 = v28;
      v93 = v30;
      v34 = 0;
      v90 = v32;
      v91 = v31;
      v35 = v32;
      v36 = v31;
      do {
        v96 = (_WORD*)v36;
        v97 = (_WORD*)v35;
        v98 = v34;
        v99 = v29;
        v37 = 0;
        v38 = v94 + 2 * v29;
        v95 = v28;
        do {
          for (i = 0; i != 32; ++i) {
            {
              v45 = *(unsigned __int16*)(v28 + 2 * i);
              __asm__ volatile("" ::"r"(v45));
            }
            v46 = v45 << 13;
            v47 = v45 >> 15;
            v48 = (v45 >> 10) & 0x1F;
            v49 = (v45 << 13) & 0x7FE000;
            if (v48 == 31) {
              v56 = 255;
              if (v49 != 0) {
                v47 = 0;
                v49 = 0x7FFFFF;
              }
              else {
                v49 = 0;
              }
            }
            else {
              v50 = __clz((unsigned int)(v49));
              v51 = v50 ^ 0x1F;
              v52 = 121 - v50;
              v53 = 23 - v51;
              if (v49 == 0) {
                v52 = 0;
              }
              v54 = (v46 << v53) & 0x7FC000;
              if (v49 == 0) {
                v54 = 0;
              }
              v55 = v48 == 0;
              if (v48 != 0) {
                v56 = v48 + 112;
              }
              else {
                v56 = v52;
              }
              if (v55) {
                v49 = v54;
              }
            }
            v101_.v101 = v49 | (v56 << 23) | (v47 << 31);
            memcpy_plt((__int64)&v101_.v102, (__int64)&v101_.v101, 4u);
            v101_.v102 = v33 * v101_.v102;
            memcpy_plt((__int64)&v101_.v101, (__int64)&v101_.v102, 4u);
            v57 = v101_.v101 & 0x7FFFFFFF;
            v40 = HIWORD(v101_.v101) & 0x8000;
            if ((unsigned __int8)(v101_.v101 >> 23) == 255) {
              LOWORD(v40) = v40 | 0x7C00;
              if (v57 != 2139095040) {
                LOWORD(v40) = 0x7FFF;
              }
              v57 = 0;
            }
            else if (v57 <= 0x477FEFFF) {
              v58 = v57 >> 23;
              if (v57 >> 23 <= 0x70) {
                if (v57 >= 0x33000001) {
                  v60 = v101_.v101 & 0x7FFFFF | 0x800000;
                  v57 = v60 << (v58 - 94);
                  v40 |= v60 >> (126 - v58);
                  if (v57 > 0x80000000) {
                  LABEL_26:
                    LOWORD(v40) = v40 + 1;
                    goto LABEL_27;
                  }
                }
              }
              else {
                v59 = (v57 - 939524096) >> 13;
                v57 = v101_.v101 << 19;
                LOWORD(v40) = v59 | v40;
                if (v101_.v101 << 19 > 0x80000000) {
                  goto LABEL_26;
                }
              }
            }
            else {
              LOWORD(v40) = v40 | 0x7BFF;
              v57 = 0x80000000;
            }
            if (v57 == 0x80000000 && (v40 & 1) != 0) {
              goto LABEL_26;
            }
          LABEL_27:
            v41 = i & 1;
            v42 = v38 + ((((unsigned int)i >> 4) | (v37 >> 3) & 2) << 9);
            v43 = ((unsigned int)i >> 1) & 3 | (4 * (v37 & 7));
            v44 = ((unsigned int)i >> 1) & 4;
            *(_WORD*)(v42 + 16LL * v43 + (v44 | v37 & 8) + 2 * v41) = v40;
          }
          ++v37;
          v28 += v100;
        } while (v37 != 32);
        v61 = 0;
        v62 = v96;
        do {
          v63 = 0;
          v64 = 0;
          v65 = v62;
          do {
            v66 = (unsigned int)v64 >> 4;
            v67 = v63 & 4;
            v64 += 8;
            v63 += 4;
            v68 = v38 + 2048 + ((v66 | (v61 >> 3) & 2) << 9);
            v69 = v67 | (unsigned int)(v61 & 8);
            v70 = v68 + 64 * (v61 & 7);
            *(_WORD*)(v70 + v69) = *(v65 - 4);
            *(_WORD*)(v70 + v69 + 2) = *(v65 - 3);
            v71 = v68 + 16 * ((4 * (v61 & 7)) | 1);
            *(_WORD*)(v71 + v69) = *(v65 - 2);
            *(_WORD*)(v71 + v69 + 2) = *(v65 - 1);
            v72 = v68 + 16 * ((4 * (v61 & 7)) | 2);
            v73 = v68 + 16 * ((4 * (v61 & 7)) | 3);
            *(_WORD*)(v72 + v69) = *v65;
            *(_WORD*)(v72 + v69 + 2) = v65[1];
            *(_WORD*)(v73 + v69) = v65[2];
            {
              v74 = v65[3];
              __asm__ volatile("" ::"r"(v74));
            }
            v65 += 8;
            *(_WORD*)(v73 + v69 + 2) = v74;
          } while (v64 != 32);
          ++v61;
          v62 = (_WORD*)((char*)v62 + v100);
        } while (v61 != 32);
        v75 = 0;
        v76 = v97;
        do {
          v77 = 0;
          v78 = 0;
          v79 = v76;
          do {
            v80 = (unsigned int)v78 >> 4;
            v81 = v77 & 4;
            v78 += 8;
            v77 += 4;
            v82 = v38 + 4096 + ((v80 | (v75 >> 3) & 2) << 9);
            v83 = v81 | (unsigned int)(v75 & 8);
            v84 = v82 + 64 * (v75 & 7);
            *(_WORD*)(v84 + v83) = *(v79 - 4);
            *(_WORD*)(v84 + v83 + 2) = *(v79 - 3);
            v85 = v82 + 16 * ((4 * (v75 & 7)) | 1);
            *(_WORD*)(v85 + v83) = *(v79 - 2);
            *(_WORD*)(v85 + v83 + 2) = *(v79 - 1);
            v86 = v82 + 16 * ((4 * (v75 & 7)) | 2);
            v87 = v82 + 16 * ((4 * (v75 & 7)) | 3);
            *(_WORD*)(v86 + v83) = *v79;
            *(_WORD*)(v86 + v83 + 2) = v79[1];
            *(_WORD*)(v87 + v83) = v79[2];
            {
              v88 = v79[3];
              __asm__ volatile("" ::"r"(v88));
            }
            v79 += 8;
            *(_WORD*)(v87 + v83 + 2) = v88;
          } while (v78 != 32);
          ++v75;
          v76 = (_WORD*)((char*)v76 + v100);
        } while (v75 != 32);
        v28 = v95 + 64;
        v36 = (__int64)(v96 + 32);
        v35 = (__int64)(v97 + 32);
        v29 = v99 + 3072;
        v34 = v98 + 1;
      } while (v98 + 1 != v24 >> 5);
      v28 = v92 + v89;
      v31 = v91 + v89;
      v30 = v93 + 1;
      v32 = v90 + v89;
    } while (v93 + 1 != v25 / 0x60);
  }
}

#pragma GCC visibility pop
