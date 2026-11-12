#include "decomp/pseudo_helpers.h"

#include "decomp/pseudo_float.h"

#pragma GCC visibility push(hidden)

_QWORD* LayoutAccessor_1560520(__int64*, __int64, __int64, __int64);
__attribute__((swiftcall)) void LayoutAccessor_1560070(PSEUDO_X8, __int64*,
                                                       const char*);
__attribute__((swiftcall)) void game_1366bd0(PSEUDO_X8, __int64, __int64,
                                             __int64);
__attribute__((swiftcall)) void game_cmdbtl_f901d0(PSEUDO_X8, float, float);
__int64* GameRoutine_14a5400(__int64, __int64);
__int64* llvm_libcxx_21_libcxx_include___vector_a583e0(__int64* result, __int64,
                                                       char, char, int, float);
__int64 GameHr_1562680(__int64 result, const char*, float);
__int64 GameHr_156e320(__int64 result, __int64*, __int64, __int64, char);
__int64 GameHr_16520a0(__int64, char);
__int64 GameHr_637cc0(__int64*, __int64*, _QWORD*);
__int64 GameRoutine_15704e0(__int64, int*, __int64, _DWORD**);
__int64 LayoutAccessor_155e830(__int64 result, char);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 fw_text_String_CopyTerminated(__int64*, __int64, unsigned __int64);
__int64 memmove(__int64, __int64, unsigned __int64);
__int64 std___1___hash_memory(__int64, unsigned __int64);
__int64 std___1___next_prime(unsigned __int64);
__int64 std___1___shared_weak_count___release_weak(__int64);
__int64 std___1___shared_weak_count_lock(__int64);
__int64 ui_1685c40(_QWORD*, int*);
__int64 ui_LayoutAccessor_SetPaneVisible(__int64 result, __int64, char);
__int64 ui_LayoutAccessor_SetScale(__int64 result, _QWORD*);
bool game_gmap_GmapUIDef_SetQuestIcon(__int64, __int64, char);
char* game_util_Format(const char*, ...);
extern _BYTE GameData_1bee1cc[80];
extern _DWORD GameData_1b5cf4c[512];
extern _UNKNOWN* GameData_212c540;
extern _UNKNOWN* GameData_212c550;
extern _UNKNOWN* GameData_212c558;
extern _UNKNOWN* GameData_212c560;
extern _UNKNOWN* std___1_piecewise_construct_ptr;
extern _UNKNOWN GameData_21a6130;
extern _UNKNOWN GameData_21a6170;
extern _UNKNOWN GameData_21a6190;
extern _UNKNOWN GameData_21a61b0;
extern __int128 GameData_21a6120;
extern __int128 GameData_21a6160;
extern __int128 GameData_21a6180;
extern __int128 GameData_21a61a0;
extern __int64 (*GameData_2080580[])();
extern __int64 (*GameData_2080680[])();
extern __int64 (*GameData_2080700[])();
extern __int64 (*GameData_2080780[])();
extern __int64 GameData_21c9700;
extern __int64 GameData_2258dc0;
extern __int64 GameData_2258dc8;
extern __int64 fw_memory_g_heap_manager_ptr;
extern int GameData_1b5d74c[36];
float GameRoutine_a56600(float32x2_t*, float*, float32x4_t*, float32x4_t, float,
                         float);
float ui_LayoutAccessor_SetTranslate(__int64*, __int64);
int __cxa_guard_acquire(__int64);
int memcmp(__int64, __int64, unsigned __int64);
void GameHr_1686120(int, __int64, __int64);
void GameRoutine_adb120(__int64*, unsigned __int64);
void __attribute__((noreturn)) GameRoutine_1654e20();
void __attribute__((noreturn)) GameRoutine_60a210();
void __attribute__((noreturn)) GameRoutine_60a310();
void __attribute__((noreturn)) String_60a1d0();
void __cxa_guard_release(__int64);
void game_gameui_1596b00(__int64);
void nn_mem_StandardAllocator_Free(__int64, __int64);
void game_templates_a55a00(__int64 a1, __int64* a2, unsigned __int8 a3, char a4,
                           float32x4_t* a5, float a6, float a7, float a8,
                           double a9, double a10, long double a11);
float32x4_t game_templates_a56ac0(_BYTE* a1, float32x4_t result);
float game_templates_a5e890(float a1, float a2);
float game_templates_a5eaa0(float a1, float a2, float a3);
__int64 game_templates_b36de0(__int64 a1, unsigned int* a2, _DWORD** a3);
_QWORD* game_templates_be2ec0(__int64 a1, unsigned __int8* a2, __int64** a3);
void game_templates_be34a0(__int64 a1, unsigned __int8* a2, char* a3);
__int64* game_templates_14a51c0(__int64 a1, __int64* a2, __int64* a3);
__attribute__((swiftcall)) void
game_templates_14a52c0(PSEUDO_X8 x8_, __int64 a1, __int64* a2, __int64* a3);
void game_templates_156e100(__int64* a1);
void game_templates_1680240(__int64 a1);
void game_templates_16824c0(__int64 a1);
__int64* game_templates_17d57c0(__int64* a1, __int64** a2);

