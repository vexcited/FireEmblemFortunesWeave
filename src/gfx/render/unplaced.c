#include "decomp/pseudo_helpers.h"

#include "decomp/pseudo_float.h"

#pragma GCC visibility push(hidden)

__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 memcpy(__int64, __int64, unsigned __int64);
__int64 memset(__int64, int, unsigned __int64);
extern _UNKNOWN* GameData_212c188;
extern _UNKNOWN* GameData_212c190;
extern _UNKNOWN* GameData_212c2b0;
extern _UNKNOWN* GameData_212c540;
extern __int128 GameData_1a829f0;
extern __int128 GameData_1a82a70;
extern __int128 GameData_1a82c50;
extern __int128 GameData_1a830c0;
extern __int128 GameData_1a83610;
extern __int64 fw_memory_g_heap_manager_ptr;
float asinf(float);
float atan2f(float, float);
float atanf(float);
float cosf(float);
float sinf(float);
float tanf(float);
void __attribute__((noreturn)) GameRoutine_60a210();
void __attribute__((noreturn)) GameRoutine_a74630();
void nn_mem_StandardAllocator_Free(__int64, __int64);
void gfx_render_a72660(__int64 a1, int a2);
bool gfx_render_a73cb0(__int64 a1, __int64 a2);
void gfx_render_b3aee0(float32x4_t* a1);

void gfx_render_a72660(__int64 a1, int a2)
{
  int v2;
  int v3;
  unsigned __int64 v4;
  __int64 v5;
  __int64 v6;
  signed __int64 v9;
  unsigned __int64 v10;
  unsigned __int64 v11;
  __int64 v12;
  unsigned __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  unsigned __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  _QWORD* v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64* v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  int v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  _QWORD* v45;
  __int64 v46;
  int v47;

  v2 = a2 - 1;
  if (a2 < 1) {
    v2 = a2 + 254;
  }
  v3 = v2 >> 8;
  LODWORD(v4) = (v2 >> 8) + 1;
  if ((signed __int32)((_DWORD)v4 << 8) > (signed __int32)*(_DWORD*)(a1 + 24)) {
    v6 = *(_QWORD*)a1;
    v5 = *(_QWORD*)(a1 + 8);
    v4 = (int)v4;
    v47 = (_DWORD)v4 << 8;
    v9 = v5 - *(_QWORD*)a1;
    v10 = 0xAAAAAAAAAAAAAAABLL * (v9 >> 3);
    v11 = (int)v4 - v10;
    if ((int)v4 > v10) {
      v12 = *(_QWORD*)(a1 + 16);
      if (0xAAAAAAAAAAAAAAABLL * ((v12 - v5) >> 3) >= v11) {
        memset(v5, 0, 24 * ((24 * v11 - 24) / 0x18) + 24);
        *(_QWORD*)(a1 + 8) = v5 + 24 * ((24 * v11 - 24) / 0x18) + 24;
      }
      else {
        if (a2 <= -511) {
          GameRoutine_a74630();
        }
        v13 = 0xAAAAAAAAAAAAAAABLL * ((v12 - v6) >> 3);
        if (2 * v13 > (int)v4) {
          v4 = 2 * v13;
        }
        if (v13 >= 0x555555555555555LL) {
          v4 = 0xAAAAAAAAAAAAAAALL;
        }
        if (v4 > 0xAAAAAAAAAAAAAAALL) {
          GameRoutine_60a210();
        }
        v14 = 3 * v4;
        v15 = fw_memory_HeapManager_Allocate(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 24 * v4, 16, 0);
        v16 = v15 + v9;
        v17 = v15;
        v18 = v15 + 8 * v14;
        v19 = 24 * ((24 * v11 - 24) / 0x18) + 24;
        memset(v15 + v9, 0, v19);
        memcpy(v17, v6, v9);
        *(_QWORD*)a1 = v17;
        *(_QWORD*)(a1 + 8) = v16 + v19;
        *(_QWORD*)(a1 + 16) = v18;
        if (v6 != 0) {
          v20 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v20 = 56;
          }
          nn_mem_StandardAllocator_Free(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v20, v6);
          if (a2 < -254) {
            goto LABEL_39;
          }
          goto LABEL_41;
        }
      }
    LABEL_36:
      if (a2 < -254) {
        goto LABEL_39;
      }
      goto LABEL_41;
    }
    if ((int)v4 >= v10) {
      goto LABEL_36;
    }
    v21 = v6 + 24LL * (int)v4;
    if (v21 == v5) {
      goto LABEL_38;
    }
    v22 = *(_QWORD*)(a1 + 8);
  LABEL_26:
    v26 = *(_QWORD*)(v22 - 24);
    v22 -= 24;
    v24 = v26;
    if (v26 == 0) {
      goto LABEL_25;
    }
    v27 = *(_QWORD*)(v5 - 16);
    if (v24 == v27) {
    LABEL_21:
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) != 0) {
        v25 = 128;
      }
      else {
        v25 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v25, v24);
      goto LABEL_25;
    }
    while (1) {
      v29 = *(_QWORD**)(v27 - 48);
      v30 = v27 - 80;
      if ((_QWORD*)(v27 - 80) == v29) {
        v28 = 32;
      }
      else {
        if (v29 == nullptr) {
          goto LABEL_31;
        }
        v28 = 40;
      }
      (*(void (**)(__int64))(*v29 + v28))((__int64)v29);
    LABEL_31:
      v27 = v30;
      if (v30 == v24) {
        v23 = *(_QWORD*)(v5 - 24);
        *(_QWORD*)(v5 - 16) = v24;
        v24 = v23;
        if (v23 != 0) {
          goto LABEL_21;
        }
      LABEL_25:
        v5 = v22;
        if (v21 != v22) {
          goto LABEL_26;
        }
      LABEL_38:
        *(_QWORD*)(a1 + 8) = v21;
        if (a2 < -254) {
        LABEL_39:
          *(_DWORD*)(a1 + 24) = v47;
          return;
        }
      LABEL_41:
        v31 = 0;
        v32 = (v3 & (unsigned int)~(v3 >> 31)) + 1;
        while (2) {
          v33 = (__int64*)(*(_QWORD*)a1 + 24 * v31);
          v34 = *v33;
          if (0xCCCCCCCCCCCCCCCDLL * ((v33[2] - *v33) >> 4) <= 0xFF) {
            v35 = v33[1];
            v36 = fw_memory_HeapManager_Allocate(
                *(_QWORD*)fw_memory_g_heap_manager_ptr, 20480, 16, 0);
            v37 = v35 - v34;
            v38 = v36;
            if (v35 != v34) {
              v39 = v34;
              v40 = v36;
              do {
                v43 = *(_QWORD*)(v39 + 32);
                if (v43 != 0) {
                  if (v39 == v43) {
                    *(_QWORD*)(v40 + 32) = v40;
                    (*(void (**)(__int64, __int64))(*(_QWORD*)v43 + 24LL))(v43,
                                                                           v40);
                  }
                  else {
                    *(_QWORD*)(v40 + 32) = v43;
                    *(_QWORD*)(v39 + 32) = 0;
                  }
                }
                else {
                  *(_QWORD*)(v40 + 32) = 0;
                }
                v41 = *(_DWORD*)(v39 + 64);
                *(_QWORD*)(v40 + 56) = *(_QWORD*)(v39 + 56);
                v42 = *(_QWORD*)(v39 + 48);
                *(_DWORD*)(v40 + 64) = v41;
                v39 += 80;
                *(_QWORD*)(v40 + 48) = v42;
                v40 += 80;
              } while (v39 != v35);
              while (1) {
                v45 = *(_QWORD**)(v34 + 32);
                if ((_QWORD*)v34 == v45) {
                  v44 = 32;
                }
                else {
                  if (v45 == nullptr) {
                    goto LABEL_55;
                  }
                  v44 = 40;
                }
                (*(void (**)(__int64))(*v45 + v44))((__int64)v45);
              LABEL_55:
                v34 += 80;
                if (v34 == v35) {
                  v34 = *v33;
                  break;
                }
              }
            }
            *v33 = v38;
            v33[1] = v38 + v37;
            v33[2] = v38 + 20480;
            if (v34 != 0) {
              v46 = 128;
              if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                  0) {
                v46 = 56;
              }
              nn_mem_StandardAllocator_Free(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr + v46, v34);
            }
          }
          if (++v31 == v32) {
            goto LABEL_39;
          }
          continue;
        }
      }
    }
  }
}

