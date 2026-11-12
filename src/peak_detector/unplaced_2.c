#include "decomp/pseudo_helpers.h"

#include "decomp/pseudo_float.h"

#pragma GCC visibility push(hidden)

__attribute__((swiftcall)) void SdkRoutine_87af00(PSEUDO_X8, _QWORD, _QWORD,
                                                  float, float, double);
__int64 memset_plt(__int64, int, unsigned __int64);
__int64 memset_plt_alt1(void* this_, void*, int,
                        unsigned __int64) __asm__("memset_plt");
__int64 peak_detector_FindPeakPeriod_plt(_QWORD, _QWORD, _QWORD);
__int64 peak_detector_FindPeaks_plt(_QWORD, _QWORD, _QWORD, _QWORD);
float expf_plt(float);
void peak_detector_757a40(__int64 a1, __int64* a2, __int64 a3, __int64 a4,
                          __int64 a5, __int64 a6, _QWORD* a7, __int64 a8);
_QWORD* peak_detector_757de0(_QWORD* this_);
bool peak_detector_7594a0(float* a1, __int64 a2, unsigned __int64 a3,
                          unsigned __int64 a4, unsigned __int64 a5,
                          __int64* a6);
__int64* peak_detector_759f00(__int64* this_);

void peak_detector_757a40(__int64 a1, __int64* a2, __int64 a3, __int64 a4,
                          __int64 a5, __int64 a6, _QWORD* a7, __int64 a8)
{
  __int64 v8;
  __int64 v9;
  __int64 v10;
  _QWORD* v11;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  unsigned __int64 v17;
  __int64 v18;
  unsigned __int64 v19;
  _QWORD* v20;
  __int64 v21;
  _QWORD* v22;
  __int64 v23;
  _QWORD* v24;
  __int64 v25;
  _QWORD* v26;
  __int64 v27;
  _QWORD* v28;
  __int64 v29;
  _QWORD* v30;
  __int64 v31;
  _QWORD* v32;
  __int64 v33;
  _QWORD* v34;
  __int64 v35;
  _QWORD* v36;
  __int64 v37;
  _QWORD* v38;
  __int64 v39;
  _QWORD* v40;
  float v41;
  float v42;
  unsigned __int64 v43;
  unsigned __int64 v44;
  float v45;
  float v46;
  unsigned __int64 v47;
  __int64 v48;
  unsigned __int64 v49;
  float v50;
  unsigned __int64 v51;
  float v52;
  __int64 v53;
  __int64 v54;
  __int64 v55;
  __int64* v56;
  __int64 v57;

  v8 = *a2;
  v9 = a2[1];
  v10 = a2[3];
  v11 = a7;
  *(_QWORD*)(a1 + 16) = a2[2];
  *(_QWORD*)(a1 + 24) = v10;
  *(_QWORD*)a1 = v8;
  *(_QWORD*)(a1 + 8) = v9;
  v13 = a2[4];
  v14 = a2[5];
  v15 = a2[6];
  v16 = a2[7];
  *(_QWORD*)(a1 + 64) = a3;
  *(_QWORD*)(a1 + 72) = a4;
  *(_QWORD*)(a1 + 80) = a5;
  *(_QWORD*)(a1 + 88) = a6;
  *(_QWORD*)(a1 + 96) = a7;
  *(_QWORD*)(a1 + 104) = a8;
  *(_QWORD*)(a1 + 48) = v15;
  *(_QWORD*)(a1 + 56) = v16;
  *(_QWORD*)(a1 + 32) = v13;
  *(_QWORD*)(a1 + 40) = v14;
  v17 = a7[2];
  if (v17 != 0) {
    v18 = a7[2] & 3LL;
    if (v17 >= 4) {
      v19 = v17 & 0xFFFFFFFFFFFFFFFCLL;
      do {
        v20 = *(_QWORD**)(a1 + 96);
        v19 -= 4LL;
        v21 = v20[1];
        *(_DWORD*)(*v20 + 4 * v21) = 0;
        v20[1] = v21 + 1;
        v22 = *(_QWORD**)(a1 + 104);
        v23 = v22[1];
        *(_DWORD*)(*v22 + 4 * v23) = 0;
        v22[1] = v23 + 1;
        v24 = *(_QWORD**)(a1 + 96);
        v25 = v24[1];
        *(_DWORD*)(*v24 + 4 * v25) = 0;
        v24[1] = v25 + 1;
        v26 = *(_QWORD**)(a1 + 104);
        v27 = v26[1];
        *(_DWORD*)(*v26 + 4 * v27) = 0;
        v26[1] = v27 + 1;
        v28 = *(_QWORD**)(a1 + 96);
        v29 = v28[1];
        *(_DWORD*)(*v28 + 4 * v29) = 0;
        v28[1] = v29 + 1;
        v30 = *(_QWORD**)(a1 + 104);
        v31 = v30[1];
        *(_DWORD*)(*v30 + 4 * v31) = 0;
        v30[1] = v31 + 1;
        v32 = *(_QWORD**)(a1 + 96);
        v33 = v32[1];
        *(_DWORD*)(*v32 + 4 * v33) = 0;
        v32[1] = v33 + 1;
        v34 = *(_QWORD**)(a1 + 104);
        v35 = v34[1];
        *(_DWORD*)(*v34 + 4 * v35) = 0;
        v34[1] = v35 + 1;
      } while (v19 != 0);
    }
    for (; v18 != 0; v38[1] = v39 + 1) {
      v36 = *(_QWORD**)(a1 + 96);
      --v18;
      v37 = v36[1];
      *(_DWORD*)(*v36 + 4 * v37) = 0;
      v36[1] = v37 + 1;
      v38 = *(_QWORD**)(a1 + 104);
      v39 = v38[1];
      *(_DWORD*)(*v38 + 4 * v39) = 0;
    }
    v11 = *(_QWORD**)(a1 + 96);
  }
  *(_QWORD*)(a1 + 112) = 0;
  v40 = (_QWORD*)(a1 + 112);
  v41 = *(float*)(a1 + 4);
  *(_DWORD*)(a1 + 140) = 0;
  *(_QWORD*)(a1 + 120) = 0;
  *(_QWORD*)(a1 + 128) = 0;
  *(_BYTE*)(a1 + 136) = 0;
  v42 = 0x1.0000000000000p-1f / v41;
  *(_DWORD*)(a1 + 160) = 1065353216;
  v43 = v11[2];
  v44 = v43 >> 1;
  v45 = expf_plt(
      -(float)((float)((float)(0x1.0000000000000p-1f / v41) * 0x0.0p+0f) *
               (float)((float)(0x1.0000000000000p-1f / v41) * 0x0.0p+0f)));
  v46 = v45 + 0x0.0p+0f;
  *(float*)(*v11 + 4 * v44) = v45;
  *(float*)(*v11 + 4 * v44) = v45;
  if (v43 >= 2) {
    v47 = v44 - 1;
    v48 = 4 * v44;
    v49 = 1;
    do {
      v50 = expf_plt(
          -(float)((float)(v42 * (float)v49) * (float)(v42 * (float)v49)));
      v46 = v46 + (float)(v50 * 0x1.0000000000000p+1f);
      *(float*)(*v11 + v48 + 4 * v49++) = v50;
      *(float*)(*v11 + 4 * v47--) = v50;
    } while (v47 != -1);
  }
  else if (v43 == 0) {
    goto LABEL_20;
  }
  v51 = v43 & 7;
  v52 = 0x1.0000000000000p+0f / v46;
  if (v43 - 1 >= 7) {
    v53 = 0;
    do {
      *(float*)(*v11 + 4 * v53) = v52 * *(float*)(*v11 + 4 * v53);
      *(float*)(*v11 + 4 * v53 + 4) = v52 * *(float*)(*v11 + 4 * v53 + 4);
      *(float*)(*v11 + 4 * v53 + 8) = v52 * *(float*)(*v11 + 4 * v53 + 8);
      *(float*)(*v11 + 4 * v53 + 12) = v52 * *(float*)(*v11 + 4 * v53 + 12);
      *(float*)(*v11 + 4 * v53 + 16) = v52 * *(float*)(*v11 + 4 * v53 + 16);
      *(float*)(*v11 + 4 * v53 + 20) = v52 * *(float*)(*v11 + 4 * v53 + 20);
      *(float*)(*v11 + 4 * v53 + 24) = v52 * *(float*)(*v11 + 4 * v53 + 24);
      v54 = *v11 + 4 * v53;
      v53 += 8;
      *(float*)(v54 + 28) = v52 * *(float*)(v54 + 28);
    } while ((v43 & 0xFFFFFFFFFFFFFFF8LL) != v53);
  }
  else {
    v53 = 0;
  }
  if ((v43 & 7) != 0) {
    v55 = 4 * v53;
    do {
      --v51;
      *(float*)(*v11 + v55) = v52 * *(float*)(*v11 + v55);
      v55 += 4;
    } while (v51 != 0);
  }
LABEL_20:
  *(_QWORD*)(*(_QWORD*)(a1 + 64) + 8LL) = 0;
  *(_QWORD*)(*(_QWORD*)(a1 + 72) + 8LL) = 0;
  v56 = *(__int64**)(a1 + 104);
  v57 = v56[1];
  if (v57 != 0) {
    memset_plt(*v56, 0, 4 * v57);
  }
  *(_QWORD*)(*(_QWORD*)(a1 + 80) + 8LL) = 0;
  *(_QWORD*)(*(_QWORD*)(a1 + 88) + 8LL) = 0;
  *(_DWORD*)(a1 + 140) = 0;
  *v40 = 0;
  *(_QWORD*)(a1 + 120) = 0;
  *(_QWORD*)(a1 + 128) = 0;
  *(_BYTE*)(a1 + 136) = 0;
  *(_QWORD*)(a1 + 168) = 1;
  *(_QWORD*)(a1 + 176) = 0;
  *(_DWORD*)(a1 + 160) = 1065353216;
}