void game_templates_a55a00(__int64 a1, __int64* a2, unsigned __int8 a3, char a4,
                           float32x4_t* a5, float a6, float a7, float a8,
                           double a9, double a10, long double a11)
{
  float32x4_t* v12;
  float32x4_t* v13;
  float v16;
  char v17;
  float v18;
  float v19;
  float v20;
  float v21;
  float32x4_t v22;
  unsigned __int64 v23;
  float32x4_t v24;
  __int128 v25;
  float32x4_t v26;
  float32x4_t** v27;
  float* v28;
  float v29;
  float* v30;
  float v31;
  float32x4_t v32;
  float32x4_t v33;
  float32x4_t v34;
  unsigned __int64 v35;
  float32x4_t v36;
  float32x4_t v37;
  float v38;
  float v39;
  float v40;
  float v41;
  float v42;
  float v43;
  float v44;
  float32x4_t v45;
  float v46;
  float v47;
  float v48;
  float v49;
  float v50;
  float v51;
  float v52;
  float v53;
  float v54;
  float32x4_t v55;
  float32x4_t v56;
  float v57;
  float v58;
  float32x4_t v59;
  float32x4_t v60;
  int8x16_t v61;
  float32x4_t v62;
  float32x4_t v63;
  int8x16_t v64;
  float32x4_t v65;
  int8x16_t v66;
  float32x4_t v67;
  float32x4_t v68;
  int8x16_t v69;
  unsigned __int8 v70;
  float32x4_t v71;
  int8x16_t v72;
  float32x4_t v73;
  float32x4_t* v74;
  float v75;
  float32x4_t v76;
  float32x4_t v77;
  float32x4_t v78;
  float32x4_t v79;
  int v80;
  float32x4_t v81;
  float32x4_t v82;
  float32x4_t v83;
  float32x4_t v84;
  float32x4_t v85;
  int v86;
  __int64 v87;
  int v88;
  __int64 v89;
  int v90;
  __int64 v91;
  int v92;
  __int64 v93;
  int v94;
  __int64 v95;
  __int64 v96;
  float32x4_t** v97;
  float32x4_t** v98;
  float32x4_t** v99;
  float32x4_t** v100;
  float32x4_t** v101;
  float32x4_t v102;
  float32x4_t* v103;
  _QWORD* v104;
  float32x4_t v105;
  __int128 v106;
  float32x4_t** v107;
  float32x4_t v108;
  int8x16_t v109;
  float v110;
  float32x4_t v111;
  int8x16_t v112;
  __int64 v113;
  float32x4_t v114;
  float32x4_t** v115;
  float32x4_t v116;
  float32x4_t v117;
  float32x4_t v118;
  float32x4_t v119;
  float32x4_t v120;
  float32x4_t v121;
  float32x4_t** v122;
  float32x4_t* v123;
  float32x4_t* v124;
  float32x4_t v125;
  int8x16_t v126;
  float v127;
  float32x4_t v128;
  int8x16_t v129;
  float32x4_t v130;
  int8x16_t v131;
  int v132;
  __int64 v133;
  float32x4_t** v134;
  float32x4_t** v135;
  float32x4_t v136;
  float32x4_t v137;
  float32x4_t v138;
  float32x4_t** v139;
  float32x4_t* v140;
  float32x4_t* v141;
  float32x4_t v142;
  int8x16_t v143;
  float v144;
  float32x4_t v145;
  int8x16_t v146;
  __int64 v147;
  float32x4_t v148;
  long double v149;
  long double v150;
  float32x4_t v151;
  float32x4_t v152;
  float32x4_t v153;
  float v156;
  float32x4_t v157;
  float32x4_t v158;
  float32x4_t v159;
  float32x4_t v160;
  float32x4_t v161;
  float32x4_t v162;
  float32x4_t v163;
  float32x4_t v164;
  float32x4_t v165;
  int8x16_t v166;
  float v167;
  float v168;
  long double v169;
  float32x4_t v170;
  long double v171;
  long double v172;
  float32x4_t v173;
  float32x4_t v174;
  float32x4_t v175;
  float32x4_t v176;
  float32x4_t v177[2];

  if (a6 <= 0x0.0p+0f) {
    return;
  }
  if ((*(_BYTE*)(a1 + 128) & 1) == 0) {
    return;
  }
  v12 = *(float32x4_t**)(a1 + 8);
  v13 = *(float32x4_t**)(a1 + 16);
  if (v12 == v13) {
    return;
  }
  if (a6 <= 0x1.0000000000000p+0f) {
    v16 = a6;
  }
  else {
    v16 = 0x1.0000000000000p+0f;
  }
  v168 = v16;
  v17 = *(_BYTE*)(a1 + 129);
  if ((a3 & (*(float*)(a1 + 164) != 0x0.0p+0f)) != 0) {
    v18 = *(float*)(a1 + 164);
  }
  else {
    v18 = *(float*)(a1 + 148);
  }
  v19 = -v16;
  if (*(_BYTE*)(a1 + 129) == 0) {
    v19 = v16;
  }
  v20 = *(float*)(a1 + 140) + (float)(v19 / 0x1.e000000000000p+5f);
  *(float*)(a1 + 140) = v20;
  if (fabsf(v20) > 0x1.0000000000000p+8f) {
    *(_BYTE*)(a1 + 129) = v17 ^ 1;
  }
  v21 = *(float*)(a1 + 152);
  if (a8 > 0x0.0p+0f) {
    v21 = a8;
  }
  v167 = v21;
  v173 = (__typeof__(v173)){0};
  do {
    v27 = (float32x4_t**)LANES128(*(v12)).n128_u64[0];
    if (LANES128(*(v12)).n128_u64[0] == 0) {
      v22 = v12[4];
      v23 = LANES128(v12[6]).n128_u64[0];
      LANES128(v12[5]).n128_u64[0] = LANES128(v22).n128_u64[0];
      v24 = v12[5];
      LANES128(v24).n128_u64[1] = LANES128(v22).n128_u32[2];
      v12[5] = v24;
      v25 = *(_OWORD*)(v23 + 48);
      LANES128(v12[4]).n128_u64[0] = v25;
      v26 = v12[4];
      LANES128(v26).n128_u64[1] = DWORD2(v25);
      v12[4] = v26;
      v173 = vsubq_f32(v26, v24);
      goto LABEL_18;
    }
    if (LANES128(v12[6]).n128_u8[12] != 0) {
      LODWORD(a11) = LANES128(v12[7]).n128_u32[1];
    }
    else {
      *(float*)&a11 = v18;
    }
    if (LANES128(v12[6]).n128_u8[12] != 0) {
      v28 = &LANES128(v12[7]).n128_f32[3];
    }
    else {
      v28 = (float*)(a1 + 160);
    }
    v29 = *v28;
    v30 = (float*)&v12[7];
    if (LANES128(v12[6]).n128_u8[12] == 0) {
      v30 = (float*)(a1 + 144);
    }
    v31 = *v30;
    v32 = vmulq_n_f32(v173, v167);
    v33 = vaddq_f32(v32, v12[5]);
    v34 = vaddq_f32(v32, v12[4]);
    LODWORD(v35) = 0;
    v12[4] = v34;
    v12[5] = v33;
    LANES128(v12[5]).n128_u64[0] = LANES128(v34).n128_u64[0];
    *((float*)&v35 + 1) = v29 * -0x1.1111120000000p-6f;
    v36 = vaddq_f32(
        COERCE_AS(float32x4_t, v35),
        vmulq_n_f32(vsubq_f32(v34, v33), 0x1.0000000000000p+0f - v31));
    v37 = v12[5];
    LANES128(v37).n128_u64[1] = LANES128(v34).n128_u32[2];
    v12[5] = v37;
    if ((a4 & 1) == 0) {
      v38 = *(float*)(a1 + 140);
      v169 = a11;
      v161 = v36;
      v39 =
          fabsf(LANES128(v34).n128_f32[2] +
                (float)(LANES128(v34).n128_f32[0] + LANES128(v34).n128_f32[1]));
      v40 = LANES128(*(a5)).n128_f32[3];
      if (v40 <= 0x0.0p+0f) {
        v44 = 0x1.0000000000000p+0f;
        if ((LANES128(*(a5)).n128_u8[0] & 1) == 0) {
        LABEL_34:
          if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6130,
                                    memory_order_acquire) &
               1) == 0 &&
              __cxa_guard_acquire((__int64)&GameData_21a6130) != 0) {
            v96 = *((_QWORD*)GameData_212c540 + 1);
            *(_QWORD*)&GameData_21a6120 = *(_QWORD*)GameData_212c540;
            *((_QWORD*)&GameData_21a6120 + 1) = v96;
            __cxa_guard_release((__int64)&GameData_21a6130);
          }
          v45 = COERCE_AS(float32x4_t, GameData_21a6120);
          goto LABEL_38;
        }
      }
      else {
        v41 = LANES128(*(a5)).n128_f32[1] / v40;
        if (LANES128(*(a5)).n128_u8[0] != 0) {
          v42 = 0x1.0000000000000p+0f;
        }
        else {
          v42 = 0x0.0p+0f;
        }
        v43 = fminf(fmaxf(v41, 0x0.0p+0f), 0x1.0000000000000p+0f);
        v44 = (float)(PSEUDO_UNFUSED(v42 * v43)) +
              (float)(LANES128(*(a5)).n128_f32[2] *
                      (float)(0x1.0000000000000p+0f - v43));
        if (v44 <= 0x0.0p+0f) {
          goto LABEL_34;
        }
      }
      v156 = v44;
      v46 = LANES128(a5[1]).n128_f32[1] +
            (float)((float)(v39 + v38) * 0x1.0000000000000p+2f);
      v47 = v46 * 0x1.0000000000000p-3f;
      v48 = v46 * 0x1.0000000000000p-2f;
      v49 = game_templates_a5e890(v46 * 0x1.0000000000000p-3f,
                                  v46 * 0x1.0000000000000p-2f);
      v50 = v46 * 0x1.0000000000000p-1f;
      v51 = game_templates_a5e890(v48, v50);
      v52 = game_templates_a5e890(v50, v47);
      v53 = LANES128(a5[2]).n128_f32[0];
      v54 = LANES128(a5[1]).n128_f32[2];
      v55 = a5[3];
      LANES128(v56).n128_u32[3] = 0;
      v57 = vmuls_lane_f32(
          v54 * (float)((float)(v53 * v52) + 0x1.0000000000000p+0f), v55, 2);
      v58 = vmuls_lane_f32(
                v54 * (float)((float)(v53 * v51) + 0x1.0000000000000p+0f),
                COERCE_AS(float32x2_t, LANES128(v55).n128_u64[0]), 1) *
            0x1.99999a0000000p-4f;
      LANES128(v56).n128_f32[0] =
          (float)((float)(v54 *
                          (float)((float)(v53 * v49) + 0x1.0000000000000p+0f)) *
                  LANES128(v55).n128_f32[0]) *
          0x1.99999a0000000p-4f;
      LANES128(v56).n128_f32[1] = v58;
      LANES128(v56).n128_f32[2] = v57 * 0x1.99999a0000000p-4f;
      v45 = vmulq_n_f32(v56, v156);
    LABEL_38:
      v157 = v45;
      game_cmdbtl_f901d0((void*)(v177), v39, v38);
      a11 = v169;
      v36 = vaddq_f32(v161, vaddq_f32(v157, v177[0]));
      v34 = v12[4];
    }
    v59 = vaddq_f32(v34, vmulq_n_f32(v36, v168));
    v12[4] = v59;
    if (*v27 != nullptr) {
      v60 = vsubq_f32(*((float32x4_t*)v27 + 4), (*v27)[4]);
    }
    else {
      v60 = *v27[12];
    }
    LANES128(v60).n128_u32[3] = 0;
    v61 = vmulq_f32(v60, v60);
    LANES128(v61).n128_u64[0] =
        LANES64_OF(
            vadd_f32(COERCE_AS(float32x2_t,
                               LANES128_OF(vextq_s8(v61, v61, 8u)).n128_u64[0]),
                     COERCE_AS(float32x2_t, LANES128(v61).n128_u64[0])))
            .n64_u64[0];
    LANES128(v61).n128_u64[0] =
        LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v61).n128_u64[0]),
                             COERCE_AS(float32x2_t, LANES128(v61).n128_u64[0])))
            .n64_u64[0];
    if (LANES128(v61).n128_f32[0] == 0x0.0p+0f) {
      if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6190,
                                memory_order_acquire) &
           1) == 0) {
        v171 = a11;
        v92 = __cxa_guard_acquire((__int64)&GameData_21a6190);
        a11 = v171;
        if (v92 != 0) {
          v93 = *((_QWORD*)GameData_212c558 + 1);
          *(_QWORD*)&GameData_21a6180 = *(_QWORD*)GameData_212c558;
          *((_QWORD*)&GameData_21a6180 + 1) = v93;
          __cxa_guard_release((__int64)&GameData_21a6190);
          a11 = v171;
        }
      }
      v64 = COERCE_AS(int8x16_t, GameData_21a6180);
      v59 = v12[4];
      LANES128(v64).n128_u32[3] = 0;
    }
    else {
      LANES128(v61).n128_u64[1] = LANES128(v61).n128_u64[0];
      v62 = vrsqrteq_f32(v61);
      v63 = vmulq_f32(v62, vrsqrtsq_f32(v62, vmulq_f32(v61, v62)));
      v64 = vbicq_s8(
          vmulq_f32(v60,
                    vmulq_f32(v63, vrsqrtsq_f32(v63, vmulq_f32(v61, v63)))),
          vceqzq_f32(v61));
    }
    v65 = vsubq_f32(v59, *((float32x4_t*)v27 + 4));
    v66 = vmulq_f32(v65, v65);
    LANES128(v66).n128_u64[0] =
        LANES64_OF(
            vadd_f32(COERCE_AS(float32x2_t,
                               LANES128_OF(vextq_s8(v66, v66, 8u)).n128_u64[0]),
                     COERCE_AS(float32x2_t, LANES128(v66).n128_u64[0])))
            .n64_u64[0];
    LANES128(v66).n128_u64[0] =
        LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v66).n128_u64[0]),
                             COERCE_AS(float32x2_t, LANES128(v66).n128_u64[0])))
            .n64_u64[0];
    if (LANES128(v66).n128_f32[0] == 0x0.0p+0f) {
      if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6190,
                                memory_order_acquire) &
           1) == 0) {
        v172 = a11;
        v166 = v64;
        v94 = __cxa_guard_acquire((__int64)&GameData_21a6190);
        v64 = v166;
        a11 = v172;
        if (v94 != 0) {
          v95 = *((_QWORD*)GameData_212c558 + 1);
          *(_QWORD*)&GameData_21a6180 = *(_QWORD*)GameData_212c558;
          *((_QWORD*)&GameData_21a6180 + 1) = v95;
          __cxa_guard_release((__int64)&GameData_21a6190);
          v64 = v166;
          a11 = v172;
        }
      }
      v69 = COERCE_AS(int8x16_t, GameData_21a6180);
      LANES128(v69).n128_u32[3] = 0;
    }
    else {
      LANES128(v66).n128_u64[1] = LANES128(v66).n128_u64[0];
      v67 = vrsqrteq_f32(v66);
      v68 = vmulq_f32(v67, vrsqrtsq_f32(v67, vmulq_f32(v66, v67)));
      v69 = vbicq_s8(
          vmulq_f32(v65,
                    vmulq_f32(v68, vrsqrtsq_f32(v68, vmulq_f32(v66, v68)))),
          vceqzq_f32(v66));
    }
    v170 = *(float32x4_t*)(LANES128(v12[6]).n128_u64[0] + 48);
    v70 = LANES128(v12[8]).n128_u8[0];
    v71 = vsubq_f32(
        v170,
        *(float32x4_t*)(*(_QWORD*)(LANES128(*(v12)).n128_u64[0] + 96) + 48LL));
    v72 = vmulq_f32(v71, v71);
    LANES128(v72).n128_u64[0] =
        LANES64_OF(
            vadd_f32(COERCE_AS(float32x2_t,
                               LANES128_OF(vextq_s8(v72, v72, 8u)).n128_u64[0]),
                     COERCE_AS(float32x2_t, LANES128(v72).n128_u64[0])))
            .n64_u64[0];
    v73 = vmulq_n_f32(
        vaddq_f32(vmulq_n_f32(v64, *(float*)&a11),
                  vmulq_n_f32(v69, 0x1.0000000000000p+0f - *(float*)&a11)),
        LANES64_OF(vsqrt_f32(vpadd_f32(
                       COERCE_AS(float32x2_t, LANES128(v72).n128_u64[0]),
                       COERCE_AS(float32x2_t, LANES128(v72).n128_u64[0]))))
            .n64_f32[0]);
    v177[0] = v73;
    if ((v70 & 1) != 0 || LANES128(v12[8]).n128_u8[12] == 1) {
      v74 = v27[12];
      v75 = *(float*)(a1 + 168);
      v77 = *v74;
      v76 = v74[1];
      v78 = v74[2];
      if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6170,
                                memory_order_acquire) &
           1) == 0) {
        v158 = v76;
        v163 = v78;
        v151 = v77;
        v86 = __cxa_guard_acquire((__int64)&GameData_21a6170);
        v77 = v151;
        v76 = v158;
        v78 = v163;
        if (v86 != 0) {
          v87 = *((_QWORD*)GameData_212c550 + 1);
          *(_QWORD*)&GameData_21a6160 = *(_QWORD*)GameData_212c550;
          *((_QWORD*)&GameData_21a6160 + 1) = v87;
          __cxa_guard_release((__int64)&GameData_21a6170);
          v77 = v151;
          v76 = v158;
          v78 = v163;
        }
      }
      *(float*)&a11 = 0x1.0000000000000p+0f / v75;
      v176 = vmulq_n_f32(
          vmlaq_laneq_f32(
              vmlaq_lane_f32(vmulq_n_f32(v77, *(float*)&GameData_21a6160), v76,
                             *(float32x2_t*)&GameData_21a6160, 1),
              v78, COERCE_AS(float32x4_t, GameData_21a6160), 2),
          0x1.0000000000000p+0f / v75);
      if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a61b0,
                                memory_order_acquire) &
           1) == 0) {
        v149 = a11;
        v152 = v77;
        v159 = v76;
        v164 = v78;
        v88 = __cxa_guard_acquire((__int64)&GameData_21a61b0);
        a11 = v149;
        v77 = v152;
        v76 = v159;
        v78 = v164;
        if (v88 != 0) {
          v89 = *((_QWORD*)GameData_212c560 + 1);
          *(_QWORD*)&GameData_21a61a0 = *(_QWORD*)GameData_212c560;
          *((_QWORD*)&GameData_21a61a0 + 1) = v89;
          __cxa_guard_release((__int64)&GameData_21a61b0);
          a11 = v149;
          v77 = v152;
          v76 = v159;
          v78 = v164;
        }
      }
      v79 = vmulq_n_f32(
          vmlaq_laneq_f32(
              vmlaq_lane_f32(vmulq_n_f32(v77, *(float*)&GameData_21a61a0), v76,
                             *(float32x2_t*)&GameData_21a61a0, 1),
              v78, COERCE_AS(float32x4_t, GameData_21a61a0), 2),
          *(float*)&a11);
      v175 = v79;
      if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6190,
                                memory_order_acquire) &
           1) == 0) {
        v150 = a11;
        v153 = v77;
        v148 = v79;
        v160 = v76;
        v165 = v78;
        v90 = __cxa_guard_acquire((__int64)&GameData_21a6190);
        v79 = v148;
        a11 = v150;
        v77 = v153;
        v76 = v160;
        v78 = v165;
        if (v90 != 0) {
          v91 = *((_QWORD*)GameData_212c558 + 1);
          *(_QWORD*)&GameData_21a6180 = *(_QWORD*)GameData_212c558;
          *((_QWORD*)&GameData_21a6180 + 1) = v91;
          __cxa_guard_release((__int64)&GameData_21a6190);
          v79 = v148;
          a11 = v150;
          v77 = v153;
          v76 = v160;
          v78 = v165;
        }
      }
      v80 = LANES128(v12[8]).n128_u8[0];
      v81 = vmulq_n_f32(
          vmlaq_laneq_f32(
              vmlaq_lane_f32(vmulq_n_f32(v77, *(float*)&GameData_21a6180), v76,
                             *(float32x2_t*)&GameData_21a6180, 1),
              v78, COERCE_AS(float32x4_t, GameData_21a6180), 2),
          *(float*)&a11);
      v174 = v81;
      if (v80 == 1) {
        v162 = v81;
        GameRoutine_a56600((float32x2_t*)&v174, (float*)&v176, v177, v79,
                           LANES128(v12[8]).n128_f32[1],
                           LANES128(v12[8]).n128_f32[2]);
        v81 = v162;
      }
      if (LANES128(v12[8]).n128_u8[12] == 1) {
        GameRoutine_a56600((float32x2_t*)&v175, (float*)&v176, v177, v81,
                           LANES128(v12[9]).n128_f32[0],
                           LANES128(v12[9]).n128_f32[1]);
      }
      v73 = v177[0];
    }
    v82 = vaddq_f32(v73, *((float32x4_t*)v27 + 4));
    LANES128(v12[4]).n128_u64[0] = LANES128(v82).n128_u64[0];
    v83 = v12[4];
    LANES128(v83).n128_u64[1] = LANES128(v82).n128_u32[2];
    v12[4] = v83;
    if ((*(_BYTE*)(a1 + 130) & 1) == 0) {
      llvm_libcxx_21_libcxx_include___vector_a583e0(
          a2, (__int64)v12, *(_BYTE*)(a1 + 131), *(_BYTE*)(a1 + 132),
          *(_DWORD*)(a1 + 136), *(float*)(a1 + 168));
    }
    if (*(_BYTE*)(a1 + 133) == 1) {
      v84 = vaddq_f32(vmulq_n_f32(v170, a7),
                      vmulq_n_f32(v12[4], 0x1.0000000000000p+0f - a7));
      LANES128(v12[4]).n128_u64[0] = LANES128(v84).n128_u64[0];
      v85 = v12[4];
      LANES128(v85).n128_u64[1] = LANES128(v84).n128_u32[2];
      v12[4] = v85;
    }
  LABEL_18:
    v12 += 10;
  } while (v12 != v13);
  v97 = *(float32x4_t***)(a1 + 56);
  v98 = *(float32x4_t***)(a1 + 64);
  v99 = *(float32x4_t***)(a1 + 32);
  if (v98 == v97) {
    v134 = *(float32x4_t***)(a1 + 40);
    if (v99 != v134) {
      v135 = v99 + 2;
      do {
        v141 = *(v135 - 2);
        v140 = *(v135 - 1);
        v139 = v135 - 2;
        v142 = vsubq_f32(*v140, *v141);
        v143 = vmulq_f32(v142, v142);
        LANES128(v143).n128_u64[0] =
            LANES64_OF(
                vadd_f32(COERCE_AS(
                             float32x2_t,
                             LANES128_OF(vextq_s8(v143, v143, 8u)).n128_u64[0]),
                         COERCE_AS(float32x2_t, LANES128(v143).n128_u64[0])))
                .n64_u64[0];
        v144 =
            LANES64_OF(
                vpadd_f32(COERCE_AS(float32x2_t, LANES128(v143).n128_u64[0]),
                          COERCE_AS(float32x2_t, LANES128(v143).n128_u64[0])))
                .n64_f32[0];
        if (v144 == 0x0.0p+0f) {
          if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6130,
                                    memory_order_acquire) &
               1) == 0 &&
              __cxa_guard_acquire((__int64)&GameData_21a6130) != 0) {
            v147 = *((_QWORD*)GameData_212c540 + 1);
            *(_QWORD*)&GameData_21a6120 = *(_QWORD*)GameData_212c540;
            *((_QWORD*)&GameData_21a6120 + 1) = v147;
            __cxa_guard_release((__int64)&GameData_21a6130);
          }
          v136 = COERCE_AS(float32x4_t, GameData_21a6120);
        }
        else {
          v145 = vsubq_f32((*v135)[3], v135[1][3]);
          v146 = vmulq_f32(v145, v145);
          LANES128(v146).n128_u64[0] =
              LANES64_OF(
                  vadd_f32(
                      COERCE_AS(
                          float32x2_t,
                          LANES128_OF(vextq_s8(v146, v146, 8u)).n128_u64[0]),
                      COERCE_AS(float32x2_t, LANES128(v146).n128_u64[0])))
                  .n64_u64[0];
          v136 = vmulq_n_f32(
              v142,
              (float)(0x1.0000000000000p+0f / sqrtf(v144)) *
                  LANES64_OF(
                      vsqrt_f32(vpadd_f32(
                          COERCE_AS(float32x2_t, LANES128(v146).n128_u64[0]),
                          COERCE_AS(float32x2_t, LANES128(v146).n128_u64[0]))))
                      .n64_f32[0]);
        }
        v135 += 4;
        v137 = vaddq_f32(v136, *v141);
        LANES128(*(v140)).n128_u64[0] = LANES128(v137).n128_u64[0];
        v138 = *v140;
        LANES128(v138).n128_u64[1] = LANES128(v137).n128_u32[2];
        *v140 = v138;
      } while (v139 + 4 != v134);
    }
  }
  else {
    v100 = *(float32x4_t***)(a1 + 40);
    if (v99 != v100) {
      v101 = v99 + 3;
      do {
        v107 = v101 - 3;
        v108 = vsubq_f32(**(v101 - 2), **(v101 - 3));
        v109 = vmulq_f32(v108, v108);
        LANES128(v109).n128_u64[0] =
            LANES64_OF(
                vadd_f32(COERCE_AS(
                             float32x2_t,
                             LANES128_OF(vextq_s8(v109, v109, 8u)).n128_u64[0]),
                         COERCE_AS(float32x2_t, LANES128(v109).n128_u64[0])))
                .n64_u64[0];
        v110 =
            LANES64_OF(
                vpadd_f32(COERCE_AS(float32x2_t, LANES128(v109).n128_u64[0]),
                          COERCE_AS(float32x2_t, LANES128(v109).n128_u64[0])))
                .n64_f32[0];
        if (v110 == 0x0.0p+0f) {
          if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6130,
                                    memory_order_acquire) &
               1) == 0 &&
              __cxa_guard_acquire((__int64)&GameData_21a6130) != 0) {
            v113 = *((_QWORD*)GameData_212c540 + 1);
            *(_QWORD*)&GameData_21a6120 = *(_QWORD*)GameData_212c540;
            *((_QWORD*)&GameData_21a6120 + 1) = v113;
            __cxa_guard_release((__int64)&GameData_21a6130);
          }
          v102 = COERCE_AS(float32x4_t, GameData_21a6120);
        }
        else {
          v111 = vsubq_f32((*(v101 - 1))[3], (*v101)[3]);
          v112 = vmulq_f32(v111, v111);
          LANES128(v112).n128_u64[0] =
              LANES64_OF(
                  vadd_f32(
                      COERCE_AS(
                          float32x2_t,
                          LANES128_OF(vextq_s8(v112, v112, 8u)).n128_u64[0]),
                      COERCE_AS(float32x2_t, LANES128(v112).n128_u64[0])))
                  .n64_u64[0];
          v102 = vmulq_n_f32(
              v108,
              (float)(0x1.0000000000000p+0f / sqrtf(v110)) *
                  LANES64_OF(
                      vsqrt_f32(vpadd_f32(
                          COERCE_AS(float32x2_t, LANES128(v112).n128_u64[0]),
                          COERCE_AS(float32x2_t, LANES128(v112).n128_u64[0]))))
                      .n64_f32[0]);
        }
        v103 = *(v101 - 3);
        v104 = *(v101 - 2);
        v101 += 4;
        v105 = vaddq_f32(v102, *v103);
        *v104 = LANES128(v105).n128_u64[0];
        v106 = *(_OWORD*)v104;
        *((_QWORD*)&v106 + 1) = LANES128(v105).n128_u32[2];
        *(_OWORD*)v104 = v106;
      } while (v107 + 4 != v100);
      v97 = *(float32x4_t***)(a1 + 56);
      v98 = *(float32x4_t***)(a1 + 64);
    }
    if (v97 != v98) {
      LANES128(v114).n128_u64[0] = 0x3F0000003F000000LL;
      LANES128(v114).n128_u64[1] = 0x3F0000003F000000LL;
      v115 = v97 + 2;
      do {
        v124 = *(v115 - 2);
        v123 = *(v115 - 1);
        v122 = v115 - 2;
        v125 = vsubq_f32(*v123, *v124);
        v126 = vmulq_f32(v125, v125);
        LANES128(v126).n128_u64[0] =
            LANES64_OF(
                vadd_f32(COERCE_AS(
                             float32x2_t,
                             LANES128_OF(vextq_s8(v126, v126, 8u)).n128_u64[0]),
                         COERCE_AS(float32x2_t, LANES128(v126).n128_u64[0])))
                .n64_u64[0];
        v127 =
            LANES64_OF(
                vpadd_f32(COERCE_AS(float32x2_t, LANES128(v126).n128_u64[0]),
                          COERCE_AS(float32x2_t, LANES128(v126).n128_u64[0])))
                .n64_f32[0];
        if (v127 == 0x0.0p+0f) {
          if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6130,
                                    memory_order_acquire) &
               1) == 0) {
            v132 = __cxa_guard_acquire((__int64)&GameData_21a6130);
            LANES128(v114).n128_u64[0] = 0x3F0000003F000000LL;
            LANES128(v114).n128_u64[1] = 0x3F0000003F000000LL;
            if (v132 != 0) {
              v133 = *((_QWORD*)GameData_212c540 + 1);
              *(_QWORD*)&GameData_21a6120 = *(_QWORD*)GameData_212c540;
              *((_QWORD*)&GameData_21a6120 + 1) = v133;
              __cxa_guard_release((__int64)&GameData_21a6130);
              LANES128(v114).n128_u64[0] = 0x3F0000003F000000LL;
              LANES128(v114).n128_u64[1] = 0x3F0000003F000000LL;
            }
          }
          v116 = COERCE_AS(float32x4_t, GameData_21a6120);
        }
        else {
          v128 = vsubq_f32(*v124, *v123);
          v129 = vmulq_f32(v128, v128);
          v130 = vsubq_f32((*v115)[3], v115[1][3]);
          LANES128(v129).n128_u64[0] =
              LANES64_OF(
                  vadd_f32(
                      COERCE_AS(
                          float32x2_t,
                          LANES128_OF(vextq_s8(v129, v129, 8u)).n128_u64[0]),
                      COERCE_AS(float32x2_t, LANES128(v129).n128_u64[0])))
                  .n64_u64[0];
          v131 = vmulq_f32(v130, v130);
          LANES128(v131).n128_u64[0] =
              LANES64_OF(
                  vadd_f32(
                      COERCE_AS(
                          float32x2_t,
                          LANES128_OF(vextq_s8(v131, v131, 8u)).n128_u64[0]),
                      COERCE_AS(float32x2_t, LANES128(v131).n128_u64[0])))
                  .n64_u64[0];
          v116 = vmulq_n_f32(
              v125,
              (float)(0x1.0000000000000p+0f / sqrtf(v127)) *
                  (float)((float)(PSEUDO_UNFUSED(
                              (float)(0x1.b333340000000p-1f *
                                      LANES64_OF(
                                          vsqrt_f32(vpadd_f32(
                                              COERCE_AS(
                                                  float32x2_t,
                                                  LANES128(v129).n128_u64[0]),
                                              COERCE_AS(
                                                  float32x2_t,
                                                  LANES128(v129).n128_u64[0]))))
                                          .n64_f32[0]) *
                              0x1.0000000000000p-1f)) +
                          (float)((float)(0x1.0000000000000p-1f *
                                          LANES64_OF(
                                              vsqrt_f32(vpadd_f32(
                                                  COERCE_AS(float32x2_t,
                                                            LANES128(v131)
                                                                .n128_u64[0]),
                                                  COERCE_AS(float32x2_t,
                                                            LANES128(v131)
                                                                .n128_u64[0]))))
                                              .n64_f32[0]) *
                                  0x1.3333340000000p-3f)));
        }
        LANES128(v116).n128_u32[3] = 0;
        v115 += 4;
        v117 = vmulq_f32(vaddq_f32(*v124, *v123), v114);
        v118 = vsubq_f32(v117, v116);
        v119 = vaddq_f32(v116, v117);
        LANES128(*(v124)).n128_u64[0] = LANES128(v118).n128_u64[0];
        v120 = *v124;
        LANES128(v120).n128_u64[1] = LANES128(v118).n128_u32[2];
        *v124 = v120;
        LANES128(*(v123)).n128_u64[0] = LANES128(v119).n128_u64[0];
        v121 = *v123;
        LANES128(v121).n128_u64[1] = LANES128(v119).n128_u32[2];
        *v123 = v121;
      } while (v122 + 4 != v98);
    }
  }
}

