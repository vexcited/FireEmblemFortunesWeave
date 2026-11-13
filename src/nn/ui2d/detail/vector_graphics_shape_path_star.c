#include "decomp/pseudo_helpers.h"

#include "decomp/pseudo_float.h"

#pragma GCC visibility push(hidden)

__int64 VectorGraphicsShapePathStar_Unknown9(int* a1);
bool VectorGraphicsShapePathStar_Unknown14(__int64 a1);
__int64 VectorGraphicsShapePathStar_Unknown4(__int64 a1);
float VectorGraphicsShapePathStar_Unknown6(__int64 a1);
extern _UNKNOWN* GameData_2135448;
float nn_ui2d_5a3700(unsigned __int16*, float);
void VectorGraphicsShapePathStar_Unknown5(__int64 a1, __int64 a2, float a3);
__int64 VectorGraphicsShapePathData_5a3ca0(float*, float32x2_t*, unsigned int*,
                                           __int64, _DWORD*);
__int64 nn_ui2d_5a3850(float32x2_t*, float32x2_t*, unsigned __int64*, __int64,
                       __int64, unsigned int, float);
float* GameRoutine_59fe80(float* result, float, float);
__int64 VectorGraphicsShapePathStar_Unknown13(__int64* a1, __int64 a2, int* a3,
                                              _DWORD** a4, _DWORD* a5,
                                              __int64 a6);