bool gfx_render_a73cb0(__int64 a1, __int64 a2)
{
  return (signed __int32)*(_DWORD*)(a1 + 56) <
         (signed __int32)*(_DWORD*)(a2 + 56);
}

void gfx_render_b3aee0(float32x4_t* a1)
{
  float32x4_t v1;
  float32x4_t v2;
  float32x4_t v4;
  float32x4_t v5;
  float32x4_t v6;
  float32x4_t v7;
  unsigned __int32 v8;
  float32x4_t v9;
  float32x4_t v10;
  int8x16_t v11;
  float32x4_t v12;
  float32x4_t v13;
  int8x16_t v14;
  float32x4_t v15;
  float32x4_t v16;
  int8x16_t v17;
  unsigned __int64 v18;
  float32x4_t v19;
  float32x4_t v20;
  float32x4_t v21;
  int8x16_t v22;
  float32x4_t v23;
  float32x4_t v24;
  int8x16_t v25;
  float32x4_t v26;
  int32x4_t v27;
  int8x16_t v28;
  int8x16_t v29;
  int8x16_t v30;
  int32x4_t v31;
  int32x4_t v32;
  int32x4_t v33;
  int32x4_t v34;
  float32x4_t v35;
  unsigned __int64 v36;
  float32x4_t v37;
  int8x16_t v38;
  float32x4_t v39;
  float32x4_t v40;
  int8x16_t v41;
  int8x16_t v42;
  int8x16_t v43;
  int8x16_t v44;
  int8x16_t v45;
  int8x16_t v46;
  int32x4_t v47;
  float32x4_t v48;
  int8x16_t v49;
  float32x4_t v50;
  float32x4_t v51;
  float32x4_t v52;
  float32x4_t v53;
  float32x4_t v54;
  float32x4_t v55;
  int8x16_t v56;
  int32x4_t v57;
  float32x4_t v58;
  float32x4_t v59;
  int32x4_t v60;
  int8x16_t v61;
  int8x16_t v62;
  unsigned __int64 v63;
  float32x4_t v64;
  unsigned __int64 v65;
  int32x4_t v66;
  float32x4_t v67;
  int32x4_t v68;
  int8x16_t v69;
  int8x16_t v70;
  int8x16_t v71;
  int32x4_t v72;
  int32x4_t v73;
  int32x4_t v74;
  int32x4_t v75;
  int8x16_t v76;
  int32x4_t v77;
  int8x16_t v78;
  float32x4_t v79;
  float32x4_t v80;
  float32x4_t v81;
  float32x4_t v82;
  int32x4_t v83;
  int32x4_t v84;
  int8x16_t v85;
  float32x4_t v86;
  float32x4_t v87;
  float32x4_t v88;
  float32x4_t v89;
  float32x4_t v90;
  float32x4_t v91;
  int8x16_t v92;
  int8x16_t v93;
  float32x4_t v94;
  unsigned __int64 v95;
  float32x4_t v96;
  int8x16_t v97;
  int8x16_t v98;
  float32x4_t v99;
  int8x16_t v100;
  int8x16_t v101;
  float32x4_t v102;
  float32x4_t v103;
  float32x4_t v104;
  float32x4_t v105;
  float32x4_t v106;
  float32x4_t v107;
  int8x16_t v108;
  float32x4_t v109;
  float32x4_t v110;
  float v111;
  float v112;
  float v113;
  float v114;
  float v115;
  float32x4_t v116;
  int8x16_t v117;
  float32x4_t v118;
  unsigned __int64 v119;
  float32x4_t v120;
  float32x4_t v121;
  float32x4_t v122;
  int8x16_t v123;
  float32x4_t v124;
  float32x4_t v125;
  int8x16_t v126;
  float32x4_t v127;
  float32x4_t v128;
  float32x4_t v129;
  int8x16_t v130;
  float32x4_t v131;
  float32x4_t v132;
  int8x16_t v133;
  float32x4_t v134;
  int8x16_t v135;
  float32x4_t v136;
  float32x4_t v137;
  int8x16_t v138;
  float32x4_t v139;
  int32x4_t v140;
  float32x4_t v141;
  int8x16_t v142;
  int8x16_t v143;
  int8x16_t v144;
  int32x4_t v145;
  int32x4_t v146;
  int32x4_t v147;
  int32x4_t v148;
  unsigned __int32 v149;
  float v150;
  float v151;
  float v152;
  float v153;
  float v154;
  float v155;
  unsigned __int32 v156;
  float v157;
  unsigned __int32 v158;
  float v159;
  bool v160;
  float v161;
  float v162;
  float v163;
  unsigned int v164;
  float v165;
  float v166;
  float v167;
  float32x4_t v168;
  unsigned __int64 v169;
  float32x4_t v170;
  float32x4_t v171;
  float32x4_t v172;
  float v173;
  float v174;
  float v175;
  unsigned int v176;
  float v177;
  unsigned int v178;
  float32x4_t v179;
  float v180;
  unsigned __int64 v181;
  float32x4_t v182;
  float32x4_t v183;
  float32x4_t v184;
  float32x4_t v185;
  float32x4_t v186;
  float32x4_t v187;
  float32x4_t v188;
  unsigned __int64 v189;
  unsigned __int64 i;
  int8x16_t v191;
  float v192;
  float32x4_t v193;

  v1 = a1[14];
  v2 = a1[15];
  v4 = a1[16];
  v5 = a1[17];
  v6 = a1[12];
  v7 = a1[13];
  v8 = LANES128(*(a1)).n128_u32[2];
  v9 = vmlaq_laneq_f32(
      vmlaq_lane_f32(vmulq_n_f32(v1, COERCE_FLOAT(*(_OWORD*)&a1[11])), v2,
                     COERCE_AS(float32x2_t, LANES128(a1[11]).n128_u64[0]), 1),
      v4, a1[11], 2);
  a1[18] = vmlaq_laneq_f32(
      vmlaq_lane_f32(vmulq_n_f32(v1, COERCE_FLOAT(*(_OWORD*)&a1[10])), v2,
                     COERCE_AS(float32x2_t, LANES128(a1[10]).n128_u64[0]), 1),
      v4, a1[10], 2);
  a1[19] = v9;
  a1[20] = vmlaq_laneq_f32(
      vmlaq_lane_f32(vmulq_n_f32(v1, LANES128(v6).n128_f32[0]), v2,
                     COERCE_AS(float32x2_t, LANES128(v6).n128_u64[0]), 1),
      v4, v6, 2);
  a1[21] = vaddq_f32(
      vmlaq_laneq_f32(
          vmlaq_lane_f32(vmulq_n_f32(v1, LANES128(v7).n128_f32[0]), v2,
                         COERCE_AS(float32x2_t, LANES128(v7).n128_u64[0]), 1),
          v4, v7, 2),
      v5);
  if (v8 == 2) {
    v111 = LANES128(a1[5]).n128_f32[1] * 0x1.1df46a0000000p-6f;
    v112 = LANES128(a1[5]).n128_f32[2] * 0x1.1df46a0000000p-6f;
    v113 = sinf(v111);
    v114 = cosf(v111);
    v192 = sinf(v112);
    v115 = cosf(v112);
    LANES128(v116).n128_f32[0] = v113 * v115;
    LANES128(v116).n128_f32[1] = v192;
    LANES128(v116).n128_u64[1] = COERCE_UNSIGNED_INT(v114 * v115);
    v117 = vsubq_f32(COERCE_AS(float32x4_t, 0), v116);
    LANES128(v118).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v117, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
            .n64_u64[0];
    *(int8x8_t*)&LANES128(v118).n128_i8[8] =
        vqtbl1_s8(v117, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
    v119 = LANES128(*(a1)).n128_u64[0];
    LANES128(v120).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(COERCE_AS(int8x16_t, GameData_1a83610),
                             COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
            .n64_u64[0];
    *(int8x8_t*)&LANES128(v120).n128_i8[8] =
        vqtbl1_s8(COERCE_AS(int8x16_t, GameData_1a83610),
                  COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
    LANES128(v121).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v117, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
            .n64_u64[0];
    *(int8x8_t*)&LANES128(v121).n128_i8[8] =
        vqtbl1_s8(v117, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
    LANES128(v122).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(COERCE_AS(int8x16_t, GameData_1a83610),
                             COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
            .n64_u64[0];
    *(int8x8_t*)&LANES128(v122).n128_i8[8] =
        vqtbl1_s8(COERCE_AS(int8x16_t, GameData_1a83610),
                  COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
    v123 = vmlsq_f32(vmulq_f32(v118, v120), v122, v121);
    LANES128(v124).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v123, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
            .n64_u64[0];
    *(int8x8_t*)&LANES128(v124).n128_i8[8] =
        vqtbl1_s8(v123, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
    v125 = vmulq_f32(v121, v124);
    LANES128(v124).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v123, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
            .n64_u64[0];
    *(int8x8_t*)&LANES128(v124).n128_i8[8] =
        vqtbl1_s8(v123, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
    v126 = vmlsq_f32(v125, v118, v124);
    v127 = a1[2];
    v193 = v126;
    v128 = vsubq_f32(v127, vmulq_n_f32(v117, COERCE_FLOAT(*(_OWORD*)&a1[5])));
    v129 = vsubq_f32(v128, v127);
    v130 = vmulq_f32(v129, v129);
    LANES128(v130).n128_u64[0] =
        LANES64_OF(
            vadd_f32(
                COERCE_AS(float32x2_t,
                          LANES128_OF(vextq_s8(v130, v130, 8u)).n128_u64[0]),
                COERCE_AS(float32x2_t, LANES128(v130).n128_u64[0])))
            .n64_u64[0];
    LANES128(v130).n128_u64[0] =
        LANES64_OF(
            vpadd_f32(COERCE_AS(float32x2_t, LANES128(v130).n128_u64[0]),
                      COERCE_AS(float32x2_t, LANES128(v130).n128_u64[0])))
            .n64_u64[0];
    LANES128(v130).n128_u64[1] = LANES128(v130).n128_u64[0];
    v131 = vrsqrteq_f32(v130);
    v132 = vmulq_f32(v131, vrsqrtsq_f32(v131, vmulq_f32(v130, v131)));
    v133 = vbicq_s8(
        vmulq_f32(v129,
                  vmulq_f32(v132, vrsqrtsq_f32(v132, vmulq_f32(v130, v132)))),
        vceqzq_f32(v130));
    LANES128(v130).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v126, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
            .n64_u64[0];
    *(int8x8_t*)&LANES128(v130).n128_i8[8] =
        vqtbl1_s8(v126, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
    LANES128(v132).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v133, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
            .n64_u64[0];
    *(int8x8_t*)&LANES128(v132).n128_i8[8] =
        vqtbl1_s8(v133, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
    LANES128(v121).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v126, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
            .n64_u64[0];
    *(int8x8_t*)&LANES128(v121).n128_i8[8] =
        vqtbl1_s8(v126, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
    LANES128(v126).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v133, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
            .n64_u64[0];
    *(int8x8_t*)&LANES128(v126).n128_i8[8] =
        vqtbl1_s8(v133, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
    v134 = vmlsq_f32(vmulq_f32(v130, v132), v126, v121);
    v135 = vmulq_f32(v134, v134);
    LANES128(v135).n128_u64[0] =
        LANES64_OF(
            vadd_f32(
                COERCE_AS(float32x2_t,
                          LANES128_OF(vextq_s8(v135, v135, 8u)).n128_u64[0]),
                COERCE_AS(float32x2_t, LANES128(v135).n128_u64[0])))
            .n64_u64[0];
    LANES128(v135).n128_u64[0] =
        LANES64_OF(
            vpadd_f32(COERCE_AS(float32x2_t, LANES128(v135).n128_u64[0]),
                      COERCE_AS(float32x2_t, LANES128(v135).n128_u64[0])))
            .n64_u64[0];
    LANES128(v135).n128_u64[1] = LANES128(v135).n128_u64[0];
    v136 = vrsqrteq_f32(v135);
    v137 = vmulq_f32(v136, vrsqrtsq_f32(v136, vmulq_f32(v135, v136)));
    v138 = vbicq_s8(
        vmulq_f32(v134,
                  vmulq_f32(v137, vrsqrtsq_f32(v137, vmulq_f32(v135, v137)))),
        vceqzq_f32(v135));
    LANES128(v116).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v138, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
            .n64_u64[0];
    LANES128(v139).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v138, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
            .n64_u64[0];
    *(int8x8_t*)&LANES128(v116).n128_i8[8] =
        vqtbl1_s8(v138, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
    *(int8x8_t*)&LANES128(v139).n128_i8[8] =
        vqtbl1_s8(v138, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
    v140 = vmlsq_f32(vmulq_f32(v126, v116), v139, v132);
    v141 = vnegq_f32(v128);
    v142 = vmulq_f32(v138, v141);
    LANES128(v142).n128_u64[0] =
        LANES64_OF(
            vadd_f32(
                COERCE_AS(float32x2_t,
                          LANES128_OF(vextq_s8(v142, v142, 8u)).n128_u64[0]),
                COERCE_AS(float32x2_t, LANES128(v142).n128_u64[0])))
            .n64_u64[0];
    v143 = vmulq_f32(v140, v141);
    v144 = vmulq_f32(v133, v141);
    LANES128(v143).n128_u64[0] =
        LANES64_OF(
            vadd_f32(
                COERCE_AS(float32x2_t,
                          LANES128_OF(vextq_s8(v143, v143, 8u)).n128_u64[0]),
                COERCE_AS(float32x2_t, LANES128(v143).n128_u64[0])))
            .n64_u64[0];
    LANES128(v144).n128_u64[0] =
        LANES64_OF(
            vadd_f32(
                COERCE_AS(float32x2_t,
                          LANES128_OF(vextq_s8(v144, v144, 8u)).n128_u64[0]),
                COERCE_AS(float32x2_t, LANES128(v144).n128_u64[0])))
            .n64_u64[0];
    v145 = vzip1q_s32(v138, v133);
    LANES128(v138).n128_u32[3] =
        LANES64_OF(
            vpadd_f32(COERCE_AS(float32x2_t, LANES128(v142).n128_u64[0]),
                      COERCE_AS(float32x2_t, LANES128(v142).n128_u64[0])))
            .n64_u32[1];
    v146 = vzip1q_s32(v140, COERCE_AS(int32x4_t, 0));
    LANES128(v140).n128_u32[3] =
        LANES64_OF(
            vpadd_f32(COERCE_AS(float32x2_t, LANES128(v143).n128_u64[0]),
                      COERCE_AS(float32x2_t, LANES128(v143).n128_u64[0])))
            .n64_u32[1];
    LANES128(v133).n128_u32[3] =
        LANES64_OF(
            vpadd_f32(COERCE_AS(float32x2_t, LANES128(v144).n128_u64[0]),
                      COERCE_AS(float32x2_t, LANES128(v144).n128_u64[0])))
            .n64_u32[1];
    v147 = vzip2q_s32(v140, COERCE_AS(int32x4_t, 0));
    v148 = vzip2q_s32(v138, v133);
    a1[10] = vzip1q_s32(v145, v146);
    a1[11] = vzip2q_s32(v145, v146);
    a1[12] = vzip1q_s32(v148, v147);
    a1[13] = vzip2q_s32(v148, v147);
    *(long double*)&a1[1] =
        ((long double (*)(float32x4_t*)) * (_QWORD*)(v119 + 40))(a1);
    a1[3] = v193;
  }
  else {
    if (v8 == 1) {
      v40 = a1[1];
      v41 = vmlaq_f32(a1[4], vdupq_n_s32(0xC0C90FDB),
                      vrndnq_f32(vmulq_f32(a1[4], vdupq_n_s32(0x3E22F983u))));
      v42 = vcgtq_f32(v41, vdupq_n_s32(0x3FC90FDBu));
      v43 = vmvnq_s8(v42);
      v44 = vbslq_s8(v42, vsubq_f32(vdupq_n_s32(0x40490FDBu), v41), v41);
      v45 = vcgtq_f32(vdupq_n_s32(0xBFC90FDB), v44);
      v46 = vsubq_f32(vdupq_n_s32(0xC0490FDB), v44);
      v47 = *(int32x4_t*)((char*)((_UNKNOWN*)0x4LL) + (_QWORD)GameData_212c190);
      v48 = vbslq_s8(v45, v46, v44);
      PSEUDO_LOW_LANE128(v46, n128_u32, *(_DWORD*)GameData_212c190);
      v49 = vbicq_s8(v43, v45);
      v50 = vmulq_f32(v48, v48);
      v51 = vmlsq_lane_f32(
          vdupq_lane_s32(COERCE_AS(int32x2_t, LANES128(v47).n128_u64[0]), 0),
          v50, COERCE_AS(float32x2_t, LANES128(v46).n128_u64[0]), 0);
      PSEUDO_LOW_LANE128(
          v46, n128_f32,
          -COERCE_FLOAT(HIDWORD(*(_QWORD*)((char*)((_UNKNOWN*)0x4LL) +
                                           (_QWORD)GameData_212c190))));
      v52 = vmlaq_f32(
          vdupq_lane_s32(COERCE_AS(int32x2_t, LANES128(v46).n128_u64[0]), 0),
          v50, v51);
      v53 = vmlaq_f32(vdupq_laneq_s32(v47, 2), v50, v52);
      LANES128(v47).n128_u64[0] = 0x3F8000003F800000LL;
      LANES128(v47).n128_u64[1] = 0x3F8000003F800000LL;
      PSEUDO_LOW_LANE128(
          v52, n128_f32,
          -COERCE_FLOAT(HIDWORD(*(_OWORD*)((char*)((_UNKNOWN*)0x4LL) +
                                           (_QWORD)GameData_212c190))));
      v54 = vmlaq_f32(
          vdupq_lane_s32(COERCE_AS(int32x2_t, LANES128(v52).n128_u64[0]), 0),
          v50, v53);
      v55 = vmlaq_f32(v47, v50, v54);
      PSEUDO_LOW_LANE128(v54, n128_u32, *(_DWORD*)GameData_212c188);
      v56 = vmulq_f32(v48, v55);
      v57 = *(int32x4_t*)((char*)((_UNKNOWN*)0x4LL) + (_QWORD)GameData_212c188);
      v58 = vmlsq_lane_f32(
          vdupq_lane_s32(COERCE_AS(int32x2_t, LANES128(v57).n128_u64[0]), 0),
          v50, COERCE_AS(float32x2_t, LANES128(v54).n128_u64[0]), 0);
      PSEUDO_LOW_LANE128(
          v54, n128_f32,
          -COERCE_FLOAT(HIDWORD(*(_QWORD*)((char*)((_UNKNOWN*)0x4LL) +
                                           (_QWORD)GameData_212c188))));
      v59 = vmlaq_f32(
          vdupq_lane_s32(COERCE_AS(int32x2_t, LANES128(v54).n128_u64[0]), 0),
          v50, v58);
      v60 = vmlaq_f32(vdupq_laneq_s32(v57, 2), v50, v59);
      PSEUDO_LOW_LANE128(v59, n128_f32, -LANES128(v57).n128_f32[3]);
      v61 = vmlaq_f32(
          v47, v50,
          vmlaq_f32(vdupq_lane_s32(
                        COERCE_AS(int32x2_t, LANES128(v59).n128_u64[0]), 0),
                    v50, v60));
      LANES128(v60).n128_u64[0] =
          LANES128_OF(vextq_s8(v56, v56, 8u)).n128_u32[0];
      LANES128(v60).n128_u64[1] = LANES128(v60).n128_u32[0];
      v62 = vbslq_s8(v49, v61, vnegq_f32(v61));
      LANES128(v49).n128_u64[0] =
          LANES128(v56).n128_u32[0] | 0x3F80000000000000LL;
      LANES128(v49).n128_u64[1] = LANES128(v56).n128_u32[0];
      v63 = LANES128(v56).n128_u32[1] |
            ((unsigned __int64)LANES128(v56).n128_u32[0] << 32);
      LANES128(v61).n128_u64[0] =
          LANES128(v56).n128_u32[1] |
          ((unsigned __int64)LANES128(v62).n128_u32[0] << 32);
      LANES128(v57).n128_u64[0] = LANES128(v62).n128_u32[1];
      LANES128(v61).n128_u64[1] = LANES128(v62).n128_u32[1];
      v64 = vmulq_f32(v49, v61);
      v65 = LANES128(v62).n128_u32[0] | 0xBF80000000000000LL;
      LANES128(v49).n128_u64[0] =
          LANES64_OF(
              vmul_f32(COERCE_AS(float32x2_t, LANES128(v62).n128_u32[0]),
                       COERCE_AS(float32x2_t, LANES128(v62).n128_u32[1])))
              .n64_u64[0];
      LANES128(v57).n128_u64[1] = LANES128(v56).n128_u32[1];
      LANES128(v61).n128_u64[0] =
          LANES128_OF(vextq_s8(v62, v62, 8u)).n128_u32[0];
      LANES128(v61).n128_u64[1] = LANES128(v61).n128_u32[0];
      v66 = vaddq_f32(vmulq_f32(vmulq_f32(v61, v57),
                                COERCE_AS(float32x4_t, GameData_1a830c0)),
                      vmulq_laneq_f32(v64, v56, 2));
      v67 = vnegq_f32(v40);
      v68 = vaddq_f32(vmulq_f32(vmulq_f32(v60, v57),
                                COERCE_AS(float32x4_t, GameData_1a82a70)),
                      vmulq_laneq_f32(v64, v62, 2));
      LANES128(v60).n128_u64[0] =
          LANES64_OF(vmul_f32(COERCE_AS(float32x2_t, v65),
                              COERCE_AS(float32x2_t, v63)))
              .n64_u64[0];
      LANES128(v57).n128_u64[0] =
          LANES64_OF(vzip1_s32(COERCE_AS(int32x2_t, LANES128(v60).n128_u64[0]),
                               COERCE_AS(int32x2_t, LANES128(v49).n128_u64[0])))
              .n64_u64[0];
      LANES128(v60).n128_u64[1] = LANES128(v49).n128_u64[0];
      v69 = vmulq_f32(v66, v67);
      LANES128(v69).n128_u64[0] =
          LANES64_OF(
              vadd_f32(
                  COERCE_AS(float32x2_t,
                            LANES128_OF(vextq_s8(v69, v69, 8u)).n128_u64[0]),
                  COERCE_AS(float32x2_t, LANES128(v69).n128_u64[0])))
              .n64_u64[0];
      v70 = vmulq_f32(v68, v67);
      v71 = vmulq_f32(v60, v67);
      LANES128(v69).n128_u64[0] =
          LANES64_OF(
              vpadd_f32(COERCE_AS(float32x2_t, LANES128(v69).n128_u64[0]),
                        COERCE_AS(float32x2_t, LANES128(v69).n128_u64[0])))
              .n64_u64[0];
      LANES128(v70).n128_u64[0] =
          LANES64_OF(
              vadd_f32(
                  COERCE_AS(float32x2_t,
                            LANES128_OF(vextq_s8(v70, v70, 8u)).n128_u64[0]),
                  COERCE_AS(float32x2_t, LANES128(v70).n128_u64[0])))
              .n64_u64[0];
      LANES128(v71).n128_u64[0] =
          LANES64_OF(
              vadd_f32(
                  COERCE_AS(float32x2_t,
                            LANES128_OF(vextq_s8(v71, v71, 8u)).n128_u64[0]),
                  COERCE_AS(float32x2_t, LANES128(v71).n128_u64[0])))
              .n64_u64[0];
      v72 = vzip1q_s32(v66, v60);
      LANES128(v66).n128_u32[3] = LANES128(v69).n128_u32[1];
      LANES128(v70).n128_u64[0] =
          LANES64_OF(
              vpadd_f32(COERCE_AS(float32x2_t, LANES128(v70).n128_u64[0]),
                        COERCE_AS(float32x2_t, LANES128(v70).n128_u64[0])))
              .n64_u64[0];
      LANES128(v71).n128_u64[0] =
          LANES64_OF(
              vpadd_f32(COERCE_AS(float32x2_t, LANES128(v71).n128_u64[0]),
                        COERCE_AS(float32x2_t, LANES128(v71).n128_u64[0])))
              .n64_u64[0];
      LANES128(v60).n128_u32[3] = LANES128(v71).n128_u32[1];
      v73 = vzip2q_s32(v66, v60);
      v74 = vzip1q_s32(v68, COERCE_AS(int32x4_t, 0));
      LANES128(v68).n128_u32[3] = LANES128(v70).n128_u32[1];
      v75 = vzip1q_s32(v72, v74);
      v76 = vzip2q_s32(v72, v74);
      v77 = vzip2q_s32(v68, COERCE_AS(int32x4_t, 0));
      a1[10] = v75;
      a1[11] = v76;
      v78 = vzip1q_s32(v73, v77);
      a1[12] = v78;
      a1[13] = vzip2q_s32(v73, v77);
      LANES128(v72).n128_u64[0] =
          LANES64_OF(vqtbl1_s8(v76, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
              .n64_u64[0];
      *(int8x8_t*)&LANES128(v72).n128_i8[8] =
          vqtbl1_s8(v76, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
      LANES128(v79).n128_u64[0] =
          LANES64_OF(vqtbl1_s8(v78, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
              .n64_u64[0];
      *(int8x8_t*)&LANES128(v79).n128_i8[8] =
          vqtbl1_s8(v78, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
      v80 = vmulq_f32(vmulq_f32(v75, v72), v79);
      LANES128(v79).n128_u64[0] =
          LANES64_OF(vqtbl1_s8(v76, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
              .n64_u64[0];
      *(int8x8_t*)&LANES128(v79).n128_i8[8] =
          vqtbl1_s8(v76, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
      LANES128(v81).n128_u64[0] =
          LANES64_OF(vqtbl1_s8(v78, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
              .n64_u64[0];
      *(int8x8_t*)&LANES128(v81).n128_i8[8] =
          vqtbl1_s8(v78, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
      v82 = vmulq_f32(v75, v79);
      v83 = vzip1q_s32(v75, v78);
      v84 = vzip1q_s32(v76, COERCE_AS(int32x4_t, 0));
      v85 = vzip1q_s32(v57, vzip2q_s32(v76, COERCE_AS(int32x4_t, 0)));
      v86 = vsubq_f32(v80, vmulq_f32(v82, v81));
      LANES128(v76).n128_u64[0] =
          LANES64_OF(vqtbl1_s8(v85, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
              .n64_u64[0];
      LANES128(v87).n128_u64[0] =
          LANES64_OF(vqtbl1_s8(v85, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
              .n64_u64[0];
      LANES128(v86).n128_u64[0] = LANES128_OF(vpaddq_f32(v86, v86)).n128_u64[0];
      v88 = vaddq_f32(
          vdupq_lane_s32(COERCE_AS(int32x2_t, LANES128(v86).n128_u64[0]), 0),
          vdupq_lane_s32(COERCE_AS(int32x2_t, LANES128(v86).n128_u64[0]), 1));
      v89 = vrecpeq_f32(v88);
      v90 = vmulq_f32(v89, vrecpsq_f32(v89, v88));
      v91 = vmulq_f32(v90, vrecpsq_f32(v90, v88));
      v92 = vzip2q_s32(v83, v84);
      v93 = vzip1q_s32(v83, v84);
      LANES128(v94).n128_u64[0] =
          LANES64_OF(vqtbl1_s8(v92, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
              .n64_u64[0];
      LANES128(v84).n128_u64[0] =
          LANES64_OF(vqtbl1_s8(v93, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
              .n64_u64[0];
      LANES128(v77).n128_u64[0] =
          LANES64_OF(vqtbl1_s8(v93, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
              .n64_u64[0];
      *(int8x8_t*)&LANES128(v94).n128_i8[8] =
          vqtbl1_s8(v92, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
      v95 = LANES64_OF(vqtbl1_s8(v85, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL)))
                .n64_u64[0];
      *(int8x8_t*)&LANES128(v87).n128_i8[8] =
          vqtbl1_s8(v85, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
      LANES128(v85).n128_u64[0] =
          LANES64_OF(vqtbl1_s8(v92, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
              .n64_u64[0];
      LANES128(v76).n128_u64[1] = v95;
      *(int8x8_t*)&LANES128(v77).n128_i8[8] =
          vqtbl1_s8(v93, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
      *(int8x8_t*)&LANES128(v85).n128_i8[8] =
          vqtbl1_s8(v92, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
      *(int8x8_t*)&LANES128(v84).n128_i8[8] =
          vqtbl1_s8(v93, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
      v96 = vmulq_f32(v91, vmlsq_f32(vmulq_f32(v94, v76), v85, v87));
      v97 = vmulq_f32(v91, vmlsq_f32(vmulq_f32(v87, v84), v76, v77));
      v98 = vmulq_f32(v91, vmlsq_f32(vmulq_f32(v85, v77), v84, v94));
      v99 = vmlsq_lane_f32(
          vmulq_lane_f32(vnegq_f32(v96),
                         COERCE_AS(float32x2_t, LANES128(v69).n128_u64[0]), 1),
          v97, COERCE_AS(float32x2_t, LANES128(v70).n128_u64[0]), 1);
      v100 = vceqzq_f32(v88);
      v101 = vmlsq_lane_f32(
          v99, v98, COERCE_AS(float32x2_t, LANES128(v71).n128_u64[0]), 1);
      v102 = vbicq_s8(v97, v100);
      v103 = vbicq_s8(v98, v100);
      PSEUDO_LOW_LANE128(v97, n128_u32, LANES128(a1[5]).n128_u32[0]);
      v104 = vbicq_s8(v101, v100);
      v105 = vbicq_s8(vmulq_f32(v96, COERCE_AS(float32x4_t, 0)), v100);
      v106 = vaddq_f32(
          vmlsq_lane_f32(vmlaq_f32(v105, COERCE_AS(float32x4_t, 0), v102), v103,
                         COERCE_AS(float32x2_t, LANES128(v97).n128_u64[0]), 0),
          v104);
      v107 = vaddq_f32(
          *(float32x4_t*)GameData_212c540,
          vmlaq_f32(vaddq_f32(v105, v102), COERCE_AS(float32x4_t, 0), v103));
      v39 = vsubq_f32(v40, v106);
      a1[2] = v106;
      a1[3] = v107;
    }
    else {
      if (v8 != 0) {
        goto LABEL_8;
      }
      v10 = a1[1];
      v11 = a1[3];
      v12 = vsubq_f32(v10, a1[2]);
      v13 = vnegq_f32(v10);
      v14 = vmulq_f32(v12, v12);
      LANES128(v14).n128_u64[0] =
          LANES64_OF(
              vadd_f32(
                  COERCE_AS(float32x2_t,
                            LANES128_OF(vextq_s8(v14, v14, 8u)).n128_u64[0]),
                  COERCE_AS(float32x2_t, LANES128(v14).n128_u64[0])))
              .n64_u64[0];
      LANES128(v14).n128_u64[0] =
          LANES64_OF(
              vpadd_f32(COERCE_AS(float32x2_t, LANES128(v14).n128_u64[0]),
                        COERCE_AS(float32x2_t, LANES128(v14).n128_u64[0])))
              .n64_u64[0];
      LANES128(v14).n128_u64[1] = LANES128(v14).n128_u64[0];
      v15 = vrsqrteq_f32(v14);
      v16 = vmulq_f32(v15, vrsqrtsq_f32(v15, vmulq_f32(v14, v15)));
      v17 = vbicq_s8(
          vmulq_f32(v12,
                    vmulq_f32(v16, vrsqrtsq_f32(v16, vmulq_f32(v14, v16)))),
          vceqzq_f32(v14));
      LANES128(v16).n128_u64[0] =
          LANES64_OF(vqtbl1_s8(v11, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
              .n64_u64[0];
      *(int8x8_t*)&LANES128(v16).n128_i8[8] =
          vqtbl1_s8(v11, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
      v18 = LANES128(*(a1)).n128_u64[0];
      LANES128(v19).n128_u64[0] =
          LANES64_OF(vqtbl1_s8(v17, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
              .n64_u64[0];
      *(int8x8_t*)&LANES128(v19).n128_i8[8] =
          vqtbl1_s8(v17, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
      LANES128(v20).n128_u64[0] =
          LANES64_OF(vqtbl1_s8(v11, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
              .n64_u64[0];
      *(int8x8_t*)&LANES128(v20).n128_i8[8] =
          vqtbl1_s8(v11, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
      LANES128(v11).n128_u64[0] =
          LANES64_OF(vqtbl1_s8(v17, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
              .n64_u64[0];
      *(int8x8_t*)&LANES128(v11).n128_i8[8] =
          vqtbl1_s8(v17, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
      v21 = vmlsq_f32(vmulq_f32(v16, v19), v11, v20);
      v22 = vmulq_f32(v21, v21);
      LANES128(v22).n128_u64[0] =
          LANES64_OF(
              vadd_f32(
                  COERCE_AS(float32x2_t,
                            LANES128_OF(vextq_s8(v22, v22, 8u)).n128_u64[0]),
                  COERCE_AS(float32x2_t, LANES128(v22).n128_u64[0])))
              .n64_u64[0];
      LANES128(v22).n128_u64[0] =
          LANES64_OF(
              vpadd_f32(COERCE_AS(float32x2_t, LANES128(v22).n128_u64[0]),
                        COERCE_AS(float32x2_t, LANES128(v22).n128_u64[0])))
              .n64_u64[0];
      LANES128(v22).n128_u64[1] = LANES128(v22).n128_u64[0];
      v23 = vrsqrteq_f32(v22);
      v24 = vmulq_f32(v23, vrsqrtsq_f32(v23, vmulq_f32(v22, v23)));
      v25 = vbicq_s8(
          vmulq_f32(v21,
                    vmulq_f32(v24, vrsqrtsq_f32(v24, vmulq_f32(v22, v24)))),
          vceqzq_f32(v22));
      LANES128(v26).n128_u64[0] =
          LANES64_OF(vqtbl1_s8(v25, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
              .n64_u64[0];
      LANES128(v14).n128_u64[0] =
          LANES64_OF(vqtbl1_s8(v25, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
              .n64_u64[0];
      *(int8x8_t*)&LANES128(v26).n128_i8[8] =
          vqtbl1_s8(v25, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
      *(int8x8_t*)&LANES128(v14).n128_i8[8] =
          vqtbl1_s8(v25, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
      v27 = vmlsq_f32(vmulq_f32(v11, v26), v14, v19);
      v28 = vmulq_f32(v25, v13);
      LANES128(v28).n128_u64[0] =
          LANES64_OF(
              vadd_f32(
                  COERCE_AS(float32x2_t,
                            LANES128_OF(vextq_s8(v28, v28, 8u)).n128_u64[0]),
                  COERCE_AS(float32x2_t, LANES128(v28).n128_u64[0])))
              .n64_u64[0];
      v29 = vmulq_f32(v27, v13);
      v30 = vmulq_f32(v17, v13);
      LANES128(v29).n128_u64[0] =
          LANES64_OF(
              vadd_f32(
                  COERCE_AS(float32x2_t,
                            LANES128_OF(vextq_s8(v29, v29, 8u)).n128_u64[0]),
                  COERCE_AS(float32x2_t, LANES128(v29).n128_u64[0])))
              .n64_u64[0];
      LANES128(v30).n128_u64[0] =
          LANES64_OF(
              vadd_f32(
                  COERCE_AS(float32x2_t,
                            LANES128_OF(vextq_s8(v30, v30, 8u)).n128_u64[0]),
                  COERCE_AS(float32x2_t, LANES128(v30).n128_u64[0])))
              .n64_u64[0];
      v31 = vzip1q_s32(v25, v17);
      LANES128(v25).n128_u32[3] =
          LANES64_OF(
              vpadd_f32(COERCE_AS(float32x2_t, LANES128(v28).n128_u64[0]),
                        COERCE_AS(float32x2_t, LANES128(v28).n128_u64[0])))
              .n64_u32[1];
      LANES128(v17).n128_u32[3] =
          LANES64_OF(
              vpadd_f32(COERCE_AS(float32x2_t, LANES128(v30).n128_u64[0]),
                        COERCE_AS(float32x2_t, LANES128(v30).n128_u64[0])))
              .n64_u32[1];
      v32 = vzip1q_s32(v27, COERCE_AS(int32x4_t, 0));
      LANES128(v27).n128_u32[3] =
          LANES64_OF(
              vpadd_f32(COERCE_AS(float32x2_t, LANES128(v29).n128_u64[0]),
                        COERCE_AS(float32x2_t, LANES128(v29).n128_u64[0])))
              .n64_u32[1];
      v33 = vzip2q_s32(v25, v17);
      v34 = vzip2q_s32(v27, COERCE_AS(int32x4_t, 0));
      a1[10] = vzip1q_s32(v31, v32);
      a1[11] = vzip2q_s32(v31, v32);
      a1[12] = vzip1q_s32(v33, v34);
      a1[13] = vzip2q_s32(v33, v34);
      *(long double*)&v35 =
          ((long double (*)(float32x4_t*)) * (_QWORD*)(v18 + 40))(a1);
      v36 = LANES128(*(a1)).n128_u64[0];
      v37 = vsubq_f32(v35, a1[2]);
      v38 = vmulq_f32(v37, v37);
      LANES128(v38).n128_u64[0] =
          LANES64_OF(
              vadd_f32(
                  COERCE_AS(float32x2_t,
                            LANES128_OF(vextq_s8(v38, v38, 8u)).n128_u64[0]),
                  COERCE_AS(float32x2_t, LANES128(v38).n128_u64[0])))
              .n64_u64[0];
      LANES128(a1[5]).n128_u32[0] =
          LANES64_OF(vsqrt_f32(vpadd_f32(
                         COERCE_AS(float32x2_t, LANES128(v38).n128_u64[0]),
                         COERCE_AS(float32x2_t, LANES128(v38).n128_u64[0]))))
              .n64_u32[0];
      v39 = vsubq_f32(COERCE_FLOAT32X4_T(((long double (*)(float32x4_t*)) *
                                          (_QWORD*)(v36 + 40))(a1)),
                      a1[2]);
    }
    v108 = vmulq_f32(v39, v39);
    LANES128(v108).n128_u64[0] =
        LANES64_OF(
            vadd_f32(
                COERCE_AS(float32x2_t,
                          LANES128_OF(vextq_s8(v108, v108, 8u)).n128_u64[0]),
                COERCE_AS(float32x2_t, LANES128(v108).n128_u64[0])))
            .n64_u64[0];
    LANES128(v108).n128_u64[0] =
        LANES64_OF(
            vpadd_f32(COERCE_AS(float32x2_t, LANES128(v108).n128_u64[0]),
                      COERCE_AS(float32x2_t, LANES128(v108).n128_u64[0])))
            .n64_u64[0];
    LANES128(v108).n128_u64[1] = LANES128(v108).n128_u64[0];
    v109 = vrsqrteq_f32(v108);
    v110 = vmulq_f32(v109, vrsqrtsq_f32(v109, vmulq_f32(v108, v109)));
    v191 = vbicq_s8(
        vmulq_f32(v39,
                  vmulq_f32(v110, vrsqrtsq_f32(v110, vmulq_f32(v108, v110)))),
        vceqzq_f32(v108));
    LANES128(a1[5]).n128_f32[2] =
        asinf(LANES128(v191).n128_f32[1]) * 0x1.ca5dc00000000p+5f;
    LANES128(a1[5]).n128_f32[1] =
        atan2f(LANES128(v191).n128_f32[0], LANES128(v191).n128_f32[2]) *
        0x1.ca5dc00000000p+5f;
  }
LABEL_8:
  v149 = LANES128(a1[5]).n128_u32[3];
  if (v149 == 1) {
    if (LANES128(a1[7]).n128_u32[2] == 1) {
      v151 =
          (float)(LANES128(a1[6]).n128_f32[3] * LANES128(a1[7]).n128_f32[0]) /
          LANES128(a1[7]).n128_f32[1];
    }
    else {
      v151 = LANES128(a1[6]).n128_f32[2];
    }
    v152 = atanf(v151 / (float)(LANES128(a1[6]).n128_f32[1] +
                                LANES128(a1[6]).n128_f32[1]));
    v150 = v152 + v152;
  }
  else {
    v150 = 0x0.0p+0f;
    if (v149 != 0) {
      goto LABEL_16;
    }
    v150 =
        (float)((float)(LANES128(a1[6]).n128_f32[0] * 0x1.1df46a0000000p-6f) /
                LANES128(a1[7]).n128_f32[1]) *
        LANES128(a1[7]).n128_f32[0];
  }
  v149 = LANES128(a1[5]).n128_u32[3];
LABEL_16:
  LANES128(a1[8]).n128_f32[3] = v150;
  if (v149 == 1) {
    if (LANES128(a1[7]).n128_u32[2] != 0) {
      v154 = LANES128(a1[6]).n128_f32[3];
    }
    else {
      v154 =
          (float)(LANES128(a1[6]).n128_f32[2] * LANES128(a1[7]).n128_f32[1]) /
          LANES128(a1[7]).n128_f32[0];
    }
    v155 = atanf(v154 / (float)(LANES128(a1[6]).n128_f32[1] +
                                LANES128(a1[6]).n128_f32[1]));
    v153 = v155 + v155;
  }
  else {
    v153 = 0x0.0p+0f;
    if (v149 == 0) {
      v153 = LANES128(a1[6]).n128_f32[0] * 0x1.1df46a0000000p-6f;
    }
  }
  v156 = LANES128(a1[5]).n128_u32[3];
  LANES128(a1[9]).n128_f32[0] = v153;
  if (v156 == 1) {
    LANES128(a1[6]).n128_f32[0] = v153 * 0x1.ca5dc00000000p+5f;
  }
  else if (v156 == 0) {
    if (LANES128(a1[7]).n128_u32[2] != 0) {
      v157 = LANES128(a1[6]).n128_f32[3];
    }
    else {
      v157 =
          (float)(LANES128(a1[6]).n128_f32[2] * LANES128(a1[7]).n128_f32[1]) /
          LANES128(a1[7]).n128_f32[0];
    }
    LANES128(a1[6]).n128_f32[1] = (float)(v157 * 0x1.0000000000000p-1f) /
                                  tanf(v153 * 0x1.0000000000000p-1f);
  }
  v158 = LANES128(*(a1)).n128_u32[3];
  if (v158 == 1) {
    v173 = LANES128(a1[8]).n128_f32[2];
    v174 = LANES128(a1[7]).n128_f32[3];
    v175 = LANES128(a1[8]).n128_f32[0] - v174;
    *(float*)&v176 = (float)-v174 / v175;
    v177 = 0x1.0000000000000p+1f /
           (float)((float)(v173 * LANES128(a1[7]).n128_f32[0]) /
                   LANES128(a1[7]).n128_f32[1]);
    *(float*)&v178 = -0x1.0000000000000p+0f / v175;
    LANES128(v179).n128_u64[0] = 0;
    LANES128(a1[22]).n128_u32[1] = v176;
    v180 = v177;
    LODWORD(v181) = 0;
    LANES128(v179).n128_u64[1] = v178;
    LANES128(a1[22]).n128_f32[0] = *(float*)&v178;
    *((float*)&v181 + 1) = 0x1.0000000000000p+1f / v173;
    LANES128(v182).n128_u64[0] = 0;
    a1[14] = COERCE_AS(float32x4_t, LODWORD(v180));
    a1[15] = COERCE_AS(float32x4_t, v181);
    LANES128(v182).n128_u64[1] =
        __PAIR64__(COERCE_UNSIGNED_INT(0x1.0000000000000p+0f), v176);
    a1[16] = v179;
    a1[17] = v182;
  }
  else if (v158 == 0) {
    v159 = 0x1.0000000000000p+0f /
           tanf(LANES128(a1[9]).n128_f32[0] * 0x1.0000000000000p-1f);
    v160 = LANES128(a1[8]).n128_u8[5] == 0;
    v162 = LANES128(a1[7]).n128_f32[3];
    v161 = LANES128(a1[8]).n128_f32[0];
    LANES128(v168).n128_f32[0] = -0x1.0000000000000p+0f / (float)(v161 - v162);
    v163 = v159 *
           (float)(LANES128(a1[7]).n128_f32[1] / LANES128(a1[7]).n128_f32[0]);
    *(float*)&v164 = v161 * LANES128(v168).n128_f32[0];
    v165 = v161 * v162;
    v166 = -v162;
    v167 = v165 * LANES128(v168).n128_f32[0];
    LANES128(v168).n128_u32[1] = 0;
    LANES128(v168).n128_u64[1] = 0;
    LANES128(a1[22]).n128_f32[0] = *(float*)&v164;
    v169 = v164 | 0xBF80000000000000LL;
    LANES128(a1[22]).n128_f32[1] = v167;
    if (!v160) {
      v167 = v166;
    }
    LANES128(v170).n128_u64[0] = 0;
    LANES128(v170).n128_u32[3] = 0;
    LANES128(v168).n128_f32[0] = v163;
    LANES128(v171).n128_u32[0] = 0;
    LANES128(v171).n128_u64[1] = 0;
    if (!v160) {
      v169 = 0xBF800000BF800000LL;
    }
    LANES128(v170).n128_f32[2] = v167;
    LANES128(v171).n128_f32[1] = v159;
    LANES128(v172).n128_u64[0] = 0;
    a1[14] = v168;
    a1[15] = v171;
    LANES128(v172).n128_u64[1] = v169;
    a1[16] = v172;
    a1[17] = v170;
  }
  if (LANES128(a1[8]).n128_u8[4] == 1) {
    v183 = a1[16];
    v184 = a1[17];
    v185 = *((float32x4_t*)GameData_212c2b0 + 1);
    v186 = vmlaq_laneq_f32(
        vmlaq_laneq_f32(
            vmlaq_lane_f32(
                vmulq_n_f32(*(float32x4_t*)GameData_212c2b0,
                            COERCE_FLOAT(*(_OWORD*)&a1[15])),
                v185, COERCE_AS(float32x2_t, LANES128(a1[15]).n128_u64[0]), 1),
            COERCE_AS(float32x4_t, GameData_1a82c50), a1[15], 2),
        COERCE_AS(float32x4_t, GameData_1a829f0), a1[15], 3);
    v187 = vmlaq_lane_f32(
        vmulq_n_f32(*(float32x4_t*)GameData_212c2b0,
                    LANES128(v183).n128_f32[0]),
        v185, COERCE_AS(float32x2_t, LANES128(v183).n128_u64[0]), 1);
    v188 = vmlaq_lane_f32(
        vmulq_n_f32(*(float32x4_t*)GameData_212c2b0,
                    LANES128(v184).n128_f32[0]),
        v185, COERCE_AS(float32x2_t, LANES128(v184).n128_u64[0]), 1);
    a1[14] = vmlaq_laneq_f32(
        vmlaq_laneq_f32(
            vmlaq_lane_f32(
                vmulq_n_f32(*(float32x4_t*)GameData_212c2b0,
                            COERCE_FLOAT(*(_OWORD*)&a1[14])),
                v185, COERCE_AS(float32x2_t, LANES128(a1[14]).n128_u64[0]), 1),
            COERCE_AS(float32x4_t, GameData_1a82c50), a1[14], 2),
        COERCE_AS(float32x4_t, GameData_1a829f0), a1[14], 3);
    a1[15] = v186;
    a1[16] = vmlaq_laneq_f32(
        vmlaq_laneq_f32(v187, COERCE_AS(float32x4_t, GameData_1a82c50), v183,
                        2),
        COERCE_AS(float32x4_t, GameData_1a829f0), v183, 3);
    a1[17] = vmlaq_laneq_f32(
        vmlaq_laneq_f32(v188, COERCE_AS(float32x4_t, GameData_1a82c50), v184,
                        2),
        COERCE_AS(float32x4_t, GameData_1a829f0), v184, 3);
    LANES128(a1[22]).n128_f32[0] =
        -0x1.0000000000000p+0f - LANES128(a1[22]).n128_f32[0];
    LANES128(a1[22]).n128_f32[1] = -LANES128(a1[22]).n128_f32[1];
  }
  v189 = LANES128(a1[23]).n128_u64[0];
  for (i = LANES128(a1[23]).n128_u64[1]; v189 != i; v189 += 24LL) {
    (*(void (**)(_QWORD, float32x4_t*))(**(_QWORD**)(v189 + 16) + 16LL))(
        *(_QWORD*)(v189 + 16), a1);
  }
}

#pragma GCC visibility pop