float32x4_t game_templates_a56ac0(_BYTE* a1, float32x4_t result)
{
  __int128 v2;
  __int128 v3;
  float32x4_t* v4;
  float32x4_t* v5;
  int8x8_t v6;
  int8x8_t v7;
  int8x8_t v8;
  float32x4_t v9;
  float32x4_t v10;
  int8x16_t v11;
  float32x4_t v12;
  float32x4_t v13;
  float32x4_t* v14;
  float32x4_t* v15;
  float32x4_t v16;
  int8x16_t v17;
  int8x16_t v18;
  float32x4_t v19;
  float32x4_t v20;
  int8x16_t v21;
  float32x4_t v22;
  float32x4_t v23;
  float32x4_t v24;
  float32x4_t v25;
  float32x4_t v26;
  float32x4_t v27;
  float32x4_t v28;
  int8x16_t v29;
  int v30;
  int v31;
  __int64 v32;
  int v33;
  int v34;
  __int64 v35;
  int* v36;
  int* i;
  __int64 v38;
  __int64 v39;
  float32x4_t* v40;
  __int64 v41;
  float32x4_t v42;
  float32x4_t v43;
  float32x4_t* v44;
  float32x4_t v45;
  float32x4_t v46;
  float32x4_t v47;
  float32x4_t v48;
  float32x4_t v49;
  float32x4_t v50;
  __int128 v51;
  unsigned __int64 v52;
  __int128 v53;
  unsigned __int64 v54;
  int8x16_t v55;
  int8x16_t v56;
  float32x4_t* v57;
  float32x4_t* v58;
  unsigned __int64 v59;
  unsigned __int64 v60;
  float32x4_t* v61;
  float32x4_t* v62;
  unsigned __int64 v63;
  unsigned __int64 v64;
  unsigned __int64 v65;
  unsigned __int64 v66;
  _BYTE* v67;
  _BYTE* v68;
  unsigned __int64 v69;
  unsigned __int64 v70;
  float32x4_t* v71;
  float32x4_t* v72;

  if (a1[128] == 1) {
    v5 = *((float32x4_t**)a1 + 1);
    v4 = *((float32x4_t**)a1 + 2);
    if (v5 != v4) {
      PSEUDO_LOW_LANE128(result, n128_u64, 0xB0A090807060504LL);
      PSEUDO_LOW_LANE64(v6, n64_u64, 0xF0E0D0C03020100LL);
      PSEUDO_LOW_LANE64(v7, n64_u64, 0x30201000B0A0908LL);
      PSEUDO_LOW_LANE64(v8, n64_u64, 0xF0E0D0C07060504LL);
      do {
        v14 = (float32x4_t*)LANES128(*(v5)).n128_u64[0];
        if (LANES128(*(v5)).n128_u64[0] != 0) {
          v15 = (float32x4_t*)LANES128(v14[6]).n128_u64[0];
          v16 = vsubq_f32(v5[4], v14[4]);
          v17 = v15[1];
          v18 = vmulq_f32(v16, v16);
          LANES128(v18).n128_u64[0] =
              LANES64_OF(
                  vadd_f32(COERCE_AS(
                               float32x2_t,
                               LANES128_OF(vextq_s8(v18, v18, 8u)).n128_u64[0]),
                           COERCE_AS(float32x2_t, LANES128(v18).n128_u64[0])))
                  .n64_u64[0];
          LANES128(v18).n128_u64[0] =
              LANES64_OF(
                  vpadd_f32(COERCE_AS(float32x2_t, LANES128(v18).n128_u64[0]),
                            COERCE_AS(float32x2_t, LANES128(v18).n128_u64[0])))
                  .n64_u64[0];
          if (LANES128(v18).n128_f32[0] == 0x0.0p+0f) {
            if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6170,
                                      memory_order_acquire) &
                 1) == 0) {
              v67 = a1;
              v61 = v5;
              v57 = v4;
              v63 = LANES128(result).n128_u64[0];
              v65 = LANES64(v7).n64_u64[0];
              v59 = LANES64(v6).n64_u64[0];
              v69 = LANES64(v8).n64_u64[0];
              v71 = v15;
              v55 = v17;
              v30 = __cxa_guard_acquire((__int64)&GameData_21a6170);
              v17 = v55;
              v15 = v71;
              v31 = v30;
              PSEUDO_LOW_LANE64(v8, n64_u64, v69);
              PSEUDO_LOW_LANE128(result, n128_u64, v63);
              PSEUDO_LOW_LANE64(v7, n64_u64, v65);
              PSEUDO_LOW_LANE64(v6, n64_u64, v59);
              v4 = v57;
              v5 = v61;
              a1 = v67;
              if (v31 != 0) {
                v32 = *((_QWORD*)GameData_212c550 + 1);
                *(_QWORD*)&GameData_21a6160 = *(_QWORD*)GameData_212c550;
                *((_QWORD*)&GameData_21a6160 + 1) = v32;
                __cxa_guard_release((__int64)&GameData_21a6170);
                v17 = v55;
                PSEUDO_LOW_LANE64(v8, n64_u64, v69);
                PSEUDO_LOW_LANE128(result, n128_u64, v63);
                PSEUDO_LOW_LANE64(v7, n64_u64, v65);
                PSEUDO_LOW_LANE64(v6, n64_u64, v59);
                v15 = v71;
                v4 = v57;
                v5 = v61;
                a1 = v67;
              }
            }
            v21 = COERCE_AS(int8x16_t, GameData_21a6160);
            LANES128(v21).n128_u32[3] = 0;
          }
          else {
            LANES128(v18).n128_u64[1] = LANES128(v18).n128_u64[0];
            v19 = vrsqrteq_f32(v18);
            v20 = vmulq_f32(v19, vrsqrtsq_f32(v19, vmulq_f32(v18, v19)));
            v21 = vbicq_s8(
                vmulq_f32(v16, vmulq_f32(v20, vrsqrtsq_f32(
                                                  v20, vmulq_f32(v18, v20)))),
                vceqzq_f32(v18));
          }
          LANES128(v22).n128_u64[0] =
              LANES64_OF(
                  vqtbl1_s8(v21,
                            COERCE_AS(int8x8_t, LANES128(result).n128_u64[0])))
                  .n64_u64[0];
          *(int8x8_t*)&v2 = vqtbl1_s8(v21, v6);
          LANES128(v23).n128_u64[0] = LANES64_OF(vqtbl1_s8(v17, v7)).n64_u64[0];
          LANES128(v24).n128_u64[0] = LANES64_OF(vqtbl1_s8(v21, v7)).n64_u64[0];
          *(int8x8_t*)&v3 = vqtbl1_s8(v21, v8);
          LANES128(v25).n128_u64[0] = LANES128(v22).n128_u64[0];
          *(int8x8_t*)&LANES128(v23).n128_i8[8] = vqtbl1_s8(v17, v8);
          LANES128(v26).n128_u64[0] = LANES128(v24).n128_u64[0];
          LANES128(v25).n128_u64[1] = v2;
          LANES128(v26).n128_u64[1] = v3;
          v27 = vmulq_f32(v25, v23);
          LANES128(v25).n128_u64[0] =
              LANES64_OF(
                  vqtbl1_s8(v17,
                            COERCE_AS(int8x8_t, LANES128(result).n128_u64[0])))
                  .n64_u64[0];
          *(int8x8_t*)&LANES128(v25).n128_i8[8] = vqtbl1_s8(v17, v6);
          v28 = vmlsq_f32(v27, v25, v26);
          v29 = vmulq_f32(v28, v28);
          LANES128(v29).n128_u64[0] =
              LANES64_OF(
                  vadd_f32(COERCE_AS(
                               float32x2_t,
                               LANES128_OF(vextq_s8(v29, v29, 8u)).n128_u64[0]),
                           COERCE_AS(float32x2_t, LANES128(v29).n128_u64[0])))
                  .n64_u64[0];
          LANES128(v29).n128_u64[0] =
              LANES64_OF(
                  vpadd_f32(COERCE_AS(float32x2_t, LANES128(v29).n128_u64[0]),
                            COERCE_AS(float32x2_t, LANES128(v29).n128_u64[0])))
                  .n64_u64[0];
          if (LANES128(v29).n128_f32[0] == 0x0.0p+0f) {
            if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6190,
                                      memory_order_acquire) &
                 1) == 0) {
              v68 = a1;
              v62 = v5;
              v52 = LANES128(v24).n128_u64[0];
              v53 = v2;
              v58 = v4;
              v64 = LANES128(result).n128_u64[0];
              v66 = LANES64(v7).n64_u64[0];
              v60 = LANES64(v6).n64_u64[0];
              v70 = LANES64(v8).n64_u64[0];
              v72 = v15;
              v51 = v3;
              v54 = LANES128(v22).n128_u64[0];
              v56 = v21;
              v33 = __cxa_guard_acquire((__int64)&GameData_21a6190);
              v3 = v51;
              LANES128(v24).n128_u64[0] = v52;
              v2 = v53;
              LANES128(v22).n128_u64[0] = v54;
              v34 = v33;
              v21 = v56;
              v15 = v72;
              PSEUDO_LOW_LANE64(v8, n64_u64, v70);
              PSEUDO_LOW_LANE128(result, n128_u64, v64);
              PSEUDO_LOW_LANE64(v7, n64_u64, v66);
              PSEUDO_LOW_LANE64(v6, n64_u64, v60);
              v4 = v58;
              v5 = v62;
              a1 = v68;
              if (v34 != 0) {
                v35 = *((_QWORD*)GameData_212c558 + 1);
                *(_QWORD*)&GameData_21a6180 = *(_QWORD*)GameData_212c558;
                *((_QWORD*)&GameData_21a6180 + 1) = v35;
                __cxa_guard_release((__int64)&GameData_21a6190);
                v3 = v51;
                LANES128(v24).n128_u64[0] = v52;
                v2 = v53;
                LANES128(v22).n128_u64[0] = v54;
                v21 = v56;
                PSEUDO_LOW_LANE64(v8, n64_u64, v70);
                PSEUDO_LOW_LANE128(result, n128_u64, v64);
                PSEUDO_LOW_LANE64(v7, n64_u64, v66);
                PSEUDO_LOW_LANE64(v6, n64_u64, v60);
                v15 = v72;
                v4 = v58;
                v5 = v62;
                a1 = v68;
              }
            }
            v11 = COERCE_AS(int8x16_t, GameData_21a6180);
            LANES128(v11).n128_u32[3] = 0;
          }
          else {
            LANES128(v29).n128_u64[1] = LANES128(v29).n128_u64[0];
            v9 = vrsqrteq_f32(v29);
            v10 = vmulq_f32(v9, vrsqrtsq_f32(v9, vmulq_f32(v29, v9)));
            v11 = vbicq_s8(
                vmulq_f32(v28, vmulq_f32(v10, vrsqrtsq_f32(
                                                  v10, vmulq_f32(v29, v10)))),
                vceqzq_f32(v29));
          }
          LANES128(v12).n128_u64[0] =
              LANES64_OF(
                  vqtbl1_s8(v11,
                            COERCE_AS(int8x8_t, LANES128(result).n128_u64[0])))
                  .n64_u64[0];
          LANES128(v24).n128_u64[1] = v3;
          LANES128(v22).n128_u64[1] = v2;
          *(int8x8_t*)&LANES128(v12).n128_i8[8] = vqtbl1_s8(v11, v6);
          LANES128(v13).n128_u64[0] = LANES64_OF(vqtbl1_s8(v11, v7)).n64_u64[0];
          *(int8x8_t*)&LANES128(v13).n128_i8[8] = vqtbl1_s8(v11, v8);
          *v15 = vmulq_n_f32(v21, *((float*)a1 + 42));
          v15[1] = vmulq_n_f32(vmlsq_f32(vmulq_f32(v24, v12), v22, v13),
                               *((float*)a1 + 42));
          v15[2] = vmulq_n_f32(v11, *((float*)a1 + 42));
          *(float32x4_t*)(LANES128(v5[6]).n128_u64[0] + 48) = v5[4];
        }
        v5 += 10;
      } while (v5 != v4);
      v36 = *((int**)a1 + 10);
      for (i = *((int**)a1 + 11); v36 != i; v40[3] = result) {
        v38 = *v36++;
        v39 = *(_QWORD*)(*(_QWORD*)a1 + 32LL);
        v40 = (float32x4_t*)(v39 + (v38 << 6));
        v41 = *(_QWORD*)(*(_QWORD*)a1 + 24LL) + 96 * v38;
        v42 = *(float32x4_t*)(v41 + 64);
        v43 = *(float32x4_t*)(v41 + 80);
        v44 = (float32x4_t*)(v39 +
                             ((unsigned __int64)*(
                                  unsigned __int16*)(*(_QWORD*)(*(_QWORD*)a1 +
                                                                16LL) +
                                                     96 * v38 + 42)
                              << 6));
        v45 = *v44;
        v46 = v44[1];
        v47 = v44[2];
        v48 = v44[3];
        v49 = vmlaq_laneq_f32(
            vmlaq_lane_f32(
                vmulq_n_f32(*v44, COERCE_FLOAT(*(_OWORD*)(v41 + 48))), v46,
                *(float32x2_t*)(v41 + 48), 1),
            v47, *(float32x4_t*)(v41 + 48), 2);
        v50 = vmlaq_lane_f32(vmulq_n_f32(*v44, LANES128(v42).n128_f32[0]), v46,
                             COERCE_AS(float32x2_t, LANES128(v42).n128_u64[0]),
                             1);
        *v40 = vmlaq_laneq_f32(
            vmlaq_lane_f32(
                vmulq_n_f32(*v44, COERCE_FLOAT(*(_OWORD*)(v41 + 32))), v46,
                *(float32x2_t*)(v41 + 32), 1),
            v47, *(float32x4_t*)(v41 + 32), 2);
        v40[1] = v49;
        result = vaddq_f32(
            vmlaq_laneq_f32(
                vmlaq_lane_f32(
                    vmulq_n_f32(v45, LANES128(v43).n128_f32[0]), v46,
                    COERCE_AS(float32x2_t, LANES128(v43).n128_u64[0]), 1),
                v47, v43, 2),
            v48);
        v40[2] = vmlaq_laneq_f32(v50, v47, v42, 2);
      }
    }
  }
  return result;
}

