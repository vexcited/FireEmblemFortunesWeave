#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_10a9ec0(_QWORD, long double);
__int64 GameRoutine_10ea2a0(long double, long double);
__int64 GameRoutine_658c00(_QWORD);
__int64 GameRoutine_e5d5a0(_QWORD, _QWORD);
__int64 game_ProcInst_Unregister(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
__n128 GameRoutine_1098db0(__int64);
__n128 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64 (*game_ProcInst_vtable[])();
extern __int64 (*game_combat_MagicInst_vtable[])();
extern __int64 GameData_212d270;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64* GameData_212d448[9];
__int64 MagicInst_Destructor(__int64 a1, __n128 a2);
void game_combat_MagicInst_MagicInst_lambda0_Invoke_alt1(
    __int64 a1, long double a2,
    long double a3) __asm__("game_combat_MagicInst_MagicInst_lambda0_Invoke");
_BYTE* game_character_1077790(_BYTE* result);
_QWORD* GameRoutine_18c4dd0(_QWORD* result, __int64, int, int);
_QWORD* Signal_d30dc0(__int64, __int64, __int64, int);
__attribute__((swiftcall)) void GameRoutine_10691b0(PSEUDO_X8, __int64 result);
__attribute__((swiftcall)) void game_character_10b49e0(PSEUDO_X8,
                                                       __int64 result, _BYTE*);
__int64* CharacterAnimator_107a7e0(__int64);
__int64 CharacterAppearance_10743e0(__int64);
__int64 EveryFrameProc_10aa5e0(__int64, __int64, float);
__int64 GameRoutine_1105480(__int64);
__int64 Signal_d30a60(int*, __int64, __int64, __int64);
__int64 __cxa_guard_acquire(_QWORD);
__int64 __cxa_guard_release(_QWORD);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 game_ProcInst_Register(__int64);
__int64 wld_Crc32(int, unsigned __int8*, unsigned __int64);
__n128 GameRoutine_18c66b0(__int64, int*);
char* GameRoutine_10aa900(char**, __int64*);
extern _UNKNOWN* GameData_212c2f8;
extern _UNKNOWN* GameData_212c558;
extern _UNKNOWN* GameData_212deb8;
extern _UNKNOWN GameData_21a5680;
extern __int128 GameData_1a83090;
extern __int128 GameData_1a831e0;
extern __int128 GameData_21a5670;
extern __int64 (*GameData_20083e0[])();
extern __int64 (*GameData_2008460[])();
extern __int64 (*GameData_20084e0[])();
extern __int64* GameData_212d570[7];
extern __int64* GameData_212ecb8[7];
extern __int64* GameData_212fe80;
extern __int64* GameData_212ff98[9];
extern __int64 GameData_212c608[2];
extern __int64 GameData_212d4f0[2];
extern __int64 GameData_21ec7b0;
extern __int64 GameData_21ed098;
extern __int64 GameData_2235e30;
extern int* GameData_212deb0;
float GameRoutine_10d4920(long double);
float32x4_t* MagicInst_10a3950_alt1(float32x4_t* result, float32x4_t*,
                                    float32x4_t*) __asm__("MagicInst_10a3950");
float32x4_t* game_d39920(float32x4_t* result);
float32x4_t GameRoutine_10a3bd0(float32x4_t*);
unsigned __int64 GameRoutine_d2b5f0(__int64);
void game_combat_MagicInst_MagicInst(__int64 a1, __int64 a2);
float game_combat_MagicInst_MagicInst_lambda2_Invoke(__int64 a1);
float32x4_t MagicInst_10a3950(float32x4_t* result, float32x4_t* a2,
                              float32x4_t* a3);
float32x4_t MagicInst_10a3ae0(__int64 result, float32x4_t a2);
__attribute__((swiftcall)) void MagicInst_10a43c0(PSEUDO_X8 x8_, int a1,
                                                  float32x4_t* a2,
                                                  float32x4_t* a3, int a4,
                                                  float a6, float a7);
__attribute__((swiftcall)) void MagicInst_10a4bf0(PSEUDO_X8 x8_, int8x16_t* a1,
                                                  double unused_float0,
                                                  int32x4_t a3);
void MagicInst_10a4d70(unsigned int* a1);
__n128 MagicInst_10a4fe0(__int64 a1, int a2);
_QWORD* GameHr_e5d5a0(__int64*, _QWORD*);
__attribute__((swiftcall)) void game_10ea2a0(PSEUDO_X8, _QWORD* result, int,
                                             __int64, float);
__int64 std___1___shared_weak_count___release_weak_alt1(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void game_combat_MagicInst_MagicInst_lambda0_Invoke(__int64 a1);
_QWORD* Signal_d30dc0_alt1(__int64, const char*, __int64,
                           int) __asm__("Signal_d30dc0");
__int64
CharacterAnimator_107a7e0_alt1(__int64) __asm__("CharacterAnimator_107a7e0");
__int64 GameRoutine_10b5e70(__int64 result, int, long double);
float game_character_CharacterAim_Start(__int64, _DWORD*, float);
void game_combat_MagicInst_MagicInst_lambda1_Invoke(__int64 a1, int8x16_t** a2,
                                                    long double a3);

void game_combat_MagicInst_MagicInst(__int64 a1, __int64 a2)
{

#pragma clang fp contract(off)
  __int64 v2;
  __int64 v5;
  __int64 v6;
  atomic_uchar* v7;
  int* v8;
  __int64 v9;
  __int64 v10;
  int v11;
  _QWORD* v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  int v17;
  _QWORD* v18;
  __int64 v19;
  int v20;
  __int64 v21;
  __int64 v22;
  char v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64* v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64* v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  unsigned __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  unsigned __int64 v43;
  __int64 v44;
  __int64* v45;
  __int64* v46;
  __int64 v47;
  __int64 v48;
  bool v49;
  __int64 v50;
  bool v51;
  __int64* v52;
  __int64 v53;
  unsigned __int8* v54;
  unsigned __int64 v55;
  unsigned __int64 v56;
  unsigned __int8* v57;
  int v58;
  unsigned __int8* v59;
  int v60;
  int v61;
  int v62;
  __int64 v63;
  __int64 v64;
  unsigned __int64 v65;
  __int64 v66;
  int v67;
  _BYTE* v68;
  unsigned int v69;
  __int64 v70;
  __int64 v71;
  __int64 v72;
  unsigned int v73;
  unsigned int v74;
  __int64 v76;
  __int16 v77;
  __int64 v78;
  float v79;
  __int64 v80;
  __int64 v81;
  __int64 v82;
  unsigned __int64 v83;
  char v84;
  _BYTE* v85;
  _BYTE* v86;
  _BYTE* v87;
  __int64 v88;
  float32x4_t v89;
  char v90;
  _BYTE* v91;
  _BYTE* v92;
  _BYTE* v93;
  float32x4_t v94;
  int8x16_t v95;
  float32x4_t v96;
  float32x4_t v97;
  float32x4_t v98;
  __int64 v99;
  float v100;
  float v101;
  float v102;
  float v103;
  __int64 v104;
  unsigned __int64 v105;
  __int64 v106;
  int* v107;
  __int64 v108;
  float v109;
  float v110;
  unsigned __int8* v111;
  int v112;
  int v113;
  float v114;
  __int64 v115;
  unsigned __int64 v116;
  __int64 v117;
  int* v118;
  __int64 v119;
  float v120;
  float v121;
  unsigned __int8* v122;
  int v123;
  int v124;
  float v125;
  float v126;
  float v127;
  float v128;
  float v129;
  __int64 v130;
  unsigned __int64 v131;
  __int64 v132;
  int* v133;
  __int64 v134;
  float v135;
  float v136;
  unsigned __int8* v137;
  int v138;
  int v139;
  float v140;
  __int64 v141;
  unsigned __int64 v142;
  __int64 v143;
  int* v144;
  __int64 v145;
  float v146;
  float v147;
  unsigned __int8* v148;
  int v149;
  int v150;
  float v151;
  __int64 v152;
  unsigned __int64 v153;
  __int64 v154;
  float v155;
  float v156;
  int* v157;
  __int64 v158;
  float v159;
  float v160;
  unsigned __int8* v161;
  int v162;
  int v163;
  float v164;
  int v165;
  __int16 v166;
  bool v167;
  char v168;
  _BYTE* v169;
  int v170;
  float v171;
  char v172;
  _BYTE* v173;
  float v174;
  _BYTE* v175;
  __int64 v176;
  char v177;
  _BYTE* v178;
  _BYTE* v179;
  _BYTE* v180;
  float32x4_t v181;
  float32x4_t v182;
  __int64 v183;
  __int64 v184;
  __int64 v185;
  __int64 v186;
  int v187;
  __int64 v188;
  _QWORD* v189;
  long double v190;
  unsigned __int64 v191;
  unsigned __int64 v192;
  unsigned __int64 v193;
  unsigned __int64* v194;
  unsigned __int64 v195;
  char* v196;
  unsigned __int64 v197;
  __int64 v198;
  float v199;
  __int64 v200;
  __int64 v201;
  unsigned __int64 v202;
  __int64 v203;
  float* v204;
  long double v205;
  __int64 v206;
  unsigned __int64 v207;
  __int64 v208;
  int* i;
  __int64 v210;
  __int64 v211;
  __int64 v212;
  int v213;
  int v214;
  int v215;
  __int64* v216;
  float v217;
  float v218;
  float v219;
  __int64 v220;
  __int64 v221;
  __int64 v222;
  char* v223;
  unsigned __int64 v224;
  bool v225;
  __int64 v226;
  __int64 v227;
  __int64 v228;
  __int64 v229;
  __int64 v230;
  __int64 v231;
  __int64 v232;
  char* v233;
  unsigned __int64 v234;
  bool v235;
  __int64 v236;
  __int64 v237;
  __int64 v238;
  __int64 v239;
  float32x4_t v240;
  struct {
    float32x4_t v241;
    char gap32_[16];
    float32x4_t* v242;
  } v241_;
  float32x4_t v243;
  struct {
    float32x4_t v244;
    unsigned __int64 v245;
  } v244_;

  v190 = COERCE_AS(__typeof__(v190), PSEUDO_REGISTER(__n128, "v0", "=w"));
  v5 = GameData_212c608[0];
  *(_QWORD*)(a1 + 96) = 0;
  *(_QWORD*)(a1 + 104) = 0;
  *(_QWORD*)(a1 + 112) = 0;
  *(_QWORD*)(a1 + 120) = 0;
  *(_QWORD*)(a1 + 128) = 0;
  *(_WORD*)(a1 + 136) = 0;
  *(_QWORD*)(a1 + 16) = 0;
  *(_QWORD*)(a1 + 24) = "NULL";
  *(_QWORD*)(a1 + 138) = 0;
  *(_QWORD*)(a1 + 144) = 0;
  *(_QWORD*)(a1 + 32) = 0;
  *(_QWORD*)(a1 + 40) = 0;
  *(_QWORD*)(a1 + 48) = 0;
  *(_QWORD*)(a1 + 56) = 0;
  *(_QWORD*)(a1 + 64) = 0;
  *(_QWORD*)(a1 + 72) = 0;
  *(_QWORD*)(a1 + 80) = 0;
  *(_QWORD*)(a1 + 88) = 0;
  *(_QWORD*)a1 = v5 + 16;
  *(_QWORD*)(a1 + 8) = 0;
  game_ProcInst_Register(a1),
      v190 = COERCE_AS(__typeof__(v190), PSEUDO_REGISTER(__n128, "v0", "=w"));
  *(_QWORD*)(a1 + 152) = 0;
  *(_DWORD*)(a1 + 160) = 0;
  *(_QWORD*)a1 = game_combat_MagicInst_vtable;
  v6 = *(_QWORD*)(a2 + 8);
  v7 = (atomic_uchar*)GameData_212deb8;
  v8 = GameData_212deb0;
  if (v6 != 0) {
    if ((atomic_load_explicit((atomic_uchar* volatile)GameData_212deb8,
                              memory_order_acquire) &
         1) == 0 &&
        (unsigned int)__cxa_guard_acquire(GameData_212deb8) != 0) {
      *v8 = wld_Crc32(0, "CharacterBuilder", 0x10u),
      v190 = COERCE_AS(__typeof__(v190), PSEUDO_REGISTER(__n128, "v0", "=w"));
      __cxa_guard_release(GameData_212deb8),
          v190 =
              COERCE_AS(__typeof__(v190), PSEUDO_REGISTER(__n128, "v0", "=w"));
    }
    v9 = *(_QWORD*)(v6 + 512);
    v10 = v9;
    while (v10 != *(_QWORD*)(v6 + 504)) {
      v11 = *(_DWORD*)(v10 - 16);
      v10 -= 16;
      v9 -= 16;
      if (v11 == *v8) {
        if (*(_QWORD*)(v6 + 512) != v9) {
          v12 = *(_QWORD**)(v9 + 8);
          goto LABEL_9;
        }
        break;
      }
    }
    v12 = nullptr;
  LABEL_9:
    *(_QWORD*)(a1 + 168) = v12[76];
    v13 = v12[77];
    *(_QWORD*)(a1 + 176) = v13;
    if (v13 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v13 + 16), 1u,
                                memory_order_relaxed);
    }
    *(_QWORD*)(a1 + 184) = v12[78];
    v14 = *(_QWORD*)(a2 + 16);
    if (v14 != 0) {
      goto LABEL_12;
    }
  LABEL_23:
    *(_QWORD*)(a1 + 200) = 0;
    *(_QWORD*)(a1 + 208) = 0;
    *(_QWORD*)(a1 + 192) = 0;
    goto LABEL_24;
  }
  *(_QWORD*)(a1 + 176) = 0;
  *(_QWORD*)(a1 + 184) = 0;
  *(_QWORD*)(a1 + 168) = 0;
  v14 = *(_QWORD*)(a2 + 16);
  if (v14 == 0) {
    goto LABEL_23;
  }
LABEL_12:
  if ((atomic_load_explicit(v7, memory_order_acquire) & 1) == 0 &&
      (unsigned int)__cxa_guard_acquire(GameData_212deb8) != 0) {
    *v8 = wld_Crc32(0, "CharacterBuilder", 0x10u),
    v190 = COERCE_AS(__typeof__(v190), PSEUDO_REGISTER(__n128, "v0", "=w"));
    __cxa_guard_release(GameData_212deb8),
        v190 = COERCE_AS(__typeof__(v190), PSEUDO_REGISTER(__n128, "v0", "=w"));
  }
  v15 = *(_QWORD*)(v14 + 512);
  v16 = v15;
  while (v16 != *(_QWORD*)(v14 + 504)) {
    v17 = *(_DWORD*)(v16 - 16);
    v16 -= 16;
    v15 -= 16;
    if (v17 == *v8) {
      if (*(_QWORD*)(v14 + 512) != v15) {
        v18 = *(_QWORD**)(v15 + 8);
        goto LABEL_19;
      }
      break;
    }
  }
  v18 = nullptr;
LABEL_19:
  *(_QWORD*)(a1 + 192) = v18[76];
  v19 = v18[77];
  *(_QWORD*)(a1 + 200) = v19;
  if (v19 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v19 + 16), 1u,
                              memory_order_relaxed);
  }
  *(_QWORD*)(a1 + 208) = v18[78];
