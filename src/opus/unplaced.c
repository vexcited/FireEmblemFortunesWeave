#include "decomp/pseudo_helpers.h"

#include "decomp/pseudo_float.h"

#pragma GCC visibility push(hidden)

__int64 SdkRoutine_30d800(__int64 result, _DWORD*, __int64, __int16, int, int);
__int64 memset_plt(void* this_, void*, int, unsigned __int64);
__int64 opus_30d700(__int64 a1, __int64 a2, int a3);
int64x2_t* opus_325e80(__int64 a1, _DWORD* a2, __int64 a3, unsigned __int64 a4,
                       int a5, int a6);
const __int16* opus_326600(const __int16* result, _QWORD* a2, int32x4_t* a3,
                           int a4);

__int64 opus_30d700(__int64 a1, __int64 a2, int a3)
{
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int16* v7;
  __int16* v8;
  __int64 v9;
  __int64 v10;
  int v11;
  int v12;
  __int16* v13;
  __int16* v14;
  int v15;
  int v16;
  int v17;

  if (a3 >= 1) {
    v3 = a3 & 7;
    if ((unsigned int)a3 >= 8) {
      v7 = (__int16*)(a2 + 8);
      v8 = (__int16*)(a1 + 8);
      v9 = 0;
      v5 = 0;
      do {
        v9 -= 8;
        v10 = v5 + *(v7 - 4) * (__int64)*(v8 - 4) +
              *(v7 - 3) * (__int64)*(v8 - 3) + *(v7 - 2) * (__int64)*(v8 - 2) +
              *(v7 - 1) * (__int64)*(v8 - 1) + *v7 * (__int64)*v8 +
              v7[1] * (__int64)v8[1] + v7[2] * (__int64)v8[2];
        v11 = v8[3];
        v12 = v7[3];
        v7 += 8;
        v8 += 8;
        v5 = v10 + v12 * (__int64)v11;
      } while (-(__int64)(a3 & 0x7FFFFFF8) != v9);
      v4 = -v9;
      if ((a3 & 7) == 0) {
        return v5;
      }
    }
    else {
      v4 = 0;
      v5 = 0;
      if ((a3 & 7) == 0) {
        return v5;
      }
    }
    v13 = (__int16*)(a2 + 2 * v4);
    v14 = (__int16*)(a1 + 2 * v4);
    do {
      v16 = *v14++;
      v15 = v16;
      v17 = *v13++;
      --v3;
      v5 += v17 * (__int64)v15;
    } while (v3 != 0);
    return v5;
  }
  return 0;
}