float game_templates_a5e890(float a1, float a2)
{
  float v2;
  float v3;
  int v4;
  int v5;
  int v6;
  int v7;
  float v8;
  float v9;
  float v10;
  float v11;
  float v12;
  float v13;
  int v14;
  int v15;
  float v16;
  float v17;
  float v18;
  float v19;
  int* v20;
  float v21;
  float v22;
  float v23;
  int v24;
  float v25;
  float v26;
  int v27;

  v2 = (float)(a1 + a2) * 0x1.76cf600000000p-2f;
  v3 = a1 + v2;
  v4 = (int)v3 - (v3 <= 0x0.0p+0f);
  v5 = (int)(float)(a2 + v2) - ((float)(a2 + v2) <= 0x0.0p+0f);
  v6 = (unsigned __int8)((int)(float)(a2 + v2) -
                         ((float)(a2 + v2) <= 0x0.0p+0f));
  v7 = (unsigned __int8)((int)v3 - (v3 <= 0x0.0p+0f));
  v8 = (float)(v4 + v5) * 0x1.b0cb160000000p-3f;
  v9 = a1 - (float)((float)v4 - v8);
  v10 = a2 - (float)((float)v5 - v8);
  v11 = 0x0.0p+0f;
  v12 = 0x1.0000000000000p+0f;
  if (v9 <= v10) {
    v13 = 0x0.0p+0f;
  }
  else {
    v13 = 0x1.0000000000000p+0f;
  }
  if (v9 <= v10) {
    v14 = (unsigned __int8)((int)v3 - (v3 <= 0x0.0p+0f));
  }
  else {
    v12 = 0x0.0p+0f;
    v14 = v7 + 1;
  }
  if (v9 > v10) {
    v15 = v6;
  }
  else {
    v15 = v6 + 1;
  }
  v16 = (float)(v9 - v13) + 0x1.b0cb160000000p-3f;
  v17 = (float)(v10 - v12) + 0x1.b0cb160000000p-3f;
  v18 = (float)(0x1.0000000000000p-1f - (float)(v9 * v9)) - (float)(v10 * v10);
  v19 = 0x0.0p+0f;
  if (v18 >= 0x0.0p+0f) {
    v20 =
        &GameData_1b5d74c[3 * ((signed __int32)
                                   GameData_1b5cf4c[GameData_1b5cf4c[v6] + v7] %
                               12)];
    v19 = (float)((float)(v18 * v18) * (float)(v18 * v18)) *
          (float)((float)(PSEUDO_UNFUSED(v10 * (float)v20[1])) +
                  (float)((float)*v20 * v9));
  }
  v21 = (float)(v9 + -0x1.0000000000000p+0f) + 0x1.b0cb160000000p-2f;
  v22 = (float)(v10 + -0x1.0000000000000p+0f) + 0x1.b0cb160000000p-2f;
  v23 =
      (float)(0x1.0000000000000p-1f - (float)(v16 * v16)) - (float)(v17 * v17);
  if (v23 >= 0x0.0p+0f) {
    v24 = GameData_1b5cf4c[v14 + GameData_1b5cf4c[v15]];
    v11 = (float)((float)(v23 * v23) * (float)(v23 * v23)) *
          (float)((float)(PSEUDO_UNFUSED(
                      v17 * (float)GameData_1b5d74c[3 * (v24 % 12) + 1])) +
                  (float)((float)GameData_1b5d74c[3 * (v24 % 12)] * v16));
  }
  v25 = 0x0.0p+0f;
  v26 =
      (float)(0x1.0000000000000p-1f - (float)(v21 * v21)) - (float)(v22 * v22);
  if (v26 >= 0x0.0p+0f) {
    v27 = (signed __int32)GameData_1b5cf4c[v7 + 1 + GameData_1b5cf4c[v6 + 1]] %
          12;
    v25 = (float)((float)(v26 * v26) * (float)(v26 * v26)) *
          (float)((float)(PSEUDO_UNFUSED(
                      v22 * (float)GameData_1b5d74c[3 * v27 + 1])) +
                  (float)((float)GameData_1b5d74c[3 * v27] * v21));
  }
  return (float)((float)(v19 + v11) + v25) * 0x1.1800000000000p+6f;
}

float game_templates_a5eaa0(float a1, float a2, float a3)
{
  float v3;
  bool v4;
  int v5;
  float v6;
  float v7;
  int v8;
  unsigned __int8 v9;
  int v10;
  int v11;
  float v12;
  float v13;
  float v14;
  float v15;
  float v16;
  float v17;
  _BOOL4 v18;
  unsigned int v19;
  _BOOL4 v20;
  _BOOL4 v21;
  unsigned int v22;
  _BOOL4 v23;
  int v24;
  float v25;
  float v26;
  float v27;
  float v28;
  float v29;
  float v30;
  float v31;
  int* v32;
  float v33;
  float v34;
  float v35;
  float v36;
  float v37;
  float v38;
  float v39;
  int v40;
  float v41;
  float v42;
  float v43;
  float v44;
  float v45;
  float v46;
  int v47;
  float v48;
  int* v49;

  v3 = (float)((float)(a1 + a2) + a3) * 0x1.5555560000000p-2f;
  v4 = (float)(a1 + v3) <= 0x0.0p+0f;
  v5 = (int)(float)(a1 + v3);
  v6 = a2 + v3;
  v7 = a3 + v3;
  v8 = v4;
  v9 = v5 - v8;
  v10 = (int)v6 - (v6 <= 0x0.0p+0f);
  v11 = (int)v7 - (v7 <= 0x0.0p+0f);
  v12 = (float)(v5 - v8 + v10 + v11) * 0x1.5555560000000p-3f;
  v13 = (float)v10 - v12;
  v14 = (float)v11 - v12;
  v15 = a1 - (float)((float)(v5 - v8) - v12);
  v16 = a2 - v13;
  v17 = a3 - v14;
  if (v15 >= v16) {
    if (v16 >= v17) {
      v21 = false;
      v23 = false;
      v19 = 0;
      v22 = 1;
      v18 = true;
      v20 = true;
    }
    else {
      v22 = 0;
      v19 = 0;
      v21 = true;
      v18 = true;
      v23 = v15 < v17;
      v20 = v15 >= v17;
    }
  }
  else if (v16 >= v17) {
    v22 = 1;
    v19 = 1;
    v23 = false;
    v20 = false;
    v21 = v15 < v17;
    v18 = v15 >= v17;
  }
  else {
    v18 = false;
    v19 = 0;
    v20 = false;
    v21 = true;
    v22 = 1;
    v23 = true;
  }
  v24 = (unsigned __int8)((int)v6 - (v6 <= 0x0.0p+0f));
  v25 = (float)(v15 - (float)v20) + 0x1.5555560000000p-3f;
  v26 = (float)(v16 - (float)v19) + 0x1.5555560000000p-3f;
  v27 = (float)(v17 - (float)v23) + 0x1.5555560000000p-3f;
  v28 = 0x0.0p+0f;
  v29 = v17 - (float)v21;
  v30 = (float)((float)(0x1.3333340000000p-1f - (float)(v15 * v15)) -
                (float)(v16 * v16)) -
        (float)(v17 * v17);
  v31 = 0x0.0p+0f;
  if (v30 >= 0x0.0p+0f) {
    v32 =
        &GameData_1b5d74c
            [3 * ((signed __int32)GameData_1b5cf4c
                      [GameData_1b5cf4c[GameData_1b5cf4c[(unsigned __int8)v11] +
                                        v24] +
                       v9] %
                  12)];
    v28 = (float)((float)(v30 * v30) * (float)(v30 * v30)) *
          (float)((float)((float)(PSEUDO_UNFUSED(v16 * (float)v32[1])) +
                          (float)((float)*v32 * v15)) +
                  (float)((float)v32[2] * v17));
  }
  v33 = v15 + -0x1.0000000000000p+0f;
  v34 = v16 + -0x1.0000000000000p+0f;
  v35 = v17 + -0x1.0000000000000p+0f;
  v36 = (float)(v15 - (float)v18) + 0x1.5555560000000p-2f;
  v37 = (float)(v16 - (float)v22) + 0x1.5555560000000p-2f;
  v38 = v29 + 0x1.5555560000000p-2f;
  v39 = (float)((float)(0x1.3333340000000p-1f - (float)(v25 * v25)) -
                (float)(v26 * v26)) -
        (float)(v27 * v27);
  if (v39 >= 0x0.0p+0f) {
    v40 = GameData_1b5cf4c
        [v20 + v9 +
         GameData_1b5cf4c[v19 + v24 +
                          GameData_1b5cf4c[v23 + (unsigned __int8)v11]]];
    v31 = (float)((float)(v39 * v39) * (float)(v39 * v39)) *
          (float)((float)((float)(PSEUDO_UNFUSED(
                              v26 *
                              (float)GameData_1b5d74c[3 * (v40 % 12) + 1])) +
                          (float)((float)GameData_1b5d74c[3 * (v40 % 12)] *
                                  v25)) +
                  (float)((float)GameData_1b5d74c[3 * (v40 % 12) + 2] * v27));
  }
  v41 = v33 + 0x1.0000000000000p-1f;
  v42 = v34 + 0x1.0000000000000p-1f;
  v43 = v35 + 0x1.0000000000000p-1f;
  v44 = 0x0.0p+0f;
  v45 = (float)((float)(0x1.3333340000000p-1f - (float)(v36 * v36)) -
                (float)(v37 * v37)) -
        (float)(v38 * v38);
  v46 = 0x0.0p+0f;
  if (v45 >= 0x0.0p+0f) {
    v47 = GameData_1b5cf4c
        [v18 + v9 +
         GameData_1b5cf4c[v22 + v24 +
                          GameData_1b5cf4c[v21 + (unsigned __int8)v11]]];
    v44 = (float)((float)(v45 * v45) * (float)(v45 * v45)) *
          (float)((float)((float)(PSEUDO_UNFUSED(
                              v37 *
                              (float)GameData_1b5d74c[3 * (v47 % 12) + 1])) +
                          (float)((float)GameData_1b5d74c[3 * (v47 % 12)] *
                                  v36)) +
                  (float)((float)GameData_1b5d74c[3 * (v47 % 12) + 2] * v38));
  }
  v48 = (float)((float)(0x1.3333340000000p-1f - (float)(v41 * v41)) -
                (float)(v42 * v42)) -
        (float)(v43 * v43);
  if (v48 >= 0x0.0p+0f) {
    v49 =
        &GameData_1b5d74c
            [3 *
             ((signed __int32)GameData_1b5cf4c
                  [v9 + 1 +
                   GameData_1b5cf4c
                       [v24 + 1 + GameData_1b5cf4c[(unsigned __int8)v11 + 1]]] %
              12)];
    v46 = (float)((float)(v48 * v48) * (float)(v48 * v48)) *
          (float)((float)((float)(PSEUDO_UNFUSED(v42 * (float)v49[1])) +
                          (float)((float)*v49 * v41)) +
                  (float)((float)v49[2] * v43));
  }
  return (float)((float)((float)(v28 + v31) + v44) + v46) *
         0x1.0000000000000p+5f;
}