LABEL_24:
  *(_QWORD*)(a1 + 216) = 0;
  *(_QWORD*)(a1 + 224) = *(_QWORD*)(a2 + 48);
  v20 = *(_DWORD*)a2;
  *(_QWORD*)(a1 + 236) = 0x7F7FFFFF7F7FFFFFLL;
  *(_DWORD*)(a1 + 304) = 0;
  *(_QWORD*)(a1 + 248) = 0;
  *(_QWORD*)(a1 + 256) = 0;
  *(_QWORD*)(a1 + 264) = 0;
  *(_QWORD*)(a1 + 272) = 0;
  *(_QWORD*)(a1 + 280) = 0;
  *(_QWORD*)(a1 + 288) = 0;
  *(_QWORD*)(a1 + 336) = 0;
  *(_QWORD*)(a1 + 344) = 0;
  *(_DWORD*)(a1 + 368) = 0;
  *(_DWORD*)(a1 + 420) = 0;
  *(_QWORD*)(a1 + 400) = 0;
  *(_QWORD*)(a1 + 408) = 0;
  *(_WORD*)(a1 + 416) = 0;
  *(_QWORD*)(a1 + 652) = 0;
  *(_DWORD*)(a1 + 660) = 0;
  *(_QWORD*)(a1 + 580) = 0;
  *(_QWORD*)(a1 + 588) = 0;
  *(_QWORD*)(a1 + 594) = 0;
  *(_QWORD*)(a1 + 604) = 0;
  *(_QWORD*)(a1 + 612) = 0;
  *(_QWORD*)(a1 + 618) = 0;
  *(_QWORD*)(a1 + 628) = 0;
  *(_QWORD*)(a1 + 636) = 0;
  *(_QWORD*)(a1 + 642) = 0;
  *(_QWORD*)(a1 + 556) = 0;
  *(_QWORD*)(a1 + 564) = 0;
  *(_QWORD*)(a1 + 570) = 0;
  v22 = *(_QWORD*)(a1 + 168);
  v21 = *(_QWORD*)(a1 + 176);
  *(_DWORD*)(a1 + 232) = v20;
  *(_QWORD*)(a1 + 320) = 0x3F80000041DE38E4LL;
  *(_OWORD*)(a1 + 352) = GameData_1a831e0;
  *(_DWORD*)(a1 + 424) = -1082130432;
  *(_QWORD*)(a1 + 428) = 0;
  *(_QWORD*)(a1 + 436) = 0;
  *(_QWORD*)(a1 + 444) = 0;
  *(_QWORD*)(a1 + 452) = 0;
  *(_QWORD*)(a1 + 460) = 0;
  *(_QWORD*)(a1 + 468) = 0;
  *(_QWORD*)(a1 + 476) = 0;
  *(_QWORD*)(a1 + 484) = 0;
  *(_QWORD*)(a1 + 492) = 0;
  *(_QWORD*)(a1 + 500) = 0;
  *(_QWORD*)(a1 + 508) = 0;
  *(_QWORD*)(a1 + 516) = 0;
  *(_QWORD*)(a1 + 524) = 0;
  *(_QWORD*)(a1 + 532) = 0;
  *(_QWORD*)(a1 + 540) = 0;
  *(_QWORD*)(a1 + 546) = 0;
  *(_OWORD*)(a1 + 384) = GameData_1a83090;
  v23 = *(_BYTE*)(a2 + 56);
  *(_QWORD*)(a1 + 664) = v22;
  *(_QWORD*)(a1 + 672) = v21;
  if (v21 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v21 + 16), 1u,
                              memory_order_relaxed);
  }
  v24 = *(_QWORD*)(a1 + 192);
  *(_QWORD*)(a1 + 680) = *(_QWORD*)(a1 + 184);
  v25 = *(_QWORD*)(a1 + 200);
  *(_QWORD*)(a1 + 688) = v24;
  *(_QWORD*)(a1 + 696) = v25;
  if (v25 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v25 + 16), 1u,
                              memory_order_relaxed);
  }
  v26 = *(_QWORD*)(a1 + 208);
  *(_BYTE*)(a1 + 712) = v23 ^ 1;
  *(_QWORD*)(a1 + 704) = v26;
  v27 = (__int64*)fw_memory_g_heap_manager_ptr;
  v28 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                       160, 16, 0),
  v190 = COERCE_AS(__typeof__(v190), PSEUDO_REGISTER(__n128, "v0", "=w"));
  v29 = v28 + 160;
  *(_QWORD*)(a1 + 720) = v28;
  *(_QWORD*)(a1 + 728) = v28;
  v30 = *v27;
  *(_BYTE*)(a1 + 784) = 0;
  *(_DWORD*)(a1 + 800) = 0;
  *(_QWORD*)(a1 + 808) = 0;
  *(_QWORD*)(a1 + 816) = 0;
  *(_QWORD*)(a1 + 824) = 0;
  *(_QWORD*)(a1 + 736) = v29;
  *(_QWORD*)(a1 + 752) = 0;
  *(_QWORD*)(a1 + 760) = 0;
  *(_BYTE*)(a1 + 768) = 0;
  *(_QWORD*)(a1 + 840) = 0;
  *(_QWORD*)(a1 + 848) = 0;
  *(_QWORD*)(a1 + 856) = 0;
  *(_QWORD*)(a1 + 864) = 0;
  *(_QWORD*)(a1 + 872) = 0;
  *(_QWORD*)(a1 + 880) = 0;
  *(_QWORD*)(a1 + 896) = 0;
  *(_QWORD*)(a1 + 904) = 0;
  *(_QWORD*)(a1 + 912) = 0;
  *(_QWORD*)(a1 + 920) = 0;
  *(_QWORD*)(a1 + 928) = 0;
  *(_QWORD*)(a1 + 936) = 0;
  v31 = fw_memory_HeapManager_Allocate(v30, 32, 16, 0),
  v190 = COERCE_AS(__typeof__(v190), PSEUDO_REGISTER(__n128, "v0", "=w"));
  v32 = GameData_212fe80;
  *(_QWORD*)(a1 + 952) = v31;
  *(_QWORD*)(a1 + 968) = v31;
  *(_QWORD*)v31 = v32 + 2;
  *(_QWORD*)(v31 + 8) = 0;
  *(_DWORD*)(v31 + 24) = 0;
  *(_QWORD*)(v31 + 16) = 0;
  *(_QWORD*)(a1 + 944) = v31 + 24;
  *(_QWORD*)(a1 + 960) = v31 + 24;
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v31 + 16), 1u,
                            memory_order_relaxed);
  *(_QWORD*)(a1 + 976) = a1;
  v33 = *(_QWORD*)(a1 + 176);
  if (v33 == 0 || *(_QWORD*)(v33 + 8) == -1 ||
      (v34 = *(_QWORD*)(a1 + 184)) == 0 || (v35 = *(_QWORD*)(a1 + 200)) == 0 ||
      *(_QWORD*)(v35 + 8) == -1 || *(_QWORD*)(a1 + 208) == 0) {
    *(_DWORD*)(a1 + 800) = 5;
    return;
  }
  v36 = *(_QWORD*)(*(_QWORD*)(v34 + 72) + 96LL);
  if (v36 != 0 && ((v37 = GameRoutine_d2b5f0(*(_QWORD*)(v36 + 32) + 72LL)) &
                   0x100000000LL) != 0) {
    v38 =
        *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v36 + 24) + 72LL) + 104LL * (int)v37);
  }
  else {
    v38 = 0;
  }
  *(_QWORD*)(a1 + 216) = v38;
  v39 = *(_QWORD*)(a1 + 184);
  v40 = *(_QWORD*)(v39 + 392);
  v41 = *(_QWORD*)(v39 + 400);
  if (v41 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v41 + 8), 1u,
                              memory_order_relaxed);
    if ((unsigned int)CharacterAppearance_10743e0(v40) == 2) {
      if (atomic_fetch_add((atomic_ullong* volatile)(v41 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v41 + 16LL))(v41),
            v190 = COERCE_AS(__typeof__(v190),
                             PSEUDO_REGISTER(__n128, "v0", "=w"));
        std___1___shared_weak_count___release_weak(v41),
            v190 = COERCE_AS(__typeof__(v190),
                             PSEUDO_REGISTER(__n128, "v0", "=w"));
      }
      goto LABEL_67;
    }
  }
  else if ((unsigned int)CharacterAppearance_10743e0(v40) == 2) {
  LABEL_67:
    *(_DWORD*)(a1 + 800) |= 0x2000u;
    goto LABEL_68;
  }
  v42 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 184) + 72LL) + 96LL);
  if (v42 != 0 &&
      ((v43 = GameRoutine_d2b5f0(*(_QWORD*)(v42 + 32) + 72LL)) &
       0x100000000LL) != 0 &&
      (v44 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v42 + 24) + 72LL) +
                        104LL * (int)v43 + 16)) != 0 &&
      (v45 = *(__int64**)(v44 + 80), v46 = *(__int64**)(v44 + 88),
       v45 != v46)) {
    while (1) {
      v47 = *v45;
      v48 = v45[1];
      if (v48 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v48 + 8), 1u,
                                  memory_order_relaxed);
      }
      if (*(float*)(v47 + 8) >= 0x0.0p+0f) {
        v50 = __dynamic_cast(v47, GameData_212d4f0[0], GameData_212ecb8[0], 0),
        v190 = COERCE_AS(__typeof__(v190), PSEUDO_REGISTER(__n128, "v0", "=w"));
        v49 = v50 == 0;
        if (v50 != 0) {
          v2 = v50;
        }
      }
      else {
        v49 = true;
      }
      if (v48 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v48 + 8),
                                       0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v48 + 16LL))(v48),
            v190 = COERCE_AS(__typeof__(v190),
                             PSEUDO_REGISTER(__n128, "v0", "=w"));
        std___1___shared_weak_count___release_weak(v48),
            v190 = COERCE_AS(__typeof__(v190),
                             PSEUDO_REGISTER(__n128, "v0", "=w"));
      }
      if (!v49) {
        break;
      }
      v45 += 2;
      if (v45 == v46) {
        v2 = 0;
        break;
      }
    }
    v51 = v2 == 0;
  }
  else {
    v51 = true;
  }
  if (v41 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v41 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v41 + 16LL))(v41),
        v190 = COERCE_AS(__typeof__(v190), PSEUDO_REGISTER(__n128, "v0", "=w"));
    std___1___shared_weak_count___release_weak(v41),
        v190 = COERCE_AS(__typeof__(v190), PSEUDO_REGISTER(__n128, "v0", "=w"));
  }
  if (!v51) {
    goto LABEL_67;
  }