int64x2_t* opus_325e80(__int64 a1, _DWORD* a2, __int64 a3, unsigned __int64 a4,
                       int a5, int a6)
{
  int64x2_t* result;
  __int64 v10;
  int v11;
  int v12;
  void* v14;
  unsigned __int64 v15;
  int32x4_t v16;
  _QWORD* v17;
  unsigned __int64 v18;
  int32x4_t* v19;
  int16x8_t* v20;
  int16x8_t v21;
  unsigned __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 i;
  int v26;
  __int64 v27;
  __int16* v28;
  int v29;
  char* v30;
  __int64 v31;
  char* v32;
  int32x2_t v33;
  int v34;
  _DWORD* v35;
  _OWORD* v36;
  unsigned __int64 v37;
  int v38;
  bool v39;
  unsigned __int64 v40;
  int64x2_t* v41;
  int64x2_t v42;
  int64x2_t v43;
  int64x2_t v44;
  int64x2_t v45;
  __int64 v46;
  int8x16_t v47;
  int8x16_t v48;
  _OWORD* v49;
  __int64 v50;
  _DWORD* v51;
  _OWORD* v52;
  int32x4_t v53;
  int32x4_t v54;
  int32x4_t v55;
  int64x2_t v56;
  int64x2_t v57;
  int32x4_t v58;
  int64x2_t v59;
  int64x2_t v60;
  int64x2_t v61;
  int8x16_t v62;
  int64x2_t v63;
  int32x4_t v64;
  int32x4_t v65;
  int8x16_t v66;
  int8x16_t v67;
  int32x4_t v68;
  int32x4_t v69;
  int64x2_t v70;
  int8x16_t v71;
  char* v72;
  int32x4_t v73;
  int64x2_t v74;
  int32x4_t v75;
  int8x16_t v76;
  int v77;
  int32x4_t v78;
  int64x2_t v79;
  int64x2_t v80;
  int8x16_t v81;
  int64x2_t v82;
  int64x2_t v83;
  int32x4_t v84;
  int8x16_t v85;
  int32x4_t v86;
  int64x2_t v87;
  int8x16_t v88;
  unsigned int v89;
  unsigned int v90;
  unsigned int v91;
  unsigned __int64 v92;
  int v93;
  int v94;
  int8x16_t v95;
  __int64 v96;
  int v97;
  int32x4_t v98;
  int32x4_t v99;
  int64x2_t v100;
  int16x8_t v101;
  int16x8_t v102;
  int32x4_t v103;
  int32x4_t v104;
  int16x8_t v105;
  int32x4_t v106;
  __int64 v107;
  int j;
  int v109;
  __int16* v110;
  __int64 v111;
  int v112;
  unsigned __int64 v113;
  __int64 v114;
  __int64 v115;
  unsigned __int64* v116;
  unsigned int v117;
  unsigned __int64* v118;
  unsigned int v119;
  unsigned int v120;
  int v121;
  int64x2_t v122;
  int32x4_t* v123;
  int v124;
  int64x2_t v125;
  int64x2_t v126;
  int8x16_t v127;
  int8x16_t v128;
  unsigned int v129;
  __int64 v130;
  unsigned int v131;
  __int64 v132;
  struct {
    int32x4_t v133;
    char gap16_[8];
    _DWORD* v134;
  } v133_;
  struct {
    int64x2_t v135;
    int64x2_t v136;
    __int64 v137;
    __int64 v138;
    __int64 v139;
    __int64 v140;
    __int64 v141;
    __int64 v142;
    __int64 v143;
    __int64 v144;
    __int64 v145;
    __int64 v146;
    __int64 v147;
    __int64 v148;
    __int64 v149;
    __int64 v150;
    __int64 v151;
    __int64 v152;
    __int64 v153;
    __int64 v154;
    __int64 v155;
    __int64 v156;
    __int64 v157;
  } v135_;

  v15 = COERCE_AS(__typeof__(v15),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
  if (a6 <= 5) {
    return (int64x2_t*)SdkRoutine_30d800(a1, a2, a3, a4, a5, a6);
  }
  v10 = 4LL * a5;
  v11 = a6 + 3;
  v12 = a4;
  v133_.v134 = a2;
  v135_.v135 = (__typeof__(v135_.v135)){0};
  v135_.v156 = 0;
  v135_.v157 = 0;
  v135_.v154 = 0;
  v135_.v155 = 0;
  v135_.v152 = 0;
  v135_.v153 = 0;
  v135_.v150 = 0;
  v135_.v151 = 0;
  v135_.v148 = 0;
  v135_.v149 = 0;
  v14 = (void*)((char*)&v133_.v133 - ((v10 + 207) & 0xFFFFFFFFFFFFFFF0LL));
  v135_.v146 = 0;
  v135_.v147 = 0;
  v135_.v144 = 0;
  v135_.v145 = 0;
  v135_.v142 = 0;
  v135_.v143 = 0;
  v135_.v140 = 0;
  v135_.v141 = 0;
  v135_.v138 = 0;
  v135_.v139 = 0;
  v135_.v137 = 0;
  v135_.v136 = (__typeof__(v135_.v136)){0};
  memset_plt(v14, nullptr, v10 + 192, a4),
      v15 = COERCE_AS(__typeof__(v15),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
  v17 = (_QWORD*)((char*)v14 + 96);
  LODWORD(v18) = 0;
  *(_QWORD*)v14 = 0;
  *((_QWORD*)v14 + 1) = 0;
  *((_QWORD*)v14 + 2) = 0;
  *((_QWORD*)v14 + 3) = 0;
  v19 = (int32x4_t*)((char*)v14 + 96);
  *((_QWORD*)v14 + 4) = 0;
  *((_QWORD*)v14 + 5) = 0;
  *((_QWORD*)v14 + 6) = 0;
  *((_QWORD*)v14 + 7) = 0;
  *((_QWORD*)v14 + 8) = 0;
  *((_QWORD*)v14 + 9) = 0;
  *((_QWORD*)v14 + 10) = 0;
  *((_QWORD*)v14 + 11) = 0;
  if (a5 >= 8) {
    v18 = 0;
    v20 = (int16x8_t*)a3;
    v19 = (int32x4_t*)((char*)v14 + 96);
    do {
      v21 = *v20++;
      v18 += 8LL;
      v16 = vshll_high_n_s16(v21, 0xDu);
      *v19 = vshll_n_s16(COERCE_AS(int16x4_t, LANES128(v21).n128_u64[0]), 0xDu);
      v19[1] = v16;
      v19 += 2;
    } while (v18 < (unsigned int)(a5 - 7));
  }
  v22 = v11 & 0x7FFFFFFC;
  if ((int)v18 < a5) {
    v23 = (unsigned int)v18;
    v24 = (unsigned int)v18;
    for (i = ((_BYTE)a5 - (_BYTE)v18) & 7; i != 0;
         v19 = (int32x4_t*)((char*)v19 + 4)) {
      v26 = *(__int16*)(a3 + 2 * v24++);
      --i;
      LANES128(*(v19)).n128_u32[0] = v26 << 13;
    }
    if (v23 - (unsigned __int64)(unsigned int)a5 <= 0xFFFFFFFFFFFFFFF8LL) {
      v27 = (unsigned int)a5 - v24;
      v28 = (__int16*)(a3 + 2 * v24 + 8);
      do {
        v27 -= 8;
        LANES128(*(v19)).n128_u32[0] = *(v28 - 4) << 13;
        LANES128(*(v19)).n128_u32[1] = *(v28 - 3) << 13;
        LANES128(*(v19)).n128_u32[2] = *(v28 - 2) << 13;
        LANES128(*(v19)).n128_u32[3] = *(v28 - 1) << 13;
        LANES128(v19[1]).n128_u32[0] = *v28 << 13;
        LANES128(v19[1]).n128_u32[1] = v28[1] << 13;
        LANES128(v19[1]).n128_u32[2] = v28[2] << 13;
        v29 = v28[3];
        v28 += 8;
        LANES128(v19[1]).n128_u32[3] = v29 << 13;
        v19 += 2;
      } while (v27 != 0);
    }
  }
  v30 = (char*)v17 - 4 * (unsigned int)v22;
  PSEUDO_LOW_LANE128(v16, n128_u32, v12 << 15);
  v31 = 4LL * ((int)v22 + a5);
  v133_.v133 = v16;
  v32 = (char*)&v133_.v133 - ((v31 + 15) & 0xFFFFFFFFFFFFFFF0LL);
  LANES128(v19[5]).n128_u64[0] = 0;
  LANES128(v19[5]).n128_u64[1] = 0;
  LANES128(v19[4]).n128_u64[0] = 0;
  LANES128(v19[4]).n128_u64[1] = 0;
  LANES128(v19[3]).n128_u64[0] = 0;
  LANES128(v19[3]).n128_u64[1] = 0;
  LANES128(v19[2]).n128_u64[0] = 0;
  LANES128(v19[2]).n128_u64[1] = 0;
  LANES128(v19[1]).n128_u64[0] = 0;
  LANES128(v19[1]).n128_u64[1] = 0;
  LANES128(*(v19)).n128_u64[0] = 0;
  LANES128(*(v19)).n128_u64[1] = 0;
  memset_plt((void*)v32, nullptr, v31, v15),
      v15 = COERCE_AS(__typeof__(v15),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
  LANES64(v33).n64_u64[0] = LANES128(v133_.v133).n128_u64[0];
  v34 = a6 + a5;
  v35 = v133_.v134;
  v36 = (_OWORD*)((char*)v14 + 84);
  v37 = v22;
  if (a6 + a5 <= 1) {
    v38 = 1;
  }
  else {
    v38 = a6 + a5;
  }
  do {
    v40 = v37 - 8;
    v41 = (int64x2_t*)((char*)&v135_.v135 + 8 * v37 - 64);
    result = (int64x2_t*)((char*)&v135_.v135 + 8 * v37 - 32);
    v43 = *v41;
    v42 = v41[1];
    v45 = *result;
    v44 = result[1];
    if (v34 < 2) {
      v46 = 0;
      v47 = (__typeof__(v47)){0};
      v48 = (__typeof__(v48)){0};
      if ((v38 & 1) == 0) {
        goto LABEL_15;
      }
    LABEL_23:
      v72 = &v30[4 * v46];
      v73 = *(int32x4_t*)&v72[4 * v40];
      *(_DWORD*)&v32[4 * v46] = LANES128(v47).n128_u32[0];
      v74 = vmull_s32(COERCE_AS(int32x2_t, LANES128(v47).n128_u64[0]),
                      COERCE_AS(int32x2_t, LANES128(v73).n128_u64[0]));
      v42 = vsraq_n_s64(v42, vmull_high_s32(v47, v73), 0x10u);
      v75 = *(int32x4_t*)&v72[4 * v37 - 16];
      v43 = vsraq_n_s64(v43, v74, 0x10u);
      v45 = vsraq_n_s64(
          v45,
          vmull_s32(COERCE_AS(int32x2_t, LANES128(v48).n128_u64[0]),
                    COERCE_AS(int32x2_t, LANES128(v75).n128_u64[0])),
          0x10u);
      v44 = vsraq_n_s64(v44, vmull_high_s32(v48, v75), 0x10u);
      goto LABEL_15;
    }
    v47 = (__typeof__(v47)){0};
    v48 = (__typeof__(v48)){0};
    v49 = (_OWORD*)((char*)v17 + 4);
    v50 = 0;
    v51 = v32 + 4;
    v52 = v36;
    v53 = (__typeof__(v53)){0};
    v54 = (__typeof__(v54)){0};
    do {
      v55 = *(int32x4_t*)((char*)v52 - 20);
      v50 -= 2;
      v56 = vmull_s32(COERCE_AS(int32x2_t, LANES128(v47).n128_u64[0]),
                      COERCE_AS(int32x2_t, LANES128(v55).n128_u64[0]));
      v57 = vsraq_n_s64(v42, vmull_high_s32(v47, v55), 0x10u);
      v58 = *(int32x4_t*)((char*)v52 - 4);
      v59 = vsraq_n_s64(v43, v56, 0x10u);
      v60 = vmull_s32(COERCE_AS(int32x2_t, LANES128(v48).n128_u64[0]),
                      COERCE_AS(int32x2_t, LANES128(v58).n128_u64[0]));
      v61 = vsraq_n_s64(v44, vmull_high_s32(v48, v58), 0x10u);
      v62 = *(int8x16_t*)((char*)v49 - 4);
      v63 = vsraq_n_s64(v45, v60, 0x10u);
      v64 = vextq_s8(v47, v48, 4u);
      *(v51 - 1) = LANES128(v47).n128_u32[0];
      v65 = vextq_s8(v48, v62, 4u);
      v66 = vaddq_s32(vqdmulhq_lane_s32(vsubq_s32(v47, v64), v33, 0), v53);
      v67 = vaddq_s32(vqdmulhq_lane_s32(vsubq_s32(v48, v65), v33, 0), v54);
      v68 = *((int32x4_t*)v52 - 1);
      v42 = vsraq_n_s64(v57, vmull_high_s32(v66, v68), 0x10u);
      v69 = *(int32x4_t*)v52;
      v52 = (_OWORD*)((char*)v52 + 8);
      v43 = vsraq_n_s64(
          v59,
          vmull_s32(COERCE_AS(int32x2_t, LANES128(v66).n128_u64[0]),
                    COERCE_AS(int32x2_t, LANES128(v68).n128_u64[0])),
          0x10u);
      v70 = vmull_s32(COERCE_AS(int32x2_t, LANES128(v67).n128_u64[0]),
                      COERCE_AS(int32x2_t, LANES128(v69).n128_u64[0]));
      v44 = vsraq_n_s64(v61, vmull_high_s32(v67, v69), 0x10u);
      v71 = *(int8x16_t*)v49;
      v49 = (_OWORD*)((char*)v49 + 8);
      v45 = vsraq_n_s64(v63, v70, 0x10u);
      v53 = vextq_s8(v66, v67, 4u);
      v54 = vextq_s8(v67, v71, 4u);
      *v51 = LANES128(v66).n128_u32[0];
      v51 += 2;
      v47 = vaddq_s32(vqdmulhq_lane_s32(vsubq_s32(v66, v53), v33, 0), v64);
      v48 = vaddq_s32(vqdmulhq_lane_s32(vsubq_s32(v67, v54), v33, 0), v65);
    } while (-(__int64)(v38 & 0x7FFFFFFE) != v50);
    v46 = -v50;
    if ((v38 & 1) != 0) {
      goto LABEL_23;
    }
  LABEL_15:
    v36 -= 2;
    *v41 = v43;
    v41[1] = v42;
    v17 = v32;
    *result = v45;
    result[1] = v44;
    v39 = v37 > 0xC;
    v37 -= 8LL;
  } while (v39);
  if (v40 != 0) {
    v76 = (__typeof__(v76)){0};
    v77 = a6 + a5;
    if ((v34 & 1) != 0) {
      v81 = *(int8x16_t*)v32;
      *(_DWORD*)v32 = 0;
      v32 += 4;
      v30 += 4;
      v34 = a6 + a5 - 1;
      v78 = vextq_s8(COERCE_AS(int8x16_t, 0), v81, 4u);
      v76 = vqdmulhq_lane_s32(vnegq_s32(v78), v33, 0);
      v80 = v135_.v135;
      v79 = v135_.v136;
      if (v77 == 1) {
        goto LABEL_30;
      }
    }
    else {
      v78 = (__typeof__(v78)){0};
      v80 = v135_.v135;
      v79 = v135_.v136;
      if (v77 == 1) {
        goto LABEL_30;
      }
    }
    do {
      v34 -= 2;
      v82 = vsraq_n_s64(v79, vmull_high_s32(v76, *(int32x4_t*)v30), 0x10u);
      v83 =
          vsraq_n_s64(v80,
                      vmull_s32(COERCE_AS(int32x2_t, LANES128(v76).n128_u64[0]),
                                *(int32x2_t*)v30),
                      0x10u);
      v84 = vextq_s8(v76, *(int8x16_t*)v32, 4u);
      v85 = vaddq_s32(vqdmulhq_lane_s32(vsubq_s32(v76, v84), v33, 0), v78);
      v86 = *(int32x4_t*)(v30 + 4);
      v30 += 8;
      v87 = vmull_s32(COERCE_AS(int32x2_t, LANES128(v85).n128_u64[0]),
                      COERCE_AS(int32x2_t, LANES128(v86).n128_u64[0]));
      v79 = vsraq_n_s64(v82, vmull_high_s32(v85, v86), 0x10u);
      v88 = *(int8x16_t*)(v32 + 4);
      *(_DWORD*)v32 = LANES128(v76).n128_u32[0];
      *((_DWORD*)v32 + 1) = LANES128(v85).n128_u32[0];
      v32 += 8;
      v80 = vsraq_n_s64(v83, v87, 0x10u);
      v78 = vextq_s8(v85, v88, 4u);
      v76 = vaddq_s32(vqdmulhq_lane_s32(vsubq_s32(v85, v78), v33, 0), v84);
    } while (v34 != 0);
  LABEL_30:
    v135_.v135 = v80;
    v135_.v136 = v79;
  }
  v89 = a5 - 8;
  if (a5 >= 8) {
    v93 = (v89 >> 3) + 1;
    v94 = v93 & 3;
    if (v89 >= 0x18) {
      v95 = (__typeof__(v95)){0};
      v97 = v93 & 0x3FFFFFFC;
      v96 = a3;
      do {
        v97 -= 4;
        v98 = vmlal_high_s16(vmull_s16(*(int16x4_t*)v96, *(int16x4_t*)v96),
                             *(int16x8_t*)v96, *(int16x8_t*)v96);
        v99 = vmlal_high_s16(
            vmull_s16(*(int16x4_t*)(v96 + 16), *(int16x4_t*)(v96 + 16)),
            *(int16x8_t*)(v96 + 16), *(int16x8_t*)(v96 + 16));
        v100 = vaddw_high_s32(
            vaddw_s32(vaddw_high_s32(
                          vaddw_s32(v95, COERCE_AS(int32x2_t,
                                                   LANES128(v98).n128_u64[0])),
                          v98),
                      COERCE_AS(int32x2_t, LANES128(v99).n128_u64[0])),
            v99);
        v101 = *(int16x8_t*)(v96 + 32);
        v102 = *(int16x8_t*)(v96 + 48);
        v96 += 64;
        v103 = vmlal_high_s16(
            vmull_s16(COERCE_AS(int16x4_t, LANES128(v101).n128_u64[0]),
                      COERCE_AS(int16x4_t, LANES128(v101).n128_u64[0])),
            v101, v101);
        v104 = vmlal_high_s16(
            vmull_s16(COERCE_AS(int16x4_t, LANES128(v102).n128_u64[0]),
                      COERCE_AS(int16x4_t, LANES128(v102).n128_u64[0])),
            v102, v102);
        v95 = vaddw_high_s32(
            vaddw_s32(
                vaddw_high_s32(
                    vaddw_s32(v100,
                              COERCE_AS(int32x2_t, LANES128(v103).n128_u64[0])),
                    v103),
                COERCE_AS(int32x2_t, LANES128(v104).n128_u64[0])),
            v104);
      } while (v97 != 0);
    }
    else {
      v95 = (__typeof__(v95)){0};
      v96 = a3;
    }
    for (; v94 != 0;
         v95 = vaddw_high_s32(
             vaddw_s32(v95, COERCE_AS(int32x2_t, LANES128(v106).n128_u64[0])),
             v106)) {
      v105 = *(int16x8_t*)v96;
      v96 += 16;
      --v94;
      v106 = vmlal_high_s16(
          vmull_s16(COERCE_AS(int16x4_t, LANES128(v105).n128_u64[0]),
                    COERCE_AS(int16x4_t, LANES128(v105).n128_u64[0])),
          v105, v105);
    }
    v90 = (v89 & 0xFFFFFFF8) + 8;
    v91 = v90 - a5;
    v92 = LANES128(v95).n128_u64[0] +
          LANES128_OF(vextq_s8(v95, v95, 8u)).n128_u64[0];
    if ((int)v90 < a5) {
      goto LABEL_41;
    }
  }
  else {
    v90 = 0;
    v91 = -a5;
    v92 = LANES128_OF(
              vextq_s8(COERCE_AS(int8x16_t, 0), COERCE_AS(int8x16_t, 0), 8u))
              .n128_u64[0];
    if (a5 <= 0) {
      goto LABEL_46;
    }
  LABEL_41:
    v107 = v90;
    for (j = ((_BYTE)a5 - (_BYTE)v90) & 7; j != 0;
         v92 += v109 * (__int64)v109) {
      v109 = *(__int16*)(a3 + 2 * v107++);
      --j;
    }
    if (v91 <= 0xFFFFFFF8) {
      v110 = (__int16*)(a3 + 2 * v107 + 8);
      do {
        LODWORD(v107) = v107 + 8;
        v111 = v92 + *(v110 - 4) * (__int64)*(v110 - 4) +
               *(v110 - 3) * (__int64)*(v110 - 3) +
               *(v110 - 2) * (__int64)*(v110 - 2) +
               *(v110 - 1) * (__int64)*(v110 - 1) + *v110 * (__int64)*v110 +
               v110[1] * (__int64)v110[1] + v110[2] * (__int64)v110[2];
        v112 = v110[3];
        v110 += 8;
        v92 = v111 + v112 * (__int64)v112;
      } while (a5 > (int)v107);
    }
  }
LABEL_46:
  v113 = v92 << 10;
  v114 = (unsigned int)(v92 >> 22);
  v115 = 0;
  v116 = &LANES128(v135_.v135).n128_u64[v22];
  v117 = __clz(v114);
  *v116 = v113;
  v118 = &v116[-a6];
  v119 = __clz(v113) + 32;
  if (v114 == 0) {
    v117 = v119;
  }
  if (v117 <= 0xD) {
    v120 = 13;
  }
  else {
    v120 = v117;
  }
  if (v120 >= 0x37) {
    v121 = 55;
  }
  else {
    v121 = v120;
  }
  *v35 = 25 - v121;
  v122 = vdupq_n_s64(v121 - 35);
  v123 = (int32x4_t*)(a1 + 4LL * (unsigned int)a6 - 12);
  v124 = -1;
  do {
    v125 = *(int64x2_t*)v118;
    v126 = *((int64x2_t*)v118 + 1);
    v118 += 4;
    v115 += 4;
    v124 += 4;
    v127 = vshlq_s64(v125, v122);
    v128 = vshlq_s64(v126, v122);
    *v123-- = vuzp1q_s32(vextq_s8(v128, v128, 8u), vextq_s8(v127, v127, 8u));
  } while (v115 <= a6 - 3);
  if (v117 <= 0x22) {
    if (a6 >= (int)v115) {
      v131 = a6 - v115;
      do {
        v132 = *v118++;
        ++v124;
        *(_DWORD*)(a1 + 4LL * v131--) = v132 >> (35 - (unsigned __int8)v121);
      } while (a6 > v124);
    }
  }
  else if (a6 >= (int)v115) {
    v129 = a6 - v115;
    do {
      v130 = *v118++;
      ++v124;
      *(_DWORD*)(a1 + 4LL * v129--) = v130 << ((unsigned __int8)v121 - 35);
    } while (a6 > v124);
  }
  return result;
}

const __int16* opus_326600(const __int16* result, _QWORD* a2, int32x4_t* a3,
                           int a4)
{
  int32x4_t v4;
  int8x16_t* v5;
  unsigned __int64 v6;
  int8x8_t v7;
  int v8;
  unsigned int v9;
  int v10;
  int8x16_t v11;
  int8x16_t v12;
  int16x8_t v13;
  int16x4_t v14;
  int32x4_t v15;
  int16x4_t v16;
  int16x4_t v17;
  int i;
  int8x8_t v19;
  unsigned __int32 v20;
  int v21;
  int8x8_t v22;
  int32x4_t v23;
  int8x8_t v24;
  int8x8_t v25;
  int32x4_t v26;
  int8x8_t v27;
  int8x8_t v28;
  int32x4_t v29;
  int8x8_t v30;
  int8x8_t v31;
  int32x4_t v32;
  int8x8_t v33;
  int8x8_t v34;
  int32x4_t v35;
  int8x8_t v36;
  int8x8_t v37;
  int32x4_t v38;
  int8x8_t v39;
  int8x8_t v40;
  const __int16* v41;
  int32x4_t v42;
  int8x8_t v43;
  int8x8_t v44;

  v4 = *a3;
  v6 = *a2;
  v5 = (int8x16_t*)(a2 + 1);
  PSEUDO_LOW_LANE64(v7, n64_u64, v6);
  if (a4 >= 8) {
    v10 = 8;
    do {
      v11 = *v5++;
      v12 = v11;
      v13 = *(int16x8_t*)result;
      result += 8;
      v10 += 8;
      LANES64(v14).n64_u64[0] =
          LANES64_OF(
              vext_s8(v7, COERCE_AS(int8x8_t, LANES128(v12).n128_u64[0]), 2u))
              .n64_u64[0];
      v15 = vmlal_lane_s16(v4, v7,
                           COERCE_AS(int16x4_t, LANES128(v13).n128_u64[0]), 0);
      LANES64(v16).n64_u64[0] =
          LANES64_OF(
              vext_s8(v7, COERCE_AS(int8x8_t, LANES128(v12).n128_u64[0]), 4u))
              .n64_u64[0];
      LANES64(v17).n64_u64[0] =
          LANES64_OF(
              vext_s8(v7, COERCE_AS(int8x8_t, LANES128(v12).n128_u64[0]), 6u))
              .n64_u64[0];
      LANES64(v7).n64_u64[0] = LANES128_OF(vextq_s8(v12, v12, 8u)).n128_u64[0];
      v4 = vmlal_laneq_s16(
          vmlal_lane_s16(
              vmlal_laneq_s16(
                  vmlal_lane_s16(
                      vmlal_laneq_s16(
                          vmlal_lane_s16(
                              vmlal_laneq_s16(
                                  v15,
                                  COERCE_AS(int16x4_t,
                                            LANES128(v12).n128_u64[0]),
                                  v13, 4),
                              v14,
                              COERCE_AS(int16x4_t, LANES128(v13).n128_u64[0]),
                              1),
                          COERCE_AS(
                              int16x4_t,
                              LANES128_OF(vextq_s8(v12, v12, 2u)).n128_u64[0]),
                          v13, 5),
                      v16, COERCE_AS(int16x4_t, LANES128(v13).n128_u64[0]), 2),
                  COERCE_AS(int16x4_t,
                            LANES128_OF(vextq_s8(v12, v12, 4u)).n128_u64[0]),
                  v13, 6),
              v17, COERCE_AS(int16x4_t, LANES128(v13).n128_u64[0]), 3),
          COERCE_AS(int16x4_t, LANES128_OF(vextq_s8(v12, v12, 6u)).n128_u64[0]),
          v13, 7);
    } while (v10 <= a4);
    v8 = a4 & 0x7FFFFFF8;
    v9 = (a4 & 0x7FFFFFF8) - a4;
    if ((a4 & 0x7FFFFFF8) >= a4) {
      goto LABEL_12;
    }
  }
  else {
    v8 = 0;
    v9 = -a4;
    if (a4 <= 0) {
      goto LABEL_12;
    }
  }
  for (i = a4 & 7; i != 0;
       LANES64(v7).n64_u64[0] = LANES64_OF(vext_s8(v7, v19, 2u)).n64_u64[0]) {
    LANES64(v19).n64_u64[0] = LANES64_OF(vld1_dup_s16(result++)).n64_u64[0];
    v20 = LANES128(*(v5)).n128_u16[0];
    v5 = (int8x16_t*)((char*)v5 + 2);
    ++v8;
    --i;
    v4 = vmlal_s16(v4, v7, v19);
    PSEUDO_LOW_LANE64(v19, n64_u32, v20);
  }
  if (v9 <= 0xFFFFFFF8) {
    v21 = a4 - v8;
    do {
      LANES64(v22).n64_u64[0] = LANES64_OF(vld1_dup_s16(result)).n64_u64[0];
      v21 -= 8;
      v23 = vmlal_s16(v4, v7, v22);
      PSEUDO_LOW_LANE64(v22, n64_u16, LANES128(*(v5)).n128_u16[0]);
      LANES64(v24).n64_u64[0] = LANES64_OF(vext_s8(v7, v22, 2u)).n64_u64[0];
      LANES64(v25).n64_u64[0] = LANES64_OF(vld1_dup_s16(result + 1)).n64_u64[0];
      v26 = vmlal_s16(v23, v24, v25);
      PSEUDO_LOW_LANE64(v25, n64_u16, LANES128(*(v5)).n128_u16[1]);
      LANES64(v27).n64_u64[0] = LANES64_OF(vext_s8(v24, v25, 2u)).n64_u64[0];
      LANES64(v28).n64_u64[0] = LANES64_OF(vld1_dup_s16(result + 2)).n64_u64[0];
      v29 = vmlal_s16(v26, v27, v28);
      PSEUDO_LOW_LANE64(v28, n64_u16, LANES128(*(v5)).n128_u16[2]);
      LANES64(v30).n64_u64[0] = LANES64_OF(vext_s8(v27, v28, 2u)).n64_u64[0];
      LANES64(v31).n64_u64[0] = LANES64_OF(vld1_dup_s16(result + 3)).n64_u64[0];
      v32 = vmlal_s16(v29, v30, v31);
      PSEUDO_LOW_LANE64(v31, n64_u16, LANES128(*(v5)).n128_u16[3]);
      LANES64(v33).n64_u64[0] = LANES64_OF(vext_s8(v30, v31, 2u)).n64_u64[0];
      LANES64(v34).n64_u64[0] = LANES64_OF(vld1_dup_s16(result + 4)).n64_u64[0];
      v35 = vmlal_s16(v32, v33, v34);
      PSEUDO_LOW_LANE64(v34, n64_u16, LANES128(*(v5)).n128_u16[4]);
      LANES64(v36).n64_u64[0] = LANES64_OF(vext_s8(v33, v34, 2u)).n64_u64[0];
      LANES64(v37).n64_u64[0] = LANES64_OF(vld1_dup_s16(result + 5)).n64_u64[0];
      v38 = vmlal_s16(v35, v36, v37);
      PSEUDO_LOW_LANE64(v37, n64_u16, LANES128(*(v5)).n128_u16[5]);
      LANES64(v39).n64_u64[0] = LANES64_OF(vext_s8(v36, v37, 2u)).n64_u64[0];
      LANES64(v40).n64_u64[0] = LANES64_OF(vld1_dup_s16(result + 6)).n64_u64[0];
      v41 = result + 7;
      result += 8;
      v42 = vmlal_s16(v38, v39, v40);
      PSEUDO_LOW_LANE64(v40, n64_u16, LANES128(*(v5)).n128_u16[6]);
      LANES64(v43).n64_u64[0] = LANES64_OF(vext_s8(v39, v40, 2u)).n64_u64[0];
      LANES64(v44).n64_u64[0] = LANES64_OF(vld1_dup_s16(v41)).n64_u64[0];
      v4 = vmlal_s16(v42, v43, v44);
      PSEUDO_LOW_LANE64(v44, n64_u16, LANES128(*(v5)).n128_u16[7]);
      ++v5;
      LANES64(v7).n64_u64[0] = LANES64_OF(vext_s8(v43, v44, 2u)).n64_u64[0];
    } while (v21 != 0);
  }
LABEL_12:
  *a3 = v4;
  return result;
}

#pragma GCC visibility pop