__int64 game_templates_b36de0(__int64 a1, unsigned int* a2, _DWORD** a3)
{

#pragma clang fp contract(off)
  unsigned __int64 v3;
  unsigned __int64 v4;
  unsigned __int64 v5;
  unsigned __int64 v8;
  __int64* v9;
  __int64 result;
  unsigned __int64 v11;
  __int64 v12;
  __int64* v13;
  _DWORD* v14;
  float v15;
  float v16;
  float v17;
  _BOOL8 v18;
  unsigned __int64 v19;
  unsigned __int64 v20;
  unsigned __int64 primeEm;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  unsigned __int64 v27;
  __int64 v28;
  unsigned __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  _QWORD* v33;
  __int64 v34;
  unsigned __int64 v35;
  unsigned __int64 v36;
  _QWORD* v37;
  unsigned __int64 v38;
  unsigned __int64 v39;
  _QWORD* v40;
  unsigned __int64 v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  __int64* v47;
  __int64 v48;
  unsigned __int64 v49;

  v4 = *a2;
  v5 = *(_QWORD*)(a1 + 8);
  if (v5 != 0) {
    v8 = v5 - 1;
    if ((v5 & (v5 - 1)) != 0) {
      v3 = *a2;
      if (v5 <= v4) {
        v3 = (unsigned int)v4 % (unsigned int)v5;
      }
    }
    else {
      v3 = ((_DWORD)v5 - 1) & (unsigned int)v4;
    }
    v9 = *(__int64**)(*(_QWORD*)a1 + 8 * v3);
    if (v9 != nullptr) {
      result = *v9;
      if (*v9 != 0) {
        if ((v5 & v8) == 0) {
          while (1) {
            v12 = *(_QWORD*)(result + 8);
            if (v12 == v4) {
              if (*(_DWORD*)(result + 16) == (_DWORD)v4) {
                return result;
              }
            }
            else if ((v12 & v8) != v3) {
              goto LABEL_22;
            }
            result = *(_QWORD*)result;
            if (result == 0) {
              goto LABEL_22;
            }
          }
        }
        do {
          v11 = *(_QWORD*)(result + 8);
          if (v11 == v4) {
            if (*(_DWORD*)(result + 16) == (_DWORD)v4) {
              return result;
            }
          }
          else {
            if (v11 >= v5) {
              v11 %= v5;
            }
            if (v11 != v3) {
              break;
            }
          }
          result = *(_QWORD*)result;
        } while (result != 0);
      }
    }
  }
LABEL_22:
  v13 = (__int64*)fw_memory_g_heap_manager_ptr;
  result = fw_memory_HeapManager_Allocate(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 72, 16, 0);
  v14 = *a3;
  *(_QWORD*)result = 0;
  *(_QWORD*)(result + 8) = v4;
  v15 = *(float*)(a1 + 32);
  LODWORD(v14) = *v14;
  *(_QWORD*)(result + 56) = 0;
  *(_QWORD*)(result + 64) = 0;
  *(_QWORD*)(result + 40) = 0;
  *(_QWORD*)(result + 48) = 0;
  *(_QWORD*)(result + 24) = 0;
  *(_QWORD*)(result + 32) = 0;
  *(_DWORD*)(result + 16) = (_DWORD)v14;
  v16 = (float)(unsigned __int64)(*(_QWORD*)(a1 + 24) + 1LL);
  if (v5 == 0 || (float)(v15 * (float)v5) < v16) {
    v17 = v16 / v15;
    v18 = true;
    if (v5 >= 3) {
      v18 = (v5 & (v5 - 1)) != 0;
    }
    v19 = v18 | (2 * v5);
    v20 = vcvtps_u64_f32(v17);
    if (v19 <= v20) {
      primeEm = v20;
    }
    else {
      primeEm = v19;
    }
    if (primeEm == 1) {
      primeEm = 2;
    }
    else if ((primeEm & (primeEm - 1)) != 0) {
      v22 = result;
      primeEm = std___1___next_prime(primeEm);
      result = v22;
      v5 = *(_QWORD*)(a1 + 8);
    }
    if (primeEm <= v5) {
      if (primeEm >= v5) {
        goto LABEL_83;
      }
      v29 = vcvtps_u64_f32((float)*(unsigned __int64*)(a1 + 24) /
                           *(float*)(a1 + 32));
      if (v5 < 3 || (v5 & (v5 - 1)) != 0) {
        v42 = result;
        v29 = std___1___next_prime(v29);
        result = v42;
      }
      else {
        v30 = 1LL << -(char)__clz(v29 - 1);
        if (v29 >= 2) {
          v29 = v30;
        }
      }
      if (primeEm <= v29) {
        primeEm = v29;
      }
      if (primeEm >= v5) {
        goto LABEL_83;
      }
      if (primeEm == 0) {
        v43 = *(_QWORD*)a1;
        *(_QWORD*)a1 = 0;
        if (v43 != 0) {
          v44 = result;
          v45 = 128;
          if (*(_QWORD*)(*v13 + 200) == 0) {
            v45 = 56;
          }
          nn_mem_StandardAllocator_Free(*v13 + v45, v43);
          result = v44;
        }
        *(_QWORD*)(a1 + 8) = 0;
        goto LABEL_83;
      }
    }
    if (primeEm >> 61 != 0) {
      GameRoutine_60a210();
    }
    v23 = result;
    v24 = fw_memory_HeapManager_Allocate(*v13, 8 * primeEm, 16, 0);
    v25 = *(_QWORD*)a1;
    *(_QWORD*)a1 = v24;
    if (v25 != 0) {
      v26 = 128;
      if (*(_QWORD*)(*v13 + 200) == 0) {
        v26 = 56;
      }
      nn_mem_StandardAllocator_Free(*v13 + v26, v25);
    }
    v27 = primeEm & 7;
    *(_QWORD*)(a1 + 8) = primeEm;
    if (primeEm >= 8) {
      v28 = 0;
      result = v23;
      do {
        *(_QWORD*)(*(_QWORD*)a1 + 8 * v28) = 0;
        *(_QWORD*)(*(_QWORD*)a1 + 8 * v28 + 8) = 0;
        *(_QWORD*)(*(_QWORD*)a1 + 8 * v28 + 16) = 0;
        *(_QWORD*)(*(_QWORD*)a1 + 8 * v28 + 24) = 0;
        *(_QWORD*)(*(_QWORD*)a1 + 8 * v28 + 32) = 0;
        *(_QWORD*)(*(_QWORD*)a1 + 8 * v28 + 40) = 0;
        *(_QWORD*)(*(_QWORD*)a1 + 8 * v28 + 48) = 0;
        v31 = *(_QWORD*)a1 + 8 * v28;
        v28 += 8;
        *(_QWORD*)(v31 + 56) = 0;
      } while ((primeEm & 0x1FFFFFFFFFFFFFF8LL) != v28);
    }
    else {
      v28 = 0;
      result = v23;
    }
    if ((primeEm & 7) != 0) {
      v32 = 8 * v28;
      do {
        --v27;
        *(_QWORD*)(*(_QWORD*)a1 + v32) = 0;
        v32 += 8;
      } while (v27 != 0);
    }
    v34 = a1 + 16;
    v33 = *(_QWORD**)(a1 + 16);
    if (v33 != nullptr) {
      v35 = v33[1];
      v36 = primeEm - 1;
      if ((primeEm & (primeEm - 1)) != 0) {
        if (v35 >= primeEm) {
          v35 %= primeEm;
        }
        *(_QWORD*)(*(_QWORD*)a1 + 8 * v35) = v34;
        v37 = (_QWORD*)*v33;
        if (*v33 == 0) {
          goto LABEL_83;
        }
        while (1) {
          v38 = v37[1];
          if (v38 >= primeEm) {
            v38 %= primeEm;
          }
          if (v38 != v35) {
            if (*(_QWORD*)(*(_QWORD*)a1 + 8 * v38) == 0) {
              *(_QWORD*)(*(_QWORD*)a1 + 8 * v38) = v33;
              goto LABEL_60;
            }
            *v33 = *v37;
            *v37 = **(_QWORD**)(*(_QWORD*)a1 + 8 * v38);
            **(_QWORD**)(*(_QWORD*)a1 + 8 * v38) = v37;
            v37 = v33;
          }
          v38 = v35;
        LABEL_60:
          v33 = v37;
          v37 = (_QWORD*)*v37;
          v35 = v38;
          if (v37 == nullptr) {
            goto LABEL_83;
          }
        }
      }
      v39 = v35 & v36;
      *(_QWORD*)(*(_QWORD*)a1 + 8 * v39) = v34;
      while (1) {
        v40 = (_QWORD*)*v33;
        if (*v33 == 0) {
          break;
        }
        v41 = v40[1] & v36;
        if (v41 == v39) {
          v33 = (_QWORD*)*v33;
        }
        else if (*(_QWORD*)(*(_QWORD*)a1 + 8 * v41) != 0) {
          *v33 = *v40;
          *v40 = **(_QWORD**)(*(_QWORD*)a1 + 8 * v41);
          **(_QWORD**)(*(_QWORD*)a1 + 8 * v41) = v40;
        }
        else {
          *(_QWORD*)(*(_QWORD*)a1 + 8 * v41) = v33;
          v33 = v40;
          v39 = v41;
        }
      }
    }
  LABEL_83:
    v5 = *(_QWORD*)(a1 + 8);
    if ((v5 & (v5 - 1)) != 0) {
      if (v5 <= v4) {
        v3 = v4 % v5;
      }
      else {
        v3 = v4;
      }
    }
    else {
      v3 = ((_DWORD)v5 - 1) & (unsigned int)v4;
    }
  }
  v46 = *(_QWORD*)a1;
  v47 = *(__int64**)(*(_QWORD*)a1 + 8 * v3);
  if (v47 != nullptr) {
    *(_QWORD*)result = *v47;
    *v47 = result;
  }
  else {
    v48 = *(_QWORD*)(a1 + 16);
    *(_QWORD*)(a1 + 16) = result;
    *(_QWORD*)result = v48;
    *(_QWORD*)(v46 + 8 * v3) = a1 + 16;
    if (*(_QWORD*)result != 0) {
      v49 = *(_QWORD*)(*(_QWORD*)result + 8LL);
      if ((v5 & (v5 - 1)) != 0) {
        if (v49 >= v5) {
          v49 %= v5;
        }
      }
      else {
        v49 &= v5 - 1;
      }
      *(_QWORD*)(*(_QWORD*)a1 + 8 * v49) = result;
    }
  }
  ++*(_QWORD*)(a1 + 24);
  return result;
}