LABEL_68:
  v52 = GameData_212ff98[0];
  v53 = *GameData_212ff98[0];
  v54 = (unsigned __int8*)GameRoutine_1105480(a2),
  v190 = COERCE_AS(__typeof__(v190), PSEUDO_REGISTER(__n128, "v0", "=w"));
  v55 = *v54;
  v56 = *((_QWORD*)v54 + 1);
  if ((v55 & 1) == 0) {
    v56 = v55 >> 1;
  }
  if (v56 == 0) {
    goto LABEL_83;
  }
  v57 = (v55 & 1) != 0 ? *((unsigned __int8**)v54 + 2) : v54 + 1;
  v60 = *v57;
  v59 = v57 + 1;
  v58 = v60;
  if (v60 != 0) {
    v61 = 0;
    do {
      v61 = v58 - v61 + 32 * v61;
      v62 = *v59++;
      v58 = v62;
    } while (v62 != 0);
  }
  else {
    v61 = 0;
  }
  v63 = *(_QWORD*)(v53 + 8);
  v64 = *(_QWORD*)(v53 + 16) - v63;
  if (v64 != 0) {
    v65 = 0x84BDA12F684BDA13LL * (v64 >> 3);
    while (*(_DWORD*)(v63 + 24) != v61) {
      --v65;
      v63 += 216;
      if (v65 == 0) {
        goto LABEL_83;
      }
    }
  }
  else {
  LABEL_83:
    v66 = *v52;
    *(_QWORD*)(a1 + 152) = 0;
    v63 = *(_QWORD*)(v66 + 8);
    if (*(_DWORD*)(v63 + 24) != -1198901230) {
      do {
        v67 = *(_DWORD*)(v63 + 240);
        v63 += 216;
      } while (v67 != -1198901230);
    }
  }
  *(_QWORD*)(a1 + 152) = v63;
  if ((*(_BYTE*)v63 & 1) != 0) {
    v68 = *(_BYTE**)(v63 + 16);
  }
  else {
    v68 = (_BYTE*)(v63 + 1);
  }
  v69 = (unsigned int)game_character_1077790(v68),
  v190 = COERCE_AS(__typeof__(v190), PSEUDO_REGISTER(__n128, "v0", "=w"));
  *(_DWORD*)(a1 + 160) = v69;
  if (v69 == 1) {
    v70 = *(_QWORD*)(a1 + 184);
    v71 = *(_QWORD*)(v70 + 392);
    v72 = *(_QWORD*)(v70 + 400);
    if (v72 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v72 + 8), 1u,
                                memory_order_relaxed);
      v73 = CharacterAppearance_10743e0(v71),
      v190 = COERCE_AS(__typeof__(v190), PSEUDO_REGISTER(__n128, "v0", "=w"));
      if (atomic_fetch_add((atomic_ullong* volatile)(v72 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        v74 = v73;
        (*(void (**)(__int64))(*(_QWORD*)v72 + 16LL))(v72),
            v190 = COERCE_AS(__typeof__(v190),
                             PSEUDO_REGISTER(__n128, "v0", "=w"));
        std___1___shared_weak_count___release_weak(v72),
            v190 = COERCE_AS(__typeof__(v190),
                             PSEUDO_REGISTER(__n128, "v0", "=w"));
        v73 = v74;
      }
    }
    else {
      v73 = CharacterAppearance_10743e0(v71),
      v190 = COERCE_AS(__typeof__(v190), PSEUDO_REGISTER(__n128, "v0", "=w"));
    }
    if (v73 <= 5 && ((1 << v73) & 0x34) != 0) {
      *(_DWORD*)(a1 + 800) |= 0x800u;
    }
  }
  v76 = *(_QWORD*)(a1 + 152);
  v77 = *(_WORD*)(v76 + 80);
  if ((v77 & 4) != 0) {
    *(_DWORD*)(a1 + 800) |= 0x800u;
    v77 = *(_WORD*)(v76 + 80);
    if ((v77 & 0x10) == 0) {
    LABEL_100:
      if ((v77 & 0x20) == 0) {
        goto LABEL_102;
      }
      goto LABEL_101;
    }
  }
  else if ((v77 & 0x10) == 0) {
    goto LABEL_100;
  }
  *(_DWORD*)(a1 + 800) = *(_DWORD*)(a1 + 800) & 0xFFFFB7FF | 0x4000;
  if ((*(_WORD*)(v76 + 80) & 0x20) != 0) {
  LABEL_101:
    *(_DWORD*)(a1 + 800) |= 0x8000u;
  }
