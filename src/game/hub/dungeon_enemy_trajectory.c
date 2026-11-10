#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 snd_Fade_Destroy_Fade(_QWORD);
__int64 snd_fnd_WeakHandle_get(_QWORD);
__int64 snd_fnd_WeakHandle_isValid(_QWORD);
__n128 snd_Fade_Fade_10c830(_QWORD, float);
__int64 DungeonEnemyTrajectory_fa03f0(__int64 a1, char a2);
__attribute__((swiftcall)) void DungeonController_f5f960(PSEUDO_X8);
__int64** GameRoutine_14a1940(__int64** result, float);
__int64 GameRoutine_112180(__int64, __int64);
__int64 GameRoutine_14a17c0(__int64*, long double);
__int64 GameRoutine_14a1b00(__int64*, float);
__int64 GameRoutine_14a3920(__int64 result);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 game_hub_fa1b40(float*, float);
__int64 memmove(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
__int64 snd_Fade_Destroy_Fade_alt1(_QWORD*) __asm__("snd_Fade_Destroy_Fade");
__int64 snd_play_ff2d0(__int64, __int64, __int64, unsigned int, unsigned int,
                       int, float, float);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
__int64 strlen(_QWORD);
char* game_util_Format(__int64, __int64, __int64, __int64, __int64, __int64,
                       __int64, __int64, char);
extern __int128 GameData_1a82cb0;
extern __int64 GameData_212dbb8[9];
extern __int64 GameData_21ec7c0;
extern __int64 GameData_21f3d08;
extern __int64 fw_memory_g_heap_manager;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_script_hub_g_frame_counter;
float atan2f(_QWORD, float, float);
void __attribute__((noreturn)) String_60a1d0();
void snd_Fade_Fade_10c830_alt1(__int64, float) __asm__("snd_Fade_Fade_10c830");
__int64 DungeonEnemyTrajectory_fa0960(__int64 a1, float a2);

__int64 DungeonEnemyTrajectory_fa03f0(__int64 a1, char a2)
{
  float v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  _BYTE v9[200];

  *(_BYTE*)(a1 + 21) = 0;
  if ((a2 & 1) != 0) {
    v3 = 100.0;
  }
  else {
    v3 = 500.0;
  }
  snd_Fade_Fade_10c830(v9, v3);
  if ((snd_fnd_WeakHandle_isValid(a1 + 24) & 1) != 0) {
    v4 = snd_fnd_WeakHandle_get(a1 + 24);
    (*(void (**)(__int64, _BYTE*, _QWORD, double))(
        *(_QWORD*)(v4 - 5592) + 248LL))(v4 - 5592, v9, 0, 0.0);
  }
  snd_Fade_Destroy_Fade(v9);
  snd_Fade_Fade_10c830(v9, v3);
  if ((snd_fnd_WeakHandle_isValid(a1 + 48) & 1) != 0) {
    v5 = snd_fnd_WeakHandle_get(a1 + 48);
    (*(void (**)(__int64, _BYTE*, _QWORD, double))(
        *(_QWORD*)(v5 - 5592) + 248LL))(v5 - 5592, v9, 0, 0.0);
  }
  snd_Fade_Destroy_Fade(v9);
  snd_Fade_Fade_10c830(v9, v3);
  if ((snd_fnd_WeakHandle_isValid(a1 + 72) & 1) != 0) {
    v6 = snd_fnd_WeakHandle_get(a1 + 72);
    (*(void (**)(__int64, _BYTE*, _QWORD, double))(
        *(_QWORD*)(v6 - 5592) + 248LL))(v6 - 5592, v9, 0, 0.0);
  }
  snd_Fade_Destroy_Fade(v9);
  snd_Fade_Fade_10c830(v9, v3);
  if ((snd_fnd_WeakHandle_isValid(a1 + 96) & 1) != 0) {
    v7 = snd_fnd_WeakHandle_get(a1 + 96);
    (*(void (**)(__int64, _BYTE*, _QWORD, double))(
        *(_QWORD*)(v7 - 5592) + 248LL))(v7 - 5592, v9, 0, 0.0);
  }
  return snd_Fade_Destroy_Fade(v9);
}

__int64 DungeonEnemyTrajectory_fa0960(__int64 a1, float a2)
{
  __int64 v3;
  float v4;
  __int64 v5;
  char* v6;
  float v7;
  float v8;
  float v9;
  float v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  float32x4_t v16;
  __int64 v17;
  __int64 v18;
  unsigned int v19;
  unsigned int i;
  __int64 v21;
  __int64 v22;
  char* v23;
  __int64** v24;
  unsigned __int64 v25;
  float32x4_t v26;
  float v27;
  __int64* v28;
  float v29;
  __int64 v30;
  unsigned int v31;
  unsigned int j;
  __int64 v33;
  __int64* v34;
  __int64 v35;
  unsigned int v36;
  unsigned int k;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  float32x4_t v41;
  float v42;
  __int64 v43;
  float v44;
  __int64 v45;
  unsigned int v46;
  unsigned int m;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  unsigned int v51;
  unsigned int n;
  __int64 v53;
  __int64 v54;
  float32x4_t v55;
  float v56;
  __int64 v57;
  float v58;
  __int64 v59;
  unsigned int v60;
  unsigned int ii;
  __int64 v62;
  __int64 v63;
  __int64 v64;
  unsigned int v65;
  unsigned int jj;
  __int64 v67;
  __int64 v68;
  float32x4_t v69;
  float v70;
  __int64 v71;
  float v72;
  __int64 v73;
  unsigned int v74;
  unsigned int kk;
  __int64 v76;
  __int64 v77;
  __int64 v78;
  unsigned int v79;
  unsigned int mm;
  __int64 v81;
  __int64 v82;
  float32x4_t v83;
  float v84;
  __int64 v85;
  float v86;
  __int64 v87;
  unsigned int v88;
  unsigned int nn;
  __int64 v90;
  __int64 v91;
  __int64 v92;
  unsigned int v93;
  unsigned int i1;
  __int64 v95;
  __int64 v96;
  float32x4_t v97;
  float v98;
  __int64 v99;
  __int64 v100;
  __int64 v101;
  float32x4_t v102;
  float v103;
  __int64 v104;
  __int64 v105;
  __int64 v106;
  float32x4_t v107;
  float v108;
  __int64* v109;
  __int64 v110;
  float v111;
  __int64** v112;
  __int64* v113;
  __int64 v114;
  __int64** v115;
  __int64* v116;
  __int64 v117;
  __int64** v118;
  __int64* v119;
  __int64 v120;
  __int64** v121;
  __int64* v122;
  __int64 v123;
  __int64** v124;
  __int64* v125;
  __int64 v126;
  __int64** v127;
  __int64* v128;
  __int64 v129;
  __int64** v130;
  __int64* v131;
  __int64 v132;
  __int64** v133;
  __int64 v134;
  float v135;
  __int64 v136;
  __int64 v137;
  __int64 v138;
  __int64 v139;
  __int64 v140;
  __int64 v141;
  char* v142;
  unsigned __int64 v143;
  unsigned __int64 v144;
  char* v145;
  __int64 v146;
  char* v147;
  __int64 v148;
  __int64 v149;
  __int64 v150;
  __int64 v151;
  __int64 v152;
  __int64 v153;
  __int64 v154;
  char* v155;
  unsigned __int64 v156;
  unsigned __int64 v157;
  char* v158;
  __int64 v159;
  char* v160;
  __int64 v161;
  __int64 v162;
  __int64 v163;
  __int64 v164;
  __int64 v165;
  __int64 v166;
  __int64 v167;
  char* v168;
  unsigned __int64 v169;
  unsigned __int64 v170;
  char* v171;
  __int64 v172;
  char* v173;
  __int64 v174;
  __int64 v175;
  __int64 v176;
  __int64 v177;
  __int64 v178;
  __int64 v179;
  __int64 v180;
  char* v181;
  unsigned __int64 v182;
  unsigned __int64 v183;
  char* v184;
  __int64 v185;
  char* v186;
  __int64 v187;
  __int64 result;
  __int64 v189;
  long double v190;
  char v191;
  char v192;
  char v193;
  struct {
    char* v194;
    char* v195;
    __int64 v196;
  } v194_;
  struct {
    __int64 v197;
    unsigned __int64 v198;
    char* v199;
  } v197_;
  struct {
    __int64 v200;
    int v201;
  } v200_;
  _QWORD v202[25];

  v136 = COERCE_AS(__typeof__(v136),
                   PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
  v137 = COERCE_AS(__typeof__(v137),
                   PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v138 = COERCE_AS(__typeof__(v138),
                   PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
  v139 = COERCE_AS(__typeof__(v139),
                   PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
  v140 = COERCE_AS(__typeof__(v140),
                   PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
  v141 = COERCE_AS(__typeof__(v141),
                   PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
  v148 = COERCE_AS(__typeof__(v148),
                   PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
  v149 = COERCE_AS(__typeof__(v149),
                   PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v150 = COERCE_AS(__typeof__(v150),
                   PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
  v151 = COERCE_AS(__typeof__(v151),
                   PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
  v152 = COERCE_AS(__typeof__(v152),
                   PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
  v153 = COERCE_AS(__typeof__(v153),
                   PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
  v161 = COERCE_AS(__typeof__(v161),
                   PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
  v162 = COERCE_AS(__typeof__(v162),
                   PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v163 = COERCE_AS(__typeof__(v163),
                   PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
  v164 = COERCE_AS(__typeof__(v164),
                   PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
  v165 = COERCE_AS(__typeof__(v165),
                   PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
  v166 = COERCE_AS(__typeof__(v166),
                   PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
  v174 = COERCE_AS(__typeof__(v174),
                   PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
  v175 = COERCE_AS(__typeof__(v175),
                   PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v176 = COERCE_AS(__typeof__(v176),
                   PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
  v177 = COERCE_AS(__typeof__(v177),
                   PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
  v178 = COERCE_AS(__typeof__(v178),
                   PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
  v179 = COERCE_AS(__typeof__(v179),
                   PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  v3 = *(_QWORD*)GameData_212dbb8[0];
  if ((*(_BYTE*)(*(_QWORD*)GameData_212dbb8[0] + 232LL) & 4) != 0 ||
      *(_DWORD*)(v3 + 140) != 0 || *(_BYTE*)(GameData_21f3d08 + 64) == 1 ||
      *(_QWORD*)(v3 + 200) == 0) {
    v5 = 0;
    v6 = nullptr;
    v194_.v195 = nullptr;
    v194_.v196 = 0;
    v194_.v194 = nullptr;
  }
  else {
    v4 = a2;
    DungeonController_f5f960((void*)((__int64*)&v194_.v194)),
        v136 = COERCE_AS(__typeof__(v136),
                         PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v137 = COERCE_AS(__typeof__(v137),
                         PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v138 = COERCE_AS(__typeof__(v138),
                         PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v139 = COERCE_AS(__typeof__(v139),
                         PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v140 = COERCE_AS(__typeof__(v140),
                         PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v141 = COERCE_AS(__typeof__(v141),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v148 = COERCE_AS(__typeof__(v148),
                         PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v149 = COERCE_AS(__typeof__(v149),
                         PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v150 = COERCE_AS(__typeof__(v150),
                         PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v151 = COERCE_AS(__typeof__(v151),
                         PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v152 = COERCE_AS(__typeof__(v152),
                         PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v153 = COERCE_AS(__typeof__(v153),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v161 = COERCE_AS(__typeof__(v161),
                         PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v162 = COERCE_AS(__typeof__(v162),
                         PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v163 = COERCE_AS(__typeof__(v163),
                         PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v164 = COERCE_AS(__typeof__(v164),
                         PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v165 = COERCE_AS(__typeof__(v165),
                         PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v166 = COERCE_AS(__typeof__(v166),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v174 = COERCE_AS(__typeof__(v174),
                         PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v175 = COERCE_AS(__typeof__(v175),
                         PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v176 = COERCE_AS(__typeof__(v176),
                         PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v177 = COERCE_AS(__typeof__(v177),
                         PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v178 = COERCE_AS(__typeof__(v178),
                         PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v179 = COERCE_AS(__typeof__(v179),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
    v5 = (__int64)v194_.v194;
    v6 = v194_.v195;
    a2 = v4;
  }
  v7 = 0x0.0p+0f;
  if (v6 != (char*)v5) {
    v7 = 0x1.0000000000000p+0f;
  }
  v8 = *(float*)(a1 + 8);
  v9 = 0x1.3333340000000p-3f;
  if (v8 > v7) {
    v9 = 0x1.99999a0000000p-4f;
  }
  v10 = fabsf(a2 / v9);
  if (v8 > v7) {
    v8 = v8 - v10;
    if (v8 >= v7) {
      goto LABEL_17;
    }
  LABEL_16:
    v8 = v7;
    goto LABEL_17;
  }
  if (v8 < v7) {
    v8 = v8 + v10;
    if (v8 > v7) {
      goto LABEL_16;
    }
  }
LABEL_17:
  *(float*)(a1 + 8) = v8;
  v11 = *(_QWORD*)(GameData_21ec7c0 + 80);
  if (v11 != 0) {
    v12 = *(_QWORD*)(GameData_21ec7c0 + 72);
    v13 = *(_QWORD*)(GameData_21ec7c0 + 80);
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v11 + 16), 1u,
                              memory_order_relaxed);
    v14 = std___1___shared_weak_count_lock(v13),
    v136 = COERCE_AS(__typeof__(v136),
                     PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
    v137 = COERCE_AS(__typeof__(v137),
                     PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
    v138 = COERCE_AS(__typeof__(v138),
                     PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
    v139 = COERCE_AS(__typeof__(v139),
                     PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
    v140 = COERCE_AS(__typeof__(v140),
                     PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
    v141 = COERCE_AS(__typeof__(v141),
                     PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
    v148 = COERCE_AS(__typeof__(v148),
                     PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
    v149 = COERCE_AS(__typeof__(v149),
                     PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
    v150 = COERCE_AS(__typeof__(v150),
                     PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
    v151 = COERCE_AS(__typeof__(v151),
                     PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
    v152 = COERCE_AS(__typeof__(v152),
                     PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
    v153 = COERCE_AS(__typeof__(v153),
                     PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
    v161 = COERCE_AS(__typeof__(v161),
                     PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
    v162 = COERCE_AS(__typeof__(v162),
                     PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
    v163 = COERCE_AS(__typeof__(v163),
                     PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
    v164 = COERCE_AS(__typeof__(v164),
                     PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
    v165 = COERCE_AS(__typeof__(v165),
                     PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
    v166 = COERCE_AS(__typeof__(v166),
                     PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
    v174 = COERCE_AS(__typeof__(v174),
                     PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
    v175 = COERCE_AS(__typeof__(v175),
                     PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
    v176 = COERCE_AS(__typeof__(v176),
                     PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
    v177 = COERCE_AS(__typeof__(v177),
                     PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
    v178 = COERCE_AS(__typeof__(v178),
                     PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
    v179 = COERCE_AS(__typeof__(v179),
                     PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
    std___1___shared_weak_count___release_weak(v11),
        v136 = COERCE_AS(__typeof__(v136),
                         PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v137 = COERCE_AS(__typeof__(v137),
                         PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v138 = COERCE_AS(__typeof__(v138),
                         PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v139 = COERCE_AS(__typeof__(v139),
                         PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v140 = COERCE_AS(__typeof__(v140),
                         PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v141 = COERCE_AS(__typeof__(v141),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v148 = COERCE_AS(__typeof__(v148),
                         PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v149 = COERCE_AS(__typeof__(v149),
                         PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v150 = COERCE_AS(__typeof__(v150),
                         PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v151 = COERCE_AS(__typeof__(v151),
                         PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v152 = COERCE_AS(__typeof__(v152),
                         PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v153 = COERCE_AS(__typeof__(v153),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v161 = COERCE_AS(__typeof__(v161),
                         PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v162 = COERCE_AS(__typeof__(v162),
                         PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v163 = COERCE_AS(__typeof__(v163),
                         PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v164 = COERCE_AS(__typeof__(v164),
                         PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v165 = COERCE_AS(__typeof__(v165),
                         PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v166 = COERCE_AS(__typeof__(v166),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v174 = COERCE_AS(__typeof__(v174),
                         PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v175 = COERCE_AS(__typeof__(v175),
                         PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v176 = COERCE_AS(__typeof__(v176),
                         PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v177 = COERCE_AS(__typeof__(v177),
                         PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v178 = COERCE_AS(__typeof__(v178),
                         PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v179 = COERCE_AS(__typeof__(v179),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
    if (v14 == 0 || v12 == 0) {
      *(_OWORD*)&v190 = (__typeof__(*(_OWORD*)&v190)){0};
      if (v14 == 0) {
        goto LABEL_28;
      }
    }
    else {
      v16 = vaddq_f32(
          *(float32x4_t*)(*(_QWORD*)(*(_QWORD*)(v12 + 24) + 16LL) + 560LL),
          COERCE_AS(float32x4_t, GameData_1a82cb0));
      LANES128(v16).n128_u32[3] = 0;
      v190 = *(long double*)&v16;
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v14 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v14 + 16LL))(v14),
          v136 = COERCE_AS(__typeof__(v136),
                           PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
          v137 = COERCE_AS(__typeof__(v137),
                           PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
          v138 = COERCE_AS(__typeof__(v138),
                           PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
          v139 = COERCE_AS(__typeof__(v139),
                           PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v140 = COERCE_AS(__typeof__(v140),
                           PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v141 = COERCE_AS(__typeof__(v141),
                           PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
          v148 = COERCE_AS(__typeof__(v148),
                           PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
          v149 = COERCE_AS(__typeof__(v149),
                           PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
          v150 = COERCE_AS(__typeof__(v150),
                           PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
          v151 = COERCE_AS(__typeof__(v151),
                           PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v152 = COERCE_AS(__typeof__(v152),
                           PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v153 = COERCE_AS(__typeof__(v153),
                           PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
          v161 = COERCE_AS(__typeof__(v161),
                           PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
          v162 = COERCE_AS(__typeof__(v162),
                           PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
          v163 = COERCE_AS(__typeof__(v163),
                           PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
          v164 = COERCE_AS(__typeof__(v164),
                           PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v165 = COERCE_AS(__typeof__(v165),
                           PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v166 = COERCE_AS(__typeof__(v166),
                           PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
          v174 = COERCE_AS(__typeof__(v174),
                           PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
          v175 = COERCE_AS(__typeof__(v175),
                           PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
          v176 = COERCE_AS(__typeof__(v176),
                           PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
          v177 = COERCE_AS(__typeof__(v177),
                           PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v178 = COERCE_AS(__typeof__(v178),
                           PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v179 = COERCE_AS(__typeof__(v179),
                           PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
      std___1___shared_weak_count___release_weak(v14),
          v136 = COERCE_AS(__typeof__(v136),
                           PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
          v137 = COERCE_AS(__typeof__(v137),
                           PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
          v138 = COERCE_AS(__typeof__(v138),
                           PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
          v139 = COERCE_AS(__typeof__(v139),
                           PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v140 = COERCE_AS(__typeof__(v140),
                           PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v141 = COERCE_AS(__typeof__(v141),
                           PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
          v148 = COERCE_AS(__typeof__(v148),
                           PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
          v149 = COERCE_AS(__typeof__(v149),
                           PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
          v150 = COERCE_AS(__typeof__(v150),
                           PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
          v151 = COERCE_AS(__typeof__(v151),
                           PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v152 = COERCE_AS(__typeof__(v152),
                           PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v153 = COERCE_AS(__typeof__(v153),
                           PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
          v161 = COERCE_AS(__typeof__(v161),
                           PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
          v162 = COERCE_AS(__typeof__(v162),
                           PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
          v163 = COERCE_AS(__typeof__(v163),
                           PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
          v164 = COERCE_AS(__typeof__(v164),
                           PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v165 = COERCE_AS(__typeof__(v165),
                           PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v166 = COERCE_AS(__typeof__(v166),
                           PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
          v174 = COERCE_AS(__typeof__(v174),
                           PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
          v175 = COERCE_AS(__typeof__(v175),
                           PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
          v176 = COERCE_AS(__typeof__(v176),
                           PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
          v177 = COERCE_AS(__typeof__(v177),
                           PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v178 = COERCE_AS(__typeof__(v178),
                           PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v179 = COERCE_AS(__typeof__(v179),
                           PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
    }
  }
  else {
    *(_OWORD*)&v190 = (__typeof__(*(_OWORD*)&v190)){0};
  }
LABEL_28:
  GameRoutine_14a1b00(*(__int64**)(a1 + 120), *(float*)(a1 + 8)),
      v136 = COERCE_AS(__typeof__(v136),
                       PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v137 = COERCE_AS(__typeof__(v137),
                       PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v138 = COERCE_AS(__typeof__(v138),
                       PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v139 = COERCE_AS(__typeof__(v139),
                       PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v140 = COERCE_AS(__typeof__(v140),
                       PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v141 = COERCE_AS(__typeof__(v141),
                       PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
      v148 = COERCE_AS(__typeof__(v148),
                       PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v149 = COERCE_AS(__typeof__(v149),
                       PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v150 = COERCE_AS(__typeof__(v150),
                       PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v151 = COERCE_AS(__typeof__(v151),
                       PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v152 = COERCE_AS(__typeof__(v152),
                       PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v153 = COERCE_AS(__typeof__(v153),
                       PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
      v161 = COERCE_AS(__typeof__(v161),
                       PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v162 = COERCE_AS(__typeof__(v162),
                       PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v163 = COERCE_AS(__typeof__(v163),
                       PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v164 = COERCE_AS(__typeof__(v164),
                       PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v165 = COERCE_AS(__typeof__(v165),
                       PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v166 = COERCE_AS(__typeof__(v166),
                       PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
      v174 = COERCE_AS(__typeof__(v174),
                       PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v175 = COERCE_AS(__typeof__(v175),
                       PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v176 = COERCE_AS(__typeof__(v176),
                       PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v177 = COERCE_AS(__typeof__(v177),
                       PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v178 = COERCE_AS(__typeof__(v178),
                       PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v179 = COERCE_AS(__typeof__(v179),
                       PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  v17 = *(_QWORD*)(a1 + 120);
  v18 = *(_QWORD*)v17;
  if (*(_QWORD*)v17 != 0 && *(_DWORD*)(v18 + 16) == *(_DWORD*)(v17 + 8)) {
    v19 = *(_DWORD*)(v18 + 36);
    if (v19 != 0) {
      for (i = 0; i < v19; ++i) {
        if ((int)v19 > (int)i) {
          v21 = *(_QWORD*)(v18 + 40 + 8LL * (int)i);
          if (v21 != 0) {
            *(long double*)(v21 + 16) = v190;
            *(_BYTE*)(v21 + 128) = 1;
            v19 = *(_DWORD*)(v18 + 36);
          }
        }
      }
    }
  }
  v22 = GameRoutine_14a3920(v17),
  v136 = COERCE_AS(__typeof__(v136),
                   PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
  v137 = COERCE_AS(__typeof__(v137),
                   PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v138 = COERCE_AS(__typeof__(v138),
                   PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
  v139 = COERCE_AS(__typeof__(v139),
                   PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
  v140 = COERCE_AS(__typeof__(v140),
                   PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
  v141 = COERCE_AS(__typeof__(v141),
                   PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
  v148 = COERCE_AS(__typeof__(v148),
                   PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
  v149 = COERCE_AS(__typeof__(v149),
                   PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v150 = COERCE_AS(__typeof__(v150),
                   PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
  v151 = COERCE_AS(__typeof__(v151),
                   PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
  v152 = COERCE_AS(__typeof__(v152),
                   PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
  v153 = COERCE_AS(__typeof__(v153),
                   PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
  v161 = COERCE_AS(__typeof__(v161),
                   PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
  v162 = COERCE_AS(__typeof__(v162),
                   PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v163 = COERCE_AS(__typeof__(v163),
                   PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
  v164 = COERCE_AS(__typeof__(v164),
                   PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
  v165 = COERCE_AS(__typeof__(v165),
                   PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
  v166 = COERCE_AS(__typeof__(v166),
                   PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
  v174 = COERCE_AS(__typeof__(v174),
                   PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
  v175 = COERCE_AS(__typeof__(v175),
                   PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v176 = COERCE_AS(__typeof__(v176),
                   PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
  v177 = COERCE_AS(__typeof__(v177),
                   PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
  v178 = COERCE_AS(__typeof__(v178),
                   PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
  v179 = COERCE_AS(__typeof__(v179),
                   PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  v23 = v194_.v194;
  v24 = (__int64**)(a1 + 136);
  v25 = v194_.v195 - v194_.v194;
  if (v194_.v195 == v194_.v194) {
    v39 = 0;
  }
  else {
    v26 = vsubq_f32(
        *(float32x4_t*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)v194_.v194 + 24LL) +
                                   16LL) +
                        560LL),
        *(float32x4_t*)&v190);
    v27 = atan2f(v22, LANES128(v26).n128_f32[0], LANES128(v26).n128_f32[2]),
    v136 = COERCE_AS(__typeof__(v136),
                     PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
    v137 = COERCE_AS(__typeof__(v137),
                     PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
    v138 = COERCE_AS(__typeof__(v138),
                     PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
    v139 = COERCE_AS(__typeof__(v139),
                     PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
    v140 = COERCE_AS(__typeof__(v140),
                     PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
    v141 = COERCE_AS(__typeof__(v141),
                     PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
    v148 = COERCE_AS(__typeof__(v148),
                     PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
    v149 = COERCE_AS(__typeof__(v149),
                     PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
    v150 = COERCE_AS(__typeof__(v150),
                     PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
    v151 = COERCE_AS(__typeof__(v151),
                     PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
    v152 = COERCE_AS(__typeof__(v152),
                     PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
    v153 = COERCE_AS(__typeof__(v153),
                     PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
    v161 = COERCE_AS(__typeof__(v161),
                     PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
    v162 = COERCE_AS(__typeof__(v162),
                     PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
    v163 = COERCE_AS(__typeof__(v163),
                     PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
    v164 = COERCE_AS(__typeof__(v164),
                     PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
    v165 = COERCE_AS(__typeof__(v165),
                     PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
    v166 = COERCE_AS(__typeof__(v166),
                     PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
    v174 = COERCE_AS(__typeof__(v174),
                     PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
    v175 = COERCE_AS(__typeof__(v175),
                     PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
    v176 = COERCE_AS(__typeof__(v176),
                     PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
    v177 = COERCE_AS(__typeof__(v177),
                     PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
    v178 = COERCE_AS(__typeof__(v178),
                     PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
    v179 = COERCE_AS(__typeof__(v179),
                     PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
    v28 = *v24;
    v29 = v27;
    v30 = **v24;
    if (v30 != 0 && *(_DWORD*)(v30 + 16) == *((_DWORD*)v28 + 2)) {
      v31 = *(_DWORD*)(v30 + 36);
      if (v31 != 0) {
        for (j = 0; j < v31; ++j) {
          if ((int)v31 > (int)j) {
            v33 = *(_QWORD*)(v30 + 40 + 8LL * (int)j);
            if (v33 != 0) {
              *(long double*)(v33 + 16) = v190;
              *(_BYTE*)(v33 + 128) = 1;
              v31 = *(_DWORD*)(v30 + 36);
            }
          }
        }
      }
    }
    GameRoutine_14a3920((__int64)v28),
        v136 = COERCE_AS(__typeof__(v136),
                         PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v137 = COERCE_AS(__typeof__(v137),
                         PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v138 = COERCE_AS(__typeof__(v138),
                         PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v139 = COERCE_AS(__typeof__(v139),
                         PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v140 = COERCE_AS(__typeof__(v140),
                         PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v141 = COERCE_AS(__typeof__(v141),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v148 = COERCE_AS(__typeof__(v148),
                         PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v149 = COERCE_AS(__typeof__(v149),
                         PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v150 = COERCE_AS(__typeof__(v150),
                         PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v151 = COERCE_AS(__typeof__(v151),
                         PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v152 = COERCE_AS(__typeof__(v152),
                         PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v153 = COERCE_AS(__typeof__(v153),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v161 = COERCE_AS(__typeof__(v161),
                         PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v162 = COERCE_AS(__typeof__(v162),
                         PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v163 = COERCE_AS(__typeof__(v163),
                         PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v164 = COERCE_AS(__typeof__(v164),
                         PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v165 = COERCE_AS(__typeof__(v165),
                         PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v166 = COERCE_AS(__typeof__(v166),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v174 = COERCE_AS(__typeof__(v174),
                         PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v175 = COERCE_AS(__typeof__(v175),
                         PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v176 = COERCE_AS(__typeof__(v176),
                         PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v177 = COERCE_AS(__typeof__(v177),
                         PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v178 = COERCE_AS(__typeof__(v178),
                         PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v179 = COERCE_AS(__typeof__(v179),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
    v34 = *v24;
    v35 = **v24;
    if (v35 != 0) {
      if (*(_DWORD*)(v35 + 16) != *((_DWORD*)v34 + 2)) {
        goto LABEL_55;
      }
      v36 = *(_DWORD*)(v35 + 36);
      if (v36 == 0) {
        goto LABEL_55;
      }
      for (k = 0; k < v36; ++k) {
        if ((int)v36 > (int)k) {
          v38 = *(_QWORD*)(v35 + 40 + 8LL * (int)k);
          if (v38 != 0) {
            *(float*)(v38 + 52) =
                (float)(v29 * 0x1.ca5dc20000000p+5f) + -0x1.6800000000000p+6f;
            *(_BYTE*)(v38 + 128) = 1;
            v36 = *(_DWORD*)(v35 + 36);
          }
        }
      }
      v34 = *v24;
      v35 = **v24;
      if (v35 != 0) {
      LABEL_55:
        if (*(_DWORD*)(v35 + 16) == *((_DWORD*)v34 + 2)) {
          *(_BYTE*)(v35 + 33) = 1;
          v34 = *v24;
        }
      }
    }
    v40 = GameRoutine_14a1b00(v34, *(float*)(a1 + 8)),
    v136 = COERCE_AS(__typeof__(v136),
                     PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
    v137 = COERCE_AS(__typeof__(v137),
                     PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
    v138 = COERCE_AS(__typeof__(v138),
                     PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
    v139 = COERCE_AS(__typeof__(v139),
                     PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
    v140 = COERCE_AS(__typeof__(v140),
                     PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
    v141 = COERCE_AS(__typeof__(v141),
                     PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
    v148 = COERCE_AS(__typeof__(v148),
                     PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
    v149 = COERCE_AS(__typeof__(v149),
                     PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
    v150 = COERCE_AS(__typeof__(v150),
                     PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
    v151 = COERCE_AS(__typeof__(v151),
                     PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
    v152 = COERCE_AS(__typeof__(v152),
                     PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
    v153 = COERCE_AS(__typeof__(v153),
                     PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
    v161 = COERCE_AS(__typeof__(v161),
                     PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
    v162 = COERCE_AS(__typeof__(v162),
                     PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
    v163 = COERCE_AS(__typeof__(v163),
                     PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
    v164 = COERCE_AS(__typeof__(v164),
                     PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
    v165 = COERCE_AS(__typeof__(v165),
                     PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
    v166 = COERCE_AS(__typeof__(v166),
                     PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
    v174 = COERCE_AS(__typeof__(v174),
                     PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
    v175 = COERCE_AS(__typeof__(v175),
                     PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
    v176 = COERCE_AS(__typeof__(v176),
                     PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
    v177 = COERCE_AS(__typeof__(v177),
                     PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
    v178 = COERCE_AS(__typeof__(v178),
                     PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
    v179 = COERCE_AS(__typeof__(v179),
                     PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
    if (v25 < 9) {
      v39 = 1;
    }
    else {
      v41 = vsubq_f32(
          *(float32x4_t*)(*(_QWORD*)(*(_QWORD*)(*((_QWORD*)v23 + 1) + 24LL) +
                                     16LL) +
                          560LL),
          *(float32x4_t*)&v190);
      v42 = atan2f(v40, LANES128(v41).n128_f32[0], LANES128(v41).n128_f32[2]),
      v136 = COERCE_AS(__typeof__(v136),
                       PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v137 = COERCE_AS(__typeof__(v137),
                       PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v138 = COERCE_AS(__typeof__(v138),
                       PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v139 = COERCE_AS(__typeof__(v139),
                       PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v140 = COERCE_AS(__typeof__(v140),
                       PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v141 = COERCE_AS(__typeof__(v141),
                       PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
      v148 = COERCE_AS(__typeof__(v148),
                       PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v149 = COERCE_AS(__typeof__(v149),
                       PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v150 = COERCE_AS(__typeof__(v150),
                       PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v151 = COERCE_AS(__typeof__(v151),
                       PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v152 = COERCE_AS(__typeof__(v152),
                       PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v153 = COERCE_AS(__typeof__(v153),
                       PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
      v161 = COERCE_AS(__typeof__(v161),
                       PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v162 = COERCE_AS(__typeof__(v162),
                       PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v163 = COERCE_AS(__typeof__(v163),
                       PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v164 = COERCE_AS(__typeof__(v164),
                       PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v165 = COERCE_AS(__typeof__(v165),
                       PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v166 = COERCE_AS(__typeof__(v166),
                       PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
      v174 = COERCE_AS(__typeof__(v174),
                       PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v175 = COERCE_AS(__typeof__(v175),
                       PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v176 = COERCE_AS(__typeof__(v176),
                       PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v177 = COERCE_AS(__typeof__(v177),
                       PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v178 = COERCE_AS(__typeof__(v178),
                       PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v179 = COERCE_AS(__typeof__(v179),
                       PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
      v43 = *(_QWORD*)(a1 + 152);
      v44 = v42;
      v45 = *(_QWORD*)v43;
      if (*(_QWORD*)v43 != 0 && *(_DWORD*)(v45 + 16) == *(_DWORD*)(v43 + 8)) {
        v46 = *(_DWORD*)(v45 + 36);
        if (v46 != 0) {
          for (m = 0; m < v46; ++m) {
            if ((int)v46 > (int)m) {
              v48 = *(_QWORD*)(v45 + 40 + 8LL * (int)m);
              if (v48 != 0) {
                *(long double*)(v48 + 16) = v190;
                *(_BYTE*)(v48 + 128) = 1;
                v46 = *(_DWORD*)(v45 + 36);
              }
            }
          }
        }
      }
      GameRoutine_14a3920(v43),
          v136 = COERCE_AS(__typeof__(v136),
                           PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
          v137 = COERCE_AS(__typeof__(v137),
                           PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
          v138 = COERCE_AS(__typeof__(v138),
                           PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
          v139 = COERCE_AS(__typeof__(v139),
                           PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v140 = COERCE_AS(__typeof__(v140),
                           PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v141 = COERCE_AS(__typeof__(v141),
                           PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
          v148 = COERCE_AS(__typeof__(v148),
                           PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
          v149 = COERCE_AS(__typeof__(v149),
                           PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
          v150 = COERCE_AS(__typeof__(v150),
                           PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
          v151 = COERCE_AS(__typeof__(v151),
                           PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v152 = COERCE_AS(__typeof__(v152),
                           PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v153 = COERCE_AS(__typeof__(v153),
                           PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
          v161 = COERCE_AS(__typeof__(v161),
                           PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
          v162 = COERCE_AS(__typeof__(v162),
                           PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
          v163 = COERCE_AS(__typeof__(v163),
                           PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
          v164 = COERCE_AS(__typeof__(v164),
                           PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v165 = COERCE_AS(__typeof__(v165),
                           PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v166 = COERCE_AS(__typeof__(v166),
                           PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
          v174 = COERCE_AS(__typeof__(v174),
                           PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
          v175 = COERCE_AS(__typeof__(v175),
                           PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
          v176 = COERCE_AS(__typeof__(v176),
                           PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
          v177 = COERCE_AS(__typeof__(v177),
                           PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v178 = COERCE_AS(__typeof__(v178),
                           PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v179 = COERCE_AS(__typeof__(v179),
                           PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
      v49 = *(_QWORD*)(a1 + 152);
      v50 = *(_QWORD*)v49;
      if (*(_QWORD*)v49 != 0) {
        if (*(_DWORD*)(v50 + 16) != *(_DWORD*)(v49 + 8)) {
          goto LABEL_76;
        }
        v51 = *(_DWORD*)(v50 + 36);
        if (v51 == 0) {
          goto LABEL_76;
        }
        for (n = 0; n < v51; ++n) {
          if ((int)v51 > (int)n) {
            v53 = *(_QWORD*)(v50 + 40 + 8LL * (int)n);
            if (v53 != 0) {
              *(float*)(v53 + 52) =
                  (float)(v44 * 0x1.ca5dc20000000p+5f) + -0x1.6800000000000p+6f;
              *(_BYTE*)(v53 + 128) = 1;
              v51 = *(_DWORD*)(v50 + 36);
            }
          }
        }
        v49 = *(_QWORD*)(a1 + 152);
        v50 = *(_QWORD*)v49;
        if (*(_QWORD*)v49 != 0) {
        LABEL_76:
          if (*(_DWORD*)(v50 + 16) == *(_DWORD*)(v49 + 8)) {
            *(_BYTE*)(v50 + 33) = 1;
            v49 = *(_QWORD*)(a1 + 152);
          }
        }
      }
      v54 = GameRoutine_14a1b00((__int64*)v49, *(float*)(a1 + 8)),
      v136 = COERCE_AS(__typeof__(v136),
                       PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v137 = COERCE_AS(__typeof__(v137),
                       PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v138 = COERCE_AS(__typeof__(v138),
                       PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v139 = COERCE_AS(__typeof__(v139),
                       PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v140 = COERCE_AS(__typeof__(v140),
                       PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v141 = COERCE_AS(__typeof__(v141),
                       PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
      v148 = COERCE_AS(__typeof__(v148),
                       PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v149 = COERCE_AS(__typeof__(v149),
                       PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v150 = COERCE_AS(__typeof__(v150),
                       PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v151 = COERCE_AS(__typeof__(v151),
                       PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v152 = COERCE_AS(__typeof__(v152),
                       PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v153 = COERCE_AS(__typeof__(v153),
                       PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
      v161 = COERCE_AS(__typeof__(v161),
                       PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v162 = COERCE_AS(__typeof__(v162),
                       PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v163 = COERCE_AS(__typeof__(v163),
                       PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v164 = COERCE_AS(__typeof__(v164),
                       PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v165 = COERCE_AS(__typeof__(v165),
                       PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v166 = COERCE_AS(__typeof__(v166),
                       PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
      v174 = COERCE_AS(__typeof__(v174),
                       PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v175 = COERCE_AS(__typeof__(v175),
                       PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v176 = COERCE_AS(__typeof__(v176),
                       PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v177 = COERCE_AS(__typeof__(v177),
                       PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v178 = COERCE_AS(__typeof__(v178),
                       PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v179 = COERCE_AS(__typeof__(v179),
                       PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
      if (v25 < 0x11) {
        v39 = 2;
      }
      else {
        v55 = vsubq_f32(
            *(float32x4_t*)(*(_QWORD*)(*(_QWORD*)(*((_QWORD*)v23 + 2) + 24LL) +
                                       16LL) +
                            560LL),
            *(float32x4_t*)&v190);
        v56 = atan2f(v54, LANES128(v55).n128_f32[0], LANES128(v55).n128_f32[2]),
        v136 = COERCE_AS(__typeof__(v136),
                         PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v137 = COERCE_AS(__typeof__(v137),
                         PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v138 = COERCE_AS(__typeof__(v138),
                         PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v139 = COERCE_AS(__typeof__(v139),
                         PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v140 = COERCE_AS(__typeof__(v140),
                         PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v141 = COERCE_AS(__typeof__(v141),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v148 = COERCE_AS(__typeof__(v148),
                         PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v149 = COERCE_AS(__typeof__(v149),
                         PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v150 = COERCE_AS(__typeof__(v150),
                         PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v151 = COERCE_AS(__typeof__(v151),
                         PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v152 = COERCE_AS(__typeof__(v152),
                         PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v153 = COERCE_AS(__typeof__(v153),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v161 = COERCE_AS(__typeof__(v161),
                         PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v162 = COERCE_AS(__typeof__(v162),
                         PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v163 = COERCE_AS(__typeof__(v163),
                         PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v164 = COERCE_AS(__typeof__(v164),
                         PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v165 = COERCE_AS(__typeof__(v165),
                         PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v166 = COERCE_AS(__typeof__(v166),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v174 = COERCE_AS(__typeof__(v174),
                         PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v175 = COERCE_AS(__typeof__(v175),
                         PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v176 = COERCE_AS(__typeof__(v176),
                         PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v177 = COERCE_AS(__typeof__(v177),
                         PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v178 = COERCE_AS(__typeof__(v178),
                         PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v179 = COERCE_AS(__typeof__(v179),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
        v57 = *(_QWORD*)(a1 + 168);
        v58 = v56;
        v59 = *(_QWORD*)v57;
        if (*(_QWORD*)v57 != 0 && *(_DWORD*)(v59 + 16) == *(_DWORD*)(v57 + 8)) {
          v60 = *(_DWORD*)(v59 + 36);
          if (v60 != 0) {
            for (ii = 0; ii < v60; ++ii) {
              if ((int)v60 > (int)ii) {
                v62 = *(_QWORD*)(v59 + 40 + 8LL * (int)ii);
                if (v62 != 0) {
                  *(long double*)(v62 + 16) = v190;
                  *(_BYTE*)(v62 + 128) = 1;
                  v60 = *(_DWORD*)(v59 + 36);
                }
              }
            }
          }
        }
        GameRoutine_14a3920(v57),
            v136 = COERCE_AS(__typeof__(v136),
                             PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
            v137 = COERCE_AS(__typeof__(v137),
                             PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
            v138 = COERCE_AS(__typeof__(v138),
                             PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
            v139 = COERCE_AS(__typeof__(v139),
                             PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
            v140 = COERCE_AS(__typeof__(v140),
                             PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
            v141 = COERCE_AS(__typeof__(v141),
                             PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
            v148 = COERCE_AS(__typeof__(v148),
                             PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
            v149 = COERCE_AS(__typeof__(v149),
                             PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
            v150 = COERCE_AS(__typeof__(v150),
                             PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
            v151 = COERCE_AS(__typeof__(v151),
                             PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
            v152 = COERCE_AS(__typeof__(v152),
                             PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
            v153 = COERCE_AS(__typeof__(v153),
                             PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
            v161 = COERCE_AS(__typeof__(v161),
                             PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
            v162 = COERCE_AS(__typeof__(v162),
                             PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
            v163 = COERCE_AS(__typeof__(v163),
                             PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
            v164 = COERCE_AS(__typeof__(v164),
                             PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
            v165 = COERCE_AS(__typeof__(v165),
                             PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
            v166 = COERCE_AS(__typeof__(v166),
                             PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
            v174 = COERCE_AS(__typeof__(v174),
                             PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
            v175 = COERCE_AS(__typeof__(v175),
                             PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
            v176 = COERCE_AS(__typeof__(v176),
                             PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
            v177 = COERCE_AS(__typeof__(v177),
                             PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
            v178 = COERCE_AS(__typeof__(v178),
                             PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
            v179 = COERCE_AS(__typeof__(v179),
                             PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
        v63 = *(_QWORD*)(a1 + 168);
        v64 = *(_QWORD*)v63;
        if (*(_QWORD*)v63 != 0) {
          if (*(_DWORD*)(v64 + 16) != *(_DWORD*)(v63 + 8)) {
            goto LABEL_97;
          }
          v65 = *(_DWORD*)(v64 + 36);
          if (v65 == 0) {
            goto LABEL_97;
          }
          for (jj = 0; jj < v65; ++jj) {
            if ((int)v65 > (int)jj) {
              v67 = *(_QWORD*)(v64 + 40 + 8LL * (int)jj);
              if (v67 != 0) {
                *(float*)(v67 + 52) = (float)(v58 * 0x1.ca5dc20000000p+5f) +
                                      -0x1.6800000000000p+6f;
                *(_BYTE*)(v67 + 128) = 1;
                v65 = *(_DWORD*)(v64 + 36);
              }
            }
          }
          v63 = *(_QWORD*)(a1 + 168);
          v64 = *(_QWORD*)v63;
          if (*(_QWORD*)v63 != 0) {
          LABEL_97:
            if (*(_DWORD*)(v64 + 16) == *(_DWORD*)(v63 + 8)) {
              *(_BYTE*)(v64 + 33) = 1;
              v63 = *(_QWORD*)(a1 + 168);
            }
          }
        }
        v68 = GameRoutine_14a1b00((__int64*)v63, *(float*)(a1 + 8)),
        v136 = COERCE_AS(__typeof__(v136),
                         PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v137 = COERCE_AS(__typeof__(v137),
                         PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v138 = COERCE_AS(__typeof__(v138),
                         PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v139 = COERCE_AS(__typeof__(v139),
                         PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v140 = COERCE_AS(__typeof__(v140),
                         PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v141 = COERCE_AS(__typeof__(v141),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v148 = COERCE_AS(__typeof__(v148),
                         PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v149 = COERCE_AS(__typeof__(v149),
                         PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v150 = COERCE_AS(__typeof__(v150),
                         PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v151 = COERCE_AS(__typeof__(v151),
                         PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v152 = COERCE_AS(__typeof__(v152),
                         PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v153 = COERCE_AS(__typeof__(v153),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v161 = COERCE_AS(__typeof__(v161),
                         PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v162 = COERCE_AS(__typeof__(v162),
                         PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v163 = COERCE_AS(__typeof__(v163),
                         PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v164 = COERCE_AS(__typeof__(v164),
                         PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v165 = COERCE_AS(__typeof__(v165),
                         PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v166 = COERCE_AS(__typeof__(v166),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v174 = COERCE_AS(__typeof__(v174),
                         PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v175 = COERCE_AS(__typeof__(v175),
                         PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v176 = COERCE_AS(__typeof__(v176),
                         PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v177 = COERCE_AS(__typeof__(v177),
                         PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v178 = COERCE_AS(__typeof__(v178),
                         PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v179 = COERCE_AS(__typeof__(v179),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
        if (v25 < 0x19) {
          v39 = 3;
        }
        else {
          v69 = vsubq_f32(
              *(float32x4_t*)(*(_QWORD*)(*(_QWORD*)(*((_QWORD*)v23 + 3) +
                                                    24LL) +
                                         16LL) +
                              560LL),
              *(float32x4_t*)&v190);
          v70 =
              atan2f(v68, LANES128(v69).n128_f32[0], LANES128(v69).n128_f32[2]),
          v136 = COERCE_AS(__typeof__(v136),
                           PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
          v137 = COERCE_AS(__typeof__(v137),
                           PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
          v138 = COERCE_AS(__typeof__(v138),
                           PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
          v139 = COERCE_AS(__typeof__(v139),
                           PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v140 = COERCE_AS(__typeof__(v140),
                           PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v141 = COERCE_AS(__typeof__(v141),
                           PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
          v148 = COERCE_AS(__typeof__(v148),
                           PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
          v149 = COERCE_AS(__typeof__(v149),
                           PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
          v150 = COERCE_AS(__typeof__(v150),
                           PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
          v151 = COERCE_AS(__typeof__(v151),
                           PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v152 = COERCE_AS(__typeof__(v152),
                           PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v153 = COERCE_AS(__typeof__(v153),
                           PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
          v161 = COERCE_AS(__typeof__(v161),
                           PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
          v162 = COERCE_AS(__typeof__(v162),
                           PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
          v163 = COERCE_AS(__typeof__(v163),
                           PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
          v164 = COERCE_AS(__typeof__(v164),
                           PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v165 = COERCE_AS(__typeof__(v165),
                           PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v166 = COERCE_AS(__typeof__(v166),
                           PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
          v174 = COERCE_AS(__typeof__(v174),
                           PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
          v175 = COERCE_AS(__typeof__(v175),
                           PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
          v176 = COERCE_AS(__typeof__(v176),
                           PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
          v177 = COERCE_AS(__typeof__(v177),
                           PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v178 = COERCE_AS(__typeof__(v178),
                           PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v179 = COERCE_AS(__typeof__(v179),
                           PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
          v71 = *(_QWORD*)(a1 + 184);
          v72 = v70;
          v73 = *(_QWORD*)v71;
          if (*(_QWORD*)v71 != 0 &&
              *(_DWORD*)(v73 + 16) == *(_DWORD*)(v71 + 8)) {
            v74 = *(_DWORD*)(v73 + 36);
            if (v74 != 0) {
              for (kk = 0; kk < v74; ++kk) {
                if ((int)v74 > (int)kk) {
                  v76 = *(_QWORD*)(v73 + 40 + 8LL * (int)kk);
                  if (v76 != 0) {
                    *(long double*)(v76 + 16) = v190;
                    *(_BYTE*)(v76 + 128) = 1;
                    v74 = *(_DWORD*)(v73 + 36);
                  }
                }
              }
            }
          }
          GameRoutine_14a3920(v71),
              v136 = COERCE_AS(__typeof__(v136),
                               PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
              v137 = COERCE_AS(__typeof__(v137),
                               PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
              v138 = COERCE_AS(__typeof__(v138),
                               PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
              v139 = COERCE_AS(__typeof__(v139),
                               PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
              v140 = COERCE_AS(__typeof__(v140),
                               PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
              v141 = COERCE_AS(__typeof__(v141),
                               PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
              v148 = COERCE_AS(__typeof__(v148),
                               PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
              v149 = COERCE_AS(__typeof__(v149),
                               PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
              v150 = COERCE_AS(__typeof__(v150),
                               PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
              v151 = COERCE_AS(__typeof__(v151),
                               PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
              v152 = COERCE_AS(__typeof__(v152),
                               PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
              v153 = COERCE_AS(__typeof__(v153),
                               PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
              v161 = COERCE_AS(__typeof__(v161),
                               PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
              v162 = COERCE_AS(__typeof__(v162),
                               PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
              v163 = COERCE_AS(__typeof__(v163),
                               PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
              v164 = COERCE_AS(__typeof__(v164),
                               PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
              v165 = COERCE_AS(__typeof__(v165),
                               PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
              v166 = COERCE_AS(__typeof__(v166),
                               PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
              v174 = COERCE_AS(__typeof__(v174),
                               PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
              v175 = COERCE_AS(__typeof__(v175),
                               PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
              v176 = COERCE_AS(__typeof__(v176),
                               PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
              v177 = COERCE_AS(__typeof__(v177),
                               PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
              v178 = COERCE_AS(__typeof__(v178),
                               PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
              v179 = COERCE_AS(__typeof__(v179),
                               PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
          v77 = *(_QWORD*)(a1 + 184);
          v78 = *(_QWORD*)v77;
          if (*(_QWORD*)v77 != 0) {
            if (*(_DWORD*)(v78 + 16) != *(_DWORD*)(v77 + 8)) {
              goto LABEL_118;
            }
            v79 = *(_DWORD*)(v78 + 36);
            if (v79 == 0) {
              goto LABEL_118;
            }
            for (mm = 0; mm < v79; ++mm) {
              if ((int)v79 > (int)mm) {
                v81 = *(_QWORD*)(v78 + 40 + 8LL * (int)mm);
                if (v81 != 0) {
                  *(float*)(v81 + 52) = (float)(v72 * 0x1.ca5dc20000000p+5f) +
                                        -0x1.6800000000000p+6f;
                  *(_BYTE*)(v81 + 128) = 1;
                  v79 = *(_DWORD*)(v78 + 36);
                }
              }
            }
            v77 = *(_QWORD*)(a1 + 184);
            v78 = *(_QWORD*)v77;
            if (*(_QWORD*)v77 != 0) {
            LABEL_118:
              if (*(_DWORD*)(v78 + 16) == *(_DWORD*)(v77 + 8)) {
                *(_BYTE*)(v78 + 33) = 1;
                v77 = *(_QWORD*)(a1 + 184);
              }
            }
          }
          v82 = GameRoutine_14a1b00((__int64*)v77, *(float*)(a1 + 8)),
          v136 = COERCE_AS(__typeof__(v136),
                           PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
          v137 = COERCE_AS(__typeof__(v137),
                           PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
          v138 = COERCE_AS(__typeof__(v138),
                           PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
          v139 = COERCE_AS(__typeof__(v139),
                           PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v140 = COERCE_AS(__typeof__(v140),
                           PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v141 = COERCE_AS(__typeof__(v141),
                           PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
          v148 = COERCE_AS(__typeof__(v148),
                           PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
          v149 = COERCE_AS(__typeof__(v149),
                           PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
          v150 = COERCE_AS(__typeof__(v150),
                           PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
          v151 = COERCE_AS(__typeof__(v151),
                           PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v152 = COERCE_AS(__typeof__(v152),
                           PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v153 = COERCE_AS(__typeof__(v153),
                           PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
          v161 = COERCE_AS(__typeof__(v161),
                           PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
          v162 = COERCE_AS(__typeof__(v162),
                           PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
          v163 = COERCE_AS(__typeof__(v163),
                           PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
          v164 = COERCE_AS(__typeof__(v164),
                           PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v165 = COERCE_AS(__typeof__(v165),
                           PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v166 = COERCE_AS(__typeof__(v166),
                           PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
          v174 = COERCE_AS(__typeof__(v174),
                           PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
          v175 = COERCE_AS(__typeof__(v175),
                           PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
          v176 = COERCE_AS(__typeof__(v176),
                           PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
          v177 = COERCE_AS(__typeof__(v177),
                           PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v178 = COERCE_AS(__typeof__(v178),
                           PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v179 = COERCE_AS(__typeof__(v179),
                           PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
          if (v25 < 0x21) {
            v39 = 4;
          }
          else {
            v83 = vsubq_f32(
                *(float32x4_t*)(*(_QWORD*)(*(_QWORD*)(*((_QWORD*)v23 + 4) +
                                                      24LL) +
                                           16LL) +
                                560LL),
                *(float32x4_t*)&v190);
            v84 = atan2f(v82, LANES128(v83).n128_f32[0],
                         LANES128(v83).n128_f32[2]),
            v136 = COERCE_AS(__typeof__(v136),
                             PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
            v137 = COERCE_AS(__typeof__(v137),
                             PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
            v138 = COERCE_AS(__typeof__(v138),
                             PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
            v139 = COERCE_AS(__typeof__(v139),
                             PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
            v140 = COERCE_AS(__typeof__(v140),
                             PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
            v141 = COERCE_AS(__typeof__(v141),
                             PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
            v148 = COERCE_AS(__typeof__(v148),
                             PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
            v149 = COERCE_AS(__typeof__(v149),
                             PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
            v150 = COERCE_AS(__typeof__(v150),
                             PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
            v151 = COERCE_AS(__typeof__(v151),
                             PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
            v152 = COERCE_AS(__typeof__(v152),
                             PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
            v153 = COERCE_AS(__typeof__(v153),
                             PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
            v161 = COERCE_AS(__typeof__(v161),
                             PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
            v162 = COERCE_AS(__typeof__(v162),
                             PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
            v163 = COERCE_AS(__typeof__(v163),
                             PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
            v164 = COERCE_AS(__typeof__(v164),
                             PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
            v165 = COERCE_AS(__typeof__(v165),
                             PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
            v166 = COERCE_AS(__typeof__(v166),
                             PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
            v174 = COERCE_AS(__typeof__(v174),
                             PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
            v175 = COERCE_AS(__typeof__(v175),
                             PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
            v176 = COERCE_AS(__typeof__(v176),
                             PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
            v177 = COERCE_AS(__typeof__(v177),
                             PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
            v178 = COERCE_AS(__typeof__(v178),
                             PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
            v179 = COERCE_AS(__typeof__(v179),
                             PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
            v85 = *(_QWORD*)(a1 + 200);
            v86 = v84;
            v87 = *(_QWORD*)v85;
            if (*(_QWORD*)v85 != 0 &&
                *(_DWORD*)(v87 + 16) == *(_DWORD*)(v85 + 8)) {
              v88 = *(_DWORD*)(v87 + 36);
              if (v88 != 0) {
                for (nn = 0; nn < v88; ++nn) {
                  if ((int)v88 > (int)nn) {
                    v90 = *(_QWORD*)(v87 + 40 + 8LL * (int)nn);
                    if (v90 != 0) {
                      *(long double*)(v90 + 16) = v190;
                      *(_BYTE*)(v90 + 128) = 1;
                      v88 = *(_DWORD*)(v87 + 36);
                    }
                  }
                }
              }
            }
            GameRoutine_14a3920(v85),
                v136 =
                    COERCE_AS(__typeof__(v136),
                              PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
                v137 =
                    COERCE_AS(__typeof__(v137),
                              PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                v138 =
                    COERCE_AS(__typeof__(v138),
                              PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
                v139 =
                    COERCE_AS(__typeof__(v139),
                              PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
                v140 =
                    COERCE_AS(__typeof__(v140),
                              PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
                v141 =
                    COERCE_AS(__typeof__(v141),
                              PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
                v148 =
                    COERCE_AS(__typeof__(v148),
                              PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
                v149 =
                    COERCE_AS(__typeof__(v149),
                              PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                v150 =
                    COERCE_AS(__typeof__(v150),
                              PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
                v151 =
                    COERCE_AS(__typeof__(v151),
                              PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
                v152 =
                    COERCE_AS(__typeof__(v152),
                              PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
                v153 =
                    COERCE_AS(__typeof__(v153),
                              PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
                v161 =
                    COERCE_AS(__typeof__(v161),
                              PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
                v162 =
                    COERCE_AS(__typeof__(v162),
                              PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                v163 =
                    COERCE_AS(__typeof__(v163),
                              PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
                v164 =
                    COERCE_AS(__typeof__(v164),
                              PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
                v165 =
                    COERCE_AS(__typeof__(v165),
                              PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
                v166 =
                    COERCE_AS(__typeof__(v166),
                              PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
                v174 =
                    COERCE_AS(__typeof__(v174),
                              PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
                v175 =
                    COERCE_AS(__typeof__(v175),
                              PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                v176 =
                    COERCE_AS(__typeof__(v176),
                              PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
                v177 =
                    COERCE_AS(__typeof__(v177),
                              PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
                v178 =
                    COERCE_AS(__typeof__(v178),
                              PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
                v179 =
                    COERCE_AS(__typeof__(v179),
                              PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
            v91 = *(_QWORD*)(a1 + 200);
            v92 = *(_QWORD*)v91;
            if (*(_QWORD*)v91 != 0) {
              if (*(_DWORD*)(v92 + 16) != *(_DWORD*)(v91 + 8)) {
                goto LABEL_139;
              }
              v93 = *(_DWORD*)(v92 + 36);
              if (v93 == 0) {
                goto LABEL_139;
              }
              for (i1 = 0; i1 < v93; ++i1) {
                if ((int)v93 > (int)i1) {
                  v95 = *(_QWORD*)(v92 + 40 + 8LL * (int)i1);
                  if (v95 != 0) {
                    *(float*)(v95 + 52) = (float)(v86 * 0x1.ca5dc20000000p+5f) +
                                          -0x1.6800000000000p+6f;
                    *(_BYTE*)(v95 + 128) = 1;
                    v93 = *(_DWORD*)(v92 + 36);
                  }
                }
              }
              v91 = *(_QWORD*)(a1 + 200);
              v92 = *(_QWORD*)v91;
              if (*(_QWORD*)v91 != 0) {
              LABEL_139:
                if (*(_DWORD*)(v92 + 16) == *(_DWORD*)(v91 + 8)) {
                  *(_BYTE*)(v92 + 33) = 1;
                  v91 = *(_QWORD*)(a1 + 200);
                }
              }
            }
            v96 = GameRoutine_14a1b00((__int64*)v91, *(float*)(a1 + 8)),
            v136 = COERCE_AS(__typeof__(v136),
                             PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
            v137 = COERCE_AS(__typeof__(v137),
                             PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
            v138 = COERCE_AS(__typeof__(v138),
                             PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
            v139 = COERCE_AS(__typeof__(v139),
                             PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
            v140 = COERCE_AS(__typeof__(v140),
                             PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
            v141 = COERCE_AS(__typeof__(v141),
                             PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
            v148 = COERCE_AS(__typeof__(v148),
                             PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
            v149 = COERCE_AS(__typeof__(v149),
                             PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
            v150 = COERCE_AS(__typeof__(v150),
                             PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
            v151 = COERCE_AS(__typeof__(v151),
                             PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
            v152 = COERCE_AS(__typeof__(v152),
                             PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
            v153 = COERCE_AS(__typeof__(v153),
                             PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
            v161 = COERCE_AS(__typeof__(v161),
                             PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
            v162 = COERCE_AS(__typeof__(v162),
                             PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
            v163 = COERCE_AS(__typeof__(v163),
                             PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
            v164 = COERCE_AS(__typeof__(v164),
                             PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
            v165 = COERCE_AS(__typeof__(v165),
                             PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
            v166 = COERCE_AS(__typeof__(v166),
                             PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
            v174 = COERCE_AS(__typeof__(v174),
                             PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
            v175 = COERCE_AS(__typeof__(v175),
                             PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
            v176 = COERCE_AS(__typeof__(v176),
                             PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
            v177 = COERCE_AS(__typeof__(v177),
                             PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
            v178 = COERCE_AS(__typeof__(v178),
                             PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
            v179 = COERCE_AS(__typeof__(v179),
                             PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
            if (v25 < 0x29) {
              v39 = 5;
            }
            else {
              v97 = vsubq_f32(
                  *(float32x4_t*)(*(_QWORD*)(*(_QWORD*)(*((_QWORD*)v23 + 5) +
                                                        24LL) +
                                             16LL) +
                                  560LL),
                  *(float32x4_t*)&v190);
              v98 = (float)(atan2f(v96, LANES128(v97).n128_f32[0],
                                   LANES128(v97).n128_f32[2]) *
                            0x1.ca5dc20000000p+5f) +
                    -0x1.6800000000000p+6f,
              v136 = COERCE_AS(__typeof__(v136),
                               PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
              v137 = COERCE_AS(__typeof__(v137),
                               PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
              v138 = COERCE_AS(__typeof__(v138),
                               PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
              v139 = COERCE_AS(__typeof__(v139),
                               PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
              v140 = COERCE_AS(__typeof__(v140),
                               PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
              v141 = COERCE_AS(__typeof__(v141),
                               PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
              v148 = COERCE_AS(__typeof__(v148),
                               PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
              v149 = COERCE_AS(__typeof__(v149),
                               PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
              v150 = COERCE_AS(__typeof__(v150),
                               PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
              v151 = COERCE_AS(__typeof__(v151),
                               PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
              v152 = COERCE_AS(__typeof__(v152),
                               PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
              v153 = COERCE_AS(__typeof__(v153),
                               PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
              v161 = COERCE_AS(__typeof__(v161),
                               PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
              v162 = COERCE_AS(__typeof__(v162),
                               PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
              v163 = COERCE_AS(__typeof__(v163),
                               PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
              v164 = COERCE_AS(__typeof__(v164),
                               PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
              v165 = COERCE_AS(__typeof__(v165),
                               PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
              v166 = COERCE_AS(__typeof__(v166),
                               PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
              v174 = COERCE_AS(__typeof__(v174),
                               PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
              v175 = COERCE_AS(__typeof__(v175),
                               PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
              v176 = COERCE_AS(__typeof__(v176),
                               PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
              v177 = COERCE_AS(__typeof__(v177),
                               PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
              v178 = COERCE_AS(__typeof__(v178),
                               PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
              v179 = COERCE_AS(__typeof__(v179),
                               PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
              GameRoutine_14a17c0((__int64*)(a1 + 216), v190),
                  v136 = COERCE_AS(
                      __typeof__(v136),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
                  v137 = COERCE_AS(
                      __typeof__(v137),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                  v138 = COERCE_AS(
                      __typeof__(v138),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
                  v139 = COERCE_AS(
                      __typeof__(v139),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
                  v140 = COERCE_AS(
                      __typeof__(v140),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
                  v141 = COERCE_AS(
                      __typeof__(v141),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
                  v148 = COERCE_AS(
                      __typeof__(v148),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
                  v149 = COERCE_AS(
                      __typeof__(v149),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                  v150 = COERCE_AS(
                      __typeof__(v150),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
                  v151 = COERCE_AS(
                      __typeof__(v151),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
                  v152 = COERCE_AS(
                      __typeof__(v152),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
                  v153 = COERCE_AS(
                      __typeof__(v153),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
                  v161 = COERCE_AS(
                      __typeof__(v161),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
                  v162 = COERCE_AS(
                      __typeof__(v162),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                  v163 = COERCE_AS(
                      __typeof__(v163),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
                  v164 = COERCE_AS(
                      __typeof__(v164),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
                  v165 = COERCE_AS(
                      __typeof__(v165),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
                  v166 = COERCE_AS(
                      __typeof__(v166),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
                  v174 = COERCE_AS(
                      __typeof__(v174),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
                  v175 = COERCE_AS(
                      __typeof__(v175),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                  v176 = COERCE_AS(
                      __typeof__(v176),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
                  v177 = COERCE_AS(
                      __typeof__(v177),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
                  v178 = COERCE_AS(
                      __typeof__(v178),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
                  v179 = COERCE_AS(
                      __typeof__(v179),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
              GameRoutine_14a1940((__int64**)(a1 + 216), v98),
                  v136 = COERCE_AS(
                      __typeof__(v136),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
                  v137 = COERCE_AS(
                      __typeof__(v137),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                  v138 = COERCE_AS(
                      __typeof__(v138),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
                  v139 = COERCE_AS(
                      __typeof__(v139),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
                  v140 = COERCE_AS(
                      __typeof__(v140),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
                  v141 = COERCE_AS(
                      __typeof__(v141),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
                  v148 = COERCE_AS(
                      __typeof__(v148),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
                  v149 = COERCE_AS(
                      __typeof__(v149),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                  v150 = COERCE_AS(
                      __typeof__(v150),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
                  v151 = COERCE_AS(
                      __typeof__(v151),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
                  v152 = COERCE_AS(
                      __typeof__(v152),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
                  v153 = COERCE_AS(
                      __typeof__(v153),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
                  v161 = COERCE_AS(
                      __typeof__(v161),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
                  v162 = COERCE_AS(
                      __typeof__(v162),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                  v163 = COERCE_AS(
                      __typeof__(v163),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
                  v164 = COERCE_AS(
                      __typeof__(v164),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
                  v165 = COERCE_AS(
                      __typeof__(v165),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
                  v166 = COERCE_AS(
                      __typeof__(v166),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
                  v174 = COERCE_AS(
                      __typeof__(v174),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
                  v175 = COERCE_AS(
                      __typeof__(v175),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                  v176 = COERCE_AS(
                      __typeof__(v176),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
                  v177 = COERCE_AS(
                      __typeof__(v177),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
                  v178 = COERCE_AS(
                      __typeof__(v178),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
                  v179 = COERCE_AS(
                      __typeof__(v179),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
              v99 = *(_QWORD*)(a1 + 216);
              v100 = *(_QWORD*)v99;
              if (*(_QWORD*)v99 != 0 &&
                  *(_DWORD*)(v100 + 16) == *(_DWORD*)(v99 + 8)) {
                *(_BYTE*)(v100 + 33) = 1;
                v99 = *(_QWORD*)(a1 + 216);
              }
              v101 = GameRoutine_14a1b00((__int64*)v99, *(float*)(a1 + 8)),
              v136 = COERCE_AS(__typeof__(v136),
                               PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
              v137 = COERCE_AS(__typeof__(v137),
                               PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
              v138 = COERCE_AS(__typeof__(v138),
                               PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
              v139 = COERCE_AS(__typeof__(v139),
                               PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
              v140 = COERCE_AS(__typeof__(v140),
                               PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
              v141 = COERCE_AS(__typeof__(v141),
                               PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
              v148 = COERCE_AS(__typeof__(v148),
                               PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
              v149 = COERCE_AS(__typeof__(v149),
                               PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
              v150 = COERCE_AS(__typeof__(v150),
                               PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
              v151 = COERCE_AS(__typeof__(v151),
                               PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
              v152 = COERCE_AS(__typeof__(v152),
                               PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
              v153 = COERCE_AS(__typeof__(v153),
                               PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
              v161 = COERCE_AS(__typeof__(v161),
                               PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
              v162 = COERCE_AS(__typeof__(v162),
                               PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
              v163 = COERCE_AS(__typeof__(v163),
                               PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
              v164 = COERCE_AS(__typeof__(v164),
                               PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
              v165 = COERCE_AS(__typeof__(v165),
                               PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
              v166 = COERCE_AS(__typeof__(v166),
                               PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
              v174 = COERCE_AS(__typeof__(v174),
                               PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
              v175 = COERCE_AS(__typeof__(v175),
                               PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
              v176 = COERCE_AS(__typeof__(v176),
                               PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
              v177 = COERCE_AS(__typeof__(v177),
                               PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
              v178 = COERCE_AS(__typeof__(v178),
                               PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
              v179 = COERCE_AS(__typeof__(v179),
                               PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
              if (v25 < 0x31) {
                v39 = 6;
              }
              else {
                v102 = vsubq_f32(
                    *(float32x4_t*)(*(_QWORD*)(*(_QWORD*)(*((_QWORD*)v23 + 6) +
                                                          24LL) +
                                               16LL) +
                                    560LL),
                    *(float32x4_t*)&v190);
                v103 = (float)(atan2f(v101, LANES128(v102).n128_f32[0],
                                      LANES128(v102).n128_f32[2]) *
                               0x1.ca5dc20000000p+5f) +
                       -0x1.6800000000000p+6f,
                v136 =
                    COERCE_AS(__typeof__(v136),
                              PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
                v137 =
                    COERCE_AS(__typeof__(v137),
                              PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                v138 =
                    COERCE_AS(__typeof__(v138),
                              PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
                v139 =
                    COERCE_AS(__typeof__(v139),
                              PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
                v140 =
                    COERCE_AS(__typeof__(v140),
                              PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
                v141 =
                    COERCE_AS(__typeof__(v141),
                              PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
                v148 =
                    COERCE_AS(__typeof__(v148),
                              PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
                v149 =
                    COERCE_AS(__typeof__(v149),
                              PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                v150 =
                    COERCE_AS(__typeof__(v150),
                              PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
                v151 =
                    COERCE_AS(__typeof__(v151),
                              PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
                v152 =
                    COERCE_AS(__typeof__(v152),
                              PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
                v153 =
                    COERCE_AS(__typeof__(v153),
                              PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
                v161 =
                    COERCE_AS(__typeof__(v161),
                              PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
                v162 =
                    COERCE_AS(__typeof__(v162),
                              PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                v163 =
                    COERCE_AS(__typeof__(v163),
                              PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
                v164 =
                    COERCE_AS(__typeof__(v164),
                              PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
                v165 =
                    COERCE_AS(__typeof__(v165),
                              PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
                v166 =
                    COERCE_AS(__typeof__(v166),
                              PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
                v174 =
                    COERCE_AS(__typeof__(v174),
                              PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
                v175 =
                    COERCE_AS(__typeof__(v175),
                              PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                v176 =
                    COERCE_AS(__typeof__(v176),
                              PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
                v177 =
                    COERCE_AS(__typeof__(v177),
                              PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
                v178 =
                    COERCE_AS(__typeof__(v178),
                              PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
                v179 =
                    COERCE_AS(__typeof__(v179),
                              PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
                GameRoutine_14a17c0((__int64*)(a1 + 232), v190),
                    v136 = COERCE_AS(
                        __typeof__(v136),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
                    v137 = COERCE_AS(
                        __typeof__(v137),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                    v138 = COERCE_AS(
                        __typeof__(v138),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
                    v139 = COERCE_AS(
                        __typeof__(v139),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
                    v140 = COERCE_AS(
                        __typeof__(v140),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
                    v141 = COERCE_AS(
                        __typeof__(v141),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
                    v148 = COERCE_AS(
                        __typeof__(v148),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
                    v149 = COERCE_AS(
                        __typeof__(v149),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                    v150 = COERCE_AS(
                        __typeof__(v150),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
                    v151 = COERCE_AS(
                        __typeof__(v151),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
                    v152 = COERCE_AS(
                        __typeof__(v152),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
                    v153 = COERCE_AS(
                        __typeof__(v153),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
                    v161 = COERCE_AS(
                        __typeof__(v161),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
                    v162 = COERCE_AS(
                        __typeof__(v162),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                    v163 = COERCE_AS(
                        __typeof__(v163),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
                    v164 = COERCE_AS(
                        __typeof__(v164),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
                    v165 = COERCE_AS(
                        __typeof__(v165),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
                    v166 = COERCE_AS(
                        __typeof__(v166),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
                    v174 = COERCE_AS(
                        __typeof__(v174),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
                    v175 = COERCE_AS(
                        __typeof__(v175),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                    v176 = COERCE_AS(
                        __typeof__(v176),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
                    v177 = COERCE_AS(
                        __typeof__(v177),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
                    v178 = COERCE_AS(
                        __typeof__(v178),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
                    v179 = COERCE_AS(
                        __typeof__(v179),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
                GameRoutine_14a1940((__int64**)(a1 + 232), v103),
                    v136 = COERCE_AS(
                        __typeof__(v136),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
                    v137 = COERCE_AS(
                        __typeof__(v137),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                    v138 = COERCE_AS(
                        __typeof__(v138),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
                    v139 = COERCE_AS(
                        __typeof__(v139),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
                    v140 = COERCE_AS(
                        __typeof__(v140),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
                    v141 = COERCE_AS(
                        __typeof__(v141),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
                    v148 = COERCE_AS(
                        __typeof__(v148),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
                    v149 = COERCE_AS(
                        __typeof__(v149),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                    v150 = COERCE_AS(
                        __typeof__(v150),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
                    v151 = COERCE_AS(
                        __typeof__(v151),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
                    v152 = COERCE_AS(
                        __typeof__(v152),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
                    v153 = COERCE_AS(
                        __typeof__(v153),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
                    v161 = COERCE_AS(
                        __typeof__(v161),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
                    v162 = COERCE_AS(
                        __typeof__(v162),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                    v163 = COERCE_AS(
                        __typeof__(v163),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
                    v164 = COERCE_AS(
                        __typeof__(v164),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
                    v165 = COERCE_AS(
                        __typeof__(v165),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
                    v166 = COERCE_AS(
                        __typeof__(v166),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
                    v174 = COERCE_AS(
                        __typeof__(v174),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
                    v175 = COERCE_AS(
                        __typeof__(v175),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                    v176 = COERCE_AS(
                        __typeof__(v176),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
                    v177 = COERCE_AS(
                        __typeof__(v177),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
                    v178 = COERCE_AS(
                        __typeof__(v178),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
                    v179 = COERCE_AS(
                        __typeof__(v179),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
                v104 = *(_QWORD*)(a1 + 232);
                v105 = *(_QWORD*)v104;
                if (*(_QWORD*)v104 != 0 &&
                    *(_DWORD*)(v105 + 16) == *(_DWORD*)(v104 + 8)) {
                  *(_BYTE*)(v105 + 33) = 1;
                  v104 = *(_QWORD*)(a1 + 232);
                }
                v106 = GameRoutine_14a1b00((__int64*)v104, *(float*)(a1 + 8)),
                v136 =
                    COERCE_AS(__typeof__(v136),
                              PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
                v137 =
                    COERCE_AS(__typeof__(v137),
                              PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                v138 =
                    COERCE_AS(__typeof__(v138),
                              PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
                v139 =
                    COERCE_AS(__typeof__(v139),
                              PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
                v140 =
                    COERCE_AS(__typeof__(v140),
                              PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
                v141 =
                    COERCE_AS(__typeof__(v141),
                              PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
                v148 =
                    COERCE_AS(__typeof__(v148),
                              PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
                v149 =
                    COERCE_AS(__typeof__(v149),
                              PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                v150 =
                    COERCE_AS(__typeof__(v150),
                              PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
                v151 =
                    COERCE_AS(__typeof__(v151),
                              PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
                v152 =
                    COERCE_AS(__typeof__(v152),
                              PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
                v153 =
                    COERCE_AS(__typeof__(v153),
                              PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
                v161 =
                    COERCE_AS(__typeof__(v161),
                              PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
                v162 =
                    COERCE_AS(__typeof__(v162),
                              PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                v163 =
                    COERCE_AS(__typeof__(v163),
                              PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
                v164 =
                    COERCE_AS(__typeof__(v164),
                              PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
                v165 =
                    COERCE_AS(__typeof__(v165),
                              PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
                v166 =
                    COERCE_AS(__typeof__(v166),
                              PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
                v174 =
                    COERCE_AS(__typeof__(v174),
                              PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
                v175 =
                    COERCE_AS(__typeof__(v175),
                              PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                v176 =
                    COERCE_AS(__typeof__(v176),
                              PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
                v177 =
                    COERCE_AS(__typeof__(v177),
                              PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
                v178 =
                    COERCE_AS(__typeof__(v178),
                              PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
                v179 =
                    COERCE_AS(__typeof__(v179),
                              PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
                if (v25 >= 0x39) {
                  v107 = vsubq_f32(
                      *(float32x4_t*)(*(_QWORD*)(*(_QWORD*)(*((_QWORD*)v23 +
                                                              7) +
                                                            24LL) +
                                                 16LL) +
                                      560LL),
                      *(float32x4_t*)&v190);
                  v108 = (float)(atan2f(v106, LANES128(v107).n128_f32[0],
                                        LANES128(v107).n128_f32[2]) *
                                 0x1.ca5dc20000000p+5f) +
                         -0x1.6800000000000p+6f,
                  v136 = COERCE_AS(
                      __typeof__(v136),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
                  v137 = COERCE_AS(
                      __typeof__(v137),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                  v138 = COERCE_AS(
                      __typeof__(v138),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
                  v139 = COERCE_AS(
                      __typeof__(v139),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
                  v140 = COERCE_AS(
                      __typeof__(v140),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
                  v141 = COERCE_AS(
                      __typeof__(v141),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
                  v148 = COERCE_AS(
                      __typeof__(v148),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
                  v149 = COERCE_AS(
                      __typeof__(v149),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                  v150 = COERCE_AS(
                      __typeof__(v150),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
                  v151 = COERCE_AS(
                      __typeof__(v151),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
                  v152 = COERCE_AS(
                      __typeof__(v152),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
                  v153 = COERCE_AS(
                      __typeof__(v153),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
                  v161 = COERCE_AS(
                      __typeof__(v161),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
                  v162 = COERCE_AS(
                      __typeof__(v162),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                  v163 = COERCE_AS(
                      __typeof__(v163),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
                  v164 = COERCE_AS(
                      __typeof__(v164),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
                  v165 = COERCE_AS(
                      __typeof__(v165),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
                  v166 = COERCE_AS(
                      __typeof__(v166),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
                  v174 = COERCE_AS(
                      __typeof__(v174),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
                  v175 = COERCE_AS(
                      __typeof__(v175),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                  v176 = COERCE_AS(
                      __typeof__(v176),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
                  v177 = COERCE_AS(
                      __typeof__(v177),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
                  v178 = COERCE_AS(
                      __typeof__(v178),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
                  v179 = COERCE_AS(
                      __typeof__(v179),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
                  GameRoutine_14a17c0((__int64*)(a1 + 248), v190),
                      v136 = COERCE_AS(
                          __typeof__(v136),
                          PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
                      v137 = COERCE_AS(
                          __typeof__(v137),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                      v138 = COERCE_AS(
                          __typeof__(v138),
                          PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
                      v139 = COERCE_AS(
                          __typeof__(v139),
                          PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
                      v140 = COERCE_AS(
                          __typeof__(v140),
                          PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
                      v141 = COERCE_AS(
                          __typeof__(v141),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
                      v148 = COERCE_AS(
                          __typeof__(v148),
                          PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
                      v149 = COERCE_AS(
                          __typeof__(v149),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                      v150 = COERCE_AS(
                          __typeof__(v150),
                          PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
                      v151 = COERCE_AS(
                          __typeof__(v151),
                          PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
                      v152 = COERCE_AS(
                          __typeof__(v152),
                          PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
                      v153 = COERCE_AS(
                          __typeof__(v153),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
                      v161 = COERCE_AS(
                          __typeof__(v161),
                          PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
                      v162 = COERCE_AS(
                          __typeof__(v162),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                      v163 = COERCE_AS(
                          __typeof__(v163),
                          PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
                      v164 = COERCE_AS(
                          __typeof__(v164),
                          PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
                      v165 = COERCE_AS(
                          __typeof__(v165),
                          PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
                      v166 = COERCE_AS(
                          __typeof__(v166),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
                      v174 = COERCE_AS(
                          __typeof__(v174),
                          PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
                      v175 = COERCE_AS(
                          __typeof__(v175),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                      v176 = COERCE_AS(
                          __typeof__(v176),
                          PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
                      v177 = COERCE_AS(
                          __typeof__(v177),
                          PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
                      v178 = COERCE_AS(
                          __typeof__(v178),
                          PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
                      v179 = COERCE_AS(
                          __typeof__(v179),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
                  GameRoutine_14a1940((__int64**)(a1 + 248), v108),
                      v136 = COERCE_AS(
                          __typeof__(v136),
                          PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
                      v137 = COERCE_AS(
                          __typeof__(v137),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                      v138 = COERCE_AS(
                          __typeof__(v138),
                          PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
                      v139 = COERCE_AS(
                          __typeof__(v139),
                          PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
                      v140 = COERCE_AS(
                          __typeof__(v140),
                          PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
                      v141 = COERCE_AS(
                          __typeof__(v141),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
                      v148 = COERCE_AS(
                          __typeof__(v148),
                          PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
                      v149 = COERCE_AS(
                          __typeof__(v149),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                      v150 = COERCE_AS(
                          __typeof__(v150),
                          PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
                      v151 = COERCE_AS(
                          __typeof__(v151),
                          PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
                      v152 = COERCE_AS(
                          __typeof__(v152),
                          PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
                      v153 = COERCE_AS(
                          __typeof__(v153),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
                      v161 = COERCE_AS(
                          __typeof__(v161),
                          PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
                      v162 = COERCE_AS(
                          __typeof__(v162),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                      v163 = COERCE_AS(
                          __typeof__(v163),
                          PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
                      v164 = COERCE_AS(
                          __typeof__(v164),
                          PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
                      v165 = COERCE_AS(
                          __typeof__(v165),
                          PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
                      v166 = COERCE_AS(
                          __typeof__(v166),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
                      v174 = COERCE_AS(
                          __typeof__(v174),
                          PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
                      v175 = COERCE_AS(
                          __typeof__(v175),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                      v176 = COERCE_AS(
                          __typeof__(v176),
                          PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
                      v177 = COERCE_AS(
                          __typeof__(v177),
                          PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
                      v178 = COERCE_AS(
                          __typeof__(v178),
                          PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
                      v179 = COERCE_AS(
                          __typeof__(v179),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
                  v109 = *(__int64**)(a1 + 248);
                  v110 = *v109;
                  if (*v109 != 0 &&
                      *(_DWORD*)(v110 + 16) == *((_DWORD*)v109 + 2)) {
                    *(_BYTE*)(v110 + 33) = 1;
                    v109 = *(__int64**)(a1 + 248);
                  }
                  v111 = *(float*)(a1 + 8);
                LABEL_189:
                  GameRoutine_14a1b00(v109, v111),
                      v136 = COERCE_AS(
                          __typeof__(v136),
                          PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
                      v137 = COERCE_AS(
                          __typeof__(v137),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                      v138 = COERCE_AS(
                          __typeof__(v138),
                          PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
                      v139 = COERCE_AS(
                          __typeof__(v139),
                          PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
                      v140 = COERCE_AS(
                          __typeof__(v140),
                          PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
                      v141 = COERCE_AS(
                          __typeof__(v141),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
                      v148 = COERCE_AS(
                          __typeof__(v148),
                          PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
                      v149 = COERCE_AS(
                          __typeof__(v149),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                      v150 = COERCE_AS(
                          __typeof__(v150),
                          PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
                      v151 = COERCE_AS(
                          __typeof__(v151),
                          PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
                      v152 = COERCE_AS(
                          __typeof__(v152),
                          PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
                      v153 = COERCE_AS(
                          __typeof__(v153),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
                      v161 = COERCE_AS(
                          __typeof__(v161),
                          PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
                      v162 = COERCE_AS(
                          __typeof__(v162),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                      v163 = COERCE_AS(
                          __typeof__(v163),
                          PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
                      v164 = COERCE_AS(
                          __typeof__(v164),
                          PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
                      v165 = COERCE_AS(
                          __typeof__(v165),
                          PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
                      v166 = COERCE_AS(
                          __typeof__(v166),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
                      v174 = COERCE_AS(
                          __typeof__(v174),
                          PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
                      v175 = COERCE_AS(
                          __typeof__(v175),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                      v176 = COERCE_AS(
                          __typeof__(v176),
                          PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
                      v177 = COERCE_AS(
                          __typeof__(v177),
                          PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
                      v178 = COERCE_AS(
                          __typeof__(v178),
                          PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
                      v179 = COERCE_AS(
                          __typeof__(v179),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
                  goto LABEL_190;
                }
                v39 = 7;
              }
            }
          }
        }
      }
    }
  }
  v112 = &v24[2 * v39];
  v113 = *v112;
  v114 = **v112;
  if (v114 != 0 && *(_DWORD*)(v114 + 16) == *((_DWORD*)v113 + 2)) {
    *(_BYTE*)(v114 + 33) = 0;
    v113 = *v112;
  }
  GameRoutine_14a1b00(v113, 0x0.0p+0f),
      v136 = COERCE_AS(__typeof__(v136),
                       PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v137 = COERCE_AS(__typeof__(v137),
                       PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v138 = COERCE_AS(__typeof__(v138),
                       PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v139 = COERCE_AS(__typeof__(v139),
                       PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v140 = COERCE_AS(__typeof__(v140),
                       PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v141 = COERCE_AS(__typeof__(v141),
                       PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
      v148 = COERCE_AS(__typeof__(v148),
                       PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v149 = COERCE_AS(__typeof__(v149),
                       PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v150 = COERCE_AS(__typeof__(v150),
                       PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v151 = COERCE_AS(__typeof__(v151),
                       PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v152 = COERCE_AS(__typeof__(v152),
                       PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v153 = COERCE_AS(__typeof__(v153),
                       PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
      v161 = COERCE_AS(__typeof__(v161),
                       PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v162 = COERCE_AS(__typeof__(v162),
                       PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v163 = COERCE_AS(__typeof__(v163),
                       PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v164 = COERCE_AS(__typeof__(v164),
                       PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v165 = COERCE_AS(__typeof__(v165),
                       PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v166 = COERCE_AS(__typeof__(v166),
                       PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
      v174 = COERCE_AS(__typeof__(v174),
                       PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v175 = COERCE_AS(__typeof__(v175),
                       PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v176 = COERCE_AS(__typeof__(v176),
                       PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v177 = COERCE_AS(__typeof__(v177),
                       PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v178 = COERCE_AS(__typeof__(v178),
                       PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v179 = COERCE_AS(__typeof__(v179),
                       PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  if (v39 != 7) {
    v115 = &v24[2 * v39 + 2];
    v116 = *v115;
    v117 = **v115;
    if (v117 != 0 && *(_DWORD*)(v117 + 16) == *((_DWORD*)v116 + 2)) {
      *(_BYTE*)(v117 + 33) = 0;
      v116 = *v115;
    }
    GameRoutine_14a1b00(v116, 0x0.0p+0f),
        v136 = COERCE_AS(__typeof__(v136),
                         PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v137 = COERCE_AS(__typeof__(v137),
                         PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v138 = COERCE_AS(__typeof__(v138),
                         PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v139 = COERCE_AS(__typeof__(v139),
                         PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v140 = COERCE_AS(__typeof__(v140),
                         PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v141 = COERCE_AS(__typeof__(v141),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v148 = COERCE_AS(__typeof__(v148),
                         PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v149 = COERCE_AS(__typeof__(v149),
                         PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v150 = COERCE_AS(__typeof__(v150),
                         PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v151 = COERCE_AS(__typeof__(v151),
                         PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v152 = COERCE_AS(__typeof__(v152),
                         PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v153 = COERCE_AS(__typeof__(v153),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v161 = COERCE_AS(__typeof__(v161),
                         PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v162 = COERCE_AS(__typeof__(v162),
                         PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v163 = COERCE_AS(__typeof__(v163),
                         PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v164 = COERCE_AS(__typeof__(v164),
                         PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v165 = COERCE_AS(__typeof__(v165),
                         PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v166 = COERCE_AS(__typeof__(v166),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v174 = COERCE_AS(__typeof__(v174),
                         PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v175 = COERCE_AS(__typeof__(v175),
                         PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v176 = COERCE_AS(__typeof__(v176),
                         PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v177 = COERCE_AS(__typeof__(v177),
                         PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v178 = COERCE_AS(__typeof__(v178),
                         PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v179 = COERCE_AS(__typeof__(v179),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
    if (v39 != 6) {
      v118 = &v24[2 * v39 + 4];
      v119 = *v118;
      v120 = **v118;
      if (v120 != 0 && *(_DWORD*)(v120 + 16) == *((_DWORD*)v119 + 2)) {
        *(_BYTE*)(v120 + 33) = 0;
        v119 = *v118;
      }
      GameRoutine_14a1b00(v119, 0x0.0p+0f),
          v136 = COERCE_AS(__typeof__(v136),
                           PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
          v137 = COERCE_AS(__typeof__(v137),
                           PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
          v138 = COERCE_AS(__typeof__(v138),
                           PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
          v139 = COERCE_AS(__typeof__(v139),
                           PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v140 = COERCE_AS(__typeof__(v140),
                           PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v141 = COERCE_AS(__typeof__(v141),
                           PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
          v148 = COERCE_AS(__typeof__(v148),
                           PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
          v149 = COERCE_AS(__typeof__(v149),
                           PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
          v150 = COERCE_AS(__typeof__(v150),
                           PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
          v151 = COERCE_AS(__typeof__(v151),
                           PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v152 = COERCE_AS(__typeof__(v152),
                           PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v153 = COERCE_AS(__typeof__(v153),
                           PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
          v161 = COERCE_AS(__typeof__(v161),
                           PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
          v162 = COERCE_AS(__typeof__(v162),
                           PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
          v163 = COERCE_AS(__typeof__(v163),
                           PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
          v164 = COERCE_AS(__typeof__(v164),
                           PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v165 = COERCE_AS(__typeof__(v165),
                           PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v166 = COERCE_AS(__typeof__(v166),
                           PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
          v174 = COERCE_AS(__typeof__(v174),
                           PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
          v175 = COERCE_AS(__typeof__(v175),
                           PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
          v176 = COERCE_AS(__typeof__(v176),
                           PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
          v177 = COERCE_AS(__typeof__(v177),
                           PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v178 = COERCE_AS(__typeof__(v178),
                           PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v179 = COERCE_AS(__typeof__(v179),
                           PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
      if (v39 != 5) {
        v121 = &v24[2 * v39 + 6];
        v122 = *v121;
        v123 = **v121;
        if (v123 != 0 && *(_DWORD*)(v123 + 16) == *((_DWORD*)v122 + 2)) {
          *(_BYTE*)(v123 + 33) = 0;
          v122 = *v121;
        }
        GameRoutine_14a1b00(v122, 0x0.0p+0f),
            v136 = COERCE_AS(__typeof__(v136),
                             PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
            v137 = COERCE_AS(__typeof__(v137),
                             PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
            v138 = COERCE_AS(__typeof__(v138),
                             PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
            v139 = COERCE_AS(__typeof__(v139),
                             PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
            v140 = COERCE_AS(__typeof__(v140),
                             PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
            v141 = COERCE_AS(__typeof__(v141),
                             PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
            v148 = COERCE_AS(__typeof__(v148),
                             PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
            v149 = COERCE_AS(__typeof__(v149),
                             PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
            v150 = COERCE_AS(__typeof__(v150),
                             PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
            v151 = COERCE_AS(__typeof__(v151),
                             PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
            v152 = COERCE_AS(__typeof__(v152),
                             PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
            v153 = COERCE_AS(__typeof__(v153),
                             PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
            v161 = COERCE_AS(__typeof__(v161),
                             PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
            v162 = COERCE_AS(__typeof__(v162),
                             PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
            v163 = COERCE_AS(__typeof__(v163),
                             PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
            v164 = COERCE_AS(__typeof__(v164),
                             PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
            v165 = COERCE_AS(__typeof__(v165),
                             PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
            v166 = COERCE_AS(__typeof__(v166),
                             PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
            v174 = COERCE_AS(__typeof__(v174),
                             PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
            v175 = COERCE_AS(__typeof__(v175),
                             PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
            v176 = COERCE_AS(__typeof__(v176),
                             PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
            v177 = COERCE_AS(__typeof__(v177),
                             PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
            v178 = COERCE_AS(__typeof__(v178),
                             PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
            v179 = COERCE_AS(__typeof__(v179),
                             PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
        if (v39 != 4) {
          v124 = &v24[2 * v39 + 8];
          v125 = *v124;
          v126 = **v124;
          if (v126 != 0 && *(_DWORD*)(v126 + 16) == *((_DWORD*)v125 + 2)) {
            *(_BYTE*)(v126 + 33) = 0;
            v125 = *v124;
          }
          GameRoutine_14a1b00(v125, 0x0.0p+0f),
              v136 = COERCE_AS(__typeof__(v136),
                               PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
              v137 = COERCE_AS(__typeof__(v137),
                               PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
              v138 = COERCE_AS(__typeof__(v138),
                               PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
              v139 = COERCE_AS(__typeof__(v139),
                               PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
              v140 = COERCE_AS(__typeof__(v140),
                               PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
              v141 = COERCE_AS(__typeof__(v141),
                               PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
              v148 = COERCE_AS(__typeof__(v148),
                               PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
              v149 = COERCE_AS(__typeof__(v149),
                               PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
              v150 = COERCE_AS(__typeof__(v150),
                               PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
              v151 = COERCE_AS(__typeof__(v151),
                               PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
              v152 = COERCE_AS(__typeof__(v152),
                               PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
              v153 = COERCE_AS(__typeof__(v153),
                               PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
              v161 = COERCE_AS(__typeof__(v161),
                               PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
              v162 = COERCE_AS(__typeof__(v162),
                               PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
              v163 = COERCE_AS(__typeof__(v163),
                               PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
              v164 = COERCE_AS(__typeof__(v164),
                               PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
              v165 = COERCE_AS(__typeof__(v165),
                               PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
              v166 = COERCE_AS(__typeof__(v166),
                               PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
              v174 = COERCE_AS(__typeof__(v174),
                               PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
              v175 = COERCE_AS(__typeof__(v175),
                               PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
              v176 = COERCE_AS(__typeof__(v176),
                               PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
              v177 = COERCE_AS(__typeof__(v177),
                               PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
              v178 = COERCE_AS(__typeof__(v178),
                               PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
              v179 = COERCE_AS(__typeof__(v179),
                               PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
          if (v39 != 3) {
            v127 = &v24[2 * v39 + 10];
            v128 = *v127;
            v129 = **v127;
            if (v129 != 0 && *(_DWORD*)(v129 + 16) == *((_DWORD*)v128 + 2)) {
              *(_BYTE*)(v129 + 33) = 0;
              v128 = *v127;
            }
            GameRoutine_14a1b00(v128, 0x0.0p+0f),
                v136 =
                    COERCE_AS(__typeof__(v136),
                              PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
                v137 =
                    COERCE_AS(__typeof__(v137),
                              PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                v138 =
                    COERCE_AS(__typeof__(v138),
                              PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
                v139 =
                    COERCE_AS(__typeof__(v139),
                              PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
                v140 =
                    COERCE_AS(__typeof__(v140),
                              PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
                v141 =
                    COERCE_AS(__typeof__(v141),
                              PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
                v148 =
                    COERCE_AS(__typeof__(v148),
                              PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
                v149 =
                    COERCE_AS(__typeof__(v149),
                              PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                v150 =
                    COERCE_AS(__typeof__(v150),
                              PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
                v151 =
                    COERCE_AS(__typeof__(v151),
                              PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
                v152 =
                    COERCE_AS(__typeof__(v152),
                              PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
                v153 =
                    COERCE_AS(__typeof__(v153),
                              PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
                v161 =
                    COERCE_AS(__typeof__(v161),
                              PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
                v162 =
                    COERCE_AS(__typeof__(v162),
                              PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                v163 =
                    COERCE_AS(__typeof__(v163),
                              PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
                v164 =
                    COERCE_AS(__typeof__(v164),
                              PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
                v165 =
                    COERCE_AS(__typeof__(v165),
                              PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
                v166 =
                    COERCE_AS(__typeof__(v166),
                              PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
                v174 =
                    COERCE_AS(__typeof__(v174),
                              PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
                v175 =
                    COERCE_AS(__typeof__(v175),
                              PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                v176 =
                    COERCE_AS(__typeof__(v176),
                              PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
                v177 =
                    COERCE_AS(__typeof__(v177),
                              PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
                v178 =
                    COERCE_AS(__typeof__(v178),
                              PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
                v179 =
                    COERCE_AS(__typeof__(v179),
                              PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
            if (v39 != 2) {
              v130 = &v24[2 * v39 + 12];
              v131 = *v130;
              v132 = **v130;
              if (v132 != 0 && *(_DWORD*)(v132 + 16) == *((_DWORD*)v131 + 2)) {
                *(_BYTE*)(v132 + 33) = 0;
                v131 = *v130;
              }
              GameRoutine_14a1b00(v131, 0x0.0p+0f),
                  v136 = COERCE_AS(
                      __typeof__(v136),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
                  v137 = COERCE_AS(
                      __typeof__(v137),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                  v138 = COERCE_AS(
                      __typeof__(v138),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
                  v139 = COERCE_AS(
                      __typeof__(v139),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
                  v140 = COERCE_AS(
                      __typeof__(v140),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
                  v141 = COERCE_AS(
                      __typeof__(v141),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
                  v148 = COERCE_AS(
                      __typeof__(v148),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
                  v149 = COERCE_AS(
                      __typeof__(v149),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                  v150 = COERCE_AS(
                      __typeof__(v150),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
                  v151 = COERCE_AS(
                      __typeof__(v151),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
                  v152 = COERCE_AS(
                      __typeof__(v152),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
                  v153 = COERCE_AS(
                      __typeof__(v153),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
                  v161 = COERCE_AS(
                      __typeof__(v161),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
                  v162 = COERCE_AS(
                      __typeof__(v162),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                  v163 = COERCE_AS(
                      __typeof__(v163),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
                  v164 = COERCE_AS(
                      __typeof__(v164),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
                  v165 = COERCE_AS(
                      __typeof__(v165),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
                  v166 = COERCE_AS(
                      __typeof__(v166),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
                  v174 = COERCE_AS(
                      __typeof__(v174),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
                  v175 = COERCE_AS(
                      __typeof__(v175),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                  v176 = COERCE_AS(
                      __typeof__(v176),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
                  v177 = COERCE_AS(
                      __typeof__(v177),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
                  v178 = COERCE_AS(
                      __typeof__(v178),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
                  v179 = COERCE_AS(
                      __typeof__(v179),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
              if (v39 != 1) {
                v133 = &v24[2 * v39 + 14];
                v109 = *v133;
                v134 = **v133;
                if (v134 != 0 &&
                    *(_DWORD*)(v134 + 16) == *((_DWORD*)v109 + 2)) {
                  *(_BYTE*)(v134 + 33) = 0;
                  v109 = *v133;
                }
                v111 = 0x0.0p+0f;
                goto LABEL_189;
              }
            }
          }
        }
      }
    }
  }
LABEL_190:
  if (*(int*)(a1 + 16) < (unsigned __int64)((__int64)v25 >> 3)) {
    DungeonEnemyTrajectory_fa03f0(a1, 1),
        v136 = COERCE_AS(__typeof__(v136),
                         PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v137 = COERCE_AS(__typeof__(v137),
                         PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v138 = COERCE_AS(__typeof__(v138),
                         PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v139 = COERCE_AS(__typeof__(v139),
                         PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v140 = COERCE_AS(__typeof__(v140),
                         PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v141 = COERCE_AS(__typeof__(v141),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v148 = COERCE_AS(__typeof__(v148),
                         PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v149 = COERCE_AS(__typeof__(v149),
                         PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v150 = COERCE_AS(__typeof__(v150),
                         PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v151 = COERCE_AS(__typeof__(v151),
                         PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v152 = COERCE_AS(__typeof__(v152),
                         PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v153 = COERCE_AS(__typeof__(v153),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v161 = COERCE_AS(__typeof__(v161),
                         PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v162 = COERCE_AS(__typeof__(v162),
                         PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v163 = COERCE_AS(__typeof__(v163),
                         PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v164 = COERCE_AS(__typeof__(v164),
                         PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v165 = COERCE_AS(__typeof__(v165),
                         PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v166 = COERCE_AS(__typeof__(v166),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v174 = COERCE_AS(__typeof__(v174),
                         PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v175 = COERCE_AS(__typeof__(v175),
                         PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v176 = COERCE_AS(__typeof__(v176),
                         PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v177 = COERCE_AS(__typeof__(v177),
                         PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v178 = COERCE_AS(__typeof__(v178),
                         PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v179 = COERCE_AS(__typeof__(v179),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  }
  *(_DWORD*)(a1 + 16) = v25 >> 3;
  v135 = (float)(*(float*)(game_script_hub_g_frame_counter + 160) *
                 0x1.0aef000000000p+4f) /
         0x1.f400000000000p+9f;
  if (*(float*)(a1 + 8) <= 0x0.0p+0f) {
    DungeonEnemyTrajectory_fa03f0(a1, 0),
        v136 = COERCE_AS(__typeof__(v136),
                         PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v137 = COERCE_AS(__typeof__(v137),
                         PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v138 = COERCE_AS(__typeof__(v138),
                         PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v139 = COERCE_AS(__typeof__(v139),
                         PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v140 = COERCE_AS(__typeof__(v140),
                         PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v141 = COERCE_AS(__typeof__(v141),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v148 = COERCE_AS(__typeof__(v148),
                         PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v149 = COERCE_AS(__typeof__(v149),
                         PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v150 = COERCE_AS(__typeof__(v150),
                         PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v151 = COERCE_AS(__typeof__(v151),
                         PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v152 = COERCE_AS(__typeof__(v152),
                         PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v153 = COERCE_AS(__typeof__(v153),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v161 = COERCE_AS(__typeof__(v161),
                         PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v162 = COERCE_AS(__typeof__(v162),
                         PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v163 = COERCE_AS(__typeof__(v163),
                         PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v164 = COERCE_AS(__typeof__(v164),
                         PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v165 = COERCE_AS(__typeof__(v165),
                         PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v166 = COERCE_AS(__typeof__(v166),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v174 = COERCE_AS(__typeof__(v174),
                         PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v175 = COERCE_AS(__typeof__(v175),
                         PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v176 = COERCE_AS(__typeof__(v176),
                         PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v177 = COERCE_AS(__typeof__(v177),
                         PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v178 = COERCE_AS(__typeof__(v178),
                         PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v179 = COERCE_AS(__typeof__(v179),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
    goto LABEL_276;
  }
  if ((*(_BYTE*)(a1 + 21) & 1) != 0) {
    goto LABEL_276;
  }
  DungeonEnemyTrajectory_fa03f0(a1, 1),
      v136 = COERCE_AS(__typeof__(v136),
                       PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v137 = COERCE_AS(__typeof__(v137),
                       PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v138 = COERCE_AS(__typeof__(v138),
                       PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v139 = COERCE_AS(__typeof__(v139),
                       PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v140 = COERCE_AS(__typeof__(v140),
                       PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v141 = COERCE_AS(__typeof__(v141),
                       PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
      v148 = COERCE_AS(__typeof__(v148),
                       PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v149 = COERCE_AS(__typeof__(v149),
                       PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v150 = COERCE_AS(__typeof__(v150),
                       PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v151 = COERCE_AS(__typeof__(v151),
                       PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v152 = COERCE_AS(__typeof__(v152),
                       PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v153 = COERCE_AS(__typeof__(v153),
                       PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
      v161 = COERCE_AS(__typeof__(v161),
                       PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v162 = COERCE_AS(__typeof__(v162),
                       PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v163 = COERCE_AS(__typeof__(v163),
                       PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v164 = COERCE_AS(__typeof__(v164),
                       PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v165 = COERCE_AS(__typeof__(v165),
                       PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v166 = COERCE_AS(__typeof__(v166),
                       PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
      v174 = COERCE_AS(__typeof__(v174),
                       PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v175 = COERCE_AS(__typeof__(v175),
                       PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v176 = COERCE_AS(__typeof__(v176),
                       PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v177 = COERCE_AS(__typeof__(v177),
                       PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v178 = COERCE_AS(__typeof__(v178),
                       PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v179 = COERCE_AS(__typeof__(v179),
                       PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  *(_BYTE*)(a1 + 21) = 1;
  *(_DWORD*)(a1 + 12) = 1065353216;
  v142 = game_util_Format((__int64)"SE_EFF_Dng_Round%d_lp", 1, v136, v137, v138,
                          v139, v140, v141, SLOBYTE(v190)),
  v136 = COERCE_AS(__typeof__(v136),
                   PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
  v137 = COERCE_AS(__typeof__(v137),
                   PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v138 = COERCE_AS(__typeof__(v138),
                   PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
  v139 = COERCE_AS(__typeof__(v139),
                   PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
  v140 = COERCE_AS(__typeof__(v140),
                   PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
  v141 = COERCE_AS(__typeof__(v141),
                   PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
  v148 = COERCE_AS(__typeof__(v148),
                   PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
  v149 = COERCE_AS(__typeof__(v149),
                   PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v150 = COERCE_AS(__typeof__(v150),
                   PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
  v151 = COERCE_AS(__typeof__(v151),
                   PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
  v152 = COERCE_AS(__typeof__(v152),
                   PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
  v153 = COERCE_AS(__typeof__(v153),
                   PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
  v161 = COERCE_AS(__typeof__(v161),
                   PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
  v162 = COERCE_AS(__typeof__(v162),
                   PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v163 = COERCE_AS(__typeof__(v163),
                   PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
  v164 = COERCE_AS(__typeof__(v164),
                   PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
  v165 = COERCE_AS(__typeof__(v165),
                   PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
  v166 = COERCE_AS(__typeof__(v166),
                   PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
  v174 = COERCE_AS(__typeof__(v174),
                   PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
  v175 = COERCE_AS(__typeof__(v175),
                   PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v176 = COERCE_AS(__typeof__(v176),
                   PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
  v177 = COERCE_AS(__typeof__(v177),
                   PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
  v178 = COERCE_AS(__typeof__(v178),
                   PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
  v179 = COERCE_AS(__typeof__(v179),
                   PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  v143 = strlen(v142),
  v136 = COERCE_AS(__typeof__(v136),
                   PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
  v137 = COERCE_AS(__typeof__(v137),
                   PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v138 = COERCE_AS(__typeof__(v138),
                   PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
  v139 = COERCE_AS(__typeof__(v139),
                   PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
  v140 = COERCE_AS(__typeof__(v140),
                   PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
  v141 = COERCE_AS(__typeof__(v141),
                   PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
  v148 = COERCE_AS(__typeof__(v148),
                   PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
  v149 = COERCE_AS(__typeof__(v149),
                   PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v150 = COERCE_AS(__typeof__(v150),
                   PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
  v151 = COERCE_AS(__typeof__(v151),
                   PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
  v152 = COERCE_AS(__typeof__(v152),
                   PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
  v153 = COERCE_AS(__typeof__(v153),
                   PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
  v161 = COERCE_AS(__typeof__(v161),
                   PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
  v162 = COERCE_AS(__typeof__(v162),
                   PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v163 = COERCE_AS(__typeof__(v163),
                   PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
  v164 = COERCE_AS(__typeof__(v164),
                   PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
  v165 = COERCE_AS(__typeof__(v165),
                   PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
  v166 = COERCE_AS(__typeof__(v166),
                   PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
  v174 = COERCE_AS(__typeof__(v174),
                   PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
  v175 = COERCE_AS(__typeof__(v175),
                   PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v176 = COERCE_AS(__typeof__(v176),
                   PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
  v177 = COERCE_AS(__typeof__(v177),
                   PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
  v178 = COERCE_AS(__typeof__(v178),
                   PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
  v179 = COERCE_AS(__typeof__(v179),
                   PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  if (v143 >= 0xFFFFFFFFFFFFFFF7LL) {
  LABEL_281:
    String_60a1d0(),
        v136 = COERCE_AS(__typeof__(v136),
                         PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v137 = COERCE_AS(__typeof__(v137),
                         PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v138 = COERCE_AS(__typeof__(v138),
                         PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v139 = COERCE_AS(__typeof__(v139),
                         PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v140 = COERCE_AS(__typeof__(v140),
                         PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v141 = COERCE_AS(__typeof__(v141),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v148 = COERCE_AS(__typeof__(v148),
                         PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v149 = COERCE_AS(__typeof__(v149),
                         PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v150 = COERCE_AS(__typeof__(v150),
                         PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v151 = COERCE_AS(__typeof__(v151),
                         PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v152 = COERCE_AS(__typeof__(v152),
                         PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v153 = COERCE_AS(__typeof__(v153),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v161 = COERCE_AS(__typeof__(v161),
                         PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v162 = COERCE_AS(__typeof__(v162),
                         PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v163 = COERCE_AS(__typeof__(v163),
                         PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v164 = COERCE_AS(__typeof__(v164),
                         PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v165 = COERCE_AS(__typeof__(v165),
                         PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v166 = COERCE_AS(__typeof__(v166),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v174 = COERCE_AS(__typeof__(v174),
                         PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v175 = COERCE_AS(__typeof__(v175),
                         PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v176 = COERCE_AS(__typeof__(v176),
                         PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v177 = COERCE_AS(__typeof__(v177),
                         PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v178 = COERCE_AS(__typeof__(v178),
                         PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v179 = COERCE_AS(__typeof__(v179),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  }
  v144 = v143;
  if (v143 >= 0x17) {
    if ((v143 | 7) == 0x17) {
      v146 = 26;
    }
    else {
      v146 = (v143 | 7) + 1;
    }
    v145 = (char*)fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v146,
                                                 16, 0),
    v136 = COERCE_AS(__typeof__(v136),
                     PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
    v137 = COERCE_AS(__typeof__(v137),
                     PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
    v138 = COERCE_AS(__typeof__(v138),
                     PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
    v139 = COERCE_AS(__typeof__(v139),
                     PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
    v140 = COERCE_AS(__typeof__(v140),
                     PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
    v141 = COERCE_AS(__typeof__(v141),
                     PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
    v148 = COERCE_AS(__typeof__(v148),
                     PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
    v149 = COERCE_AS(__typeof__(v149),
                     PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
    v150 = COERCE_AS(__typeof__(v150),
                     PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
    v151 = COERCE_AS(__typeof__(v151),
                     PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
    v152 = COERCE_AS(__typeof__(v152),
                     PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
    v153 = COERCE_AS(__typeof__(v153),
                     PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
    v161 = COERCE_AS(__typeof__(v161),
                     PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
    v162 = COERCE_AS(__typeof__(v162),
                     PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
    v163 = COERCE_AS(__typeof__(v163),
                     PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
    v164 = COERCE_AS(__typeof__(v164),
                     PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
    v165 = COERCE_AS(__typeof__(v165),
                     PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
    v166 = COERCE_AS(__typeof__(v166),
                     PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
    v174 = COERCE_AS(__typeof__(v174),
                     PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
    v175 = COERCE_AS(__typeof__(v175),
                     PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
    v176 = COERCE_AS(__typeof__(v176),
                     PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
    v177 = COERCE_AS(__typeof__(v177),
                     PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
    v178 = COERCE_AS(__typeof__(v178),
                     PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
    v179 = COERCE_AS(__typeof__(v179),
                     PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
    v197_.v198 = v144;
    v197_.v199 = v145;
    v197_.v197 = v146 | 1;
    goto LABEL_203;
  }
  v145 = (char*)&v197_.v197 + 1;
  LOBYTE(v197_.v197) = 2 * v143;
  if (v143 != 0) {
  LABEL_203:
    memmove(v145, v142, v144),
        v136 = COERCE_AS(__typeof__(v136),
                         PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v137 = COERCE_AS(__typeof__(v137),
                         PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v138 = COERCE_AS(__typeof__(v138),
                         PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v139 = COERCE_AS(__typeof__(v139),
                         PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v140 = COERCE_AS(__typeof__(v140),
                         PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v141 = COERCE_AS(__typeof__(v141),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v148 = COERCE_AS(__typeof__(v148),
                         PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v149 = COERCE_AS(__typeof__(v149),
                         PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v150 = COERCE_AS(__typeof__(v150),
                         PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v151 = COERCE_AS(__typeof__(v151),
                         PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v152 = COERCE_AS(__typeof__(v152),
                         PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v153 = COERCE_AS(__typeof__(v153),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v161 = COERCE_AS(__typeof__(v161),
                         PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v162 = COERCE_AS(__typeof__(v162),
                         PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v163 = COERCE_AS(__typeof__(v163),
                         PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v164 = COERCE_AS(__typeof__(v164),
                         PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v165 = COERCE_AS(__typeof__(v165),
                         PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v166 = COERCE_AS(__typeof__(v166),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v174 = COERCE_AS(__typeof__(v174),
                         PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v175 = COERCE_AS(__typeof__(v175),
                         PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v176 = COERCE_AS(__typeof__(v176),
                         PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v177 = COERCE_AS(__typeof__(v177),
                         PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v178 = COERCE_AS(__typeof__(v178),
                         PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v179 = COERCE_AS(__typeof__(v179),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  }
  v145[v144] = 0;
  if ((v197_.v197 & 1) != 0) {
    v147 = v197_.v199;
  }
  else {
    v147 = (char*)&v197_.v197 + 1;
  }
  if (v147 != nullptr) {
    snd_Fade_Fade_10c830_alt1((__int64)v202, 0x0.0p+0f),
        v136 = COERCE_AS(__typeof__(v136),
                         PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v137 = COERCE_AS(__typeof__(v137),
                         PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v138 = COERCE_AS(__typeof__(v138),
                         PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v139 = COERCE_AS(__typeof__(v139),
                         PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v140 = COERCE_AS(__typeof__(v140),
                         PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v141 = COERCE_AS(__typeof__(v141),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v148 = COERCE_AS(__typeof__(v148),
                         PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v149 = COERCE_AS(__typeof__(v149),
                         PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v150 = COERCE_AS(__typeof__(v150),
                         PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v151 = COERCE_AS(__typeof__(v151),
                         PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v152 = COERCE_AS(__typeof__(v152),
                         PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v153 = COERCE_AS(__typeof__(v153),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v161 = COERCE_AS(__typeof__(v161),
                         PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v162 = COERCE_AS(__typeof__(v162),
                         PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v163 = COERCE_AS(__typeof__(v163),
                         PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v164 = COERCE_AS(__typeof__(v164),
                         PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v165 = COERCE_AS(__typeof__(v165),
                         PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v166 = COERCE_AS(__typeof__(v166),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v174 = COERCE_AS(__typeof__(v174),
                         PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v175 = COERCE_AS(__typeof__(v175),
                         PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v176 = COERCE_AS(__typeof__(v176),
                         PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v177 = COERCE_AS(__typeof__(v177),
                         PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v178 = COERCE_AS(__typeof__(v178),
                         PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v179 = COERCE_AS(__typeof__(v179),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
    snd_play_ff2d0((__int64)v147, (__int64)v147, (__int64)v202, 0, 0x10001u, 0,
                   0x0.0p+0f, 0x1.0000000000000p+0f),
        v136 = COERCE_AS(__typeof__(v136),
                         PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v137 = COERCE_AS(__typeof__(v137),
                         PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v138 = COERCE_AS(__typeof__(v138),
                         PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v139 = COERCE_AS(__typeof__(v139),
                         PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v140 = COERCE_AS(__typeof__(v140),
                         PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v141 = COERCE_AS(__typeof__(v141),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v148 = COERCE_AS(__typeof__(v148),
                         PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v149 = COERCE_AS(__typeof__(v149),
                         PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v150 = COERCE_AS(__typeof__(v150),
                         PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v151 = COERCE_AS(__typeof__(v151),
                         PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v152 = COERCE_AS(__typeof__(v152),
                         PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v153 = COERCE_AS(__typeof__(v153),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v161 = COERCE_AS(__typeof__(v161),
                         PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v162 = COERCE_AS(__typeof__(v162),
                         PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v163 = COERCE_AS(__typeof__(v163),
                         PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v164 = COERCE_AS(__typeof__(v164),
                         PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v165 = COERCE_AS(__typeof__(v165),
                         PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v166 = COERCE_AS(__typeof__(v166),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v174 = COERCE_AS(__typeof__(v174),
                         PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v175 = COERCE_AS(__typeof__(v175),
                         PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v176 = COERCE_AS(__typeof__(v176),
                         PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v177 = COERCE_AS(__typeof__(v177),
                         PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v178 = COERCE_AS(__typeof__(v178),
                         PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v179 = COERCE_AS(__typeof__(v179),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
    snd_Fade_Destroy_Fade_alt1(v202),
        v136 = COERCE_AS(__typeof__(v136),
                         PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v137 = COERCE_AS(__typeof__(v137),
                         PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v138 = COERCE_AS(__typeof__(v138),
                         PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v139 = COERCE_AS(__typeof__(v139),
                         PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v140 = COERCE_AS(__typeof__(v140),
                         PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v141 = COERCE_AS(__typeof__(v141),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v148 = COERCE_AS(__typeof__(v148),
                         PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v149 = COERCE_AS(__typeof__(v149),
                         PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v150 = COERCE_AS(__typeof__(v150),
                         PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v151 = COERCE_AS(__typeof__(v151),
                         PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v152 = COERCE_AS(__typeof__(v152),
                         PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v153 = COERCE_AS(__typeof__(v153),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v161 = COERCE_AS(__typeof__(v161),
                         PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v162 = COERCE_AS(__typeof__(v162),
                         PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v163 = COERCE_AS(__typeof__(v163),
                         PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v164 = COERCE_AS(__typeof__(v164),
                         PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v165 = COERCE_AS(__typeof__(v165),
                         PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v166 = COERCE_AS(__typeof__(v166),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v174 = COERCE_AS(__typeof__(v174),
                         PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v175 = COERCE_AS(__typeof__(v175),
                         PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v176 = COERCE_AS(__typeof__(v176),
                         PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v177 = COERCE_AS(__typeof__(v177),
                         PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v178 = COERCE_AS(__typeof__(v178),
                         PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v179 = COERCE_AS(__typeof__(v179),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  }
  else {
    v200_.v200 = 0;
    v200_.v201 = 0x2000;
  }
  GameRoutine_112180(a1 + 24, (__int64)&v200_.v200),
      v136 = COERCE_AS(__typeof__(v136),
                       PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v137 = COERCE_AS(__typeof__(v137),
                       PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v138 = COERCE_AS(__typeof__(v138),
                       PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v139 = COERCE_AS(__typeof__(v139),
                       PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v140 = COERCE_AS(__typeof__(v140),
                       PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v141 = COERCE_AS(__typeof__(v141),
                       PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
      v148 = COERCE_AS(__typeof__(v148),
                       PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v149 = COERCE_AS(__typeof__(v149),
                       PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v150 = COERCE_AS(__typeof__(v150),
                       PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v151 = COERCE_AS(__typeof__(v151),
                       PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v152 = COERCE_AS(__typeof__(v152),
                       PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v153 = COERCE_AS(__typeof__(v153),
                       PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
      v161 = COERCE_AS(__typeof__(v161),
                       PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v162 = COERCE_AS(__typeof__(v162),
                       PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v163 = COERCE_AS(__typeof__(v163),
                       PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v164 = COERCE_AS(__typeof__(v164),
                       PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v165 = COERCE_AS(__typeof__(v165),
                       PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v166 = COERCE_AS(__typeof__(v166),
                       PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
      v174 = COERCE_AS(__typeof__(v174),
                       PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v175 = COERCE_AS(__typeof__(v175),
                       PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v176 = COERCE_AS(__typeof__(v176),
                       PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v177 = COERCE_AS(__typeof__(v177),
                       PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v178 = COERCE_AS(__typeof__(v178),
                       PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v179 = COERCE_AS(__typeof__(v179),
                       PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  if ((v197_.v197 & 1) != 0 && v197_.v199 != nullptr) {
    v154 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v154 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                  v154),
        v136 = COERCE_AS(__typeof__(v136),
                         PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v137 = COERCE_AS(__typeof__(v137),
                         PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v138 = COERCE_AS(__typeof__(v138),
                         PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v139 = COERCE_AS(__typeof__(v139),
                         PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v140 = COERCE_AS(__typeof__(v140),
                         PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v141 = COERCE_AS(__typeof__(v141),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v148 = COERCE_AS(__typeof__(v148),
                         PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v149 = COERCE_AS(__typeof__(v149),
                         PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v150 = COERCE_AS(__typeof__(v150),
                         PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v151 = COERCE_AS(__typeof__(v151),
                         PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v152 = COERCE_AS(__typeof__(v152),
                         PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v153 = COERCE_AS(__typeof__(v153),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v161 = COERCE_AS(__typeof__(v161),
                         PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v162 = COERCE_AS(__typeof__(v162),
                         PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v163 = COERCE_AS(__typeof__(v163),
                         PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v164 = COERCE_AS(__typeof__(v164),
                         PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v165 = COERCE_AS(__typeof__(v165),
                         PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v166 = COERCE_AS(__typeof__(v166),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v174 = COERCE_AS(__typeof__(v174),
                         PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v175 = COERCE_AS(__typeof__(v175),
                         PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v176 = COERCE_AS(__typeof__(v176),
                         PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v177 = COERCE_AS(__typeof__(v177),
                         PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v178 = COERCE_AS(__typeof__(v178),
                         PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v179 = COERCE_AS(__typeof__(v179),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  }
  v155 = game_util_Format((__int64)"SE_EFF_Dng_Round%d_lp", 2, v148, v149, v150,
                          v151, v152, v153, v191),
  v136 = COERCE_AS(__typeof__(v136),
                   PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
  v137 = COERCE_AS(__typeof__(v137),
                   PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v138 = COERCE_AS(__typeof__(v138),
                   PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
  v139 = COERCE_AS(__typeof__(v139),
                   PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
  v140 = COERCE_AS(__typeof__(v140),
                   PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
  v141 = COERCE_AS(__typeof__(v141),
                   PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
  v148 = COERCE_AS(__typeof__(v148),
                   PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
  v149 = COERCE_AS(__typeof__(v149),
                   PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v150 = COERCE_AS(__typeof__(v150),
                   PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
  v151 = COERCE_AS(__typeof__(v151),
                   PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
  v152 = COERCE_AS(__typeof__(v152),
                   PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
  v153 = COERCE_AS(__typeof__(v153),
                   PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
  v161 = COERCE_AS(__typeof__(v161),
                   PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
  v162 = COERCE_AS(__typeof__(v162),
                   PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v163 = COERCE_AS(__typeof__(v163),
                   PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
  v164 = COERCE_AS(__typeof__(v164),
                   PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
  v165 = COERCE_AS(__typeof__(v165),
                   PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
  v166 = COERCE_AS(__typeof__(v166),
                   PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
  v174 = COERCE_AS(__typeof__(v174),
                   PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
  v175 = COERCE_AS(__typeof__(v175),
                   PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v176 = COERCE_AS(__typeof__(v176),
                   PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
  v177 = COERCE_AS(__typeof__(v177),
                   PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
  v178 = COERCE_AS(__typeof__(v178),
                   PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
  v179 = COERCE_AS(__typeof__(v179),
                   PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  v156 = strlen(v155),
  v136 = COERCE_AS(__typeof__(v136),
                   PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
  v137 = COERCE_AS(__typeof__(v137),
                   PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v138 = COERCE_AS(__typeof__(v138),
                   PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
  v139 = COERCE_AS(__typeof__(v139),
                   PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
  v140 = COERCE_AS(__typeof__(v140),
                   PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
  v141 = COERCE_AS(__typeof__(v141),
                   PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
  v148 = COERCE_AS(__typeof__(v148),
                   PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
  v149 = COERCE_AS(__typeof__(v149),
                   PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v150 = COERCE_AS(__typeof__(v150),
                   PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
  v151 = COERCE_AS(__typeof__(v151),
                   PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
  v152 = COERCE_AS(__typeof__(v152),
                   PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
  v153 = COERCE_AS(__typeof__(v153),
                   PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
  v161 = COERCE_AS(__typeof__(v161),
                   PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
  v162 = COERCE_AS(__typeof__(v162),
                   PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v163 = COERCE_AS(__typeof__(v163),
                   PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
  v164 = COERCE_AS(__typeof__(v164),
                   PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
  v165 = COERCE_AS(__typeof__(v165),
                   PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
  v166 = COERCE_AS(__typeof__(v166),
                   PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
  v174 = COERCE_AS(__typeof__(v174),
                   PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
  v175 = COERCE_AS(__typeof__(v175),
                   PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v176 = COERCE_AS(__typeof__(v176),
                   PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
  v177 = COERCE_AS(__typeof__(v177),
                   PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
  v178 = COERCE_AS(__typeof__(v178),
                   PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
  v179 = COERCE_AS(__typeof__(v179),
                   PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  if (v156 > 0xFFFFFFFFFFFFFFF6LL) {
    goto LABEL_281;
  }
  v157 = v156;
  if (v156 >= 0x17) {
    if ((v156 | 7) == 0x17) {
      v159 = 26;
    }
    else {
      v159 = (v156 | 7) + 1;
    }
    v158 = (char*)fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v159,
                                                 16, 0),
    v136 = COERCE_AS(__typeof__(v136),
                     PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
    v137 = COERCE_AS(__typeof__(v137),
                     PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
    v138 = COERCE_AS(__typeof__(v138),
                     PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
    v139 = COERCE_AS(__typeof__(v139),
                     PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
    v140 = COERCE_AS(__typeof__(v140),
                     PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
    v141 = COERCE_AS(__typeof__(v141),
                     PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
    v148 = COERCE_AS(__typeof__(v148),
                     PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
    v149 = COERCE_AS(__typeof__(v149),
                     PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
    v150 = COERCE_AS(__typeof__(v150),
                     PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
    v151 = COERCE_AS(__typeof__(v151),
                     PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
    v152 = COERCE_AS(__typeof__(v152),
                     PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
    v153 = COERCE_AS(__typeof__(v153),
                     PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
    v161 = COERCE_AS(__typeof__(v161),
                     PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
    v162 = COERCE_AS(__typeof__(v162),
                     PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
    v163 = COERCE_AS(__typeof__(v163),
                     PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
    v164 = COERCE_AS(__typeof__(v164),
                     PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
    v165 = COERCE_AS(__typeof__(v165),
                     PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
    v166 = COERCE_AS(__typeof__(v166),
                     PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
    v174 = COERCE_AS(__typeof__(v174),
                     PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
    v175 = COERCE_AS(__typeof__(v175),
                     PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
    v176 = COERCE_AS(__typeof__(v176),
                     PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
    v177 = COERCE_AS(__typeof__(v177),
                     PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
    v178 = COERCE_AS(__typeof__(v178),
                     PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
    v179 = COERCE_AS(__typeof__(v179),
                     PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
    v197_.v198 = v157;
    v197_.v199 = v158;
    v197_.v197 = v159 | 1;
    goto LABEL_223;
  }
  v158 = (char*)&v197_.v197 + 1;
  LOBYTE(v197_.v197) = 2 * v156;
  if (v156 != 0) {
  LABEL_223:
    memmove(v158, v155, v157),
        v136 = COERCE_AS(__typeof__(v136),
                         PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v137 = COERCE_AS(__typeof__(v137),
                         PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v138 = COERCE_AS(__typeof__(v138),
                         PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v139 = COERCE_AS(__typeof__(v139),
                         PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v140 = COERCE_AS(__typeof__(v140),
                         PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v141 = COERCE_AS(__typeof__(v141),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v148 = COERCE_AS(__typeof__(v148),
                         PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v149 = COERCE_AS(__typeof__(v149),
                         PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v150 = COERCE_AS(__typeof__(v150),
                         PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v151 = COERCE_AS(__typeof__(v151),
                         PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v152 = COERCE_AS(__typeof__(v152),
                         PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v153 = COERCE_AS(__typeof__(v153),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v161 = COERCE_AS(__typeof__(v161),
                         PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v162 = COERCE_AS(__typeof__(v162),
                         PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v163 = COERCE_AS(__typeof__(v163),
                         PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v164 = COERCE_AS(__typeof__(v164),
                         PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v165 = COERCE_AS(__typeof__(v165),
                         PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v166 = COERCE_AS(__typeof__(v166),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v174 = COERCE_AS(__typeof__(v174),
                         PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v175 = COERCE_AS(__typeof__(v175),
                         PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v176 = COERCE_AS(__typeof__(v176),
                         PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v177 = COERCE_AS(__typeof__(v177),
                         PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v178 = COERCE_AS(__typeof__(v178),
                         PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v179 = COERCE_AS(__typeof__(v179),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  }
  v158[v157] = 0;
  if ((v197_.v197 & 1) != 0) {
    v160 = v197_.v199;
  }
  else {
    v160 = (char*)&v197_.v197 + 1;
  }
  if (v160 != nullptr) {
    snd_Fade_Fade_10c830_alt1((__int64)v202, 0x0.0p+0f),
        v136 = COERCE_AS(__typeof__(v136),
                         PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v137 = COERCE_AS(__typeof__(v137),
                         PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v138 = COERCE_AS(__typeof__(v138),
                         PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v139 = COERCE_AS(__typeof__(v139),
                         PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v140 = COERCE_AS(__typeof__(v140),
                         PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v141 = COERCE_AS(__typeof__(v141),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v148 = COERCE_AS(__typeof__(v148),
                         PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v149 = COERCE_AS(__typeof__(v149),
                         PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v150 = COERCE_AS(__typeof__(v150),
                         PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v151 = COERCE_AS(__typeof__(v151),
                         PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v152 = COERCE_AS(__typeof__(v152),
                         PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v153 = COERCE_AS(__typeof__(v153),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v161 = COERCE_AS(__typeof__(v161),
                         PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v162 = COERCE_AS(__typeof__(v162),
                         PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v163 = COERCE_AS(__typeof__(v163),
                         PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v164 = COERCE_AS(__typeof__(v164),
                         PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v165 = COERCE_AS(__typeof__(v165),
                         PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v166 = COERCE_AS(__typeof__(v166),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v174 = COERCE_AS(__typeof__(v174),
                         PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v175 = COERCE_AS(__typeof__(v175),
                         PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v176 = COERCE_AS(__typeof__(v176),
                         PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v177 = COERCE_AS(__typeof__(v177),
                         PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v178 = COERCE_AS(__typeof__(v178),
                         PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v179 = COERCE_AS(__typeof__(v179),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
    snd_play_ff2d0((__int64)v160, (__int64)v160, (__int64)v202, 0, 0x10001u, 0,
                   0x0.0p+0f, 0x1.0000000000000p+0f),
        v136 = COERCE_AS(__typeof__(v136),
                         PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v137 = COERCE_AS(__typeof__(v137),
                         PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v138 = COERCE_AS(__typeof__(v138),
                         PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v139 = COERCE_AS(__typeof__(v139),
                         PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v140 = COERCE_AS(__typeof__(v140),
                         PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v141 = COERCE_AS(__typeof__(v141),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v148 = COERCE_AS(__typeof__(v148),
                         PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v149 = COERCE_AS(__typeof__(v149),
                         PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v150 = COERCE_AS(__typeof__(v150),
                         PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v151 = COERCE_AS(__typeof__(v151),
                         PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v152 = COERCE_AS(__typeof__(v152),
                         PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v153 = COERCE_AS(__typeof__(v153),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v161 = COERCE_AS(__typeof__(v161),
                         PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v162 = COERCE_AS(__typeof__(v162),
                         PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v163 = COERCE_AS(__typeof__(v163),
                         PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v164 = COERCE_AS(__typeof__(v164),
                         PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v165 = COERCE_AS(__typeof__(v165),
                         PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v166 = COERCE_AS(__typeof__(v166),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v174 = COERCE_AS(__typeof__(v174),
                         PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v175 = COERCE_AS(__typeof__(v175),
                         PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v176 = COERCE_AS(__typeof__(v176),
                         PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v177 = COERCE_AS(__typeof__(v177),
                         PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v178 = COERCE_AS(__typeof__(v178),
                         PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v179 = COERCE_AS(__typeof__(v179),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
    snd_Fade_Destroy_Fade_alt1(v202),
        v136 = COERCE_AS(__typeof__(v136),
                         PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v137 = COERCE_AS(__typeof__(v137),
                         PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v138 = COERCE_AS(__typeof__(v138),
                         PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v139 = COERCE_AS(__typeof__(v139),
                         PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v140 = COERCE_AS(__typeof__(v140),
                         PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v141 = COERCE_AS(__typeof__(v141),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v148 = COERCE_AS(__typeof__(v148),
                         PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v149 = COERCE_AS(__typeof__(v149),
                         PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v150 = COERCE_AS(__typeof__(v150),
                         PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v151 = COERCE_AS(__typeof__(v151),
                         PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v152 = COERCE_AS(__typeof__(v152),
                         PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v153 = COERCE_AS(__typeof__(v153),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v161 = COERCE_AS(__typeof__(v161),
                         PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v162 = COERCE_AS(__typeof__(v162),
                         PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v163 = COERCE_AS(__typeof__(v163),
                         PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v164 = COERCE_AS(__typeof__(v164),
                         PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v165 = COERCE_AS(__typeof__(v165),
                         PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v166 = COERCE_AS(__typeof__(v166),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v174 = COERCE_AS(__typeof__(v174),
                         PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v175 = COERCE_AS(__typeof__(v175),
                         PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v176 = COERCE_AS(__typeof__(v176),
                         PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v177 = COERCE_AS(__typeof__(v177),
                         PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v178 = COERCE_AS(__typeof__(v178),
                         PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v179 = COERCE_AS(__typeof__(v179),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  }
  else {
    v200_.v200 = 0;
    v200_.v201 = 0x2000;
  }
  GameRoutine_112180(a1 + 48, (__int64)&v200_.v200),
      v136 = COERCE_AS(__typeof__(v136),
                       PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v137 = COERCE_AS(__typeof__(v137),
                       PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v138 = COERCE_AS(__typeof__(v138),
                       PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v139 = COERCE_AS(__typeof__(v139),
                       PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v140 = COERCE_AS(__typeof__(v140),
                       PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v141 = COERCE_AS(__typeof__(v141),
                       PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
      v148 = COERCE_AS(__typeof__(v148),
                       PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v149 = COERCE_AS(__typeof__(v149),
                       PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v150 = COERCE_AS(__typeof__(v150),
                       PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v151 = COERCE_AS(__typeof__(v151),
                       PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v152 = COERCE_AS(__typeof__(v152),
                       PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v153 = COERCE_AS(__typeof__(v153),
                       PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
      v161 = COERCE_AS(__typeof__(v161),
                       PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v162 = COERCE_AS(__typeof__(v162),
                       PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v163 = COERCE_AS(__typeof__(v163),
                       PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v164 = COERCE_AS(__typeof__(v164),
                       PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v165 = COERCE_AS(__typeof__(v165),
                       PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v166 = COERCE_AS(__typeof__(v166),
                       PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
      v174 = COERCE_AS(__typeof__(v174),
                       PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v175 = COERCE_AS(__typeof__(v175),
                       PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v176 = COERCE_AS(__typeof__(v176),
                       PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v177 = COERCE_AS(__typeof__(v177),
                       PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v178 = COERCE_AS(__typeof__(v178),
                       PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v179 = COERCE_AS(__typeof__(v179),
                       PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  if ((v197_.v197 & 1) != 0 && v197_.v199 != nullptr) {
    v167 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v167 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                  v167),
        v136 = COERCE_AS(__typeof__(v136),
                         PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v137 = COERCE_AS(__typeof__(v137),
                         PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v138 = COERCE_AS(__typeof__(v138),
                         PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v139 = COERCE_AS(__typeof__(v139),
                         PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v140 = COERCE_AS(__typeof__(v140),
                         PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v141 = COERCE_AS(__typeof__(v141),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v148 = COERCE_AS(__typeof__(v148),
                         PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v149 = COERCE_AS(__typeof__(v149),
                         PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v150 = COERCE_AS(__typeof__(v150),
                         PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v151 = COERCE_AS(__typeof__(v151),
                         PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v152 = COERCE_AS(__typeof__(v152),
                         PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v153 = COERCE_AS(__typeof__(v153),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v161 = COERCE_AS(__typeof__(v161),
                         PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v162 = COERCE_AS(__typeof__(v162),
                         PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v163 = COERCE_AS(__typeof__(v163),
                         PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v164 = COERCE_AS(__typeof__(v164),
                         PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v165 = COERCE_AS(__typeof__(v165),
                         PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v166 = COERCE_AS(__typeof__(v166),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v174 = COERCE_AS(__typeof__(v174),
                         PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v175 = COERCE_AS(__typeof__(v175),
                         PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v176 = COERCE_AS(__typeof__(v176),
                         PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v177 = COERCE_AS(__typeof__(v177),
                         PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v178 = COERCE_AS(__typeof__(v178),
                         PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v179 = COERCE_AS(__typeof__(v179),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  }
  v168 = game_util_Format((__int64)"SE_EFF_Dng_Round%d_lp", 3, v161, v162, v163,
                          v164, v165, v166, v192),
  v136 = COERCE_AS(__typeof__(v136),
                   PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
  v137 = COERCE_AS(__typeof__(v137),
                   PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v138 = COERCE_AS(__typeof__(v138),
                   PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
  v139 = COERCE_AS(__typeof__(v139),
                   PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
  v140 = COERCE_AS(__typeof__(v140),
                   PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
  v141 = COERCE_AS(__typeof__(v141),
                   PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
  v148 = COERCE_AS(__typeof__(v148),
                   PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
  v149 = COERCE_AS(__typeof__(v149),
                   PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v150 = COERCE_AS(__typeof__(v150),
                   PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
  v151 = COERCE_AS(__typeof__(v151),
                   PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
  v152 = COERCE_AS(__typeof__(v152),
                   PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
  v153 = COERCE_AS(__typeof__(v153),
                   PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
  v161 = COERCE_AS(__typeof__(v161),
                   PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
  v162 = COERCE_AS(__typeof__(v162),
                   PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v163 = COERCE_AS(__typeof__(v163),
                   PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
  v164 = COERCE_AS(__typeof__(v164),
                   PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
  v165 = COERCE_AS(__typeof__(v165),
                   PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
  v166 = COERCE_AS(__typeof__(v166),
                   PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
  v174 = COERCE_AS(__typeof__(v174),
                   PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
  v175 = COERCE_AS(__typeof__(v175),
                   PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v176 = COERCE_AS(__typeof__(v176),
                   PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
  v177 = COERCE_AS(__typeof__(v177),
                   PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
  v178 = COERCE_AS(__typeof__(v178),
                   PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
  v179 = COERCE_AS(__typeof__(v179),
                   PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  v169 = strlen(v168),
  v136 = COERCE_AS(__typeof__(v136),
                   PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
  v137 = COERCE_AS(__typeof__(v137),
                   PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v138 = COERCE_AS(__typeof__(v138),
                   PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
  v139 = COERCE_AS(__typeof__(v139),
                   PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
  v140 = COERCE_AS(__typeof__(v140),
                   PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
  v141 = COERCE_AS(__typeof__(v141),
                   PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
  v148 = COERCE_AS(__typeof__(v148),
                   PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
  v149 = COERCE_AS(__typeof__(v149),
                   PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v150 = COERCE_AS(__typeof__(v150),
                   PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
  v151 = COERCE_AS(__typeof__(v151),
                   PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
  v152 = COERCE_AS(__typeof__(v152),
                   PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
  v153 = COERCE_AS(__typeof__(v153),
                   PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
  v161 = COERCE_AS(__typeof__(v161),
                   PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
  v162 = COERCE_AS(__typeof__(v162),
                   PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v163 = COERCE_AS(__typeof__(v163),
                   PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
  v164 = COERCE_AS(__typeof__(v164),
                   PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
  v165 = COERCE_AS(__typeof__(v165),
                   PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
  v166 = COERCE_AS(__typeof__(v166),
                   PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
  v174 = COERCE_AS(__typeof__(v174),
                   PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
  v175 = COERCE_AS(__typeof__(v175),
                   PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v176 = COERCE_AS(__typeof__(v176),
                   PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
  v177 = COERCE_AS(__typeof__(v177),
                   PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
  v178 = COERCE_AS(__typeof__(v178),
                   PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
  v179 = COERCE_AS(__typeof__(v179),
                   PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  if (v169 > 0xFFFFFFFFFFFFFFF6LL) {
    goto LABEL_281;
  }
  v170 = v169;
  if (v169 >= 0x17) {
    if ((v169 | 7) == 0x17) {
      v172 = 26;
    }
    else {
      v172 = (v169 | 7) + 1;
    }
    v171 = (char*)fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v172,
                                                 16, 0),
    v136 = COERCE_AS(__typeof__(v136),
                     PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
    v137 = COERCE_AS(__typeof__(v137),
                     PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
    v138 = COERCE_AS(__typeof__(v138),
                     PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
    v139 = COERCE_AS(__typeof__(v139),
                     PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
    v140 = COERCE_AS(__typeof__(v140),
                     PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
    v141 = COERCE_AS(__typeof__(v141),
                     PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
    v148 = COERCE_AS(__typeof__(v148),
                     PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
    v149 = COERCE_AS(__typeof__(v149),
                     PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
    v150 = COERCE_AS(__typeof__(v150),
                     PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
    v151 = COERCE_AS(__typeof__(v151),
                     PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
    v152 = COERCE_AS(__typeof__(v152),
                     PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
    v153 = COERCE_AS(__typeof__(v153),
                     PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
    v161 = COERCE_AS(__typeof__(v161),
                     PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
    v162 = COERCE_AS(__typeof__(v162),
                     PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
    v163 = COERCE_AS(__typeof__(v163),
                     PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
    v164 = COERCE_AS(__typeof__(v164),
                     PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
    v165 = COERCE_AS(__typeof__(v165),
                     PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
    v166 = COERCE_AS(__typeof__(v166),
                     PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
    v174 = COERCE_AS(__typeof__(v174),
                     PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
    v175 = COERCE_AS(__typeof__(v175),
                     PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
    v176 = COERCE_AS(__typeof__(v176),
                     PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
    v177 = COERCE_AS(__typeof__(v177),
                     PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
    v178 = COERCE_AS(__typeof__(v178),
                     PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
    v179 = COERCE_AS(__typeof__(v179),
                     PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
    v197_.v198 = v170;
    v197_.v199 = v171;
    v197_.v197 = v172 | 1;
    goto LABEL_243;
  }
  v171 = (char*)&v197_.v197 + 1;
  LOBYTE(v197_.v197) = 2 * v169;
  if (v169 != 0) {
  LABEL_243:
    memmove(v171, v168, v170),
        v136 = COERCE_AS(__typeof__(v136),
                         PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v137 = COERCE_AS(__typeof__(v137),
                         PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v138 = COERCE_AS(__typeof__(v138),
                         PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v139 = COERCE_AS(__typeof__(v139),
                         PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v140 = COERCE_AS(__typeof__(v140),
                         PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v141 = COERCE_AS(__typeof__(v141),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v148 = COERCE_AS(__typeof__(v148),
                         PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v149 = COERCE_AS(__typeof__(v149),
                         PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v150 = COERCE_AS(__typeof__(v150),
                         PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v151 = COERCE_AS(__typeof__(v151),
                         PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v152 = COERCE_AS(__typeof__(v152),
                         PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v153 = COERCE_AS(__typeof__(v153),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v161 = COERCE_AS(__typeof__(v161),
                         PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v162 = COERCE_AS(__typeof__(v162),
                         PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v163 = COERCE_AS(__typeof__(v163),
                         PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v164 = COERCE_AS(__typeof__(v164),
                         PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v165 = COERCE_AS(__typeof__(v165),
                         PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v166 = COERCE_AS(__typeof__(v166),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v174 = COERCE_AS(__typeof__(v174),
                         PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v175 = COERCE_AS(__typeof__(v175),
                         PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v176 = COERCE_AS(__typeof__(v176),
                         PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v177 = COERCE_AS(__typeof__(v177),
                         PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v178 = COERCE_AS(__typeof__(v178),
                         PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v179 = COERCE_AS(__typeof__(v179),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  }
  v171[v170] = 0;
  if ((v197_.v197 & 1) != 0) {
    v173 = v197_.v199;
  }
  else {
    v173 = (char*)&v197_.v197 + 1;
  }
  if (v173 != nullptr) {
    snd_Fade_Fade_10c830_alt1((__int64)v202, 0x0.0p+0f),
        v136 = COERCE_AS(__typeof__(v136),
                         PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v137 = COERCE_AS(__typeof__(v137),
                         PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v138 = COERCE_AS(__typeof__(v138),
                         PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v139 = COERCE_AS(__typeof__(v139),
                         PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v140 = COERCE_AS(__typeof__(v140),
                         PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v141 = COERCE_AS(__typeof__(v141),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v148 = COERCE_AS(__typeof__(v148),
                         PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v149 = COERCE_AS(__typeof__(v149),
                         PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v150 = COERCE_AS(__typeof__(v150),
                         PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v151 = COERCE_AS(__typeof__(v151),
                         PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v152 = COERCE_AS(__typeof__(v152),
                         PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v153 = COERCE_AS(__typeof__(v153),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v161 = COERCE_AS(__typeof__(v161),
                         PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v162 = COERCE_AS(__typeof__(v162),
                         PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v163 = COERCE_AS(__typeof__(v163),
                         PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v164 = COERCE_AS(__typeof__(v164),
                         PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v165 = COERCE_AS(__typeof__(v165),
                         PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v166 = COERCE_AS(__typeof__(v166),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v174 = COERCE_AS(__typeof__(v174),
                         PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v175 = COERCE_AS(__typeof__(v175),
                         PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v176 = COERCE_AS(__typeof__(v176),
                         PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v177 = COERCE_AS(__typeof__(v177),
                         PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v178 = COERCE_AS(__typeof__(v178),
                         PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v179 = COERCE_AS(__typeof__(v179),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
    snd_play_ff2d0((__int64)v173, (__int64)v173, (__int64)v202, 0, 0x10001u, 0,
                   0x0.0p+0f, 0x1.0000000000000p+0f),
        v136 = COERCE_AS(__typeof__(v136),
                         PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v137 = COERCE_AS(__typeof__(v137),
                         PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v138 = COERCE_AS(__typeof__(v138),
                         PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v139 = COERCE_AS(__typeof__(v139),
                         PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v140 = COERCE_AS(__typeof__(v140),
                         PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v141 = COERCE_AS(__typeof__(v141),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v148 = COERCE_AS(__typeof__(v148),
                         PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v149 = COERCE_AS(__typeof__(v149),
                         PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v150 = COERCE_AS(__typeof__(v150),
                         PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v151 = COERCE_AS(__typeof__(v151),
                         PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v152 = COERCE_AS(__typeof__(v152),
                         PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v153 = COERCE_AS(__typeof__(v153),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v161 = COERCE_AS(__typeof__(v161),
                         PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v162 = COERCE_AS(__typeof__(v162),
                         PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v163 = COERCE_AS(__typeof__(v163),
                         PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v164 = COERCE_AS(__typeof__(v164),
                         PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v165 = COERCE_AS(__typeof__(v165),
                         PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v166 = COERCE_AS(__typeof__(v166),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v174 = COERCE_AS(__typeof__(v174),
                         PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v175 = COERCE_AS(__typeof__(v175),
                         PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v176 = COERCE_AS(__typeof__(v176),
                         PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v177 = COERCE_AS(__typeof__(v177),
                         PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v178 = COERCE_AS(__typeof__(v178),
                         PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v179 = COERCE_AS(__typeof__(v179),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
    snd_Fade_Destroy_Fade_alt1(v202),
        v136 = COERCE_AS(__typeof__(v136),
                         PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v137 = COERCE_AS(__typeof__(v137),
                         PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v138 = COERCE_AS(__typeof__(v138),
                         PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v139 = COERCE_AS(__typeof__(v139),
                         PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v140 = COERCE_AS(__typeof__(v140),
                         PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v141 = COERCE_AS(__typeof__(v141),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v148 = COERCE_AS(__typeof__(v148),
                         PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v149 = COERCE_AS(__typeof__(v149),
                         PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v150 = COERCE_AS(__typeof__(v150),
                         PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v151 = COERCE_AS(__typeof__(v151),
                         PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v152 = COERCE_AS(__typeof__(v152),
                         PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v153 = COERCE_AS(__typeof__(v153),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v161 = COERCE_AS(__typeof__(v161),
                         PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v162 = COERCE_AS(__typeof__(v162),
                         PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v163 = COERCE_AS(__typeof__(v163),
                         PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v164 = COERCE_AS(__typeof__(v164),
                         PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v165 = COERCE_AS(__typeof__(v165),
                         PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v166 = COERCE_AS(__typeof__(v166),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v174 = COERCE_AS(__typeof__(v174),
                         PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v175 = COERCE_AS(__typeof__(v175),
                         PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v176 = COERCE_AS(__typeof__(v176),
                         PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v177 = COERCE_AS(__typeof__(v177),
                         PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v178 = COERCE_AS(__typeof__(v178),
                         PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v179 = COERCE_AS(__typeof__(v179),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  }
  else {
    v200_.v200 = 0;
    v200_.v201 = 0x2000;
  }
  GameRoutine_112180(a1 + 72, (__int64)&v200_.v200),
      v136 = COERCE_AS(__typeof__(v136),
                       PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v137 = COERCE_AS(__typeof__(v137),
                       PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v138 = COERCE_AS(__typeof__(v138),
                       PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v139 = COERCE_AS(__typeof__(v139),
                       PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v140 = COERCE_AS(__typeof__(v140),
                       PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v141 = COERCE_AS(__typeof__(v141),
                       PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
      v148 = COERCE_AS(__typeof__(v148),
                       PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v149 = COERCE_AS(__typeof__(v149),
                       PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v150 = COERCE_AS(__typeof__(v150),
                       PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v151 = COERCE_AS(__typeof__(v151),
                       PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v152 = COERCE_AS(__typeof__(v152),
                       PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v153 = COERCE_AS(__typeof__(v153),
                       PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
      v161 = COERCE_AS(__typeof__(v161),
                       PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v162 = COERCE_AS(__typeof__(v162),
                       PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v163 = COERCE_AS(__typeof__(v163),
                       PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v164 = COERCE_AS(__typeof__(v164),
                       PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v165 = COERCE_AS(__typeof__(v165),
                       PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v166 = COERCE_AS(__typeof__(v166),
                       PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
      v174 = COERCE_AS(__typeof__(v174),
                       PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v175 = COERCE_AS(__typeof__(v175),
                       PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v176 = COERCE_AS(__typeof__(v176),
                       PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v177 = COERCE_AS(__typeof__(v177),
                       PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v178 = COERCE_AS(__typeof__(v178),
                       PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v179 = COERCE_AS(__typeof__(v179),
                       PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  if ((v197_.v197 & 1) != 0 && v197_.v199 != nullptr) {
    v180 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v180 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                  v180),
        v136 = COERCE_AS(__typeof__(v136),
                         PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v137 = COERCE_AS(__typeof__(v137),
                         PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v138 = COERCE_AS(__typeof__(v138),
                         PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v139 = COERCE_AS(__typeof__(v139),
                         PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v140 = COERCE_AS(__typeof__(v140),
                         PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v141 = COERCE_AS(__typeof__(v141),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v148 = COERCE_AS(__typeof__(v148),
                         PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v149 = COERCE_AS(__typeof__(v149),
                         PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v150 = COERCE_AS(__typeof__(v150),
                         PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v151 = COERCE_AS(__typeof__(v151),
                         PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v152 = COERCE_AS(__typeof__(v152),
                         PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v153 = COERCE_AS(__typeof__(v153),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v161 = COERCE_AS(__typeof__(v161),
                         PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v162 = COERCE_AS(__typeof__(v162),
                         PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v163 = COERCE_AS(__typeof__(v163),
                         PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v164 = COERCE_AS(__typeof__(v164),
                         PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v165 = COERCE_AS(__typeof__(v165),
                         PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v166 = COERCE_AS(__typeof__(v166),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v174 = COERCE_AS(__typeof__(v174),
                         PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v175 = COERCE_AS(__typeof__(v175),
                         PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v176 = COERCE_AS(__typeof__(v176),
                         PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v177 = COERCE_AS(__typeof__(v177),
                         PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v178 = COERCE_AS(__typeof__(v178),
                         PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v179 = COERCE_AS(__typeof__(v179),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  }
  v181 = game_util_Format((__int64)"SE_EFF_Dng_Round%d_lp", 4, v174, v175, v176,
                          v177, v178, v179, v193),
  v136 = COERCE_AS(__typeof__(v136),
                   PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
  v137 = COERCE_AS(__typeof__(v137),
                   PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v138 = COERCE_AS(__typeof__(v138),
                   PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
  v139 = COERCE_AS(__typeof__(v139),
                   PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
  v140 = COERCE_AS(__typeof__(v140),
                   PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
  v141 = COERCE_AS(__typeof__(v141),
                   PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
  v148 = COERCE_AS(__typeof__(v148),
                   PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
  v149 = COERCE_AS(__typeof__(v149),
                   PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v150 = COERCE_AS(__typeof__(v150),
                   PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
  v151 = COERCE_AS(__typeof__(v151),
                   PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
  v152 = COERCE_AS(__typeof__(v152),
                   PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
  v153 = COERCE_AS(__typeof__(v153),
                   PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
  v161 = COERCE_AS(__typeof__(v161),
                   PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
  v162 = COERCE_AS(__typeof__(v162),
                   PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v163 = COERCE_AS(__typeof__(v163),
                   PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
  v164 = COERCE_AS(__typeof__(v164),
                   PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
  v165 = COERCE_AS(__typeof__(v165),
                   PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
  v166 = COERCE_AS(__typeof__(v166),
                   PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
  v174 = COERCE_AS(__typeof__(v174),
                   PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
  v175 = COERCE_AS(__typeof__(v175),
                   PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v176 = COERCE_AS(__typeof__(v176),
                   PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
  v177 = COERCE_AS(__typeof__(v177),
                   PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
  v178 = COERCE_AS(__typeof__(v178),
                   PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
  v179 = COERCE_AS(__typeof__(v179),
                   PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  v182 = strlen(v181),
  v136 = COERCE_AS(__typeof__(v136),
                   PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
  v137 = COERCE_AS(__typeof__(v137),
                   PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v138 = COERCE_AS(__typeof__(v138),
                   PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
  v139 = COERCE_AS(__typeof__(v139),
                   PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
  v140 = COERCE_AS(__typeof__(v140),
                   PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
  v141 = COERCE_AS(__typeof__(v141),
                   PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
  v148 = COERCE_AS(__typeof__(v148),
                   PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
  v149 = COERCE_AS(__typeof__(v149),
                   PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v150 = COERCE_AS(__typeof__(v150),
                   PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
  v151 = COERCE_AS(__typeof__(v151),
                   PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
  v152 = COERCE_AS(__typeof__(v152),
                   PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
  v153 = COERCE_AS(__typeof__(v153),
                   PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
  v161 = COERCE_AS(__typeof__(v161),
                   PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
  v162 = COERCE_AS(__typeof__(v162),
                   PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v163 = COERCE_AS(__typeof__(v163),
                   PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
  v164 = COERCE_AS(__typeof__(v164),
                   PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
  v165 = COERCE_AS(__typeof__(v165),
                   PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
  v166 = COERCE_AS(__typeof__(v166),
                   PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
  v174 = COERCE_AS(__typeof__(v174),
                   PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
  v175 = COERCE_AS(__typeof__(v175),
                   PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v176 = COERCE_AS(__typeof__(v176),
                   PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
  v177 = COERCE_AS(__typeof__(v177),
                   PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
  v178 = COERCE_AS(__typeof__(v178),
                   PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
  v179 = COERCE_AS(__typeof__(v179),
                   PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  if (v182 > 0xFFFFFFFFFFFFFFF6LL) {
    goto LABEL_281;
  }
  v183 = v182;
  if (v182 >= 0x17) {
    if ((v182 | 7) == 0x17) {
      v185 = 26;
    }
    else {
      v185 = (v182 | 7) + 1;
    }
    v184 = (char*)fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v185,
                                                 16, 0),
    v136 = COERCE_AS(__typeof__(v136),
                     PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
    v137 = COERCE_AS(__typeof__(v137),
                     PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
    v138 = COERCE_AS(__typeof__(v138),
                     PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
    v139 = COERCE_AS(__typeof__(v139),
                     PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
    v140 = COERCE_AS(__typeof__(v140),
                     PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
    v141 = COERCE_AS(__typeof__(v141),
                     PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
    v148 = COERCE_AS(__typeof__(v148),
                     PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
    v149 = COERCE_AS(__typeof__(v149),
                     PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
    v150 = COERCE_AS(__typeof__(v150),
                     PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
    v151 = COERCE_AS(__typeof__(v151),
                     PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
    v152 = COERCE_AS(__typeof__(v152),
                     PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
    v153 = COERCE_AS(__typeof__(v153),
                     PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
    v161 = COERCE_AS(__typeof__(v161),
                     PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
    v162 = COERCE_AS(__typeof__(v162),
                     PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
    v163 = COERCE_AS(__typeof__(v163),
                     PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
    v164 = COERCE_AS(__typeof__(v164),
                     PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
    v165 = COERCE_AS(__typeof__(v165),
                     PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
    v166 = COERCE_AS(__typeof__(v166),
                     PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
    v174 = COERCE_AS(__typeof__(v174),
                     PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
    v175 = COERCE_AS(__typeof__(v175),
                     PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
    v176 = COERCE_AS(__typeof__(v176),
                     PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
    v177 = COERCE_AS(__typeof__(v177),
                     PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
    v178 = COERCE_AS(__typeof__(v178),
                     PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
    v179 = COERCE_AS(__typeof__(v179),
                     PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
    v197_.v198 = v183;
    v197_.v199 = v184;
    v197_.v197 = v185 | 1;
  }
  else {
    v184 = (char*)&v197_.v197 + 1;
    LOBYTE(v197_.v197) = 2 * v182;
    if (v182 == 0) {
      goto LABEL_264;
    }
  }
  memmove(v184, v181, v183),
      v136 = COERCE_AS(__typeof__(v136),
                       PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v137 = COERCE_AS(__typeof__(v137),
                       PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v138 = COERCE_AS(__typeof__(v138),
                       PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v139 = COERCE_AS(__typeof__(v139),
                       PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v140 = COERCE_AS(__typeof__(v140),
                       PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v141 = COERCE_AS(__typeof__(v141),
                       PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
      v148 = COERCE_AS(__typeof__(v148),
                       PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v149 = COERCE_AS(__typeof__(v149),
                       PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v150 = COERCE_AS(__typeof__(v150),
                       PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v151 = COERCE_AS(__typeof__(v151),
                       PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v152 = COERCE_AS(__typeof__(v152),
                       PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v153 = COERCE_AS(__typeof__(v153),
                       PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
      v161 = COERCE_AS(__typeof__(v161),
                       PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v162 = COERCE_AS(__typeof__(v162),
                       PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v163 = COERCE_AS(__typeof__(v163),
                       PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v164 = COERCE_AS(__typeof__(v164),
                       PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v165 = COERCE_AS(__typeof__(v165),
                       PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v166 = COERCE_AS(__typeof__(v166),
                       PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
      v174 = COERCE_AS(__typeof__(v174),
                       PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v175 = COERCE_AS(__typeof__(v175),
                       PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v176 = COERCE_AS(__typeof__(v176),
                       PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v177 = COERCE_AS(__typeof__(v177),
                       PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v178 = COERCE_AS(__typeof__(v178),
                       PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v179 = COERCE_AS(__typeof__(v179),
                       PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
LABEL_264:
  v184[v183] = 0;
  if ((v197_.v197 & 1) != 0) {
    v186 = v197_.v199;
  }
  else {
    v186 = (char*)&v197_.v197 + 1;
  }
  if (v186 != nullptr) {
    snd_Fade_Fade_10c830_alt1((__int64)v202, 0x0.0p+0f),
        v136 = COERCE_AS(__typeof__(v136),
                         PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v137 = COERCE_AS(__typeof__(v137),
                         PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v138 = COERCE_AS(__typeof__(v138),
                         PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v139 = COERCE_AS(__typeof__(v139),
                         PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v140 = COERCE_AS(__typeof__(v140),
                         PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v141 = COERCE_AS(__typeof__(v141),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v148 = COERCE_AS(__typeof__(v148),
                         PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v149 = COERCE_AS(__typeof__(v149),
                         PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v150 = COERCE_AS(__typeof__(v150),
                         PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v151 = COERCE_AS(__typeof__(v151),
                         PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v152 = COERCE_AS(__typeof__(v152),
                         PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v153 = COERCE_AS(__typeof__(v153),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v161 = COERCE_AS(__typeof__(v161),
                         PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v162 = COERCE_AS(__typeof__(v162),
                         PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v163 = COERCE_AS(__typeof__(v163),
                         PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v164 = COERCE_AS(__typeof__(v164),
                         PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v165 = COERCE_AS(__typeof__(v165),
                         PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v166 = COERCE_AS(__typeof__(v166),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v174 = COERCE_AS(__typeof__(v174),
                         PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v175 = COERCE_AS(__typeof__(v175),
                         PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v176 = COERCE_AS(__typeof__(v176),
                         PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v177 = COERCE_AS(__typeof__(v177),
                         PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v178 = COERCE_AS(__typeof__(v178),
                         PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v179 = COERCE_AS(__typeof__(v179),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
    snd_play_ff2d0((__int64)v186, (__int64)v186, (__int64)v202, 0, 0x10001u, 0,
                   0x0.0p+0f, 0x1.0000000000000p+0f),
        v136 = COERCE_AS(__typeof__(v136),
                         PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v137 = COERCE_AS(__typeof__(v137),
                         PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v138 = COERCE_AS(__typeof__(v138),
                         PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v139 = COERCE_AS(__typeof__(v139),
                         PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v140 = COERCE_AS(__typeof__(v140),
                         PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v141 = COERCE_AS(__typeof__(v141),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v148 = COERCE_AS(__typeof__(v148),
                         PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v149 = COERCE_AS(__typeof__(v149),
                         PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v150 = COERCE_AS(__typeof__(v150),
                         PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v151 = COERCE_AS(__typeof__(v151),
                         PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v152 = COERCE_AS(__typeof__(v152),
                         PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v153 = COERCE_AS(__typeof__(v153),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v161 = COERCE_AS(__typeof__(v161),
                         PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v162 = COERCE_AS(__typeof__(v162),
                         PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v163 = COERCE_AS(__typeof__(v163),
                         PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v164 = COERCE_AS(__typeof__(v164),
                         PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v165 = COERCE_AS(__typeof__(v165),
                         PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v166 = COERCE_AS(__typeof__(v166),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v174 = COERCE_AS(__typeof__(v174),
                         PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v175 = COERCE_AS(__typeof__(v175),
                         PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v176 = COERCE_AS(__typeof__(v176),
                         PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v177 = COERCE_AS(__typeof__(v177),
                         PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v178 = COERCE_AS(__typeof__(v178),
                         PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v179 = COERCE_AS(__typeof__(v179),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
    snd_Fade_Destroy_Fade_alt1(v202),
        v136 = COERCE_AS(__typeof__(v136),
                         PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v137 = COERCE_AS(__typeof__(v137),
                         PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v138 = COERCE_AS(__typeof__(v138),
                         PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v139 = COERCE_AS(__typeof__(v139),
                         PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v140 = COERCE_AS(__typeof__(v140),
                         PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v141 = COERCE_AS(__typeof__(v141),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v148 = COERCE_AS(__typeof__(v148),
                         PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v149 = COERCE_AS(__typeof__(v149),
                         PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v150 = COERCE_AS(__typeof__(v150),
                         PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v151 = COERCE_AS(__typeof__(v151),
                         PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v152 = COERCE_AS(__typeof__(v152),
                         PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v153 = COERCE_AS(__typeof__(v153),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v161 = COERCE_AS(__typeof__(v161),
                         PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v162 = COERCE_AS(__typeof__(v162),
                         PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v163 = COERCE_AS(__typeof__(v163),
                         PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v164 = COERCE_AS(__typeof__(v164),
                         PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v165 = COERCE_AS(__typeof__(v165),
                         PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v166 = COERCE_AS(__typeof__(v166),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v174 = COERCE_AS(__typeof__(v174),
                         PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v175 = COERCE_AS(__typeof__(v175),
                         PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v176 = COERCE_AS(__typeof__(v176),
                         PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v177 = COERCE_AS(__typeof__(v177),
                         PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v178 = COERCE_AS(__typeof__(v178),
                         PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v179 = COERCE_AS(__typeof__(v179),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  }
  else {
    v200_.v200 = 0;
    v200_.v201 = 0x2000;
  }
  GameRoutine_112180(a1 + 96, (__int64)&v200_.v200),
      v136 = COERCE_AS(__typeof__(v136),
                       PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v137 = COERCE_AS(__typeof__(v137),
                       PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v138 = COERCE_AS(__typeof__(v138),
                       PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v139 = COERCE_AS(__typeof__(v139),
                       PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v140 = COERCE_AS(__typeof__(v140),
                       PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v141 = COERCE_AS(__typeof__(v141),
                       PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
      v148 = COERCE_AS(__typeof__(v148),
                       PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v149 = COERCE_AS(__typeof__(v149),
                       PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v150 = COERCE_AS(__typeof__(v150),
                       PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v151 = COERCE_AS(__typeof__(v151),
                       PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v152 = COERCE_AS(__typeof__(v152),
                       PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v153 = COERCE_AS(__typeof__(v153),
                       PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
      v161 = COERCE_AS(__typeof__(v161),
                       PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v162 = COERCE_AS(__typeof__(v162),
                       PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v163 = COERCE_AS(__typeof__(v163),
                       PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v164 = COERCE_AS(__typeof__(v164),
                       PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v165 = COERCE_AS(__typeof__(v165),
                       PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v166 = COERCE_AS(__typeof__(v166),
                       PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
      v174 = COERCE_AS(__typeof__(v174),
                       PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v175 = COERCE_AS(__typeof__(v175),
                       PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v176 = COERCE_AS(__typeof__(v176),
                       PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v177 = COERCE_AS(__typeof__(v177),
                       PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v178 = COERCE_AS(__typeof__(v178),
                       PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v179 = COERCE_AS(__typeof__(v179),
                       PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  if ((v197_.v197 & 1) != 0 && v197_.v199 != nullptr) {
    v187 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v187 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                  v187),
        v136 = COERCE_AS(__typeof__(v136),
                         PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v137 = COERCE_AS(__typeof__(v137),
                         PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v138 = COERCE_AS(__typeof__(v138),
                         PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v139 = COERCE_AS(__typeof__(v139),
                         PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v140 = COERCE_AS(__typeof__(v140),
                         PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v141 = COERCE_AS(__typeof__(v141),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v148 = COERCE_AS(__typeof__(v148),
                         PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v149 = COERCE_AS(__typeof__(v149),
                         PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v150 = COERCE_AS(__typeof__(v150),
                         PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v151 = COERCE_AS(__typeof__(v151),
                         PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v152 = COERCE_AS(__typeof__(v152),
                         PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v153 = COERCE_AS(__typeof__(v153),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v161 = COERCE_AS(__typeof__(v161),
                         PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v162 = COERCE_AS(__typeof__(v162),
                         PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v163 = COERCE_AS(__typeof__(v163),
                         PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v164 = COERCE_AS(__typeof__(v164),
                         PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v165 = COERCE_AS(__typeof__(v165),
                         PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v166 = COERCE_AS(__typeof__(v166),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v174 = COERCE_AS(__typeof__(v174),
                         PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v175 = COERCE_AS(__typeof__(v175),
                         PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v176 = COERCE_AS(__typeof__(v176),
                         PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v177 = COERCE_AS(__typeof__(v177),
                         PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v178 = COERCE_AS(__typeof__(v178),
                         PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v179 = COERCE_AS(__typeof__(v179),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  }
  v23 = v194_.v194;
  v135 = 0x1.f400000000000p+9f;
LABEL_276:
  result = game_hub_fa1b40((float*)a1, v135),
  v136 = COERCE_AS(__typeof__(v136),
                   PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
  v137 = COERCE_AS(__typeof__(v137),
                   PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v138 = COERCE_AS(__typeof__(v138),
                   PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
  v139 = COERCE_AS(__typeof__(v139),
                   PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
  v140 = COERCE_AS(__typeof__(v140),
                   PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
  v141 = COERCE_AS(__typeof__(v141),
                   PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
  v148 = COERCE_AS(__typeof__(v148),
                   PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
  v149 = COERCE_AS(__typeof__(v149),
                   PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v150 = COERCE_AS(__typeof__(v150),
                   PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
  v151 = COERCE_AS(__typeof__(v151),
                   PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
  v152 = COERCE_AS(__typeof__(v152),
                   PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
  v153 = COERCE_AS(__typeof__(v153),
                   PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
  v161 = COERCE_AS(__typeof__(v161),
                   PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
  v162 = COERCE_AS(__typeof__(v162),
                   PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v163 = COERCE_AS(__typeof__(v163),
                   PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
  v164 = COERCE_AS(__typeof__(v164),
                   PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
  v165 = COERCE_AS(__typeof__(v165),
                   PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
  v166 = COERCE_AS(__typeof__(v166),
                   PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
  v174 = COERCE_AS(__typeof__(v174),
                   PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
  v175 = COERCE_AS(__typeof__(v175),
                   PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v176 = COERCE_AS(__typeof__(v176),
                   PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
  v177 = COERCE_AS(__typeof__(v177),
                   PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
  v178 = COERCE_AS(__typeof__(v178),
                   PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
  v179 = COERCE_AS(__typeof__(v179),
                   PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  if (v23 != nullptr) {
    v189 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v189 = 56;
    }
    return nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v189);
  }
  return result;
}

#pragma GCC visibility pop