_QWORD* game_templates_be2ec0(__int64 a1, unsigned __int8* a2, __int64** a3)
{

#pragma clang fp contract(off)
  unsigned __int64 v3;
  unsigned __int64 v4;
  bool v7;
  unsigned __int64 v8;
  __int64 v9;
  unsigned __int64 v10;
  unsigned __int64 v11;
  unsigned __int64 v12;
  unsigned __int64 v13;
  unsigned __int64 v14;
  _QWORD* v15;
  _QWORD* v16;
  unsigned __int64 v17;
  unsigned __int64 v18;
  unsigned __int64 v19;
  __int64 v20;
  __int64 v21;
  unsigned __int64 v22;
  unsigned __int64 v23;
  __int64 v24;
  __int64* v25;
  _QWORD* v26;
  __int64* v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  float v32;
  float v33;
  float v34;
  _BOOL8 v35;
  unsigned __int64 v36;
  unsigned __int64 v37;
  unsigned __int64 primeEm;
  unsigned __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  unsigned __int64 v43;
  __int64 v44;
  unsigned __int64 v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  _QWORD* v49;
  __int64 v50;
  unsigned __int64 v51;
  unsigned __int64 v52;
  _QWORD* v53;
  unsigned __int64 v54;
  unsigned __int64 v55;
  _QWORD* v56;
  unsigned __int64 v57;
  __int64 v58;
  __int64 v59;
  __int64 v60;
  _QWORD* v61;
  __int64 v62;
  unsigned __int64 v63;

  v4 = *a2;
  v7 = (v4 & 1) == 0;
  v8 = v4 >> 1;
  if (v7) {
    v9 = (__int64)(a2 + 1);
  }
  else {
    v9 = *((_QWORD*)a2 + 2);
  }
  if (v7) {
    v10 = v8;
  }
  else {
    v10 = *((_QWORD*)a2 + 1);
  }
  v11 = std___1___hash_memory(v9, v10);
  v12 = *(_QWORD*)(a1 + 8);
  v13 = v11;
  if (v12 != 0) {
    v14 = v12 - 1;
    if ((v12 & (v12 - 1)) != 0) {
      v3 = v11;
      if (v11 >= v12) {
        v3 = v11 % v12;
      }
    }
    else {
      v3 = v14 & v11;
    }
    v15 = *(_QWORD**)(*(_QWORD*)a1 + 8 * v3);
    if (v15 != nullptr) {
      v16 = (_QWORD*)*v15;
      if (*v15 != 0) {
        if ((v12 & v14) == 0) {
          while (1) {
            v21 = v16[1];
            if (v21 == v13) {
              v22 = *((unsigned __int8*)v16 + 16);
              v23 = v16[3];
              if ((v22 & 1) == 0) {
                v23 = v22 >> 1;
              }
              if (v23 == v10) {
                v24 = (v22 & 1) != 0 ? v16[4] : (__int64)v16 + 17;
                if (memcmp(v24, v9, v10) == 0) {
                  return v16;
                }
              }
            }
            else if ((v21 & v14) != v3) {
              goto LABEL_41;
            }
            v16 = (_QWORD*)*v16;
            if (v16 == nullptr) {
              goto LABEL_41;
            }
          }
        }
        do {
          v17 = v16[1];
          if (v17 == v13) {
            v18 = *((unsigned __int8*)v16 + 16);
            v19 = v16[3];
            if ((v18 & 1) == 0) {
              v19 = v18 >> 1;
            }
            if (v19 == v10) {
              v20 = (v18 & 1) != 0 ? v16[4] : (__int64)v16 + 17;
              if (memcmp(v20, v9, v10) == 0) {
                return v16;
              }
            }
          }
          else {
            if (v17 >= v12) {
              v17 %= v12;
            }
            if (v17 != v3) {
              break;
            }
          }
          v16 = (_QWORD*)*v16;
        } while (v16 != nullptr);
      }
    }
  }
LABEL_41:
  v25 = (__int64*)fw_memory_g_heap_manager_ptr;
  v26 = (_QWORD*)fw_memory_HeapManager_Allocate(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 48, 16, 0);
  v27 = *a3;
  *v26 = 0;
  v26[1] = v13;
  v16 = v26;
  if ((*(_BYTE*)v27 & 1) != 0) {
    fw_text_String_CopyTerminated(v26 + 2, v27[2], v27[1]);
  }
  else {
    v28 = *v27;
    v29 = v27[1];
    v30 = v27[2];
    v26[3] = v29;
    v26[4] = v30;
    v26[2] = v28;
  }
  v31 = *(_QWORD*)(a1 + 24);
  v32 = *(float*)(a1 + 32);
  v16[5] = 0;
  v33 = (float)(unsigned __int64)(v31 + 1);
  if (v12 == 0 || (float)(v32 * (float)v12) < v33) {
    v34 = v33 / v32;
    v35 = true;
    if (v12 >= 3) {
      v35 = (v12 & (v12 - 1)) != 0;
    }
    v36 = v35 | (2 * v12);
    v37 = vcvtps_u64_f32(v34);
    if (v36 <= v37) {
      primeEm = v37;
    }
    else {
      primeEm = v36;
    }
    if (primeEm == 1) {
      primeEm = 2;
    }
    else if ((primeEm & (primeEm - 1)) != 0) {
      primeEm = std___1___next_prime(primeEm);
    }
    v39 = *(_QWORD*)(a1 + 8);
    if (primeEm <= v39) {
      if (primeEm >= v39) {
        goto LABEL_105;
      }
      v45 = vcvtps_u64_f32((float)*(unsigned __int64*)(a1 + 24) /
                           *(float*)(a1 + 32));
      if (v39 < 3 || (v39 & (v39 - 1)) != 0) {
        v45 = std___1___next_prime(v45);
      }
      else {
        v46 = 1LL << -(char)__clz(v45 - 1);
        if (v45 >= 2) {
          v45 = v46;
        }
      }
      if (primeEm <= v45) {
        primeEm = v45;
      }
      if (primeEm >= v39) {
        goto LABEL_105;
      }
      if (primeEm == 0) {
        v58 = *(_QWORD*)a1;
        *(_QWORD*)a1 = 0;
        if (v58 != 0) {
          v59 = 128;
          if (*(_QWORD*)(*v25 + 200) == 0) {
            v59 = 56;
          }
          nn_mem_StandardAllocator_Free(*v25 + v59, v58);
        }
        *(_QWORD*)(a1 + 8) = 0;
        goto LABEL_105;
      }
    }
    if (primeEm >> 61 != 0) {
      GameRoutine_60a210();
    }
    v40 = fw_memory_HeapManager_Allocate(*v25, 8 * primeEm, 16, 0);
    v41 = *(_QWORD*)a1;
    *(_QWORD*)a1 = v40;
    if (v41 != 0) {
      v42 = 128;
      if (*(_QWORD*)(*v25 + 200) == 0) {
        v42 = 56;
      }
      nn_mem_StandardAllocator_Free(*v25 + v42, v41);
    }
    v43 = primeEm & 7;
    *(_QWORD*)(a1 + 8) = primeEm;
    if (primeEm >= 8) {
      v44 = 0;
      do {
        *(_QWORD*)(*(_QWORD*)a1 + 8 * v44) = 0;
        *(_QWORD*)(*(_QWORD*)a1 + 8 * v44 + 8) = 0;
        *(_QWORD*)(*(_QWORD*)a1 + 8 * v44 + 16) = 0;
        *(_QWORD*)(*(_QWORD*)a1 + 8 * v44 + 24) = 0;
        *(_QWORD*)(*(_QWORD*)a1 + 8 * v44 + 32) = 0;
        *(_QWORD*)(*(_QWORD*)a1 + 8 * v44 + 40) = 0;
        *(_QWORD*)(*(_QWORD*)a1 + 8 * v44 + 48) = 0;
        v47 = *(_QWORD*)a1 + 8 * v44;
        v44 += 8;
        *(_QWORD*)(v47 + 56) = 0;
      } while ((primeEm & 0x1FFFFFFFFFFFFFF8LL) != v44);
    }
    else {
      v44 = 0;
    }
    if ((primeEm & 7) != 0) {
      v48 = 8 * v44;
      do {
        --v43;
        *(_QWORD*)(*(_QWORD*)a1 + v48) = 0;
        v48 += 8;
      } while (v43 != 0);
    }
    v50 = a1 + 16;
    v49 = *(_QWORD**)(a1 + 16);
    if (v49 != nullptr) {
      v51 = v49[1];
      v52 = primeEm - 1;
      if ((primeEm & (primeEm - 1)) != 0) {
        if (v51 >= primeEm) {
          v51 %= primeEm;
        }
        *(_QWORD*)(*(_QWORD*)a1 + 8 * v51) = v50;
        v53 = (_QWORD*)*v49;
        if (*v49 == 0) {
          goto LABEL_105;
        }
        while (1) {
          v54 = v53[1];
          if (v54 >= primeEm) {
            v54 %= primeEm;
          }
          if (v54 != v51) {
            if (*(_QWORD*)(*(_QWORD*)a1 + 8 * v54) == 0) {
              *(_QWORD*)(*(_QWORD*)a1 + 8 * v54) = v49;
              goto LABEL_82;
            }
            *v49 = *v53;
            *v53 = **(_QWORD**)(*(_QWORD*)a1 + 8 * v54);
            **(_QWORD**)(*(_QWORD*)a1 + 8 * v54) = v53;
            v53 = v49;
          }
          v54 = v51;
        LABEL_82:
          v49 = v53;
          v53 = (_QWORD*)*v53;
          v51 = v54;
          if (v53 == nullptr) {
            goto LABEL_105;
          }
        }
      }
      v55 = v51 & v52;
      *(_QWORD*)(*(_QWORD*)a1 + 8 * v55) = v50;
      while (1) {
        v56 = (_QWORD*)*v49;
        if (*v49 == 0) {
          break;
        }
        v57 = v56[1] & v52;
        if (v57 == v55) {
          v49 = (_QWORD*)*v49;
        }
        else if (*(_QWORD*)(*(_QWORD*)a1 + 8 * v57) != 0) {
          *v49 = *v56;
          *v56 = **(_QWORD**)(*(_QWORD*)a1 + 8 * v57);
          **(_QWORD**)(*(_QWORD*)a1 + 8 * v57) = v56;
        }
        else {
          *(_QWORD*)(*(_QWORD*)a1 + 8 * v57) = v49;
          v49 = v56;
          v55 = v57;
        }
      }
    }
  LABEL_105:
    v12 = *(_QWORD*)(a1 + 8);
    if ((v12 & (v12 - 1)) != 0) {
      if (v13 >= v12) {
        v3 = v13 % v12;
      }
      else {
        v3 = v13;
      }
    }
    else {
      v3 = (v12 - 1) & v13;
    }
  }
  v60 = *(_QWORD*)a1;
  v61 = *(_QWORD**)(*(_QWORD*)a1 + 8 * v3);
  if (v61 != nullptr) {
    *v16 = *v61;
    *v61 = v16;
  }
  else {
    v62 = *(_QWORD*)(a1 + 16);
    *(_QWORD*)(a1 + 16) = v16;
    *v16 = v62;
    *(_QWORD*)(v60 + 8 * v3) = a1 + 16;
    if (*v16 != 0) {
      v63 = *(_QWORD*)(*v16 + 8LL);
      if ((v12 & (v12 - 1)) != 0) {
        if (v63 >= v12) {
          v63 %= v12;
        }
      }
      else {
        v63 &= v12 - 1;
      }
      *(_QWORD*)(*(_QWORD*)a1 + 8 * v63) = v16;
    }
  }
  ++*(_QWORD*)(a1 + 24);
  return v16;
}

void game_templates_be34a0(__int64 a1, unsigned __int8* a2, char* a3)
{

#pragma clang fp contract(off)
  unsigned __int64 v3;
  unsigned __int64 v4;
  bool v7;
  unsigned __int64 v8;
  __int64 v9;
  unsigned __int64 v10;
  unsigned __int64 v11;
  unsigned __int64 v12;
  unsigned __int64 v13;
  unsigned __int64 v14;
  __int64** v15;
  __int64* v16;
  unsigned __int64 v17;
  unsigned __int64 v18;
  unsigned __int64 v19;
  __int64 v20;
  __int64 v21;
  unsigned __int64 v22;
  unsigned __int64 v23;
  __int64 v24;
  _QWORD* v25;
  char v26;
  _QWORD* v27;
  __int64 v28;
  float v29;
  float v30;
  float v31;
  _BOOL8 v32;
  unsigned __int64 v33;
  unsigned __int64 v34;
  unsigned __int64 primeEm;
  unsigned __int64 v36;
  unsigned __int64 v37;
  __int64 v38;
  __int64 v39;
  _QWORD* v40;
  __int64 v41;
  unsigned __int64 v42;

  v4 = *a2;
  v7 = (v4 & 1) == 0;
  v8 = v4 >> 1;
  if (v7) {
    v9 = (__int64)(a2 + 1);
  }
  else {
    v9 = *((_QWORD*)a2 + 2);
  }
  if (v7) {
    v10 = v8;
  }
  else {
    v10 = *((_QWORD*)a2 + 1);
  }
  v11 = std___1___hash_memory(v9, v10);
  v12 = *(_QWORD*)(a1 + 8);
  v13 = v11;
  if (v12 != 0) {
    v14 = v12 - 1;
    if ((v12 & (v12 - 1)) != 0) {
      v3 = v11;
      if (v11 >= v12) {
        v3 = v11 % v12;
      }
    }
    else {
      v3 = v14 & v11;
    }
    v15 = *(__int64***)(*(_QWORD*)a1 + 8 * v3);
    if (v15 != nullptr) {
      v16 = *v15;
      if (*v15 != nullptr) {
        if ((v12 & v14) == 0) {
          while (1) {
            v21 = v16[1];
            if (v21 == v13) {
              v22 = *((unsigned __int8*)v16 + 16);
              v23 = v16[3];
              if ((v22 & 1) == 0) {
                v23 = v22 >> 1;
              }
              if (v23 == v10) {
                v24 = (v22 & 1) != 0 ? v16[4] : (__int64)v16 + 17;
                if (memcmp(v24, v9, v10) == 0) {
                  return;
                }
              }
            }
            else if ((v21 & v14) != v3) {
              goto LABEL_41;
            }
            v16 = (__int64*)*v16;
            if (v16 == nullptr) {
              goto LABEL_41;
            }
          }
        }
        do {
          v17 = v16[1];
          if (v17 == v13) {
            v18 = *((unsigned __int8*)v16 + 16);
            v19 = v16[3];
            if ((v18 & 1) == 0) {
              v19 = v18 >> 1;
            }
            if (v19 == v10) {
              v20 = (v18 & 1) != 0 ? v16[4] : (__int64)v16 + 17;
              if (memcmp(v20, v9, v10) == 0) {
                return;
              }
            }
          }
          else {
            if (v17 >= v12) {
              v17 %= v12;
            }
            if (v17 != v3) {
              break;
            }
          }
          v16 = (__int64*)*v16;
        } while (v16 != nullptr);
      }
    }
  }
LABEL_41:
  v25 = (_QWORD*)fw_memory_HeapManager_Allocate(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 48, 16, 0);
  v26 = *a3;
  v27 = v25;
  *v25 = 0;
  v25[1] = v13;
  if ((v26 & 1) != 0) {
    fw_text_String_CopyTerminated(v25 + 2, *((_QWORD*)a3 + 2),
                                  *((_QWORD*)a3 + 1));
  }
  else {
    v28 = *((_QWORD*)a3 + 1);
    v25[2] = *(_QWORD*)a3;
    v25[3] = v28;
    v25[4] = *((_QWORD*)a3 + 2);
  }
  v29 = *(float*)(a1 + 32);
  v27[5] = *((_QWORD*)a3 + 3);
  v30 = (float)(unsigned __int64)(*(_QWORD*)(a1 + 24) + 1LL);
  if (v12 == 0 || (float)(v29 * (float)v12) < v30) {
    v31 = v30 / v29;
    v32 = true;
    if (v12 >= 3) {
      v32 = (v12 & (v12 - 1)) != 0;
    }
    v33 = v32 | (2 * v12);
    v34 = vcvtps_u64_f32(v31);
    if (v33 <= v34) {
      primeEm = v34;
    }
    else {
      primeEm = v33;
    }
    if (primeEm == 1) {
      primeEm = 2;
    }
    else if ((primeEm & (primeEm - 1)) != 0) {
      primeEm = std___1___next_prime(primeEm);
    }
    v36 = *(_QWORD*)(a1 + 8);
    if (primeEm > v36) {
      goto LABEL_56;
    }
    if (primeEm < v36) {
      v37 = vcvtps_u64_f32((float)*(unsigned __int64*)(a1 + 24) /
                           *(float*)(a1 + 32));
      if (v36 < 3 || (v36 & (v36 - 1)) != 0) {
        v37 = std___1___next_prime(v37);
      }
      else {
        v38 = 1LL << -(char)__clz(v37 - 1);
        if (v37 >= 2) {
          v37 = v38;
        }
      }
      if (primeEm <= v37) {
        primeEm = v37;
      }
      if (primeEm < v36) {
      LABEL_56:
        GameRoutine_adb120((__int64*)a1, primeEm);
      }
    }
    v12 = *(_QWORD*)(a1 + 8);
    if ((v12 & (v12 - 1)) != 0) {
      if (v13 >= v12) {
        v3 = v13 % v12;
      }
      else {
        v3 = v13;
      }
    }
    else {
      v3 = (v12 - 1) & v13;
    }
  }
  v39 = *(_QWORD*)a1;
  v40 = *(_QWORD**)(*(_QWORD*)a1 + 8 * v3);
  if (v40 != nullptr) {
    *v27 = *v40;
    *v40 = v27;
  }
  else {
    v41 = *(_QWORD*)(a1 + 16);
    *(_QWORD*)(a1 + 16) = v27;
    *v27 = v41;
    *(_QWORD*)(v39 + 8 * v3) = a1 + 16;
    if (*v27 != 0) {
      v42 = *(_QWORD*)(*v27 + 8LL);
      if ((v12 & (v12 - 1)) != 0) {
        if (v42 >= v12) {
          v42 %= v12;
        }
      }
      else {
        v42 &= v12 - 1;
      }
      *(_QWORD*)(*(_QWORD*)a1 + 8 * v42) = v27;
    }
  }
  ++*(_QWORD*)(a1 + 24);
}