LABEL_102:
  v78 = *v52;
  v79 = *(float*)(a1 + 756) + 0x1.99999a0000000p-4f;
  *(float*)(a1 + 756) = v79;
  v81 = v78 + 8;
  v80 = *(_QWORD*)(v78 + 8);
  v82 = *(_QWORD*)(v81 + 8) - v80;
  if (v82 != 0) {
    v83 = 0x84BDA12F684BDA13LL * (v82 >> 3);
    while (*(_DWORD*)(v80 + 24) != 1936398489) {
      --v83;
      v80 += 216;
      if (v83 == 0) {
        v80 = 0;
        break;
      }
    }
    if (v76 == v80) {
      *(float*)(a1 + 756) = v79 + 0x1.99999a0000000p-2f;
    }
  }
  if ((*(_DWORD*)(a1 + 232) & 0xFFFFFFFE) == 4) {
    v84 = *(_BYTE*)(v76 + 56);
    v85 = *(_BYTE**)(v76 + 72);
    v86 = (_BYTE*)(v76 + 57);
    if ((v84 & 1) != 0) {
      v87 = v85;
    }
    else {
      v87 = v86;
    }
    game_character_10b49e0((void*)(&v241_.v241), a1 + 664, v87),
        v190 = COERCE_AS(__typeof__(v190), PSEUDO_REGISTER(__n128, "v0", "=w"));
    v88 = *(_QWORD*)(a1 + 152);
    v89 = vaddq_f32(v241_.v241, *(float32x4_t*)(a1 + 752));
    v90 = *(_BYTE*)(v88 + 32);
    v91 = *(_BYTE**)(v88 + 48);
    v92 = (_BYTE*)(v88 + 33);
    if ((v90 & 1) != 0) {
      v93 = v91;
    }
    else {
      v93 = v92;
    }
    v240 = v89;
    game_character_10b49e0((void*)(&v241_.v241), a1 + 664, v93),
        v190 = COERCE_AS(__typeof__(v190), PSEUDO_REGISTER(__n128, "v0", "=w"));
    v94 = vsubq_f32(v240, v241_.v241);
    LANES128(v94).n128_u32[1] = 0;
    v95 = vmulq_f32(v94, v94);
    LANES128(v95).n128_u64[0] =
        LANES64_OF(
            vadd_f32(COERCE_AS(float32x2_t,
                               LANES128_OF(vextq_s8(v95, v95, 8u)).n128_u64[0]),
                     COERCE_AS(float32x2_t, LANES128(v95).n128_u64[0])))
            .n64_u64[0];
    LANES128(v95).n128_u64[0] =
        LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v95).n128_u64[0]),
                             COERCE_AS(float32x2_t, LANES128(v95).n128_u64[0])))
            .n64_u64[0];
    LANES128(v95).n128_u64[1] = LANES128(v95).n128_u64[0];
    v96 = vrsqrteq_f32(v95);
    v97 = vmulq_f32(v96, vrsqrtsq_f32(v96, vmulq_f32(v95, v96)));
    v98 =
        vmulq_f32(v94, vmulq_f32(v97, vrsqrtsq_f32(v97, vmulq_f32(v95, v97))));
    LANES128(v97).n128_u64[0] = 0x3F0000003F000000LL;
    LANES128(v97).n128_u64[1] = 0x3F0000003F000000LL;
    *(float32x4_t*)(a1 + 752) =
        vsubq_f32(*(float32x4_t*)(a1 + 752),
                  vbicq_s8(vmulq_f32(v98, v97), vceqzq_f32(v95)));
  }
  if (*(_BYTE*)(a2 + 56) == 1) {
    *(_DWORD*)(a1 + 800) |= 0x400u;
  }
  v99 = *(_QWORD*)(a1 + 152);
  *(_BYTE*)(a1 + 552) = 0;
  *(_DWORD*)(a1 + 556) = 0;
  v100 = -0x1.0000000000000p+0f;
  v101 = 0x0.0p+0f;
  v102 = 0x0.0p+0f;
  v103 = -0x1.0000000000000p+0f;
  *(_QWORD*)(a1 + 544) = v99 + 96;
  v104 = *(_QWORD*)(v99 + 96);
  v105 = *(_QWORD*)(v99 + 104) - v104;
  if ((int)(v105 >> 6) >= 1) {
    if ((v105 & 0x1FFFFFFFC0LL) == 0x40) {
      v106 = 0;
    }
    else {
      v107 = (int*)(v104 + 68);
      v108 = 0;
      do {
        if ((*((_WORD*)v107 - 33) & 2) == 0) {
          v109 = (float)*(v107 - 16) / 0x1.e000000000000p+5f;
          if (v103 < v109) {
            v103 = (float)*(v107 - 16) / 0x1.e000000000000p+5f;
          }
          if (*((_BYTE*)v107 - 68) == 6 && v102 < v109) {
            v102 = (float)*(v107 - 16) / 0x1.e000000000000p+5f;
          }
        }
        if ((*((_WORD*)v107 - 1) & 2) == 0) {
          v110 = (float)*v107 / 0x1.e000000000000p+5f;
          if (v103 < v110) {
            v103 = (float)*v107 / 0x1.e000000000000p+5f;
          }
          if (*((_BYTE*)v107 - 4) == 6 && v102 < v110) {
            v102 = (float)*v107 / 0x1.e000000000000p+5f;
          }
        }
        v107 += 32;
        v108 -= 2;
      } while (-2LL * ((v105 >> 7) & 0x3FFFFFFF) != v108);
      v106 = -v108;
    }
    if ((v105 & 0x40) != 0) {
      v111 = (unsigned __int8*)(v104 + (v106 << 6));
      if ((*((_WORD*)v111 + 1) & 2) == 0) {
        v112 = *((_DWORD*)v111 + 1);
        v113 = *v111;
        v114 = (float)v112 / 0x1.e000000000000p+5f;
        if (v103 < v114) {
          v103 = v114;
        }
        if (v113 == 6 && v102 < v114) {
          v102 = v114;
        }
      }
    }
  }
  *(float*)(a1 + 560) = v103;
  *(float*)(a1 + 564) = v102;
  *(_BYTE*)(a1 + 576) = 0;
  *(_DWORD*)(a1 + 580) = 0;
  *(_QWORD*)(a1 + 568) = v99 + 120;
  v115 = *(_QWORD*)(v99 + 120);
  v116 = *(_QWORD*)(v99 + 128) - v115;
  if ((int)(v116 >> 6) >= 1) {
    if ((v116 & 0x1FFFFFFFC0LL) == 0x40) {
      v117 = 0;
      v101 = 0x0.0p+0f;
      v100 = -0x1.0000000000000p+0f;
    }
    else {
      v101 = 0x0.0p+0f;
      v100 = -0x1.0000000000000p+0f;
      v118 = (int*)(v115 + 68);
      v119 = 0;
      do {
        if ((*((_WORD*)v118 - 33) & 2) == 0) {
          v120 = (float)*(v118 - 16) / 0x1.e000000000000p+5f;
          if (v100 < v120) {
            v100 = (float)*(v118 - 16) / 0x1.e000000000000p+5f;
          }
          if (*((_BYTE*)v118 - 68) == 6 && v101 < v120) {
            v101 = (float)*(v118 - 16) / 0x1.e000000000000p+5f;
          }
        }
        if ((*((_WORD*)v118 - 1) & 2) == 0) {
          v121 = (float)*v118 / 0x1.e000000000000p+5f;
          if (v100 < v121) {
            v100 = (float)*v118 / 0x1.e000000000000p+5f;
          }
          if (*((_BYTE*)v118 - 4) == 6 && v101 < v121) {
            v101 = (float)*v118 / 0x1.e000000000000p+5f;
          }
        }
        v118 += 32;
        v119 -= 2;
      } while (-2LL * ((v116 >> 7) & 0x3FFFFFFF) != v119);
      v117 = -v119;
    }
    if ((v116 & 0x40) != 0) {
      v122 = (unsigned __int8*)(v115 + (v117 << 6));
      if ((*((_WORD*)v122 + 1) & 2) == 0) {
        v123 = *((_DWORD*)v122 + 1);
        v124 = *v122;
        v125 = (float)v123 / 0x1.e000000000000p+5f;
        if (v100 < v125) {
          v100 = v125;
        }
        if (v124 == 6 && v101 < v125) {
          v101 = v125;
        }
      }
    }
  }
  *(float*)(a1 + 584) = v100;
  *(float*)(a1 + 588) = v101;
  v126 = -0x1.0000000000000p+0f;
  v127 = 0x0.0p+0f;
  v128 = 0x0.0p+0f;
  *(_BYTE*)(a1 + 600) = 0;
  *(_DWORD*)(a1 + 604) = 0;
  v129 = -0x1.0000000000000p+0f;
  *(_QWORD*)(a1 + 592) = v99 + 144;
  v130 = *(_QWORD*)(v99 + 144);
  v131 = *(_QWORD*)(v99 + 152) - v130;
  if ((int)(v131 >> 6) >= 1) {
    if ((v131 & 0x1FFFFFFFC0LL) == 0x40) {
      v132 = 0;
    }
    else {
      v133 = (int*)(v130 + 68);
      v134 = 0;
      do {
        if ((*((_WORD*)v133 - 33) & 2) == 0) {
          v135 = (float)*(v133 - 16) / 0x1.e000000000000p+5f;
          if (v129 < v135) {
            v129 = (float)*(v133 - 16) / 0x1.e000000000000p+5f;
          }
          if (*((_BYTE*)v133 - 68) == 6 && v128 < v135) {
            v128 = (float)*(v133 - 16) / 0x1.e000000000000p+5f;
          }
        }
        if ((*((_WORD*)v133 - 1) & 2) == 0) {
          v136 = (float)*v133 / 0x1.e000000000000p+5f;
          if (v129 < v136) {
            v129 = (float)*v133 / 0x1.e000000000000p+5f;
          }
          if (*((_BYTE*)v133 - 4) == 6 && v128 < v136) {
            v128 = (float)*v133 / 0x1.e000000000000p+5f;
          }
        }
        v133 += 32;
        v134 -= 2;
      } while (-2LL * ((v131 >> 7) & 0x3FFFFFFF) != v134);
      v132 = -v134;
    }
    if ((v131 & 0x40) != 0) {
      v137 = (unsigned __int8*)(v130 + (v132 << 6));
      if ((*((_WORD*)v137 + 1) & 2) == 0) {
        v138 = *((_DWORD*)v137 + 1);
        v139 = *v137;
        v140 = (float)v138 / 0x1.e000000000000p+5f;
        if (v129 < v140) {
          v129 = v140;
        }
        if (v139 == 6 && v128 < v140) {
          v128 = v140;
        }
      }
    }
  }
  *(float*)(a1 + 608) = v129;
  *(float*)(a1 + 612) = v128;
  *(_BYTE*)(a1 + 624) = 0;
  *(_DWORD*)(a1 + 628) = 0;
  *(_QWORD*)(a1 + 616) = v99 + 168;
  v141 = *(_QWORD*)(v99 + 168);
  v142 = *(_QWORD*)(v99 + 176) - v141;
  if ((int)(v142 >> 6) >= 1) {
    if ((v142 & 0x1FFFFFFFC0LL) == 0x40) {
      v143 = 0;
      v127 = 0x0.0p+0f;
      v126 = -0x1.0000000000000p+0f;
    }
    else {
      v127 = 0x0.0p+0f;
      v126 = -0x1.0000000000000p+0f;
      v144 = (int*)(v141 + 68);
      v145 = 0;
      do {
        if ((*((_WORD*)v144 - 33) & 2) == 0) {
          v146 = (float)*(v144 - 16) / 0x1.e000000000000p+5f;
          if (v126 < v146) {
            v126 = (float)*(v144 - 16) / 0x1.e000000000000p+5f;
          }
          if (*((_BYTE*)v144 - 68) == 6 && v127 < v146) {
            v127 = (float)*(v144 - 16) / 0x1.e000000000000p+5f;
          }
        }
        if ((*((_WORD*)v144 - 1) & 2) == 0) {
          v147 = (float)*v144 / 0x1.e000000000000p+5f;
          if (v126 < v147) {
            v126 = (float)*v144 / 0x1.e000000000000p+5f;
          }
          if (*((_BYTE*)v144 - 4) == 6 && v127 < v147) {
            v127 = (float)*v144 / 0x1.e000000000000p+5f;
          }
        }
        v144 += 32;
        v145 -= 2;
      } while (-2LL * ((v142 >> 7) & 0x3FFFFFFF) != v145);
      v143 = -v145;
    }
    if ((v142 & 0x40) != 0) {
      v148 = (unsigned __int8*)(v141 + (v143 << 6));
      if ((*((_WORD*)v148 + 1) & 2) == 0) {
        v149 = *((_DWORD*)v148 + 1);
        v150 = *v148;
        v151 = (float)v149 / 0x1.e000000000000p+5f;
        if (v126 < v151) {
          v126 = v151;
        }
        if (v150 == 6 && v127 < v151) {
          v127 = v151;
        }
      }
    }
  }
  *(float*)(a1 + 632) = v126;
  *(float*)(a1 + 636) = v127;
  *(_BYTE*)(a1 + 648) = 0;
  *(_DWORD*)(a1 + 652) = 0;
  *(_QWORD*)(a1 + 640) = v99 + 192;
  v152 = *(_QWORD*)(v99 + 192);
  v153 = *(_QWORD*)(v99 + 200) - v152;
  if ((int)(v153 >> 6) < 1) {
    v156 = -0x1.0000000000000p+0f;
    v155 = 0x0.0p+0f;
  }
  else {
    if ((v153 & 0x1FFFFFFFC0LL) == 0x40) {
      v154 = 0;
      v155 = 0x0.0p+0f;
      v156 = -0x1.0000000000000p+0f;
    }
    else {
      v155 = 0x0.0p+0f;
      v156 = -0x1.0000000000000p+0f;
      v157 = (int*)(v152 + 68);
      v158 = 0;
      do {
        if ((*((_WORD*)v157 - 33) & 2) == 0) {
          v159 = (float)*(v157 - 16) / 0x1.e000000000000p+5f;
          if (v156 < v159) {
            v156 = (float)*(v157 - 16) / 0x1.e000000000000p+5f;
          }
          if (*((_BYTE*)v157 - 68) == 6 && v155 < v159) {
            v155 = (float)*(v157 - 16) / 0x1.e000000000000p+5f;
          }
        }
        if ((*((_WORD*)v157 - 1) & 2) == 0) {
          v160 = (float)*v157 / 0x1.e000000000000p+5f;
          if (v156 < v160) {
            v156 = (float)*v157 / 0x1.e000000000000p+5f;
          }
          if (*((_BYTE*)v157 - 4) == 6 && v155 < v160) {
            v155 = (float)*v157 / 0x1.e000000000000p+5f;
          }
        }
        v157 += 32;
        v158 -= 2;
      } while (-2LL * ((v153 >> 7) & 0x3FFFFFFF) != v158);
      v154 = -v158;
    }
    if ((v153 & 0x40) != 0) {
      v161 = (unsigned __int8*)(v152 + (v154 << 6));
      if ((*((_WORD*)v161 + 1) & 2) == 0) {
        v162 = *((_DWORD*)v161 + 1);
        v163 = *v161;
        v164 = (float)v162 / 0x1.e000000000000p+5f;
        if (v156 < v164) {
          v156 = v164;
        }
        if (v163 == 6 && v155 < v164) {
          v155 = v164;
        }
      }
    }
  }
  v165 = *(_DWORD*)(a1 + 232);
  *(float*)(a1 + 656) = v156;
  *(float*)(a1 + 660) = v155;
  if (v165 == 1 || v127 == 0x0.0p+0f) {
    *(_DWORD*)(a1 + 800) |= 0x200u;
  }
  *(_BYTE*)(a1 + 552) = 1;
  *(_DWORD*)(a1 + 556) = -1131902839;
  v166 = *(_WORD*)(v99 + 80);
  if ((v166 & 1) != 0) {
    v168 = 0;
  }
  else {
    v167 = (v166 & 2) != 0;
    v168 = v165 != 1 || v167;
  }
  v169 = *(_BYTE**)(v99 + 48);
  v170 = *(_DWORD*)(v99 + 84);
  v171 = (float)*(int*)(v99 + 88) * 0x1.f400000000000p+9f;
  v172 = *(_BYTE*)(v99 + 32);
  v173 = (_BYTE*)(v99 + 33);
  v174 = v171 / 0x1.c200000000000p+11f;
  if ((v172 & 1) != 0) {
    v175 = v169;
  }
  else {
    v175 = v173;
  }
  game_character_10b49e0((void*)(&v244_.v244), a1 + 664, v175),
      v190 = COERCE_AS(__typeof__(v190), PSEUDO_REGISTER(__n128, "v0", "=w"));
  v176 = *(_QWORD*)(a1 + 152);
  v177 = *(_BYTE*)(v176 + 56);
  v178 = *(_BYTE**)(v176 + 72);
  v179 = (_BYTE*)(v176 + 57);
  if ((v177 & 1) != 0) {
    v180 = v178;
  }
  else {
    v180 = v179;
  }
  game_character_10b49e0((void*)(&v241_.v241), a1 + 664, v180),
      v190 = COERCE_AS(__typeof__(v190), PSEUDO_REGISTER(__n128, "v0", "=w"));
  v181 = v241_.v241;
  v182 = *(float32x4_t*)(a1 + 752);
  *(_DWORD*)(a1 + 304) = v170;
  *(float*)(a1 + 428) = v174;
  *(_DWORD*)(a1 + 420) = -1082130432;
  *(_BYTE*)(a1 + 416) = v168;
  v243 = vaddq_f32(v181, v182);
  MagicInst_10a3950_alt1((float32x4_t*)(a1 + 304), &v244_.v244, &v243),
      v190 = COERCE_AS(__typeof__(v190), PSEUDO_REGISTER(__n128, "v0", "=w"));
  if ((*(_BYTE*)(a1 + 801) & 0x80) != 0) {
    *(_BYTE*)(a1 + 417) = 1;
  }
  if ((*(_WORD*)(*(_QWORD*)(a1 + 152) + 80LL) & 8) == 0) {
    v183 = *(_QWORD*)(a1 + 176);
    if (v183 != 0 && *(_QWORD*)(v183 + 8) != -1) {
      v184 = *(_QWORD*)(a1 + 184);
      if (v184 != 0 && (*(_BYTE*)(v184 + 340) & 1) == 0) {
        v185 = *(_QWORD*)(v184 + 392);
        v186 = *(_QWORD*)(v184 + 400);
        if (v186 != 0) {
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v186 + 8), 1u,
                                    memory_order_relaxed);
          v187 = *(_DWORD*)(v185 + 11624);
          if (atomic_fetch_add((atomic_ullong* volatile)(v186 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v186 + 16LL))(v186),
                v190 = COERCE_AS(__typeof__(v190),
                                 PSEUDO_REGISTER(__n128, "v0", "=w"));
            std___1___shared_weak_count___release_weak(v186),
                v190 = COERCE_AS(__typeof__(v190),
                                 PSEUDO_REGISTER(__n128, "v0", "=w"));
          }
        }
        else {
          v187 = *(_DWORD*)(v185 + 11624);
        }
        if ((unsigned int)(v187 - 2) <= 3) {
          v188 = *(_QWORD*)(*(_QWORD*)(a1 + 184) + 304LL);
          LANES128(v241_.v241).n128_u64[0] = (unsigned __int64)GameData_20083e0;
          LANES128(v241_.v241).n128_u64[1] = a1;
          v241_.v242 = &v241_.v241;
          v189 = (_QWORD*)EveryFrameProc_10aa5e0(v188, (__int64)&v241_.v241,
                                                 0x1.1111120000000p-2f),
          v190 =
              COERCE_AS(__typeof__(v190), PSEUDO_REGISTER(__n128, "v0", "=w"));
          v191 = v189[21];
          v192 = v189[22];
          LANES128(v244_.v244).n128_u64[0] = v191;
          LANES128(v244_.v244).n128_u64[1] = v192;
          if (v192 != 0) {
            atomic_fetch_add_explicit((atomic_ullong* volatile)(v192 + 16), 1u,
                                      memory_order_relaxed);
          }
          v193 = v189[23];
          v194 = *(unsigned __int64**)(a1 + 928);
          v195 = *(_QWORD*)(a1 + 936);
          v244_.v245 = v193;
          if ((unsigned __int64)v194 >= v195) {
            v196 =
                GameRoutine_10aa900((char**)(a1 + 920), (__int64*)&v244_.v244),
            v190 = COERCE_AS(__typeof__(v190),
                             PSEUDO_REGISTER(__n128, "v0", "=w"));
            v197 = LANES128(v244_.v244).n128_u64[1];
            *(_QWORD*)(a1 + 928) = v196;
            if (v197 != 0) {
              *(__n128*)&v190 =
                  std___1___shared_weak_count___release_weak(v197),
              v190 = COERCE_AS(__typeof__(v190),
                               PSEUDO_REGISTER(__n128, "v0", "=w"));
            }
          }
          else {
            *v194 = v191;
            v194[1] = v192;
            v194[2] = v193;
            *(_QWORD*)(a1 + 928) = v194 + 3;
          }
          if (v241_.v242 == &v241_.v241) {
            v198 = 32;
            goto LABEL_289;
          }
          if (v241_.v242 != nullptr) {
            v198 = 40;
          LABEL_289:
            (*(void (**)(long double))(LANES128(*(v241_.v242)).n128_u64[0] +
                                       v198))(v190),
                v190 = COERCE_AS(__typeof__(v190),
                                 PSEUDO_REGISTER(__n128, "v0", "=w"));
          }
        }
      }
    }
  }
  if ((*(_BYTE*)(a1 + 801) & 4) == 0) {
    v199 = 0x0.0p+0f;
    v200 = *(_QWORD*)(*(_QWORD*)(a1 + 184) + 72LL);
    v201 = *(_QWORD*)(v200 + 96);
    if (v201 != 0) {
      v202 = GameRoutine_d2b5f0(*(_QWORD*)(v201 + 32) + 72LL),
      v190 = COERCE_AS(__typeof__(v190), PSEUDO_REGISTER(__n128, "v0", "=w"));
      if ((v202 & 0x100000000LL) != 0) {
        v203 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v201 + 24) + 72LL) +
                          104LL * (int)v202);
        if (v203 != 0) {
          v204 = *(float**)(v203 + 16);
          if (v204 != nullptr) {
            v199 = *v204 * 0x1.1111120000000p-6f;
          }
        }
      }
    }
    LODWORD(v205) = *((_DWORD*)CharacterAnimator_107a7e0(v200) + 9),
    v190 = COERCE_AS(__typeof__(v190), PSEUDO_REGISTER(__n128, "v0", "=w"));
    if (*(float*)&v205 > 0x0.0p+0f) {
      v206 = **(_QWORD**)(a1 + 592);
      v207 = *(_QWORD*)(*(_QWORD*)(a1 + 592) + 8LL) - v206;
      if ((int)(v207 >> 6) < 1) {
        return;
      }
      v208 = (v207 >> 6) & 0x7FFFFFFF;
      for (i = (int*)(v206 + 4);
           (*((_WORD*)i - 1) & 2) != 0 || *((_BYTE*)i - 4) != 3; i += 16) {
        if (--v208 == 0) {
          return;
        }
      }
      *(float*)&v205 = *(float*)(a1 + 424) +
                       (float)((float)(*(float*)&v205 - v199) +
                               (float)((float)*i / 0x1.e000000000000p+5f));
      *(_DWORD*)(a1 + 236) = LODWORD(v205);
      if (*GameData_212d448[0] != 0 &&
          (*(_BYTE*)(*(_QWORD*)(a1 + 184) + 340LL) & 1) == 0) {
        v210 = *(_QWORD*)(*GameData_212d448[0] + 8);
        v211 = *(_QWORD*)(v210 + 32);
        v212 = *(_QWORD*)(v210 + 40);
        if (v211 == v212) {
          v216 = &GameData_2235e30;
        }
        else {
          v213 = *(_DWORD*)(v210 + 56);
          v214 = 954437177 * ((unsigned __int64)(v212 - v211) >> 4) - 1;
          if (v213 < v214) {
            v214 = v213;
          }
          if (v213 >= 0) {
            v215 = v214;
          }
          else {
            v215 = 0;
          }
          v216 = (__int64*)(v211 + 144LL * v215);
        }
        v217 = GameRoutine_10d4920(v205),
        v190 = COERCE_AS(__typeof__(v190), PSEUDO_REGISTER(__n128, "v0", "=w"));
        v218 = *(float*)(a1 + 236);
        v219 = *(float*)(a1 + 636);
        *((_BYTE*)v216 + 24) = 1;
        *((float*)v216 + 5) = v217 + (float)(v218 + v219);
      }
    }
  }
  if ((*(_BYTE*)(a1 + 801) & 4) == 0) {
    LANES128(v241_.v241).n128_u64[0] = (unsigned __int64)GameData_2008460;
    LANES128(v241_.v241).n128_u64[1] = a1;
    v241_.v242 = &v241_.v241;
    v221 = *(_QWORD*)(a1 + 168);
    v220 = *(_QWORD*)(a1 + 176);
    if (v220 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v220 + 16), 1u,
                                memory_order_relaxed);
    }
    v222 = *(_QWORD*)(a1 + 816);
    *(_QWORD*)(a1 + 808) = v221;
    *(_QWORD*)(a1 + 816) = v220;
    if (v222 != 0) {
      std___1___shared_weak_count___release_weak(v222),
          v190 =
              COERCE_AS(__typeof__(v190), PSEUDO_REGISTER(__n128, "v0", "=w"));
    }
    *(_QWORD*)(a1 + 824) = *(_QWORD*)(a1 + 184);
    if ((*(_BYTE*)(a1 + 840) & 1) != 0) {
      *(_QWORD*)(a1 + 848) = 12;
      v223 = *(char**)(a1 + 856);
    }
    else {
      *(_BYTE*)(a1 + 840) = 24;
      v223 = (char*)(a1 + 841);
    }
    strcpy(v223, "Signal_Chant");
    v224 = *(unsigned __int8*)(a1 + 840);
    v225 = (v224 & 1) == 0;
    v226 = v224 >> 1;
    if (v225) {
      v227 = a1 + 841;
    }
    else {
      v227 = *(_QWORD*)(a1 + 856);
    }
    if (v225) {
      v228 = v226;
    }
    else {
      v228 = *(_QWORD*)(a1 + 848);
    }
    *(_DWORD*)(a1 + 832) = Signal_d30a60(*(int**)(*(_QWORD*)(a1 + 824) + 320LL),
                                         v227, v228, (__int64)&v241_.v241),
                    v190 = COERCE_AS(__typeof__(v190),
                                     PSEUDO_REGISTER(__n128, "v0", "=w"));
    if (v241_.v242 == &v241_.v241) {
      v229 = 32;
    }
    else {
      if (v241_.v242 == nullptr) {
      LABEL_332:
        LANES128(v241_.v241).n128_u64[0] = (unsigned __int64)GameData_20084e0;
        LANES128(v241_.v241).n128_u64[1] = a1;
        v241_.v242 = &v241_.v241;
        v231 = *(_QWORD*)(a1 + 168);
        v230 = *(_QWORD*)(a1 + 176);
        if (v230 != 0) {
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v230 + 16), 1u,
                                    memory_order_relaxed);
        }
        v232 = *(_QWORD*)(a1 + 872);
        *(_QWORD*)(a1 + 864) = v231;
        *(_QWORD*)(a1 + 872) = v230;
        if (v232 != 0) {
          std___1___shared_weak_count___release_weak(v232),
              v190 = COERCE_AS(__typeof__(v190),
                               PSEUDO_REGISTER(__n128, "v0", "=w"));
        }
        *(_QWORD*)(a1 + 880) = *(_QWORD*)(a1 + 184);
        if ((*(_BYTE*)(a1 + 896) & 1) != 0) {
          *(_QWORD*)(a1 + 904) = 12;
          v233 = *(char**)(a1 + 912);
        }
        else {
          *(_BYTE*)(a1 + 896) = 24;
          v233 = (char*)(a1 + 897);
        }
        strcpy(v233, "Signal_Shoot");
        v234 = *(unsigned __int8*)(a1 + 896);
        v235 = (v234 & 1) == 0;
        v236 = v234 >> 1;
        if (v235) {
          v237 = a1 + 897;
        }
        else {
          v237 = *(_QWORD*)(a1 + 912);
        }
        if (v235) {
          v238 = v236;
        }
        else {
          v238 = *(_QWORD*)(a1 + 904);
        }
        *(_DWORD*)(a1 + 888) =
            Signal_d30a60(*(int**)(*(_QWORD*)(a1 + 880) + 320LL), v237, v238,
                          (__int64)&v241_.v241),
                        v190 = COERCE_AS(__typeof__(v190),
                                         PSEUDO_REGISTER(__n128, "v0", "=w"));
        if (v241_.v242 == &v241_.v241) {
          v239 = 32;
          goto LABEL_349;
        }
        if (v241_.v242 != nullptr) {
          v239 = 40;
        LABEL_349:
          (*(void (**)(void))(LANES128(*(v241_.v242)).n128_u64[0] + v239))(),
              v190 = COERCE_AS(__typeof__(v190),
                               PSEUDO_REGISTER(__n128, "v0", "=w"));
          return;
        }
        return;
      }
      v229 = 40;
    }
    (*(void (**)(void))(LANES128(*(v241_.v242)).n128_u64[0] + v229))(),
        v190 = COERCE_AS(__typeof__(v190), PSEUDO_REGISTER(__n128, "v0", "=w"));
    goto LABEL_332;
  }
}