_QWORD* peak_detector_757de0(_QWORD* this_)
{
  _QWORD* v1;
  __int64* v2;
  __int64 v3;

  v1 = this_;
  *(_QWORD*)(*(this_ + 8) + 8LL) = 0;
  *(_QWORD*)(*(this_ + 9) + 8LL) = 0;
  v2 = (__int64*)*(this_ + 13);
  v3 = v2[1];
  if (v3 != 0) {
    this_ = (_QWORD*)memset_plt(*v2, 0, 4 * v3);
  }
  *(_QWORD*)(v1[10] + 8LL) = 0;
  *(_QWORD*)(v1[11] + 8LL) = 0;
  *((_DWORD*)v1 + 35) = 0;
  v1[14] = 0;
  v1[15] = 0;
  v1[16] = 0;
  *((_BYTE*)v1 + 136) = 0;
  v1[21] = 1;
  v1[22] = 0;
  *((_DWORD*)v1 + 40) = 1065353216;
  return this_;
}

bool peak_detector_7594a0(float* a1, __int64 a2, unsigned __int64 a3,
                          unsigned __int64 a4, unsigned __int64 a5, __int64* a6)
{

#pragma clang fp contract(off)
  unsigned __int64 v6;
  float v7;
  unsigned __int64 v12;
  float v13;
  __int64 v14;
  __int64 v15;
  float v16;
  float v17;
  unsigned __int64 v18;
  struct {
    __int64 v20;
    __int64 v21;
  } v20_;

  v6 = a4 / a3;
  v7 = 0x0.0p+0f;
  *a1 = 0x0.0p+0f;
  v12 = a5 / a3;
  if (a4 / a3 < a5 / a3) {
    v13 = 0x0.0p+0f;
    do {
      v14 = *a6;
      v15 = a6[1];
      v20_.v20 = 0;
      v20_.v21 = 0;
      SdkRoutine_87af00((void*)(&v20_.v20), v14, v15, (float)v6,
                        vcvts_n_f32_u64(v6, 1u), 0x0.0p+0);
      v6 += 10LL;
      if (v13 < *((float*)&v20_.v21 + 1)) {
        v7 = *(float*)&v20_.v20;
        v13 = *((float*)&v20_.v21 + 1);
      }
    } while (v6 < v12);
  }
  v16 = -0x1.0000000000000p-1f;
  v17 = (float)(unsigned __int64)a6[1] / v7;
  if (v17 > 0x0.0p+0f) {
    v16 = 0x1.0000000000000p-1f;
  }
  v18 = (unsigned __int64)(float)(v17 + v16) + 1;
  if (v18 == a2) {
    *a1 = 0x1.c9c3800000000p+25f / (float)(v7 * (float)a3);
  }
  return v18 == a2;
}