__int64* game_templates_14a51c0(__int64 a1, __int64* a2, __int64* a3)
{
  __int64* result;
  char v5;
  __int64 v6;
  __int64* v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  struct {
    __int64 v15;
    char gap16_[8];
    char v16;
  } v15_;

  v5 = COERCE_AS(__typeof__(v5),
                 PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  game_templates_14a52c0((void*)(&v15_.v15), a1, a2, a3),
      v5 = COERCE_AS(__typeof__(v5),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  result = GameRoutine_14a5400(a1, v15_.v15),
  v5 = COERCE_AS(__typeof__(v5),
                 PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  if ((v5 & 1) == 0) {
    v6 = v15_.v15;
    v15_.v15 = 0;
    if (v6 != 0) {
      v7 = result;
      v8 = fw_memory_g_heap_manager_ptr;
      if (v15_.v16 == 1) {
        v9 = *(_QWORD*)(v6 + 40);
        if (v9 != 0) {
          v10 = *(_QWORD*)fw_memory_g_heap_manager_ptr;
          *(_QWORD*)(v6 + 48) = v9;
          v11 = 128;
          if (*(_QWORD*)(v10 + 200) == 0) {
            v11 = 56;
          }
          nn_mem_StandardAllocator_Free(v10 + v11, v9),
              v5 = COERCE_AS(__typeof__(v5),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        }
        if ((*(_BYTE*)(v6 + 16) & 1) != 0) {
          v12 = *(_QWORD*)(v6 + 32);
          if (v12 != 0) {
            v13 = 128;
            if (*(_QWORD*)(*(_QWORD*)v8 + 200LL) == 0) {
              v13 = 56;
            }
            nn_mem_StandardAllocator_Free(*(_QWORD*)v8 + v13, v12),
                v5 = COERCE_AS(__typeof__(v5),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          }
        }
      }
      v14 = 128;
      if (*(_QWORD*)(*(_QWORD*)v8 + 200LL) == 0) {
        v14 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v8 + v14, v6),
          v5 = COERCE_AS(__typeof__(v5),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      return v7;
    }
  }
  return result;
}

__attribute__((swiftcall)) void

game_templates_14a52c0(PSEUDO_X8 x8_, __int64 a1, __int64* a2, __int64* a3)
{
  __int64* a4 = (__int64*)PSEUDO_X8_VALUE(x8_);
  __int64 v4;
  __int64* v8;
  __int64 v9;
  unsigned __int64 v10;
  __int64 v11;
  _QWORD* v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  unsigned __int64 v19;
  bool v20;
  unsigned __int64 v21;
  __int64 v22;
  unsigned __int64 v23;
  __int64 result;

  v4 = a1 + 16;
  v8 = (__int64*)fw_memory_g_heap_manager_ptr;
  v9 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      64, 16, 0);
  *a4 = v9;
  a4[1] = v4;
  v10 = a2[1];
  a4[2] = 0;
  *(_QWORD*)v9 = 0;
  *(_QWORD*)(v9 + 8) = 0;
  if (v10 >= 0xFFFFFFFFFFFFFFF7LL) {
    String_60a1d0();
  }
  v11 = *a2;
  v12 = (_QWORD*)v9;
  if (v10 >= 0x17) {
    if ((v10 | 7) == 0x17) {
      v14 = 26;
    }
    else {
      v14 = (v10 | 7) + 1;
    }
    v13 = fw_memory_HeapManager_Allocate(*v8, v14, 16, 0);
    v12[3] = v10;
    v12[4] = v13;
    v12[2] = v14 | 1;
    goto LABEL_9;
  }
  v13 = v9 + 17;
  *(_BYTE*)(v9 + 16) = 2 * v10;
  if (v10 != 0) {
  LABEL_9:
    memmove(v13, v11, v10);
  }
  *(_BYTE*)(v13 + v10) = 0;
  v15 = *a3;
  v16 = a3[1];
  *a3 = 0;
  v12[5] = v15;
  v12[6] = v16;
  v17 = a3[2];
  a3[1] = 0;
  a3[2] = 0;
  v12[7] = v17;
  *((_BYTE*)a4 + 16) = 1;
  v18 = *a4;
  v19 = *(unsigned __int8*)(v18 + 16);
  v20 = (v19 & 1) == 0;
  v21 = v19 >> 1;
  if (v20) {
    v22 = v18 + 17;
  }
  else {
    v22 = *(_QWORD*)(v18 + 32);
  }
  if (v20) {
    v23 = v21;
  }
  else {
    v23 = *(_QWORD*)(v18 + 24);
  }
  result = std___1___hash_memory(v22, v23);
  *(_QWORD*)(v18 + 8) = result;
  {
    result;
    return;
  }
}

void game_templates_156e100(__int64* a1)
{
  __int64 v2;
  __int64* v3;
  __int64 v4;
  __int64 v5;
  unsigned __int64 v6;
  void* v7;
  __int64 v8;
  __int64 v9;
  _QWORD* v10;
  __int64 v11;
  _QWORD* v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  struct {
    _QWORD v16[2];
    _QWORD* v17;
    __int64 v18;
    int v19;
  } v16_;
  _DWORD* v20;

  v2 = *a1;
  v3 = (__int64*)a1[1];
  if ((__int64*)v2 != v3) {
    v16_.v17 = nullptr;
    v16_.v18 = 0;
    v16_.v16[0] = 0;
    v16_.v16[1] = 0;
    v16_.v19 = 1065353216;
    v4 = GameData_2258dc0;
    if (GameData_2258dc8 != GameData_2258dc0) {
      v5 = 0;
      v6 = 0;
      v7 = std___1_piecewise_construct_ptr;
      do {
        v20 = (_DWORD*)(v4 + v5);
        v8 = GameRoutine_15704e0((__int64)v16_.v16, (int*)(v4 + v5),
                                 (__int64)v7, &v20);
        v4 = GameData_2258dc0;
        v9 = GameData_2258dc8;
        *(_QWORD*)(v8 + 24) = v6++;
        v5 += 4;
      } while (v6 < (v9 - v4) >> 2);
      v2 = *a1;
      v3 = (__int64*)a1[1];
    }
    v20 = v16_.v16;
    if ((__int64*)v2 != v3) {
      GameHr_156e320(
          v2, v3, (__int64)&v20,
          (2 * __clz(0xCCCCCCCCCCCCCCCDLL * (((__int64)v3 - v2) >> 3))) ^ 0x7E,
          1);
    }
    v10 = v16_.v17;
    v11 = fw_memory_g_heap_manager_ptr;
    if (v16_.v17 != nullptr) {
      do {
        v12 = (_QWORD*)*v10;
        if (*(_QWORD*)(*(_QWORD*)v11 + 200LL) != 0) {
          v13 = 128;
        }
        else {
          v13 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)v11 + v13, (__int64)v10);
        v10 = v12;
      } while (v12 != nullptr);
    }
    v14 = v16_.v16[0];
    v16_.v16[0] = 0;
    if (v14 != 0) {
      v15 = 128;
      if (*(_QWORD*)(*(_QWORD*)v11 + 200LL) == 0) {
        v15 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v11 + v15, v14);
    }
  }
}

void game_templates_1680240(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  char v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  struct {
    __int64 v14;
    __int64 v15;
  } v14_;
  struct {
    _QWORD v16[6];
    int v17;
    char gap68_[4];
    __int64 v18;
    __int64 v19;
    __int64 v20;
  } v16_;

  memset(&v16_.v16[3], 0, 24);
  v16_.v18 = 0;
  v16_.v19 = 0;
  v16_.v20 = 0;
  v16_.v17 = 0;
  v16_.v16[0] = 0x800000018LL;
  v16_.v16[1] = 0x500000050LL;
  v16_.v16[2] = 0x100000;
  game_1366bd0((void*)(&v14_.v14), (__int64)"Layout/Gmap.arc",
               (__int64)"Gmap_UI_MapInfo_Pin", (__int64)v16_.v16);
  v2 = v14_.v14;
  v3 = v14_.v15;
  v4 = *(_QWORD*)(a1 + 160);
  v14_.v14 = 0;
  v14_.v15 = 0;
  *(_QWORD*)(a1 + 152) = v2;
  *(_QWORD*)(a1 + 160) = v3;
  if (v4 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
    std___1___shared_weak_count___release_weak(v4);
  }
  v5 = v14_.v15;
  if (v14_.v15 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v14_.v15 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
    std___1___shared_weak_count___release_weak(v5);
  }
  v6 = v16_.v18;
  if (v16_.v18 != 0) {
    v7 = v16_.v19;
    v8 = fw_memory_g_heap_manager_ptr;
    if (v16_.v18 == v16_.v19) {
      goto LABEL_18;
    }
    v9 = v16_.v19;
    do {
      v10 = *(_BYTE*)(v9 - 24);
      v9 -= 24;
      if ((v10 & 1) != 0) {
        v11 = *(_QWORD*)(v7 - 8);
        if (v11 != 0) {
          if (*(_QWORD*)(*(_QWORD*)v8 + 200LL) != 0) {
            v12 = 128;
          }
          else {
            v12 = 56;
          }
          nn_mem_StandardAllocator_Free(*(_QWORD*)v8 + v12, v11);
        }
      }
      v7 = v9;
    } while (v9 != v6);
    v16_.v19 = v6;
    v6 = v16_.v18;
    if (v16_.v18 != 0) {
    LABEL_18:
      v13 = 128;
      if (*(_QWORD*)(*(_QWORD*)v8 + 200LL) == 0) {
        v13 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v8 + v13, v6);
    }
  }
}

void game_templates_16824c0(__int64 a1)
{
  int v1;
  __int64* v2;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  _BOOL4 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64* v13;
  __int64* i;
  __int64 v15;
  __int64 j;
  __int64** v18;
  __int64* v19;
  float v20;
  __int128 v21;
  __int64 v22;
  __int64 v23;
  int v24;
  _QWORD* v25;
  unsigned __int64 v26;
  _QWORD* v27;
  __int64 v28;
  _QWORD* v29;
  __int128 v30;
  float v31;
  _QWORD* v32;
  unsigned __int64 v33;
  _QWORD* v34;
  _QWORD* v35;
  _QWORD* v36;
  _QWORD* v37;
  unsigned __int64 v38;
  __int64 (***v39)();
  __int64 (**v40)();
  _QWORD* v41;
  unsigned __int64 v42;
  __int64 v43;
  unsigned __int64 v44;
  unsigned __int64 v45;
  unsigned __int64 v46;
  __int64 v47;
  __int64 v48;
  _QWORD* v49;
  __int64 v50;
  _QWORD* v51;
  __int64 v52;
  _QWORD* v53;
  __int64 v54;
  unsigned __int64 v55;
  unsigned __int64 v56;
  unsigned __int64 v57;
  __int64 v58;
  __int64 v59;
  _QWORD* v60;
  __int64 v61;
  __int64 (***v62)();
  __int64 v63;
  __int64 (***v64)();
  unsigned __int64 v65;
  unsigned __int64 v66;
  unsigned __int64 v67;
  __int64 v68;
  __int64 (***v69)();
  __int64 v70;
  __int64 (***v71)();
  __int64 v72;
  unsigned __int64 v73;
  unsigned __int64 v74;
  unsigned __int64 v75;
  __int64 v76;
  __int64 v77;
  _QWORD* v78;
  __int64 v79;
  _QWORD* v80;
  __int64 v81;
  _QWORD* v82;
  __int64 v83;
  _QWORD* v84;
  __int64 v85;
  _QWORD* v86;
  __int64 v87;
  _QWORD* v88;
  __int64 v89;
  _QWORD* v90;
  __int64 v91;
  __int64 v92;
  __int64 v93;
  __int64 v94;
  __int64* v95;
  __int64 v96;
  float v97;
  __int128 v98;
  __int64 v99;
  __int64 v100;
  __int64* v101;
  char* v102;
  __int64 v103;
  __int64* v104;
  __int64 v105;
  __int64 v106;
  unsigned __int64 v107;
  __int64 v108;
  __int64 v109;
  __int64 v110;
  int v111;
  float v112[3];
  int v113;
  struct {
    __int64* v114;
    __int64 v115;
  } v114_;

  v2 = *(__int64**)(a1 + 168);
  if (v2 == nullptr) {
    return;
  }
  if (v2[2] == 0) {
    return;
  }
  v4 = v2[1];
  if (v4 == 0) {
    return;
  }
  v5 = std___1___shared_weak_count_lock(v4);
  if (v5 == 0) {
    goto LABEL_12;
  }
  v6 = *v2;
  if (*v2 != 0) {
    v1 = *(unsigned __int8*)(v6 + 24);
    v7 = v6 + 152;
    if (v1 == 0) {
      v7 = 0;
    }
    v8 = v7 != v2[2];
  }
  else {
    v8 = true;
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                       0xFFFFFFFFFFFFFFFFLL) != 0) {
    if (v8) {
    LABEL_12:
      v9 = v2[1];
      if (v9 == 0 || *(_QWORD*)(v9 + 8) == -1) {
        return;
      }
      goto LABEL_17;
    }
  }
  else {
    v10 = v5;
    (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
    std___1___shared_weak_count___release_weak(v10);
    if (v8) {
      goto LABEL_12;
    }
  }
  if ((v1 & 1) == 0) {
    return;
  }
LABEL_17:
  v11 = *(int*)(a1 + 184);
  v113 = 0;
  if (GameData_1bee1cc[8 * v11 + 2] == 1) {
    v12 = *(_QWORD*)(GameData_21c9700 + 8);
    v13 = *(__int64**)(v12 + 48);
    for (i = *(__int64**)(v12 + 56); v13 != i; ++v13) {
      v15 = *v13;
      if (*(_BYTE*)(*v13 + 176) == 3 && *(_BYTE*)(*v13 + 112) == 0) {
      LABEL_30:
        if ((GameHr_16520a0(*v13, GameData_1bee1cc[8 * *(int*)(a1 + 184) + 7]) &
             1) != 0) {
          v18 = (__int64**)ui_1685c40((_QWORD*)a1, &v113);
          game_gmap_GmapUIDef_SetQuestIcon(
              (__int64)(v18 + 2), v15,
              GameData_1bee1cc[8 * *(int*)(a1 + 184) + 7]);
          v19 = *v18;
          if (*v18 != nullptr) {
            v20 = *(float*)(a1 + 280);
            v21 = *(_OWORD*)(v15 + 32);
            LODWORD(v114_.v115) = 0;
            *(float*)&v114_.v114 =
                (float)((float)(*(float*)&v21 * v20) + 0x1.e000000000000p+9f) +
                -0x1.e000000000000p+9f;
            *((float*)&v114_.v114 + 1) =
                0x1.0e00000000000p+9f -
                (float)((float)(v20 * *((float*)&v21 + 2)) +
                        0x1.0e00000000000p+9f);
            ui_LayoutAccessor_SetTranslate(v19, (__int64)&v114_.v114);
          }
        }
      }
      else {
        for (j = *(_QWORD*)(a1 + 192); j != *(_QWORD*)(a1 + 200); j += 96) {
          if (*(_BYTE*)(j + 36) == 1 && *(_QWORD*)j == v15) {
            goto LABEL_30;
          }
        }
      }
    }
  }
  v22 = *(_QWORD*)(a1 + 192);
  v23 = *(_QWORD*)(a1 + 200);
  if (v22 != v23) {
    v111 = 0;
    v110 = *(_QWORD*)(a1 + 200);
    do {
      if (*(_BYTE*)(v22 + 36) != 1) {
        goto LABEL_36;
      }
      v24 = *(_DWORD*)(a1 + 184);
      if (v24 <= 3) {
        if (v24 != 2) {
          if (v24 != 3) {
            goto LABEL_36;
          }
          v25 = (_QWORD*)ui_1685c40((_QWORD*)a1, &v113);
          v27 = (_QWORD*)v25[7];
          v26 = v25[8];
          v28 = (__int64)v25;
          if ((unsigned __int64)v27 < v26) {
            v29 = v27 + 6;
            v27[4] = v27;
            *v27 = GameData_2080680;
            v27[1] = a1;
            goto LABEL_151;
          }
          v43 = v25[6];
          v44 = 1 - 0x5555555555555555LL * (((__int64)v27 - v43) >> 4);
          if (v44 <= 0x555555555555555LL) {
            v45 = 0xAAAAAAAAAAAAAAABLL * ((__int64)(v26 - v43) >> 4);
            if (2 * v45 > v44) {
              v44 = 2 * v45;
            }
            if (v45 >= 0x2AAAAAAAAAAAAAALL) {
              v46 = 0x555555555555555LL;
            }
            else {
              v46 = v44;
            }
            if (v46 <= 0x555555555555555LL) {
              v47 = 3 * v46;
              v48 = fw_memory_HeapManager_Allocate(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr, 48 * v46, 16, 0);
              v49 = (_QWORD*)((char*)v27 + v48 - v43);
              v50 = v48;
              *v49 = GameData_2080680;
              v49[1] = a1;
              v49[4] = v49;
              if ((_QWORD*)v43 == v27) {
                goto LABEL_141;
              }
              v51 = (_QWORD*)v43;
              v52 = v48;
              do {
                v53 = (_QWORD*)v51[4];
                if (v53 != nullptr) {
                  if (v51 == v53) {
                    *(_QWORD*)(v52 + 32) = v52;
                    (*(void (**)(_QWORD*, __int64))(*v53 + 24LL))(v53, v52);
                  }
                  else {
                    *(_QWORD*)(v52 + 32) = v53;
                    v51[4] = 0;
                  }
                }
                else {
                  *(_QWORD*)(v52 + 32) = 0;
                }
                v51 += 6;
                v52 += 48;
              } while (v51 != v27);
              while (1) {
                v86 = *(_QWORD**)(v43 + 32);
                if ((_QWORD*)v43 == v86) {
                  v85 = 32;
                }
                else {
                  if (v86 == nullptr) {
                    goto LABEL_122;
                  }
                  v85 = 40;
                }
                (*(void (**)(__int64))(*v86 + v85))((__int64)v86);
              LABEL_122:
                v43 += 48;
                if ((_QWORD*)v43 == v27) {
                  goto LABEL_140;
                }
              }
            }
          LABEL_176:
            GameRoutine_60a210();
          }
          goto LABEL_177;
        }
        v37 = (_QWORD*)ui_1685c40((_QWORD*)a1, &v113);
        v39 = (__int64 (***)(void))v37[7];
        v38 = v37[8];
        v28 = (__int64)v37;
        if ((unsigned __int64)v39 < v38) {
          v40 = GameData_2080580;
        LABEL_52:
          *v39 = v40;
          v39[4] = (__int64 (**)(void))v39;
          v29 = v39 + 6;
          goto LABEL_151;
        }
        v54 = v37[6];
        v55 = 1 - 0x5555555555555555LL * (((__int64)v39 - v54) >> 4);
        if (v55 > 0x555555555555555LL) {
          goto LABEL_177;
        }
        v56 = 0xAAAAAAAAAAAAAAABLL * ((__int64)(v38 - v54) >> 4);
        if (2 * v56 > v55) {
          v55 = 2 * v56;
        }
        if (v56 >= 0x2AAAAAAAAAAAAAALL) {
          v57 = 0x555555555555555LL;
        }
        else {
          v57 = v55;
        }
        if (v57 > 0x555555555555555LL) {
          goto LABEL_176;
        }
        v58 = 3 * v57;
        v59 = fw_memory_HeapManager_Allocate(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 48 * v57, 16, 0);
        v60 = (__int64 (***)(void))((char*)v39 + v59 - v54);
        v61 = v59;
        *v60 = GameData_2080580;
        v60[4] = v60;
        if ((__int64 (***)(void))v54 == v39) {
        LABEL_147:
          v93 = v61 + 16 * v58;
          v29 = v60 + 6;
          *(_QWORD*)(v28 + 48) = v61;
          *(_QWORD*)(v28 + 56) = v60 + 6;
          *(_QWORD*)(v28 + 64) = v93;
          if (v54 != 0) {
            v94 = 128;
            if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                0) {
              v94 = 56;
            }
            nn_mem_StandardAllocator_Free(
                *(_QWORD*)fw_memory_g_heap_manager_ptr + v94, v54);
          }
          goto LABEL_151;
        }
        v62 = (__int64 (***)(void))v54;
        v63 = v59;
        do {
          v64 = (__int64 (***)(void))v62[4];
          if (v64 != nullptr) {
            if (v62 == v64) {
              *(_QWORD*)(v63 + 32) = v63;
              ((void (*)(__int64 (***)(void), __int64))(*v64)[3])(v64, v63);
            }
            else {
              *(_QWORD*)(v63 + 32) = v64;
              v62[4] = nullptr;
            }
          }
          else {
            *(_QWORD*)(v63 + 32) = 0;
          }
          v62 += 6;
          v63 += 48;
        } while (v62 != v39);
        v23 = v110;
        while (2) {
          v88 = *(_QWORD**)(v54 + 32);
          if ((_QWORD*)v54 != v88) {
            if (v88 != nullptr) {
              v87 = 40;
            LABEL_128:
              (*(void (**)(__int64))(*v88 + v87))((__int64)v88);
            }
            v54 += 48;
            if ((__int64 (***)(void))v54 == v39) {
              v54 = *(_QWORD*)(v28 + 48);
              goto LABEL_147;
            }
            continue;
          }
          break;
        }
        v87 = 32;
        goto LABEL_128;
      }
      if (v24 == 4) {
        v41 = (_QWORD*)ui_1685c40((_QWORD*)a1, &v113);
        v39 = (__int64 (***)(void))v41[7];
        v42 = v41[8];
        v28 = (__int64)v41;
        if ((unsigned __int64)v39 < v42) {
          v40 = GameData_2080700;
          goto LABEL_52;
        }
        v43 = v41[6];
        v65 = 1 - 0x5555555555555555LL * (((__int64)v39 - v43) >> 4);
        if (v65 <= 0x555555555555555LL) {
          v66 = 0xAAAAAAAAAAAAAAABLL * ((__int64)(v42 - v43) >> 4);
          if (2 * v66 > v65) {
            v65 = 2 * v66;
          }
          if (v66 >= 0x2AAAAAAAAAAAAAALL) {
            v67 = 0x555555555555555LL;
          }
          else {
            v67 = v65;
          }
          if (v67 > 0x555555555555555LL) {
            goto LABEL_176;
          }
          v47 = 3 * v67;
          v68 = fw_memory_HeapManager_Allocate(
              *(_QWORD*)fw_memory_g_heap_manager_ptr, 48 * v67, 16, 0);
          v49 = (__int64 (***)(void))((char*)v39 + v68 - v43);
          v50 = v68;
          *v49 = GameData_2080700;
          v49[4] = v49;
          if ((__int64 (***)(void))v43 == v39) {
            goto LABEL_141;
          }
          v69 = (__int64 (***)(void))v43;
          v70 = v68;
          do {
            v71 = (__int64 (***)(void))v69[4];
            if (v71 != nullptr) {
              if (v69 == v71) {
                *(_QWORD*)(v70 + 32) = v70;
                ((void (*)(__int64 (***)(void), __int64))(*v71)[3])(v71, v70);
              }
              else {
                *(_QWORD*)(v70 + 32) = v71;
                v69[4] = nullptr;
              }
            }
            else {
              *(_QWORD*)(v70 + 32) = 0;
            }
            v69 += 6;
            v70 += 48;
          } while (v69 != v39);
          while (2) {
            v90 = *(_QWORD**)(v43 + 32);
            if ((_QWORD*)v43 != v90) {
              if (v90 != nullptr) {
                v89 = 40;
              LABEL_135:
                (*(void (**)(__int64))(*v90 + v89))((__int64)v90);
              }
              v43 += 48;
              if ((__int64 (***)(void))v43 == v39) {
              LABEL_140:
                v43 = *(_QWORD*)(v28 + 48);
              LABEL_141:
                v91 = v50 + 16 * v47;
                v29 = v49 + 6;
                *(_QWORD*)(v28 + 48) = v50;
                *(_QWORD*)(v28 + 56) = v49 + 6;
                *(_QWORD*)(v28 + 64) = v91;
                if (v43 != 0) {
                  v92 = 128;
                  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                 200LL) == 0) {
                    v92 = 56;
                  }
                  nn_mem_StandardAllocator_Free(
                      *(_QWORD*)fw_memory_g_heap_manager_ptr + v92, v43);
                }
                v23 = v110;
              LABEL_151:
                *(_QWORD*)(v28 + 56) = v29;
                *(_BYTE*)(v28 + 80) = 1;
                game_gameui_1596b00(v28 + 16);
                GameHr_1686120(*(_DWORD*)(a1 + 184), v28, *(_QWORD*)v22);
                v95 = *(__int64**)v28;
                if (*(_QWORD*)v28 != 0) {
                  v96 = *(_QWORD*)v22;
                  v97 = *(float*)(a1 + 280);
                  LODWORD(v114_.v115) = 0;
                  v98 = *(_OWORD*)(v96 + 32);
                  *(float*)&v114_.v114 = (float)((float)(*(float*)&v98 * v97) +
                                                 0x1.e000000000000p+9f) +
                                         -0x1.e000000000000p+9f;
                  *((float*)&v114_.v114 + 1) =
                      0x1.0e00000000000p+9f -
                      (float)((float)(v97 * *((float*)&v98 + 2)) +
                              0x1.0e00000000000p+9f);
                  ui_LayoutAccessor_SetTranslate(v95, (__int64)&v114_.v114);
                }
                goto LABEL_36;
              }
              continue;
            }
            break;
          }
          v89 = 32;
          goto LABEL_135;
        }
      LABEL_177:
        GameRoutine_1654e20();
      }
      if (v24 != 5 || *(_QWORD*)v22 == 0) {
        goto LABEL_36;
      }
      v30 = *(_OWORD*)(*(_QWORD*)v22 + 32LL);
      v31 = *(float*)(a1 + 280);
      v112[2] = 0x0.0p+0f;
      v112[0] = (float)((float)(*(float*)&v30 * v31) + 0x1.e000000000000p+9f) +
                -0x1.e000000000000p+9f;
      v112[1] =
          0x1.0e00000000000p+9f -
          (float)((float)(v31 * *((float*)&v30 + 2)) + 0x1.0e00000000000p+9f);
      v32 = (_QWORD*)ui_1685c40((_QWORD*)a1, &v113);
      v34 = (_QWORD*)v32[7];
      v33 = v32[8];
      v35 = v32;
      if ((unsigned __int64)v34 < v33) {
        v34[4] = v34;
        v36 = v34 + 6;
        *v34 = GameData_2080780;
        goto LABEL_159;
      }
      v72 = v32[6];
      v73 = 1 - 0x5555555555555555LL * (((__int64)v34 - v72) >> 4);
      if (v73 > 0x555555555555555LL) {
        goto LABEL_177;
      }
      v74 = 0xAAAAAAAAAAAAAAABLL * ((__int64)(v33 - v72) >> 4);
      if (2 * v74 > v73) {
        v73 = 2 * v74;
      }
      if (v74 >= 0x2AAAAAAAAAAAAAALL) {
        v75 = 0x555555555555555LL;
      }
      else {
        v75 = v73;
      }
      if (v75 > 0x555555555555555LL) {
        goto LABEL_176;
      }
      v76 = 3 * v75;
      v77 = fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 48 * v75, 16, 0);
      v78 = (_QWORD*)((char*)v34 + v77 - v72);
      v79 = v77;
      *v78 = GameData_2080780;
      v78[4] = v78;
      if ((_QWORD*)v72 == v34) {
        goto LABEL_154;
      }
      v80 = (_QWORD*)v72;
      v81 = v77;
      do {
        v82 = (_QWORD*)v80[4];
        if (v82 != nullptr) {
          if (v80 == v82) {
            *(_QWORD*)(v81 + 32) = v81;
            (*(void (**)(_QWORD*, __int64))(*v82 + 24LL))(v82, v81);
          }
          else {
            *(_QWORD*)(v81 + 32) = v82;
            v80[4] = 0;
          }
        }
        else {
          *(_QWORD*)(v81 + 32) = 0;
        }
        v80 += 6;
        v81 += 48;
      } while (v80 != v34);
      do {
        v84 = *(_QWORD**)(v72 + 32);
        if ((_QWORD*)v72 == v84) {
          v83 = 32;
        LABEL_114:
          (*(void (**)(__int64))(*v84 + v83))((__int64)v84);
          goto LABEL_115;
        }
        if (v84 != nullptr) {
          v83 = 40;
          goto LABEL_114;
        }
      LABEL_115:
        v72 += 48;
      } while ((_QWORD*)v72 != v34);
      v72 = v35[6];
    LABEL_154:
      v99 = v79 + 16 * v76;
      v36 = v78 + 6;
      v35[6] = v79;
      v35[7] = v78 + 6;
      v35[8] = v99;
      if (v72 != 0) {
        v100 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v100 = 56;
        }
        nn_mem_StandardAllocator_Free(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v100, v72);
      }
      v23 = v110;
    LABEL_159:
      v35[7] = v36;
      *((_BYTE*)v35 + 80) = 1;
      game_gameui_1596b00((__int64)(v35 + 2));
      if (*v35 != 0) {
        ui_LayoutAccessor_SetTranslate((__int64*)*v35, (__int64)v112);
        v101 = (__int64*)*v35;
        LODWORD(v114_.v114) = *(_DWORD*)(a1 + 668);
        HIDWORD(v114_.v114) = (_DWORD)v114_.v114;
        ui_LayoutAccessor_SetScale((__int64)v101, &v114_.v114);
      }
      v102 = game_util_Format("L_Ripples%02d", v111);
      LayoutAccessor_1560520(*(__int64**)(a1 + 168), (__int64)"L_Ripples",
                             (__int64)"N_Ripples", (__int64)v102);
      LayoutAccessor_1560070((void*)(&v114_.v114), *(__int64**)(a1 + 168),
                             v102);
      if (v114_.v115 != 0) {
        v103 = std___1___shared_weak_count_lock(v114_.v115);
        v104 = v114_.v114;
        if (v114_.v115 != 0) {
          std___1___shared_weak_count___release_weak(v114_.v115);
        }
        if (v103 != 0 && v104 != nullptr) {
          GameHr_1562680((__int64)v104, "Select", 0x1.0000000000000p+0f);
          ui_LayoutAccessor_SetPaneVisible((__int64)v104, (__int64)"N_Icon", 0);
          ui_LayoutAccessor_SetTranslate(v104, (__int64)v112);
          LODWORD(v114_.v114) = *(_DWORD*)(a1 + 668);
          HIDWORD(v114_.v114) = (_DWORD)v114_.v114;
          ui_LayoutAccessor_SetScale((__int64)v104, &v114_.v114);
        LABEL_168:
          if (atomic_fetch_add((atomic_ullong* volatile)(v103 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v103 + 16LL))(v103);
            std___1___shared_weak_count___release_weak(v103);
          }
        }
        else if (v103 != 0) {
          goto LABEL_168;
        }
      }
      ++v111;
    LABEL_36:
      v22 += 96;
    } while (v22 != v23);
  }
  v105 = *(_QWORD*)(a1 + 232);
  v106 = *(_QWORD*)(a1 + 240);
  v107 = v113;
  if (0x2E8BA2E8BA2E8BA3LL * ((v106 - v105) >> 3) > (unsigned __int64)v113) {
    v108 = 88LL * v113;
    do {
      v109 = *(_QWORD*)(v105 + v108);
      if (v109 != 0) {
        LayoutAccessor_155e830(v109, 0);
        v105 = *(_QWORD*)(a1 + 232);
        v106 = *(_QWORD*)(a1 + 240);
      }
      ++v107;
      v108 += 88;
    } while (0x2E8BA2E8BA2E8BA3LL * ((v106 - v105) >> 3) > v107);
  }
}