__int64 MagicInst_Destructor(__int64 a1, __n128 a2)
{
  __int64 v3;
  __int64 v4;
  __n128 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;

  *(_QWORD*)a1 = game_combat_MagicInst_vtable;
  v3 = *(_QWORD*)(a1 + 968);
  if (v3 != 0) {
    a2 = std___1___shared_weak_count___release_weak(v3);
  }
  v4 = *(_QWORD*)(a1 + 952);
  if (v4 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
    a2 = std___1___shared_weak_count___release_weak(v4);
  }
  GameRoutine_10a9ec0(a1 + 920, *(long double*)&a2);
  GameRoutine_1098db0(a1 + 864);
  v5 = GameRoutine_1098db0(a1 + 808);
  v6 = *(_QWORD*)(a1 + 720);
  v7 = fw_memory_g_heap_manager_ptr;
  if (v6 != 0) {
    v8 = *(_QWORD*)fw_memory_g_heap_manager_ptr;
    *(_QWORD*)(a1 + 728) = v6;
    v9 = 128;
    if (*(_QWORD*)(v8 + 200) == 0) {
      v9 = 56;
    }
    nn_mem_StandardAllocator_Free(v8 + v9);
  }
  v10 = *(_QWORD*)(a1 + 696);
  if (v10 != 0) {
    v5 = std___1___shared_weak_count___release_weak(v10);
  }
  v11 = *(_QWORD*)(a1 + 672);
  if (v11 != 0) {
    v5 = std___1___shared_weak_count___release_weak(v11);
  }
  v12 = *(_QWORD*)(a1 + 272);
  if (v12 != 0) {
    v13 = *(_QWORD*)(a1 + 280);
    if (v12 == v13) {
      goto LABEL_22;
    }
    do {
      v14 = *(_QWORD*)(v13 - 8);
      if (v14 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v14 + 8),
                                       0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64, long double))(*(_QWORD*)v14 + 16LL))(
            v14, *(long double*)&v5);
        v5 = std___1___shared_weak_count___release_weak(v14);
      }
      v13 -= 16;
    } while (v13 != v12);
    v15 = *(_QWORD*)(a1 + 272);
    *(_QWORD*)(a1 + 280) = v12;
    if (v15 != 0) {
    LABEL_22:
      v16 = 128;
      if (*(_QWORD*)(*(_QWORD*)v7 + 200LL) == 0) {
        v16 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v7 + v16);
    }
  }
  v17 = *(_QWORD*)(a1 + 248);
  if (v17 != 0) {
    v18 = *(_QWORD*)(a1 + 256);
    if (v17 == v18) {
      goto LABEL_33;
    }
    do {
      v19 = *(_QWORD*)(v18 - 8);
      if (v19 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v19 + 8),
                                       0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64, long double))(*(_QWORD*)v19 + 16LL))(
            v19, *(long double*)&v5);
        v5 = std___1___shared_weak_count___release_weak(v19);
      }
      v18 -= 16;
    } while (v18 != v17);
    v20 = *(_QWORD*)(a1 + 248);
    *(_QWORD*)(a1 + 256) = v17;
    if (v20 != 0) {
    LABEL_33:
      v21 = 128;
      if (*(_QWORD*)(*(_QWORD*)v7 + 200LL) == 0) {
        v21 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v7 + v21);
    }
  }
  v22 = *(_QWORD*)(a1 + 200);
  if (v22 != 0) {
    std___1___shared_weak_count___release_weak(v22);
  }
  v23 = *(_QWORD*)(a1 + 176);
  if (v23 != 0) {
    std___1___shared_weak_count___release_weak(v23);
  }
  *(_QWORD*)a1 = game_ProcInst_vtable;
  if ((*(_WORD*)(a1 + 136) & 0x100) != 0) {
    *(_WORD*)(a1 + 136) &= ~0x100u;
  }
  game_ProcInst_Unregister(a1);
  return GameRoutine_658c00(a1 + 88);
}

void game_combat_MagicInst_MagicInst_lambda0_Invoke(__int64 a1)
{

#pragma clang fp contract(off)
  __int64 v1;
  __int64 v2;
  __int64 v3;
  _QWORD* v4;
  __int64 v6;
  float v7;
  _QWORD* v8;
  _QWORD* v9;
  _QWORD* v10;
  __int64 v11;
  _QWORD* v12;
  __int64 v13;
  __int64 v14;
  struct {
    _QWORD* v15;
    _QWORD* v16;
  } v15_;

  v2 = *(_QWORD*)(a1 + 8);
  v3 = *(_QWORD*)(v2 + 176);
  if (v3 != 0) {
    v4 = *(_QWORD**)(v2 + 184);
    if (*(_QWORD*)(v3 + 8) != -1 && v4 != nullptr) {
      v6 = *GameData_212d448[0];
      if (*GameData_212d448[0] != 0) {
        v1 = *(_QWORD*)(v6 + 8);
        if (v1 != 0) {
          LODWORD(v1) = *(unsigned __int8*)(v1 + 113) >> 7;
        }
      }
      v7 = -*(float*)(*(_QWORD*)GameData_212d270 + 464LL);
      if (((v6 != 0) & (unsigned __int8)v1) == 0) {
        v7 = -0x1.0000000000000p+0f;
      }
      game_10ea2a0((void*)(&v15_.v15), v4, *(_DWORD*)(v2 + 160),
                   *(_QWORD*)(v2 + 224), v7);
      v8 = v15_.v15;
      v9 = v15_.v16;
      if (v15_.v15 != v15_.v16) {
        v10 = *(_QWORD**)(v2 + 280);
        do {
          if ((unsigned __int64)v10 >= *(_QWORD*)(v2 + 288)) {
            v10 = GameHr_e5d5a0((__int64*)(v2 + 272), v8);
          }
          else {
            *v10 = *v8;
            v11 = v8[1];
            v10[1] = v11;
            if (v11 != 0) {
              atomic_fetch_add_explicit((atomic_ullong* volatile)(v11 + 8), 1u,
                                        memory_order_relaxed);
            }
            v10 += 2;
          }
          v8 += 2;
          *(_QWORD*)(v2 + 280) = v10;
        } while (v8 != v9);
        v8 = v15_.v15;
      }
      if (v8 != nullptr) {
        v12 = v15_.v16;
        if (v8 == v15_.v16) {
          goto LABEL_28;
        }
        do {
          v13 = *(v12 - 1);
          if (v13 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v13 + 8),
                                           0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v13 + 16LL))(v13);
            std___1___shared_weak_count___release_weak_alt1(v13);
          }
          v12 -= 2;
        } while (v12 != v8);
        v15_.v16 = v8;
        v8 = v15_.v15;
        if (v15_.v15 != nullptr) {
        LABEL_28:
          v14 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v14 = 56;
          }
          nn_mem_StandardAllocator_Free_alt1(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v14, (__int64)v8);
        }
      }
    }
  }
}

