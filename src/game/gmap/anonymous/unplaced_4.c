#include "decomp/pseudo_helpers.h"

#include "decomp/pseudo_float.h"

#pragma GCC visibility push(hidden)

__int64* GameRoutine_1993840(__int64);
__int64* PrimitiveDrawManager_1994180(__int64* result);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 memcpy(__int64, __int64, unsigned __int64);
extern __int128 GameData_1a83090;
extern __int64* GameData_212c780;
extern __int64 fw_memory_g_heap_manager_ptr;
float32x4_t* GameRoutine_1994460(float32x4_t* result);
void __attribute__((noreturn)) GameRoutine_12680d0();
void __attribute__((noreturn)) GameRoutine_60a210();
void nn_mem_StandardAllocator_Free(__int64, __int64);
__int64* game_gmap_anonymous_168a340(__int64**** a1, _QWORD* a2, float a3);

__int64* game_gmap_anonymous_168a340(__int64**** a1, _QWORD* a2, float a3)
{
  __int64*** v3;
  __int64*** v4;
  __int64**** v5;
  __int64** v7;
  __int64 v8;
  __int64*** v9;
  __int64** v10;
  __int64* v11;
  __int64 v12;
  float32x4_t* v13;
  int8x16_t v14;
  __int64** v15;
  float v16;
  __int64 v17;
  __int64* v18;
  __int64* v19;
  float v20;
  float32x4_t v21;
  float32x4_t v22;
  float32x4_t v23;
  __int64 v24;
  float32x4_t** v25;
  float32x4_t** v26;
  __int64** v27;
  float32x4_t* v28;
  __int64 v29;
  __int64** v30;
  unsigned __int64 v31;
  __int64 v32;
  __int64*** v33;
  float32x2_t* v34;
  __int128 v35;
  float v36;
  float v37;
  __int128 v38;
  unsigned int v39;
  float32x2_t v40;
  float v41;
  float v42;
  float32x4_t v43;
  float32x4_t v44;
  float v45;
  float v46;
  float32x4_t v47;
  float32x4_t* v48;
  float32x4_t v49;
  float v50;
  float32x4_t v51;
  float v52;
  float v53;
  float32x2_t v54;
  float32x2_t v55;
  float v56;
  float v57;
  int8x16_t v58;
  float v59;
  __int64** v60;
  float32x4_t v61;
  __int64* v62;
  float32x4_t v63;
  float v64;
  __int64 v65;
  int v66;
  int v67;
  float32x4_t v68;
  int8x16_t v69;
  float32x4_t v70;
  float32x4_t v71;
  float32x4_t v72;
  float32x2_t v73;
  float v74;
  float32x2_t v75;
  __int128 v76;
  __int64 v77;
  __int64 v78;
  __int64 v79;
  __int64* v80;
  __int64 v81;
  int v82;
  int v83;
  __int64 v84;
  __int64 v85;
  __int64* v86;
  float v87;
  float v88;
  __int64 v89;
  int v90;
  int v91;
  __int64 v92;
  __int64 v93;
  __int64* v94;
  __int64 v95;
  int v96;
  int v97;
  __int64 v98;
  __int64 v99;
  __int64 v100;
  __int64** v101;
  float v102;
  float v103;
  unsigned __int64 v104;
  unsigned int v105;
  float v106;
  float v107;
  float v108;
  float v109;
  float v110;
  int8x16_t v111;
  unsigned __int64 v112;
  float v113;
  float v114;
  __int64* v115;
  float32x4_t v116;
  __int64 v117;
  int v118;
  int v119;
  float32x4_t v120;
  float32x4_t v121;
  int8x16_t v122;
  float32x4_t v123;
  float32x4_t v124;
  float32x4_t v125;
  float v126;
  float v127;
  float32x2_t v128;
  unsigned __int64 v129;
  __int128 v130;
  __int64 v131;
  __int64 v132;
  __int64 v133;
  __int64* v134;
  __int64 v135;
  int v136;
  int v137;
  __int64 v138;
  __int64 v139;
  __int64 v140;
  __int64* v141;
  float v142;
  float v143;
  __int64 v144;
  int v145;
  int v146;
  __int64 v147;
  __int64 v148;
  __int64 v149;
  __int64* v150;
  __int64 v151;
  int v152;
  int v153;
  __int64 v154;
  __int64 v155;
  __int64 v156;
  __int64** v157;
  __int64** v158;
  __int64 v159;
  unsigned __int64 v160;
  __int64 v161;
  unsigned __int64 v162;
  __int64 v163;
  unsigned __int64 v164;
  __int64 v165;
  __int64 v166;
  unsigned __int64 v167;
  __int64 v168;
  __int64 v169;
  float32x4_t v171;
  float32x4_t v172;
  float32x4_t v173;
  __int64* v174;
  __int64*** v175;
  __int64**** v176;

  v3 = *a1;
  v4 = a1[1];
  v5 = a1;
  v7 = (*a1)[1];
  GameRoutine_1993840(****a1);
  v8 = ***v3;
  *(_DWORD*)(v8 + 17328) = *((_DWORD*)v7 + 57);
  v9 = *(__int64****)v8;
  *((_DWORD*)v9 + 4351) = 3;
  v10 = *v9;
  *((_DWORD*)v10 + 4327) = 1;
  v11 = *v10;
  *((_BYTE*)v11 + 17395) = 1;
  v12 = *v11;
  v13 = *(float32x4_t**)v12;
  *(_DWORD*)(v12 + 17296) = 0;
  GameRoutine_1994460(v13);
  v15 = v4[48];
  v16 = a3;
  v4[49] = v15;
  v17 = *(_QWORD*)(*GameData_212c780 + 8);
  v19 = *(__int64**)(v17 + 48);
  v18 = *(__int64**)(v17 + 56);
  if (v19 != v18) {
    v174 = *(__int64**)(v17 + 56);
    v175 = v4;
    v176 = v5;
    v20 = -0x1.0000000000000p-1f;
    LANES128(v21).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(COERCE_AS(int8x16_t, GameData_1a83090),
                             COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
            .n64_u64[0];
    LANES128(v22).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(COERCE_AS(int8x16_t, GameData_1a83090),
                             COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
            .n64_u64[0];
    *(int8x8_t*)&LANES128(v21).n128_i8[8] =
        vqtbl1_s8(COERCE_AS(int8x16_t, GameData_1a83090),
                  COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
    *(int8x8_t*)&LANES128(v22).n128_i8[8] =
        vqtbl1_s8(COERCE_AS(int8x16_t, GameData_1a83090),
                  COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
    v23 = v22;
    v172 = v22;
    v173 = v21;
    v171 = v22;
    while (1) {
      v24 = *v19;
      if (*(_BYTE*)(*v19 + 176) != 1 && *(float*)(v24 + 288) != 0x0.0p+0f) {
        break;
      }
    LABEL_5:
      if (++v19 == v18) {
        return PrimitiveDrawManager_1994180((__int64*)***v5[3]);
      }
    }
    v25 = *(float32x4_t***)(v24 + 48);
    v26 = *(float32x4_t***)(v24 + 56);
    if (v25 == v26) {
    LABEL_58:
      v158 = v4[50];
      if (v15 < v158) {
        *v15++ = (__int64*)v24;
      }
      else {
        v159 = (__int64)v4[48];
        v160 = (unsigned __int64)v15 - v159;
        v161 = ((__int64)v15 - v159) >> 3;
        v162 = v161 + 1;
        if ((unsigned __int64)(v161 + 1) >> 61 != 0) {
          GameRoutine_12680d0();
        }
        v163 = (__int64)v158 - v159;
        if (v163 >> 2 > v162) {
          v162 = v163 >> 2;
        }
        if ((unsigned __int64)v163 >= 0x7FFFFFFFFFFFFFF8LL) {
          v164 = 0x1FFFFFFFFFFFFFFFLL;
        }
        else {
          v164 = v162;
        }
        if (v164 != 0) {
          if (v164 >> 61 != 0) {
            GameRoutine_60a210();
          }
          v165 = v24;
          v166 = fw_memory_HeapManager_Allocate(
              *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v164, 16, 0);
          v24 = v165;
        }
        else {
          v166 = 0;
        }
        v167 = v166 + 8 * v164;
        v168 = v166 + v160 - 8 * v161;
        *(_QWORD*)(v166 + v160) = v24;
        v15 = (__int64**)(v166 + v160 + 8);
        memcpy(v168, v159, v160);
        v175[48] = (__int64**)v168;
        v175[49] = v15;
        v4 = v175;
        v175[50] = (__int64**)v167;
        if (v159 != 0) {
          v169 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v169 = 56;
          }
          nn_mem_StandardAllocator_Free(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v169, v159);
        }
        v16 = a3;
        v22 = v172;
        v21 = v173;
        v20 = -0x1.0000000000000p-1f;
        v23 = v171;
        v5 = v176;
        v18 = v174;
      }
      v4[49] = v15;
      goto LABEL_5;
    }
    while (1) {
      v28 = *v25;
      v29 = LANES128(*((*v25))).n128_i64[1];
      if (*(_BYTE*)(v29 + 176) != 1 && *(float*)(v29 + 288) != 0x0.0p+0f) {
        v27 = v4[48];
        v30 = v4[49];
        if (v27 != v30) {
          v31 = (char*)v30 - (char*)v27 - 8;
          if ((~(_BYTE)v31 & 0x18) != 0) {
            v32 = ((unsigned __int8)((unsigned int)v31 >> 3) + 1) & 3;
            while (*v27 != (__int64*)v29) {
              ++v27;
              if (--v32 == 0) {
                goto LABEL_20;
              }
            }
          }
          else {
          LABEL_20:
            if (v31 < 0x18) {
            LABEL_21:
              v33 = v5[2];
              v34 = (float32x2_t*)*v33;
              v35 = *(_OWORD*)(LANES128(*(v28)).n128_u64[0] + 32);
              v36 = *((float*)*v33 + 70);
              LANES64(v40).n64_f32[0] =
                  (float)(*(float*)&v35 * v36) + 0x1.e000000000000p+9f;
              v37 = (float)(v36 * *((float*)&v35 + 2)) + 0x1.0e00000000000p+9f;
              v38 = *(_OWORD*)(v29 + 32);
              v39 = 1;
              LANES64(v40).n64_f32[1] = v37;
              do {
                v41 = (float)v39 / 0x1.4000000000000p+3f;
                if (v41 >= 0x1.0000000000000p-1f) {
                  v44 = v28[5];
                  v47 = v28[6];
                  v43 = v28[4];
                  v42 = (float)(v41 + v20) + (float)(v41 + v20);
                  v45 = 0x1.0000000000000p+0f - v42;
                  v48 = (float32x4_t*)(LANES128(*(v28)).n128_u64[1] + 32);
                  v46 = v45 * v45;
                }
                else {
                  v42 = v41 + v41;
                  v43 = v28[2];
                  v44 = v28[3];
                  v45 = 0x1.0000000000000p+0f - (float)(v41 + v41);
                  v46 = v45 * v45;
                  v47 = *(float32x4_t*)(LANES128(*(v28)).n128_u64[0] + 32);
                  v48 = v28 + 6;
                }
                v49 = vaddq_f32(
                    vaddq_f32(
                        vmulq_n_f32(v47, v45 * v46),
                        vmulq_n_f32(
                            v43,
                            v42 *
                                (float)(v45 *
                                        (float)(v45 * 0x1.8000000000000p+1f)))),
                    vmulq_n_f32(
                        v44,
                        v42 * (float)(v42 *
                                      (float)(v45 * 0x1.8000000000000p+1f))));
                v50 = LANES64(v34[35]).n64_f32[0];
                v51 =
                    vaddq_f32(v49, vmulq_n_f32(*v48, v42 * (float)(v42 * v42)));
                v52 = (float)(LANES128(v51).n128_f32[0] * v50) +
                      0x1.e000000000000p+9f;
                v53 = (float)(v50 * LANES128(v51).n128_f32[2]) +
                      0x1.0e00000000000p+9f;
                LANES64(v54).n64_u64[0] = LANES64(v34[36]).n64_u64[0];
                LANES64(v55).n64_u64[0] =
                    LANES64_OF(vadd_f32(v40, v54)).n64_u64[0];
                v56 = LANES64(v55).n64_f32[1];
                LANES128(v14).n128_f32[0] =
                    (float)(v52 + LANES64(v54).n64_f32[0]) -
                    LANES64(v55).n64_f32[0];
                v58 = v14;
                v57 = (float)(v53 + LANES64(v54).n64_f32[1]) -
                      LANES64(v55).n64_f32[1];
                LANES128(v58).n128_f32[1] = v57;
                if (LANES128(v14).n128_f32[0] != 0x0.0p+0f ||
                    (LANES128(v43).n128_u64[0] = LANES128(v58).n128_u64[0],
                     v57 != 0x0.0p+0f)) {
                  v59 = sqrtf((float)(PSEUDO_UNFUSED(v57 * v57)) +
                              (float)(LANES128(v14).n128_f32[0] *
                                      LANES128(v14).n128_f32[0]));
                  LANES128(v43).n128_f32[0] = LANES128(v14).n128_f32[0] / v59;
                  LANES128(v43).n128_f32[1] = v57 / v59;
                }
                v60 = v33[1];
                LANES128(v61).n128_u64[0] =
                    LANES64_OF(vqtbl1_s8(v58, COERCE_AS(int8x8_t,
                                                        0x30201000B0A0908LL)))
                        .n64_u64[0];
                v62 = *v60;
                *(int8x8_t*)&LANES128(v61).n128_i8[8] =
                    vqtbl1_s8(v58, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
                LANES128(v63).n128_u64[0] =
                    LANES64_OF(vqtbl1_s8(v58, COERCE_AS(int8x8_t,
                                                        0xB0A090807060504LL)))
                        .n64_u64[0];
                v64 = (float)LANES64(v34[37]).n64_u8[0] / 0x1.fe00000000000p+7f;
                v65 = (*v60)[2342];
                v66 = *((_DWORD*)*v60 + 4800);
                v67 = *((_DWORD*)*v60 + 4320);
                *(int8x8_t*)&LANES128(v63).n128_i8[8] =
                    vqtbl1_s8(v58, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
                v68 = vmlsq_f32(vmulq_f32(v63, v23), v21, v61);
                v69 = vmulq_f32(v68, v68);
                LANES128(v69).n128_u64[0] =
                    LANES64_OF(
                        vadd_f32(
                            COERCE_AS(float32x2_t,
                                      LANES128_OF(vextq_s8(v69, v69, 8u))
                                          .n128_u64[0]),
                            COERCE_AS(float32x2_t, LANES128(v69).n128_u64[0])))
                        .n64_u64[0];
                LANES128(v69).n128_u64[0] =
                    LANES64_OF(
                        vpadd_f32(
                            COERCE_AS(float32x2_t, LANES128(v69).n128_u64[0]),
                            COERCE_AS(float32x2_t, LANES128(v69).n128_u64[0])))
                        .n64_u64[0];
                LANES128(v69).n128_u64[1] = LANES128(v69).n128_u64[0];
                v70 = vrsqrteq_f32(v69);
                v14 = vceqzq_f32(v69);
                v71 = vmulq_f32(v70, vrsqrtsq_f32(v70, vmulq_f32(v69, v70)));
                v72 = vbicq_s8(
                    vmulq_f32(
                        v68,
                        vmulq_f32(v71, vrsqrtsq_f32(v71, vmulq_f32(v69, v71)))),
                    v14);
                LANES128(v14).n128_u64[0] =
                    LANES64_OF(
                        vsub_f32(v55, COERCE_AS(float32x2_t,
                                                LANES128(v43).n128_u64[0])))
                        .n64_u64[0];
                *(_QWORD*)&v76 = *a2;
                LANES64(v73).n64_u64[0] = a2[1];
                *((_DWORD*)*v60 + 4800) = v66 + 1;
                v74 = v56 - LANES128(v43).n128_f32[1];
                LANES64(v75).n64_u64[0] =
                    LANES128_OF(vmulq_n_f32(v72, v16)).n128_u64[0];
                LANES64(v73).n64_u32[1] = vmuls_lane_f32(v64, v73, 1);
                *((float32x2_t*)&v76 + 1) = v73;
                if (v66 <= 262142) {
                  LODWORD(v77) =
                      LANES64_OF(vadd_f32(COERCE_AS(float32x2_t,
                                                    LANES128(v14).n128_u64[0]),
                                          v75))
                          .n64_u32[0];
                  v78 = v62[2392] + 40LL * (v66 + 1);
                  *((float*)&v77 + 1) = v74 + LANES64(v75).n64_f32[1];
                  *(_QWORD*)(v78 + 8) = 0;
                  *(_QWORD*)(v78 + 16) = 0;
                  *(_OWORD*)(v78 + 24) = v76;
                  *(_QWORD*)v78 = v77;
                  v79 = v65 + 1440LL * v67 +
                        4LL * *(int*)(v65 + 1440LL * v67 + 256);
                  ++*(_DWORD*)(v79 + 260);
                }
                v80 = *v60;
                v81 = (*v60)[2342];
                v82 = *((_DWORD*)*v60 + 4800);
                v83 = *((_DWORD*)*v60 + 4320);
                *((_DWORD*)*v60 + 4800) = v82 + 1;
                if (v82 <= 262142) {
                  LANES128(v14).n128_u32[0] =
                      LANES64_OF(vsub_f32(COERCE_AS(float32x2_t,
                                                    LANES128(v14).n128_u64[0]),
                                          v75))
                          .n64_u32[0];
                  v84 = v80[2392] + 40LL * (v82 + 1);
                  LANES128(v14).n128_f32[1] = v74 - LANES64(v75).n64_f32[1];
                  *(_QWORD*)(v84 + 8) = 0;
                  *(_QWORD*)(v84 + 16) = 0;
                  *(_OWORD*)(v84 + 24) = v76;
                  *(_QWORD*)v84 = LANES128(v14).n128_u64[0];
                  v85 = v81 + 1440LL * v83 +
                        4LL * *(int*)(v81 + 1440LL * v83 + 256);
                  ++*(_DWORD*)(v85 + 260);
                }
                v86 = *v60;
                v87 = (float)(v52 + LANES64(v54).n64_f32[0]) +
                      LANES128(v43).n128_f32[0];
                v88 = (float)(v53 + LANES64(v54).n64_f32[1]) +
                      LANES128(v43).n128_f32[1];
                v89 = (*v60)[2342];
                v90 = *((_DWORD*)*v60 + 4800);
                v91 = *((_DWORD*)*v60 + 4320);
                *((_DWORD*)*v60 + 4800) = v90 + 1;
                if (v90 <= 262142) {
                  LANES128(v43).n128_f32[0] = v87 - LANES64(v75).n64_f32[0];
                  v92 = v86[2392] + 40LL * (v90 + 1);
                  LANES128(v43).n128_f32[1] = v88 - LANES64(v75).n64_f32[1];
                  *(_QWORD*)(v92 + 8) = 0;
                  *(_QWORD*)(v92 + 16) = 0;
                  *(_OWORD*)(v92 + 24) = v76;
                  *(_QWORD*)v92 = LANES128(v43).n128_u64[0];
                  v93 = v89 + 1440LL * v91 +
                        4LL * *(int*)(v89 + 1440LL * v91 + 256);
                  ++*(_DWORD*)(v93 + 260);
                }
                v94 = *v60;
                v95 = v94[2342];
                v96 = *((_DWORD*)v94 + 4800);
                v97 = *((_DWORD*)v94 + 4320);
                *((_DWORD*)v94 + 4800) = v96 + 1;
                if (v96 <= 262142) {
                  *(float*)&v98 = v87 + LANES64(v75).n64_f32[0];
                  v99 = v94[2392] + 40LL * (v96 + 1);
                  *((float*)&v98 + 1) = v88 + LANES64(v75).n64_f32[1];
                  *(_QWORD*)(v99 + 8) = 0;
                  *(_QWORD*)(v99 + 16) = 0;
                  *(_OWORD*)(v99 + 24) = v76;
                  *(_QWORD*)v99 = v98;
                  v100 = v95 + 1440LL * v97 +
                         4LL * *(int*)(v95 + 1440LL * v97 + 256);
                  ++*(_DWORD*)(v100 + 260);
                }
                LANES64(v40).n64_u64[0] =
                    __PAIR64__(LODWORD(v53), LODWORD(v52));
                ++v39;
              } while (v39 != 10);
              v101 = v33[1];
              v102 = (float)(v36 * *((float*)&v38 + 2)) + 0x1.0e00000000000p+9f;
              v103 = (float)(*(float*)&v38 * v36) + 0x1.e000000000000p+9f;
              v104 = LANES64(v34[36]).n64_u64[0];
              v105 = LANES64(v34[37]).n64_u8[0];
              v106 = v52 + *(float*)&v104;
              v107 = v103 + *(float*)&v104;
              LANES128(v43).n128_f32[0] = v107 - v106;
              v108 = v53 + *((float*)&v104 + 1);
              v109 = v102 + *((float*)&v104 + 1);
              v111 = v43;
              v110 = v109 - v108;
              LANES128(v111).n128_f32[1] = v109 - v108;
              if ((float)(v107 - v106) != 0x0.0p+0f ||
                  (v112 = LANES128(v111).n128_u64[0], v110 != 0x0.0p+0f)) {
                v113 = sqrtf((float)(PSEUDO_UNFUSED(v110 * v110)) +
                             (float)(LANES128(v43).n128_f32[0] *
                                     LANES128(v43).n128_f32[0]));
                *(float*)&v112 = LANES128(v43).n128_f32[0] / v113;
                *((float*)&v112 + 1) = v110 / v113;
              }
              v114 = (float)v105;
              v115 = *v101;
              LANES128(v116).n128_u64[0] =
                  LANES64_OF(
                      vqtbl1_s8(v111, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
                      .n64_u64[0];
              v117 = (*v101)[2342];
              v118 = *((_DWORD*)*v101 + 4800);
              v119 = *((_DWORD*)*v101 + 4320);
              *(int8x8_t*)&LANES128(v116).n128_i8[8] =
                  vqtbl1_s8(v111, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
              LANES128(v120).n128_u64[0] =
                  LANES64_OF(
                      vqtbl1_s8(v111, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
                      .n64_u64[0];
              *(int8x8_t*)&LANES128(v120).n128_i8[8] =
                  vqtbl1_s8(v111, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
              v121 = vmlsq_f32(vmulq_f32(v22, v120), v21, v116);
              v122 = vmulq_f32(v121, v121);
              LANES128(v122).n128_u64[0] =
                  LANES64_OF(
                      vadd_f32(
                          COERCE_AS(float32x2_t,
                                    LANES128_OF(vextq_s8(v122, v122, 8u))
                                        .n128_u64[0]),
                          COERCE_AS(float32x2_t, LANES128(v122).n128_u64[0])))
                      .n64_u64[0];
              LANES128(v122).n128_u64[0] =
                  LANES64_OF(
                      vpadd_f32(
                          COERCE_AS(float32x2_t, LANES128(v122).n128_u64[0]),
                          COERCE_AS(float32x2_t, LANES128(v122).n128_u64[0])))
                      .n64_u64[0];
              LANES128(v122).n128_u64[1] = LANES128(v122).n128_u64[0];
              v123 = vrsqrteq_f32(v122);
              v124 = vmulq_f32(v123, vrsqrtsq_f32(v123, vmulq_f32(v122, v123)));
              v125 = vbicq_s8(
                  vmulq_f32(v121,
                            vmulq_f32(v124, vrsqrtsq_f32(
                                                v124, vmulq_f32(v122, v124)))),
                  vceqzq_f32(v122));
              v126 = v106 - *(float*)&v112;
              v127 = v108 - *((float*)&v112 + 1);
              *(_QWORD*)&v130 = *a2;
              LANES64(v128).n64_u64[0] = a2[1];
              *((_DWORD*)*v101 + 4800) = v118 + 1;
              v129 = LANES128_OF(vmulq_n_f32(v125, v16)).n128_u64[0];
              LANES64(v128).n64_u32[1] =
                  vmuls_lane_f32(v114 / 0x1.fe00000000000p+7f, v128, 1);
              *((float32x2_t*)&v130 + 1) = v128;
              if (v118 <= 262142) {
                *(float*)&v131 = v126 + *(float*)&v129;
                v132 = v115[2392] + 40LL * (v118 + 1);
                *((float*)&v131 + 1) = v127 + *((float*)&v129 + 1);
                *(_QWORD*)(v132 + 8) = 0;
                *(_QWORD*)(v132 + 16) = 0;
                *(_OWORD*)(v132 + 24) = v130;
                *(_QWORD*)v132 = v131;
                v133 = v117 + 1440LL * v119 +
                       4LL * *(int*)(v117 + 1440LL * v119 + 256);
                ++*(_DWORD*)(v133 + 260);
              }
              v134 = *v101;
              v135 = (*v101)[2342];
              v136 = *((_DWORD*)*v101 + 4800);
              v137 = *((_DWORD*)*v101 + 4320);
              *((_DWORD*)*v101 + 4800) = v136 + 1;
              if (v136 <= 262142) {
                *(float*)&v138 = v126 - *(float*)&v129;
                v139 = v134[2392] + 40LL * (v136 + 1);
                *((float*)&v138 + 1) = v127 - *((float*)&v129 + 1);
                *(_QWORD*)(v139 + 8) = 0;
                *(_QWORD*)(v139 + 16) = 0;
                *(_OWORD*)(v139 + 24) = v130;
                *(_QWORD*)v139 = v138;
                v140 = v135 + 1440LL * v137 +
                       4LL * *(int*)(v135 + 1440LL * v137 + 256);
                ++*(_DWORD*)(v140 + 260);
              }
              v141 = *v101;
              v142 = v107 + *(float*)&v112;
              v143 = v109 + *((float*)&v112 + 1);
              v144 = (*v101)[2342];
              v145 = *((_DWORD*)*v101 + 4800);
              v146 = *((_DWORD*)*v101 + 4320);
              *((_DWORD*)*v101 + 4800) = v145 + 1;
              if (v145 <= 262142) {
                *(float*)&v147 = v142 - *(float*)&v129;
                v148 = v141[2392] + 40LL * (v145 + 1);
                *((float*)&v147 + 1) = v143 - *((float*)&v129 + 1);
                *(_QWORD*)(v148 + 8) = 0;
                *(_QWORD*)(v148 + 16) = 0;
                *(_OWORD*)(v148 + 24) = v130;
                *(_QWORD*)v148 = v147;
                v149 = v144 + 1440LL * v146 +
                       4LL * *(int*)(v144 + 1440LL * v146 + 256);
                ++*(_DWORD*)(v149 + 260);
              }
              v150 = *v101;
              v151 = v150[2342];
              v152 = *((_DWORD*)v150 + 4800);
              v153 = *((_DWORD*)v150 + 4320);
              *((_DWORD*)v150 + 4800) = v152 + 1;
              if (v152 <= 262142) {
                *(float*)&v154 = v142 + *(float*)&v129;
                v155 = v150[2392] + 40LL * (v152 + 1);
                *((float*)&v154 + 1) = v143 + *((float*)&v129 + 1);
                *(_QWORD*)(v155 + 8) = 0;
                *(_QWORD*)(v155 + 16) = 0;
                *(_OWORD*)(v155 + 24) = v130;
                *(_QWORD*)v155 = v154;
                v156 = v151 + 1440LL * v153 +
                       4LL * *(int*)(v151 + 1440LL * v153 + 256);
                ++*(_DWORD*)(v156 + 260);
              }
              goto LABEL_12;
            }
            v27 += 2;
            while (1) {
              if (*(v27 - 2) == (__int64*)v29) {
                v27 -= 2;
                goto LABEL_11;
              }
              if (*(v27 - 1) == (__int64*)v29) {
                --v27;
                goto LABEL_11;
              }
              if (*v27 == (__int64*)v29) {
                goto LABEL_11;
              }
              if (v27[1] == (__int64*)v29) {
                break;
              }
              v157 = v27 + 2;
              v27 += 4;
              if (v157 == v30) {
                goto LABEL_21;
              }
            }
            ++v27;
          }
        }
      LABEL_11:
        if (v27 == v30) {
          goto LABEL_21;
        }
      }
    LABEL_12:
      if (++v25 == v26) {
        v15 = v4[49];
        goto LABEL_58;
      }
    }
  }
  return PrimitiveDrawManager_1994180((__int64*)***v5[3]);
}

#pragma GCC visibility pop