__int64* game_templates_17d57c0(__int64* a1, __int64** a2)
{
  _QWORD* v2;
  _QWORD* v3;
  _QWORD* v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  _QWORD* v11;
  __int64* v12;
  __int64* v13;
  __int64 v14;
  __int64* v15;
  __int64* v16;
  __int64* v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64* v22;
  __int64 v24;

  v2 = (_QWORD*)*a1;
  v3 = (_QWORD*)a1[1];
  if ((_QWORD*)*a1 != v3) {
    v6 = (_QWORD*)a1[1];
    do {
      v9 = *(v6 - 10);
      v6 -= 10;
      v8 = v9;
      *v6 = 0;
      if (v9 != 0) {
        v24 = v8;
        v10 = *(v3 - 4);
        if (v10 == 0) {
        LABEL_35:
          GameRoutine_60a310();
        }
        (*(void (**)(__int64, __int64*))(*(_QWORD*)v10 + 48LL))(v10, &v24);
      }
      v11 = (_QWORD*)*(v3 - 4);
      if (v3 - 8 == v11) {
        v7 = 32;
      }
      else {
        if (v11 == nullptr) {
          goto LABEL_5;
        }
        v7 = 40;
      }
      (*(void (**)(__int64))(*v11 + v7))((__int64)v11);
    LABEL_5:
      v3 = v6;
    } while (v6 != v2);
  }
  a1[1] = (__int64)v2;
  v12 = *a2;
  v13 = a2[1];
  if (*a2 != v13) {
    do {
      if ((unsigned __int64)v2 >= a1[2]) {
        v2 = (_QWORD*)GameHr_637cc0(a1, v12, v12 + 8);
      }
      else {
        v14 = *v12;
        *v12 = 0;
        *v2 = v14;
        v15 = (__int64*)v12[6];
        if (v15 != nullptr) {
          if (v12 + 2 == v15) {
            v2[6] = v2 + 2;
            (*(void (**)(__int64))(*(_QWORD*)v12[6] + 24LL))(v12[6]);
          }
          else {
            v2[6] = v15;
            v12[6] = 0;
          }
        }
        else {
          v2[6] = 0;
        }
        v2[8] = v12[8];
        v2 += 10;
      }
      v12 += 10;
      a1[1] = (__int64)v2;
    } while (v12 != v13);
    v12 = *a2;
    v16 = a2[1];
    if (*a2 != v16) {
      v17 = a2[1];
      do {
        v20 = *(v17 - 10);
        v17 -= 10;
        v19 = v20;
        *v17 = 0;
        if (v20 != 0) {
          v24 = v19;
          v21 = *(v16 - 4);
          if (v21 == 0) {
            goto LABEL_35;
          }
          (*(void (**)(__int64, __int64*))(*(_QWORD*)v21 + 48LL))(v21, &v24);
        }
        v22 = (__int64*)*(v16 - 4);
        if (v16 - 8 == v22) {
          v18 = 32;
        }
        else {
          if (v22 == nullptr) {
            goto LABEL_27;
          }
          v18 = 40;
        }
        (*(void (**)(__int64))(*v22 + v18))((__int64)v22);
      LABEL_27:
        v16 = v17;
      } while (v17 != v12);
    }
  }
  a2[1] = v12;
  return a1;
}

#pragma GCC visibility pop