void game_combat_MagicInst_MagicInst_lambda1_Invoke(__int64 a1, int8x16_t** a2,
                                                    long double a3)
{
  float32x4_t* v3;
  int8x16_t* v4;
  int v5;
  unsigned __int64 v6;
  __int64 v7;
  unsigned __int64 v8;
  __int64 v10;
  unsigned __int64 v11;
  bool v12;
  __int64 v13;
  const char* v14;
  __int64 v15;
  unsigned __int64 v16;
  unsigned __int64 v17;
  __int64 v19;
  float v20;
  __int64 v21;
  unsigned __int64 v22;
  __int64 v23;
  float* v24;
  float v25;
  int8x16_t v26;
  unsigned __int64 v27;
  char v28;
  unsigned __int64 v29;
  unsigned __int64 v30;
  _BYTE* v31;
  unsigned __int64 v32;
  char v33;
  unsigned __int64 v34;
  unsigned __int64 v35;
  _BYTE* v36;
  float32x4_t v37;
  int8x16_t v38;
  unsigned __int64 v39;
  float v40;
  __int64 v41;
  unsigned __int64 v42;
  __int64 v43;
  int* v44;
  int8x16_t v45;
  __int64 v46;
  float32x4_t v47;
  float32x4_t v48;

  v3 = *(float32x4_t**)(a1 + 8);
  v4 = *a2;
  v5 = LANES128(v3[52]).n128_i32[0];
  if (v5 != 0) {
    v6 = LANES128(v3[51]).n128_u64[0];
    if (v6 != 0) {
      v7 = *(_QWORD*)(v6 + 8);
      v8 = LANES128(v3[51]).n128_u64[1];
      if (v7 != -1 && v8 != 0) {
        v10 = *(_QWORD*)(v8 + 320);
        v11 = LANES128(v3[52]).n128_u8[8];
        v12 = (v11 & 1) == 0;
        v13 = v11 >> 1;
        if (v12) {
          v14 = &LANES128(v3[52]).n128_i8[9];
        }
        else {
          v14 = (const char*)LANES128(v3[53]).n128_u64[1];
        }
        if (v12) {
          v15 = v13;
        }
        else {
          v15 = LANES128(v3[53]).n128_i64[0];
        }
        Signal_d30dc0_alt1(v10, v14, v15, v5);
        LANES128(v3[52]).n128_u32[0] = 0;
      }
    }
  }
  v16 = LANES128(v3[11]).n128_u64[0];
  if (v16 != 0) {
    v17 = LANES128(v3[11]).n128_u64[1];
    if (*(_QWORD*)(v16 + 8) != -1 && v17 != 0) {
      if ((LANES128(v3[36]).n128_u8[0] & 1) == 0) {
        LANES128(v3[36]).n128_u8[0] = 1;
        LANES128(v3[36]).n128_u32[1] = -1131902839;
      }
      if ((LANES128(v3[50]).n128_u8[1] & 0x20) == 0) {
        GameRoutine_10b5e70(*(_QWORD*)(v17 + 144), 1, a3);
        v17 = LANES128(v3[11]).n128_u64[1];
      }
      v19 = *(_QWORD*)(v17 + 72);
      v20 = 0x0.0p+0f;
      v21 = *(_QWORD*)(v19 + 96);
      if (v21 != 0) {
        v22 = GameRoutine_d2b5f0(*(_QWORD*)(v21 + 32) + 72LL);
        if ((v22 & 0x100000000LL) != 0) {
          v23 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v21 + 24) + 72LL) +
                           104LL * (int)v22);
          if (v23 != 0) {
            v24 = *(float**)(v23 + 16);
            if (v24 != nullptr) {
              v20 = *v24 * 0x1.1111120000000p-6f;
            }
          }
        }
      }
      v25 = *(float*)(CharacterAnimator_107a7e0_alt1(v19) + 36);
      if ((LANES128(v3[50]).n128_u8[1] & 8) != 0) {
        v26 = v4[2];
        if (COERCE_FLOAT(LANES128(v4[2]).n128_u64[1]) != 0x0.0p+0f ||
            LANES128(v26).n128_f32[1] != 0x0.0p+0f ||
            LANES128(v26).n128_f32[0] != 0x0.0p+0f) {
          v27 = LANES128(v3[9]).n128_u64[1];
          v28 = *(_BYTE*)(v27 + 32);
          v29 = *(_QWORD*)(v27 + 48);
          v30 = v27 + 33;
          v31 = (_BYTE*)((v28 & 1) != 0 ? v29 : v30);
          game_character_10b49e0((void*)(&v47),
                                 (__int64)&LANES128(v3[41]).n128_i64[1], v31);
          v32 = LANES128(v3[9]).n128_u64[1];
          v33 = *(_BYTE*)(v32 + 56);
          v34 = *(_QWORD*)(v32 + 72);
          v35 = v32 + 57;
          v36 = (_BYTE*)((v33 & 1) != 0 ? v34 : v35);
          game_character_10b49e0((void*)(&v48),
                                 (__int64)&LANES128(v3[41]).n128_i64[1], v36);
          v37 = vsubq_f32(v47, vaddq_f32(v48, v3[47]));
          v38 = vmulq_f32(v37, v37);
          LANES128(v38).n128_u64[0] =
              LANES64_OF(
                  vadd_f32(COERCE_AS(
                               float32x2_t,
                               LANES128_OF(vextq_s8(v38, v38, 8u)).n128_u64[0]),
                           COERCE_AS(float32x2_t, LANES128(v38).n128_u64[0])))
                  .n64_u64[0];
          if (LANES64_OF(
                  vpadd_f32(COERCE_AS(float32x2_t, LANES128(v38).n128_u64[0]),
                            COERCE_AS(float32x2_t, LANES128(v38).n128_u64[0])))
                  .n64_f32[0] > 0x1.b0a3d40000000p+2f) {
            v39 = LANES128(v3[9]).n128_u64[1];
            v40 = 0x0.0p+0f;
            v41 = *(_QWORD*)(v39 + 144);
            v42 = *(_QWORD*)(v39 + 152) - v41;
            if ((int)(v42 >> 6) >= 1) {
              v43 = (v42 >> 6) & 0x7FFFFFFF;
              v44 = (int*)(v41 + 4);
              while ((*((_WORD*)v44 - 1) & 2) != 0 || *((_BYTE*)v44 - 4) != 3) {
                --v43;
                v44 += 16;
                if (v43 == 0) {
                  goto LABEL_45;
                }
              }
              v40 = (float)*v44 / 0x1.e000000000000p+5f;
            }
          LABEL_45:
            v45 = v4[2];
            v46 = *(_QWORD*)(LANES128(v3[11]).n128_u64[1] + 64);
            LANES128(v45).n128_u64[1] =
                LANES128_OF(vextq_s8(v45, v45, 8u)).n128_u32[0];
            v48 = v45;
            game_character_CharacterAim_Start(
                v46, &v48,
                (float)((float)(v25 + v40) - v20) * 0x1.cccccc0000000p-1f);
            LANES128(v3[50]).n128_u32[0] |= 0x1000u;
          }
        }
      }
      if (*(int*)(LANES128(v3[9]).n128_u64[1] + 88) <= 0) {
        LANES128(v3[15]).n128_f32[0] =
            (float)((float)((float)(v25 + LANES128(v3[26]).n128_f32[2]) - v20) *
                    0x1.8000000000000p-1f) +
            0x0.0p+0f;
      }
    }
  }
}

float game_combat_MagicInst_MagicInst_lambda2_Invoke(__int64 a1)
{

#pragma clang fp contract(off)
  float32x4_t* v1;
  int v2;
  unsigned __int64 v3;
  __int64 v4;
  unsigned __int64 v5;
  __int64 v7;
  unsigned __int64 v8;
  bool v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  float result;
  unsigned __int64 v14;
  unsigned __int64 v16;
  char v17;
  _BYTE* v18;
  _BYTE* v19;
  _BYTE* v20;
  unsigned __int64 v21;
  char v22;
  _BYTE* v23;
  _BYTE* v24;
  _BYTE* v25;
  float32x4_t v26;
  float32x4_t v27;
  float32x4_t v28;

  result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(float, "s0", "=w"));
  v1 = *(float32x4_t**)(a1 + 8);
  v2 = LANES128(v1[55]).n128_i32[2];
  if (v2 != 0) {
    v3 = LANES128(v1[54]).n128_u64[1];
    if (v3 != 0) {
      v4 = *(_QWORD*)(v3 + 8);
      v5 = LANES128(v1[55]).n128_u64[0];
      if (v4 != -1 && v5 != 0) {
        v7 = *(_QWORD*)(v5 + 320);
        v8 = LANES128(v1[56]).n128_u8[0];
        v9 = (v8 & 1) == 0;
        v10 = v8 >> 1;
        if (v9) {
          v11 = (__int64)LANES128(v1[56]).n128_i64 + 1;
        }
        else {
          v11 = LANES128(v1[57]).n128_i64[0];
        }
        if (v9) {
          v12 = v10;
        }
        else {
          v12 = LANES128(v1[56]).n128_i64[1];
        }
        Signal_d30dc0(v7, v11, v12, v2),
            result = COERCE_AS(__typeof__(result),
                               PSEUDO_REGISTER(float, "s0", "=w"));
        LANES128(v1[55]).n128_u32[2] = 0;
      }
    }
  }
  v14 = LANES128(v1[11]).n128_u64[0];
  if (v14 != 0 && *(_QWORD*)(v14 + 8) != -1 &&
      LANES128(v1[11]).n128_u64[1] != 0) {
    v16 = LANES128(v1[9]).n128_u64[1];
    v17 = *(_BYTE*)(v16 + 32);
    v18 = *(_BYTE**)(v16 + 48);
    v19 = (_BYTE*)(v16 + 33);
    if ((v17 & 1) != 0) {
      v20 = v18;
    }
    else {
      v20 = v19;
    }
    game_character_10b49e0((void*)(&v27),
                           (__int64)&LANES128(v1[41]).n128_i64[1], v20),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(float, "s0", "=w"));
    v21 = LANES128(v1[9]).n128_u64[1];
    v22 = *(_BYTE*)(v21 + 56);
    v23 = *(_BYTE**)(v21 + 72);
    v24 = (_BYTE*)(v21 + 57);
    if ((v22 & 1) != 0) {
      v25 = v23;
    }
    else {
      v25 = v24;
    }
    game_character_10b49e0((void*)(&v28),
                           (__int64)&LANES128(v1[41]).n128_i64[1], v25),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(float, "s0", "=w"));
    v26 = vaddq_f32(v28, v1[47]);
    MagicInst_10a3950_alt1(v1 + 19, &v27, &v26),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(float, "s0", "=w"));
    if ((LANES128(v1[37]).n128_u8[8] & 1) == 0) {
      LANES128(v1[37]).n128_u8[8] = 1;
      LANES128(v1[37]).n128_u32[3] = -1131902839;
    }
    if (*(int*)(LANES128(v1[9]).n128_u64[1] + 88) >= 1) {
      result = LANES128(v1[26]).n128_f32[2] * 0x1.8000000000000p-1f;
      LANES128(v1[15]).n128_f32[0] = result;
    }
  }
  return result;
}

float32x4_t MagicInst_10a3950(float32x4_t* result, float32x4_t* a2,
                              float32x4_t* a3)
{

#pragma clang fp contract(off)
  __int64 v3;
  int16x4_t v4;
  float32x4_t v5;
  int16x4_t v6;
  unsigned __int32 v7;
  float32x4_t v8;
  unsigned __int32 v9;
  float32x4_t v10;
  float32x4_t v11;
  unsigned __int32 v12;
  float32x4_t v13;
  float32x4_t* v14;
  float32x4_t* v15;
  float32x4_t v16;
  float32x4_t v17;
  float v18;
  float32x4_t v19;
  int8x16_t v20;
  float v21;

  LANES64(v4).n64_u64[0] =
      LANES64_OF(vmovn_s32(vceqq_f32(*a3, result[9]))).n64_u64[0];
  v5 = *a2;
  if ((LANES64(v4).n64_u8[0] & 1) == 0 || (LANES64(v4).n64_u8[2] & 1) == 0 ||
      (LANES64(v4).n64_u8[4] & 1) == 0 ||
      (LANES64(v6).n64_u64[0] =
           LANES64_OF(vmovn_s32(vceqq_f32(v5, result[8]))).n64_u64[0],
       (LANES64(v6).n64_u8[0] & 1) == 0) ||
      (LANES64(v6).n64_u8[2] & 1) == 0 || (LANES64(v6).n64_u8[4] & 1) == 0) {
    LANES128(result[8]).n128_u32[0] = LANES128(v5).n128_u32[0];
    v7 = LANES128(*(result)).n128_u32[0];
    LANES128(result[8]).n128_u32[1] = LANES128(*(a2)).n128_u32[1];
    v8 = result[8];
    v9 = LANES128(*(a2)).n128_u32[2];
    LANES128(v10).n128_u64[0] = LANES128(result[8]).n128_u64[0];
    LANES128(v10).n128_u64[1] = v9;
    result[8] = v10;
    LANES128(result[9]).n128_u64[0] = LANES128(*(a3)).n128_u64[0];
    v11 = result[9];
    v12 = LANES128(*(a3)).n128_u32[2];
    LANES128(v13).n128_u64[0] = LANES128(result[9]).n128_u64[0];
    LANES128(v13).n128_u64[1] = v12;
    result[9] = v13;
    if (v7 == 2) {
      v14 = result;
      LANES128(result[1]).n128_u32[0] = LANES128(result[7]).n128_u32[3];
      v15 = result + 1;
      LANES128(result[2]).n128_u64[0] = LANES128(v8).n128_u64[0];
      LANES128(result[3]).n128_u64[0] = LANES128(v11).n128_u64[0];
      v16 = result[2];
      v17 = result[3];
      LANES128(v16).n128_u64[1] = v9;
      LANES128(v17).n128_u64[1] = v12;
      result[2] = v16;
      result[3] = v17;
      game_d39920(result + 1);
      result = v14;
      LANES128(v14[7]).n128_u32[2] = LANES128(v15[3]).n128_u32[0];
    }
    else {
      v18 = LANES128(result[7]).n128_f32[3];
      if (v18 <= 0x0.0p+0f) {
        if (GameData_21ec7b0 != 0) {
          v3 = *(_QWORD*)(GameData_21ec7b0 + 8);
          if (v3 != 0) {
            LOBYTE(v3) = (*(_BYTE*)(v3 + 114) & 0x20) != 0;
          }
        }
        v21 = 0x0.0p+0f;
        if (((GameData_21ec7b0 != 0) & (unsigned __int8)v3) != 0) {
          v21 = 0x1.0000000000000p-1f;
        }
        LANES128(result[7]).n128_f32[2] = v21;
      }
      else {
        v19 = vsubq_f32(v10, v13);
        v20 = vmulq_f32(v19, v19);
        LANES128(v20).n128_u64[0] =
            LANES64_OF(
                vadd_f32(
                    COERCE_AS(float32x2_t,
                              LANES128_OF(vextq_s8(v20, v20, 8u)).n128_u64[0]),
                    COERCE_AS(float32x2_t, LANES128(v20).n128_u64[0])))
                .n64_u64[0];
        LANES128(result[7]).n128_f32[2] =
            LANES64_OF(vsqrt_f32(vpadd_f32(
                           COERCE_AS(float32x2_t, LANES128(v20).n128_u64[0]),
                           COERCE_AS(float32x2_t, LANES128(v20).n128_u64[0]))))
                .n64_f32[0] /
            v18;
      }
    }
    return GameRoutine_10a3bd0(result);
  }
  return v5;
}