void VectorGraphicsShapePathStar_Unknown5(__int64 a1, __int64 a2, float a3)
{
  float v6;
  float v7;
  float v8;
  float v9;
  float v10;
  float v11;
  __int64 v12;
  float v13;
  __int64 v14;
  float v15;
  int v16;
  int* v17;
  int v18;
  int v19;
  int v20;
  unsigned __int64 v21;
  __int64 v22;
  unsigned __int64 v23;
  __int64 v24;
  unsigned __int64 v25;
  unsigned __int64 add;
  __int64 v27;
  __int64 v28;
  unsigned __int64 v29;
  unsigned __int64* v30;
  unsigned __int64 v31;
  unsigned __int64 v32;
  __int64 v33;
  __int64 v34;
  unsigned int v35;
  float v36;
  char* v37;
  float v38;
  float v39;
  __int64 v40;
  int v41;
  float v42;
  __int64 v43;
  unsigned __int64 v44;
  float32x2_t v45;
  unsigned int v46;
  float v47;
  __int64 v48;
  float v49;
  float* v50;
  float v51;
  float v52;
  float v53;
  float v54;
  __int64 v55;
  float v56;
  float* v57;
  float v58;
  float v59;
  float32x2_t v60;
  float v61;
  float v62;
  float32x2_t v63;
  float32x2_t v64;
  float32x2_t v65;
  float32x2_t v66;
  float32x2_t v67;
  float v68;
  float32x2_t v69;
  float32x2_t v70;
  float32x2_t v71;
  float32x2_t v72;
  float32x2_t v73;
  float32x2_t v74;
  float32x2_t v75;
  float32x2_t v76;
  float32x2_t v77;
  float32x2_t v78;
  float32x2_t v79;
  float32x2_t v80;
  float32x2_t v81;
  float32x2_t v82;
  float32x2_t v83;
  float32x2_t v84;
  __int64 v85;
  float v86;
  float* v87;
  float v88;
  float v89;
  float32x2_t v90;
  float32x2_t v91;
  float32x2_t v92;
  float v93;
  float32x2_t v94;
  float32x2_t v95;
  float32x2_t* v96;
  float32x2_t v97;
  float32x2_t v98;
  float32x2_t v99;
  float32x2_t v100;
  float v101;
  float32x2_t v102;
  float32x2_t v103;
  float32x2_t v104;
  float32x2_t v105;
  float32x2_t v106;
  float32x2_t v107;
  float32x2_t* v108;
  __int64 v109;
  __int64 v110;
  __int64 v111;

  v6 = nn_ui2d_5a3700((unsigned __int16*)(*(_QWORD*)(a1 + 32) + 80LL), a3);
  v7 = nn_ui2d_5a3700((unsigned __int16*)(*(_QWORD*)(a1 + 32) + 96LL), a3);
  v8 = nn_ui2d_5a3700((unsigned __int16*)(*(_QWORD*)(a1 + 32) + 112LL), a3);
  v9 = nn_ui2d_5a3700((unsigned __int16*)(*(_QWORD*)(a1 + 32) + 128LL), a3);
  v10 = nn_ui2d_5a3700((unsigned __int16*)(*(_QWORD*)(a1 + 32) + 144LL), a3);
  v11 = nn_ui2d_5a3700((unsigned __int16*)(*(_QWORD*)(a1 + 32) + 32LL), a3);
  v12 = *(_QWORD*)(a1 + 32);
  *(float*)(a1 + 56) = v11;
  v13 = nn_ui2d_5a3700((unsigned __int16*)(v12 + 48), a3);
  v14 = *(_QWORD*)(a1 + 32);
  *(float*)(a1 + 60) = v13;
  v15 = nn_ui2d_5a3700((unsigned __int16*)(v14 + 64), a3);
  v16 = (int)v6;
  v17 = *(int**)(a2 + 200);
  v18 = *(_DWORD*)(*(_QWORD*)(a1 + 32) + 20LL);
  v19 = *v17;
  v20 = (int)v6 << (v18 == 0);
  v21 = 24LL * v20 + 8;
  v22 = *((_QWORD*)v17 + 7);
  if ((*v17 & 1) == 0) {
    v23 = *((_QWORD*)v17 + 9) + v21;
    *((_QWORD*)v17 + 9) = v23;
    if ((v19 & 2) != 0) {
      v25 = *((_QWORD*)v17 + 3);
    }
    else {
      v24 = *((_QWORD*)v17 + 8);
      v25 = *((_QWORD*)v17 + 3);
      if (v24 + v23 > v25) {
        goto LABEL_11;
      }
    }
  LABEL_9:
    v29 = v25 - v23;
    goto LABEL_12;
  }
  add = atomic_fetch_add(*((atomic_ullong* volatile*)v17 + 9), v21);
  if ((*(_BYTE*)v17 & 1) != 0) {
    v30 = *((unsigned __int64**)v17 + 9);
    v31 = atomic_load(*((unsigned __int64**)v17 + 8));
    v32 = atomic_load(v30);
    v25 = *((_QWORD*)v17 + 3);
    if (v32 + v31 <= v25) {
      goto LABEL_7;
    }
  }
  else {
    v27 = *((_QWORD*)v17 + 8);
    v28 = *((_QWORD*)v17 + 9);
    v25 = *((_QWORD*)v17 + 3);
    if (v28 + v27 <= v25) {
    LABEL_7:
      v23 = add + v21;
      goto LABEL_9;
    }
  }
LABEL_11:
  v29 = 0;
LABEL_12:
  *(_DWORD*)(a1 + 48) = v20;
  *(_QWORD*)(a1 + 40) = (v22 + v29 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  if (v16 >= 1) {
    v33 = 0;
    v34 = 0;
    v35 = 0;
    v36 = v10 * 0x1.0000000000000p-2f;
    v37 = (char*)GameData_2135448;
    v38 = (float)(PSEUDO_UNFUSED(v15 * -0x1.1df46a0000000p-6f)) +
          0x1.921fb60000000p+0f;
    v39 = -0x1.921fb60000000p+2f / (float)v16;
    v40 = 24LL * (unsigned int)v16;
    v41 = 2;
    v42 = v8 * 0x1.19999a0000000p-2f;
    do {
      if (v40 - 24 == v34) {
        v46 = 0;
      }
      else {
        v46 = v35 + 1;
      }
      v47 = v38 + (float)((float)v35 * v39);
      v48 = (__int64)(float)(v47 * 0x1.45f3060000000p+29f);
      v49 = vcvts_n_f32_u32(v48 & 0xFFFFFF, 0x18u);
      v50 = (float*)&v37[16 * BYTE3(v48)];
      v52 = *v50;
      v51 = v50[1];
      v54 = v50[2];
      v53 = v50[3];
      v55 = (__int64)(float)((float)(v38 + (float)((float)v46 * v39)) *
                             0x1.45f3060000000p+29f);
      v56 = vcvts_n_f32_u32(v55 & 0xFFFFFF, 0x18u);
      v57 = (float*)&v37[16 * BYTE3(v55)];
      v58 = -(float)((float)(v51 + (float)(v53 * v49)) * v7);
      v59 = v7 * (float)(v52 + (float)(v54 * v49));
      LANES64(v60).n64_u64[0] = __PAIR64__(LODWORD(v58), LODWORD(v59));
      v61 = v7 * (float)(*v57 + (float)(v57[2] * v56));
      v62 = -(float)((float)(v57[1] + (float)(v57[3] * v56)) * v7);
      LANES64(v63).n64_f32[0] = -v58;
      LANES64(v63).n64_f32[1] = v59;
      LANES64(v64).n64_f32[0] = v61;
      LANES64(v64).n64_f32[1] = v62;
      LANES64(v65).n64_f32[0] = -v62;
      LANES64(v66).n64_u64[0] =
          LANES64_OF(
              vsub_f32(v64, COERCE_AS(float32x2_t,
                                      __PAIR64__(LODWORD(v58), LODWORD(v59)))))
              .n64_u64[0];
      LANES64(v67).n64_u64[0] = LANES64_OF(vmul_f32(v66, v66)).n64_u64[0];
      LODWORD(v68) = LANES64_OF(vsqrt_f32(vpadd_f32(v67, v67))).n64_u32[0];
      if (v18 != 0) {
        LANES64(v69).n64_u64[0] = LANES64_OF(vmul_f32(v63, v63)).n64_u64[0];
        LANES64(v70).n64_u64[0] = LANES64_OF(vpadd_f32(v69, v69)).n64_u64[0];
        PSEUDO_LOW_LANE64(v71, n64_u64, 0);
        PSEUDO_LOW_LANE64(v72, n64_u64, 0);
        if (LANES64_OF(vsqrt_f32(v70)).n64_f32[0] >= 0x1.0000000000000p-12f) {
          LANES64(v73).n64_u64[0] = LANES64_OF(vrsqrte_f32(v70)).n64_u64[0];
          LANES64(v74).n64_u64[0] =
              LANES64_OF(vmul_f32(v73, vrsqrts_f32(v73, vmul_f32(v70, v73))))
                  .n64_u64[0];
          LANES64(v72).n64_u64[0] =
              LANES64_OF(
                  vbic_s8(vmul_f32(v63,
                                   vmul_f32(v74, vrsqrts_f32(
                                                     v74, vmul_f32(v70, v74)))),
                          vceqz_f32(v70)))
                  .n64_u64[0];
        }
        LANES64(v65).n64_f32[1] = v61;
        LANES64(v75).n64_u64[0] = LANES64_OF(vmul_f32(v65, v65)).n64_u64[0];
        LANES64(v76).n64_u64[0] = LANES64_OF(vpadd_f32(v75, v75)).n64_u64[0];
        if (LANES64_OF(vsqrt_f32(v76)).n64_f32[0] >= 0x1.0000000000000p-12f) {
          LANES64(v77).n64_u64[0] = LANES64_OF(vrsqrte_f32(v76)).n64_u64[0];
          LANES64(v78).n64_u64[0] =
              LANES64_OF(vmul_f32(v77, vrsqrts_f32(v77, vmul_f32(v76, v77))))
                  .n64_u64[0];
          LANES64(v71).n64_u64[0] =
              LANES64_OF(
                  vbic_s8(vmul_f32(v65,
                                   vmul_f32(v78, vrsqrts_f32(
                                                     v78, vmul_f32(v76, v78)))),
                          vceqz_f32(v76)))
                  .n64_u64[0];
        }
        v43 = *(_QWORD*)(a1 + 40) + v34;
        v44 = LANES64_OF(vmul_n_f32(v72, -(float)(v68 * v42))).n64_u64[0];
        LANES64(v45).n64_u64[0] =
            LANES64_OF(vmul_n_f32(v71, v42 * v68)).n64_u64[0];
        *(float*)(v43 + 16) = v59;
        *(float*)(v43 + 20) = v58;
        *(_QWORD*)(v43 + 8) = v44;
      }
      else {
        LANES64(v79).n64_u64[0] = LANES64_OF(vmul_f32(v63, v63)).n64_u64[0];
        LANES64(v80).n64_u64[0] = LANES64_OF(vpadd_f32(v79, v79)).n64_u64[0];
        PSEUDO_LOW_LANE64(v81, n64_u64, 0);
        PSEUDO_LOW_LANE64(v82, n64_u64, 0);
        if (LANES64_OF(vsqrt_f32(v80)).n64_f32[0] >= 0x1.0000000000000p-12f) {
          LANES64(v83).n64_u64[0] = LANES64_OF(vrsqrte_f32(v80)).n64_u64[0];
          LANES64(v84).n64_u64[0] =
              LANES64_OF(vmul_f32(v83, vrsqrts_f32(v83, vmul_f32(v80, v83))))
                  .n64_u64[0];
          LANES64(v82).n64_u64[0] =
              LANES64_OF(
                  vbic_s8(vmul_f32(v63,
                                   vmul_f32(v84, vrsqrts_f32(
                                                     v84, vmul_f32(v80, v84)))),
                          vceqz_f32(v80)))
                  .n64_u64[0];
        }
        v85 = (__int64)(float)((float)(v47 +
                                       (float)(v39 * 0x1.0000000000000p-1f)) *
                               0x1.45f3060000000p+29f);
        v86 = vcvts_n_f32_u32(v85 & 0xFFFFFF, 0x18u);
        v87 = (float*)&v37[16 * BYTE3(v85)];
        v88 = v9 * (float)(*v87 + (float)(v87[2] * v86));
        v89 = -(float)((float)(v87[1] + (float)(v87[3] * v86)) * v9);
        LANES64(v90).n64_f32[0] = -v89;
        LANES64(v90).n64_f32[1] = v88;
        LANES64(v91).n64_u64[0] = LANES64_OF(vmul_f32(v90, v90)).n64_u64[0];
        LANES64(v92).n64_u64[0] = LANES64_OF(vpadd_f32(v91, v91)).n64_u64[0];
        v93 = LANES64_OF(vsqrt_f32(v92)).n64_f32[0];
        if (v93 >= 0x1.0000000000000p-12f) {
          LANES64(v94).n64_u64[0] = LANES64_OF(vrsqrte_f32(v92)).n64_u64[0];
          LANES64(v95).n64_u64[0] =
              LANES64_OF(vmul_f32(v94, vrsqrts_f32(v94, vmul_f32(v92, v94))))
                  .n64_u64[0];
          LANES64(v81).n64_u64[0] =
              LANES64_OF(
                  vbic_s8(vmul_f32(v90,
                                   vmul_f32(v95, vrsqrts_f32(
                                                     v95, vmul_f32(v92, v95)))),
                          vceqz_f32(v92)))
                  .n64_u64[0];
        }
        v96 = (float32x2_t*)(*(_QWORD*)(a1 + 40) + v33);
        LANES64(v96[2]).n64_f32[0] = v59;
        LANES64(v96[2]).n64_f32[1] = v58;
        PSEUDO_LOW_LANE64(v97, n64_u64, 0);
        PSEUDO_LOW_LANE64(v98, n64_u64, 0);
        LANES64(v99).n64_u64[0] =
            LANES64_OF(
                vsub_f32(COERCE_AS(float32x2_t,
                                   __PAIR64__(LODWORD(v89), LODWORD(v88))),
                         v60))
                .n64_u64[0];
        LANES64(v100).n64_u64[0] = LANES64_OF(vmul_f32(v99, v99)).n64_u64[0];
        LANES64(v96[1]).n64_u64[0] =
            LANES64_OF(vmul_n_f32(v82, -(float)(v68 * v42))).n64_u64[0];
        v101 = LANES64_OF(vsqrt_f32(vpadd_f32(v100, v100))).n64_f32[0];
        *(float32x2_t*)(*(_QWORD*)(a1 + 40) +
                        24LL *
                            (unsigned int)((v41 - 1) % *(_DWORD*)(a1 + 48))) =
            vmul_n_f32(v81, v36 * v101);
        if (v93 >= 0x1.0000000000000p-12f) {
          LANES64(v102).n64_u64[0] = LANES64_OF(vrsqrte_f32(v92)).n64_u64[0];
          LANES64(v103).n64_u64[0] =
              LANES64_OF(vmul_f32(v102, vrsqrts_f32(v102, vmul_f32(v92, v102))))
                  .n64_u64[0];
          LANES64(v98).n64_u64[0] =
              LANES64_OF(
                  vbic_s8(vmul_f32(
                              v90,
                              vmul_f32(v103,
                                       vrsqrts_f32(v103, vmul_f32(v92, v103)))),
                          vceqz_f32(v92)))
                  .n64_u64[0];
        }
        LANES64(v65).n64_f32[1] = v61;
        LANES64(v104).n64_u64[0] = LANES64_OF(vmul_f32(v65, v65)).n64_u64[0];
        LANES64(v105).n64_u64[0] = LANES64_OF(vpadd_f32(v104, v104)).n64_u64[0];
        if (LANES64_OF(vsqrt_f32(v105)).n64_f32[0] >= 0x1.0000000000000p-12f) {
          LANES64(v106).n64_u64[0] = LANES64_OF(vrsqrte_f32(v105)).n64_u64[0];
          LANES64(v107).n64_u64[0] =
              LANES64_OF(
                  vmul_f32(v106, vrsqrts_f32(v106, vmul_f32(v105, v106))))
                  .n64_u64[0];
          LANES64(v97).n64_u64[0] =
              LANES64_OF(
                  vbic_s8(
                      vmul_f32(v65,
                               vmul_f32(v107, vrsqrts_f32(
                                                  v107, vmul_f32(v105, v107)))),
                      vceqz_f32(v105)))
                  .n64_u64[0];
        }
        LANES64(v45).n64_u64[0] =
            LANES64_OF(vmul_n_f32(v97, v42 * v68)).n64_u64[0];
        v108 = (float32x2_t*)(*(_QWORD*)(a1 + 40) +
                              24LL * (unsigned int)((v41 - 1) %
                                                    *(_DWORD*)(a1 + 48)));
        LANES64(v108[2]).n64_f32[0] = v88;
        LANES64(v108[2]).n64_f32[1] = v89;
        LANES64(v108[1]).n64_u64[0] =
            LANES64_OF(vmul_n_f32(v98, -(float)(v101 * v36))).n64_u64[0];
        v46 = v41 % *(_DWORD*)(a1 + 48);
      }
      ++v35;
      v34 += 24;
      v41 += 2;
      v33 += 48;
      *(float32x2_t*)(*(_QWORD*)(a1 + 40) + 24LL * v46) = v45;
    } while (v40 != v34);
    v20 = *(_DWORD*)(a1 + 48);
  }
  if (v20 >= 1) {
    v109 = 0;
    v110 = 0;
    do {
      ++v110;
      *(float*)(*(_QWORD*)(a1 + 40) + v109 + 16) =
          *(float*)(a1 + 56) + *(float*)(*(_QWORD*)(a1 + 40) + v109 + 16);
      v111 = *(_QWORD*)(a1 + 40) + v109;
      v109 += 24;
      *(float*)(v111 + 20) = *(float*)(a1 + 60) + *(float*)(v111 + 20);
    } while (v110 < *(int*)(a1 + 48));
  }
  if ((*(_BYTE*)(a1 + 20) & 1) != 0) {
    *(_DWORD*)(a1 + 16) = 0;
  }
}

__int64 VectorGraphicsShapePathStar_Unknown9(int* a1)
{
  unsigned int v1;
  int v3;
  int v4;

  if (a1[12] < 1) {
    return 1;
  }
  v1 = 1;
  v3 = 0;
  do {
    v4 = (*(__int64 (**)(int*, _QWORD))(*(_QWORD*)a1 + 64LL))(
        a1, (unsigned int)v3++);
    v1 += v4 + 1;
  } while (v3 < a1[12]);
  return v1;
}

__int64 VectorGraphicsShapePathStar_Unknown13(__int64* a1, __int64 a2, int* a3,
                                              _DWORD** a4, _DWORD* a5,
                                              __int64 a6)
{

#pragma clang fp contract(off)
  float32x2_t* v6;
  __int64 v10;
  __int64 v11;
  unsigned __int64 v12;
  signed __int32 v13;
  signed int v14;
  float32x2_t v15;
  __int64 v16;
  int v17;
  __int64 v18;
  float v19;
  float v20;
  float32x2_t v21;
  float32x2_t* v22;
  float v23;
  float v24;
  float v25;
  float32x2_t v26;
  float32x2_t v27;
  float32x2_t v28;
  float32x2_t v29;
  float32x2_t v30;
  float32x2_t v31;
  float32x2_t v32;
  float32x2_t v33;
  float32x2_t v34;
  float32x2_t v35;
  float32x2_t v36;
  float32x2_t v37;
  float32x2_t v38;
  float32x2_t v39;
  float32x2_t v40;
  float v41;
  float32x2_t v42;
  float32x2_t v43;
  float32x2_t v44;
  float32x2_t v45;
  float v46;
  float v47;
  float32x2_t v48;
  float v49;
  float v50;
  unsigned int v51;
  float32x2_t v52;
  float32x2_t v53;
  float v54;
  float32x2_t* v55;
  int v56;
  __int64 v57;
  __int64 v58;
  char v59;
  int v60;
  int v61;
  int v62;
  int v63;
  int v64;
  int v65;
  int v66;
  __int64 result;
  float32x2_t* v68;
  unsigned __int32 v72;
  float32x2_t v73;
  float32x2_t v74;
  unsigned __int64 v75;
  struct {
    unsigned __int64 v76;
    char gap96_[8];
    int v77;
    float v78;
  } v76_;

  v6 = *(float32x2_t**)a2;
  v76_.v77 = *a3;
  v68 = v6;
  v10 = *(_QWORD*)(a1[5] + 16);
  LANES64(*(v6)).n64_u32[0] = v10;
  *(_DWORD*)(*(_QWORD*)a2 + 4LL) = HIDWORD(v10);
  *(_QWORD*)a2 += 8LL;
  ++*a3;
  if ((*(unsigned int (**)(__int64*))(*a1 + 56))(a1) != 0) {
    v11 = 0;
    v12 = 0;
    v13 = 0;
    v14 = 0;
    PSEUDO_LOW_LANE64(v15, n64_f64, -0x1.000003f800000p-7);
    do {
      v16 = a1[5];
      v17 = (*(__int64 (**)(__int64*))(*a1 + 56))(a1);
      ++v12;
      v18 = *(unsigned int*)(v16 + v11 + 20);
      v19 = *(float*)(v16 + v11 + 8);
      v20 = *(float*)(v16 + v11 + 12);
      LANES64(v21).n64_u64[0] =
          *(unsigned int*)(v16 + v11 + 16) | (unsigned __int64)(v18 << 32);
      LANES64(v73).n64_u64[0] = LANES64(v21).n64_u64[0];
      LANES64(v26).n64_f32[0] = v19 + LANES64(v21).n64_f32[0];
      v22 = (float32x2_t*)(v16 + 24LL * (unsigned int)((int)v12 % v17));
      v23 = v20 + LANES64(v21).n64_f32[1];
      v24 = LANES64(*(v22)).n64_f32[0];
      v25 = LANES64(*(v22)).n64_f32[1];
      LANES64(v26).n64_f32[1] = v23;
      LANES64(v27).n64_u64[0] = LANES64(v22[2]).n64_u64[0];
      v76_.v76 = LANES64(v27).n64_u64[0];
      LANES64(v28).n64_u64[0] = LANES64_OF(vsub_f32(v26, v21)).n64_u64[0];
      LANES64(v30).n64_f32[0] = v24 + LANES64(v27).n64_f32[0];
      LANES64(v29).n64_u64[0] = LANES64_OF(vsub_f32(v27, v21)).n64_u64[0];
      LANES64(v30).n64_f32[1] = v25 + LANES64(v27).n64_f32[1];
      LANES64(v31).n64_u64[0] = LANES64_OF(vmul_f32(v29, v28)).n64_u64[0];
      LANES64(v32).n64_u64[0] = LANES64_OF(vmul_f32(v29, v29)).n64_u64[0];
      LANES64(v33).n64_u64[0] = LANES64_OF(vpadd_f32(v31, v31)).n64_u64[0];
      LANES64(v34).n64_u64[0] = LANES64_OF(vpadd_f32(v32, v32)).n64_u64[0];
      LANES64(v74).n64_u64[0] = LANES64(v26).n64_u64[0];
      v75 = LANES64(v30).n64_u64[0];
      if (LANES64(v33).n64_f32[0] <= 0x0.0p+0f) {
        LANES64(v39).n64_u64[0] = LANES64_OF(vmul_f32(v28, v28)).n64_u64[0];
        LANES64(v28).n64_u32[0] = LANES64_OF(vpadd_f32(v39, v39)).n64_u32[0];
      }
      else {
        LANES64(v35).n64_u64[0] = LANES64_OF(vsub_f32(v27, v26)).n64_u64[0];
        LANES64(v36).n64_u64[0] = LANES64_OF(vmul_f32(v35, v35)).n64_u64[0];
        LANES64(v37).n64_u64[0] =
            LANES64_OF(vmul_f32(vmul_f32(v29, vrev64_s32(v28)), v15))
                .n64_u64[0];
        LANES64(v38).n64_u64[0] = LANES64_OF(vpadd_f32(v36, v36)).n64_u64[0];
        LANES64(v28).n64_u64[0] = LANES64_OF(vpadd_f32(v37, v37)).n64_u64[0];
        LANES64(v28).n64_u32[0] =
            LANES64_OF(vdiv_f32(vmul_f32(v28, v28), v34)).n64_u32[0];
        if ((LANES64_OF(vcgt_f32(v33, v34)).n64_u8[0] & 1) != 0) {
          PSEUDO_LOW_LANE64(v28, n64_u64, LANES64(v38).n64_u64[0]);
        }
      }
      LANES64(v40).n64_u64[0] = LANES64_OF(vsub_f32(v30, v21)).n64_u64[0];
      v72 = LANES64(v21).n64_u32[0];
      v41 = *((float*)a1 + 13);
      LANES64(v42).n64_u64[0] = LANES64_OF(vmul_f32(v29, v40)).n64_u64[0];
      LANES64(v43).n64_u64[0] = LANES64_OF(vpadd_f32(v42, v42)).n64_u64[0];
      if (LANES64(v43).n64_f32[0] <= 0x0.0p+0f) {
        LANES64(v48).n64_u64[0] = LANES64_OF(vmul_f32(v40, v40)).n64_u64[0];
        v49 = LANES64_OF(vpadd_f32(v48, v48)).n64_f32[0];
        if (LANES64(v28).n64_f32[0] >= v49) {
          v47 = LANES64(v28).n64_f32[0];
        }
        else {
          v47 = v49;
        }
      }
      else if ((LANES64_OF(vcgt_f32(v43, v34)).n64_u8[0] & 1) != 0) {
        LANES64(v44).n64_u64[0] = LANES64_OF(vsub_f32(v27, v30)).n64_u64[0];
        LANES64(v45).n64_u64[0] = LANES64_OF(vmul_f32(v44, v44)).n64_u64[0];
        v46 = LANES64_OF(vpadd_f32(v45, v45)).n64_f32[0];
        if (LANES64(v28).n64_f32[0] >= v46) {
          v47 = LANES64(v28).n64_f32[0];
        }
        else {
          v47 = v46;
        }
      }
      else {
        LANES64(v52).n64_u64[0] =
            LANES64_OF(vmul_f32(vmul_f32(v29, vrev64_s32(v40)), v15))
                .n64_u64[0];
        LANES64(v53).n64_u64[0] = LANES64_OF(vpadd_f32(v52, v52)).n64_u64[0];
        v54 = LANES64_OF(vdiv_f32(vmul_f32(v53, v53), v34)).n64_f32[0];
        if (LANES64(v28).n64_f32[0] >= v54) {
          v47 = LANES64(v28).n64_f32[0];
        }
        else {
          v47 = v54;
        }
      }
      v50 = sqrtf(v47);
      if (v50 <= v41) {
        v51 = 1;
      }
      else {
        v76_.v78 = ceilf(sqrtf(v50 / v41));
        GameRoutine_59fe80(&v76_.v78, 0x1.0000000000000p+0f,
                           0x1.0000000000000p+10f);
        v51 = 1 << (-__clz((unsigned int)((int)v76_.v78 - 1)) & 31);
      }
      v55 = *(float32x2_t**)a2;
      v56 = nn_ui2d_5a3850(&v73, &v74, &v75, (__int64)&v76_.v76, a2, v51,
                           *((float*)a1 + 13) * *((float*)a1 + 13));
      if ((*(_WORD*)(a1[4] + 4) & 2) != 0) {
        v57 = a6 + 24LL * v13++;
        *(_DWORD*)v57 = v72;
        *(_DWORD*)(v57 + 4) = v18;
        *(_QWORD*)(v57 + 8) = v55;
        *(_DWORD*)(v57 + 16) = v56;
        *(_BYTE*)(v57 + 20) = 0;
      }
      v14 += v56;
      v11 += 24;
    } while (v12 < (*(unsigned int (**)(__int64*))(*a1 + 56))(a1));
  }
  else {
    v14 = 0;
    v13 = 0;
  }
  v58 = *a1;
  LANES64(v73).n64_u32[0] = v13;
  v76_.v78 = *(float*)&v14;
  v59 = (*(__int64 (**)(__int64*))(v58 + 88))(a1);
  v60 = v76_.v77;
  v61 = v14;
  v62 = v76_.v77;
  if ((v59 & 1) != 0) {
    v63 = VectorGraphicsShapePathData_5a3ca0(
        (float*)a1, v68, (unsigned int*)&v76_.v78, a6, &v73);
    v14 = LODWORD(v76_.v78);
    v64 = v63 & ~(v63 >> 31);
    v62 = v64 + v60;
    v61 = LODWORD(v76_.v78) - v64;
  }
  if ((*(_WORD*)(a1[4] + 4) & 1) != 0 && v61 >= 1) {
    v65 = 0;
    if (v61 != 1) {
      do {
        *(*a4)++ = v62;
        ++*a5;
        v66 = v62 + v65;
        v65 += 2;
        *(*a4)++ = v66;
        ++*a5;
        *(*a4)++ = v66 + 1;
        ++*a5;
        *(*a4)++ = v62;
        ++*a5;
        *(*a4)++ = v66 + 1;
        ++*a5;
        *(*a4)++ = v66 + 2;
        ++*a5;
      } while ((v61 & 0x7FFFFFFE) != v65);
    }
    if ((v61 & 1) != 0) {
      *(*a4)++ = v62;
      ++*a5;
      *(*a4)++ = v65 + v62;
      ++*a5;
      *(*a4)++ = v62 + 1 + v65;
      ++*a5;
    }
  }
  result = LANES64(v73).n64_u32[0];
  *(_QWORD*)a2 = &v68[v14 + 1];
  *a3 = v60 + v14 + 1;
  a1[5] = 0;
  return result;
}

bool VectorGraphicsShapePathStar_Unknown14(__int64 a1)
{
  return (*(_BYTE*)(*(_QWORD*)(a1 + 32) + 1LL) & 2) != 0;
}

__int64 VectorGraphicsShapePathStar_Unknown4(__int64 a1)
{
  return **(unsigned __int8**)(a1 + 32);
}

float VectorGraphicsShapePathStar_Unknown6(__int64 a1)
{
  return *(float*)(a1 + 56);
}

#pragma GCC visibility pop