__int64* peak_detector_759f00(__int64* this_)
{
  _QWORD* v5;
  unsigned __int64 v6;
  __int64 v7;
  unsigned int v8;
  _QWORD* v10;
  unsigned __int64 v11;
  __int64* v12;
  unsigned __int64 v13;
  __int64 v14;
  int v15;
  int v16;
  int v17;
  unsigned int v18;
  __int64 v19;
  __int64 v20;
  unsigned int v21;
  unsigned int v23;
  __int64 v24;
  unsigned __int64 v25;
  unsigned int** v26;
  __int64* v27;
  unsigned __int64 v28;
  float v29;
  unsigned int* v30;
  unsigned int* v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  unsigned __int64 v35;
  unsigned __int64 v36;
  float v37;
  float v38;
  float v39;
  unsigned __int64 v40;
  unsigned int** v41;
  unsigned __int64 v42;
  unsigned __int64 v43;
  unsigned int* v44;
  float v45;
  __int64 v46;
  __int64 v47;
  float* v48;
  float v49;
  __int64 v50;
  unsigned int v51;
  __int64 v52;
  __int64 v53;
  float v54;
  float v55;
  __int64 v56;
  float* v57;
  float v58;
  float v59;
  unsigned __int64 v60;
  __int64 v61;
  __int64 v62;
  float v63;
  unsigned __int64 v64;
  unsigned int* v65;
  __int64 v66;
  float v67;
  __int64 v68;
  float v69;
  float v70;
  __int64 v71;
  float v72;
  float v73;
  __int64 v74;
  float v75;
  __int64 v76;
  float v77;
  float v78;
  unsigned int* v79;
  unsigned int v80;
  float v81;
  float v82;
  float v83;
  float v84;
  float v85;
  float v86;
  _BOOL4 v88;
  float v90;
  _QWORD* v91;
  unsigned __int64 v92;
  unsigned __int64 v93;
  float* v94;
  float v95;
  float v96;
  float v97;
  float v98;
  float v99;
  float v100;
  float v101;
  float v102;
  float v103;
  float v104;
  float v105;
  float v106;
  float v107;
  float v108;
  __int64 v109;
  unsigned __int64 v110;
  _DWORD* v111;
  float v112;
  float v113;
  __int64 v114;
  float v115;
  __int64 v116;
  _BYTE v117[12];
  __int64 v118;
  _QWORD v119[3];
  __int64 v120;
  int v121;
  __int64 v122;
  __int64 v123;
  int v124;
  _DWORD v125[3];

  v5 = (_QWORD*)*(this_ + 9);
  v6 = v5[1];
  if (v6 < 2) {
    return this_;
  }
  v7 = (__int64)this_;
  v8 = (*(_DWORD*)(*v5 + 4 * v6 - 4) - *(_DWORD*)*v5) / (unsigned int)(v6 - 1);
  peak_detector_FindPeaks_plt(*(this_ + 10), *(_QWORD*)(v7 + 64),
                              *(unsigned int*)(v7 + 24), v8);
  v10 = *(_QWORD**)(v7 + 80);
  v11 = *(unsigned int*)(v7 + 28);
  v12 = (__int64*)v10[1];
  v13 = (unsigned __int64)v12 - v11;
  if ((unsigned __int64)v12 > v11) {
    if ((_DWORD)v11 != 0) {
      v14 = 0;
      do {
        v15 = *(_DWORD*)(*v10 + 4 * v13++);
        *(_DWORD*)(*v10 + v14) = v15;
        v14 += 4;
        v10 = *(_QWORD**)(v7 + 80);
        v12 = (__int64*)v10[1];
      } while (v13 < (unsigned __int64)v12);
    }
    if (v11 > (unsigned __int64)v12) {
      memset_plt_alt1(v12, (void*)(*v10 + 4LL * (_QWORD)v12), nullptr,
                      4 * (v11 - (_DWORD)v12));
    LABEL_9:
      v10[1] = v11;
      v10 = *(_QWORD**)(v7 + 80);
      goto LABEL_10;
    }
    if (v11 < (unsigned __int64)v12) {
      goto LABEL_9;
    }
  }
LABEL_10:
  v17 = *(_DWORD*)(v7 + 16);
  v16 = *(_DWORD*)(v7 + 20);
  v122 = 0;
  v123 = 0;
  v18 = 1000 * v17;
  v125[2] = v16;
  v19 = *(_QWORD*)(v7 + 64);
  v20 = *(_QWORD*)(v7 + 72);
  v116 = 0;
  *(_QWORD*)&v117[4] = 0;
  v118 = 0;
  v119[0] = v19;
  v119[1] = v10;
  LODWORD(v19) = *(_DWORD*)(v7 + 12);
  v119[2] = v20;
  v120 = 0;
  v124 = 2123789977;
  v21 = 1000 * v19;
  v121 = -1;
  *(_DWORD*)v117 = -1;
  v125[0] = 1000 * v19;
  v125[1] = 1000 * v17;
  this_ = (__int64*)peak_detector_FindPeakPeriod_plt(&v116, v119, v125);
  v23 = v120;
  v24 = 0;
  v25 = 0;
  while (1) {
    if (((v23 >> v24) & 1) != 0) {
      *(_DWORD*)(**(_QWORD**)(v7 + 80) + 4 * v25++) =
          *(_DWORD*)(**(_QWORD**)(v7 + 80) + 4 * v24);
    }
    if (((v23 >> (v24 + 1)) & 1) != 0) {
      *(_DWORD*)(**(_QWORD**)(v7 + 80) + 4 * v25++) =
          *(_DWORD*)(**(_QWORD**)(v7 + 80) + 4 * v24 + 4);
    }
    if (((v23 >> (v24 + 2)) & 1) != 0) {
      *(_DWORD*)(**(_QWORD**)(v7 + 80) + 4 * v25++) =
          *(_DWORD*)(**(_QWORD**)(v7 + 80) + 4 * v24 + 8);
    }
    if (v24 == 28) {
      break;
    }
    if (((v23 >> (v24 + 3)) & 1) != 0) {
      *(_DWORD*)(**(_QWORD**)(v7 + 80) + 4 * v25++) =
          *(_DWORD*)(**(_QWORD**)(v7 + 80) + 4 * v24 + 12);
    }
    v24 += 4;
  }
  v26 = *(unsigned int***)(v7 + 80);
  v27 = (__int64*)v26[1];
  if (v25 <= (unsigned __int64)v27) {
    if (v25 >= (unsigned __int64)v27) {
      goto LABEL_25;
    }
  }
  else {
    this_ = memset_plt_alt1(v27, (void*)&(*v26)[(_QWORD)v27], nullptr,
                            4 * ((int)v25 - (int)v27));
  }
  v26[1] = (unsigned int*)v25;
  v26 = *(unsigned int***)(v7 + 80);
  v27 = (__int64*)v26[1];
LABEL_25:
  if ((unsigned __int64)v27 < 2) {
    return this_;
  }
  *(_BYTE*)(v7 + 136) = 0;
  v28 = v21 / v8;
  v29 = 0x0.0p+0f;
  v30 = *v26;
  v31 = v26[1];
  v32 = **(_QWORD**)(v7 + 64);
  v33 = *v30;
  v34 = v30[(_QWORD)v31 - 1];
  *(_DWORD*)(v7 + 124) = 0;
  v35 = v34 - v33;
  v36 = v18 / v8;
  if ((unsigned int)v28 < (unsigned int)v36) {
    v37 = 0x0.0p+0f;
    do {
      v116 = 0;
      *(_QWORD*)v117 = 0;
      this_ = X8CALL_X0(void*,
                        SdkRoutine_87af00((void*)(&v116), v32 + 4 * v33, v35,
                                          (float)v28, vcvts_n_f32_u64(v28, 1u),
                                          0x0.0p+0));
      v28 += 10LL;
      if (v37 < *(float*)&v117[4]) {
        v29 = *(float*)&v116;
        v37 = *(float*)&v117[4];
      }
    } while (v28 < v36);
  }
  v38 = -0x1.0000000000000p-1f;
  v39 = (float)v35 / v29;
  if (v39 > 0x0.0p+0f) {
    v38 = 0x1.0000000000000p-1f;
  }
  v40 = (unsigned __int64)(float)(v39 + v38) + 1;
  if ((unsigned int*)v40 == v31) {
    *(float*)(v7 + 124) = 0x1.c9c3800000000p+25f / (float)(v29 * (float)v8);
  }
  if (HIDWORD(v120) < 3) {
    goto LABEL_152;
  }
  v41 = *(unsigned int***)(v7 + 80);
  v42 = (unsigned __int64)v41[1];
  v43 = v42 - 2;
  if (v42 >= 2) {
    v44 = *v41;
    v45 = 0x0.0p+0f;
    v46 = **(_QWORD**)(v7 + 64);
    v47 = *v44;
    v48 = (float*)(v46 + 4 * v47);
    v49 = *v48;
    v50 = v44[v42 - 1] - (unsigned int)v47;
    v51 = v50 - 2;
    if ((unsigned int)v50 < 2) {
      goto LABEL_48;
    }
    v52 = v50 - 1;
    v53 = (v50 - 1) & 7;
    if (v51 < 7) {
      v54 = *v48;
      v55 = *v48;
      v56 = 1;
    LABEL_40:
      if (v53 != 0) {
        v57 = (float*)(v46 + 4 * v56 + 4 * v47);
        do {
          v58 = *v57++;
          v59 = v58;
          if (v58 < v55) {
            v55 = v59;
          }
          if (v54 < v59) {
            v54 = v59;
          }
          --v53;
        } while (v53 != 0);
      }
      v45 = v54 - v55;
    LABEL_48:
      v60 = v42 - 1;
      v61 = (v42 - 1) & 7;
      if (v43 >= 7) {
        v63 = v49;
        v64 = v60 & 0xFFFFFFFFFFFFFFF8LL;
        v65 = v44 + 4;
        v62 = 1;
        do {
          v62 += 8;
          v67 = *(float*)(v46 + 4LL * *(v65 - 3));
          if (v67 < v49) {
            v49 = *(float*)(v46 + 4LL * *(v65 - 3));
          }
          if (v63 < v67) {
            v63 = *(float*)(v46 + 4LL * *(v65 - 3));
          }
          v66 = *(v65 - 2);
          v69 = *(float*)(v46 + 4 * v66);
          if (v69 < v49) {
            v49 = *(float*)(v46 + 4 * v66);
          }
          if (v63 < v69) {
            v63 = *(float*)(v46 + 4 * v66);
          }
          v68 = *(v65 - 1);
          v70 = *(float*)(v46 + 4 * v68);
          if (v70 < v49) {
            v49 = *(float*)(v46 + 4 * v68);
          }
          if (v63 < v70) {
            v63 = *(float*)(v46 + 4 * v68);
          }
          v71 = *v65;
          v72 = *(float*)(v46 + 4 * v71);
          if (v72 < v49) {
            v49 = *(float*)(v46 + 4 * v71);
          }
          if (v63 < v72) {
            v63 = *(float*)(v46 + 4 * v71);
          }
          v73 = *(float*)(v46 + 4LL * v65[1]);
          v74 = v65[3];
          if (v73 < v49) {
            v49 = *(float*)(v46 + 4LL * v65[1]);
          }
          if (v63 < v73) {
            v63 = *(float*)(v46 + 4LL * v65[1]);
          }
          v75 = *(float*)(v46 + 4LL * v65[2]);
          v76 = v65[4];
          v65 += 8;
          if (v75 < v49) {
            v49 = v75;
          }
          if (v63 < v75) {
            v63 = v75;
          }
          v77 = *(float*)(v46 + 4 * v74);
          if (v77 < v49) {
            v49 = *(float*)(v46 + 4 * v74);
          }
          if (v63 < v77) {
            v63 = *(float*)(v46 + 4 * v74);
          }
          v78 = *(float*)(v46 + 4 * v76);
          if (v78 < v49) {
            v49 = *(float*)(v46 + 4 * v76);
          }
          if (v63 < v78) {
            v63 = *(float*)(v46 + 4 * v76);
          }
          v64 -= 8LL;
        } while (v64 != 0);
      }
      else {
        v62 = 1;
        v63 = v49;
      }
      if (v61 != 0) {
        v79 = &v44[v62];
        do {
          v80 = *v79++;
          v81 = *(float*)(v46 + 4LL * v80);
          if (v81 < v49) {
            v49 = v81;
          }
          if (v63 < v81) {
            v63 = v81;
          }
          --v61;
        } while (v61 != 0);
      }
      if ((float)((float)(v63 - v49) / v45) >= 0x1.3333340000000p-1f) {
        goto LABEL_152;
      }
      goto LABEL_92;
    }
    v54 = *v48;
    v55 = *v48;
    v93 = v52 & 0xFFFFFFFFFFFFFFF8LL;
    v94 = v48 + 4;
    v56 = 1;
    while (1) {
      v95 = *(v94 - 3);
      v96 = v95;
      if (v95 >= v55) {
        v96 = v55;
        if (v54 < v95) {
        LABEL_114:
          v97 = *(v94 - 2);
          v98 = v97;
          if (v97 < v96) {
            goto LABEL_115;
          }
          goto LABEL_131;
        }
      }
      else if (v54 < v95) {
        goto LABEL_114;
      }
      v95 = v54;
      v97 = *(v94 - 2);
      v98 = v97;
      if (v97 < v96) {
      LABEL_115:
        if (v95 < v97) {
          goto LABEL_116;
        }
        goto LABEL_132;
      }
    LABEL_131:
      v98 = v96;
      if (v95 < v97) {
      LABEL_116:
        v99 = *(v94 - 1);
        v100 = v99;
        if (v99 < v98) {
          goto LABEL_117;
        }
        goto LABEL_133;
      }
    LABEL_132:
      v97 = v95;
      v99 = *(v94 - 1);
      v100 = v99;
      if (v99 < v98) {
      LABEL_117:
        if (v97 < v99) {
          goto LABEL_118;
        }
        goto LABEL_134;
      }
    LABEL_133:
      v100 = v98;
      if (v97 < v99) {
      LABEL_118:
        v101 = *v94;
        v102 = *v94;
        if (*v94 < v100) {
          goto LABEL_119;
        }
        goto LABEL_135;
      }
    LABEL_134:
      v99 = v97;
      v101 = *v94;
      v102 = *v94;
      if (*v94 < v100) {
      LABEL_119:
        if (v99 < v101) {
          goto LABEL_120;
        }
        goto LABEL_136;
      }
    LABEL_135:
      v102 = v100;
      if (v99 < v101) {
      LABEL_120:
        v103 = v94[1];
        v104 = v103;
        if (v103 < v102) {
          goto LABEL_121;
        }
        goto LABEL_137;
      }
    LABEL_136:
      v101 = v99;
      v103 = v94[1];
      v104 = v103;
      if (v103 < v102) {
      LABEL_121:
        if (v101 < v103) {
          goto LABEL_122;
        }
        goto LABEL_138;
      }
    LABEL_137:
      v104 = v102;
      if (v101 < v103) {
      LABEL_122:
        v105 = v94[2];
        v106 = v105;
        if (v105 < v104) {
          goto LABEL_123;
        }
        goto LABEL_139;
      }
    LABEL_138:
      v103 = v101;
      v105 = v94[2];
      v106 = v105;
      if (v105 < v104) {
      LABEL_123:
        if (v103 < v105) {
          goto LABEL_124;
        }
        goto LABEL_140;
      }
    LABEL_139:
      v106 = v104;
      if (v103 < v105) {
      LABEL_124:
        v107 = v94[3];
        v108 = v107;
        if (v107 < v106) {
          goto LABEL_125;
        }
        goto LABEL_141;
      }
    LABEL_140:
      v105 = v103;
      v107 = v94[3];
      v108 = v107;
      if (v107 < v106) {
      LABEL_125:
        if (v105 < v107) {
          goto LABEL_126;
        }
        goto LABEL_142;
      }
    LABEL_141:
      v108 = v106;
      if (v105 < v107) {
      LABEL_126:
        v54 = v94[4];
        v55 = v54;
        if (v54 < v108) {
          goto LABEL_127;
        }
        goto LABEL_143;
      }
    LABEL_142:
      v107 = v105;
      v54 = v94[4];
      v55 = v54;
      if (v54 < v108) {
      LABEL_127:
        if (v107 >= v54) {
          goto LABEL_144;
        }
        goto LABEL_111;
      }
    LABEL_143:
      v55 = v108;
      if (v107 >= v54) {
      LABEL_144:
        v54 = v107;
      }
    LABEL_111:
      v56 += 8;
      v93 -= 8LL;
      v94 += 8;
      if (v93 == 0) {
        goto LABEL_40;
      }
    }
  }
LABEL_92:
  v82 = (float)(unsigned int)(HIDWORD(v120) - 1);
  v83 = (float)(0x1.0000000000000p+0f / v82) * (float)HIDWORD(v122);
  v84 = (float)(PSEUDO_UNFUSED((float)(0x1.0000000000000p+0f / v82) *
                               (float)(unsigned int)v123)) -
        (float)(v83 * v83);
  v85 = 0x0.0p+0f;
  if (v84 > 0x0.0p+0f) {
    v85 = sqrtf(v84);
  }
  if ((float)(v85 / v83) >= *(float*)(v7 + 40)) {
    *(_BYTE*)(v7 + 136) = 0;
  }
  else {
    v86 = *(float*)(v7 + 140);
    v88 = (float)(*((float*)&v123 + 1) / v82) > *(float*)(v7 + 44) &&
          v40 == (_QWORD)v31;
    *(_BYTE*)(v7 + 136) = v88;
    if (v88 && v86 < 0x1.0000000000000p+0f) {
      v90 = *(float*)(v7 + 124);
      if (v90 != *(float*)(v7 + 120)) {
        v91 = *(_QWORD**)(v7 + 88);
        v92 = v91[1];
        if (v92 <= 0x1F) {
          if (v92 >= v91[2]) {
            if (v92 >= 2) {
              v109 = 0;
              do {
                v110 = v109 + 2;
                v111 = (_DWORD*)(*v91 + 4 * v109++);
                *v111 = v111[1];
                v91 = *(_QWORD**)(v7 + 88);
                v92 = v91[1];
              } while (v110 < v92);
              v90 = *(float*)(v7 + 124);
            }
            *(float*)(*v91 + 4 * v92 - 4) = v90;
          }
          else {
            *(float*)(*v91 + 4 * v92) = v90;
            v91[1] = v92 + 1;
          }
          *(_DWORD*)(v7 + 120) = *(_DWORD*)(v7 + 124);
        }
      }
    }
  }
LABEL_152:
  v112 = 0x0.0p+0f;
  v113 = 0x1.47ae140000000p-7f;
  v114 = 176;
  if (*(float*)(v7 + 140) < 0x1.99999a0000000p-3f) {
    v113 = 0x1.47ae140000000p-8f;
  }
  v115 = *(float*)(v7 + 160);
  if ((unsigned int*)v40 == v31) {
    v112 = 0x1.0000000000000p+0f;
    v114 = 168;
  }
  ++*(_QWORD*)(v7 + v114);
  *(float*)(v7 + 160) = v115 + (float)((float)(v112 - v115) * v113);
  return this_;
}

#pragma GCC visibility pop