float32x4_t MagicInst_10a3ae0(__int64 result, float32x4_t a2)
{

#pragma clang fp contract(off)
  float v2;
  float v3;
  float v4;
  __int128 v5;
  __int128 v6;
  int v7;
  __int64 v8;
  __int64 v9;

  v2 = *(float*)(result + 120);
  if (v2 >= 0x0.0p+0f) {
    v3 = *(float*)(result + 116);
    if (v3 >= 0x0.0p+0f) {
      v4 = LANES128(a2).n128_f32[0] + v3;
      if ((*(_BYTE*)(result + 112) & (v4 > v2)) != 0) {
        v4 = *(float*)(result + 120);
      }
      *(float*)(result + 116) = v4;
      if (v2 == 0x0.0p+0f) {
        v5 = *(_OWORD*)(result + 144);
        *(_QWORD*)(result + 160) = v5;
        v6 = *(_OWORD*)(result + 160);
        *((_QWORD*)&v6 + 1) = DWORD2(v5);
        *(_OWORD*)(result + 160) = v6;
        if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a5680,
                                  memory_order_acquire) &
             1) == 0) {
          v9 = result;
          v7 = __cxa_guard_acquire(&GameData_21a5680);
          result = v9;
          if (v7 != 0) {
            v8 = *((_QWORD*)GameData_212c2f8 + 1);
            *(_QWORD*)&GameData_21a5670 = *(_QWORD*)GameData_212c2f8;
            *((_QWORD*)&GameData_21a5670 + 1) = v8;
            __cxa_guard_release(&GameData_21a5680);
            result = v9;
          }
        }
        a2 = COERCE_AS(float32x4_t, GameData_21a5670);
        *(_QWORD*)(result + 192) = GameData_21a5670;
        *(_QWORD*)(result + 200) =
            LANES128_OF(vextq_s8(a2, a2, 8u)).n128_u64[0];
      }
      else {
        return GameRoutine_10a3bd0((float32x4_t*)result);
      }
    }
  }
  return a2;
}

__attribute__((swiftcall)) void MagicInst_10a43c0(PSEUDO_X8 x8_, int a1,
                                                  float32x4_t* a2,
                                                  float32x4_t* a3, int a4,
                                                  float a6, float a7)
{

#pragma clang fp contract(off)
  float32x4_t* a5 = (float32x4_t*)PSEUDO_X8_VALUE(x8_);
  float32x4_t v7;
  float32x4_t v8;
  float32x4_t v9;
  float v10;
  float32x4_t v11;
  float v12;
  float32x4_t v13;
  float v14;
  float v15;
  float v16;
  int v17;
  unsigned int v18;
  float v19;
  float v20;
  float v21;
  float v22;
  float v23;
  int v24;
  unsigned int v25;
  float32x4_t v26;
  float v27;
  float32x4_t v28;
  float v29;
  float v30;
  int v31;
  unsigned int v32;
  float v33;
  float v34;
  float v35;
  int v36;
  unsigned int v37;
  float v38;
  int v39;
  unsigned int v40;
  float v41;
  float v42;
  float v43;
  int v44;
  unsigned int v45;
  float v46;
  float v47;
  int v48;
  unsigned int v49;
  float v50;
  float v51;
  float v52;
  int v53;
  unsigned int v54;
  float v55;
  float v56;
  float v57;
  float v58;
  float v59;
  int v60;
  unsigned int v61;
  float32x4_t v62;
  float v63;
  float v64;
  float v65;
  int v66;
  unsigned int v67;
  float32x4_t v68;
  float32x4_t result;
  float32x4_t v70;
  float32x4_t v71;
  float32x4_t v72;
  float32x4_t v73;

  v7 = *a2;
  v8 = *a3;
  switch (a1) {
  case 1:
    if (a4 < 2) {
      v38 = a6;
      v19 = a7;
    }
    else {
      v19 = a7;
      v38 = a6;
      v39 = (a4 - 1) & 7;
      if ((unsigned int)(a4 - 2) >= 7) {
        v19 = a7;
        v38 = a6;
        v40 = (a4 - 1) & 0xFFFFFFF8;
        do {
          v40 -= 8;
          v38 =
              a6 *
              (float)(a6 *
                      (float)(a6 *
                              (float)(a6 *
                                      (float)(a6 *
                                              (float)(a6 *
                                                      (float)(a6 *
                                                              (float)(a6 *
                                                                      v38)))))));
          v19 =
              a7 *
              (float)(a7 *
                      (float)(a7 *
                              (float)(a7 *
                                      (float)(a7 *
                                              (float)(a7 *
                                                      (float)(a7 *
                                                              (float)(a7 *
                                                                      v19)))))));
        } while (v40 != 0);
      }
      for (; v39 != 0; --v39) {
        v38 = a6 * v38;
        v19 = a7 * v19;
      }
    }
    v9 = vmulq_n_f32(vsubq_f32(v8, v7), v38);
    goto LABEL_84;
  case 2:
    v21 = a7 - a6;
    if (a4 < 2) {
      v23 = v21;
      v22 = a7;
    }
    else {
      v22 = a7;
      v23 = v21;
      v24 = (a4 - 1) & 7;
      if ((unsigned int)(a4 - 2) >= 7) {
        v22 = a7;
        v23 = v21;
        v25 = (a4 - 1) & 0xFFFFFFF8;
        do {
          v25 -= 8;
          v23 =
              v21 *
              (float)(v21 *
                      (float)(v21 *
                              (float)(v21 *
                                      (float)(v21 *
                                              (float)(v21 *
                                                      (float)(v21 *
                                                              (float)(v21 *
                                                                      v23)))))));
          v22 =
              a7 *
              (float)(a7 *
                      (float)(a7 *
                              (float)(a7 *
                                      (float)(a7 *
                                              (float)(a7 *
                                                      (float)(a7 *
                                                              (float)(a7 *
                                                                      v22)))))));
        } while (v25 != 0);
      }
      for (; v24 != 0; --v24) {
        v23 = v21 * v23;
        v22 = a7 * v22;
      }
    }
    v62 = vsubq_f32(v8, v7);
    v63 = 0x1.0000000000000p+0f / v22;
    goto LABEL_99;
  case 3:
    LANES128(v26).n128_u64[0] = 0x3F0000003F000000LL;
    LANES128(v26).n128_u64[1] = 0x3F0000003F000000LL;
    v27 = a7 * 0x1.0000000000000p-1f;
    v28 = vaddq_f32(v7, vmulq_f32(vsubq_f32(v8, v7), v26));
    if (a6 >= v27) {
      v64 = v27 - (float)(a6 - v27);
      if (a4 < 2) {
        v23 = v64;
        v65 = v27;
      }
      else {
        v65 = v27;
        v23 = v64;
        v66 = (a4 - 1) & 7;
        if ((unsigned int)(a4 - 2) >= 7) {
          v65 = v27;
          v23 = v64;
          v67 = (a4 - 1) & 0xFFFFFFF8;
          do {
            v67 -= 8;
            v23 =
                v64 *
                (float)(v64 *
                        (float)(v64 *
                                (float)(v64 *
                                        (float)(v64 *
                                                (float)(v64 *
                                                        (float)(v64 *
                                                                (float)(v64 *
                                                                        v23)))))));
            v65 =
                v27 *
                (float)(v27 *
                        (float)(v27 *
                                (float)(v27 *
                                        (float)(v27 *
                                                (float)(v27 *
                                                        (float)(v27 *
                                                                (float)(v27 *
                                                                        v65)))))));
          } while (v67 != 0);
        }
        for (; v66 != 0; --v66) {
          v23 = v64 * v23;
          v65 = v27 * v65;
        }
      }
      v62 = vsubq_f32(v8, v28);
      v63 = 0x1.0000000000000p+0f / v65;
    LABEL_99:
      v73 = vmulq_n_f32(vmulq_n_f32(v62, v23), v63);
      LANES128(v73).n128_u32[3] = 0;
      result = vsubq_f32(v8, v73);
      *a5 = result;
    }
    else {
      if (a4 < 2) {
        v30 = a6;
        v29 = v27;
      }
      else {
        v29 = v27;
        v30 = a6;
        v31 = (a4 - 1) & 7;
        if ((unsigned int)(a4 - 2) >= 7) {
          v29 = v27;
          v30 = a6;
          v32 = (a4 - 1) & 0xFFFFFFF8;
          do {
            v32 -= 8;
            v30 =
                a6 *
                (float)(a6 *
                        (float)(a6 *
                                (float)(a6 *
                                        (float)(a6 *
                                                (float)(a6 *
                                                        (float)(a6 *
                                                                (float)(a6 *
                                                                        v30)))))));
            v29 =
                v27 *
                (float)(v27 *
                        (float)(v27 *
                                (float)(v27 *
                                        (float)(v27 *
                                                (float)(v27 *
                                                        (float)(v27 *
                                                                (float)(v27 *
                                                                        v29)))))));
          } while (v32 != 0);
        }
        for (; v31 != 0; --v31) {
          v30 = a6 * v30;
          v29 = v27 * v29;
        }
      }
      v72 = vsubq_f32(v28, v7);
      v10 = 0x1.0000000000000p+0f / v29;
      v9 = vmulq_n_f32(v72, v30);
    LABEL_85:
      v68 = vmulq_n_f32(v9, v10);
    LABEL_90:
      LANES128(v68).n128_u32[3] = 0;
      result = vaddq_f32(v7, v68);
      *a5 = result;
    }
    {
      result;
      return;
    }
  case 4:
    LANES128(v11).n128_u64[0] = 0x3F0000003F000000LL;
    LANES128(v11).n128_u64[1] = 0x3F0000003F000000LL;
    v12 = a7 * 0x1.0000000000000p-1f;
    v13 = vaddq_f32(v7, vmulq_f32(vsubq_f32(v8, v7), v11));
    if (a6 >= v12) {
      v57 = a6 - v12;
      if (a4 < 2) {
        v59 = v57;
        v58 = v12;
      }
      else {
        v58 = v12;
        v59 = v57;
        v60 = (a4 - 1) & 7;
        if ((unsigned int)(a4 - 2) >= 7) {
          v58 = v12;
          v59 = v57;
          v61 = (a4 - 1) & 0xFFFFFFF8;
          do {
            v61 -= 8;
            v59 =
                v57 *
                (float)(v57 *
                        (float)(v57 *
                                (float)(v57 *
                                        (float)(v57 *
                                                (float)(v57 *
                                                        (float)(v57 *
                                                                (float)(v57 *
                                                                        v59)))))));
            v58 =
                v12 *
                (float)(v12 *
                        (float)(v12 *
                                (float)(v12 *
                                        (float)(v12 *
                                                (float)(v12 *
                                                        (float)(v12 *
                                                                (float)(v12 *
                                                                        v58)))))));
          } while (v61 != 0);
        }
        for (; v60 != 0; --v60) {
          v59 = v57 * v59;
          v58 = v12 * v58;
        }
      }
      v71 = vmulq_n_f32(vmulq_n_f32(vsubq_f32(v8, v13), v59),
                        0x1.0000000000000p+0f / v58);
      LANES128(v71).n128_u32[3] = 0;
      result = vaddq_f32(v13, v71);
      *a5 = result;
    }
    else {
      v14 = v12 - a6;
      if (a4 < 2) {
        v16 = v14;
        v15 = v12;
      }
      else {
        v15 = v12;
        v16 = v14;
        v17 = (a4 - 1) & 7;
        if ((unsigned int)(a4 - 2) >= 7) {
          v15 = v12;
          v16 = v14;
          v18 = (a4 - 1) & 0xFFFFFFF8;
          do {
            v18 -= 8;
            v16 =
                v14 *
                (float)(v14 *
                        (float)(v14 *
                                (float)(v14 *
                                        (float)(v14 *
                                                (float)(v14 *
                                                        (float)(v14 *
                                                                (float)(v14 *
                                                                        v16)))))));
            v15 =
                v12 *
                (float)(v12 *
                        (float)(v12 *
                                (float)(v12 *
                                        (float)(v12 *
                                                (float)(v12 *
                                                        (float)(v12 *
                                                                (float)(v12 *
                                                                        v15)))))));
          } while (v18 != 0);
        }
        for (; v17 != 0; --v17) {
          v16 = v14 * v16;
          v15 = v12 * v15;
        }
      }
      v70 = vmulq_n_f32(vmulq_n_f32(vsubq_f32(v13, v7), v16),
                        0x1.0000000000000p+0f / v15);
      LANES128(v70).n128_u32[3] = 0;
      result = vsubq_f32(v13, v70);
      *a5 = result;
    }
    {
      result;
      return;
    }
  case 5:
    v41 = a7 - a6;
    if (a4 < 2) {
      v43 = a7 - a6;
      v42 = a7;
    }
    else {
      v42 = a7;
      v43 = a7 - a6;
      v44 = (a4 - 1) & 7;
      if ((unsigned int)(a4 - 2) >= 7) {
        v42 = a7;
        v43 = a7 - a6;
        v45 = (a4 - 1) & 0xFFFFFFF8;
        do {
          v45 -= 8;
          v43 =
              v41 *
              (float)(v41 *
                      (float)(v41 *
                              (float)(v41 *
                                      (float)(v41 *
                                              (float)(v41 *
                                                      (float)(v41 *
                                                              (float)(v41 *
                                                                      v43)))))));
          v42 =
              a7 *
              (float)(a7 *
                      (float)(a7 *
                              (float)(a7 *
                                      (float)(a7 *
                                              (float)(a7 *
                                                      (float)(a7 *
                                                              (float)(a7 *
                                                                      v42)))))));
        } while (v45 != 0);
      }
      for (; v44 != 0; --v44) {
        v43 = v41 * v43;
        v42 = a7 * v42;
      }
    }
    v55 = (float)(a6 / a7) + 0x0.0p+0f;
    v56 = 0x1.0000000000000p+0f - (float)(v43 / v42);
    goto LABEL_88;
  case 6:
    v46 = a6;
    v47 = a7;
    if (a4 >= 2) {
      v47 = a7;
      v46 = a6;
      v48 = (a4 - 1) & 7;
      if ((unsigned int)(a4 - 2) >= 7) {
        v47 = a7;
        v46 = a6;
        v49 = (a4 - 1) & 0xFFFFFFF8;
        do {
          v49 -= 8;
          v46 =
              a6 *
              (float)(a6 *
                      (float)(a6 *
                              (float)(a6 *
                                      (float)(a6 *
                                              (float)(a6 *
                                                      (float)(a6 *
                                                              (float)(a6 *
                                                                      v46)))))));
          v47 =
              a7 *
              (float)(a7 *
                      (float)(a7 *
                              (float)(a7 *
                                      (float)(a7 *
                                              (float)(a7 *
                                                      (float)(a7 *
                                                              (float)(a7 *
                                                                      v47)))))));
        } while (v49 != 0);
      }
      for (; v48 != 0; --v48) {
        v46 = a6 * v46;
        v47 = a7 * v47;
      }
    }
    v50 = (float)((float)(a6 / a7) + 0x0.0p+0f) +
          (float)((float)(a6 * (float)((float)((float)(v46 / v47) + 0x0.0p+0f) -
                                       (float)((float)(a6 / a7) + 0x0.0p+0f))) /
                  a7);
    goto LABEL_89;
  case 7:
    v33 = a7 - a6;
    if (a4 < 2) {
      v35 = a7 - a6;
      v34 = a7;
    }
    else {
      v34 = a7;
      v35 = a7 - a6;
      v36 = (a4 - 1) & 7;
      if ((unsigned int)(a4 - 2) >= 7) {
        v34 = a7;
        v35 = a7 - a6;
        v37 = (a4 - 1) & 0xFFFFFFF8;
        do {
          v37 -= 8;
          v35 =
              v33 *
              (float)(v33 *
                      (float)(v33 *
                              (float)(v33 *
                                      (float)(v33 *
                                              (float)(v33 *
                                                      (float)(v33 *
                                                              (float)(v33 *
                                                                      v35)))))));
          v34 =
              a7 *
              (float)(a7 *
                      (float)(a7 *
                              (float)(a7 *
                                      (float)(a7 *
                                              (float)(a7 *
                                                      (float)(a7 *
                                                              (float)(a7 *
                                                                      v34)))))));
        } while (v37 != 0);
      }
      for (; v36 != 0; --v36) {
        v35 = v33 * v35;
        v34 = a7 * v34;
      }
    }
    v55 = 0x1.0000000000000p+0f - (float)(v35 / v34);
    v56 = (float)(a6 / a7) + 0x0.0p+0f;
    goto LABEL_88;
  case 8:
    v51 = a6;
    v52 = a7;
    if (a4 >= 2) {
      v52 = a7;
      v51 = a6;
      v53 = (a4 - 1) & 7;
      if ((unsigned int)(a4 - 2) >= 7) {
        v52 = a7;
        v51 = a6;
        v54 = (a4 - 1) & 0xFFFFFFF8;
        do {
          v54 -= 8;
          v51 =
              a6 *
              (float)(a6 *
                      (float)(a6 *
                              (float)(a6 *
                                      (float)(a6 *
                                              (float)(a6 *
                                                      (float)(a6 *
                                                              (float)(a6 *
                                                                      v51)))))));
          v52 =
              a7 *
              (float)(a7 *
                      (float)(a7 *
                              (float)(a7 *
                                      (float)(a7 *
                                              (float)(a7 *
                                                      (float)(a7 *
                                                              (float)(a7 *
                                                                      v52)))))));
        } while (v54 != 0);
      }
      for (; v53 != 0; --v53) {
        v51 = a6 * v51;
        v52 = a7 * v52;
      }
    }
    v55 = (float)(v51 / v52) + 0x0.0p+0f;
    v56 = (float)(a6 / a7) + 0x0.0p+0f;
  LABEL_88:
    v50 = v55 + (float)((float)(a6 * (float)(v56 - v55)) / a7);
  LABEL_89:
    v68 = vmulq_n_f32(vsubq_f32(v8, v7), v50);
    goto LABEL_90;
  case 9:
    v19 = a7 * 0x1.0000000000000p-1f;
    v20 = a7 - a6;
    if (a6 > v19) {
      a6 = v20;
    }
    v9 = vmulq_n_f32(vsubq_f32(v8, v7), a6);
  LABEL_84:
    v10 = 0x1.0000000000000p+0f / v19;
    goto LABEL_85;
  default:
    v9 = vmulq_n_f32(vsubq_f32(v8, v7), a6);
    v10 = 0x1.0000000000000p+0f / a7;
    goto LABEL_85;
  }
}

__attribute__((swiftcall)) void MagicInst_10a4bf0(PSEUDO_X8 x8_, int8x16_t* a1,
                                                  double unused_float0,
                                                  int32x4_t a3)
{
  float32x4_t* a2 = (float32x4_t*)PSEUDO_X8_VALUE(x8_);
  int8x16_t v3;
  float32x4_t v4;
  int8x16_t v5;
  float32x4_t v6;
  float32x4_t v7;
  int8x16_t result;

  LANES128(a3).n128_u32[0] = LANES128(*(a1)).n128_u32[0];
  *a2 = (__typeof__(*a2)){0};
  v3 = vbslq_s8(
      vdupq_lane_s32(
          COERCE_AS(
              int32x2_t,
              LANES128_OF(vceqq_s32(a3, COERCE_AS(int32x4_t, 2u))).n128_u64[0]),
          0),
      a1[5], vsubq_f32(a1[9], a1[8]));
  LANES128(*(a2)).n128_u64[0] = LANES128(v3).n128_u64[0];
  v4 = *a2;
  LANES128(v4).n128_u64[1] = LANES128(v3).n128_u32[2];
  v5 = vmulq_f32(v4, v4);
  LANES128(v5).n128_u64[0] =
      LANES64_OF(
          vadd_f32(COERCE_AS(float32x2_t,
                             LANES128_OF(vextq_s8(v5, v5, 8u)).n128_u64[0]),
                   COERCE_AS(float32x2_t, LANES128(v5).n128_u64[0])))
          .n64_u64[0];
  LANES128(v5).n128_u64[0] =
      LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v5).n128_u64[0]),
                           COERCE_AS(float32x2_t, LANES128(v5).n128_u64[0])))
          .n64_u64[0];
  LANES128(v5).n128_u64[1] = LANES128(v5).n128_u64[0];
  v6 = vrsqrteq_f32(v5);
  v7 = vmulq_f32(v6, vrsqrtsq_f32(v6, vmulq_f32(v5, v6)));
  result = vbicq_s8(
      vmulq_f32(v4, vmulq_f32(v7, vrsqrtsq_f32(v7, vmulq_f32(v5, v7)))),
      vceqzq_f32(v5));
  *a2 = result;
  {
    result;
    return;
  }
}

void MagicInst_10a4d70(unsigned int* a1)
{

#pragma clang fp contract(off)
  unsigned int v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  bool v5;
  __int64 v6;
  bool v7;
  int v9;
  int v10;
  int v11;
  unsigned int v12;
  unsigned int v13;
  bool v14;
  __int64 v15;
  int v16;
  unsigned int v17;
  __int64* v18;
  _QWORD* v19;
  __int64 v20;
  _QWORD v21[2];

  if (GameData_21ec7b0 == 0) {
    return;
  }
  v1 = a1[3];
  if (v1 > 3) {
    return;
  }
  v2 = GameData_21ec7b0 + 24LL * v1;
  v3 = *(_QWORD*)(v2 + 32);
  if (v3 == 0) {
    return;
  }
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v3 + 16), 1u,
                            memory_order_relaxed);
  v4 = *(_QWORD*)(v2 + 40);
  v5 = *(_QWORD*)(v3 + 8) == -1 || v4 == 0;
  if (v5 || (v6 = *(_QWORD*)(v4 + 80)) == 0 ||
      (*(_QWORD*)(v6 + 8) != -1 ? (v7 = *(_QWORD*)(v4 + 88) == 0) : (v7 = true),
       v7 || *(_QWORD*)(v3 + 8) == -1)) {
    std___1___shared_weak_count___release_weak(v3);
    return;
  }
  std___1___shared_weak_count___release_weak(v3);
  v9 = a1[3 * a1[3] + 26];
  if (v9 >= 0) {
    v10 = 16;
  }
  else {
    v10 = 64;
  }
  if ((a1[2] & 0xFFFFFFFE) == 2) {
    v11 = v10;
  }
  else {
    v11 = 0;
  }
  v12 = *a1;
  v13 = v11 & 0xFFFFFEDE | (32 * ((a1[1] & 2) != 0)) |
        (((a1[1] & 4) != 0) << 8) | (a1[1] >> 1) & 0x80 | *a1 & 1;
  if ((*a1 & 0x80) == 0 && (v13 |= (v12 >> 1) & 4, (v12 & 4) != 0)) {
    v13 |= 2u;
    v14 = v9 == 0;
  }
  else {
    v14 = v9 == 0;
    if ((v9 | v13) == 0) {
      return;
    }
  }
  GameRoutine_10691b0((void*)(v21), v4);
  *((float*)v21 + 1) = *((float*)v21 + 1) + 0x1.6666660000000p-1f;
  if (!v14) {
    v16 = a1[3];
    if (v16 > 1) {
      if (v16 == 3) {
        goto LABEL_34;
      }
      if (v16 != 2) {
        goto LABEL_35;
      }
    }
    else if (v16 != 0) {
      if (v16 != 1) {
        goto LABEL_35;
      }
    LABEL_34:
      v13 |= 0x8000u;
      goto LABEL_35;
    }
    v13 |= 0x4000u;
  }
LABEL_35:
  if (GameData_21ec7b0 != 0) {
    v15 = *(_QWORD*)(GameData_21ec7b0 + 8);
    if (v15 != 0) {
      LOBYTE(v15) = (*(_BYTE*)(v15 + 113) & 0x40) != 0;
    }
  }
  if ((v13 | v9) != 0 &&
      ((GameData_21ec7b0 != 0) & (unsigned __int8)v15) == 0) {
    v17 = v13;
    v18 = GameData_212d570[0];
    if ((v13 & 0xC00) != 0) {
      if (*GameData_212d570[0] != 0) {
        GameRoutine_18c4dd0(*(_QWORD**)GameData_212d570[0], (__int64)v21, 0,
                            v13 & 0xC00);
      }
      v17 = v13 & 0xFFFFF3FF;
    }
    v19 = (_QWORD*)*v18;
    if (v13 == 0x2000) {
      if (v19 != nullptr) {
        GameRoutine_18c66b0((__int64)v19, (int*)v21);
      }
    }
    else if (v19 != nullptr) {
      GameRoutine_18c4dd0(v19, (__int64)v21, v9, v17);
    }
    if (GameData_21ec7b0 != 0) {
      v20 = *(_QWORD*)(GameData_21ec7b0 + 128);
      if (v20 != 0) {
        *(_DWORD*)(v20 + 464) = 1062557013;
      }
    }
  }
}

__n128 MagicInst_10a4fe0(__int64 a1, int a2)
{

#pragma clang fp contract(off)
  unsigned int v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  bool v6;
  __int64 v7;
  __int64 v8;
  bool v9;
  __n128 result;
  int v13;
  __int64 v14;
  __int64 v15;
  float32x4_t* v16;
  unsigned __int64 v18;
  bool v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __n128 v23;

  result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  if (GameData_21ec7b0 == 0) {
    return result;
  }
  v2 = *(_DWORD*)(a1 + 8);
  if (v2 > 3) {
    return result;
  }
  v3 = GameData_21ec7b0 + 24LL * v2;
  v4 = *(_QWORD*)(v3 + 32);
  if (v4 == 0) {
    return result;
  }
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v4 + 16), 1u,
                            memory_order_relaxed);
  v5 = *(_QWORD*)(v3 + 40);
  v6 = *(_QWORD*)(v4 + 8) == -1 || v5 == 0;
  if (v6 || (v7 = *(_QWORD*)(v5 + 80)) == 0 ||
      ((v8 = *(_QWORD*)(v5 + 88), *(_QWORD*)(v7 + 8) != -1) ? (v9 = v8 == 0)
                                                            : (v9 = true),
       v9 || *(_QWORD*)(v4 + 8) == -1)) {
    v15 = v4;
    return std___1___shared_weak_count___release_weak(v15);
  }
  result = std___1___shared_weak_count___release_weak(v4);
  if ((unsigned int)a2 > 3) {
    return result;
  }
  v13 = *(_DWORD*)(a1 + 12LL * a2 + 104);
  if (v13 == 0) {
    return result;
  }
  v14 = GameData_21ec7b0 + 24LL * (unsigned int)a2;
  v15 = *(_QWORD*)(v14 + 32);
  if (v15 == 0) {
    return result;
  }
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v15 + 16), 1u,
                            memory_order_relaxed);
  v16 = *(float32x4_t**)(v14 + 40);
  if (*(_QWORD*)(v15 + 8) == -1 || v16 == nullptr) {
    return std___1___shared_weak_count___release_weak(v15);
  }
  v18 = LANES128(v16[5]).n128_u64[0];
  if (v18 == 0) {
    return std___1___shared_weak_count___release_weak(v15);
  }
  v19 = *(_QWORD*)(v18 + 8) == -1 || LANES128(v16[5]).n128_u64[1] == 0;
  if (v19 || *(_QWORD*)(v15 + 8) == -1) {
    return std___1___shared_weak_count___release_weak(v15);
  }
  std___1___shared_weak_count___release_weak(v15),
      result =
          COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  v20 = GameData_21ec7b0;
  result = vaddq_f32(
      vmulq_f32(*(float32x4_t*)GameData_212c558, vdupq_n_s32(0x3FD9999Au)),
      v16[7]);
  v23 = result;
  if (GameData_21ec7b0 == 0 || (v21 = *(_QWORD*)(GameData_21ec7b0 + 8)) == 0 ||
      (*(_BYTE*)(v21 + 113) & 0x40) == 0) {
    if (GameData_21ed098 != 0) {
      GameRoutine_18c4dd0((_QWORD*)GameData_21ed098, (__int64)&v23, v13, 0),
          result = COERCE_AS(__typeof__(result),
                             PSEUDO_REGISTER(__n128, "v0", "=w"));
      v20 = GameData_21ec7b0;
    }
    if (v20 != 0) {
      v22 = *(_QWORD*)(v20 + 128);
      if (v22 != 0) {
        *(_DWORD*)(v22 + 464) = 1062557013;
      }
    }
  }
  return result;
}

#pragma GCC visibility pop
