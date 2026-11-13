#include "decomp/pseudo_helpers.h"

#include "decomp/pseudo_float.h"

#pragma GCC visibility push(hidden)

_QWORD* GameRoutine_64df20(_QWORD*, __int64, unsigned __int64);
_QWORD* GameRoutine_ce65f0(__int64*, _QWORD*);
_QWORD* GameRoutine_e4ea90(_QWORD* result, _QWORD*);
_QWORD* GameRoutine_e4eee0(_QWORD* result, _QWORD*);
_QWORD* GameRoutine_e4fc30(_QWORD* result, _QWORD*);
__attribute__((swiftcall)) void GameRoutine_1085a10(PSEUDO_X8, _QWORD, _QWORD,
                                                    _QWORD, _QWORD);
__attribute__((swiftcall)) void JostleManager_ea1180(PSEUDO_X8, _QWORD*,
                                                     __int64*);
__int64* CharacterModel_1070c00(__int64, __int64);
__int64* SpineModel_64dde0(__int64*, __int64, unsigned __int64);
__int64 GameHr_e30f30(__int64, __int64);
__int64 GameHr_e3b8e0(__int64 result, char*, char*, unsigned __int64);
__int64 GameHr_e42180(__int64);
__int64 GameRoutine_1a09ce0(__int64, const char*, unsigned __int64);
__int64 GameRoutine_60a020(__int64, const char*);
__int64 GameRoutine_ce6740(__int64, __int64);
__int64 GameRoutine_e4cdb0(unsigned __int64);
__int64 GameRoutine_e59440(__int64, __int64);
__int64 LegionGambit_e4d550(__int64, float);
__int64 LegionGambit_e4d990(__int64, int);
__int64 LegionStateBattleFighter_e3a100(__int64);
__int64 LegionStateBattleFighter_e3b0b0(__int64, unsigned int);
__int64 RuntimeBuffer_8924a0(__int64 result, __int64, unsigned __int64,
                             unsigned __int8);
__int64 StateMachines_e32520(__int64, __int64);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 fw_text_String_CopyTerminated(__int64*, __int64, unsigned __int64);
__int64 game_HashString(__int64 result);
__int64 game_ea3620(__int64 result, char, int);
__int64 memchr(__int64, int, unsigned __int64);
__int64 memcpy(__int64, __int64, unsigned __int64);
__int64 memmove(__int64, __int64, unsigned __int64);
__int64 nn_os_LockMutex(__int64);
__int64 nn_os_UnlockMutex(__int64);
__int64 std___1___shared_weak_count___release_weak(__int64);
__int64 wld_Crc32(int, unsigned __int8*, unsigned __int64);
bool GameHr_e406e0(__int64, int);
char* GameRoutine_60a060(char*, __int64, unsigned __int64);
char* GameRoutine_e37f80(__int64*, char*, char*);
char* GameRoutine_e39fe0(__int64, int*);
double cos(double);
double sin(double);
extern _DWORD* GameData_212d168;
extern _UNKNOWN* GameData_212deb8;
extern _UNKNOWN* GameData_212eda0;
extern _UNKNOWN* GameData_212f3f8;
extern _UNKNOWN game_g_random_mutex;
extern __int64 (*GameData_1fd7c18[])();
extern __int64 (*GameData_1fe4680[])();
extern __int64 (*GameData_1fe46d0[])();
extern __int64 (*GameData_1fe4720[])();
extern __int64 (*GameData_1fe4770[])();
extern __int64 (*GameData_1fe47c0[])();
extern __int64 (*GameData_1fe4810[])();
extern __int64 (*GameData_1fe4860[])();
extern __int64 (*GameData_1fe4ce8[])();
extern __int64 (*GameData_1fe4d38[])();
extern __int64 (*GameData_1fe4e28[])();
extern __int64 (*GameData_1fe4f48[])();
extern __int64 (*GameData_1fe4f98[])();
extern __int64 (*GameData_1fe4fe8[])();
extern __int64 (*GameData_1fe5038[])();
extern __int64 (*GameData_1fe5168[])();
extern __int64 (*GameData_1fe5238[])();
extern __int64 (*GameData_1fe52b8[])();
extern __int64 (*GameData_1fe5338[])();
extern __int64 (*GameData_1fe5388[])();
extern __int64 (*GameData_1fe53d8[])();
extern __int64 (*GameData_1fe5428[])();
extern __int64 (*GameData_1fe54a8[])();
extern __int64 (*GameData_1fe5528[])();
extern __int64 (*GameData_1fe5578[])();
extern __int64 (*GameData_1fe55c8[])();
extern __int64 (*GameData_1fe5648[])();
extern __int64 (*GameData_1fe5698[])();
extern __int64 (*GameData_1fe56e8[])();
extern __int64 (*GameData_1fe5768[])();
extern __int64 (*GameData_1fe57e8[])();
extern __int64 (*GameData_1fe5838[])();
extern __int64 (*GameData_1fe58b8[])();
extern __int64 (*GameData_1fe5938[])();
extern __int64 (*GameData_1fe59b8[])();
extern __int64 (*GameData_1fe5a38[])();
extern __int64 (*GameData_1fe5a88[])();
extern __int64 (*GameData_1fe5b18[])();
extern __int64 (*GameData_1fe5b68[])();
extern __int64 (*GameData_1fe5be8[])();
extern __int64 (*GameData_1fe5c68[])();
extern __int64 (*GameData_1fe5ce8[])();
extern __int64 (*GameData_1fe5d38[])();
extern __int64 (*GameData_1fe5db8[])();
extern __int64 (*GameData_1fe5e38[])();
extern __int64 (*game_combat_CombatLegion_vtable[])();
extern __int64 (*game_combat_LegionStackApproach_vtable[])();
extern __int64 (*game_combat_LegionStackAttack_vtable[])();
extern __int64 (*game_combat_LegionStackDelay_vtable[])();
extern __int64 (*game_combat_LegionStackMotion_vtable[])();
extern __int64 (*game_combat_LegionStackWaitDamage_vtable[])();
extern __int64 (*game_combat_LegionStackWalkAndSee_vtable[])();
extern __int64* GameData_212c998[148];
extern __int64* GameData_212d2f0;
extern __int64* GameData_212d448[9];
extern __int64* GameData_212ece0[2];
extern __int64* GameData_212f2e0;
extern __int64* GameData_212f360[10];
extern __int64* GameData_212f3f0;
extern __int64* GameData_212f400;
extern __int64* GameData_212f420[27];
extern __int64* GameData_212f430[25];
extern __int64* GameData_212f438[24];
extern __int64* GameData_212f440[23];
extern __int64* GameData_212f448[22];
extern __int64* GameData_212f458[20];
extern __int64* GameData_212f460[19];
extern __int64* GameData_212f468[18];
extern __int64* GameData_212f470[17];
extern __int64* GameData_212f478[16];
extern __int64* GameData_212f480[15];
extern __int64* GameData_212f488[14];
extern __int64* GameData_212f490[13];
extern __int64* GameData_212f498[12];
extern __int64* GameData_212f4a0[11];
extern __int64* GameData_212f4a8[10];
extern __int64* GameData_212f4b0[9];
extern __int64* GameData_212f4b8[8];
extern __int64* game_map_MapRandom_instance__ptr[3];
extern __int64 GameData_212d4f0[2];
extern __int64 GameData_212e420[4];
extern __int64 as_g_base_frame_counter;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_script_hub_g_frame_counter_ptr[3];
extern char* GameData_1fe5e78;
extern int* GameData_212deb0;
extern int* GameData_212ed98;
float CharacterAnimator_1079580(__int64, int, float, float, float);
float game_combat_e401e0(float*, float*);
float game_edf4a0();
float powf(float, float);
int __cxa_guard_acquire(__int64);
unsigned __int64 GameRoutine_d2b5f0(__int64);
unsigned __int64 strlen(const char*);
void GameRoutine_7a8220(__int64*, _QWORD*);
void GameRoutine_ce6d60();
void GameRoutine_e4df90(__int64*, _DWORD*);
void StateMachines_e330c0(__int64, unsigned int);
void __attribute__((noreturn)) GameRoutine_60a210();
void __attribute__((noreturn)) GameRoutine_8123d0();
void __attribute__((noreturn)) GameRoutine_a78a90();
void __attribute__((noreturn)) GameRoutine_e3b8c0();
void __attribute__((noreturn)) String_60a1d0();
void __cxa_guard_release(__int64);
void nn_mem_StandardAllocator_Free(__int64, __int64);
void game_combat_e382a0(__int64 a1);
__int64 game_combat_e3e720(__int64 a1, __int64* a2, __int64 a3, __int64 a4,
                           unsigned __int64 a5, char a6, unsigned __int64 a7);
__int64 game_combat_e414c0(__int64 a1, float* a2);
void game_combat_e45540(__int64 a1, __int64 a2);
void game_combat_1068b40(__int64 a1, char a2);

void game_combat_e382a0(__int64 a1)
{
  __int64 v1;
  float v2;
  _QWORD* v3;
  __int64 v4;
  __int64 v6;
  __int64 v7;
  char v8;
  float v9;
  float v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64* v17;
  unsigned int* v18;
  unsigned int* v19;
  _QWORD* v20;
  __int64 v21;
  unsigned __int64 v22;
  __int64 v23;
  unsigned __int64 v24;
  __int64 v25;
  unsigned __int64 v26;
  __int64 v27;
  unsigned __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  int v33;
  int v34;
  int v35;
  unsigned int v36;
  unsigned int v37;
  int v38;
  __int64 v39;
  int v40;
  unsigned int* v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  int v45;
  unsigned int v46;
  unsigned int v47;
  int v48;
  _QWORD* v49;
  __int64* v50;
  __int64 v51;
  unsigned __int64 v52;
  unsigned __int64 v53;
  float v54;
  float v55;
  __int64* v56;
  float v57;
  __int64 v58;
  __int64 v59;
  char* v60;
  __int64 v61;
  __int64 v62;
  int v63;
  char* v64;
  __int64 v65;
  __int64* v66;
  unsigned int* v67;
  int v68;
  __int64 v69;
  __int64 v70;
  __int64* v71;
  char* v72;
  char* v73;
  __int64 v74;
  __int64 v75;
  __int64 v76;
  char* v77;
  __int64 v78;
  __int64 v79;
  __int64 v80;
  __int64 v81;
  char* v82;
  char* v83;
  __int64 v84;
  __int64* v85;
  unsigned int* v86;
  int v87;
  __int64 v88;
  __int64 v89;
  __int64 v90;
  __int64 v91;
  char* v92;
  __int64 v93;
  __int64 v94;
  __int64 v95;
  char* v96;
  __int64* v97;
  unsigned int* v98;
  int v99;
  __int64 v100;
  __int64 v101;
  __int64* v102;
  char* v103;
  char* v104;
  __int64 v105;
  __int64 v106;
  __int64 v107;
  char* v108;
  __int64 v109;
  __int64 v110;
  __int64 v111;
  __int64 v112;
  char* v113;
  char* v114;
  __int64* v115;
  unsigned int* v116;
  __int64 v117;
  unsigned int v118;
  __int64 v119;
  int v120;
  int v121;
  __int64 v122;
  char* v123;
  char* v124;
  __int64 v125;
  __int64 v126;
  __int64 v127;
  __int64 v128;
  char* v129;
  char* v130;
  __int64 v131;
  __int64 v132;
  char* v133;
  __int64* v134;
  unsigned int* v135;
  __int64 v136;
  int v137;
  __int64 v138;
  __int64 v139;
  __int64 v140;
  char* v141;
  char* v142;
  __int64 v143;
  __int64 v144;
  __int64 v145;
  char* v146;
  __int64* v147;
  unsigned int* v148;
  int v149;
  __int64 v150;
  __int64 v151;
  char* v152;
  char* v153;
  __int64 v154;
  __int64 v155;
  __int64 v156;
  char* v157;
  __int64* v158;
  unsigned int* v159;
  int v160;
  __int64 v161;
  int v162;
  __int64 v163;
  __int64 v164;
  char* v165;
  char* v166;
  __int64 v167;
  __int64* v168;
  unsigned int* v169;
  int v170;
  __int64 v171;
  __int64 v172;
  __int64 v173;
  __int64 v174;
  char* v175;
  __int64 v176;
  __int64 v177;
  __int64 v178;
  char* v179;
  __int64* v180;
  unsigned int* v181;
  __int64 v182;
  int v183;
  __int64 v184;
  __int64 v185;
  __int64 v186;
  char* v187;
  char* v188;
  __int64 v189;
  __int64 v190;
  __int64 v191;
  char* v192;
  __int64 v193;
  int v194;
  char* v195;
  __int64 v196;
  int v197;
  __int64* v198;
  unsigned int* v199;
  int v200;
  __int64 v201;
  __int64 v202;
  int v203;
  char* v204;
  __int64 v205;
  __int64 v206;
  char* v207;
  __int64 v208;
  struct {
    __int64 v209;
    __int64 v210;
  } v209_;
  struct {
    __int64 v211;
    __int64 v212;
  } v211_;
  struct {
    __int64 v213;
    __int64 v214;
  } v213_;
  struct {
    __int64 v215;
    __int64 v216;
  } v215_;
  struct {
    __int64 v217;
    __int64 v218;
  } v217_;
  struct {
    __int64 v219;
    __int64 v220;
  } v219_;
  struct {
    __int64 v221;
    __int64 v222;
  } v221_;
  struct {
    __int64 v223;
    __int64 v224;
  } v223_;
  struct {
    __int64 v225;
    __int64 v226;
  } v225_;
  struct {
    __int64 v227;
    __int64 v228;
  } v227_;
  struct {
    __int64 v229;
    __int64 v230;
  } v229_;
  struct {
    __int64 v231;
    __int64 v232;
  } v231_;
  struct {
    __int64 v233;
    __int64 v234;
  } v233_;
  struct {
    __int64 v235;
    __int64 v236;
  } v235_;
  struct {
    __int64 v237;
    __int64 v238;
  } v237_;
  struct {
    __int64 v239;
    __int64 v240;
  } v239_;
  struct {
    __int64 v241;
    __int64 v242;
  } v241_;
  struct {
    __int64 v243;
    __int64 v244;
  } v243_;
  struct {
    __int64 v245;
    __int64 v246;
  } v245_;
  struct {
    __int64 v247;
    __int64 v248;
  } v247_;
  struct {
    __int64 v249;
    __int64 v250;
  } v249_;
  struct {
    __int64 v251;
    __int64 v252;
  } v251_;
  struct {
    __int64 v253;
    __int64 v254;
  } v253_;
  struct {
    __int64 v255;
    __int64 v256;
  } v255_;
  struct {
    __int64 v257;
    __int64 v258;
  } v257_;
  struct {
    __int64 v259;
    _QWORD* v260;
    unsigned __int64 v261;
  } v259_;
  struct {
    unsigned int* v262;
    __int64 v263;
    _DWORD* v264;
  } v262_;
  _QWORD v265[2];
  struct {
    _QWORD var60[14];
    __int64 vars10;
  } var60_;

  v120 = COERCE_AS(__typeof__(v120), PSEUDO_REGISTER(float, "s0", "=w"));
  v2 = 0x0.0p+0f;
  v3 = *(_QWORD**)(*(_QWORD*)(a1 + 8) + 176LL);
  v4 = v3[6];
  if (v4 != 0 && *(_QWORD*)(v4 + 8) != -1 && v3[7] != 0) {
    v6 = v3[1];
    if (v6 != 0) {
      v2 = (float)(*(float*)(*(_QWORD*)(v6 + 496) + 16LL) *
                   0x1.0aef000000000p+4f) /
           0x1.f400000000000p+9f;
    }
  }
  if ((*(_BYTE*)(a1 + 32) & 1) == 0) {
    v7 = a1;
    v8 = LegionStateBattleFighter_e3a100(a1),
    v120 = COERCE_AS(__typeof__(v120), PSEUDO_REGISTER(float, "s0", "=w"));
    a1 = v7;
    if ((v8 & 1) != 0) {
      *(float*)(v7 + 40) = fmaxf(*(float*)(v7 + 40), 0x1.0000000000000p+0f);
    }
  }
  v9 = *(float*)(a1 + 40);
  v10 = fabsf(v2);
  if (v9 > 0x0.0p+0f) {
    v9 = v9 - v10;
    if (v9 >= 0x0.0p+0f) {
      goto LABEL_17;
    }
    goto LABEL_16;
  }
  if (v9 < 0x0.0p+0f) {
    v9 = v10 + v9;
    if (v9 > 0x0.0p+0f) {
    LABEL_16:
      v9 = 0x0.0p+0f;
    }
  }
LABEL_17:
  v11 = var60_.vars10;
  v12 = var60_.var60[12];
  v13 = var60_.var60[13];
  *(float*)(a1 + 40) = v9;
  var60_.var60[1] = v1;
  var60_.var60[2] = var60_.var60[11];
  var60_.var60[3] = v12;
  var60_.var60[4] = v13;
  var60_.vars10 = v11;
  v14 = a1;
  v15 = *(_QWORD*)(*(_QWORD*)(a1 + 8) + 136LL);
  v16 = (*(_QWORD*)(*(_QWORD*)(a1 + 8) + 144LL) - v15) >> 4;
  if (v16 != 0 && (v16 != 1 || *(_BYTE*)(*(_QWORD*)v15 + 9LL) != 1)) {
    return;
  }
  v17 = game_map_MapRandom_instance__ptr[0];
  v208 = a1;
  if ((*(_BYTE*)(a1 + 32) & 1) != 0) {
    goto LABEL_68;
  }
  (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, __int64))(
      *(_QWORD*)a1 + 48LL))((void*)(&v262_.v262), a1),
      v120 = COERCE_AS(__typeof__(v120), PSEUDO_REGISTER(float, "s0", "=w"));
  v18 = v262_.v262;
  v19 = (unsigned int*)v262_.v263;
  v259_.v260 = nullptr;
  v259_.v261 = 0;
  v259_.v259 = 0;
  if (v262_.v262 == (unsigned int*)v262_.v263) {
    goto LABEL_44;
  }
  v20 = nullptr;
  do {
    if ((LegionStateBattleFighter_e3b0b0(v14, *v18) & 1) != 0) {
      if ((unsigned __int64)v20 < v259_.v261) {
        *v20++ = *(_QWORD*)v18;
      }
      else {
        v21 = v259_.v259;
        v22 = (unsigned __int64)v20 - v259_.v259;
        v23 = ((__int64)v20 - v259_.v259) >> 3;
        v24 = v23 + 1;
        if ((unsigned __int64)(v23 + 1) >> 61 != 0) {
          GameRoutine_e3b8c0(),
              v120 = COERCE_AS(__typeof__(v120),
                               PSEUDO_REGISTER(float, "s0", "=w"));
        }
        v25 = v259_.v261 - v259_.v259;
        if ((__int64)(v259_.v261 - v259_.v259) >> 2 > v24) {
          v24 = v25 >> 2;
        }
        if ((unsigned __int64)v25 >= 0x7FFFFFFFFFFFFFF8LL) {
          v26 = 0x1FFFFFFFFFFFFFFFLL;
        }
        else {
          v26 = v24;
        }
        if (v26 != 0) {
          if (v26 >> 61 != 0) {
            GameRoutine_60a210(),
                v120 = COERCE_AS(__typeof__(v120),
                                 PSEUDO_REGISTER(float, "s0", "=w"));
          }
          v27 = fw_memory_HeapManager_Allocate(
              *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v26, 16, 0),
          v120 =
              COERCE_AS(__typeof__(v120), PSEUDO_REGISTER(float, "s0", "=w"));
        }
        else {
          v27 = 0;
        }
        v28 = v27 + 8 * v26;
        v29 = v27 + v22 - 8 * v23;
        *(_QWORD*)(v27 + v22) = *(_QWORD*)v18;
        v20 = (_QWORD*)(v27 + v22 + 8);
        memcpy(v29, v21, v22),
            v120 =
                COERCE_AS(__typeof__(v120), PSEUDO_REGISTER(float, "s0", "=w"));
        v259_.v259 = v29;
        v259_.v261 = v28;
        if (v21 != 0) {
          v30 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v30 = 56;
          }
          nn_mem_StandardAllocator_Free(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v30, v21),
              v120 = COERCE_AS(__typeof__(v120),
                               PSEUDO_REGISTER(float, "s0", "=w"));
        }
        v14 = v208;
      }
      v259_.v260 = v20;
    }
    v18 += 2;
  } while (v18 != v19);
  if (v20 == (_QWORD*)v259_.v259) {
  LABEL_44:
    v265[0] = 0x3200000003LL;
    v265[1] = 0xA00000000LL;
    GameHr_e3b8e0((__int64)&v259_.v259, (char*)v265, (char*)var60_.var60, 2u),
        v120 = COERCE_AS(__typeof__(v120), PSEUDO_REGISTER(float, "s0", "=w"));
  }
  if (v262_.v262 != nullptr) {
    v262_.v263 = (__int64)v262_.v262;
    v31 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v31 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v31,
                                  (__int64)v262_.v262),
        v120 = COERCE_AS(__typeof__(v120), PSEUDO_REGISTER(float, "s0", "=w"));
  }
  v32 = v259_.v259;
  v262_.v262 = (unsigned int*)v259_.v259;
  v262_.v263 = (__int64)v259_.v260;
  v262_.v264 = (_DWORD*)v259_.v261;
  if ((_QWORD*)v259_.v259 == v259_.v260) {
    v33 = 0;
  }
  else {
    v33 = 0;
    do {
      v34 = *(_DWORD*)(v32 + 4);
      v32 += 8;
      v33 += v34;
    } while ((_QWORD*)v32 != v259_.v260);
  }
  nn_os_LockMutex((__int64)&game_g_random_mutex),
      v120 = COERCE_AS(__typeof__(v120), PSEUDO_REGISTER(float, "s0", "=w"));
  v35 = *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v17);
  v36 = *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v17 + 4);
  v37 = *(_DWORD*)v17 ^ (*(_DWORD*)v17 << 11);
  *(_DWORD*)v17 = *((_DWORD*)v17 + 1);
  *((_DWORD*)v17 + 1) = v35;
  v38 = (v37 >> 8) ^ (v36 >> 19) ^ v37 ^ v36;
  *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v17) = v36;
  *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v17 + 4) = v38;
  nn_os_UnlockMutex((__int64)&game_g_random_mutex),
      v120 = COERCE_AS(__typeof__(v120), PSEUDO_REGISTER(float, "s0", "=w"));
  v39 = (__int64)v262_.v262;
  if (v262_.v262 == (unsigned int*)v262_.v263) {
    v42 = 3;
  }
  else {
    v40 = 0;
    v41 = v262_.v262;
    while (1) {
      v40 += v41[1];
      if ((v38 & 0x7FFFFFFF) % v33 < v40) {
        break;
      }
      v41 += 2;
      if (v41 == (unsigned int*)v262_.v263) {
        v41 = v262_.v262;
        break;
      }
    }
    v42 = *v41;
  }
  if (*(_BYTE*)(v14 + 32) == 1) {
    *(_WORD*)(v14 + 28) = 0;
    *(_DWORD*)(v14 + 24) = v42;
    if (v39 == 0) {
      goto LABEL_68;
    }
  }
  else {
    *(_QWORD*)(v14 + 24) = v42;
    *(_BYTE*)(v14 + 32) = 1;
    if (v39 == 0) {
    LABEL_68:
      v44 = *(_QWORD*)(v14 + 24);
      nn_os_LockMutex((__int64)&game_g_random_mutex),
          v120 =
              COERCE_AS(__typeof__(v120), PSEUDO_REGISTER(float, "s0", "=w"));
      v45 = *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v17);
      v46 = *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v17 + 4);
      v47 = *(_DWORD*)v17 ^ (*(_DWORD*)v17 << 11);
      *(_DWORD*)v17 = *((_DWORD*)v17 + 1);
      *((_DWORD*)v17 + 1) = v45;
      v48 = (v47 >> 8) ^ (v46 >> 19) ^ v47 ^ v46;
      *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v17) = v46;
      *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v17 + 4) = v48;
      nn_os_UnlockMutex((__int64)&game_g_random_mutex),
          v120 =
              COERCE_AS(__typeof__(v120), PSEUDO_REGISTER(float, "s0", "=w"));
      v49 = *(_QWORD**)(v14 + 8);
      v50 = v49 + 17;
      v51 = v49[22];
      v52 = v49[18] - v49[17];
      v53 = v52 >> 4;
      LODWORD(v259_.v259) = v52 >> 4;
      v54 = vcvts_n_f32_u32((unsigned __int16)v48, 0x10u);
      v55 = (float)(v54 * 0x1.99999a0000000p-3f) + 0x1.99999a0000000p-3f;
      switch ((int)v44) {
      case 0:
        v147 = (__int64*)fw_memory_g_heap_manager_ptr;
        v148 = (unsigned int*)fw_memory_HeapManager_Allocate(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 8, 16, 0),
        v120 = COERCE_AS(__typeof__(v120), PSEUDO_REGISTER(float, "s0", "=w"));
        v262_.v262 = v148;
        *(_QWORD*)v148 = 0x783C0ED4436C6B70LL;
        v262_.v263 = (__int64)(v148 + 2);
        v262_.v264 = v148 + 2;
        v149 = StateMachines_e32520((__int64)v49, (__int64)&v262_.v262),
        v120 = COERCE_AS(__typeof__(v120), PSEUDO_REGISTER(float, "s0", "=w"));
        v150 = 128;
        if (*(_QWORD*)(*v147 + 200) == 0) {
          v150 = 56;
        }
        nn_mem_StandardAllocator_Free(*v147 + v150, (__int64)v148),
            v120 =
                COERCE_AS(__typeof__(v120), PSEUDO_REGISTER(float, "s0", "=w"));
        v151 = fw_memory_HeapManager_Allocate(*v147, 120, 16, 0),
        v120 = COERCE_AS(__typeof__(v120), PSEUDO_REGISTER(float, "s0", "=w"));
        *(_QWORD*)(v151 + 8) = 0;
        *(_QWORD*)(v151 + 16) = 0;
        *(_WORD*)(v151 + 32) = 0;
        *(_QWORD*)v151 = GameData_1fe4680;
        *(_BYTE*)(v151 + 40) = 12;
        *(_QWORD*)(v151 + 64) = v51;
        strcpy((char*)(v151 + 41), "Motion");
        *(_BYTE*)(v151 + 80) = 0;
        *(_BYTE*)(v151 + 84) = 0;
        *(_BYTE*)(v151 + 88) = 0;
        *(_BYTE*)(v151 + 92) = 0;
        *(_BYTE*)(v151 + 96) = 0;
        *(_BYTE*)(v151 + 100) = 0;
        *(_BYTE*)(v151 + 104) = 0;
        *(_QWORD*)(v151 + 108) = 0;
        *(_BYTE*)(v151 + 116) = 0;
        *(_DWORD*)(v151 + 72) = 0;
        *(_DWORD*)(v151 + 76) = v149;
        v257_.v258 = v151;
        *(_QWORD*)(v151 + 24) = game_combat_LegionStackMotion_vtable;
        v152 = (char*)v49[17];
        v257_.v257 = v151 + 24;
        if ((int)v53 <= 0) {
          v153 = v152;
        }
        else {
          v153 = &v152[((v52 + 0xFFFFFFFF0LL) & 0xFFFFFFFF0LL) + 16];
        }
        GameRoutine_e37f80(v50, v153, (char*)&v257_.v257),
            v120 =
                COERCE_AS(__typeof__(v120), PSEUDO_REGISTER(float, "s0", "=w"));
        v154 = v257_.v258;
        if (v257_.v258 != 0 &&
            atomic_fetch_add((atomic_ullong* volatile)(v257_.v258 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v154 + 16LL))(v154),
              v120 = COERCE_AS(__typeof__(v120),
                               PSEUDO_REGISTER(float, "s0", "=w"));
          std___1___shared_weak_count___release_weak(v154),
              v120 = COERCE_AS(__typeof__(v120),
                               PSEUDO_REGISTER(float, "s0", "=w"));
        }
        v155 = fw_memory_HeapManager_Allocate(*v147, 80, 16, 0),
        v120 = COERCE_AS(__typeof__(v120), PSEUDO_REGISTER(float, "s0", "=w"));
        *(_QWORD*)(v155 + 8) = 0;
        *(_QWORD*)(v155 + 16) = 0;
        *(_WORD*)(v155 + 32) = 0;
        *(_QWORD*)(v155 + 64) = v51;
        *(_DWORD*)(v155 + 72) = 0;
        *(_QWORD*)v155 = GameData_1fe46d0;
        strcpy((char*)(v155 + 40), "\nDelay");
        *(float*)(v155 + 76) = v55;
        v255_.v256 = v155;
        *(_QWORD*)(v155 + 24) = game_combat_LegionStackDelay_vtable;
        LODWORD(v259_.v259) = v53 + 2;
        v156 = *v50;
        v255_.v255 = v155 + 24;
        if ((v53 & 0x80000000) == 0LL) {
          v157 = (char*)(v156 + (v52 & 0xFFFFFFFF0LL) + 16);
        }
        else {
          v157 = (char*)v156;
        }
        GameRoutine_e37f80(v50, v157, (char*)&v255_.v255),
            v120 =
                COERCE_AS(__typeof__(v120), PSEUDO_REGISTER(float, "s0", "=w"));
        v65 = v255_.v256;
        goto LABEL_202;
      case 1:
        v158 = (__int64*)fw_memory_g_heap_manager_ptr;
        v159 = (unsigned int*)fw_memory_HeapManager_Allocate(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 4, 16, 0),
        v120 = COERCE_AS(__typeof__(v120), PSEUDO_REGISTER(float, "s0", "=w"));
        v262_.v262 = v159;
        *v159 = -2109400973;
        v262_.v263 = (__int64)(v159 + 1);
        v262_.v264 = v159 + 1;
        v160 = StateMachines_e32520((__int64)v49, (__int64)&v262_.v262),
        v120 = COERCE_AS(__typeof__(v120), PSEUDO_REGISTER(float, "s0", "=w"));
        v161 = (__int64)v159;
        v14 = v208;
        v162 = v160;
        v163 = 128;
        if (*(_QWORD*)(*v158 + 200) == 0) {
          v163 = 56;
        }
        nn_mem_StandardAllocator_Free(*v158 + v163, v161),
            v120 =
                COERCE_AS(__typeof__(v120), PSEUDO_REGISTER(float, "s0", "=w"));
        v164 = fw_memory_HeapManager_Allocate(*v158, 120, 16, 0),
        v120 = COERCE_AS(__typeof__(v120), PSEUDO_REGISTER(float, "s0", "=w"));
        *(_QWORD*)(v164 + 8) = 0;
        *(_QWORD*)(v164 + 16) = 0;
        *(_WORD*)(v164 + 32) = 0;
        *(_QWORD*)(v164 + 64) = v51;
        *(_QWORD*)v164 = GameData_1fe4680;
        *(_BYTE*)(v164 + 40) = 12;
        strcpy((char*)(v164 + 41), "Motion");
        *(_BYTE*)(v164 + 80) = 0;
        *(_BYTE*)(v164 + 84) = 0;
        *(_BYTE*)(v164 + 88) = 0;
        *(_BYTE*)(v164 + 92) = 0;
        *(_BYTE*)(v164 + 96) = 0;
        *(_BYTE*)(v164 + 100) = 0;
        *(_BYTE*)(v164 + 104) = 0;
        *(_QWORD*)(v164 + 108) = 0;
        *(_BYTE*)(v164 + 116) = 0;
        *(_DWORD*)(v164 + 72) = 0;
        *(_DWORD*)(v164 + 76) = v162;
        *(_QWORD*)(v164 + 24) = game_combat_LegionStackMotion_vtable;
        LODWORD(v259_.v259) = v53 + 1;
        v165 = (char*)v49[17];
        v239_.v239 = v164 + 24;
        v239_.v240 = v164;
        if ((int)v53 <= 0) {
          v166 = v165;
        }
        else {
          v166 = &v165[((v52 + 0xFFFFFFFF0LL) & 0xFFFFFFFF0LL) + 16];
        }
        GameRoutine_e37f80(v50, v166, (char*)&v239_.v239),
            v120 =
                COERCE_AS(__typeof__(v120), PSEUDO_REGISTER(float, "s0", "=w"));
        v65 = v239_.v240;
        if (v239_.v240 == 0) {
          break;
        }
        goto LABEL_203;
      case 2:
        v115 = (__int64*)fw_memory_g_heap_manager_ptr;
        v116 = (unsigned int*)fw_memory_HeapManager_Allocate(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 12, 16, 0),
        v120 = COERCE_AS(__typeof__(v120), PSEUDO_REGISTER(float, "s0", "=w"));
        v262_.v262 = v116;
        v262_.v263 = (__int64)(v116 + 3);
        v262_.v264 = v116 + 3;
        *v116 = 989295305;
        v116[1] = 989295306;
        v116[2] = 989295338;
        v117 = v14;
        v118 = StateMachines_e32520((__int64)v49, (__int64)&v262_.v262),
        v120 = COERCE_AS(__typeof__(v120), PSEUDO_REGISTER(float, "s0", "=w"));
        v119 = 128;
        if (*(_QWORD*)(*v115 + 200) == 0) {
          v119 = 56;
        }
        nn_mem_StandardAllocator_Free(*v115 + v119, (__int64)v116),
            v120 =
                COERCE_AS(__typeof__(v120), PSEUDO_REGISTER(float, "s0", "=w"));
        StateMachines_e330c0(*(_QWORD*)(v117 + 8), v118),
            v120 =
                COERCE_AS(__typeof__(v120), PSEUDO_REGISTER(float, "s0", "=w"));
        v121 = v120;
        v122 = fw_memory_HeapManager_Allocate(*v115, 88, 16, 0),
        v120 = COERCE_AS(__typeof__(v120), PSEUDO_REGISTER(float, "s0", "=w"));
        *(_QWORD*)(v122 + 8) = 0;
        *(_QWORD*)(v122 + 16) = 0;
        *(_WORD*)(v122 + 32) = 0;
        *(_QWORD*)(v122 + 64) = v51;
        *(_DWORD*)(v122 + 72) = 0;
        *(_QWORD*)v122 = GameData_1fe4720;
        *(_BYTE*)(v122 + 40) = 16;
        strcpy((char*)(v122 + 41), "Approach");
        *(_DWORD*)(v122 + 80) = 1065353216;
        *(_DWORD*)(v122 + 76) = v121;
        v253_.v254 = v122;
        *(_BYTE*)(v122 + 84) = BYTE5(v44);
        *(_QWORD*)(v122 + 24) = game_combat_LegionStackApproach_vtable;
        v123 = (char*)v49[17];
        v253_.v253 = v122 + 24;
        if ((int)v53 <= 0) {
          v124 = v123;
        }
        else {
          v124 = &v123[((v52 + 0xFFFFFFFF0LL) & 0xFFFFFFFF0LL) + 16];
        }
        GameRoutine_e37f80(v50, v124, (char*)&v253_.v253),
            v120 =
                COERCE_AS(__typeof__(v120), PSEUDO_REGISTER(float, "s0", "=w"));
        v125 = v253_.v254;
        if (v253_.v254 != 0 &&
            atomic_fetch_add((atomic_ullong* volatile)(v253_.v254 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v125 + 16LL))(v125),
              v120 = COERCE_AS(__typeof__(v120),
                               PSEUDO_REGISTER(float, "s0", "=w"));
          std___1___shared_weak_count___release_weak(v125),
              v120 = COERCE_AS(__typeof__(v120),
                               PSEUDO_REGISTER(float, "s0", "=w"));
        }
        v126 = fw_memory_HeapManager_Allocate(*v115, 264, 16, 0),
        v120 = COERCE_AS(__typeof__(v120), PSEUDO_REGISTER(float, "s0", "=w"));
        *(_QWORD*)(v126 + 8) = 0;
        *(_QWORD*)(v126 + 16) = 0;
        *(_WORD*)(v126 + 32) = 0;
        *(_QWORD*)v126 = GameData_1fe4770;
        *(_BYTE*)(v126 + 40) = 12;
        strcpy((char*)(v126 + 41), "Attack");
        *(_QWORD*)(v126 + 64) = v51;
        *(_DWORD*)(v126 + 72) = 0;
        *(_DWORD*)(v126 + 76) = v118;
        *(_QWORD*)(v126 + 80) = 0;
        *(_BYTE*)(v126 + 88) = 0;
        *(_BYTE*)(v126 + 92) = 0;
        *(_WORD*)(v126 + 96) = 0;
        *(_QWORD*)(v126 + 120) = 0;
        *(_BYTE*)(v126 + 128) = 0;
        *(_BYTE*)(v126 + 132) = 0;
        *(_WORD*)(v126 + 136) = 0;
        *(_QWORD*)(v126 + 160) = 0;
        *(_BYTE*)(v126 + 168) = 0;
        *(_BYTE*)(v126 + 172) = 0;
        *(_WORD*)(v126 + 176) = 0;
        *(_QWORD*)(v126 + 200) = 0;
        *(_BYTE*)(v126 + 208) = 0;
        *(_BYTE*)(v126 + 212) = 0;
        *(_WORD*)(v126 + 216) = 0;
        *(_WORD*)(v126 + 256) = 0;
        *(_QWORD*)(v126 + 240) = 0;
        *(_QWORD*)(v126 + 248) = 0;
        v251_.v252 = v126;
        LODWORD(v259_.v259) = v53 + 2;
        *(_QWORD*)(v126 + 24) = game_combat_LegionStackAttack_vtable;
        v127 = *v50;
        v128 = *v50 + (v52 & 0xFFFFFFFF0LL);
        v251_.v251 = v126 + 24;
        v129 = (char*)(v128 + 16);
        if ((v53 & 0x80000000) == 0LL) {
          v130 = v129;
        }
        else {
          v130 = (char*)v127;
        }
        GameRoutine_e37f80(v50, v130, (char*)&v251_.v251),
            v120 =
                COERCE_AS(__typeof__(v120), PSEUDO_REGISTER(float, "s0", "=w"));
        v65 = v251_.v252;
        goto LABEL_202;
      case 3:
        v131 = fw_memory_HeapManager_Allocate(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 80, 16, 0),
        v120 = COERCE_AS(__typeof__(v120), PSEUDO_REGISTER(float, "s0", "=w"));
        *(_QWORD*)(v131 + 8) = 0;
        *(_QWORD*)(v131 + 16) = 0;
        *(_WORD*)(v131 + 32) = 0;
        *(_QWORD*)(v131 + 64) = v51;
        *(_DWORD*)(v131 + 72) = 0;
        *(_QWORD*)v131 = GameData_1fe46d0;
        strcpy((char*)(v131 + 40), "\nDelay");
        *(float*)(v131 + 76) = v54 + 0x1.0000000000000p-1f;
        *(_QWORD*)(v131 + 24) = game_combat_LegionStackDelay_vtable;
        LODWORD(v259_.v259) = v53 + 1;
        v132 = *v50;
        v225_.v225 = v131 + 24;
        v225_.v226 = v131;
        if ((int)v53 <= 0) {
          v133 = (char*)v132;
        }
        else {
          v133 = (char*)(v132 + ((v52 + 0xFFFFFFFF0LL) & 0xFFFFFFFF0LL) + 16);
        }
        GameRoutine_e37f80(v50, v133, (char*)&v225_.v225),
            v120 =
                COERCE_AS(__typeof__(v120), PSEUDO_REGISTER(float, "s0", "=w"));
        v65 = v225_.v226;
        if (v225_.v226 == 0) {
          break;
        }
        goto LABEL_203;
      case 4:
        GameRoutine_e39fe0(v14, (int*)&v259_.v259),
            v120 =
                COERCE_AS(__typeof__(v120), PSEUDO_REGISTER(float, "s0", "=w"));
        v84 = *(_QWORD*)(v14 + 8);
        v85 = (__int64*)fw_memory_g_heap_manager_ptr;
        v86 = (unsigned int*)fw_memory_HeapManager_Allocate(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 4, 16, 0),
        v120 = COERCE_AS(__typeof__(v120), PSEUDO_REGISTER(float, "s0", "=w"));
        v262_.v262 = v86;
        *v86 = 501870813;
        v262_.v263 = (__int64)(v86 + 1);
        v262_.v264 = v86 + 1;
        v87 = StateMachines_e32520(v84, (__int64)&v262_.v262),
        v120 = COERCE_AS(__typeof__(v120), PSEUDO_REGISTER(float, "s0", "=w"));
        v88 = 128;
        if (*(_QWORD*)(*v85 + 200) == 0) {
          v88 = 56;
        }
        nn_mem_StandardAllocator_Free(*v85 + v88, (__int64)v86),
            v120 =
                COERCE_AS(__typeof__(v120), PSEUDO_REGISTER(float, "s0", "=w"));
        v89 = fw_memory_HeapManager_Allocate(*v85, 120, 16, 0),
        v120 = COERCE_AS(__typeof__(v120), PSEUDO_REGISTER(float, "s0", "=w"));
        *(_QWORD*)(v89 + 8) = 0;
        *(_QWORD*)(v89 + 16) = 0;
        *(_WORD*)(v89 + 32) = 0;
        *(_QWORD*)(v89 + 64) = v51;
        *(_QWORD*)v89 = GameData_1fe4680;
        *(_BYTE*)(v89 + 40) = 12;
        strcpy((char*)(v89 + 41), "Motion");
        *(_BYTE*)(v89 + 80) = 0;
        *(_BYTE*)(v89 + 84) = 0;
        *(_BYTE*)(v89 + 88) = 0;
        *(_BYTE*)(v89 + 92) = 0;
        *(_BYTE*)(v89 + 96) = 0;
        *(_BYTE*)(v89 + 100) = 0;
        v90 = (unsigned int)v259_.v259;
        *(_BYTE*)(v89 + 104) = 0;
        *(float*)(v89 + 108) = v54 + 0x1.8000000000000p+0f;
        *(_BYTE*)(v89 + 112) = 1;
        *(_BYTE*)(v89 + 116) = 0;
        *(_DWORD*)(v89 + 72) = 0;
        *(_DWORD*)(v89 + 76) = v87;
        v237_.v238 = v89;
        *(_QWORD*)(v89 + 24) = game_combat_LegionStackMotion_vtable;
        v91 = *v50;
        v237_.v237 = v89 + 24;
        if ((int)v90 <= 0) {
          v92 = (char*)v91;
        }
        else {
          v92 = (char*)(v91 + 16LL * (unsigned int)(v90 - 1) + 16);
        }
        GameRoutine_e37f80(v50, v92, (char*)&v237_.v237),
            v120 =
                COERCE_AS(__typeof__(v120), PSEUDO_REGISTER(float, "s0", "=w"));
        v93 = v237_.v238;
        if (v237_.v238 != 0 &&
            atomic_fetch_add((atomic_ullong* volatile)(v237_.v238 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v93 + 16LL))(v93),
              v120 = COERCE_AS(__typeof__(v120),
                               PSEUDO_REGISTER(float, "s0", "=w"));
          std___1___shared_weak_count___release_weak(v93),
              v120 = COERCE_AS(__typeof__(v120),
                               PSEUDO_REGISTER(float, "s0", "=w"));
        }
        v94 = fw_memory_HeapManager_Allocate(*v85, 80, 16, 0),
        v120 = COERCE_AS(__typeof__(v120), PSEUDO_REGISTER(float, "s0", "=w"));
        *(_QWORD*)(v94 + 8) = 0;
        *(_QWORD*)(v94 + 16) = 0;
        *(_WORD*)(v94 + 32) = 0;
        *(_QWORD*)(v94 + 64) = v51;
        *(_DWORD*)(v94 + 72) = 0;
        *(_QWORD*)v94 = GameData_1fe46d0;
        strcpy((char*)(v94 + 40), "\nDelay");
        *(float*)(v94 + 76) = v55;
        v235_.v236 = v94;
        *(_QWORD*)(v94 + 24) = game_combat_LegionStackDelay_vtable;
        LODWORD(v259_.v259) = v90 + 2;
        v95 = *v50;
        v235_.v235 = v94 + 24;
        if ((int)v90 >= 0) {
          v96 = (char*)(v95 + 16 * v90 + 16);
        }
        else {
          v96 = (char*)v95;
        }
        GameRoutine_e37f80(v50, v96, (char*)&v235_.v235),
            v120 =
                COERCE_AS(__typeof__(v120), PSEUDO_REGISTER(float, "s0", "=w"));
        v65 = v235_.v236;
        goto LABEL_202;
      case 5:
        GameRoutine_e39fe0(v14, (int*)&v259_.v259),
            v120 =
                COERCE_AS(__typeof__(v120), PSEUDO_REGISTER(float, "s0", "=w"));
        v167 = *(_QWORD*)(v14 + 8);
        v168 = (__int64*)fw_memory_g_heap_manager_ptr;
        v169 = (unsigned int*)fw_memory_HeapManager_Allocate(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 4, 16, 0),
        v120 = COERCE_AS(__typeof__(v120), PSEUDO_REGISTER(float, "s0", "=w"));
        v262_.v262 = v169;
        *v169 = -1193575777;
        v262_.v263 = (__int64)(v169 + 1);
        v262_.v264 = v169 + 1;
        v170 = StateMachines_e32520(v167, (__int64)&v262_.v262),
        v120 = COERCE_AS(__typeof__(v120), PSEUDO_REGISTER(float, "s0", "=w"));
        v171 = 128;
        if (*(_QWORD*)(*v168 + 200) == 0) {
          v171 = 56;
        }
        nn_mem_StandardAllocator_Free(*v168 + v171, (__int64)v169),
            v120 =
                COERCE_AS(__typeof__(v120), PSEUDO_REGISTER(float, "s0", "=w"));
        v172 = fw_memory_HeapManager_Allocate(*v168, 120, 16, 0),
        v120 = COERCE_AS(__typeof__(v120), PSEUDO_REGISTER(float, "s0", "=w"));
        *(_QWORD*)(v172 + 8) = 0;
        *(_QWORD*)(v172 + 16) = 0;
        *(_WORD*)(v172 + 32) = 0;
        *(_QWORD*)(v172 + 64) = v51;
        *(_QWORD*)v172 = GameData_1fe4680;
        *(_BYTE*)(v172 + 40) = 12;
        strcpy((char*)(v172 + 41), "Motion");
        *(_BYTE*)(v172 + 80) = 0;
        *(_BYTE*)(v172 + 84) = 0;
        *(_BYTE*)(v172 + 88) = 0;
        *(_BYTE*)(v172 + 92) = 0;
        *(_BYTE*)(v172 + 96) = 0;
        *(_BYTE*)(v172 + 100) = 0;
        v173 = (unsigned int)v259_.v259;
        *(_BYTE*)(v172 + 104) = 0;
        *(_QWORD*)(v172 + 108) = 0;
        *(_BYTE*)(v172 + 116) = 0;
        *(_DWORD*)(v172 + 72) = 0;
        *(_DWORD*)(v172 + 76) = v170;
        v233_.v234 = v172;
        *(_QWORD*)(v172 + 24) = game_combat_LegionStackMotion_vtable;
        v174 = *v50;
        v233_.v233 = v172 + 24;
        if ((int)v173 <= 0) {
          v175 = (char*)v174;
        }
        else {
          v175 = (char*)(v174 + 16LL * (unsigned int)(v173 - 1) + 16);
        }
        GameRoutine_e37f80(v50, v175, (char*)&v233_.v233),
            v120 =
                COERCE_AS(__typeof__(v120), PSEUDO_REGISTER(float, "s0", "=w"));
        v176 = v233_.v234;
        if (v233_.v234 != 0 &&
            atomic_fetch_add((atomic_ullong* volatile)(v233_.v234 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v176 + 16LL))(v176),
              v120 = COERCE_AS(__typeof__(v120),
                               PSEUDO_REGISTER(float, "s0", "=w"));
          std___1___shared_weak_count___release_weak(v176),
              v120 = COERCE_AS(__typeof__(v120),
                               PSEUDO_REGISTER(float, "s0", "=w"));
        }
        v177 = fw_memory_HeapManager_Allocate(*v168, 80, 16, 0),
        v120 = COERCE_AS(__typeof__(v120), PSEUDO_REGISTER(float, "s0", "=w"));
        *(_QWORD*)(v177 + 8) = 0;
        *(_QWORD*)(v177 + 16) = 0;
        *(_WORD*)(v177 + 32) = 0;
        *(_QWORD*)(v177 + 64) = v51;
        *(_DWORD*)(v177 + 72) = 0;
        *(_QWORD*)v177 = GameData_1fe46d0;
        strcpy((char*)(v177 + 40), "\nDelay");
        *(float*)(v177 + 76) = v55;
        v231_.v232 = v177;
        *(_QWORD*)(v177 + 24) = game_combat_LegionStackDelay_vtable;
        LODWORD(v259_.v259) = v173 + 2;
        v178 = *v50;
        v231_.v231 = v177 + 24;
        if ((int)v173 >= 0) {
          v179 = (char*)(v178 + 16 * v173 + 16);
        }
        else {
          v179 = (char*)v178;
        }
        GameRoutine_e37f80(v50, v179, (char*)&v231_.v231),
            v120 =
                COERCE_AS(__typeof__(v120), PSEUDO_REGISTER(float, "s0", "=w"));
        v65 = v231_.v232;
        goto LABEL_202;
      case 6:
        v180 = (__int64*)fw_memory_g_heap_manager_ptr;
        v181 = (unsigned int*)fw_memory_HeapManager_Allocate(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 4, 16, 0),
        v120 = COERCE_AS(__typeof__(v120), PSEUDO_REGISTER(float, "s0", "=w"));
        v262_.v262 = v181;
        *v181 = -1193575789;
        v262_.v263 = (__int64)(v181 + 1);
        v262_.v264 = v181 + 1;
        v182 = v14;
        v183 = StateMachines_e32520((__int64)v49, (__int64)&v262_.v262),
        v120 = COERCE_AS(__typeof__(v120), PSEUDO_REGISTER(float, "s0", "=w"));
        v184 = 128;
        if (*(_QWORD*)(*v180 + 200) == 0) {
          v184 = 56;
        }
        nn_mem_StandardAllocator_Free(*v180 + v184, (__int64)v181),
            v120 =
                COERCE_AS(__typeof__(v120), PSEUDO_REGISTER(float, "s0", "=w"));
        GameRoutine_e39fe0(v182, (int*)&v259_.v259),
            v120 =
                COERCE_AS(__typeof__(v120), PSEUDO_REGISTER(float, "s0", "=w"));
        v185 = fw_memory_HeapManager_Allocate(*v180, 120, 16, 0),
        v120 = COERCE_AS(__typeof__(v120), PSEUDO_REGISTER(float, "s0", "=w"));
        *(_QWORD*)(v185 + 8) = 0;
        *(_QWORD*)(v185 + 16) = 0;
        *(_WORD*)(v185 + 32) = 0;
        *(_QWORD*)(v185 + 64) = v51;
        *(_QWORD*)v185 = GameData_1fe4680;
        *(_BYTE*)(v185 + 40) = 12;
        strcpy((char*)(v185 + 41), "Motion");
        *(_BYTE*)(v185 + 80) = 0;
        *(_BYTE*)(v185 + 84) = 0;
        *(_BYTE*)(v185 + 88) = 0;
        *(_BYTE*)(v185 + 92) = 0;
        *(_BYTE*)(v185 + 96) = 0;
        *(_BYTE*)(v185 + 100) = 0;
        *(_BYTE*)(v185 + 104) = 0;
        *(_QWORD*)(v185 + 108) = 0;
        *(_BYTE*)(v185 + 116) = 0;
        *(_DWORD*)(v185 + 72) = 0;
        *(_DWORD*)(v185 + 76) = v183;
        v249_.v250 = v185;
        v186 = (unsigned int)v259_.v259;
        *(_QWORD*)(v185 + 24) = game_combat_LegionStackMotion_vtable;
        v187 = (char*)v49[17];
        v249_.v249 = v185 + 24;
        if ((int)v186 <= 0) {
          v188 = v187;
        }
        else {
          v188 = &v187[16 * (unsigned int)(v186 - 1) + 16];
        }
        GameRoutine_e37f80(v50, v188, (char*)&v249_.v249),
            v120 =
                COERCE_AS(__typeof__(v120), PSEUDO_REGISTER(float, "s0", "=w"));
        v189 = v249_.v250;
        if (v249_.v250 != 0 &&
            atomic_fetch_add((atomic_ullong* volatile)(v249_.v250 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v189 + 16LL))(v189),
              v120 = COERCE_AS(__typeof__(v120),
                               PSEUDO_REGISTER(float, "s0", "=w"));
          std___1___shared_weak_count___release_weak(v189),
              v120 = COERCE_AS(__typeof__(v120),
                               PSEUDO_REGISTER(float, "s0", "=w"));
        }
        v190 = fw_memory_HeapManager_Allocate(*v180, 80, 16, 0),
        v120 = COERCE_AS(__typeof__(v120), PSEUDO_REGISTER(float, "s0", "=w"));
        *(_QWORD*)(v190 + 8) = 0;
        *(_QWORD*)(v190 + 16) = 0;
        *(_WORD*)(v190 + 32) = 0;
        *(_QWORD*)(v190 + 64) = v51;
        *(_DWORD*)(v190 + 72) = 0;
        *(_QWORD*)v190 = GameData_1fe46d0;
        strcpy((char*)(v190 + 40), "\nDelay");
        *(float*)(v190 + 76) = v55;
        v247_.v248 = v190;
        *(_QWORD*)(v190 + 24) = game_combat_LegionStackDelay_vtable;
        LODWORD(v259_.v259) = v186 + 2;
        v191 = *v50;
        v247_.v247 = v190 + 24;
        if ((int)v186 >= 0) {
          v192 = (char*)(v191 + 16 * v186 + 16);
        }
        else {
          v192 = (char*)v191;
        }
        GameRoutine_e37f80(v50, v192, (char*)&v247_.v247),
            v120 =
                COERCE_AS(__typeof__(v120), PSEUDO_REGISTER(float, "s0", "=w"));
        v65 = v247_.v248;
        goto LABEL_202;
      case 7:
        v134 = (__int64*)fw_memory_g_heap_manager_ptr;
        v135 = (unsigned int*)fw_memory_HeapManager_Allocate(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 4, 16, 0),
        v120 = COERCE_AS(__typeof__(v120), PSEUDO_REGISTER(float, "s0", "=w"));
        v262_.v262 = v135;
        *v135 = -371817049;
        v262_.v263 = (__int64)(v135 + 1);
        v262_.v264 = v135 + 1;
        v136 = v14;
        v137 = StateMachines_e32520((__int64)v49, (__int64)&v262_.v262),
        v120 = COERCE_AS(__typeof__(v120), PSEUDO_REGISTER(float, "s0", "=w"));
        v138 = 128;
        if (*(_QWORD*)(*v134 + 200) == 0) {
          v138 = 56;
        }
        nn_mem_StandardAllocator_Free(*v134 + v138, (__int64)v135),
            v120 =
                COERCE_AS(__typeof__(v120), PSEUDO_REGISTER(float, "s0", "=w"));
        GameRoutine_e39fe0(v136, (int*)&v259_.v259),
            v120 =
                COERCE_AS(__typeof__(v120), PSEUDO_REGISTER(float, "s0", "=w"));
        v139 = fw_memory_HeapManager_Allocate(*v134, 120, 16, 0),
        v120 = COERCE_AS(__typeof__(v120), PSEUDO_REGISTER(float, "s0", "=w"));
        *(_QWORD*)(v139 + 8) = 0;
        *(_QWORD*)(v139 + 16) = 0;
        *(_WORD*)(v139 + 32) = 0;
        *(_QWORD*)(v139 + 64) = v51;
        *(_QWORD*)v139 = GameData_1fe4680;
        *(_BYTE*)(v139 + 40) = 12;
        strcpy((char*)(v139 + 41), "Motion");
        *(_BYTE*)(v139 + 80) = 0;
        *(_BYTE*)(v139 + 84) = 0;
        *(_BYTE*)(v139 + 88) = 0;
        *(_BYTE*)(v139 + 92) = 0;
        *(_BYTE*)(v139 + 96) = 0;
        *(_BYTE*)(v139 + 100) = 0;
        *(_BYTE*)(v139 + 104) = 0;
        *(_QWORD*)(v139 + 108) = 0;
        *(_BYTE*)(v139 + 116) = 0;
        *(_DWORD*)(v139 + 72) = 0;
        *(_DWORD*)(v139 + 76) = v137;
        v245_.v246 = v139;
        v140 = (unsigned int)v259_.v259;
        *(_QWORD*)(v139 + 24) = game_combat_LegionStackMotion_vtable;
        v141 = (char*)v49[17];
        v245_.v245 = v139 + 24;
        if ((int)v140 <= 0) {
          v142 = v141;
        }
        else {
          v142 = &v141[16 * (unsigned int)(v140 - 1) + 16];
        }
        GameRoutine_e37f80(v50, v142, (char*)&v245_.v245),
            v120 =
                COERCE_AS(__typeof__(v120), PSEUDO_REGISTER(float, "s0", "=w"));
        v143 = v245_.v246;
        if (v245_.v246 != 0 &&
            atomic_fetch_add((atomic_ullong* volatile)(v245_.v246 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v143 + 16LL))(v143),
              v120 = COERCE_AS(__typeof__(v120),
                               PSEUDO_REGISTER(float, "s0", "=w"));
          std___1___shared_weak_count___release_weak(v143),
              v120 = COERCE_AS(__typeof__(v120),
                               PSEUDO_REGISTER(float, "s0", "=w"));
        }
        v144 = fw_memory_HeapManager_Allocate(*v134, 80, 16, 0),
        v120 = COERCE_AS(__typeof__(v120), PSEUDO_REGISTER(float, "s0", "=w"));
        *(_QWORD*)(v144 + 8) = 0;
        *(_QWORD*)(v144 + 16) = 0;
        *(_WORD*)(v144 + 32) = 0;
        *(_QWORD*)(v144 + 64) = v51;
        *(_DWORD*)(v144 + 72) = 0;
        *(_QWORD*)v144 = GameData_1fe46d0;
        strcpy((char*)(v144 + 40), "\nDelay");
        *(float*)(v144 + 76) = v55;
        v243_.v244 = v144;
        *(_QWORD*)(v144 + 24) = game_combat_LegionStackDelay_vtable;
        LODWORD(v259_.v259) = v140 + 2;
        v145 = *v50;
        v243_.v243 = v144 + 24;
        if ((int)v140 >= 0) {
          v146 = (char*)(v145 + 16 * v140 + 16);
        }
        else {
          v146 = (char*)v145;
        }
        GameRoutine_e37f80(v50, v146, (char*)&v243_.v243),
            v120 =
                COERCE_AS(__typeof__(v120), PSEUDO_REGISTER(float, "s0", "=w"));
        v65 = v243_.v244;
        goto LABEL_202;
      case 8:
        v198 = (__int64*)fw_memory_g_heap_manager_ptr;
        v199 = (unsigned int*)fw_memory_HeapManager_Allocate(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 4, 16, 0),
        v120 = COERCE_AS(__typeof__(v120), PSEUDO_REGISTER(float, "s0", "=w"));
        v262_.v262 = v199;
        *v199 = 232551549;
        v262_.v263 = (__int64)(v199 + 1);
        v262_.v264 = v199 + 1;
        v200 = StateMachines_e32520((__int64)v49, (__int64)&v262_.v262),
        v120 = COERCE_AS(__typeof__(v120), PSEUDO_REGISTER(float, "s0", "=w"));
        v201 = 128;
        if (*(_QWORD*)(*v198 + 200) == 0) {
          v201 = 56;
        }
        nn_mem_StandardAllocator_Free(*v198 + v201, (__int64)v199),
            v120 =
                COERCE_AS(__typeof__(v120), PSEUDO_REGISTER(float, "s0", "=w"));
        GameRoutine_e39fe0(v208, (int*)&v259_.v259),
            v120 =
                COERCE_AS(__typeof__(v120), PSEUDO_REGISTER(float, "s0", "=w"));
        v202 = fw_memory_HeapManager_Allocate(*v198, 120, 16, 0),
        v120 = COERCE_AS(__typeof__(v120), PSEUDO_REGISTER(float, "s0", "=w"));
        *(_QWORD*)(v202 + 8) = 0;
        *(_QWORD*)(v202 + 16) = 0;
        *(_WORD*)(v202 + 32) = 0;
        *(_QWORD*)(v202 + 64) = v51;
        *(_QWORD*)v202 = GameData_1fe4680;
        *(_BYTE*)(v202 + 40) = 12;
        strcpy((char*)(v202 + 41), "Motion");
        *(_BYTE*)(v202 + 80) = 0;
        *(_BYTE*)(v202 + 84) = 0;
        *(_BYTE*)(v202 + 88) = 0;
        *(_BYTE*)(v202 + 92) = 0;
        *(_BYTE*)(v202 + 96) = 0;
        *(_BYTE*)(v202 + 100) = 0;
        *(_BYTE*)(v202 + 104) = 0;
        *(_QWORD*)(v202 + 108) = 0;
        *(_BYTE*)(v202 + 116) = 0;
        *(_DWORD*)(v202 + 72) = 0;
        *(_DWORD*)(v202 + 76) = v200;
        v241_.v242 = v202;
        v14 = v208;
        *(_QWORD*)(v202 + 24) = game_combat_LegionStackMotion_vtable;
        v203 = v259_.v259;
        v241_.v241 = v202 + 24;
        LODWORD(v259_.v259) = v259_.v259 + 1;
        if (v203 <= 0) {
          v204 = (char*)v49[17];
        }
        else {
          v204 = (char*)(v49[17] + 16LL * (unsigned int)(v203 - 1) + 16);
        }
        GameRoutine_e37f80(v50, v204, (char*)&v241_.v241),
            v120 =
                COERCE_AS(__typeof__(v120), PSEUDO_REGISTER(float, "s0", "=w"));
        v65 = v241_.v242;
        if (v241_.v242 == 0) {
          break;
        }
        goto LABEL_203;
      case 9:
      case 10:
        v56 = (__int64*)fw_memory_g_heap_manager_ptr;
        if (*(_QWORD*)(v51 + 72) != 0) {
          v57 = (float)(v54 * 0x1.0000000000000p-1f) + 0x1.0000000000000p+0f;
        }
        else {
          v57 = (float)((float)(v54 * 0x1.0000000000000p-1f) +
                        0x1.0000000000000p+0f) +
                (float)(v54 + 0x1.8000000000000p+0f);
        }
        v58 = fw_memory_HeapManager_Allocate(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 88, 16, 0),
        v120 = COERCE_AS(__typeof__(v120), PSEUDO_REGISTER(float, "s0", "=w"));
        *(_QWORD*)(v58 + 8) = 0;
        *(_QWORD*)(v58 + 16) = 0;
        *(_WORD*)(v58 + 32) = 0;
        *(_QWORD*)(v58 + 64) = v51;
        *(_DWORD*)(v58 + 72) = 0;
        *(_QWORD*)v58 = GameData_1fe47c0;
        *(_BYTE*)(v58 + 40) = 20;
        strcpy((char*)(v58 + 41), "WalkAndSee");
        *(float*)(v58 + 76) = v57;
        *(_DWORD*)(v58 + 80) = 0;
        *(_BYTE*)(v58 + 84) = (_DWORD)v44 == 10;
        *(_QWORD*)(v58 + 24) = game_combat_LegionStackWalkAndSee_vtable;
        LODWORD(v259_.v259) = v53 + 1;
        v59 = *v50;
        v229_.v229 = v58 + 24;
        v229_.v230 = v58;
        if ((int)v53 <= 0) {
          v60 = (char*)v59;
        }
        else {
          v60 = (char*)(v59 + ((v52 + 0xFFFFFFFF0LL) & 0xFFFFFFFF0LL) + 16);
        }
        GameRoutine_e37f80(v50, v60, (char*)&v229_.v229),
            v120 =
                COERCE_AS(__typeof__(v120), PSEUDO_REGISTER(float, "s0", "=w"));
        v61 = v229_.v230;
        if (v229_.v230 != 0 &&
            atomic_fetch_add((atomic_ullong* volatile)(v229_.v230 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v61 + 16LL))(v61),
              v120 = COERCE_AS(__typeof__(v120),
                               PSEUDO_REGISTER(float, "s0", "=w"));
          std___1___shared_weak_count___release_weak(v61),
              v120 = COERCE_AS(__typeof__(v120),
                               PSEUDO_REGISTER(float, "s0", "=w"));
        }
        v62 = fw_memory_HeapManager_Allocate(*v56, 80, 16, 0),
        v120 = COERCE_AS(__typeof__(v120), PSEUDO_REGISTER(float, "s0", "=w"));
        *(_QWORD*)(v62 + 8) = 0;
        *(_QWORD*)(v62 + 16) = 0;
        *(_WORD*)(v62 + 32) = 0;
        *(_QWORD*)(v62 + 64) = v51;
        *(_DWORD*)(v62 + 72) = 0;
        *(_QWORD*)v62 = GameData_1fe46d0;
        strcpy((char*)(v62 + 40), "\nDelay");
        *(float*)(v62 + 76) = v55;
        v227_.v228 = v62;
        *(_QWORD*)(v62 + 24) = game_combat_LegionStackDelay_vtable;
        v63 = v259_.v259;
        v227_.v227 = v62 + 24;
        LODWORD(v259_.v259) = v259_.v259 + 1;
        if (v63 <= 0) {
          v64 = (char*)*v50;
        }
        else {
          v64 = (char*)(*v50 + 16LL * (unsigned int)(v63 - 1) + 16);
        }
        GameRoutine_e37f80(v50, v64, (char*)&v227_.v227),
            v120 =
                COERCE_AS(__typeof__(v120), PSEUDO_REGISTER(float, "s0", "=w"));
        v65 = v227_.v228;
        goto LABEL_202;
      case 11:
        v66 = (__int64*)fw_memory_g_heap_manager_ptr;
        v67 = (unsigned int*)fw_memory_HeapManager_Allocate(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 4, 16, 0),
        v120 = COERCE_AS(__typeof__(v120), PSEUDO_REGISTER(float, "s0", "=w"));
        v262_.v262 = v67;
        *v67 = 232551559;
        v262_.v263 = (__int64)(v67 + 1);
        v262_.v264 = v67 + 1;
        v68 = StateMachines_e32520((__int64)v49, (__int64)&v262_.v262),
        v120 = COERCE_AS(__typeof__(v120), PSEUDO_REGISTER(float, "s0", "=w"));
        v69 = 128;
        if (*(_QWORD*)(*v66 + 200) == 0) {
          v69 = 56;
        }
        nn_mem_StandardAllocator_Free(*v66 + v69, (__int64)v67),
            v120 =
                COERCE_AS(__typeof__(v120), PSEUDO_REGISTER(float, "s0", "=w"));
        v70 = fw_memory_HeapManager_Allocate(*v66, 80, 16, 0),
        v120 = COERCE_AS(__typeof__(v120), PSEUDO_REGISTER(float, "s0", "=w"));
        *(_BYTE*)(v70 + 40) = 16;
        *(_QWORD*)(v70 + 8) = 0;
        *(_QWORD*)(v70 + 16) = 0;
        *(_WORD*)(v70 + 32) = 0;
        *(_QWORD*)v70 = GameData_1fe4810;
        *(_QWORD*)(v70 + 64) = v51;
        *(_DWORD*)(v70 + 72) = 0;
        strcpy((char*)(v70 + 41), "LookBind");
        v71 = GameData_212f360[0];
        *(_BYTE*)(v70 + 76) = 1;
        v223_.v224 = v70;
        *(_QWORD*)(v70 + 24) = v71 + 2;
        v72 = (char*)v49[17];
        v223_.v223 = v70 + 24;
        if ((int)v53 <= 0) {
          v73 = v72;
        }
        else {
          v73 = &v72[((v52 + 0xFFFFFFFF0LL) & 0xFFFFFFFF0LL) + 16];
        }
        GameRoutine_e37f80(v50, v73, (char*)&v223_.v223),
            v120 =
                COERCE_AS(__typeof__(v120), PSEUDO_REGISTER(float, "s0", "=w"));
        v74 = v223_.v224;
        if (v223_.v224 != 0 &&
            atomic_fetch_add((atomic_ullong* volatile)(v223_.v224 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v74 + 16LL))(v74),
              v120 = COERCE_AS(__typeof__(v120),
                               PSEUDO_REGISTER(float, "s0", "=w"));
          std___1___shared_weak_count___release_weak(v74),
              v120 = COERCE_AS(__typeof__(v120),
                               PSEUDO_REGISTER(float, "s0", "=w"));
        }
        v75 = fw_memory_HeapManager_Allocate(*v66, 120, 16, 0),
        v120 = COERCE_AS(__typeof__(v120), PSEUDO_REGISTER(float, "s0", "=w"));
        *(_QWORD*)(v75 + 8) = 0;
        *(_QWORD*)(v75 + 16) = 0;
        *(_WORD*)(v75 + 32) = 0;
        *(_QWORD*)v75 = GameData_1fe4680;
        *(_BYTE*)(v75 + 40) = 12;
        strcpy((char*)(v75 + 41), "Motion");
        *(_QWORD*)(v75 + 64) = v51;
        *(_BYTE*)(v75 + 80) = 0;
        *(_BYTE*)(v75 + 84) = 0;
        *(_BYTE*)(v75 + 88) = 0;
        *(_BYTE*)(v75 + 92) = 0;
        *(_BYTE*)(v75 + 96) = 0;
        *(_BYTE*)(v75 + 100) = 0;
        *(_BYTE*)(v75 + 104) = 0;
        *(_QWORD*)(v75 + 108) = 0;
        *(_BYTE*)(v75 + 116) = 0;
        *(_DWORD*)(v75 + 72) = 0;
        *(_DWORD*)(v75 + 76) = v68;
        v221_.v222 = v75;
        *(_QWORD*)(v75 + 24) = game_combat_LegionStackMotion_vtable;
        v76 = *v50;
        v221_.v221 = v75 + 24;
        if ((v53 & 0x80000000) == 0LL) {
          v77 = (char*)(v76 + (v52 & 0xFFFFFFFF0LL) + 16);
        }
        else {
          v77 = (char*)v76;
        }
        GameRoutine_e37f80(v50, v77, (char*)&v221_.v221),
            v120 =
                COERCE_AS(__typeof__(v120), PSEUDO_REGISTER(float, "s0", "=w"));
        v78 = v221_.v222;
        if (v221_.v222 != 0 &&
            atomic_fetch_add((atomic_ullong* volatile)(v221_.v222 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v78 + 16LL))(v78),
              v120 = COERCE_AS(__typeof__(v120),
                               PSEUDO_REGISTER(float, "s0", "=w"));
          std___1___shared_weak_count___release_weak(v78),
              v120 = COERCE_AS(__typeof__(v120),
                               PSEUDO_REGISTER(float, "s0", "=w"));
        }
        v79 = fw_memory_HeapManager_Allocate(*v66, 80, 16, 0),
        v120 = COERCE_AS(__typeof__(v120), PSEUDO_REGISTER(float, "s0", "=w"));
        *(_QWORD*)(v79 + 8) = 0;
        *(_QWORD*)(v79 + 16) = 0;
        *(_WORD*)(v79 + 32) = 0;
        strcpy((char*)(v79 + 41), "LookBind");
        *(_QWORD*)v79 = GameData_1fe4810;
        *(_QWORD*)(v79 + 64) = v51;
        *(_DWORD*)(v79 + 72) = 0;
        *(_BYTE*)(v79 + 76) = 0;
        v219_.v220 = v79;
        *(_BYTE*)(v79 + 40) = 16;
        *(_QWORD*)(v79 + 24) = v71 + 2;
        LODWORD(v259_.v259) = v53 + 3;
        v80 = *v50;
        v81 = *v50 + ((v52 + 16) & 0xFFFFFFFF0LL);
        v219_.v219 = v79 + 24;
        v82 = (char*)(v81 + 16);
        if ((int)v53 <= -2) {
          v83 = (char*)v80;
        }
        else {
          v83 = v82;
        }
        GameRoutine_e37f80(v50, v83, (char*)&v219_.v219),
            v120 =
                COERCE_AS(__typeof__(v120), PSEUDO_REGISTER(float, "s0", "=w"));
        v65 = v219_.v220;
        goto LABEL_202;
      case 12:
        v97 = (__int64*)fw_memory_g_heap_manager_ptr;
        v98 = (unsigned int*)fw_memory_HeapManager_Allocate(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 4, 16, 0),
        v120 = COERCE_AS(__typeof__(v120), PSEUDO_REGISTER(float, "s0", "=w"));
        v262_.v262 = v98;
        *v98 = 232551565;
        v262_.v263 = (__int64)(v98 + 1);
        v262_.v264 = v98 + 1;
        v99 = StateMachines_e32520((__int64)v49, (__int64)&v262_.v262),
        v120 = COERCE_AS(__typeof__(v120), PSEUDO_REGISTER(float, "s0", "=w"));
        v100 = 128;
        if (*(_QWORD*)(*v97 + 200) == 0) {
          v100 = 56;
        }
        nn_mem_StandardAllocator_Free(*v97 + v100, (__int64)v98),
            v120 =
                COERCE_AS(__typeof__(v120), PSEUDO_REGISTER(float, "s0", "=w"));
        v101 = fw_memory_HeapManager_Allocate(*v97, 80, 16, 0),
        v120 = COERCE_AS(__typeof__(v120), PSEUDO_REGISTER(float, "s0", "=w"));
        *(_BYTE*)(v101 + 40) = 16;
        *(_QWORD*)(v101 + 8) = 0;
        *(_QWORD*)(v101 + 16) = 0;
        *(_WORD*)(v101 + 32) = 0;
        *(_QWORD*)v101 = GameData_1fe4810;
        *(_QWORD*)(v101 + 64) = v51;
        *(_DWORD*)(v101 + 72) = 0;
        strcpy((char*)(v101 + 41), "LookBind");
        v102 = GameData_212f360[0];
        *(_BYTE*)(v101 + 76) = 1;
        v217_.v218 = v101;
        *(_QWORD*)(v101 + 24) = v102 + 2;
        v103 = (char*)v49[17];
        v217_.v217 = v101 + 24;
        if ((int)v53 <= 0) {
          v104 = v103;
        }
        else {
          v104 = &v103[((v52 + 0xFFFFFFFF0LL) & 0xFFFFFFFF0LL) + 16];
        }
        GameRoutine_e37f80(v50, v104, (char*)&v217_.v217),
            v120 =
                COERCE_AS(__typeof__(v120), PSEUDO_REGISTER(float, "s0", "=w"));
        v105 = v217_.v218;
        if (v217_.v218 != 0 &&
            atomic_fetch_add((atomic_ullong* volatile)(v217_.v218 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v105 + 16LL))(v105),
              v120 = COERCE_AS(__typeof__(v120),
                               PSEUDO_REGISTER(float, "s0", "=w"));
          std___1___shared_weak_count___release_weak(v105),
              v120 = COERCE_AS(__typeof__(v120),
                               PSEUDO_REGISTER(float, "s0", "=w"));
        }
        v106 = fw_memory_HeapManager_Allocate(*v97, 120, 16, 0),
        v120 = COERCE_AS(__typeof__(v120), PSEUDO_REGISTER(float, "s0", "=w"));
        *(_QWORD*)(v106 + 8) = 0;
        *(_QWORD*)(v106 + 16) = 0;
        *(_WORD*)(v106 + 32) = 0;
        *(_QWORD*)v106 = GameData_1fe4680;
        *(_BYTE*)(v106 + 40) = 12;
        strcpy((char*)(v106 + 41), "Motion");
        *(_QWORD*)(v106 + 64) = v51;
        *(_BYTE*)(v106 + 80) = 0;
        *(_BYTE*)(v106 + 84) = 0;
        *(_BYTE*)(v106 + 88) = 0;
        *(_BYTE*)(v106 + 92) = 0;
        *(_BYTE*)(v106 + 96) = 0;
        *(_BYTE*)(v106 + 100) = 0;
        *(_BYTE*)(v106 + 104) = 0;
        *(_QWORD*)(v106 + 108) = 0;
        *(_BYTE*)(v106 + 116) = 0;
        *(_DWORD*)(v106 + 72) = 0;
        *(_DWORD*)(v106 + 76) = v99;
        v215_.v216 = v106;
        *(_QWORD*)(v106 + 24) = game_combat_LegionStackMotion_vtable;
        v107 = *v50;
        v215_.v215 = v106 + 24;
        if ((v53 & 0x80000000) == 0LL) {
          v108 = (char*)(v107 + (v52 & 0xFFFFFFFF0LL) + 16);
        }
        else {
          v108 = (char*)v107;
        }
        GameRoutine_e37f80(v50, v108, (char*)&v215_.v215),
            v120 =
                COERCE_AS(__typeof__(v120), PSEUDO_REGISTER(float, "s0", "=w"));
        v109 = v215_.v216;
        if (v215_.v216 != 0 &&
            atomic_fetch_add((atomic_ullong* volatile)(v215_.v216 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v109 + 16LL))(v109),
              v120 = COERCE_AS(__typeof__(v120),
                               PSEUDO_REGISTER(float, "s0", "=w"));
          std___1___shared_weak_count___release_weak(v109),
              v120 = COERCE_AS(__typeof__(v120),
                               PSEUDO_REGISTER(float, "s0", "=w"));
        }
        v110 = fw_memory_HeapManager_Allocate(*v97, 80, 16, 0),
        v120 = COERCE_AS(__typeof__(v120), PSEUDO_REGISTER(float, "s0", "=w"));
        *(_QWORD*)(v110 + 8) = 0;
        *(_QWORD*)(v110 + 16) = 0;
        *(_WORD*)(v110 + 32) = 0;
        strcpy((char*)(v110 + 41), "LookBind");
        *(_QWORD*)v110 = GameData_1fe4810;
        *(_QWORD*)(v110 + 64) = v51;
        *(_DWORD*)(v110 + 72) = 0;
        *(_BYTE*)(v110 + 76) = 0;
        v213_.v214 = v110;
        *(_BYTE*)(v110 + 40) = 16;
        *(_QWORD*)(v110 + 24) = v102 + 2;
        LODWORD(v259_.v259) = v53 + 3;
        v111 = *v50;
        v112 = *v50 + ((v52 + 16) & 0xFFFFFFFF0LL);
        v213_.v213 = v110 + 24;
        v113 = (char*)(v112 + 16);
        if ((int)v53 <= -2) {
          v114 = (char*)v111;
        }
        else {
          v114 = v113;
        }
        GameRoutine_e37f80(v50, v114, (char*)&v213_.v213),
            v120 =
                COERCE_AS(__typeof__(v120), PSEUDO_REGISTER(float, "s0", "=w"));
        v65 = v213_.v214;
      LABEL_202:
        v14 = v208;
        if (v65 != 0) {
          goto LABEL_203;
        }
        break;
      case 13:
        v205 = fw_memory_HeapManager_Allocate(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 88, 16, 0),
        v120 = COERCE_AS(__typeof__(v120), PSEUDO_REGISTER(float, "s0", "=w"));
        *(_QWORD*)(v205 + 8) = 0;
        *(_QWORD*)(v205 + 16) = 0;
        *(_WORD*)(v205 + 32) = 0;
        *(_BYTE*)(v205 + 40) = 16;
        *(_QWORD*)v205 = GameData_1fe4720;
        *(_QWORD*)(v205 + 64) = v51;
        *(_DWORD*)(v205 + 72) = 0;
        strcpy((char*)(v205 + 41), "Approach");
        *(_QWORD*)(v205 + 76) = 0x3DCCCCCD40A00000LL;
        *(_BYTE*)(v205 + 84) = BYTE5(v44);
        *(_QWORD*)(v205 + 24) = game_combat_LegionStackApproach_vtable;
        LODWORD(v259_.v259) = v53 + 1;
        v206 = *v50;
        v211_.v211 = v205 + 24;
        v211_.v212 = v205;
        if ((int)v53 <= 0) {
          v207 = (char*)v206;
        }
        else {
          v207 = (char*)(v206 + ((v52 + 0xFFFFFFFF0LL) & 0xFFFFFFFF0LL) + 16);
        }
        GameRoutine_e37f80(v50, v207, (char*)&v211_.v211),
            v120 =
                COERCE_AS(__typeof__(v120), PSEUDO_REGISTER(float, "s0", "=w"));
        v65 = v211_.v212;
        if (v211_.v212 == 0) {
          break;
        }
      LABEL_203:
        if (atomic_fetch_add((atomic_ullong* volatile)(v65 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v65 + 16LL))(v65),
              v120 = COERCE_AS(__typeof__(v120),
                               PSEUDO_REGISTER(float, "s0", "=w"));
          std___1___shared_weak_count___release_weak(v65),
              v120 = COERCE_AS(__typeof__(v120),
                               PSEUDO_REGISTER(float, "s0", "=w"));
        }
        break;
      default:
        break;
      }
      if ((v44 & 0x100000000LL) != 0) {
        v193 = fw_memory_HeapManager_Allocate(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 80, 16, 0),
        v120 = COERCE_AS(__typeof__(v120), PSEUDO_REGISTER(float, "s0", "=w"));
        *(_QWORD*)(v193 + 8) = 0;
        *(_QWORD*)(v193 + 16) = 0;
        *(_WORD*)(v193 + 32) = 0;
        *(_QWORD*)(v193 + 64) = v51;
        *(_QWORD*)v193 = GameData_1fe4860;
        *(_BYTE*)(v193 + 40) = 20;
        strcpy((char*)(v193 + 41), "WaitDamage");
        *(_DWORD*)(v193 + 72) = 1;
        v209_.v210 = v193;
        *(_QWORD*)(v193 + 24) = game_combat_LegionStackWaitDamage_vtable;
        v194 = v259_.v259;
        v209_.v209 = v193 + 24;
        LODWORD(v259_.v259) = v259_.v259 + 1;
        v195 = (char*)(v194 <= 0 ? *v50
                                 : *v50 + 16LL * (unsigned int)(v194 - 1) + 16);
        GameRoutine_e37f80(v50, v195, (char*)&v209_.v209),
            v120 =
                COERCE_AS(__typeof__(v120), PSEUDO_REGISTER(float, "s0", "=w"));
        v196 = v209_.v210;
        if (v209_.v210 != 0 &&
            atomic_fetch_add((atomic_ullong* volatile)(v209_.v210 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v196 + 16LL))(v196),
              v120 = COERCE_AS(__typeof__(v120),
                               PSEUDO_REGISTER(float, "s0", "=w"));
          std___1___shared_weak_count___release_weak(v196),
              v120 = COERCE_AS(__typeof__(v120),
                               PSEUDO_REGISTER(float, "s0", "=w"));
        }
      }
      if ((*(_BYTE*)(v14 + 32) & 1) == 0) {
        GameRoutine_8123d0(),
            v120 =
                COERCE_AS(__typeof__(v120), PSEUDO_REGISTER(float, "s0", "=w"));
      }
      v197 = *(_DWORD*)(v14 + 24);
      *(_BYTE*)(v14 + 32) = 0;
      *(_DWORD*)(v14 + 16) = v197;
      *(_BYTE*)(v14 + 20) = 1;
      return;
    }
  }
  v262_.v263 = v39;
  v43 = 128;
  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
    v43 = 56;
  }
  nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v43,
                                v39),
      v120 = COERCE_AS(__typeof__(v120), PSEUDO_REGISTER(float, "s0", "=w"));
  if (*(_BYTE*)(v14 + 32) == 1) {
    goto LABEL_68;
  }
}

__int64 game_combat_e3e720(__int64 a1, __int64* a2, __int64 a3, __int64 a4,
                           unsigned __int64 a5, char a6, unsigned __int64 a7)
{

#pragma clang fp contract(off)
  __int64 v7;
  __int64 v8;
  char v9;
  __int64* v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  unsigned __int8 explicit;
  int* v19;
  __int64 v20;
  __int64 v21;
  int v22;
  _QWORD* v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  unsigned __int64 v28;
  unsigned __int64 v29;
  __int64 v30;
  unsigned __int64 v31;
  float v32;
  unsigned __int64 v33;
  float* v34;
  float* v35;
  __int64 v36;
  char* v37;
  __int64 v38;
  unsigned __int64 v39;
  __int64 v40;
  unsigned __int64 v41;
  __int64 v42;
  unsigned __int64 v43;
  unsigned __int64 v44;
  __int64 v45;
  __int64 v46;
  char v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  unsigned __int64 v51;
  float v52;
  unsigned __int64 v53;
  float* v54;
  __int64 v55;
  char* v56;
  __int64 v57;
  unsigned __int64 v58;
  __int64 v59;
  unsigned __int64 v60;
  __int64 v61;
  unsigned __int64 v62;
  unsigned __int64 v63;
  __int64 v64;
  __int64 v65;
  char v66;
  __int64 v67;
  __int64 v68;
  __int64 v69;
  unsigned __int64 v70;
  float v71;
  unsigned __int64 v72;
  float* v73;
  __int64 v74;
  char* v75;
  __int64 v76;
  unsigned __int64 v77;
  __int64 v78;
  unsigned __int64 v79;
  __int64 v80;
  unsigned __int64 v81;
  unsigned __int64 v82;
  __int64 v83;
  __int64 v84;
  char v85;
  __int64 v86;
  __int64 v87;
  __int64 v88;
  unsigned __int64 v89;
  float v90;
  unsigned __int64 v91;
  __int64 v92;
  __int64 v93;
  char* v94;
  __int64 v95;
  unsigned __int64 v96;
  __int64 v97;
  unsigned __int64 v98;
  __int64 v99;
  unsigned __int64 v100;
  unsigned __int64 v101;
  __int64 v102;
  __int64 v103;
  __int64 v104;
  __int64 v105;
  __int64* v106;
  __int64 v107;
  __int64 v108;
  __int64 v109;
  __int64 v110;
  __int64 v111;
  __int64* v112;
  __int64 v113;
  __int64 v114;
  char* v115;
  __int64* v116;
  __int64 v117;
  _QWORD* v118;
  __int64 v119;
  __int64 v124;
  __int64 v125;
  __int64 v126;
  __int64 v127;
  __int64 v128;
  __int64 v129;
  __int64 v130;
  __int64 v131;
  __int64 v132;
  __int64 v133;
  __int64 v134;
  char v135;
  char v136;
  __int64 result;
  struct {
    __int64 v138;
    __int64 v139;
    __int64 v140;
  } v138_;
  struct {
    __int64 v141;
    __int64 v142;
  } v141_;

  *(_QWORD*)a1 = game_combat_CombatLegion_vtable;
  v7 = *a2;
  v8 = a2[2];
  *(_QWORD*)(a1 + 16) = a2[1];
  *(_QWORD*)(a1 + 24) = v8;
  *(_QWORD*)(a1 + 8) = v7;
  LODWORD(v7) = *((_DWORD*)a2 + 6);
  *(_QWORD*)(a1 + 40) = 0;
  *(_QWORD*)(a1 + 48) = 0;
  *(_QWORD*)(a1 + 56) = 0;
  *(_QWORD*)(a1 + 64) = a3;
  *(_QWORD*)(a1 + 136) = 0;
  *(_QWORD*)(a1 + 144) = 0;
  *(_QWORD*)(a1 + 120) = 0;
  *(_QWORD*)(a1 + 128) = 0;
  *(_QWORD*)(a1 + 104) = 0;
  *(_QWORD*)(a1 + 112) = 0;
  *(_QWORD*)(a1 + 88) = 0;
  *(_QWORD*)(a1 + 96) = 0;
  *(_QWORD*)(a1 + 72) = 0;
  *(_QWORD*)(a1 + 80) = 0;
  *(_DWORD*)(a1 + 32) = v7;
  if (a5 >= 0xFFFFFFFFFFFFFFF7LL) {
    String_60a1d0();
  }
  v9 = a6 & 1;
  v14 = (__int64*)fw_memory_g_heap_manager_ptr;
  if (a5 >= 0x17) {
    if ((a5 | 7) == 0x17) {
      v16 = 26;
    }
    else {
      v16 = (a5 | 7) + 1;
    }
    v15 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                         v16, 16, 0);
    *(_QWORD*)(a1 + 160) = a5;
    *(_QWORD*)(a1 + 168) = v15;
    *(_QWORD*)(a1 + 152) = v16 | 1;
    goto LABEL_9;
  }
  v15 = a1 + 153;
  *(_BYTE*)(a1 + 152) = 2 * a5;
  if (a5 != 0) {
  LABEL_9:
    memmove(v15, a4, a5);
  }
  *(_BYTE*)(v15 + a5) = 0;
  *(_BYTE*)(a1 + 176) = v9;
  v17 = *(_QWORD*)(a1 + 8);
  *(_DWORD*)(a1 + 180) = 0;
  *(_BYTE*)(a1 + 192) = 0;
  *(_BYTE*)(a1 + 208) = 0;
  *(_DWORD*)(a1 + 224) = 0;
  *(_BYTE*)(a1 + 228) = 0;
  explicit = atomic_load_explicit((atomic_uchar* volatile)GameData_212deb8,
                                  memory_order_acquire);
  v19 = GameData_212deb0;
  if ((explicit & 1) == 0 &&
      __cxa_guard_acquire((__int64)GameData_212deb8) != 0) {
    *v19 = wld_Crc32(0, "CharacterBuilder", 0x10u);
    __cxa_guard_release((__int64)GameData_212deb8);
  }
  v20 = *(_QWORD*)(v17 + 512);
  v21 = v20;
  while (v21 != *(_QWORD*)(v17 + 504)) {
    v22 = *(_DWORD*)(v21 - 16);
    v21 -= 16;
    v20 -= 16;
    if (v22 == *v19) {
      if (*(_QWORD*)(v17 + 512) != v20) {
        v23 = *(_QWORD**)(v20 + 8);
        goto LABEL_17;
      }
      break;
    }
  }
  v23 = nullptr;
LABEL_17:
  v24 = v23[76];
  v25 = v23[77];
  if (v25 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v25 + 16), 1u,
                              memory_order_relaxed);
  }
  v26 = v23[78];
  v27 = *(_QWORD*)(a1 + 48);
  *(_QWORD*)(a1 + 40) = v24;
  *(_QWORD*)(a1 + 48) = v25;
  if (v27 != 0) {
    std___1___shared_weak_count___release_weak(v27);
  }
  *(_QWORD*)(a1 + 56) = v26;
  v28 = (1812433253 * (a7 ^ (a7 >> 30)) + 1) ^
        ((1812433253 * (a7 ^ (a7 >> 30)) + 1) << 11);
  v29 = v28 >> 8;
  if ((*(_BYTE*)(a1 + 152) & 1) != 0) {
    v30 = *(_QWORD*)(a1 + 168);
  }
  else {
    v30 = a1 + 153;
  }
  v31 = game_HashString(v30);
  v32 = vcvts_n_f32_u64(
      (unsigned __int16)(v28 ^ v29 ^ (-30363 * (v31 ^ (v31 >> 30)) + 2) ^
                         ((1812433253 * (v31 ^ (v31 >> 30)) + 2) >> 19)),
      0x10u);
  v34 = *(float**)(a1 + 88);
  v33 = *(_QWORD*)(a1 + 96);
  if ((unsigned __int64)v34 >= v33) {
    v36 = *(_QWORD*)(a1 + 80);
    v37 = (char*)v34 - v36;
    v38 = ((__int64)v34 - v36) >> 2;
    v39 = v38 + 1;
    if ((unsigned __int64)(v38 + 1) >> 62 != 0) {
      goto LABEL_128;
    }
    v40 = v33 - v36;
    if (v40 >> 1 > v39) {
      v39 = v40 >> 1;
    }
    if ((unsigned __int64)v40 >= 0x7FFFFFFFFFFFFFFCLL) {
      v41 = 0x3FFFFFFFFFFFFFFFLL;
    }
    else {
      v41 = v39;
    }
    if (v41 != 0) {
      if (v41 >> 62 != 0) {
        goto LABEL_129;
      }
      v42 = fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 4 * v41, 16, 0);
    }
    else {
      v42 = 0;
    }
    v43 = v42 + 4 * v41;
    v44 = (unsigned __int64)v34 - v36;
    v45 = (__int64)&v37[v42 + -4 * v38];
    *(float*)&v37[v42] = v32;
    v35 = (float*)&v37[v42 + 4];
    memcpy(v45, v36, v44);
    *(_QWORD*)(a1 + 80) = v45;
    *(_QWORD*)(a1 + 88) = v35;
    *(_QWORD*)(a1 + 96) = v43;
    v14 = (__int64*)fw_memory_g_heap_manager_ptr;
    if (v36 != 0) {
      v46 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v46 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v46, v36);
    }
  }
  else {
    *v34 = v32;
    v35 = v34 + 1;
  }
  v47 = *(_BYTE*)(a1 + 152);
  v48 = *(_QWORD*)(a1 + 168);
  *(_QWORD*)(a1 + 88) = v35;
  if ((v47 & 1) != 0) {
    v49 = v48;
  }
  else {
    v49 = a1 + 153;
  }
  v50 = game_HashString(v49);
  v51 = 1812433253 * ((v50 + 1) ^ ((unsigned __int64)(v50 + 1) >> 30)) + 2;
  v52 =
      vcvts_n_f32_u64((unsigned __int16)(v28 ^ v29 ^ v51 ^ (v51 >> 19)), 0x10u);
  v53 = *(_QWORD*)(a1 + 96);
  if ((unsigned __int64)v35 >= v53) {
    v55 = *(_QWORD*)(a1 + 80);
    v56 = (char*)v35 - v55;
    v57 = ((__int64)v35 - v55) >> 2;
    v58 = v57 + 1;
    if ((unsigned __int64)(v57 + 1) >> 62 != 0) {
      goto LABEL_128;
    }
    v59 = v53 - v55;
    if (v59 >> 1 > v58) {
      v58 = v59 >> 1;
    }
    if ((unsigned __int64)v59 >= 0x7FFFFFFFFFFFFFFCLL) {
      v60 = 0x3FFFFFFFFFFFFFFFLL;
    }
    else {
      v60 = v58;
    }
    if (v60 != 0) {
      if (v60 >> 62 != 0) {
        goto LABEL_129;
      }
      v61 = fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 4 * v60, 16, 0);
    }
    else {
      v61 = 0;
    }
    v62 = v61 + 4 * v60;
    v63 = (unsigned __int64)v35 - v55;
    v64 = (__int64)&v56[v61 + -4 * v57];
    *(float*)&v56[v61] = v52;
    v54 = (float*)&v56[v61 + 4];
    memcpy(v64, v55, v63);
    *(_QWORD*)(a1 + 80) = v64;
    *(_QWORD*)(a1 + 88) = v54;
    *(_QWORD*)(a1 + 96) = v62;
    v14 = (__int64*)fw_memory_g_heap_manager_ptr;
    if (v55 != 0) {
      v65 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v65 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v65, v55);
    }
  }
  else {
    *v35 = v52;
    v54 = v35 + 1;
  }
  v66 = *(_BYTE*)(a1 + 152);
  v67 = *(_QWORD*)(a1 + 168);
  *(_QWORD*)(a1 + 88) = v54;
  if ((v66 & 1) != 0) {
    v68 = v67;
  }
  else {
    v68 = a1 + 153;
  }
  v69 = game_HashString(v68);
  v70 = 1812433253 * ((v69 + 2) ^ ((unsigned __int64)(v69 + 2) >> 30)) + 2;
  v71 =
      vcvts_n_f32_u64((unsigned __int16)(v28 ^ v29 ^ v70 ^ (v70 >> 19)), 0x10u);
  v72 = *(_QWORD*)(a1 + 96);
  if ((unsigned __int64)v54 >= v72) {
    v74 = *(_QWORD*)(a1 + 80);
    v75 = (char*)v54 - v74;
    v76 = ((__int64)v54 - v74) >> 2;
    v77 = v76 + 1;
    if ((unsigned __int64)(v76 + 1) >> 62 != 0) {
      goto LABEL_128;
    }
    v78 = v72 - v74;
    if (v78 >> 1 > v77) {
      v77 = v78 >> 1;
    }
    if ((unsigned __int64)v78 >= 0x7FFFFFFFFFFFFFFCLL) {
      v79 = 0x3FFFFFFFFFFFFFFFLL;
    }
    else {
      v79 = v77;
    }
    if (v79 != 0) {
      if (v79 >> 62 != 0) {
        goto LABEL_129;
      }
      v80 = fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 4 * v79, 16, 0);
    }
    else {
      v80 = 0;
    }
    v81 = v80 + 4 * v79;
    v82 = (unsigned __int64)v54 - v74;
    v83 = (__int64)&v75[v80 + -4 * v76];
    *(float*)&v75[v80] = v71;
    v73 = (float*)&v75[v80 + 4];
    memcpy(v83, v74, v82);
    *(_QWORD*)(a1 + 80) = v83;
    *(_QWORD*)(a1 + 88) = v73;
    *(_QWORD*)(a1 + 96) = v81;
    v14 = (__int64*)fw_memory_g_heap_manager_ptr;
    if (v74 != 0) {
      v84 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v84 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v84, v74);
    }
  }
  else {
    *v54 = v71;
    v73 = v54 + 1;
  }
  v85 = *(_BYTE*)(a1 + 152);
  v86 = *(_QWORD*)(a1 + 168);
  *(_QWORD*)(a1 + 88) = v73;
  if ((v85 & 1) != 0) {
    v87 = v86;
  }
  else {
    v87 = a1 + 153;
  }
  v88 = game_HashString(v87);
  v89 = 1812433253 * ((v88 + 3) ^ ((unsigned __int64)(v88 + 3) >> 30)) + 2;
  v90 =
      vcvts_n_f32_u64((unsigned __int16)(v28 ^ v29 ^ v89 ^ (v89 >> 19)), 0x10u);
  v91 = *(_QWORD*)(a1 + 96);
  if ((unsigned __int64)v73 < v91) {
    *v73 = v90;
    v92 = (__int64)(v73 + 1);
    goto LABEL_97;
  }
  v93 = *(_QWORD*)(a1 + 80);
  v94 = (char*)v73 - v93;
  v95 = ((__int64)v73 - v93) >> 2;
  v96 = v95 + 1;
  if ((unsigned __int64)(v95 + 1) >> 62 != 0) {
  LABEL_128:
    GameRoutine_a78a90();
  }
  v97 = v91 - v93;
  if (v97 >> 1 > v96) {
    v96 = v97 >> 1;
  }
  if ((unsigned __int64)v97 >= 0x7FFFFFFFFFFFFFFCLL) {
    v98 = 0x3FFFFFFFFFFFFFFFLL;
  }
  else {
    v98 = v96;
  }
  if (v98 != 0) {
    if (v98 >> 62 == 0) {
      v14 = (__int64*)fw_memory_g_heap_manager_ptr;
      v99 = fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 4 * v98, 16, 0);
      goto LABEL_93;
    }
  LABEL_129:
    GameRoutine_60a210();
  }
  v99 = 0;
LABEL_93:
  v100 = v99 + 4 * v98;
  v101 = (unsigned __int64)v73 - v93;
  v102 = (__int64)&v94[v99 + -4 * v95];
  *(float*)&v94[v99] = v90;
  v92 = (__int64)&v94[v99 + 4];
  memcpy(v102, v93, v101);
  *(_QWORD*)(a1 + 80) = v102;
  *(_QWORD*)(a1 + 88) = v92;
  *(_QWORD*)(a1 + 96) = v100;
  if (v93 != 0) {
    v103 = 128;
    if (*(_QWORD*)(*v14 + 200) == 0) {
      v103 = 56;
    }
    nn_mem_StandardAllocator_Free(*v14 + v103, v93);
  }
LABEL_97:
  v104 = *v14;
  *(_QWORD*)(a1 + 88) = v92;
  v105 = fw_memory_HeapManager_Allocate(v104, 88, 16, 0);
  v106 = GameData_212f3f0;
  *(_BYTE*)(v105 + 40) = 0;
  *(_BYTE*)(v105 + 44) = 0;
  *(_BYTE*)(v105 + 48) = 0;
  *(_BYTE*)(v105 + 80) = 0;
  *(_QWORD*)(v105 + 16) = 0;
  *(_QWORD*)(v105 + 24) = 0;
  *(_QWORD*)(v105 + 29) = 0;
  *(_QWORD*)v105 = v106 + 2;
  *(_QWORD*)(v105 + 8) = a1;
  v107 = *(_QWORD*)(a1 + 104);
  *(_QWORD*)(a1 + 104) = v105;
  if (v107 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v107 + 8LL))(v107);
  }
  v108 = fw_memory_HeapManager_Allocate(*v14, 208, 16, 0);
  GameHr_e30f30(v108, a1);
  v109 = *(_QWORD*)(a1 + 112);
  *(_QWORD*)(a1 + 112) = v108;
  if (v109 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v109 + 8LL))(v109);
  }
  v110 = fw_memory_HeapManager_Allocate(*v14, 128, 16, 0);
  *(_BYTE*)(v110 + 64) = 0;
  v111 = v110;
  v112 = GameData_212f400;
  *(_QWORD*)(v110 + 16) = 0;
  *(_QWORD*)(v110 + 24) = 0;
  *(_QWORD*)(v110 + 32) = 0;
  *(_QWORD*)(v110 + 40) = 0;
  *(_BYTE*)(v110 + 48) = 0;
  *(_QWORD*)(v110 + 80) = 0;
  *(_QWORD*)(v110 + 88) = 1065353216;
  *(_BYTE*)(v110 + 100) = 0;
  *(_BYTE*)(v110 + 104) = 0;
  *(_QWORD*)(v110 + 116) = 0;
  *(_DWORD*)(v110 + 124) = 0;
  *(_QWORD*)v110 = v112 + 2;
  *(_QWORD*)(v110 + 8) = a1;
  *(_WORD*)(v110 + 96) = 256;
  *(_QWORD*)(v110 + 108) = 0x41C8000040A00000LL;
  v113 = *(_QWORD*)(a1 + 120);
  *(_QWORD*)(a1 + 120) = v111;
  if (v113 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v113 + 8LL))(v113);
  }
  v114 = fw_memory_HeapManager_Allocate(*v14, 144, 16, 0);
  v115 = (char*)GameData_212f3f8;
  *(_BYTE*)(v114 + 80) = 1;
  *(_BYTE*)(v114 + 48) = 0;
  *(_BYTE*)(v114 + 64) = 0;
  *(_QWORD*)(v114 + 16) = 0;
  *(_QWORD*)(v114 + 24) = 0;
  *(_DWORD*)(v114 + 32) = 0;
  *(_QWORD*)(v114 + 84) = 0;
  *(_QWORD*)(v114 + 92) = 0;
  *(_QWORD*)(v114 + 100) = 0x3F80000000000000LL;
  *(_BYTE*)(v114 + 108) = 0;
  *(_BYTE*)(v114 + 116) = 0;
  *(_QWORD*)v114 = v115 + 16;
  *(_QWORD*)(v114 + 8) = a1;
  v116 = GameData_212d2f0;
  *(_DWORD*)(v114 + 128) = 0;
  *(_BYTE*)(v114 + 136) = 0;
  *(_BYTE*)(v114 + 140) = 0;
  *(_QWORD*)(v114 + 120) = v116 + 2;
  v117 = *(_QWORD*)(a1 + 128);
  *(_QWORD*)(a1 + 128) = v114;
  if (v117 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v117 + 8LL))(v117);
  }
  v118 = (_QWORD*)*GameData_212f2e0;
  v119 = *(_QWORD*)(a1 + 48);
  v138_.v138 = *(_QWORD*)(a1 + 40);
  v138_.v139 = v119;
  if (v119 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v119 + 16), 1u,
                              memory_order_relaxed);
  }
  v138_.v140 = *(_QWORD*)(a1 + 56);
  JostleManager_ea1180((void*)(&v141_.v141), v118, &v138_.v138);
  v124 = v141_.v141;
  v125 = v141_.v142;
  v126 = *(_QWORD*)(a1 + 144);
  v141_.v141 = 0;
  v141_.v142 = 0;
  *(_QWORD*)(a1 + 136) = v124;
  *(_QWORD*)(a1 + 144) = v125;
  if (v126 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v126 + 8),
                                    0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v126 + 16LL))(v126);
    std___1___shared_weak_count___release_weak(v126);
  }
  v127 = v141_.v142;
  if (v141_.v142 != 0 &&
      atomic_fetch_add((atomic_ullong* volatile)(v141_.v142 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v127 + 16LL))(v127);
    std___1___shared_weak_count___release_weak(v127);
  }
  if (v138_.v139 != 0) {
    std___1___shared_weak_count___release_weak(v138_.v139);
  }
  v128 = *(_QWORD*)(a1 + 136);
  v129 = *(_QWORD*)(a1 + 144);
  if (v129 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v129 + 8), 1u,
                              memory_order_relaxed);
  }
  v130 = *(_QWORD*)(v128 + 40);
  v131 = *(_QWORD*)(a1 + 48);
  v136 = false;
  if (v131 != 0 && *(_QWORD*)(v131 + 8) != -1) {
    v132 = *(_QWORD*)(a1 + 56);
    if (v132 != 0 && (*(_BYTE*)(v132 + 342) & 1) != 0) {
      v133 = *(_QWORD*)(a1 + 104);
      v134 = v130;
      v135 = GameHr_e42180(v133);
      v130 = v134;
      if ((v135 & 1) != 0) {
        v136 = true;
      }
    }
  }
  result = game_ea3620(v130, v136, 4);
  if (v129 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v129 + 8),
                                    0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v129 + 16LL))(v129);
    return std___1___shared_weak_count___release_weak(v129);
  }
  return result;
}

__int64 game_combat_e414c0(__int64 a1, float* a2)
{
  float* v2;
  _QWORD* v3;
  __int64 v5;
  bool v6;
  __int64 v7;
  atomic_uchar* v8;
  unsigned __int8 explicit;
  int* v10;
  __int64 v11;
  __int64 v12;
  int v13;
  __int64 v14;
  _QWORD* v15;
  __int64 v16;
  bool v17;
  __int64 v18;
  __int64 result;
  float v20;
  _QWORD* v21;
  __int64 v22;
  bool v23;
  __int64 v24;
  __int64 v25;
  int v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64* v31;
  __int64* v32;
  float v33;
  __int64 v34;
  __int64 v35;
  unsigned __int64 v36;
  __int64 v37;
  __int64 v38;
  float v39;
  float v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  int v45;
  float* v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  __int64* v51;
  __int64* v52;
  float v53;
  __int64 v54;
  __int64 v55;
  float v56;
  float v57;
  int* v58;
  float v59;
  _QWORD* v60;
  __int64 v61;
  bool v62;
  __int64 v63;
  int* v64;
  __int64 v65;
  __int64 v66;
  int v67;
  int* v68;
  _QWORD* v69;
  __int64 v70;
  bool v71;
  __int64 v72;
  __int64 v73;
  __int64 v74;
  int v75;
  __int64 v76;
  unsigned __int64 v77;
  __int64 v78;
  __int64* v79;
  __int64* v80;
  __int64 v81;
  __int64* v82;
  __int64 v83;
  __int64 v84;
  bool v85;
  __int64 v86;
  float v87;
  float v88;
  __int64 v89;
  float v90;
  float v91;
  float* v92;
  int v93;
  int v94;
  float* v95;
  int v96;
  float* v97;
  int v98;

  v3 = *(_QWORD**)(a1 + 8);
  v5 = v3[6];
  if (v5 == 0 ||
      (*(_QWORD*)(v5 + 8) != -1 ? (v6 = v3[7] == 0) : (v6 = true), v6)) {
    v7 = 0;
  }
  else {
    v7 = v3[1];
  }
  v8 = (atomic_uchar*)GameData_212eda0;
  explicit = atomic_load_explicit((atomic_uchar* volatile)GameData_212eda0,
                                  memory_order_acquire);
  v10 = GameData_212ed98;
  if ((explicit & 1) == 0) {
    v92 = a2;
    v93 = __cxa_guard_acquire((__int64)GameData_212eda0);
    a2 = v92;
    if (v93 != 0) {
      *v10 = wld_Crc32(0, "CharacterAnimator", 0x11u);
      __cxa_guard_release((__int64)GameData_212eda0);
      a2 = v92;
    }
  }
  v11 = *(_QWORD*)(v7 + 512);
  v12 = v11;
  do {
    if (v12 == *(_QWORD*)(v7 + 504)) {
      return 0;
    }
    v13 = *(_DWORD*)(v12 - 16);
    v12 -= 16;
    v11 -= 16;
  } while (v13 != *v10);
  if (*(_QWORD*)(v7 + 512) == v11) {
    return 0;
  }
  v14 = *(_QWORD*)(v11 + 8);
  if (v14 == 0 || *(_QWORD*)(v14 + 96) == 0) {
    return 0;
  }
  if (*((_BYTE*)a2 + 20) != 1) {
    v20 = -0x1.0000000000000p+0f;
    if (*((_BYTE*)a2 + 4) != 1) {
      goto LABEL_65;
    }
    v21 = *(_QWORD**)(a1 + 8);
    v22 = v21[6];
    if (v22 == 0 ||
        (*(_QWORD*)(v22 + 8) != -1 ? (v23 = v21[7] == 0) : (v23 = true), v23)) {
      v42 = 0;
    }
    else {
      v42 = v21[1];
    }
    if ((atomic_load_explicit(v8, memory_order_acquire) & 1) == 0) {
      v97 = a2;
      v98 = __cxa_guard_acquire((__int64)GameData_212eda0);
      a2 = v97;
      if (v98 != 0) {
        *v10 = wld_Crc32(0, "CharacterAnimator", 0x11u);
        __cxa_guard_release((__int64)GameData_212eda0);
        a2 = v97;
      }
    }
    v43 = *(_QWORD*)(v42 + 512);
    v44 = v43;
    do {
      v45 = *(_DWORD*)(v44 - 16);
      v44 -= 16;
      v43 -= 16;
    } while (v45 != *v10);
    v46 = a2;
    v47 = *(unsigned int*)a2;
    v48 = *(_QWORD*)(*(_QWORD*)(v43 + 8) + 40LL);
    v49 = *(_QWORD*)(v48 + 392);
    v50 = *(_QWORD*)(v48 + 400);
    if (v50 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v50 + 8), 1u,
                                memory_order_relaxed);
      v51 = CharacterModel_1070c00(*(_QWORD*)(v49 + 11608), v47);
      if (atomic_fetch_add((atomic_ullong* volatile)(v50 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        v52 = v51;
        (*(void (**)(__int64))(*(_QWORD*)v50 + 16LL))(v50);
        std___1___shared_weak_count___release_weak(v50);
        v51 = v52;
      }
    }
    else {
      v51 = CharacterModel_1070c00(*(_QWORD*)(v49 + 11608), v47);
    }
    v54 = v51[5];
    v55 = v51[6];
    if (v55 == v54 || v55 - v54 >= 0) {
      v53 = *((float*)v51 + 3);
      v20 = v53 * game_edf4a0();
      a2 = v46;
      goto LABEL_65;
    }
    goto LABEL_128;
  }
  v15 = *(_QWORD**)(a1 + 8);
  v16 = v15[6];
  if (v16 == 0 ||
      (*(_QWORD*)(v16 + 8) != -1 ? (v17 = v15[7] == 0) : (v17 = true), v17)) {
    v18 = 0;
    if ((atomic_load_explicit(v8, memory_order_acquire) & 1) != 0) {
      goto LABEL_34;
    }
  }
  else {
    v18 = v15[1];
    if ((atomic_load_explicit(v8, memory_order_acquire) & 1) != 0) {
      goto LABEL_34;
    }
  }
  v95 = a2;
  v96 = __cxa_guard_acquire((__int64)GameData_212eda0);
  a2 = v95;
  if (v96 != 0) {
    *v10 = wld_Crc32(0, "CharacterAnimator", 0x11u);
    __cxa_guard_release((__int64)GameData_212eda0);
    a2 = v95;
  }
LABEL_34:
  v24 = *(_QWORD*)(v18 + 512);
  v25 = v24;
  do {
    v26 = *(_DWORD*)(v25 - 16);
    v25 -= 16;
    v24 -= 16;
  } while (v26 != *v10);
  v2 = a2;
  v27 = *(unsigned int*)a2;
  v28 = *(_QWORD*)(*(_QWORD*)(v24 + 8) + 40LL);
  v29 = *(_QWORD*)(v28 + 392);
  v30 = *(_QWORD*)(v28 + 400);
  if (v30 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v30 + 8), 1u,
                              memory_order_relaxed);
    v31 = CharacterModel_1070c00(*(_QWORD*)(v29 + 11608), v27);
    if (atomic_fetch_add((atomic_ullong* volatile)(v30 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      v32 = v31;
      (*(void (**)(__int64))(*(_QWORD*)v30 + 16LL))(v30);
      std___1___shared_weak_count___release_weak(v30);
      v31 = v32;
    }
  }
  else {
    v31 = CharacterModel_1070c00(*(_QWORD*)(v29 + 11608), v27);
  }
  v33 = *((float*)v31 + 3);
  v35 = v31[5];
  v34 = v31[6];
  v36 = v34 - v35;
  v37 = fw_memory_g_heap_manager_ptr;
  if (v34 == v35) {
    v38 = 0;
    goto LABEL_44;
  }
  if ((v36 & 0x8000000000000000LL) != 0) {
  LABEL_128:
    GameRoutine_a78a90();
  }
  v38 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                       v34 - v35, 16, 0);
  memcpy(v38, v35, v36);
LABEL_44:
  if (((_BYTE)v2[5] & 1) == 0) {
    GameRoutine_8123d0();
  }
  v39 = v2[4];
  a2 = v2;
  if (v33 >= v39) {
    v40 = v2[4];
  }
  else {
    v40 = v33;
  }
  if (v39 >= 0x0.0p+0f) {
    v20 = v40;
  }
  else {
    v20 = 0x0.0p+0f;
  }
  if (v38 != 0) {
    v41 = 128;
    if (*(_QWORD*)(*(_QWORD*)v37 + 200LL) == 0) {
      v41 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)v37 + v41, v38);
    a2 = v2;
  }
LABEL_65:
  if (*((_BYTE*)a2 + 12) == 1) {
    v56 = a2[2];
  }
  else {
    v57 = **(float**)(*(_QWORD*)(a1 + 8) + 80LL) + -0x1.0000000000000p-1f;
    v56 = (float)((float)(v57 + v57) * 0x1.99999a0000000p-5f) +
          0x1.0000000000000p+0f;
  }
  v58 = (int*)a2;
  if (*((_BYTE*)a2 + 28) != 0) {
    v59 = a2[6];
  }
  else {
    v59 = -0x1.0000000000000p+0f;
  }
  GameHr_e406e0(a1, 1);
  v60 = *(_QWORD**)(a1 + 8);
  v61 = v60[6];
  if (v61 == 0 ||
      (*(_QWORD*)(v61 + 8) != -1 ? (v62 = v60[7] == 0) : (v62 = true), v62)) {
    v63 = 0;
  }
  else {
    v63 = v60[1];
  }
  v64 = v58;
  if ((atomic_load_explicit(v8, memory_order_acquire) & 1) == 0) {
    v94 = __cxa_guard_acquire((__int64)GameData_212eda0);
    v64 = v58;
    if (v94 != 0) {
      *v10 = wld_Crc32(0, "CharacterAnimator", 0x11u);
      __cxa_guard_release((__int64)GameData_212eda0);
      v64 = v58;
    }
  }
  v65 = *(_QWORD*)(v63 + 512);
  v66 = v65;
  do {
    v67 = *(_DWORD*)(v66 - 16);
    v66 -= 16;
    v65 -= 16;
  } while (v67 != *v10);
  v68 = v64;
  CharacterAnimator_1079580(*(_QWORD*)(v65 + 8), *v64, v59, v20, v56);
  *(_DWORD*)(a1 + 36) = *v68;
  *(_BYTE*)(a1 + 40) = 1;
  v69 = *(_QWORD**)(a1 + 8);
  v70 = v69[6];
  if (v70 == 0 ||
      (*(_QWORD*)(v70 + 8) != -1 ? (v71 = v69[7] == 0) : (v71 = true), v71)) {
    v72 = 0;
    if ((atomic_load_explicit(v8, memory_order_acquire) & 1) != 0) {
      goto LABEL_90;
    }
  LABEL_123:
    if (__cxa_guard_acquire((__int64)GameData_212eda0) != 0) {
      *v10 = wld_Crc32(0, "CharacterAnimator", 0x11u);
      __cxa_guard_release((__int64)GameData_212eda0);
    }
    goto LABEL_90;
  }
  v72 = v69[1];
  if ((atomic_load_explicit(v8, memory_order_acquire) & 1) == 0) {
    goto LABEL_123;
  }
LABEL_90:
  v73 = *(_QWORD*)(v72 + 512);
  v74 = v73;
  do {
    v75 = *(_DWORD*)(v74 - 16);
    v74 -= 16;
    v73 -= 16;
  } while (v75 != *v10);
  v76 = *(_QWORD*)(*(_QWORD*)(v73 + 8) + 96LL);
  if (v76 == 0) {
    return 1;
  }
  v77 = GameRoutine_d2b5f0(*(_QWORD*)(v76 + 32) + 72LL);
  if ((v77 & 0x100000000LL) == 0) {
    return 1;
  }
  v78 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v76 + 24) + 72LL) + 104LL * (int)v77 +
                   16);
  if (v78 == 0) {
    return 1;
  }
  v79 = *(__int64**)(v78 + 80);
  v80 = *(__int64**)(v78 + 88);
  if (v79 == v80) {
    return 1;
  }
  v81 = GameData_212d4f0[0];
  v82 = GameData_212ece0[0];
  while (1) {
    v83 = *v79;
    v84 = v79[1];
    if (v84 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v84 + 8), 1u,
                                memory_order_relaxed);
    }
    if (*(float*)(v83 + 8) < 0x0.0p+0f) {
      v85 = true;
      if (v84 == 0) {
        goto LABEL_107;
      }
    LABEL_105:
      if (atomic_fetch_add((atomic_ullong* volatile)(v84 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v84 + 16LL))(v84);
        std___1___shared_weak_count___release_weak(v84);
      }
      goto LABEL_107;
    }
    v86 = __dynamic_cast(v83, v81, v82, 0);
    v85 = v86 == 0;
    if (v86 != 0) {
      v2 = (float*)v86;
    }
    if (v84 != 0) {
      goto LABEL_105;
    }
  LABEL_107:
    if (!v85) {
      break;
    }
    v79 += 2;
    result = 1;
    if (v79 == v80) {
      return result;
    }
  }
  if (v2 != nullptr) {
    v88 = v2[8];
    v87 = v2[9];
    v89 = *(_QWORD*)(*(_QWORD*)(a1 + 8) + 120LL);
    if (v88 <= 0x0.0p+0f) {
      v90 = 0x1.4000000000000p+2f;
    }
    else {
      v90 = v88 * 0x1.1c71c80000000p-2f;
    }
    *(float*)(v89 + 108) = v90;
    if (v87 <= 0x0.0p+0f) {
      v91 = v90 * 0x1.4000000000000p+2f;
    }
    else {
      v91 = v90 / v87;
    }
    *(float*)(v89 + 112) = v91;
  }
  return 1;
}

void game_combat_e45540(__int64 a1, __int64 a2)
{
  __int64* v2;
  __int64 v3;
  __int64* v4;
  __int64 v5;
  __int64 v6;
  __int64* v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  const char* v14;
  unsigned __int64 v15;
  unsigned __int64 v16;
  char* v17;
  __int64 v18;
  __int64* v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  char* v24;
  unsigned __int64 v25;
  __int64* v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  _BYTE* v30;
  __int64 v31;
  __int64 v32;
  char* v33;
  __int64 v34;
  char* v35;
  __int64 v36;
  __int64 v37;
  _DWORD* v38;
  int v40;
  __int64 v41;
  __int64 v42;
  _DWORD* v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  __int64 v48;
  __int64 v49;
  _DWORD* v50;
  unsigned __int64 v52;
  __int64 v53;
  bool v54;
  __int64* v55;
  __int64 v57;
  __int64 v58;
  __int64 v59;
  char v60;
  __int64 v61;
  __int64 v62;
  __int64 v63;
  __int64 v64;
  __int64* v65;
  unsigned __int64 v66;
  __int64 v67;
  __int64 v68;
  __int64 v69;
  __int64 v70;
  _QWORD* v71;
  _QWORD* v72;
  _QWORD* v73;
  __int64 v74;
  _QWORD* v75;
  __int64 v76;
  __int64 v77;
  __int64 v78;
  __int64 v79;
  char* v80;
  const char* v81;
  unsigned __int64 v82;
  char* v83;
  unsigned __int64 v84;
  __int64 v85;
  __int64 v86;
  __int64 v87;
  int v88;
  __int64 v89;
  __int64 v90;
  __int64* v91;
  atomic_ullong* v92;
  __int64 v93;
  __int64 v94;
  __int64 v95;
  atomic_ullong* v96;
  __int64 v97;
  __int64* v98;
  __int64 v99;
  __int64 v100;
  __int64 v101;
  unsigned __int64 v102;
  __int64 v103;
  __int64 v104;
  __int64 v105;
  unsigned __int64 v106;
  char* v107;
  __int64 v108;
  atomic_ullong* v109;
  __int64 v110;
  __int64 v111;
  __int64* v112;
  __int64 v113;
  _QWORD* v114;
  __int64 v115;
  __int64* v116;
  atomic_ullong* v117;
  __int64 v118;
  char* v119;
  int v120;
  float v121;
  int v122;
  int v123;
  int v124;
  int v125;
  float v126;
  __int64 v127;
  __int64 v128;
  float v129;
  _QWORD* v130;
  __int64* v131;
  char* v132;
  __int64 v133;
  unsigned __int64 v134;
  atomic_ullong* v135;
  __int64 v136;
  unsigned __int64 v137;
  bool v138;
  unsigned __int64 v139;
  __int64 v140;
  unsigned __int64 v141;
  unsigned __int64 v142;
  __int64 v143;
  char* v144;
  __int64 v145;
  float v146;
  __int64 v147;
  __int64 v148;
  _DWORD* v149;
  char v150;
  __int64 v151;
  __int64 v152;
  __int64 v153;
  __int64 v154;
  __int64 v155;
  __int64 v156;
  __int64 v157;
  __int64 v159;
  _QWORD* v160;
  __int64* v161;
  __int64* v162;
  __int64 v163;
  unsigned __int64 v164;
  atomic_ullong* v165;
  _BYTE* v166;
  _QWORD* v167;
  unsigned __int64 v168;
  bool v169;
  unsigned __int64 v170;
  unsigned __int64 v171;
  __int64 v172;
  unsigned __int64 v173;
  __int64 v174;
  char v175;
  __int64 v176;
  __int64 v177;
  char* v178;
  char* v179;
  __int64* v180;
  __int64 v181;
  __int64 v182;
  __int64 v183;
  __int64 v184;
  __int64 v185;
  char v186;
  __int64 v187;
  char* v188;
  __int64 v189;
  float v190;
  __int64 v191;
  __int64 v192;
  __int64 v193;
  __int64 v194;
  atomic_ullong* v195;
  __int64 v196;
  __int64 v197;
  __int64 v198;
  __int64 v199;
  char* v200;
  __int64 v201;
  float v202;
  __int64 v203;
  __int64 v204;
  int v205;
  __int64 v206;
  int v207;
  unsigned __int64 v208;
  __int64* v209;
  __int64 v210;
  __int64 v211;
  __int64 v212;
  atomic_ullong* v213;
  float v214;
  __int64 v215;
  __int64 v216;
  __int64* v217;
  __int64 v218;
  __int64 v219;
  atomic_ullong* v220;
  __int64 v221;
  __int64 v222;
  __int64 v223;
  __int64 v224;
  float v225;
  __int64 v226;
  __int64 v227;
  __int64 v228;
  atomic_ullong* v229;
  __int64 v230;
  __int64 v231;
  __int64* v232;
  __int64 v233;
  __int64 v234;
  __int64 v235;
  float v236;
  __int64 v237;
  __int64 v238;
  __int64 v239;
  __int64 v240;
  __int64* v241;
  atomic_ullong* v242;
  __int64 v243;
  __int64 v244;
  __int64 v245;
  float v246;
  __int64 v247;
  __int64 v248;
  __int64 v249;
  atomic_ullong* v250;
  __int64 v251;
  __int64 v252;
  __int64* v253;
  __int64 v254;
  __int64 v255;
  __int64 v256;
  atomic_ullong* v257;
  __int64 v258;
  __int64 v259;
  __int64* v260;
  __int64 v261;
  __int64 v262;
  __int64 v263;
  atomic_ullong* v264;
  __int64 v265;
  __int64 v266;
  __int64* v267;
  __int64 v268;
  __int64 v269;
  __int64 v270;
  atomic_ullong* v271;
  __int64* v272;
  __int64 v273;
  __int64 v274;
  __int64 v275;
  __int64 v276;
  __int64 v277;
  __int64* v278;
  __int64 v279;
  __int64 v280;
  float v281;
  __int64 v282;
  __int64 v283;
  __int64 v284;
  atomic_ullong* v285;
  __int64 v286;
  __int64 v287;
  __int64* v288;
  __int64 v289;
  __int64 v290;
  __int64* v291;
  __int64 v292;
  __int64 v293;
  __int64 v294;
  atomic_ullong* v295;
  __int64 v296;
  __int64 v297;
  float v298;
  __int64 v299;
  __int64 v300;
  __int64 v301;
  __int64 v302;
  __int64* v303;
  _QWORD* v304;
  __int64* v305;
  atomic_ullong* v306;
  __int64 v307;
  __int64 v308;
  __int64 v309;
  float v310;
  __int64 v311;
  __int64 v312;
  __int64 v313;
  atomic_ullong* v314;
  __int64 v315;
  __int64* v316;
  __int64 v317;
  __int64 v318;
  __int64 v319;
  __int64 v320;
  atomic_ullong* v321;
  __int64 v322;
  __int64 v323;
  __int64* v324;
  __int64 v325;
  __int64 v326;
  __int64 v327;
  __int64* v328;
  __int64 v329;
  __int64 v330;
  __int64 v331;
  __int64* v332;
  _QWORD* v333;
  __int64 v334;
  __int64* v335;
  atomic_ullong* v336;
  _QWORD* v337;
  __int64 v338;
  __int64 v339;
  float v340;
  __int64 v341;
  __int64 v342;
  _QWORD* v343;
  __int64 v344;
  __int64* v345;
  _QWORD* v346;
  atomic_ullong* v347;
  _QWORD* v348;
  __int64 v349;
  __int64 v350;
  __int64 v351;
  __int64 v352;
  float v353;
  __int64 v354;
  __int64 v355;
  _QWORD* v356;
  __int64 v357;
  __int64* v358;
  atomic_ullong* v359;
  _QWORD* v360;
  __int64 v361;
  __int64 v362;
  __int64 v363;
  float v364;
  __int64 v365;
  __int64 v366;
  __int64 v367;
  float v368;
  __int64* v369;
  _QWORD* v370;
  __int64 v371;
  __int64 v372;
  __int64 v373;
  __int64* v374;
  __int64 v375;
  atomic_ullong* v376;
  _BYTE* v377;
  __int64 v378;
  __int64 v379;
  unsigned __int64 v380;
  unsigned __int64 v381;
  bool v382;
  unsigned __int64 v383;
  unsigned __int64 v384;
  __int64 v385;
  unsigned __int64 v386;
  __int64 v387;
  char v388;
  __int64 v389;
  __int64 v390;
  char* v391;
  char* v392;
  __int64* v393;
  __int64 v394;
  __int64 v395;
  __int64 v396;
  __int64 v397;
  __int64 v398;
  char v399;
  __int64 v400;
  char* v401;
  __int64 v402;
  float v403;
  __int64 v404;
  __int64 v405;
  unsigned int v406;
  __int64* v407;
  float v408;
  float v409;
  float v410;
  float v411;
  float v412;
  float v413;
  __int64 v414;
  __int64 v415;
  atomic_ullong* v416;
  __int64 v417;
  __int64 v418;
  __int64 v419;
  _QWORD* v420;
  atomic_ullong* v421;
  __int64* v422;
  __int64 v423;
  unsigned __int64 v424;
  __int64 v425;
  _BYTE* v426;
  _QWORD* v427;
  unsigned __int64 v428;
  bool v429;
  unsigned __int64 v430;
  unsigned __int64 v431;
  __int64 v432;
  unsigned __int64 v433;
  __int64 v434;
  char v435;
  __int64 v436;
  __int64 v437;
  char* v438;
  char* v439;
  __int64* v440;
  __int64 v441;
  __int64 v442;
  __int64 v443;
  __int64* v444;
  __int64 v445;
  __int64 v446;
  char v447;
  __int64 v448;
  char* v449;
  __int64 v450;
  float v451;
  __int64 v452;
  __int64 v453;
  __int64 v454;
  atomic_ullong* v455;
  __int64 v456;
  __int64 v457;
  __int64* v458;
  __int64 v459;
  __int64 v460;
  __int64 v461;
  atomic_ullong* v462;
  __int64 v463;
  __int64 v464;
  __int64* v465;
  __int64 v466;
  __int64 v467;
  __int64 v468;
  atomic_ullong* v469;
  __int64 v470;
  __int64 v471;
  __int64* v472;
  __int64 v473;
  __int64 v474;
  unsigned int v475;
  __int64* v476;
  float v477;
  float v478;
  float v479;
  float v480;
  float v481;
  float v482;
  __int64 v483;
  __int64 v484;
  atomic_ullong* v485;
  __int64 v486;
  __int64 v487;
  __int64 v488;
  __int64 v489;
  __int64* v490;
  __int64 v491;
  __int64 v492;
  __int64 v493;
  __int64 v494;
  __int64 v495;
  __int64* v496;
  __int64 v497;
  _QWORD* v498;
  __int64 v499;
  __int64 v500;
  atomic_ullong* v501;
  __int64 v502;
  __int64 v503;
  __int64 v504;
  __int64 v505;
  float v506;
  __int64 v507;
  __int64 v508;
  __int64 v509;
  __int64 v510;
  __int64 v511;
  atomic_ullong* v512;
  __int64* v513;
  __int64 v514;
  __int64 v515;
  float v516;
  __int64 v517;
  __int64 v518;
  __int64 v519;
  __int64* v520;
  __int64 v521;
  __int64 v522;
  float v523;
  __int64 v524;
  __int64 v525;
  __int64 v526;
  atomic_ullong* v527;
  __int64 v528;
  __int64 v529;
  __int64* v530;
  __int64 v531;
  __int64 v532;
  __int64 v533;
  atomic_ullong* v534;
  __int64 v535;
  __int64 v536;
  __int64* v537;
  __int64 v538;
  __int64 v539;
  __int64 v540;
  atomic_ullong* v541;
  __int64 v542;
  __int64 v543;
  __int64* v544;
  __int64 v545;
  __int64 v546;
  __int64 v547;
  atomic_ullong* v548;
  __int64 v549;
  __int64* v550;
  __int64 v551;
  __int64 v552;
  __int64 v553;
  __int64 v554;
  __int64 v555;
  atomic_ullong* v556;
  __int64 v557;
  __int64* v558;
  __int64* v559;
  __int64 v560;
  __int64* v561;
  unsigned int v562;
  __int64 v563;
  __int64* v564;
  __int64 v565;
  float v566;
  __int64 v567;
  __int64 v568;
  __int64* v569;
  __int64 v570;
  __int64 v571;
  atomic_ullong* v572;
  __int64 v573;
  __int64 v574;
  __int64 v575;
  __int64 v576;
  atomic_ullong* v577;
  __int64 v578;
  __int64 v579;
  __int64* v580;
  __int64 v581;
  __int64 v582;
  __int64 v583;
  __int64 v584;
  atomic_ullong* v585;
  __int64 v586;
  __int64 v587;
  __int64 v588;
  __int64 v589;
  atomic_ullong* v590;
  __int64 v591;
  __int64 v592;
  __int64* v593;
  __int64 v594;
  __int64 v595;
  __int64 v596;
  __int64 v597;
  atomic_ullong* v598;
  __int64 v599;
  __int64 v600;
  __int64 v601;
  __int64 v602;
  atomic_ullong* v603;
  __int64 v604;
  __int64 v605;
  __int64* v606;
  __int64 v607;
  __int64 v608;
  __int64 v609;
  __int64 v610;
  atomic_ullong* v611;
  __int64 v612;
  __int64* v613;
  __int64 v614;
  __int64 v615;
  float v616;
  __int64 v617;
  __int64 v618;
  __int64 v619;
  __int64 v620;
  atomic_ullong* v621;
  __int64 v622;
  __int64 v623;
  __int64 v624;
  __int64 v625;
  float v626;
  __int64 v627;
  __int64 v628;
  _QWORD* v629;
  __int64 v630;
  __int64* v631;
  atomic_ullong* v632;
  _QWORD* v633;
  char* v634;
  __int64 v635;
  float v636;
  __int64 v637;
  __int64 v638;
  __int64 v639;
  atomic_ullong* v640;
  __int64 v641;
  __int64 v642;
  __int64* v643;
  __int64 v644;
  __int64 v645;
  unsigned int v646;
  __int64* v647;
  float v648;
  float v649;
  float v650;
  float v651;
  float v652;
  float v653;
  __int64 v654;
  __int64 v655;
  atomic_ullong* v656;
  __int64 v657;
  __int64 v658;
  __int64 v659;
  __int64 v660;
  __int64* v661;
  __int64 v662;
  __int64 v663;
  __int64 v664;
  __int64* v665;
  __int64* i;
  __int64 v667;
  __int64 v668;
  unsigned __int64 v669;
  __int64 v670;
  int v671;
  char v672;
  __int64 v673;
  _QWORD* v674;
  __int64 v675;
  __int64 v676[2];
  struct {
    __int64 v677;
    unsigned __int64 v678;
    char* v679;
  } v677_;
  struct {
    __int64 v680;
    __int64 v681;
  } v680_;
  struct {
    __int64 v682;
    __int64 v683;
  } v682_;
  struct {
    __int64 v684;
    __int64 v685;
  } v684_;
  struct {
    _QWORD* v686;
    __int64 v687;
  } v686_;
  struct {
    __int64 v688;
    __int64 v689;
  } v688_;
  struct {
    __int64 v690;
    __int64 v691;
  } v690_;
  struct {
    __int64 v692;
    __int64 v693;
  } v692_;
  struct {
    __int64 v694;
    __int64 v695;
  } v694_;
  struct {
    __int64 v696;
    __int64 v697;
  } v696_;
  struct {
    __int64 v698;
    __int64 v699;
  } v698_;
  struct {
    __int64 v700;
    __int64 v701;
  } v700_;
  struct {
    __int64 v702;
    __int64 v703;
  } v702_;
  struct {
    __int64 v704;
    __int64 v705;
  } v704_;
  struct {
    __int64 v706;
    __int64 v707;
  } v706_;
  struct {
    __int64 v708;
    __int64 v709;
  } v708_;
  struct {
    __int64 v710;
    __int64 v711;
  } v710_;
  struct {
    __int64 v712;
    __int64 v713;
  } v712_;
  struct {
    __int64 v714;
    __int64 v715;
  } v714_;
  struct {
    __int64 v716;
    __int64 v717;
  } v716_;
  struct {
    __int64 v718;
    __int64 v719;
  } v718_;
  struct {
    __int64 v720;
    __int64 v721;
  } v720_;
  struct {
    __int64 v722;
    __int64 v723;
  } v722_;
  struct {
    __int64 v724;
    __int64 v725;
  } v724_;
  struct {
    __int64 v726;
    __int64 v727;
  } v726_;
  struct {
    __int64 v728[3];
    float v729;
    char gap492_[4];
    __int64* v730;
  } v728_;

  *(_DWORD*)(a1 + 8) = 0;
  *(_QWORD*)(a1 + 16) = 0;
  v2 = (__int64*)(a1 + 16);
  v3 = a1;
  *(_QWORD*)(a1 + 152) = 0;
  *(_QWORD*)(a1 + 40) = 0;
  v4 = (__int64*)(a1 + 40);
  *(_QWORD*)(a1 + 64) = 0;
  v5 = a1 + 64;
  *(_QWORD*)(a1 + 24) = 0;
  *(_QWORD*)(a1 + 32) = 0;
  *(_QWORD*)(a1 + 48) = 0;
  *(_QWORD*)(a1 + 56) = 0;
  *(_QWORD*)(a1 + 72) = 0;
  *(_QWORD*)(a1 + 80) = 0;
  *(_DWORD*)(a1 + 88) = 0;
  *(_QWORD*)(a1 + 96) = 0;
  *(_QWORD*)(a1 + 104) = 0;
  *(_QWORD*)(a1 + 112) = 0;
  *(_QWORD*)(a1 + 120) = 0;
  *(_QWORD*)(a1 + 128) = 0;
  *(_QWORD*)(a1 + 136) = 0;
  *(_DWORD*)(a1 + 143) = 0;
  *(_DWORD*)(a1 + 160) = 0x2000;
  *(_QWORD*)(a1 + 168) = 0;
  *(_QWORD*)(a1 + 192) = 0;
  v6 = a1 + 192;
  *(_BYTE*)(a1 + 224) = 0;
  *(_QWORD*)(a1 + 232) = 0;
  v7 = (__int64*)(a1 + 232);
  *(_QWORD*)(a1 + 240) = 0;
  *(_QWORD*)(a1 + 248) = 0;
  *(_QWORD*)a1 = a2;
  v8 = *GameData_212d448[0];
  *(_QWORD*)(a1 + 176) = 0;
  *(_QWORD*)(a1 + 184) = 0;
  *(_QWORD*)(a1 + 200) = 0;
  *(_QWORD*)(a1 + 208) = 0;
  *(_BYTE*)(a1 + 216) = 0;
  v9 = *(_QWORD*)(v8 + 8);
  v10 = *(_QWORD*)(v9 + 728);
  if (v10 == 0) {
    return;
  }
  v11 = *(_QWORD*)(v10 + 8);
  if (v11 == 0) {
    return;
  }
  v12 = *(_BYTE*)(v11 + 104) == 5 ? *(_QWORD*)(v9 + 728) : 0LL;
  if (v12 == 0) {
    return;
  }
  if ((*(_DWORD*)(v9 + 112) & 0x20001) == 1 ||
      (*(_DWORD*)(v9 + 112) & 8) == 0) {
    return;
  }
  v14 = *(const char**)(*(_QWORD*)(v12 + 8) + 800LL);
  if (v14 == nullptr || *v14 == 0) {
    return;
  }
  v675 = v9;
  v676[1] = a1 + 168;
  memset(v728_.v728, 0, sizeof(v728_.v728));
  v15 = strlen(v14);
  if (v15 >= 0xFFFFFFFFFFFFFFF7LL) {
    goto LABEL_1094;
  }
  v16 = v15;
  if (v15 >= 0x17) {
    v18 = *(_QWORD*)fw_memory_g_heap_manager_ptr;
    v676[0] = v3;
    v19 = v7;
    v20 = v6;
    if ((v16 | 7) == 0x17) {
      v21 = 26;
    }
    else {
      v21 = (v16 | 7) + 1;
    }
    v22 = fw_memory_HeapManager_Allocate(v18, v21, 16, 0);
    v23 = v21 | 1;
    v6 = v20;
    v7 = v19;
    v3 = v676[0];
    v17 = (char*)v22;
    v677_.v678 = v16;
    v677_.v679 = (char*)v22;
    v677_.v677 = v23;
    goto LABEL_23;
  }
  LOBYTE(v677_.v677) = 2 * v15;
  v17 = (char*)&v677_.v677 + 1;
  if (v15 != 0) {
  LABEL_23:
    memmove((__int64)v17, (__int64)v14, v16);
  }
  v17[v16] = 0;
  if ((v677_.v677 & 1) != 0) {
    v24 = v677_.v679;
  }
  else {
    v24 = (char*)&v677_.v677 + 1;
  }
  if ((v677_.v677 & 1) != 0) {
    v25 = v677_.v678;
  }
  else {
    v25 = (unsigned __int64)(unsigned __int8)v677_.v677 >> 1;
  }
  RuntimeBuffer_8924a0((__int64)v728_.v728, (__int64)v24, v25, 0x2Cu);
  v26 = (__int64*)fw_memory_g_heap_manager_ptr;
  if ((v677_.v677 & 1) != 0 && v677_.v679 != nullptr) {
    v27 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v27 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v27,
                                  (__int64)v677_.v679);
  }
  v28 = v728_.v728[0];
  v29 = v728_.v728[1];
  v30 = (_BYTE*)v676[1];
  if (v728_.v728[1] != v728_.v728[0]) {
    v673 = v6;
    if ((*(_BYTE*)v728_.v728[0] & 1) != 0) {
      fw_text_String_CopyTerminated(&v677_.v677, *(_QWORD*)(v728_.v728[0] + 16),
                                    *(_QWORD*)(v728_.v728[0] + 8));
    }
    else {
      v31 = *(_QWORD*)v728_.v728[0];
      v32 = *(_QWORD*)(v728_.v728[0] + 16);
      v677_.v678 = *(_QWORD*)(v728_.v728[0] + 8);
      v677_.v679 = (char*)v32;
      v677_.v677 = v31;
    }
    v33 = v677_.v679;
    v670 = (__int64)v677_.v679;
    v672 = v677_.v677;
    v669 = v677_.v678;
    if ((v677_.v677 & 1) != 0) {
      v34 = v677_.v678;
    }
    else {
      v33 = (char*)&v677_.v677 + 1;
      v34 = (unsigned __int64)(unsigned __int8)v677_.v677 >> 1;
    }
    v676[0] = (__int64)v33;
    v35 = &v33[v34];
    if (v34 >= 7) {
      v36 = v676[0];
      v37 = v34;
      do {
        v38 = (_DWORD*)memchr(v36, 65, v37 - 6);
        if (v38 == nullptr) {
          break;
        }
        if (*v38 == 1634956097 && *(_DWORD*)((char*)v38 + 3) == 1953264993) {
          if (v38 != (_DWORD*)v35 &&
              (_DWORD*)((char*)v38 - v676[0]) != (_DWORD*)-1LL) {
            v40 = 1;
            v26 = (__int64*)fw_memory_g_heap_manager_ptr;
            goto LABEL_85;
          }
          break;
        }
        v36 = (__int64)v38 + 1;
        v37 = (__int64)&v35[-v36];
      } while ((__int64)&v35[-v36] >= 7);
    }
    if (v34 > 4) {
      v44 = v676[0];
      v45 = v34;
      do {
        v46 = memchr(v44, 83, v45 - 4);
        if (v46 == 0) {
          break;
        }
        if (*(_DWORD*)v46 == 1869572179 && *(_BYTE*)(v46 + 4) == 116) {
          if ((char*)v46 != v35 && v46 - v676[0] != -1) {
            v40 = 2;
            v26 = (__int64*)fw_memory_g_heap_manager_ptr;
            goto LABEL_85;
          }
          break;
        }
        v44 = v46 + 1;
        v45 = (__int64)&v35[-v44];
      } while ((__int64)&v35[-v44] >= 5);
      if (v34 >= 7) {
        v48 = v676[0];
        v49 = v34;
        do {
          v50 = (_DWORD*)memchr(v48, 67, v49 - 6);
          if (v50 == nullptr) {
            break;
          }
          if (*v50 == 1918986307 && *(_DWORD*)((char*)v50 + 3) == 1953458546) {
            if (v50 != (_DWORD*)v35 &&
                (_DWORD*)((char*)v50 - v676[0]) != (_DWORD*)-1LL) {
              v40 = 3;
              v26 = (__int64*)fw_memory_g_heap_manager_ptr;
              goto LABEL_85;
            }
            break;
          }
          v48 = (__int64)v50 + 1;
          v49 = (__int64)&v35[-v48];
        } while ((__int64)&v35[-v48] >= 7);
      }
      v155 = v676[0];
      v156 = v34;
      do {
        v157 = memchr(v155, 77, v156 - 4);
        if (v157 == 0) {
          break;
        }
        if (*(_DWORD*)v157 == 1768382797 && *(_BYTE*)(v157 + 4) == 99) {
          if ((char*)v157 != v35 && v157 - v676[0] != -1) {
            v40 = 4;
            v26 = (__int64*)fw_memory_g_heap_manager_ptr;
            goto LABEL_85;
          }
          break;
        }
        v155 = v157 + 1;
        v156 = (__int64)&v35[-v155];
      } while ((__int64)&v35[-v155] > 4);
    }
    v26 = (__int64*)fw_memory_g_heap_manager_ptr;
    if (v34 >= 4) {
      v41 = v676[0];
      v42 = v34;
      do {
        v43 = (_DWORD*)memchr(v41, 65, v42 - 3);
        if (v43 == nullptr) {
          break;
        }
        if (*v43 == 1634038337) {
          if (v43 != (_DWORD*)v35 &&
              (_DWORD*)((char*)v43 - v676[0]) != (_DWORD*)-1LL) {
            v40 = 5;
            goto LABEL_85;
          }
          break;
        }
        v41 = (__int64)v43 + 1;
        v42 = (__int64)&v35[-v41];
      } while ((__int64)&v35[-v41] >= 4);
    }
    v40 = 0;
  LABEL_85:
    v30 = (_BYTE*)v676[1];
    *(_DWORD*)(v3 + 8) = v40;
    if (v4 != &v677_.v677) {
      if ((*(_BYTE*)v4 & 1) == 0) {
        if ((v672 & 1) != 0) {
          GameRoutine_64df20(v4, v670, v669);
          if ((v677_.v677 & 1) == 0) {
            goto LABEL_96;
          }
        }
        else {
          v52 = v677_.v678;
          *v4 = v677_.v677;
          v4[1] = v52;
          v4[2] = (__int64)v677_.v679;
          if ((v677_.v677 & 1) == 0) {
            goto LABEL_96;
          }
        }
        goto LABEL_92;
      }
      SpineModel_64dde0(v4, v676[0], v34);
    }
    if ((v677_.v677 & 1) == 0) {
    LABEL_96:
      v28 = v728_.v728[0];
      v29 = v728_.v728[1];
      v6 = v673;
      goto LABEL_97;
    }
  LABEL_92:
    if (v677_.v679 != nullptr) {
      v53 = 128;
      if (*(_QWORD*)(*v26 + 200) == 0) {
        v53 = 56;
      }
      nn_mem_StandardAllocator_Free(*v26 + v53, (__int64)v677_.v679);
    }
    goto LABEL_96;
  }
LABEL_97:
  v54 = 0xAAAAAAAAAAAAAAABLL * ((v29 - v28) >> 3) >= 2;
  v55 = (__int64*)(v28 + 24);
  if (v54 && v2 != v55) {
    v84 = *(unsigned __int8*)v55;
    if ((*(_BYTE*)v2 & 1) != 0) {
      v101 = v28 + 25;
      v104 = v28 + 32;
      v102 = *(_QWORD*)(v28 + 32);
      v103 = *(_QWORD*)(v104 + 8);
      if ((v84 & 1) != 0) {
        v105 = v103;
      }
      else {
        v105 = v101;
      }
      if ((v84 & 1) != 0) {
        v106 = v102;
      }
      else {
        v106 = v84 >> 1;
      }
      SpineModel_64dde0(v2, v105, v106);
    }
    else if ((v84 & 1) != 0) {
      GameRoutine_64df20(v2, *(_QWORD*)(v28 + 40), *(_QWORD*)(v28 + 32));
    }
    else {
      v85 = *v55;
      v86 = v55[1];
      v87 = v55[2];
      v2[1] = v86;
      v2[2] = v87;
      *v2 = v85;
    }
  }
  *(_DWORD*)(v3 + 88) = *(_DWORD*)v12;
  GameRoutine_60a020(v5, *(const char**)(*(_QWORD*)(v12 + 8) + 32LL));
  v57 = v728_.v728[0];
  if (v728_.v728[0] != 0) {
    v58 = v728_.v728[1];
    if (v728_.v728[0] == v728_.v728[1]) {
      goto LABEL_113;
    }
    v59 = v728_.v728[1];
    do {
      v60 = *(_BYTE*)(v59 - 24);
      v59 -= 24;
      if ((v60 & 1) != 0) {
        v61 = *(_QWORD*)(v58 - 8);
        if (v61 != 0) {
          if (*(_QWORD*)(*v26 + 200) != 0) {
            v62 = 128;
          }
          else {
            v62 = 56;
          }
          nn_mem_StandardAllocator_Free(*v26 + v62, v61);
        }
      }
      v58 = v59;
    } while (v59 != v57);
    v728_.v728[1] = v57;
    v57 = v728_.v728[0];
    if (v728_.v728[0] != 0) {
    LABEL_113:
      v63 = 128;
      if (*(_QWORD*)(*v26 + 200) == 0) {
        v63 = 56;
      }
      nn_mem_StandardAllocator_Free(*v26 + v63, v57);
    }
  }
  v64 = v675;
  if (*(_DWORD*)(v3 + 8) == 0) {
    return;
  }
  v65 = *(__int64**)(*GameData_212c998[0] + 64);
  v66 = *(_QWORD*)(*GameData_212c998[0] + 72) - (_QWORD)v65;
  if ((int)(v66 >> 3) >= 1) {
    v67 = (v66 >> 3) & 0x7FFFFFFF;
    while (1) {
      v69 = *v65++;
      v68 = v69;
      if (v69 != 0 && *(_QWORD*)(v68 + 64) == *(_QWORD*)(v12 + 8)) {
        break;
      }
      if (--v67 == 0) {
        goto LABEL_123;
      }
    }
    GameRoutine_60a020(v6, *(const char**)(v68 + 8));
    v64 = v675;
  }
LABEL_123:
  v70 = *v26;
  *(_BYTE*)(v3 + 146) = (*(_DWORD*)(v64 + 112) & 0x80000) != 0;
  v71 = (_QWORD*)fw_memory_HeapManager_Allocate(v70, 304, 16, 0);
  v72 = v71 + 4;
  v73 = v71;
  v71[1] = 0;
  v71[2] = 0;
  *v71 = GameData_1fe4ce8;
  GameRoutine_e59440((__int64)(v71 + 4), v3);
  v74 = *(_QWORD*)(v3 + 104);
  *(_QWORD*)(v3 + 96) = v72;
  *(_QWORD*)(v3 + 104) = v73;
  if (v74 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v74 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v74 + 16LL))(v74);
    std___1___shared_weak_count___release_weak(v74);
  }
  v75 = (_QWORD*)fw_memory_HeapManager_Allocate(*v26, 56, 16, 0);
  v76 = *(_QWORD*)(v3 + 120);
  v75[1] = 0;
  v75[2] = 0;
  v75[4] = 0;
  v75[5] = 0;
  v75[6] = 0;
  *(_QWORD*)(v3 + 120) = v75;
  *v75 = GameData_1fe4d38;
  v75[3] = v3;
  *(_QWORD*)(v3 + 112) = v75 + 3;
  if (v76 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v76 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v76 + 16LL))(v76);
    std___1___shared_weak_count___release_weak(v76);
  }
  v77 = fw_memory_HeapManager_Allocate(*v26, 152, 16, 0);
  *(_QWORD*)(v77 + 16) = 0;
  v78 = GameData_212e420[0];
  v79 = *(_QWORD*)(v3 + 136);
  *(_DWORD*)(v77 + 48) = 0;
  *(_BYTE*)(v77 + 52) = 0;
  *(_DWORD*)(v77 + 56) = 0;
  *(_QWORD*)(v77 + 64) = 0;
  *(_QWORD*)(v77 + 72) = 0;
  *(_QWORD*)(v77 + 80) = 0;
  *(_QWORD*)(v77 + 88) = 0;
  *(_QWORD*)(v77 + 96) = 0;
  *(_QWORD*)(v77 + 104) = 0;
  *(_QWORD*)(v77 + 112) = 0;
  *(_QWORD*)(v77 + 120) = 0;
  *(_WORD*)(v77 + 136) = 0;
  *(_QWORD*)(v3 + 136) = v77;
  *(_QWORD*)v77 = v78 + 16;
  *(_QWORD*)(v77 + 8) = 0;
  strcpy((char*)(v77 + 25), "<noname>");
  *(_DWORD*)(v77 + 128) = 0;
  *(_DWORD*)(v77 + 132) = 1065353216;
  *(_QWORD*)(v77 + 144) = as_g_base_frame_counter + 88;
  *(_BYTE*)(v77 + 24) = 16;
  *(_QWORD*)(v3 + 128) = v77 + 24;
  if (v79 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v79 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v79 + 16LL))(v79);
    std___1___shared_weak_count___release_weak(v79);
  }
  *(_QWORD*)(*(_QWORD*)(v3 + 128) + 120LL) =
      *(_QWORD*)game_script_hub_g_frame_counter_ptr[0] + 144LL;
  v80 = *(char**)(v3 + 128);
  v81 = (&GameData_1fe5e78)[2 * *(unsigned int*)(v3 + 8)];
  v82 = strlen(v81);
  GameRoutine_60a060(v80, (__int64)v81, v82);
  if ((*(_BYTE*)(v3 + 168) & 1) != 0) {
    *(_QWORD*)(v3 + 176) = 12;
    v83 = *(char**)(v3 + 184);
  }
  else {
    *(_BYTE*)(v3 + 168) = 24;
    v83 = (char*)(v3 + 169);
  }
  strcpy(v83, "GambitAwake1");
  v88 = *(_DWORD*)(v3 + 8);
  if (v88 <= 2) {
    if (v88 != 1) {
      if (v88 != 2) {
        goto LABEL_1086;
      }
      LegionGambit_e4d550(v3, 0x1.0000000000000p-2f);
      LegionGambit_e4d990(v3, 20);
      v95 = fw_memory_HeapManager_Allocate(*v26, 120, 16, 0);
      *(_QWORD*)(v95 + 8) = 0;
      v96 = (atomic_ullong*)(v95 + 8);
      *(_QWORD*)(v95 + 16) = 0;
      v97 = v95;
      *(_QWORD*)(v95 + 32) = 0;
      *(_QWORD*)(v95 + 40) = 0;
      *(_QWORD*)(v95 + 48) = 0;
      *(_QWORD*)(v95 + 56) = 0;
      *(_QWORD*)(v95 + 72) = 0;
      *(_QWORD*)(v95 + 80) = 0;
      *(_QWORD*)v95 = GameData_1fe4fe8;
      *(_QWORD*)(v95 + 88) = 0;
      *(_QWORD*)(v95 + 96) = 0;
      v98 = GameData_212f440[0] + 2;
      *(_BYTE*)(v95 + 48) = 30;
      *(_DWORD*)(v95 + 80) = 20;
      v99 = *(_QWORD*)(v3 + 128);
      *(_QWORD*)(v95 + 104) = 0;
      *(_QWORD*)(v95 + 112) = 0;
      *(_QWORD*)(v95 + 24) = v98;
      *(_BYTE*)(v95 + 65) = 0;
      *(_WORD*)(v95 + 66) = 0;
      *(_DWORD*)(v95 + 68) = 0;
      strcpy((char*)(v95 + 49), "GambitInvisible");
      *(_BYTE*)(v95 + 112) = 1;
      v677_.v677 = v95 + 24;
      v677_.v678 = v95;
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v95 + 8), 1u,
                                memory_order_relaxed);
      *(_QWORD*)(v95 + 40) = v99;
      if (*(float*)(v99 + 24) < 0x0.0p+0f) {
        ((void (*)(__int64, double))GameRoutine_ce6d60)(v99, 0x0.0p+0);
      }
      GameRoutine_ce65f0((__int64*)(v99 + 80), &v677_.v677);
      v728_.v728[0] = (__int64)GameData_1fd7c18;
      v728_.v730 = v728_.v728;
      GameRoutine_ce6740(v99, (__int64)v728_.v728);
      if (v728_.v730 == v728_.v728) {
        v100 = 32;
      }
      else {
        if (v728_.v730 == nullptr) {
        LABEL_439:
          v276 = v677_.v678;
          if (v677_.v678 != 0 &&
              atomic_fetch_add((atomic_ullong* volatile)(v677_.v678 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v276 + 16LL))(v276);
            std___1___shared_weak_count___release_weak(v276);
          }
          if (atomic_fetch_add(v96, 0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v97 + 16LL))(v97);
            std___1___shared_weak_count___release_weak(v97);
          }
          v277 = fw_memory_HeapManager_Allocate(*v26, 144, 16, 0);
          v278 = GameData_212f458[0];
          *(_QWORD*)(v277 + 16) = 0;
          *(_QWORD*)(v277 + 40) = 0;
          *(_QWORD*)(v277 + 48) = 0;
          *(_QWORD*)(v277 + 56) = 0;
          *(_QWORD*)(v277 + 64) = 0;
          *(_QWORD*)(v277 + 80) = 0;
          *(_QWORD*)(v277 + 88) = 0;
          *(_QWORD*)(v277 + 104) = 0;
          *(_QWORD*)(v277 + 112) = 0;
          *(_QWORD*)(v277 + 120) = 0;
          *(_QWORD*)(v277 + 128) = 0;
          *(_QWORD*)v277 = GameData_1fe5168;
          *(_QWORD*)(v277 + 96) = 0;
          *(_QWORD*)(v277 + 136) = 0;
          strcpy((char*)(v277 + 57), "GambitInvisible");
          *(_BYTE*)(v277 + 73) = 0;
          *(_WORD*)(v277 + 74) = 0;
          *(_DWORD*)(v277 + 76) = 0;
          *(_QWORD*)(v277 + 8) = 0;
          v728_.v730 = v728_.v728;
          *(_QWORD*)(v277 + 32) = v278 + 2;
          *(_BYTE*)(v277 + 56) = 30;
          v728_.v728[0] = (__int64)GameData_1fe5238;
          v728_.v728[1] = v3;
          GameRoutine_e4eee0(v728_.v728, (_QWORD*)(v277 + 96));
          if (v728_.v730 == v728_.v728) {
            v279 = 32;
          }
          else {
            if (v728_.v730 == nullptr) {
              goto LABEL_449;
            }
            v279 = 40;
          }
          (*(void (**)(__int64))(*v728_.v730 + v279))((__int64)v728_.v730);
        LABEL_449:
          v280 = *(_QWORD*)(v3 + 128);
          v726_.v726 = v277 + 32;
          v726_.v727 = v277;
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v277 + 8), 1u,
                                    memory_order_relaxed);
          v281 = *(float*)(v277 + 40);
          *(_QWORD*)(v277 + 48) = v280;
          if (v281 > *(float*)(v280 + 24)) {
            ((void (*)(__int64))GameRoutine_ce6d60)(v280);
          }
          GameRoutine_ce65f0((__int64*)(v280 + 80), &v726_.v726);
          v728_.v728[0] = (__int64)GameData_1fd7c18;
          v728_.v730 = v728_.v728;
          GameRoutine_ce6740(v280, (__int64)v728_.v728);
          if (v728_.v730 == v728_.v728) {
            v282 = 32;
          }
          else {
            if (v728_.v730 == nullptr) {
            LABEL_456:
              v283 = v726_.v727;
              if (v726_.v727 != 0 &&
                  atomic_fetch_add((atomic_ullong* volatile)(v726_.v727 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
                (*(void (**)(__int64))(*(_QWORD*)v283 + 16LL))(v283);
                std___1___shared_weak_count___release_weak(v283);
              }
              if (atomic_fetch_add((atomic_ullong* volatile)(v277 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
                (*(void (**)(__int64))(*(_QWORD*)v277 + 16LL))(v277);
                std___1___shared_weak_count___release_weak(v277);
              }
              v284 = fw_memory_HeapManager_Allocate(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr, 88, 16, 0);
              *(_QWORD*)(v284 + 8) = 0;
              v285 = (atomic_ullong*)(v284 + 8);
              *(_QWORD*)(v284 + 16) = 0;
              v286 = v284;
              *(_QWORD*)(v284 + 48) = 0;
              *(_QWORD*)(v284 + 56) = 0;
              *(_QWORD*)(v284 + 32) = 0;
              *(_QWORD*)(v284 + 40) = 0;
              *(_QWORD*)(v284 + 72) = 0;
              *(_QWORD*)(v284 + 80) = 0;
              *(_QWORD*)v284 = GameData_1fe4e28;
              v287 = *(_QWORD*)(v3 + 128);
              v288 = GameData_212f420[0] + 2;
              strcpy((char*)(v284 + 49), "GambitInvisible");
              *(_BYTE*)(v284 + 65) = 0;
              *(_WORD*)(v284 + 66) = 0;
              *(_DWORD*)(v284 + 68) = 0;
              *(_QWORD*)(v284 + 24) = v288;
              *(_BYTE*)(v284 + 48) = 30;
              v724_.v724 = v284 + 24;
              v724_.v725 = v284;
              atomic_fetch_add_explicit((atomic_ullong* volatile)(v284 + 8), 1u,
                                        memory_order_relaxed);
              *(_QWORD*)(v284 + 40) = v287;
              if (*(float*)(v287 + 24) < 0x0.0p+0f) {
                ((void (*)(__int64, double))GameRoutine_ce6d60)(v287, 0x0.0p+0);
              }
              GameRoutine_ce65f0((__int64*)(v287 + 80), &v724_.v724);
              v728_.v728[0] = (__int64)GameData_1fd7c18;
              v728_.v730 = v728_.v728;
              GameRoutine_ce6740(v287, (__int64)v728_.v728);
              if (v728_.v730 == v728_.v728) {
                v289 = 32;
              }
              else {
                if (v728_.v730 == nullptr) {
                LABEL_468:
                  v290 = v724_.v725;
                  if (v724_.v725 != 0 &&
                      atomic_fetch_add(
                          (atomic_ullong* volatile)(v724_.v725 + 8),
                          0xFFFFFFFFFFFFFFFFLL) == 0) {
                    (*(void (**)(__int64))(*(_QWORD*)v290 + 16LL))(v290);
                    std___1___shared_weak_count___release_weak(v290);
                  }
                  if (atomic_fetch_add(v285, 0xFFFFFFFFFFFFFFFFLL) == 0) {
                    (*(void (**)(__int64))(*(_QWORD*)v286 + 16LL))(v286);
                    std___1___shared_weak_count___release_weak(v286);
                  }
                  v291 = (__int64*)fw_memory_g_heap_manager_ptr;
                  v292 = fw_memory_HeapManager_Allocate(
                      *(_QWORD*)fw_memory_g_heap_manager_ptr, 144, 16, 0);
                  *(_QWORD*)(v292 + 56) = 0;
                  *(_QWORD*)(v292 + 64) = 0;
                  *(_QWORD*)(v292 + 96) = 0;
                  v293 = v292;
                  *(_QWORD*)(v292 + 16) = 0;
                  *(_QWORD*)v292 = GameData_1fe5168;
                  *(_QWORD*)(v292 + 40) = 0;
                  *(_QWORD*)(v292 + 48) = 0;
                  *(_QWORD*)(v292 + 32) = v278 + 2;
                  v294 = v292 + 32;
                  *(_QWORD*)(v292 + 72) = 0;
                  *(_QWORD*)(v292 + 80) = 0;
                  *(_QWORD*)(v292 + 88) = 0;
                  *(_QWORD*)(v292 + 104) = 0;
                  *(_QWORD*)(v292 + 112) = 0;
                  *(_QWORD*)(v292 + 120) = 0;
                  *(_QWORD*)(v292 + 128) = 0;
                  *(_QWORD*)(v292 + 136) = 0;
                  *(_QWORD*)(v292 + 8) = 0;
                  v295 = (atomic_ullong*)(v292 + 8);
                  v728_.v730 = v728_.v728;
                  *(_BYTE*)(v292 + 56) = 18;
                  *(_BYTE*)(v292 + 65) = 98;
                  v728_.v728[0] = (__int64)GameData_1fe52b8;
                  v728_.v728[1] = v3;
                  *(_QWORD*)(v292 + 57) = *(_QWORD*)"GambitSub";
                  GameRoutine_e4eee0(v728_.v728, (_QWORD*)(v292 + 96));
                  if (v728_.v730 == v728_.v728) {
                    v296 = 32;
                  }
                  else {
                    if (v728_.v730 == nullptr) {
                      goto LABEL_478;
                    }
                    v296 = 40;
                  }
                  (*(void (**)(__int64))(*v728_.v730 + v296))(
                      (__int64)v728_.v730);
                LABEL_478:
                  v297 = *(_QWORD*)(v3 + 128);
                  v722_.v722 = v294;
                  v722_.v723 = v293;
                  atomic_fetch_add_explicit((atomic_ullong* volatile)(v293 + 8),
                                            1u, memory_order_relaxed);
                  v298 = *(float*)(v293 + 40);
                  *(_QWORD*)(v293 + 48) = v297;
                  if (v298 > *(float*)(v297 + 24)) {
                    ((void (*)(__int64))GameRoutine_ce6d60)(v297);
                  }
                  GameRoutine_ce65f0((__int64*)(v297 + 80), &v722_.v722);
                  v728_.v728[0] = (__int64)GameData_1fd7c18;
                  v728_.v730 = v728_.v728;
                  GameRoutine_ce6740(v297, (__int64)v728_.v728);
                  if (v728_.v730 == v728_.v728) {
                    v299 = 32;
                  }
                  else {
                    if (v728_.v730 == nullptr) {
                    LABEL_485:
                      v300 = v722_.v723;
                      if (v722_.v723 != 0 &&
                          atomic_fetch_add(
                              (atomic_ullong* volatile)(v722_.v723 + 8),
                              0xFFFFFFFFFFFFFFFFLL) == 0) {
                        (*(void (**)(__int64))(*(_QWORD*)v300 + 16LL))(v300);
                        std___1___shared_weak_count___release_weak(v300);
                      }
                      if (atomic_fetch_add(v295, 0xFFFFFFFFFFFFFFFFLL) == 0) {
                        (*(void (**)(__int64))(*(_QWORD*)v293 + 16LL))(v293);
                        std___1___shared_weak_count___release_weak(v293);
                      }
                      v301 = fw_memory_HeapManager_Allocate(*v291, 160, 16, 0);
                      *(_QWORD*)(v301 + 16) = 0;
                      v302 = v301;
                      v303 = GameData_212f480[0];
                      *(_QWORD*)(v301 + 40) = 0;
                      *(_QWORD*)(v301 + 48) = 0;
                      *(_QWORD*)(v301 + 56) = 0;
                      *(_QWORD*)(v301 + 64) = 0;
                      *(_QWORD*)(v301 + 112) = 0;
                      v304 = (_QWORD*)(v301 + 112);
                      *(_QWORD*)(v301 + 88) = 0;
                      v305 = (__int64*)(v301 + 88);
                      *(_QWORD*)(v301 + 57) = *(_QWORD*)"GambitSub";
                      *(_QWORD*)(v301 + 72) = 0;
                      *(_QWORD*)(v301 + 80) = 0;
                      *(_QWORD*)(v301 + 96) = 0;
                      *(_QWORD*)(v301 + 104) = 0;
                      *(_QWORD*)v301 = GameData_1fe5578;
                      *(_QWORD*)(v301 + 8) = 0;
                      v306 = (atomic_ullong*)(v301 + 8);
                      *(_QWORD*)(v301 + 120) = 0;
                      *(_QWORD*)(v301 + 128) = 0;
                      *(_QWORD*)(v301 + 136) = 0;
                      *(_QWORD*)(v301 + 144) = 0;
                      *(_QWORD*)(v301 + 152) = 0;
                      *(_QWORD*)(v301 + 96) = 0;
                      *(_QWORD*)(v301 + 104) = 0;
                      *(_QWORD*)(v301 + 88) = 0;
                      LODWORD(v728_.v728[0]) = 603384486;
                      *(_QWORD*)(v301 + 32) = v303 + 2;
                      v307 = v301 + 32;
                      *(_DWORD*)(v301 + 40) = 1115947008;
                      *(_BYTE*)(v301 + 56) = 18;
                      *(_BYTE*)(v301 + 65) = 98;
                      GameRoutine_e4df90((__int64*)(v301 + 88), v728_.v728);
                      LODWORD(v728_.v728[0]) = 603384487;
                      GameRoutine_e4df90(v305, v728_.v728);
                      v728_.v730 = v728_.v728;
                      v728_.v728[0] = (__int64)GameData_1fe55c8;
                      GameRoutine_e4fc30(v728_.v728, v304);
                      if (v728_.v730 == v728_.v728) {
                        v308 = 32;
                      }
                      else {
                        if (v728_.v730 == nullptr) {
                          goto LABEL_495;
                        }
                        v308 = 40;
                      }
                      (*(void (**)(__int64))(*v728_.v730 + v308))(
                          (__int64)v728_.v730);
                    LABEL_495:
                      v309 = *(_QWORD*)(v3 + 128);
                      v677_.v677 = v307;
                      v677_.v678 = v302;
                      atomic_fetch_add_explicit(
                          (atomic_ullong* volatile)(v302 + 8), 1u,
                          memory_order_relaxed);
                      v310 = *(float*)(v302 + 40);
                      *(_QWORD*)(v302 + 48) = v309;
                      if (v310 > *(float*)(v309 + 24)) {
                        ((void (*)(__int64))GameRoutine_ce6d60)(v309);
                      }
                      GameRoutine_ce65f0((__int64*)(v309 + 80), &v677_.v677);
                      v728_.v728[0] = (__int64)GameData_1fd7c18;
                      v728_.v730 = v728_.v728;
                      GameRoutine_ce6740(v309, (__int64)v728_.v728);
                      if (v728_.v730 == v728_.v728) {
                        v311 = 32;
                      }
                      else {
                        if (v728_.v730 == nullptr) {
                        LABEL_502:
                          v312 = v677_.v678;
                          if (v677_.v678 != 0 &&
                              atomic_fetch_add(
                                  (atomic_ullong* volatile)(v677_.v678 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
                            (*(void (**)(__int64))(*(_QWORD*)v312 + 16LL))(
                                v312);
                            std___1___shared_weak_count___release_weak(v312);
                          }
                          if (atomic_fetch_add(v306, 0xFFFFFFFFFFFFFFFFLL) ==
                              0) {
                            (*(void (**)(__int64))(*(_QWORD*)v302 + 16LL))(
                                v302);
                            std___1___shared_weak_count___release_weak(v302);
                          }
                          v313 =
                              fw_memory_HeapManager_Allocate(*v291, 128, 16, 0);
                          *(_QWORD*)(v313 + 8) = 0;
                          v314 = (atomic_ullong*)(v313 + 8);
                          *(_QWORD*)(v313 + 16) = 0;
                          v315 = v313;
                          *(_QWORD*)(v313 + 32) = 0;
                          *(_QWORD*)(v313 + 40) = 0;
                          *(_QWORD*)(v313 + 48) = 0;
                          *(_QWORD*)(v313 + 56) = 0;
                          *(_QWORD*)v313 = GameData_1fe5338;
                          v316 = GameData_212f460[0];
                          *(_QWORD*)(v313 + 112) = 0;
                          *(_QWORD*)(v313 + 120) = 0;
                          v317 = *(_QWORD*)(v3 + 128);
                          *(_QWORD*)(v313 + 64) = 0;
                          *(_QWORD*)(v313 + 72) = 0;
                          *(_QWORD*)(v313 + 24) = v316 + 2;
                          *(_BYTE*)(v313 + 80) = 44;
                          v726_.v726 = v313 + 24;
                          v726_.v727 = v313;
                          strcpy((char*)(v313 + 81), "Stratagem_Shot_Smoke_A");
                          *(_BYTE*)(v313 + 104) = 22;
                          *(_DWORD*)(v313 + 32) = 1108344832;
                          *(_DWORD*)(v313 + 112) = 1936613746;
                          *(_QWORD*)(v313 + 105) = *(_QWORD*)"Loc_C_Trans";
                          atomic_fetch_add_explicit(
                              (atomic_ullong* volatile)(v313 + 8), 1u,
                              memory_order_relaxed);
                          *(_QWORD*)(v313 + 40) = v317;
                          if (*(float*)(v317 + 24) < 0x1.2000000000000p+5f) {
                            ((void (*)(__int64, float))GameRoutine_ce6d60)(
                                v317, 0x1.2000000000000p+5f);
                          }
                          GameRoutine_ce65f0((__int64*)(v317 + 80),
                                             &v726_.v726);
                          v728_.v728[0] = (__int64)GameData_1fd7c18;
                          v728_.v730 = v728_.v728;
                          GameRoutine_ce6740(v317, (__int64)v728_.v728);
                          if (v728_.v730 == v728_.v728) {
                            v318 = 32;
                          }
                          else {
                            if (v728_.v730 == nullptr) {
                            LABEL_514:
                              v319 = v726_.v727;
                              if (v726_.v727 != 0 &&
                                  atomic_fetch_add(
                                      (atomic_ullong* volatile)(v726_.v727 + 8),
                                      0xFFFFFFFFFFFFFFFFLL) == 0) {
                                (*(void (**)(__int64))(*(_QWORD*)v319 + 16LL))(
                                    v319);
                                std___1___shared_weak_count___release_weak(
                                    v319);
                              }
                              if (atomic_fetch_add(v314,
                                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
                                (*(void (**)(__int64))(*(_QWORD*)v315 + 16LL))(
                                    v315);
                                std___1___shared_weak_count___release_weak(
                                    v315);
                              }
                              v320 = fw_memory_HeapManager_Allocate(*v291, 88,
                                                                    16, 0);
                              *(_QWORD*)(v320 + 8) = 0;
                              v321 = (atomic_ullong*)(v320 + 8);
                              *(_QWORD*)(v320 + 16) = 0;
                              v322 = v320;
                              *(_QWORD*)v320 = GameData_1fe5528;
                              *(_QWORD*)(v320 + 72) = 0;
                              *(_QWORD*)(v320 + 80) = 0;
                              *(_QWORD*)(v320 + 32) = 0;
                              *(_QWORD*)(v320 + 40) = 0;
                              *(_QWORD*)(v320 + 48) = 0;
                              *(_QWORD*)(v320 + 56) = 0;
                              *(_QWORD*)(v320 + 64) = 0;
                              v323 = *(_QWORD*)(v3 + 128);
                              v324 = GameData_212f478[0] + 2;
                              *(_DWORD*)(v320 + 80) = 1045220557;
                              *(_QWORD*)(v320 + 24) = v324;
                              v724_.v724 = v320 + 24;
                              v724_.v725 = v320;
                              *(_DWORD*)(v320 + 32) = 1121452033;
                              atomic_fetch_add_explicit(
                                  (atomic_ullong* volatile)(v320 + 8), 1u,
                                  memory_order_relaxed);
                              *(_QWORD*)(v320 + 40) = v323;
                              if (*(float*)(v323 + 24) <
                                  0x1.b000020000000p+6f) {
                                ((void (*)(__int64, float))GameRoutine_ce6d60)(
                                    v323, 0x1.b000020000000p+6f);
                              }
                              GameRoutine_ce65f0((__int64*)(v323 + 80),
                                                 &v724_.v724);
                              v728_.v728[0] = (__int64)GameData_1fd7c18;
                              v728_.v730 = v728_.v728;
                              GameRoutine_ce6740(v323, (__int64)v728_.v728);
                              if (v728_.v730 == v728_.v728) {
                                v325 = 32;
                              }
                              else {
                                if (v728_.v730 == nullptr) {
                                LABEL_526:
                                  v326 = v724_.v725;
                                  if (v724_.v725 != 0 &&
                                      atomic_fetch_add(
                                          (atomic_ullong* volatile)(v724_.v725 +
                                                                    8),
                                          0xFFFFFFFFFFFFFFFFLL) == 0) {
                                    (*(void (**)(__int64))(*(_QWORD*)v326 +
                                                           16LL))(v326);
                                    std___1___shared_weak_count___release_weak(
                                        v326);
                                  }
                                  if (atomic_fetch_add(
                                          v321, 0xFFFFFFFFFFFFFFFFLL) == 0) {
                                    (*(void (**)(__int64))(*(_QWORD*)v322 +
                                                           16LL))(v322);
                                    std___1___shared_weak_count___release_weak(
                                        v322);
                                  }
                                  v327 = fw_memory_HeapManager_Allocate(
                                      *v291, 80, 16, 0);
                                  *(_QWORD*)(v327 + 8) = 0;
                                  v229 = (atomic_ullong*)(v327 + 8);
                                  *(_QWORD*)(v327 + 16) = 0;
                                  v230 = v327;
                                  *(_QWORD*)(v327 + 32) = 0;
                                  *(_QWORD*)(v327 + 40) = 0;
                                  *(_QWORD*)(v327 + 48) = 0;
                                  *(_QWORD*)(v327 + 56) = 0;
                                  *(_QWORD*)v327 = GameData_1fe5648;
                                  v328 = GameData_212f488[0];
                                  v329 = *(_QWORD*)(v3 + 128);
                                  *(_QWORD*)(v327 + 64) = 0;
                                  *(_QWORD*)(v327 + 72) = 0;
                                  *(_QWORD*)(v327 + 24) = v328 + 2;
                                  *(_DWORD*)(v327 + 32) = 1129840640;
                                  v722_.v722 = v327 + 24;
                                  v722_.v723 = v327;
                                  atomic_fetch_add_explicit(
                                      (atomic_ullong* volatile)(v327 + 8), 1u,
                                      memory_order_relaxed);
                                  *(_QWORD*)(v327 + 40) = v329;
                                  if (*(float*)(v329 + 24) <
                                      0x1.b000000000000p+7f) {
                                    ((void (*)(__int64,
                                               float))GameRoutine_ce6d60)(
                                        v329, 0x1.b000000000000p+7f);
                                  }
                                  GameRoutine_ce65f0((__int64*)(v329 + 80),
                                                     &v722_.v722);
                                  v728_.v728[0] = (__int64)GameData_1fd7c18;
                                  v728_.v730 = v728_.v728;
                                  GameRoutine_ce6740(v329, (__int64)v728_.v728);
                                  if (v728_.v730 == v728_.v728) {
                                    v330 = 32;
                                  }
                                  else {
                                    if (v728_.v730 == nullptr) {
                                      goto LABEL_538;
                                    }
                                    v330 = 40;
                                  }
                                  (*(void (**)(__int64))(*v728_.v730 + v330))(
                                      (__int64)v728_.v730);
                                LABEL_538:
                                  v234 = v722_.v723;
                                  if (v722_.v723 == 0) {
                                    goto LABEL_1084;
                                  }
                                  goto LABEL_1082;
                                }
                                v325 = 40;
                              }
                              (*(void (**)(__int64))(*v728_.v730 + v325))(
                                  (__int64)v728_.v730);
                              goto LABEL_526;
                            }
                            v318 = 40;
                          }
                          (*(void (**)(__int64))(*v728_.v730 + v318))(
                              (__int64)v728_.v730);
                          goto LABEL_514;
                        }
                        v311 = 40;
                      }
                      (*(void (**)(__int64))(*v728_.v730 + v311))(
                          (__int64)v728_.v730);
                      goto LABEL_502;
                    }
                    v299 = 40;
                  }
                  (*(void (**)(__int64))(*v728_.v730 + v299))(
                      (__int64)v728_.v730);
                  goto LABEL_485;
                }
                v289 = 40;
              }
              (*(void (**)(__int64))(*v728_.v730 + v289))((__int64)v728_.v730);
              goto LABEL_468;
            }
            v282 = 40;
          }
          (*(void (**)(__int64))(*v728_.v730 + v282))((__int64)v728_.v730);
          goto LABEL_456;
        }
        v100 = 40;
      }
      (*(void (**)(__int64))(*v728_.v730 + v100))((__int64)v728_.v730);
      goto LABEL_439;
    }
    LegionGambit_e4d550(v3, 0x1.0000000000000p-2f);
    LegionGambit_e4d990(v3, 30);
    v114 = (_QWORD*)fw_memory_HeapManager_Allocate(*v26, 128, 16, 0);
    v114[2] = 0;
    v115 = (__int64)v114;
    v116 = GameData_212f460[0];
    v114[4] = 0;
    v114[5] = 0;
    v114[6] = 0;
    v114[7] = 0;
    *v114 = GameData_1fe5338;
    v114[8] = 0;
    v114[9] = 0;
    v114[11] = 0;
    v114[12] = 0;
    v114[13] = 0;
    v114[14] = 0;
    v114[15] = 0;
    v114[10] = 0;
    v114[1] = 0;
    v117 = (atomic_ullong*)(v114 + 1);
    v114[3] = v116 + 2;
    v118 = (__int64)(v114 + 3);
    *((_DWORD*)v114 + 8) = 1108344832;
    GameRoutine_60a020((__int64)(v114 + 10), "Stratagem_Assault_Start");
    if ((*(_BYTE*)(v115 + 104) & 1) != 0) {
      *(_QWORD*)(v115 + 112) = 11;
      v119 = *(char**)(v115 + 120);
    }
    else {
      *(_BYTE*)(v115 + 104) = 22;
      v119 = (char*)(v115 + 105);
    }
    strcpy(v119, "Loc_C_Trans");
    v677_.v677 = v118;
    v677_.v678 = v115;
    v145 = *(_QWORD*)(v3 + 128);
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v115 + 8), 1u,
                              memory_order_relaxed);
    v146 = *(float*)(v115 + 32);
    *(_QWORD*)(v115 + 40) = v145;
    if (v146 > *(float*)(v145 + 24)) {
      ((void (*)(__int64))GameRoutine_ce6d60)(v145);
    }
    GameRoutine_ce65f0((__int64*)(v145 + 80), &v677_.v677);
    v728_.v728[0] = (__int64)GameData_1fd7c18;
    v728_.v730 = v728_.v728;
    GameRoutine_ce6740(v145, (__int64)v728_.v728);
    if (v728_.v730 == v728_.v728) {
      v147 = 32;
    }
    else {
      if (v728_.v730 == nullptr) {
      LABEL_281:
        v192 = v677_.v678;
        if (v677_.v678 != 0 &&
            atomic_fetch_add((atomic_ullong* volatile)(v677_.v678 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v192 + 16LL))(v192);
          std___1___shared_weak_count___release_weak(v192);
        }
        if (atomic_fetch_add(v117, 0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v115 + 16LL))(v115);
          std___1___shared_weak_count___release_weak(v115);
        }
        v193 = fw_memory_HeapManager_Allocate(*v26, 128, 16, 0);
        v194 = *(_QWORD*)(v3 + 128);
        *(_QWORD*)(v193 + 8) = 0;
        v195 = (atomic_ullong*)(v193 + 8);
        *(_QWORD*)(v193 + 16) = 0;
        v196 = v193;
        *(_QWORD*)v193 = GameData_1fe5338;
        *(_QWORD*)(v193 + 32) = 0;
        *(_QWORD*)(v193 + 40) = 0;
        *(_QWORD*)(v193 + 48) = 0;
        *(_QWORD*)(v193 + 56) = 0;
        *(_QWORD*)(v193 + 64) = 0;
        *(_QWORD*)(v193 + 72) = 0;
        *(_QWORD*)(v193 + 24) = v116 + 2;
        *(_QWORD*)(v193 + 112) = 0;
        *(_QWORD*)(v193 + 120) = 0;
        *(_BYTE*)(v193 + 80) = 44;
        v726_.v726 = v193 + 24;
        v726_.v727 = v193;
        strcpy((char*)(v193 + 81), "Stratagem_Assault_Line");
        *(_BYTE*)(v193 + 104) = 22;
        *(_DWORD*)(v193 + 32) = 1119879168;
        *(_DWORD*)(v193 + 112) = 1936613746;
        *(_QWORD*)(v193 + 105) = *(_QWORD*)"Loc_C_Trans";
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v193 + 8), 1u,
                                  memory_order_relaxed);
        *(_QWORD*)(v193 + 40) = v194;
        if (*(float*)(v194 + 24) < 0x1.8000000000000p+6f) {
          ((void (*)(__int64, float))GameRoutine_ce6d60)(v194,
                                                         0x1.8000000000000p+6f);
        }
        GameRoutine_ce65f0((__int64*)(v194 + 80), &v726_.v726);
        v728_.v730 = v728_.v728;
        v728_.v728[0] = (__int64)GameData_1fd7c18;
        GameRoutine_ce6740(v194, (__int64)v728_.v728);
        if (v728_.v730 == v728_.v728) {
          v197 = 32;
        }
        else {
          if (v728_.v730 == nullptr) {
          LABEL_293:
            v198 = v726_.v727;
            if (v726_.v727 != 0 &&
                atomic_fetch_add((atomic_ullong* volatile)(v726_.v727 + 8),
                                 0xFFFFFFFFFFFFFFFFLL) == 0) {
              (*(void (**)(__int64))(*(_QWORD*)v198 + 16LL))(v198);
              std___1___shared_weak_count___release_weak(v198);
            }
            if (atomic_fetch_add(v195, 0xFFFFFFFFFFFFFFFFLL) == 0) {
              (*(void (**)(__int64))(*(_QWORD*)v196 + 16LL))(v196);
              std___1___shared_weak_count___release_weak(v196);
            }
            v199 = fw_memory_HeapManager_Allocate(*v26, 128, 16, 0);
            *(_QWORD*)(v199 + 16) = 0;
            *(_QWORD*)v199 = GameData_1fe5338;
            *(_QWORD*)(v199 + 32) = 0;
            *(_QWORD*)(v199 + 40) = 0;
            *(_QWORD*)(v199 + 48) = 0;
            *(_QWORD*)(v199 + 56) = 0;
            *(_QWORD*)(v199 + 64) = 0;
            *(_QWORD*)(v199 + 72) = 0;
            *(_QWORD*)(v199 + 88) = 0;
            *(_QWORD*)(v199 + 96) = 0;
            *(_QWORD*)(v199 + 24) = v116 + 2;
            *(_QWORD*)(v199 + 104) = 0;
            *(_QWORD*)(v199 + 112) = 0;
            *(_QWORD*)(v199 + 120) = 0;
            *(_QWORD*)(v199 + 80) = 0;
            *(_QWORD*)(v199 + 8) = 0;
            *(_DWORD*)(v199 + 32) = 1119879168;
            GameRoutine_60a020(v199 + 80, "Stratagem_Assault_SmokeA");
            if ((*(_BYTE*)(v199 + 104) & 1) != 0) {
              *(_QWORD*)(v199 + 112) = 11;
              v200 = *(char**)(v199 + 120);
            }
            else {
              *(_BYTE*)(v199 + 104) = 22;
              v200 = (char*)(v199 + 105);
            }
            strcpy(v200, "Loc_C_Trans");
            v724_.v724 = v199 + 24;
            v724_.v725 = v199;
            v201 = *(_QWORD*)(v3 + 128);
            atomic_fetch_add_explicit((atomic_ullong* volatile)(v199 + 8), 1u,
                                      memory_order_relaxed);
            v202 = *(float*)(v199 + 32);
            *(_QWORD*)(v199 + 40) = v201;
            if (v202 > *(float*)(v201 + 24)) {
              ((void (*)(__int64))GameRoutine_ce6d60)(v201);
            }
            GameRoutine_ce65f0((__int64*)(v201 + 80), &v724_.v724);
            v728_.v728[0] = (__int64)GameData_1fd7c18;
            v728_.v730 = v728_.v728;
            GameRoutine_ce6740(v201, (__int64)v728_.v728);
            if (v728_.v730 == v728_.v728) {
              v203 = 32;
            }
            else {
              if (v728_.v730 == nullptr) {
                goto LABEL_308;
              }
              v203 = 40;
            }
            (*(void (**)(__int64))(*v728_.v730 + v203))((__int64)v728_.v730);
          LABEL_308:
            v204 = v724_.v725;
            if (v724_.v725 != 0 &&
                atomic_fetch_add((atomic_ullong* volatile)(v724_.v725 + 8),
                                 0xFFFFFFFFFFFFFFFFLL) == 0) {
              (*(void (**)(__int64))(*(_QWORD*)v204 + 16LL))(v204);
              std___1___shared_weak_count___release_weak(v204);
            }
            if (atomic_fetch_add((atomic_ullong* volatile)(v199 + 8),
                                 0xFFFFFFFFFFFFFFFFLL) == 0) {
              (*(void (**)(__int64))(*(_QWORD*)v199 + 16LL))(v199);
              std___1___shared_weak_count___release_weak(v199);
            }
            v205 = 2048;
            v206 = 0;
            v207 = 1;
            v208 = 1812433255;
            v209 = GameData_212f468[0] + 2;
            while (1) {
              v210 = fw_memory_HeapManager_Allocate(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr, 88, 16, 0);
              v211 = *(_QWORD*)(v3 + 128);
              *(_QWORD*)(v210 + 16) = 0;
              *(_QWORD*)(v210 + 32) = 0;
              *(_QWORD*)(v210 + 40) = 0;
              *(_QWORD*)(v210 + 48) = 0;
              *(_QWORD*)(v210 + 56) = 0;
              v212 = v210;
              *(_QWORD*)v210 = GameData_1fe5388;
              *(_QWORD*)(v210 + 24) = v209;
              *(_QWORD*)(v210 + 8) = 0;
              v213 = (atomic_ullong*)(v210 + 8);
              *(_QWORD*)(v210 + 64) = 0;
              *(_QWORD*)(v210 + 72) = 0;
              v722_.v722 = v210 + 24;
              v722_.v723 = v210;
              *(_QWORD*)(v210 + 80) = 0x3DA3D70A3C83126FLL;
              v214 =
                  (float)((float)((float)((float)(unsigned int)v206 *
                                          0x1.99999a0000000p-4f) +
                                  0x1.99999a0000000p+0f) +
                          (float)(vcvts_n_f32_u64(
                                      (unsigned __int16)((v208 >> 19) ^
                                                         ((v205 ^ (unsigned int)
                                                                      v207) >>
                                                          8) ^
                                                         v208 ^ v205 ^ v207),
                                      0x10u) *
                                  0x1.47ae140000000p-6f)) *
                  0x1.e000000000000p+5f;
              *(float*)(v210 + 32) = v214;
              atomic_fetch_add_explicit((atomic_ullong* volatile)(v210 + 8), 1u,
                                        memory_order_relaxed);
              *(_QWORD*)(v210 + 40) = v211;
              if (v214 > *(float*)(v211 + 24)) {
                ((void (*)(__int64))GameRoutine_ce6d60)(v211);
              }
              GameRoutine_ce65f0((__int64*)(v211 + 80), &v722_.v722);
              v728_.v730 = v728_.v728;
              v728_.v728[0] = (__int64)GameData_1fd7c18;
              GameRoutine_ce6740(v211, (__int64)v728_.v728);
              if (v728_.v730 == v728_.v728) {
                v215 = 32;
              }
              else {
                if (v728_.v730 == nullptr) {
                  goto LABEL_324;
                }
                v215 = 40;
              }
              (*(void (**)(__int64))(*v728_.v730 + v215))((__int64)v728_.v730);
            LABEL_324:
              v216 = v722_.v723;
              if (v722_.v723 != 0 &&
                  atomic_fetch_add((atomic_ullong* volatile)(v722_.v723 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
                (*(void (**)(__int64))(*(_QWORD*)v216 + 16LL))(v216);
                std___1___shared_weak_count___release_weak(v216);
              }
              if (atomic_fetch_add(v213, 0xFFFFFFFFFFFFFFFFLL) == 0) {
                (*(void (**)(__int64))(*(_QWORD*)v212 + 16LL))(v212);
                std___1___shared_weak_count___release_weak(v212);
              }
              ++v206;
              v208 += 1812433253LL;
              v207 += 1812433253;
              v205 += 1011558400;
              if (v206 == 14) {
                v217 = (__int64*)fw_memory_g_heap_manager_ptr;
                v218 = fw_memory_HeapManager_Allocate(
                    *(_QWORD*)fw_memory_g_heap_manager_ptr, 192, 16, 0);
                *(_QWORD*)(v218 + 16) = 0;
                *(_QWORD*)(v218 + 40) = 0;
                *(_QWORD*)(v218 + 48) = 0;
                v219 = v218;
                *(_QWORD*)(v218 + 56) = 0;
                *(_QWORD*)(v218 + 64) = 0;
                *(_QWORD*)(v218 + 72) = 0;
                *(_QWORD*)(v218 + 80) = 0;
                *(_QWORD*)(v218 + 88) = 0;
                *(_QWORD*)(v218 + 8) = 0;
                v220 = (atomic_ullong*)(v218 + 8);
                *(_QWORD*)v218 = GameData_1fe53d8;
                *(_QWORD*)(v218 + 32) = 0;
                v221 = v218 + 32;
                *(_QWORD*)(v218 + 104) = 0;
                *(_QWORD*)(v218 + 112) = 0;
                *(_QWORD*)(v218 + 120) = 0;
                *(_QWORD*)(v218 + 128) = 0;
                *(_QWORD*)(v218 + 136) = 0;
                *(_QWORD*)(v218 + 144) = 0;
                *(_QWORD*)(v218 + 152) = 0;
                *(_QWORD*)(v218 + 160) = 0;
                *(_QWORD*)(v218 + 168) = 0;
                *(_QWORD*)(v218 + 176) = 0;
                *(_QWORD*)(v218 + 184) = 0;
                *(_QWORD*)(v218 + 96) = 0;
                v728_.v730 = v728_.v728;
                *(_QWORD*)(v218 + 32) = GameData_212f470[0] + 2;
                *(_DWORD*)(v218 + 40) = 1119879168;
                *(_BYTE*)(v218 + 56) = 18;
                *(_BYTE*)(v218 + 65) = 98;
                *(_QWORD*)(v218 + 57) = *(_QWORD*)"GambitSub";
                *(_DWORD*)(v218 + 92) = 1075838976;
                *(_BYTE*)(v218 + 88) = 1;
                v728_.v728[0] = (__int64)GameData_1fe5428;
                v728_.v728[1] = v3;
                GameRoutine_e4ea90(v728_.v728, (_QWORD*)(v218 + 96));
                if (v728_.v730 == v728_.v728) {
                  v222 = 32;
                LABEL_331:
                  (*(void (**)(__int64))(*v728_.v730 + v222))(
                      (__int64)v728_.v730);
                }
                else if (v728_.v730 != nullptr) {
                  v222 = 40;
                  goto LABEL_331;
                }
                v728_.v730 = v728_.v728;
                v728_.v728[0] = (__int64)GameData_1fe54a8;
                GameRoutine_e4fc30(v728_.v728, (_QWORD*)(v219 + 144));
                if (v728_.v730 == v728_.v728) {
                  v223 = 32;
                LABEL_336:
                  (*(void (**)(__int64))(*v728_.v730 + v223))(
                      (__int64)v728_.v730);
                }
                else if (v728_.v730 != nullptr) {
                  v223 = 40;
                  goto LABEL_336;
                }
                v224 = *(_QWORD*)(v3 + 128);
                v720_.v720 = v221;
                v720_.v721 = v219;
                atomic_fetch_add_explicit((atomic_ullong* volatile)(v219 + 8),
                                          1u, memory_order_relaxed);
                v225 = *(float*)(v219 + 40);
                *(_QWORD*)(v219 + 48) = v224;
                if (v225 > *(float*)(v224 + 24)) {
                  ((void (*)(__int64))GameRoutine_ce6d60)(v224);
                }
                GameRoutine_ce65f0((__int64*)(v224 + 80), &v720_.v720);
                v728_.v728[0] = (__int64)GameData_1fd7c18;
                v728_.v730 = v728_.v728;
                GameRoutine_ce6740(v224, (__int64)v728_.v728);
                if (v728_.v730 == v728_.v728) {
                  v226 = 32;
                LABEL_343:
                  (*(void (**)(__int64))(*v728_.v730 + v226))(
                      (__int64)v728_.v730);
                }
                else if (v728_.v730 != nullptr) {
                  v226 = 40;
                  goto LABEL_343;
                }
                v227 = v720_.v721;
                if (v720_.v721 != 0 &&
                    atomic_fetch_add((atomic_ullong* volatile)(v720_.v721 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
                  (*(void (**)(__int64))(*(_QWORD*)v227 + 16LL))(v227);
                  std___1___shared_weak_count___release_weak(v227);
                }
                if (atomic_fetch_add(v220, 0xFFFFFFFFFFFFFFFFLL) == 0) {
                  (*(void (**)(__int64))(*(_QWORD*)v219 + 16LL))(v219);
                  std___1___shared_weak_count___release_weak(v219);
                }
                v228 = fw_memory_HeapManager_Allocate(*v217, 88, 16, 0);
                *(_QWORD*)(v228 + 8) = 0;
                v229 = (atomic_ullong*)(v228 + 8);
                *(_QWORD*)(v228 + 16) = 0;
                v230 = v228;
                *(_QWORD*)v228 = GameData_1fe5528;
                *(_QWORD*)(v228 + 72) = 0;
                *(_QWORD*)(v228 + 80) = 0;
                *(_QWORD*)(v228 + 32) = 0;
                *(_QWORD*)(v228 + 40) = 0;
                *(_QWORD*)(v228 + 48) = 0;
                *(_QWORD*)(v228 + 56) = 0;
                *(_QWORD*)(v228 + 64) = 0;
                v231 = *(_QWORD*)(v3 + 128);
                v232 = GameData_212f478[0] + 2;
                *(_DWORD*)(v228 + 80) = 1045220557;
                *(_QWORD*)(v228 + 24) = v232;
                v718_.v718 = v228 + 24;
                v718_.v719 = v228;
                *(_DWORD*)(v228 + 32) = 1121452033;
                atomic_fetch_add_explicit((atomic_ullong* volatile)(v228 + 8),
                                          1u, memory_order_relaxed);
                *(_QWORD*)(v228 + 40) = v231;
                if (*(float*)(v231 + 24) < 0x1.b000020000000p+6f) {
                  ((void (*)(__int64, float))GameRoutine_ce6d60)(
                      v231, 0x1.b000020000000p+6f);
                }
                GameRoutine_ce65f0((__int64*)(v231 + 80), &v718_.v718);
                v728_.v728[0] = (__int64)GameData_1fd7c18;
                v728_.v730 = v728_.v728;
                GameRoutine_ce6740(v231, (__int64)v728_.v728);
                if (v728_.v730 == v728_.v728) {
                  v233 = 32;
                LABEL_355:
                  (*(void (**)(__int64))(*v728_.v730 + v233))(
                      (__int64)v728_.v730);
                }
                else if (v728_.v730 != nullptr) {
                  v233 = 40;
                  goto LABEL_355;
                }
                v234 = v718_.v719;
                if (v718_.v719 == 0) {
                  goto LABEL_1084;
                }
                goto LABEL_1082;
              }
            }
          }
          v197 = 40;
        }
        (*(void (**)(__int64))(*v728_.v730 + v197))((__int64)v728_.v730);
        goto LABEL_293;
      }
      v147 = 40;
    }
    (*(void (**)(__int64))(*v728_.v730 + v147))((__int64)v728_.v730);
    goto LABEL_281;
  }
  if (v88 == 3) {
    if ((*v30 & 1) != 0) {
      *(_QWORD*)(v3 + 176) = 14;
      v107 = *(char**)(v3 + 184);
    }
    else {
      *(_BYTE*)(v3 + 168) = 28;
      v107 = (char*)(v3 + 169);
    }
    strcpy(v107, "GambitChariot1");
    if (*(_BYTE*)(v3 + 146) == 1) {
      v120 = 0;
      v121 = 0x1.4000000000000p+1f;
      v671 = 1032805417;
      v122 = 1045220557;
      v123 = 1039516303;
      v124 = -1095887749;
      v125 = -1092532306;
      v126 = -0x1.19999a0000000p+1f;
    }
    else {
      v122 = 0;
      v126 = 0x1.4000000000000p+1f;
      v671 = 1039516303;
      v123 = 1032805417;
      v124 = -1092532306;
      v120 = 1045220557;
      v125 = -1095887749;
      v121 = -0x1.19999a0000000p+1f;
    }
    LOBYTE(v728_.v728[0]) = 26;
    strcpy((char*)v728_.v728 + 1, "GambitChariot");
    qmemcpy(v676, "tChariotGambitCh", sizeof(v676));
    GameRoutine_7a8220(v7, v728_.v728);
    if ((v728_.v728[0] & 1) != 0 && v728_.v728[2] != 0) {
      v127 = 128;
      if (*(_QWORD*)(*v26 + 200) == 0) {
        v127 = 56;
      }
      nn_mem_StandardAllocator_Free(*v26 + v127, v728_.v728[2]);
    }
    strcpy((char*)v728_.v728, "\"GambitChariotPush");
    v674 = (_QWORD*)v6;
    GameRoutine_7a8220(v7, v728_.v728);
    if ((v728_.v728[0] & 1) != 0 && v728_.v728[2] != 0) {
      v128 = 128;
      if (*(_QWORD*)(*v26 + 200) == 0) {
        v128 = 56;
      }
      nn_mem_StandardAllocator_Free(*v26 + v128, v728_.v728[2]);
    }
    GameRoutine_e4cdb0(v3);
    LegionGambit_e4d990(v3, 10);
    if (*(_BYTE*)(v3 + 146) != 0) {
      v129 = 0x1.0000000000000p+0f;
    }
    else {
      v129 = -0x1.0000000000000p+0f;
    }
    v130 = (_QWORD*)fw_memory_HeapManager_Allocate(*v26, 112, 16, 0);
    v130[6] = 0;
    v131 = GameData_212f490[0];
    *v130 = GameData_1fe5698;
    v130[10] = 0;
    v130[11] = 0;
    v132 = (char*)(v130 + 11);
    *((_BYTE*)v130 + 48) = 26;
    *((_DWORD*)v130 + 20) = 3;
    v134 = *(_QWORD*)(v3 + 24);
    v133 = *(_QWORD*)(v3 + 32);
    v130[1] = 0;
    v135 = (atomic_ullong*)(v130 + 1);
    v130[2] = 0;
    v130[7] = 0;
    v130[8] = 0;
    v130[4] = 0;
    v130[5] = 0;
    v130[9] = 0;
    v130[12] = 0;
    v130[13] = 0;
    *((_DWORD*)v130 + 8) = 0;
    v130[3] = v131 + 2;
    v136 = (__int64)(v130 + 3);
    v137 = *(unsigned __int8*)(v3 + 16);
    v138 = (v137 & 1) == 0;
    v139 = v137 >> 1;
    if (v138) {
      v140 = v3 + 17;
    }
    else {
      v140 = v133;
    }
    if (v138) {
      v141 = v139;
    }
    else {
      v141 = v134;
    }
    v142 = v141 + 4;
    *(_QWORD*)((char*)v130 + 49) = v676[1];
    *(_QWORD*)((char*)v130 + 54) = v676[0];
    if (v141 + 4 >= 0xFFFFFFFFFFFFFFF7LL) {
      goto LABEL_1094;
    }
    v143 = (__int64)v130;
    if (v142 >= 0x17) {
      if ((v142 | 7) == 0x17) {
        v148 = 26;
      }
      else {
        v148 = (v142 | 7) + 1;
      }
      v149 = (_DWORD*)fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, v148, 16, 0);
      v728_.v728[1] = v141 + 4;
      v728_.v728[2] = (__int64)v149;
      v728_.v728[0] = v148 | 1;
      *v149 = 1598310736;
      v144 = (char*)(v149 + 1);
    }
    else {
      v728_.v728[1] = 0;
      v728_.v728[2] = 0;
      v144 = (char*)v728_.v728 + 5;
      v728_.v728[0] = (unsigned __int8)(2 * v142);
      *(_DWORD*)((char*)v728_.v728 + 1) = 1598310736;
      if (v141 == 0) {
        goto LABEL_209;
      }
    }
    memmove((__int64)v144, v140, v141);
  LABEL_209:
    v150 = *v132;
    v144[v141] = 0;
    if ((v150 & 1) != 0) {
      v151 = *(_QWORD*)(v143 + 104);
      if (v151 != 0) {
        v152 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v152 = 56;
        }
        nn_mem_StandardAllocator_Free(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v152, v151);
      }
    }
    v153 = *(_QWORD*)(v3 + 128);
    v677_.v677 = v136;
    v677_.v678 = v143;
    qmemcpy(v132, v728_.v728, 24);
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v143 + 8), 1u,
                              memory_order_relaxed);
    *(_QWORD*)(v143 + 40) = v153;
    if (*(float*)(v143 + 32) > *(float*)(v153 + 24)) {
      ((void (*)(__int64))GameRoutine_ce6d60)(v153);
    }
    GameRoutine_ce65f0((__int64*)(v153 + 80), &v677_.v677);
    v728_.v728[0] = (__int64)GameData_1fd7c18;
    v728_.v730 = v728_.v728;
    GameRoutine_ce6740(v153, (__int64)v728_.v728);
    if (v728_.v730 == v728_.v728) {
      v154 = 32;
    }
    else {
      if (v728_.v730 == nullptr) {
      LABEL_542:
        v331 = v677_.v678;
        if (v677_.v678 != 0 &&
            atomic_fetch_add((atomic_ullong* volatile)(v677_.v678 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v331 + 16LL))(v331);
          std___1___shared_weak_count___release_weak(v331);
        }
        if (atomic_fetch_add(v135, 0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v143 + 16LL))(v143);
          std___1___shared_weak_count___release_weak(v143);
        }
        v332 = (__int64*)fw_memory_g_heap_manager_ptr;
        v333 = (_QWORD*)fw_memory_HeapManager_Allocate(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 144, 16, 0);
        v333[2] = 0;
        v334 = (__int64)v333;
        v335 = GameData_212f458[0];
        *v333 = GameData_1fe5168;
        v333[7] = 0;
        v333[8] = 0;
        v333[12] = 0;
        v333[5] = 0;
        v333[6] = 0;
        v333[9] = 0;
        v333[10] = 0;
        v333[11] = 0;
        v333[13] = 0;
        v333[14] = 0;
        v333[15] = 0;
        v333[16] = 0;
        v333[17] = 0;
        v333[1] = 0;
        v336 = (atomic_ullong*)(v333 + 1);
        v728_.v730 = v728_.v728;
        v333[4] = v335 + 2;
        v337 = v333 + 4;
        *((_BYTE*)v333 + 56) = 26;
        *(_QWORD*)((char*)v333 + 57) = v676[1];
        *(_QWORD*)((char*)v333 + 62) = v676[0];
        v728_.v728[0] = (__int64)GameData_1fe56e8;
        GameRoutine_e4eee0(v728_.v728, v333 + 12);
        if (v728_.v730 == v728_.v728) {
          v338 = 32;
        }
        else {
          if (v728_.v730 == nullptr) {
            goto LABEL_552;
          }
          v338 = 40;
        }
        (*(void (**)(__int64))(*v728_.v730 + v338))((__int64)v728_.v730);
      LABEL_552:
        v339 = *(_QWORD*)(v3 + 128);
        v726_.v726 = (__int64)v337;
        v726_.v727 = v334;
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v334 + 8), 1u,
                                  memory_order_relaxed);
        v340 = *(float*)(v334 + 40);
        *(_QWORD*)(v334 + 48) = v339;
        if (v340 > *(float*)(v339 + 24)) {
          ((void (*)(__int64))GameRoutine_ce6d60)(v339);
        }
        GameRoutine_ce65f0((__int64*)(v339 + 80), &v726_.v726);
        v728_.v728[0] = (__int64)GameData_1fd7c18;
        v728_.v730 = v728_.v728;
        GameRoutine_ce6740(v339, (__int64)v728_.v728);
        if (v728_.v730 == v728_.v728) {
          v341 = 32;
        }
        else {
          if (v728_.v730 == nullptr) {
          LABEL_559:
            v342 = v726_.v727;
            if (v726_.v727 != 0 &&
                atomic_fetch_add((atomic_ullong* volatile)(v726_.v727 + 8),
                                 0xFFFFFFFFFFFFFFFFLL) == 0) {
              (*(void (**)(__int64))(*(_QWORD*)v342 + 16LL))(v342);
              std___1___shared_weak_count___release_weak(v342);
            }
            if (atomic_fetch_add(v336, 0xFFFFFFFFFFFFFFFFLL) == 0) {
              (*(void (**)(__int64))(*(_QWORD*)v334 + 16LL))(v334);
              std___1___shared_weak_count___release_weak(v334);
            }
            v343 = (_QWORD*)fw_memory_HeapManager_Allocate(*v332, 144, 16, 0);
            v343[2] = 0;
            v344 = (__int64)v343;
            v345 = GameData_212f448[0];
            *v343 = GameData_1fe5038;
            v343[7] = 0;
            v343[8] = 0;
            v343[12] = 0;
            v346 = v343 + 12;
            v343[5] = 0;
            v343[6] = 0;
            v343[9] = 0;
            v343[10] = 0;
            v343[11] = 0;
            v343[13] = 0;
            v343[14] = 0;
            v343[15] = 0;
            v343[16] = 0;
            v343[17] = 0;
            v343[1] = 0;
            v347 = (atomic_ullong*)(v343 + 1);
            v343[4] = v345 + 2;
            v348 = v343 + 4;
            *((_BYTE*)v343 + 56) = 26;
            *(_QWORD*)((char*)v343 + 57) = v676[1];
            v349 = *v332;
            *(_QWORD*)(v344 + 62) = v676[0];
            v350 = fw_memory_HeapManager_Allocate(v349, 40, 16, 0);
            *(float*)(v350 + 20) = v129;
            *(_DWORD*)(v350 + 24) = v120;
            *(_DWORD*)(v350 + 32) = v122;
            v728_.v730 = (__int64*)v350;
            *(_QWORD*)v350 = GameData_1fe5768;
            *(_QWORD*)(v350 + 8) = v3;
            *(_DWORD*)(v350 + 16) = 0x40000000;
            *(_DWORD*)(v350 + 28) = -1097229926;
            GameRoutine_e4ea90(v728_.v728, v346);
            if (v728_.v730 == v728_.v728) {
              v351 = 32;
            }
            else {
              if (v728_.v730 == nullptr) {
                goto LABEL_569;
              }
              v351 = 40;
            }
            (*(void (**)(__int64))(*v728_.v730 + v351))((__int64)v728_.v730);
          LABEL_569:
            v352 = *(_QWORD*)(v3 + 128);
            v724_.v724 = (__int64)v348;
            v724_.v725 = v344;
            atomic_fetch_add_explicit((atomic_ullong* volatile)(v344 + 8), 1u,
                                      memory_order_relaxed);
            v353 = *(float*)(v344 + 40);
            *(_QWORD*)(v344 + 48) = v352;
            if (v353 > *(float*)(v352 + 24)) {
              ((void (*)(__int64))GameRoutine_ce6d60)(v352);
            }
            GameRoutine_ce65f0((__int64*)(v352 + 80), &v724_.v724);
            v728_.v728[0] = (__int64)GameData_1fd7c18;
            v728_.v730 = v728_.v728;
            GameRoutine_ce6740(v352, (__int64)v728_.v728);
            if (v728_.v730 == v728_.v728) {
              v354 = 32;
            }
            else {
              if (v728_.v730 == nullptr) {
              LABEL_576:
                v355 = v724_.v725;
                if (v724_.v725 != 0 &&
                    atomic_fetch_add((atomic_ullong* volatile)(v724_.v725 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
                  (*(void (**)(__int64))(*(_QWORD*)v355 + 16LL))(v355);
                  std___1___shared_weak_count___release_weak(v355);
                }
                if (atomic_fetch_add(v347, 0xFFFFFFFFFFFFFFFFLL) == 0) {
                  (*(void (**)(__int64))(*(_QWORD*)v344 + 16LL))(v344);
                  std___1___shared_weak_count___release_weak(v344);
                }
                v356 =
                    (_QWORD*)fw_memory_HeapManager_Allocate(*v332, 144, 16, 0);
                v356[2] = 0;
                v357 = (__int64)v356;
                v358 = GameData_212f498[0];
                v356[7] = 0;
                v356[8] = 0;
                v356[5] = 0;
                v356[6] = 0;
                v356[12] = 0;
                v356[9] = 0;
                v356[10] = 0;
                v356[11] = 0;
                v356[13] = 0;
                v356[14] = 0;
                *v356 = GameData_1fe57e8;
                v356[15] = 0;
                v356[16] = 0;
                v356[17] = 0;
                v356[1] = 0;
                v359 = (atomic_ullong*)(v356 + 1);
                *(float*)&v728_.v728[2] = v126;
                v728_.v729 = v121;
                v728_.v730 = v728_.v728;
                v356[4] = v358 + 2;
                v360 = v356 + 4;
                *((_BYTE*)v356 + 56) = 26;
                *(_QWORD*)((char*)v356 + 57) = v676[1];
                *(_QWORD*)((char*)v356 + 62) = v676[0];
                HIDWORD(v728_.v728[2]) = -1071644672;
                v728_.v728[0] = (__int64)GameData_1fe5838;
                v728_.v728[1] = v3;
                GameRoutine_e4ea90(v728_.v728, v356 + 12);
                if (v728_.v730 == v728_.v728) {
                  v361 = *(_QWORD*)"ariotPush";
                  v362 = 32;
                }
                else {
                  v361 = *(_QWORD*)"ariotPush";
                  if (v728_.v730 == nullptr) {
                    goto LABEL_586;
                  }
                  v362 = 40;
                }
                (*(void (**)(__int64))(*v728_.v730 + v362))(
                    (__int64)v728_.v730);
              LABEL_586:
                v363 = *(_QWORD*)(v3 + 128);
                v722_.v722 = (__int64)v360;
                v722_.v723 = v357;
                atomic_fetch_add_explicit((atomic_ullong* volatile)(v357 + 8),
                                          1u, memory_order_relaxed);
                v364 = *(float*)(v357 + 40);
                *(_QWORD*)(v357 + 48) = v363;
                if (v364 > *(float*)(v363 + 24)) {
                  ((void (*)(__int64))GameRoutine_ce6d60)(v363);
                }
                GameRoutine_ce65f0((__int64*)(v363 + 80), &v722_.v722);
                v728_.v728[0] = (__int64)GameData_1fd7c18;
                v728_.v730 = v728_.v728;
                GameRoutine_ce6740(v363, (__int64)v728_.v728);
                if (v728_.v730 == v728_.v728) {
                  v365 = 32;
                }
                else {
                  if (v728_.v730 == nullptr) {
                  LABEL_593:
                    v366 = v722_.v723;
                    if (v722_.v723 != 0 &&
                        atomic_fetch_add(
                            (atomic_ullong* volatile)(v722_.v723 + 8),
                            0xFFFFFFFFFFFFFFFFLL) == 0) {
                      (*(void (**)(__int64))(*(_QWORD*)v366 + 16LL))(v366);
                      std___1___shared_weak_count___release_weak(v366);
                    }
                    if (atomic_fetch_add(v359, 0xFFFFFFFFFFFFFFFFLL) == 0) {
                      (*(void (**)(__int64))(*(_QWORD*)v357 + 16LL))(v357);
                      std___1___shared_weak_count___release_weak(v357);
                    }
                    v367 = fw_memory_HeapManager_Allocate(
                        *(_QWORD*)fw_memory_g_heap_manager_ptr, 120, 16, 0);
                    v368 = 0x0.0p+0f;
                    v369 = GameData_212f440[0];
                    *(_QWORD*)(v367 + 104) = 0;
                    *(_QWORD*)(v367 + 112) = 0;
                    *(_QWORD*)(v367 + 16) = 0;
                    *(_QWORD*)(v367 + 40) = 0;
                    *(_QWORD*)(v367 + 48) = 0;
                    *(_QWORD*)v367 = GameData_1fe4fe8;
                    *(_QWORD*)(v367 + 56) = 0;
                    *(_QWORD*)(v367 + 64) = 0;
                    *(_QWORD*)(v367 + 72) = 0;
                    *(_QWORD*)(v367 + 80) = 0;
                    *(_QWORD*)(v367 + 96) = 0;
                    *(_QWORD*)(v367 + 8) = 0;
                    *(_QWORD*)(v367 + 32) = 0;
                    *(_QWORD*)(v367 + 88) = 0;
                    v370 = (_QWORD*)(v367 + 88);
                    *(_QWORD*)(v367 + 57) = v361;
                    *(_QWORD*)(v367 + 24) = v369 + 2;
                    *(_BYTE*)(v367 + 112) = 1;
                    qmemcpy((void*)(v367 + 48), "\"GambitCh", 9);
                    *(_BYTE*)(v367 + 65) = 104;
                    if ((_QWORD*)(v367 + 88) != v674) {
                      if ((*(_BYTE*)v674 & 1) != 0) {
                        GameRoutine_64df20(v370, *(_QWORD*)(v3 + 208),
                                           *(_QWORD*)(v3 + 200));
                        v368 = *(float*)(v367 + 32);
                      }
                      else {
                        v371 = v674[1];
                        *v370 = *v674;
                        *(_QWORD*)(v367 + 96) = v371;
                        *(_QWORD*)(v367 + 104) = v674[2];
                      }
                    }
                    v493 = *(_QWORD*)(v3 + 128);
                    *(_BYTE*)(v367 + 112) = 0;
                    v720_.v720 = v367 + 24;
                    v720_.v721 = v367;
                    *(_DWORD*)(v367 + 80) = 3;
                    atomic_fetch_add_explicit(
                        (atomic_ullong* volatile)(v367 + 8), 1u,
                        memory_order_relaxed);
                    *(_QWORD*)(v367 + 40) = v493;
                    if (v368 > *(float*)(v493 + 24)) {
                      ((void (*)(__int64))GameRoutine_ce6d60)(v493);
                    }
                    GameRoutine_ce65f0((__int64*)(v493 + 80), &v720_.v720);
                    v728_.v728[0] = (__int64)GameData_1fd7c18;
                    v728_.v730 = v728_.v728;
                    GameRoutine_ce6740(v493, (__int64)v728_.v728);
                    if (v728_.v730 == v728_.v728) {
                      v494 = 32;
                    }
                    else {
                      if (v728_.v730 == nullptr) {
                      LABEL_793:
                        v495 = v720_.v721;
                        if (v720_.v721 != 0 &&
                            atomic_fetch_add(
                                (atomic_ullong* volatile)(v720_.v721 + 8),
                                0xFFFFFFFFFFFFFFFFLL) == 0) {
                          (*(void (**)(__int64))(*(_QWORD*)v495 + 16LL))(v495);
                          std___1___shared_weak_count___release_weak(v495);
                        }
                        if (atomic_fetch_add(
                                (atomic_ullong* volatile)(v367 + 8),
                                0xFFFFFFFFFFFFFFFFLL) == 0) {
                          (*(void (**)(__int64))(*(_QWORD*)v367 + 16LL))(v367);
                          std___1___shared_weak_count___release_weak(v367);
                        }
                        v496 = (__int64*)fw_memory_g_heap_manager_ptr;
                        v497 = fw_memory_HeapManager_Allocate(
                            *(_QWORD*)fw_memory_g_heap_manager_ptr, 144, 16, 0);
                        *(_QWORD*)(v497 + 56) = 0;
                        *(_QWORD*)(v497 + 64) = 0;
                        *(_QWORD*)(v497 + 96) = 0;
                        v498 = (_QWORD*)(v497 + 96);
                        v499 = v497;
                        *(_QWORD*)(v497 + 16) = 0;
                        *(_QWORD*)(v497 + 32) = v345 + 2;
                        v500 = v497 + 32;
                        *(_QWORD*)v497 = GameData_1fe5038;
                        *(_QWORD*)(v497 + 40) = 0;
                        *(_QWORD*)(v497 + 48) = 0;
                        *(_QWORD*)(v497 + 72) = 0;
                        *(_QWORD*)(v497 + 80) = 0;
                        *(_QWORD*)(v497 + 88) = 0;
                        *(_QWORD*)(v497 + 104) = 0;
                        *(_QWORD*)(v497 + 112) = 0;
                        *(_QWORD*)(v497 + 120) = 0;
                        *(_QWORD*)(v497 + 128) = 0;
                        *(_QWORD*)(v497 + 136) = 0;
                        qmemcpy((void*)(v497 + 56), "\"GambitCh", 9);
                        *(_QWORD*)(v497 + 8) = 0;
                        v501 = (atomic_ullong*)(v497 + 8);
                        *(_BYTE*)(v497 + 73) = 104;
                        v502 = *v496;
                        *(_QWORD*)(v499 + 65) = *(_QWORD*)"ariotPush";
                        v503 = fw_memory_HeapManager_Allocate(v502, 40, 16, 0);
                        *(float*)(v503 + 20) = v129;
                        *(_DWORD*)(v503 + 24) = v120;
                        *(_DWORD*)(v503 + 32) = v122;
                        v728_.v730 = (__int64*)v503;
                        *(_QWORD*)v503 = GameData_1fe58b8;
                        *(_QWORD*)(v503 + 8) = v3;
                        *(_DWORD*)(v503 + 16) = 0x40000000;
                        *(_DWORD*)(v503 + 28) = -1097229926;
                        GameRoutine_e4ea90(v728_.v728, v498);
                        if (v728_.v730 == v728_.v728) {
                          v504 = 32;
                        }
                        else {
                          if (v728_.v730 == nullptr) {
                            goto LABEL_803;
                          }
                          v504 = 40;
                        }
                        (*(void (**)(__int64))(*v728_.v730 + v504))(
                            (__int64)v728_.v730);
                      LABEL_803:
                        v505 = *(_QWORD*)(v3 + 128);
                        v718_.v718 = v500;
                        v718_.v719 = v499;
                        atomic_fetch_add_explicit(
                            (atomic_ullong* volatile)(v499 + 8), 1u,
                            memory_order_relaxed);
                        v506 = *(float*)(v499 + 40);
                        *(_QWORD*)(v499 + 48) = v505;
                        if (v506 > *(float*)(v505 + 24)) {
                          ((void (*)(__int64))GameRoutine_ce6d60)(v505);
                        }
                        GameRoutine_ce65f0((__int64*)(v505 + 80), &v718_.v718);
                        v728_.v728[0] = (__int64)GameData_1fd7c18;
                        v728_.v730 = v728_.v728;
                        GameRoutine_ce6740(v505, (__int64)v728_.v728);
                        if (v728_.v730 == v728_.v728) {
                          v507 = 32;
                        }
                        else {
                          if (v728_.v730 == nullptr) {
                          LABEL_810:
                            v508 = v718_.v719;
                            if (v718_.v719 != 0 &&
                                atomic_fetch_add(
                                    (atomic_ullong* volatile)(v718_.v719 + 8),
                                    0xFFFFFFFFFFFFFFFFLL) == 0) {
                              (*(void (**)(__int64))(*(_QWORD*)v508 + 16LL))(
                                  v508);
                              std___1___shared_weak_count___release_weak(v508);
                            }
                            if (atomic_fetch_add(v501, 0xFFFFFFFFFFFFFFFFLL) ==
                                0) {
                              (*(void (**)(__int64))(*(_QWORD*)v499 + 16LL))(
                                  v499);
                              std___1___shared_weak_count___release_weak(v499);
                            }
                            v509 = fw_memory_HeapManager_Allocate(
                                *(_QWORD*)fw_memory_g_heap_manager_ptr, 144, 16,
                                0);
                            *(_QWORD*)(v509 + 56) = 0;
                            *(_QWORD*)(v509 + 64) = 0;
                            *(_QWORD*)(v509 + 96) = 0;
                            v510 = v509;
                            *(_QWORD*)(v509 + 72) = 0;
                            *(_QWORD*)(v509 + 80) = 0;
                            *(_QWORD*)(v509 + 16) = 0;
                            *(_QWORD*)v509 = GameData_1fe57e8;
                            *(_QWORD*)(v509 + 32) = v358 + 2;
                            v511 = v509 + 32;
                            *(_QWORD*)(v509 + 40) = 0;
                            *(_QWORD*)(v509 + 48) = 0;
                            *(_QWORD*)(v509 + 88) = 0;
                            *(_QWORD*)(v509 + 104) = 0;
                            *(_QWORD*)(v509 + 112) = 0;
                            *(_QWORD*)(v509 + 120) = 0;
                            *(_QWORD*)(v509 + 128) = 0;
                            *(_QWORD*)(v509 + 136) = 0;
                            qmemcpy((void*)(v509 + 57), "GambitChariotPus", 16);
                            *(_QWORD*)(v509 + 8) = 0;
                            v512 = (atomic_ullong*)(v509 + 8);
                            *(_BYTE*)(v509 + 56) = 34;
                            *(float*)&v728_.v728[2] = v126;
                            v728_.v729 = v121;
                            v728_.v730 = v728_.v728;
                            *(_BYTE*)(v509 + 73) = 104;
                            HIDWORD(v728_.v728[2]) = -1071644672;
                            v728_.v728[0] = (__int64)GameData_1fe5938;
                            v728_.v728[1] = v3;
                            GameRoutine_e4ea90(v728_.v728,
                                               (_QWORD*)(v509 + 96));
                            if (v728_.v730 == v728_.v728) {
                              v514 = 32;
                              v513 = (__int64*)fw_memory_g_heap_manager_ptr;
                            }
                            else {
                              v513 = (__int64*)fw_memory_g_heap_manager_ptr;
                              if (v728_.v730 == nullptr) {
                                goto LABEL_820;
                              }
                              v514 = 40;
                            }
                            (*(void (**)(__int64))(*v728_.v730 + v514))(
                                (__int64)v728_.v730);
                          LABEL_820:
                            v515 = *(_QWORD*)(v3 + 128);
                            v716_.v716 = v511;
                            v716_.v717 = v510;
                            atomic_fetch_add_explicit(
                                (atomic_ullong* volatile)(v510 + 8), 1u,
                                memory_order_relaxed);
                            v516 = *(float*)(v510 + 40);
                            *(_QWORD*)(v510 + 48) = v515;
                            if (v516 > *(float*)(v515 + 24)) {
                              ((void (*)(__int64))GameRoutine_ce6d60)(v515);
                            }
                            GameRoutine_ce65f0((__int64*)(v515 + 80),
                                               &v716_.v716);
                            v728_.v728[0] = (__int64)GameData_1fd7c18;
                            v728_.v730 = v728_.v728;
                            GameRoutine_ce6740(v515, (__int64)v728_.v728);
                            if (v728_.v730 == v728_.v728) {
                              v517 = 32;
                            }
                            else {
                              if (v728_.v730 == nullptr) {
                              LABEL_827:
                                v518 = v716_.v717;
                                if (v716_.v717 != 0 &&
                                    atomic_fetch_add(
                                        (atomic_ullong* volatile)(v716_.v717 +
                                                                  8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
                                  (*(void (**)(__int64))(*(_QWORD*)v518 +
                                                         16LL))(v518);
                                  std___1___shared_weak_count___release_weak(
                                      v518);
                                }
                                if (atomic_fetch_add(
                                        v512, 0xFFFFFFFFFFFFFFFFLL) == 0) {
                                  (*(void (**)(__int64))(*(_QWORD*)v510 +
                                                         16LL))(v510);
                                  std___1___shared_weak_count___release_weak(
                                      v510);
                                }
                                v519 = fw_memory_HeapManager_Allocate(
                                    *v513, 144, 16, 0);
                                v520 = GameData_212f458[0];
                                *(_QWORD*)(v519 + 56) = 0;
                                *(_QWORD*)(v519 + 64) = 0;
                                *(_QWORD*)(v519 + 96) = 0;
                                *(_QWORD*)(v519 + 16) = 0;
                                *(_QWORD*)v519 = GameData_1fe5168;
                                *(_QWORD*)(v519 + 40) = 0;
                                *(_QWORD*)(v519 + 48) = 0;
                                *(_BYTE*)(v519 + 73) = 0;
                                *(_WORD*)(v519 + 74) = 0;
                                *(_DWORD*)(v519 + 76) = 0;
                                *(_QWORD*)(v519 + 80) = 0;
                                *(_QWORD*)(v519 + 88) = 0;
                                *(_QWORD*)(v519 + 104) = 0;
                                *(_QWORD*)(v519 + 112) = 0;
                                *(_QWORD*)(v519 + 120) = 0;
                                *(_QWORD*)(v519 + 128) = 0;
                                *(_QWORD*)(v519 + 136) = 0;
                                v728_.v730 = v728_.v728;
                                *(_QWORD*)(v519 + 8) = 0;
                                *(_QWORD*)(v519 + 32) = v520 + 2;
                                strcpy((char*)(v519 + 56), "\"GambitChariotPu");
                                v728_.v728[0] = (__int64)GameData_1fe59b8;
                                GameRoutine_e4eee0(v728_.v728,
                                                   (_QWORD*)(v519 + 96));
                                if (v728_.v730 == v728_.v728) {
                                  v521 = 32;
                                }
                                else {
                                  if (v728_.v730 == nullptr) {
                                    goto LABEL_837;
                                  }
                                  v521 = 40;
                                }
                                (*(void (**)(__int64))(*v728_.v730 + v521))(
                                    (__int64)v728_.v730);
                              LABEL_837:
                                v522 = *(_QWORD*)(v3 + 128);
                                v714_.v714 = v519 + 32;
                                v714_.v715 = v519;
                                atomic_fetch_add_explicit(
                                    (atomic_ullong* volatile)(v519 + 8), 1u,
                                    memory_order_relaxed);
                                v523 = *(float*)(v519 + 40);
                                *(_QWORD*)(v519 + 48) = v522;
                                if (v523 > *(float*)(v522 + 24)) {
                                  ((void (*)(__int64))GameRoutine_ce6d60)(v522);
                                }
                                GameRoutine_ce65f0((__int64*)(v522 + 80),
                                                   &v714_.v714);
                                v728_.v728[0] = (__int64)GameData_1fd7c18;
                                v728_.v730 = v728_.v728;
                                GameRoutine_ce6740(v522, (__int64)v728_.v728);
                                if (v728_.v730 == v728_.v728) {
                                  v524 = 32;
                                }
                                else {
                                  if (v728_.v730 == nullptr) {
                                  LABEL_844:
                                    v525 = v714_.v715;
                                    if (v714_.v715 != 0 &&
                                        atomic_fetch_add(
                                            (atomic_ullong* volatile)(v714_
                                                                          .v715 +
                                                                      8),
                                            0xFFFFFFFFFFFFFFFFLL) == 0) {
                                      (*(void (**)(__int64))(*(_QWORD*)v525 +
                                                             16LL))(v525);
                                      std___1___shared_weak_count___release_weak(
                                          v525);
                                    }
                                    if (atomic_fetch_add(
                                            (atomic_ullong* volatile)(v519 + 8),
                                            0xFFFFFFFFFFFFFFFFLL) == 0) {
                                      (*(void (**)(__int64))(*(_QWORD*)v519 +
                                                             16LL))(v519);
                                      std___1___shared_weak_count___release_weak(
                                          v519);
                                    }
                                    v526 = fw_memory_HeapManager_Allocate(
                                        *v513, 224, 16, 0);
                                    *(_QWORD*)(v526 + 8) = 0;
                                    v527 = (atomic_ullong*)(v526 + 8);
                                    *(_QWORD*)(v526 + 16) = 0;
                                    v528 = v526;
                                    *(_QWORD*)(v526 + 40) = 0;
                                    *(_QWORD*)(v526 + 48) = 0;
                                    *(_QWORD*)(v526 + 56) = 0;
                                    *(_QWORD*)(v526 + 64) = 0;
                                    *(_BYTE*)(v526 + 73) = 0;
                                    *(_WORD*)(v526 + 74) = 0;
                                    *(_DWORD*)(v526 + 76) = 0;
                                    *(_QWORD*)(v526 + 80) = 0;
                                    *(_QWORD*)(v526 + 88) = 0;
                                    *(_QWORD*)(v526 + 96) = 0;
                                    *(_QWORD*)v526 = GameData_1fe5a38;
                                    *(_QWORD*)(v526 + 104) = 0;
                                    *(_QWORD*)(v526 + 112) = 0;
                                    *(_QWORD*)(v526 + 120) = 0;
                                    *(_QWORD*)(v526 + 128) = 0;
                                    *(_QWORD*)(v526 + 136) = 0;
                                    *(_QWORD*)(v526 + 144) = 0;
                                    *(_QWORD*)(v526 + 152) = 0;
                                    *(_QWORD*)(v526 + 160) = 0;
                                    *(_QWORD*)(v526 + 168) = 0;
                                    *(_QWORD*)(v526 + 176) = 0;
                                    *(_QWORD*)(v526 + 184) = 0;
                                    *(_QWORD*)(v526 + 192) = 0;
                                    *(_QWORD*)(v526 + 200) = 0;
                                    *(_QWORD*)(v526 + 208) = 0;
                                    *(_QWORD*)(v526 + 216) = 0;
                                    *(_QWORD*)(v526 + 32) = 0;
                                    v529 = *(_QWORD*)(v3 + 128);
                                    v530 = GameData_212f4a0[0] + 2;
                                    *(_BYTE*)(v526 + 104) = 0;
                                    *(_BYTE*)(v526 + 120) = 0;
                                    *(_DWORD*)(v526 + 40) = 0;
                                    strcpy((char*)(v526 + 57),
                                           "GambitChariotPu");
                                    *(_DWORD*)(v526 + 96) = 587395902;
                                    v712_.v712 = v526 + 32;
                                    v712_.v713 = v526;
                                    *(_QWORD*)(v526 + 32) = v530;
                                    *(_BYTE*)(v526 + 56) = 34;
                                    *(_BYTE*)(v526 + 73) = 104;
                                    atomic_fetch_add_explicit(
                                        (atomic_ullong* volatile)(v526 + 8), 1u,
                                        memory_order_relaxed);
                                    *(_QWORD*)(v526 + 48) = v529;
                                    if (*(float*)(v529 + 24) < 0x0.0p+0f) {
                                      ((void (*)(__int64, double))
                                           GameRoutine_ce6d60)(v529, 0x0.0p+0);
                                    }
                                    GameRoutine_ce65f0((__int64*)(v529 + 80),
                                                       &v712_.v712);
                                    v728_.v730 = v728_.v728;
                                    v728_.v728[0] = (__int64)GameData_1fd7c18;
                                    GameRoutine_ce6740(v529,
                                                       (__int64)v728_.v728);
                                    if (v728_.v730 == v728_.v728) {
                                      v531 = 32;
                                    }
                                    else {
                                      if (v728_.v730 == nullptr) {
                                      LABEL_856:
                                        v532 = v712_.v713;
                                        if (v712_.v713 != 0 &&
                                            atomic_fetch_add(
                                                (atomic_ullong* volatile)(v712_
                                                                              .v713 +
                                                                          8),
                                                0xFFFFFFFFFFFFFFFFLL) == 0) {
                                          (*(void (**)(__int64))(
                                              *(_QWORD*)v532 + 16LL))(v532);
                                          std___1___shared_weak_count___release_weak(
                                              v532);
                                        }
                                        if (atomic_fetch_add(
                                                v527, 0xFFFFFFFFFFFFFFFFLL) ==
                                            0) {
                                          (*(void (**)(__int64))(
                                              *(_QWORD*)v528 + 16LL))(v528);
                                          std___1___shared_weak_count___release_weak(
                                              v528);
                                        }
                                        v533 = fw_memory_HeapManager_Allocate(
                                            *v513, 88, 16, 0);
                                        *(_QWORD*)(v533 + 8) = 0;
                                        v534 = (atomic_ullong*)(v533 + 8);
                                        *(_QWORD*)(v533 + 16) = 0;
                                        v535 = v533;
                                        *(_QWORD*)(v533 + 32) = 0;
                                        *(_QWORD*)(v533 + 40) = 0;
                                        *(_QWORD*)(v533 + 48) = 0;
                                        *(_QWORD*)(v533 + 56) = 0;
                                        *(_QWORD*)(v533 + 64) = 0;
                                        *(_QWORD*)(v533 + 72) = 0;
                                        *(_QWORD*)v533 = GameData_1fe4f98;
                                        v536 = *(_QWORD*)(v3 + 128);
                                        v537 = GameData_212f438[0] + 2;
                                        *(_QWORD*)(v533 + 80) = 587395902;
                                        *(_QWORD*)(v533 + 24) = v537;
                                        v710_.v710 = v533 + 24;
                                        v710_.v711 = v533;
                                        atomic_fetch_add_explicit(
                                            (atomic_ullong* volatile)(v533 + 8),
                                            1u, memory_order_relaxed);
                                        *(_QWORD*)(v533 + 40) = v536;
                                        if (*(float*)(v536 + 24) < 0x0.0p+0f) {
                                          ((void (*)(__int64, double))
                                               GameRoutine_ce6d60)(v536,
                                                                   0x0.0p+0);
                                        }
                                        GameRoutine_ce65f0(
                                            (__int64*)(v536 + 80), &v710_.v710);
                                        v728_.v728[0] =
                                            (__int64)GameData_1fd7c18;
                                        v728_.v730 = v728_.v728;
                                        GameRoutine_ce6740(v536,
                                                           (__int64)v728_.v728);
                                        if (v728_.v730 == v728_.v728) {
                                          v538 = 32;
                                        }
                                        else {
                                          if (v728_.v730 == nullptr) {
                                          LABEL_868:
                                            v539 = v710_.v711;
                                            if (v710_.v711 != 0 &&
                                                atomic_fetch_add(
                                                    (atomic_ullong* volatile)(v710_
                                                                                  .v711 +
                                                                              8),
                                                    0xFFFFFFFFFFFFFFFFLL) ==
                                                    0) {
                                              (*(void (**)(__int64))(
                                                  *(_QWORD*)v539 + 16LL))(v539);
                                              std___1___shared_weak_count___release_weak(
                                                  v539);
                                            }
                                            if (atomic_fetch_add(
                                                    v534,
                                                    0xFFFFFFFFFFFFFFFFLL) ==
                                                0) {
                                              (*(void (**)(__int64))(
                                                  *(_QWORD*)v535 + 16LL))(v535);
                                              std___1___shared_weak_count___release_weak(
                                                  v535);
                                            }
                                            v540 =
                                                fw_memory_HeapManager_Allocate(
                                                    *v513, 224, 16, 0);
                                            *(_QWORD*)(v540 + 8) = 0;
                                            v541 = (atomic_ullong*)(v540 + 8);
                                            *(_QWORD*)(v540 + 16) = 0;
                                            *(_QWORD*)(v540 + 40) = 0;
                                            *(_QWORD*)(v540 + 48) = 0;
                                            v542 = v540;
                                            *(_QWORD*)v540 = GameData_1fe5a38;
                                            *(_QWORD*)(v540 + 56) = 0;
                                            *(_QWORD*)(v540 + 64) = 0;
                                            *(_QWORD*)(v540 + 72) = 0;
                                            *(_QWORD*)(v540 + 80) = 0;
                                            *(_QWORD*)(v540 + 88) = 0;
                                            *(_QWORD*)(v540 + 96) = 0;
                                            *(_QWORD*)(v540 + 104) = 0;
                                            *(_QWORD*)(v540 + 112) = 0;
                                            *(_QWORD*)(v540 + 120) = 0;
                                            *(_QWORD*)(v540 + 128) = 0;
                                            *(_QWORD*)(v540 + 136) = 0;
                                            *(_QWORD*)(v540 + 144) = 0;
                                            *(_QWORD*)(v540 + 152) = 0;
                                            *(_QWORD*)(v540 + 160) = 0;
                                            *(_QWORD*)(v540 + 168) = 0;
                                            *(_QWORD*)(v540 + 176) = 0;
                                            *(_QWORD*)(v540 + 184) = 0;
                                            *(_QWORD*)(v540 + 192) = 0;
                                            *(_QWORD*)(v540 + 200) = 0;
                                            *(_QWORD*)(v540 + 208) = 0;
                                            *(_QWORD*)(v540 + 32) = 0;
                                            v543 = *(_QWORD*)(v3 + 128);
                                            v544 = GameData_212f4a0[0] + 2;
                                            *(_BYTE*)(v540 + 116) = 0;
                                            *(_QWORD*)(v540 + 208) = 0;
                                            *(_QWORD*)(v540 + 216) = 0;
                                            *(_DWORD*)(v540 + 96) = 666945700;
                                            v708_.v708 = v540 + 32;
                                            v708_.v709 = v540;
                                            *(_QWORD*)(v540 + 32) = v544;
                                            *(_BYTE*)(v540 + 56) = 18;
                                            *(_BYTE*)(v540 + 65) = 98;
                                            *(_QWORD*)(v540 + 57) =
                                                *(_QWORD*)"GambitSub";
                                            *(_DWORD*)(v540 + 88) = 2139095039;
                                            *(_BYTE*)(v540 + 92) = 1;
                                            *(_BYTE*)(v540 + 100) = 1;
                                            atomic_fetch_add_explicit(
                                                (atomic_ullong* volatile)(v540 +
                                                                          8),
                                                1u, memory_order_relaxed);
                                            *(_QWORD*)(v540 + 48) = v543;
                                            if (*(float*)(v543 + 24) <
                                                0x0.0p+0f) {
                                              ((void (*)(__int64, double))
                                                   GameRoutine_ce6d60)(
                                                  v543, 0x0.0p+0);
                                            }
                                            GameRoutine_ce65f0(
                                                (__int64*)(v543 + 80),
                                                &v708_.v708);
                                            v728_.v730 = v728_.v728;
                                            v728_.v728[0] =
                                                (__int64)GameData_1fd7c18;
                                            GameRoutine_ce6740(
                                                v543, (__int64)v728_.v728);
                                            if (v728_.v730 == v728_.v728) {
                                              v545 = 32;
                                            }
                                            else {
                                              if (v728_.v730 == nullptr) {
                                              LABEL_880:
                                                v546 = v708_.v709;
                                                if (v708_.v709 != 0 &&
                                                    atomic_fetch_add(
                                                        (atomic_ullong* volatile)(v708_
                                                                                      .v709 +
                                                                                  8),
                                                        0xFFFFFFFFFFFFFFFFLL) ==
                                                        0) {
                                                  (*(void (**)(__int64))(
                                                      *(_QWORD*)v546 + 16LL))(
                                                      v546);
                                                  std___1___shared_weak_count___release_weak(
                                                      v546);
                                                }
                                                if (atomic_fetch_add(
                                                        v541,
                                                        0xFFFFFFFFFFFFFFFFLL) ==
                                                    0) {
                                                  (*(void (**)(__int64))(
                                                      *(_QWORD*)v542 + 16LL))(
                                                      v542);
                                                  std___1___shared_weak_count___release_weak(
                                                      v542);
                                                }
                                                v547 =
                                                    fw_memory_HeapManager_Allocate(
                                                        *v513, 104, 16, 0);
                                                *(_QWORD*)(v547 + 8) = 0;
                                                v548 =
                                                    (atomic_ullong*)(v547 + 8);
                                                *(_QWORD*)(v547 + 16) = 0;
                                                *(_QWORD*)(v547 + 32) = 0;
                                                *(_QWORD*)(v547 + 40) = 0;
                                                v549 = v547;
                                                *(_QWORD*)v547 =
                                                    GameData_1fe4f48;
                                                *(_QWORD*)(v547 + 48) = 0;
                                                *(_QWORD*)(v547 + 56) = 0;
                                                *(_QWORD*)(v547 + 64) = 0;
                                                *(_QWORD*)(v547 + 72) = 0;
                                                *(_QWORD*)(v547 + 96) = 0;
                                                v550 = GameData_212f430[0];
                                                v551 = *(_QWORD*)(v3 + 128);
                                                *(_QWORD*)(v547 + 24) =
                                                    GameData_212f430[0] + 2;
                                                *(_QWORD*)(v547 + 80) =
                                                    0x4000000000000002LL;
                                                *(_QWORD*)(v547 + 88) =
                                                    0x3F8000003F800000LL;
                                                v706_.v706 = v547 + 24;
                                                v706_.v707 = v547;
                                                *(_DWORD*)(v547 + 32) =
                                                    1094713344;
                                                atomic_fetch_add_explicit(
                                                    (atomic_ullong* volatile)(v547 +
                                                                              8),
                                                    1u, memory_order_relaxed);
                                                *(_QWORD*)(v547 + 40) = v551;
                                                if (*(float*)(v551 + 24) <
                                                    0x1.8000000000000p+3f) {
                                                  ((void (*)(__int64, float))
                                                       GameRoutine_ce6d60)(
                                                      v551,
                                                      0x1.8000000000000p+3f);
                                                }
                                                GameRoutine_ce65f0(
                                                    (__int64*)(v551 + 80),
                                                    &v706_.v706);
                                                v728_.v730 = v728_.v728;
                                                v728_.v728[0] =
                                                    (__int64)GameData_1fd7c18;
                                                GameRoutine_ce6740(
                                                    v551, (__int64)v728_.v728);
                                                if (v728_.v730 == v728_.v728) {
                                                  v552 = 32;
                                                }
                                                else {
                                                  if (v728_.v730 == nullptr) {
                                                  LABEL_892:
                                                    v553 = v706_.v707;
                                                    if (v706_.v707 != 0 &&
                                                        atomic_fetch_add(
                                                            (atomic_ullong* volatile)(v706_
                                                                                          .v707 +
                                                                                      8),
                                                            0xFFFFFFFFFFFFFFFFLL) ==
                                                            0) {
                                                      (*(void (**)(__int64))(
                                                          *(_QWORD*)v553 +
                                                          16LL))(v553);
                                                      std___1___shared_weak_count___release_weak(
                                                          v553);
                                                    }
                                                    if (atomic_fetch_add(
                                                            v548,
                                                            0xFFFFFFFFFFFFFFFFLL) ==
                                                        0) {
                                                      (*(void (**)(__int64))(
                                                          *(_QWORD*)v549 +
                                                          16LL))(v549);
                                                      std___1___shared_weak_count___release_weak(
                                                          v549);
                                                    }
                                                    v554 =
                                                        fw_memory_HeapManager_Allocate(
                                                            *v513, 224, 16, 0);
                                                    *(_QWORD*)(v554 + 16) = 0;
                                                    *(_QWORD*)(v554 + 40) = 0;
                                                    *(_QWORD*)(v554 + 48) = 0;
                                                    v555 = v554;
                                                    *(_QWORD*)v554 =
                                                        GameData_1fe5a38;
                                                    *(_QWORD*)(v554 + 8) = 0;
                                                    v556 =
                                                        (atomic_ullong*)(v554 +
                                                                         8);
                                                    *(_QWORD*)(v554 + 56) = 0;
                                                    *(_QWORD*)(v554 + 64) = 0;
                                                    *(_QWORD*)(v554 + 72) = 0;
                                                    *(_QWORD*)(v554 + 80) = 0;
                                                    *(_QWORD*)(v554 + 88) = 0;
                                                    *(_QWORD*)(v554 + 96) = 0;
                                                    *(_QWORD*)(v554 + 32) = 0;
                                                    v557 = v554 + 32;
                                                    *(_QWORD*)(v554 + 104) = 0;
                                                    *(_QWORD*)(v554 + 112) = 0;
                                                    *(_QWORD*)(v554 + 120) = 0;
                                                    *(_QWORD*)(v554 + 128) = 0;
                                                    *(_QWORD*)(v554 + 136) = 0;
                                                    *(_QWORD*)(v554 + 144) = 0;
                                                    *(_QWORD*)(v554 + 152) = 0;
                                                    *(_QWORD*)(v554 + 160) = 0;
                                                    *(_QWORD*)(v554 + 184) = 0;
                                                    *(_QWORD*)(v554 + 192) = 0;
                                                    *(_QWORD*)(v554 + 200) = 0;
                                                    *(_QWORD*)(v554 + 208) = 0;
                                                    *(_QWORD*)(v554 + 216) = 0;
                                                    *(_QWORD*)(v554 + 176) = 0;
                                                    v558 =
                                                        (__int64*)(v554 + 176);
                                                    v559 =
                                                        GameData_212f4a0[0] + 2;
                                                    *(_BYTE*)(v554 + 112) = 0;
                                                    *(_QWORD*)(v554 + 160) = 0;
                                                    *(_QWORD*)(v554 + 168) = 0;
                                                    *(_DWORD*)(v554 + 96) =
                                                        2017201876;
                                                    *(_DWORD*)(v554 + 104) =
                                                        1068149419;
                                                    *(_BYTE*)(v554 + 108) = 1;
                                                    *(_QWORD*)(v554 + 32) =
                                                        v559;
                                                    *(_BYTE*)(v554 + 56) = 26;
                                                    *(_QWORD*)(v554 + 57) =
                                                        v676[1];
                                                    *(_QWORD*)(v554 + 62) =
                                                        v676[0];
                                                    v560 =
                                                        fw_memory_HeapManager_Allocate(
                                                            *v513, 56, 16, 0);
                                                    *(_DWORD*)(v560 + 16) =
                                                        1068149419;
                                                    *(_BYTE*)(v560 + 20) = 1;
                                                    *(_DWORD*)(v560 + 40) =
                                                        v124;
                                                    *(_DWORD*)(v560 + 44) = 0;
                                                    *(_DWORD*)(v560 + 48) =
                                                        v125;
                                                    v728_.v730 = (__int64*)v560;
                                                    *(_QWORD*)v560 =
                                                        GameData_1fe5a88;
                                                    *(_QWORD*)(v560 + 8) =
                                                        2017201876;
                                                    *(_QWORD*)(v560 + 21) =
                                                        *(_QWORD*)(v555 + 109);
                                                    *(_QWORD*)(v560 + 29) =
                                                        *(_QWORD*)(v555 + 117);
                                                    *(_DWORD*)(v560 + 36) =
                                                        *(_DWORD*)(v555 + 124);
                                                    v561 = *(__int64**)(v555 +
                                                                        208);
                                                    if (v561 == v558) {
                                                      (*(void (**)(__int64*,
                                                                   __int64*))(
                                                          *v561 + 24))(
                                                          v561, v728_.v728);
                                                      (*(void (**)(_QWORD))(
                                                          **(_QWORD**)(v555 +
                                                                       208) +
                                                          32LL))(
                                                          *(_QWORD*)(v555 +
                                                                     208));
                                                      v564 = v728_.v730;
                                                      v562 = v671;
                                                      v728_.v730 = v728_.v728;
                                                      v561 = v728_.v728;
                                                      *(_QWORD*)(v555 + 208) =
                                                          v564;
                                                    }
                                                    else {
                                                      v562 = v671;
                                                      *(_QWORD*)(v555 + 208) =
                                                          v560;
                                                      v728_.v730 = v561;
                                                      if (v561 != v728_.v728) {
                                                        if (v561 != nullptr) {
                                                          v563 = 40;
                                                        LABEL_903:
                                                          (*(void (**)(
                                                              __int64))(*v561 +
                                                                        v563))(
                                                              (__int64)v561);
                                                        }
                                                        v565 = *(_QWORD*)(v3 +
                                                                          128);
                                                        v704_.v704 = v557;
                                                        v704_.v705 = v555;
                                                        atomic_fetch_add_explicit(
                                                            (atomic_ullong* volatile)(v555 +
                                                                                      8),
                                                            1u,
                                                            memory_order_relaxed);
                                                        v566 = *(float*)(v555 +
                                                                         40);
                                                        *(_QWORD*)(v555 + 48) =
                                                            v565;
                                                        if (v566 >
                                                            *(float*)(v565 +
                                                                      24)) {
                                                          ((void (*)(__int64))
                                                               GameRoutine_ce6d60)(
                                                              v565);
                                                        }
                                                        GameRoutine_ce65f0(
                                                            (__int64*)(v565 +
                                                                       80),
                                                            &v704_.v704);
                                                        v728_
                                                            .v728[0] = (__int64)
                                                            GameData_1fd7c18;
                                                        v728_.v730 = v728_.v728;
                                                        GameRoutine_ce6740(
                                                            v565, (__int64)v728_
                                                                      .v728);
                                                        if (v728_.v730 ==
                                                            v728_.v728) {
                                                          v567 = 32;
                                                        }
                                                        else {
                                                          if (v728_.v730 ==
                                                              nullptr) {
                                                          LABEL_911:
                                                            v568 = v704_.v705;
                                                            if (v704_.v705 !=
                                                                    0 &&
                                                                atomic_fetch_add(
                                                                    (atomic_ullong* volatile)(v704_
                                                                                                  .v705 +
                                                                                              8),
                                                                    0xFFFFFFFFFFFFFFFFLL) ==
                                                                    0) {
                                                              (*(void (**)(
                                                                  __int64))(
                                                                  *(_QWORD*)
                                                                      v568 +
                                                                  16LL))(v568);
                                                              std___1___shared_weak_count___release_weak(
                                                                  v568);
                                                            }
                                                            if (atomic_fetch_add(
                                                                    v556,
                                                                    0xFFFFFFFFFFFFFFFFLL) ==
                                                                0) {
                                                              (*(void (**)(
                                                                  __int64))(
                                                                  *(_QWORD*)
                                                                      v555 +
                                                                  16LL))(v555);
                                                              std___1___shared_weak_count___release_weak(
                                                                  v555);
                                                            }
                                                            v569 = (__int64*)
                                                                fw_memory_g_heap_manager_ptr;
                                                            v570 = fw_memory_HeapManager_Allocate(
                                                                *(_QWORD*)
                                                                    fw_memory_g_heap_manager_ptr,
                                                                104, 16, 0);
                                                            v571 =
                                                                *(_QWORD*)(v3 +
                                                                           128);
                                                            *(_QWORD*)(v570 +
                                                                       80) = 0;
                                                            *(_QWORD*)(v570 +
                                                                       8) = 0;
                                                            v572 =
                                                                (atomic_ullong*)(v570 +
                                                                                 8);
                                                            v573 = v570;
                                                            *(_QWORD*)(v570 +
                                                                       16) = 0;
                                                            *(_QWORD*)v570 =
                                                                GameData_1fe4f48;
                                                            *(_QWORD*)(v570 +
                                                                       32) = 0;
                                                            *(_QWORD*)(v570 +
                                                                       40) = 0;
                                                            *(_QWORD*)(v570 +
                                                                       24) =
                                                                v550 + 2;
                                                            *(_QWORD*)(v570 +
                                                                       48) = 0;
                                                            *(_QWORD*)(v570 +
                                                                       56) = 0;
                                                            *(_QWORD*)(v570 +
                                                                       64) = 0;
                                                            *(_QWORD*)(v570 +
                                                                       72) = 0;
                                                            *(_QWORD*)(v570 +
                                                                       88) =
                                                                0x3F8000003F800000LL;
                                                            *(_QWORD*)(v570 +
                                                                       96) = 0;
                                                            *(_BYTE*)(v570 +
                                                                      96) = 1;
                                                            v702_.v702 =
                                                                v570 + 24;
                                                            v702_.v703 = v570;
                                                            *(_DWORD*)(v570 +
                                                                       80) = 3;
                                                            *(_DWORD*)(v570 +
                                                                       32) =
                                                                1120665600;
                                                            atomic_fetch_add_explicit(
                                                                (atomic_ullong* volatile)(v570 +
                                                                                          8),
                                                                1u,
                                                                memory_order_relaxed);
                                                            *(_QWORD*)(v570 +
                                                                       40) =
                                                                v571;
                                                            if (*(float*)(v571 +
                                                                          24) <
                                                                0x1.9800000000000p+6f) {
                                                              ((void (*)(
                                                                  __int64,
                                                                  float))
                                                                   GameRoutine_ce6d60)(
                                                                  v571,
                                                                  0x1.9800000000000p+6f);
                                                            }
                                                            GameRoutine_ce65f0(
                                                                (__int64*)(v571 +
                                                                           80),
                                                                &v702_.v702);
                                                            v728_.v730 =
                                                                v728_.v728;
                                                            v728_.v728
                                                                [0] = (__int64)
                                                                GameData_1fd7c18;
                                                            GameRoutine_ce6740(
                                                                v571,
                                                                (__int64)
                                                                    v728_.v728);
                                                            if (v728_.v730 ==
                                                                v728_.v728) {
                                                              v574 = 32;
                                                            }
                                                            else {
                                                              if (v728_.v730 ==
                                                                  nullptr) {
                                                              LABEL_923:
                                                                v575 =
                                                                    v702_.v703;
                                                                if (v702_.v703 !=
                                                                        0 &&
                                                                    atomic_fetch_add(
                                                                        (atomic_ullong* volatile)(v702_
                                                                                                      .v703 +
                                                                                                  8),
                                                                        0xFFFFFFFFFFFFFFFFLL) ==
                                                                        0) {
                                                                  (*(void (**)(
                                                                      __int64))(
                                                                      *(_QWORD*)
                                                                          v575 +
                                                                      16LL))(
                                                                      v575);
                                                                  std___1___shared_weak_count___release_weak(
                                                                      v575);
                                                                }
                                                                if (atomic_fetch_add(
                                                                        v572,
                                                                        0xFFFFFFFFFFFFFFFFLL) ==
                                                                    0) {
                                                                  (*(void (**)(
                                                                      __int64))(
                                                                      *(_QWORD*)
                                                                          v573 +
                                                                      16LL))(
                                                                      v573);
                                                                  std___1___shared_weak_count___release_weak(
                                                                      v573);
                                                                }
                                                                v576 =
                                                                    fw_memory_HeapManager_Allocate(
                                                                        *v569,
                                                                        88, 16,
                                                                        0);
                                                                *(_QWORD*)(v576 +
                                                                           8) =
                                                                    0;
                                                                v577 =
                                                                    (atomic_ullong*)(v576 +
                                                                                     8);
                                                                *(_QWORD*)(v576 +
                                                                           16) =
                                                                    0;
                                                                v578 = v576;
                                                                *(_QWORD*)v576 =
                                                                    GameData_1fe4f98;
                                                                *(_QWORD*)(v576 +
                                                                           32) =
                                                                    0;
                                                                *(_QWORD*)(v576 +
                                                                           40) =
                                                                    0;
                                                                *(_QWORD*)(v576 +
                                                                           48) =
                                                                    0;
                                                                *(_QWORD*)(v576 +
                                                                           56) =
                                                                    0;
                                                                *(_QWORD*)(v576 +
                                                                           64) =
                                                                    0;
                                                                *(_QWORD*)(v576 +
                                                                           72) =
                                                                    0;
                                                                v579 = *(
                                                                    _QWORD*)(v3 +
                                                                             128);
                                                                v580 =
                                                                    GameData_212f438
                                                                        [0] +
                                                                    2;
                                                                *(_QWORD*)(v576 +
                                                                           80) =
                                                                    2615047979LL;
                                                                *(_QWORD*)(v576 +
                                                                           24) =
                                                                    v580;
                                                                *(_DWORD*)(v576 +
                                                                           32) =
                                                                    1120665600;
                                                                v700_.v700 =
                                                                    v576 + 24;
                                                                v700_.v701 =
                                                                    v576;
                                                                atomic_fetch_add_explicit(
                                                                    (atomic_ullong* volatile)(v576 +
                                                                                              8),
                                                                    1u,
                                                                    memory_order_relaxed);
                                                                *(_QWORD*)(v576 +
                                                                           40) =
                                                                    v579;
                                                                if (*(float*)(v579 +
                                                                              24) <
                                                                    0x1.9800000000000p+6f) {
                                                                  ((void (*)(
                                                                      __int64,
                                                                      float))
                                                                       GameRoutine_ce6d60)(
                                                                      v579,
                                                                      0x1.9800000000000p+6f);
                                                                }
                                                                GameRoutine_ce65f0(
                                                                    (__int64*)(v579 +
                                                                               80),
                                                                    &v700_
                                                                         .v700);
                                                                v728_.v730 =
                                                                    v728_.v728;
                                                                v728_.v728
                                                                    [0] = (__int64)
                                                                    GameData_1fd7c18;
                                                                GameRoutine_ce6740(
                                                                    v579,
                                                                    (__int64)v728_
                                                                        .v728);
                                                                if (v728_
                                                                        .v730 ==
                                                                    v728_
                                                                        .v728) {
                                                                  v581 = 32;
                                                                }
                                                                else {
                                                                  if (v728_
                                                                          .v730 ==
                                                                      nullptr) {
                                                                  LABEL_935:
                                                                    v582 =
                                                                        v700_
                                                                            .v701;
                                                                    if (v700_.v701 !=
                                                                            0 &&
                                                                        atomic_fetch_add(
                                                                            (atomic_ullong* volatile)(v700_
                                                                                                          .v701 +
                                                                                                      8),
                                                                            0xFFFFFFFFFFFFFFFFLL) ==
                                                                            0) {
                                                                      (*(void (**)(
                                                                          __int64))(
                                                                          *(_QWORD*)
                                                                              v582 +
                                                                          16LL))(
                                                                          v582);
                                                                      std___1___shared_weak_count___release_weak(
                                                                          v582);
                                                                    }
                                                                    if (atomic_fetch_add(
                                                                            v577,
                                                                            0xFFFFFFFFFFFFFFFFLL) ==
                                                                        0) {
                                                                      (*(void (**)(
                                                                          __int64))(
                                                                          *(_QWORD*)
                                                                              v578 +
                                                                          16LL))(
                                                                          v578);
                                                                      std___1___shared_weak_count___release_weak(
                                                                          v578);
                                                                    }
                                                                    v583 =
                                                                        fw_memory_HeapManager_Allocate(
                                                                            *v569,
                                                                            104,
                                                                            16,
                                                                            0);
                                                                    v584 = *(
                                                                        _QWORD*)(v3 +
                                                                                 128);
                                                                    *(_QWORD*)(v583 +
                                                                               88) =
                                                                        0;
                                                                    *(_QWORD*)(v583 +
                                                                               96) =
                                                                        0;
                                                                    *(_QWORD*)(v583 +
                                                                               8) =
                                                                        0;
                                                                    v585 =
                                                                        (atomic_ullong*)(v583 +
                                                                                         8);
                                                                    v586 = v583;
                                                                    *(_QWORD*)(v583 +
                                                                               16) =
                                                                        0;
                                                                    *(_QWORD*)
                                                                        v583 =
                                                                        GameData_1fe4f48;
                                                                    *(_QWORD*)(v583 +
                                                                               32) =
                                                                        0;
                                                                    *(_QWORD*)(v583 +
                                                                               40) =
                                                                        0;
                                                                    *(_QWORD*)(v583 +
                                                                               24) =
                                                                        v550 +
                                                                        2;
                                                                    *(_DWORD*)(v583 +
                                                                               92) =
                                                                        1056964608;
                                                                    *(_QWORD*)(v583 +
                                                                               48) =
                                                                        0;
                                                                    *(_QWORD*)(v583 +
                                                                               56) =
                                                                        0;
                                                                    *(_QWORD*)(v583 +
                                                                               64) =
                                                                        0;
                                                                    *(_QWORD*)(v583 +
                                                                               72) =
                                                                        0;
                                                                    *(_BYTE*)(v583 +
                                                                              96) =
                                                                        1;
                                                                    v698_.v698 =
                                                                        v583 +
                                                                        24;
                                                                    v698_.v699 =
                                                                        v583;
                                                                    *(_QWORD*)(v583 +
                                                                               80) =
                                                                        0x3F4CCCCD00000004LL;
                                                                    *(_DWORD*)(v583 +
                                                                               32) =
                                                                        1120665600;
                                                                    atomic_fetch_add_explicit(
                                                                        (atomic_ullong* volatile)(v583 +
                                                                                                  8),
                                                                        1u,
                                                                        memory_order_relaxed);
                                                                    *(_QWORD*)(v583 +
                                                                               40) =
                                                                        v584;
                                                                    if (*(float*)(v584 +
                                                                                  24) <
                                                                        0x1.9800000000000p+6f) {
                                                                      ((void (*)(
                                                                          __int64,
                                                                          float))
                                                                           GameRoutine_ce6d60)(
                                                                          v584,
                                                                          0x1.9800000000000p+6f);
                                                                    }
                                                                    GameRoutine_ce65f0(
                                                                        (__int64*)(v584 +
                                                                                   80),
                                                                        &v698_
                                                                             .v698);
                                                                    v728_.v730 =
                                                                        v728_
                                                                            .v728;
                                                                    v728_.v728
                                                                        [0] =
                                                                        (__int64)
                                                                            GameData_1fd7c18;
                                                                    GameRoutine_ce6740(
                                                                        v584,
                                                                        (__int64)v728_
                                                                            .v728);
                                                                    if (v728_
                                                                            .v730 ==
                                                                        v728_
                                                                            .v728) {
                                                                      v587 = 32;
                                                                    }
                                                                    else {
                                                                      if (v728_
                                                                              .v730 ==
                                                                          nullptr) {
                                                                      LABEL_947:
                                                                        v588 =
                                                                            v698_
                                                                                .v699;
                                                                        if (v698_.v699 !=
                                                                                0 &&
                                                                            atomic_fetch_add(
                                                                                (atomic_ullong* volatile)(v698_
                                                                                                              .v699 +
                                                                                                          8),
                                                                                0xFFFFFFFFFFFFFFFFLL) ==
                                                                                0) {
                                                                          (*(void (**)(
                                                                              __int64))(
                                                                              *(_QWORD*)
                                                                                  v588 +
                                                                              16LL))(
                                                                              v588);
                                                                          std___1___shared_weak_count___release_weak(
                                                                              v588);
                                                                        }
                                                                        if (atomic_fetch_add(
                                                                                v585,
                                                                                0xFFFFFFFFFFFFFFFFLL) ==
                                                                            0) {
                                                                          (*(void (**)(
                                                                              __int64))(
                                                                              *(_QWORD*)
                                                                                  v586 +
                                                                              16LL))(
                                                                              v586);
                                                                          std___1___shared_weak_count___release_weak(
                                                                              v586);
                                                                        }
                                                                        v589 = fw_memory_HeapManager_Allocate(
                                                                            *v569,
                                                                            88,
                                                                            16,
                                                                            0);
                                                                        *(_QWORD*)(v589 +
                                                                                   8) =
                                                                            0;
                                                                        v590 =
                                                                            (atomic_ullong*)(v589 +
                                                                                             8);
                                                                        *(_QWORD*)(v589 +
                                                                                   16) =
                                                                            0;
                                                                        *(_QWORD*)(v589 +
                                                                                   72) =
                                                                            0;
                                                                        *(_QWORD*)(v589 +
                                                                                   80) =
                                                                            0;
                                                                        v591 =
                                                                            v589;
                                                                        *(_QWORD*)
                                                                            v589 =
                                                                            GameData_1fe5b18;
                                                                        *(_QWORD*)(v589 +
                                                                                   32) =
                                                                            0;
                                                                        *(_QWORD*)(v589 +
                                                                                   40) =
                                                                            0;
                                                                        *(_QWORD*)(v589 +
                                                                                   48) =
                                                                            0;
                                                                        *(_QWORD*)(v589 +
                                                                                   56) =
                                                                            0;
                                                                        *(_QWORD*)(v589 +
                                                                                   64) =
                                                                            0;
                                                                        v592 = *(
                                                                            _QWORD*)(v3 +
                                                                                     128);
                                                                        v593 =
                                                                            GameData_212f4a8
                                                                                [0] +
                                                                            2;
                                                                        *(_DWORD*)(v589 +
                                                                                   80) =
                                                                            1036831949;
                                                                        *(_QWORD*)(v589 +
                                                                                   24) =
                                                                            v593;
                                                                        *(_DWORD*)(v589 +
                                                                                   32) =
                                                                            1127481344;
                                                                        v696_
                                                                            .v696 =
                                                                            v589 +
                                                                            24;
                                                                        v696_
                                                                            .v697 =
                                                                            v589;
                                                                        atomic_fetch_add_explicit(
                                                                            (atomic_ullong* volatile)(v589 +
                                                                                                      8),
                                                                            1u,
                                                                            memory_order_relaxed);
                                                                        *(_QWORD*)(v589 +
                                                                                   40) =
                                                                            v592;
                                                                        if (*(float*)(v592 +
                                                                                      24) <
                                                                            0x1.6800000000000p+7f) {
                                                                          ((void (*)(
                                                                              __int64,
                                                                              float))
                                                                               GameRoutine_ce6d60)(
                                                                              v592,
                                                                              0x1.6800000000000p+7f);
                                                                        }
                                                                        GameRoutine_ce65f0(
                                                                            (__int64*)(v592 +
                                                                                       80),
                                                                            &v696_
                                                                                 .v696);
                                                                        v728_
                                                                            .v730 =
                                                                            v728_
                                                                                .v728;
                                                                        v728_.v728
                                                                            [0] =
                                                                            (__int64)
                                                                                GameData_1fd7c18;
                                                                        GameRoutine_ce6740(
                                                                            v592,
                                                                            (__int64)v728_
                                                                                .v728);
                                                                        if (v728_
                                                                                .v730 ==
                                                                            v728_
                                                                                .v728) {
                                                                          v594 =
                                                                              32;
                                                                        }
                                                                        else {
                                                                          if (v728_
                                                                                  .v730 ==
                                                                              nullptr) {
                                                                          LABEL_959:
                                                                            v595 =
                                                                                v696_
                                                                                    .v697;
                                                                            if (v696_.v697 !=
                                                                                    0 &&
                                                                                atomic_fetch_add(
                                                                                    (atomic_ullong* volatile)(v696_
                                                                                                                  .v697 +
                                                                                                              8),
                                                                                    0xFFFFFFFFFFFFFFFFLL) ==
                                                                                    0) {
                                                                              (*(void (**)(
                                                                                  __int64))(
                                                                                  *(_QWORD*)
                                                                                      v595 +
                                                                                  16LL))(
                                                                                  v595);
                                                                              std___1___shared_weak_count___release_weak(
                                                                                  v595);
                                                                            }
                                                                            if (atomic_fetch_add(
                                                                                    v590,
                                                                                    0xFFFFFFFFFFFFFFFFLL) ==
                                                                                0) {
                                                                              (*(void (**)(
                                                                                  __int64))(
                                                                                  *(_QWORD*)
                                                                                      v591 +
                                                                                  16LL))(
                                                                                  v591);
                                                                              std___1___shared_weak_count___release_weak(
                                                                                  v591);
                                                                            }
                                                                            v596 = fw_memory_HeapManager_Allocate(
                                                                                *v569,
                                                                                104,
                                                                                16,
                                                                                0);
                                                                            v597 = *(
                                                                                _QWORD*)(v3 +
                                                                                         128);
                                                                            *(_QWORD*)(v596 +
                                                                                       8) =
                                                                                0;
                                                                            v598 =
                                                                                (atomic_ullong*)(v596 +
                                                                                                 8);
                                                                            *(_QWORD*)(v596 +
                                                                                       16) =
                                                                                0;
                                                                            *(_QWORD*)
                                                                                v596 =
                                                                                GameData_1fe4f48;
                                                                            v599 =
                                                                                v596;
                                                                            *(_QWORD*)(v596 +
                                                                                       24) =
                                                                                v550 +
                                                                                2;
                                                                            *(_QWORD*)(v596 +
                                                                                       32) =
                                                                                0;
                                                                            *(_QWORD*)(v596 +
                                                                                       40) =
                                                                                0;
                                                                            *(_QWORD*)(v596 +
                                                                                       48) =
                                                                                0;
                                                                            *(_QWORD*)(v596 +
                                                                                       56) =
                                                                                0;
                                                                            *(_QWORD*)(v596 +
                                                                                       64) =
                                                                                0;
                                                                            *(_QWORD*)(v596 +
                                                                                       72) =
                                                                                0;
                                                                            *(_DWORD*)(v596 +
                                                                                       32) =
                                                                                1127481344;
                                                                            *(_QWORD*)(v596 +
                                                                                       88) =
                                                                                0x3F8000003F800000LL;
                                                                            *(_QWORD*)(v596 +
                                                                                       96) =
                                                                                0;
                                                                            v694_
                                                                                .v694 =
                                                                                v596 +
                                                                                24;
                                                                            v694_
                                                                                .v695 =
                                                                                v596;
                                                                            *(_QWORD*)(v596 +
                                                                                       80) =
                                                                                0x3E4CCCCD00000005LL;
                                                                            atomic_fetch_add_explicit(
                                                                                (atomic_ullong* volatile)(v596 +
                                                                                                          8),
                                                                                1u,
                                                                                memory_order_relaxed);
                                                                            *(_QWORD*)(v596 +
                                                                                       40) =
                                                                                v597;
                                                                            if (*(float*)(v597 +
                                                                                          24) <
                                                                                0x1.6800000000000p+7f) {
                                                                              ((void (*)(
                                                                                  __int64,
                                                                                  float))
                                                                                   GameRoutine_ce6d60)(
                                                                                  v597,
                                                                                  0x1.6800000000000p+7f);
                                                                            }
                                                                            GameRoutine_ce65f0(
                                                                                (__int64*)(v597 +
                                                                                           80),
                                                                                &v694_
                                                                                     .v694);
                                                                            v728_
                                                                                .v728
                                                                                    [0] =
                                                                                (__int64)
                                                                                    GameData_1fd7c18;
                                                                            v728_
                                                                                .v730 =
                                                                                v728_
                                                                                    .v728;
                                                                            GameRoutine_ce6740(
                                                                                v597,
                                                                                (__int64)v728_
                                                                                    .v728);
                                                                            if (v728_
                                                                                    .v730 ==
                                                                                v728_
                                                                                    .v728) {
                                                                              v600 =
                                                                                  32;
                                                                            }
                                                                            else {
                                                                              if (v728_
                                                                                      .v730 ==
                                                                                  nullptr) {
                                                                              LABEL_971:
                                                                                v601 =
                                                                                    v694_
                                                                                        .v695;
                                                                                if (v694_.v695 !=
                                                                                        0 &&
                                                                                    atomic_fetch_add(
                                                                                        (atomic_ullong* volatile)(v694_
                                                                                                                      .v695 +
                                                                                                                  8),
                                                                                        0xFFFFFFFFFFFFFFFFLL) ==
                                                                                        0) {
                                                                                  (*(void (**)(
                                                                                      __int64))(
                                                                                      *(_QWORD*)
                                                                                          v601 +
                                                                                      16LL))(
                                                                                      v601);
                                                                                  std___1___shared_weak_count___release_weak(
                                                                                      v601);
                                                                                }
                                                                                if (atomic_fetch_add(
                                                                                        v598,
                                                                                        0xFFFFFFFFFFFFFFFFLL) ==
                                                                                    0) {
                                                                                  (*(void (**)(
                                                                                      __int64))(
                                                                                      *(_QWORD*)
                                                                                          v599 +
                                                                                      16LL))(
                                                                                      v599);
                                                                                  std___1___shared_weak_count___release_weak(
                                                                                      v599);
                                                                                }
                                                                                v602 = fw_memory_HeapManager_Allocate(
                                                                                    *v569,
                                                                                    224,
                                                                                    16,
                                                                                    0);
                                                                                *(_QWORD*)(v602 +
                                                                                           8) =
                                                                                    0;
                                                                                v603 =
                                                                                    (atomic_ullong*)(v602 +
                                                                                                     8);
                                                                                *(_QWORD*)(v602 +
                                                                                           16) =
                                                                                    0;
                                                                                *(_QWORD*)(v602 +
                                                                                           40) =
                                                                                    0;
                                                                                *(_QWORD*)(v602 +
                                                                                           48) =
                                                                                    0;
                                                                                v604 =
                                                                                    v602;
                                                                                *(_QWORD*)(v602 +
                                                                                           56) =
                                                                                    0;
                                                                                *(_QWORD*)(v602 +
                                                                                           64) =
                                                                                    0;
                                                                                *(_BYTE*)(v602 +
                                                                                          73) =
                                                                                    0;
                                                                                *(_WORD*)(v602 +
                                                                                          74) =
                                                                                    0;
                                                                                *(_DWORD*)(v602 +
                                                                                           76) =
                                                                                    0;
                                                                                *(_QWORD*)(v602 +
                                                                                           80) =
                                                                                    0;
                                                                                *(_QWORD*)
                                                                                    v602 =
                                                                                    GameData_1fe5a38;
                                                                                *(_QWORD*)(v602 +
                                                                                           88) =
                                                                                    0;
                                                                                *(_QWORD*)(v602 +
                                                                                           96) =
                                                                                    0;
                                                                                *(_QWORD*)(v602 +
                                                                                           104) =
                                                                                    0;
                                                                                *(_QWORD*)(v602 +
                                                                                           112) =
                                                                                    0;
                                                                                *(_QWORD*)(v602 +
                                                                                           120) =
                                                                                    0;
                                                                                *(_QWORD*)(v602 +
                                                                                           128) =
                                                                                    0;
                                                                                *(_QWORD*)(v602 +
                                                                                           136) =
                                                                                    0;
                                                                                *(_QWORD*)(v602 +
                                                                                           144) =
                                                                                    0;
                                                                                *(_QWORD*)(v602 +
                                                                                           152) =
                                                                                    0;
                                                                                *(_QWORD*)(v602 +
                                                                                           160) =
                                                                                    0;
                                                                                *(_QWORD*)(v602 +
                                                                                           168) =
                                                                                    0;
                                                                                *(_QWORD*)(v602 +
                                                                                           176) =
                                                                                    0;
                                                                                *(_QWORD*)(v602 +
                                                                                           184) =
                                                                                    0;
                                                                                *(_QWORD*)(v602 +
                                                                                           192) =
                                                                                    0;
                                                                                *(_QWORD*)(v602 +
                                                                                           200) =
                                                                                    0;
                                                                                *(_QWORD*)(v602 +
                                                                                           208) =
                                                                                    0;
                                                                                *(_QWORD*)(v602 +
                                                                                           32) =
                                                                                    0;
                                                                                *(_QWORD*)(v602 +
                                                                                           216) =
                                                                                    0;
                                                                                v605 = *(
                                                                                    _QWORD*)(v3 +
                                                                                             128);
                                                                                v606 =
                                                                                    GameData_212f4a0
                                                                                        [0] +
                                                                                    2;
                                                                                strcpy(
                                                                                    (char*)(v602 +
                                                                                            56),
                                                                                    "\"GambitChariotPu");
                                                                                *(_BYTE*)(v602 +
                                                                                          104) =
                                                                                    0;
                                                                                *(_BYTE*)(v602 +
                                                                                          116) =
                                                                                    1;
                                                                                *(_BYTE*)(v602 +
                                                                                          124) =
                                                                                    1;
                                                                                *(_DWORD*)(v602 +
                                                                                           96) =
                                                                                    -371817049;
                                                                                v692_
                                                                                    .v692 =
                                                                                    v602 +
                                                                                    32;
                                                                                v692_
                                                                                    .v693 =
                                                                                    v602;
                                                                                *(_QWORD*)(v602 +
                                                                                           32) =
                                                                                    v606;
                                                                                *(_DWORD*)(v602 +
                                                                                           40) =
                                                                                    1127481344;
                                                                                atomic_fetch_add_explicit(
                                                                                    (atomic_ullong* volatile)(v602 +
                                                                                                              8),
                                                                                    1u,
                                                                                    memory_order_relaxed);
                                                                                *(_QWORD*)(v602 +
                                                                                           48) =
                                                                                    v605;
                                                                                if (*(float*)(v605 +
                                                                                              24) <
                                                                                    0x1.6800000000000p+7f) {
                                                                                  ((void (*)(
                                                                                      __int64,
                                                                                      float))
                                                                                       GameRoutine_ce6d60)(
                                                                                      v605,
                                                                                      0x1.6800000000000p+7f);
                                                                                }
                                                                                GameRoutine_ce65f0(
                                                                                    (__int64*)(v605 +
                                                                                               80),
                                                                                    &v692_
                                                                                         .v692);
                                                                                v728_
                                                                                    .v730 =
                                                                                    v728_
                                                                                        .v728;
                                                                                v728_
                                                                                    .v728
                                                                                        [0] =
                                                                                    (__int64)
                                                                                        GameData_1fd7c18;
                                                                                GameRoutine_ce6740(
                                                                                    v605,
                                                                                    (__int64)v728_
                                                                                        .v728);
                                                                                if (v728_
                                                                                        .v730 ==
                                                                                    v728_
                                                                                        .v728) {
                                                                                  v607 =
                                                                                      32;
                                                                                }
                                                                                else {
                                                                                  if (v728_
                                                                                          .v730 ==
                                                                                      nullptr) {
                                                                                  LABEL_983:
                                                                                    v608 =
                                                                                        v692_
                                                                                            .v693;
                                                                                    if (v692_.v693 !=
                                                                                            0 &&
                                                                                        atomic_fetch_add(
                                                                                            (atomic_ullong* volatile)(v692_
                                                                                                                          .v693 +
                                                                                                                      8),
                                                                                            0xFFFFFFFFFFFFFFFFLL) ==
                                                                                            0) {
                                                                                      (*(void (**)(
                                                                                          __int64))(
                                                                                          *(_QWORD*)
                                                                                              v608 +
                                                                                          16LL))(
                                                                                          v608);
                                                                                      std___1___shared_weak_count___release_weak(
                                                                                          v608);
                                                                                    }
                                                                                    if (atomic_fetch_add(
                                                                                            v603,
                                                                                            0xFFFFFFFFFFFFFFFFLL) ==
                                                                                        0) {
                                                                                      (*(void (**)(
                                                                                          __int64))(
                                                                                          *(_QWORD*)
                                                                                              v604 +
                                                                                          16LL))(
                                                                                          v604);
                                                                                      std___1___shared_weak_count___release_weak(
                                                                                          v604);
                                                                                    }
                                                                                    v609 = fw_memory_HeapManager_Allocate(
                                                                                        *v569,
                                                                                        224,
                                                                                        16,
                                                                                        0);
                                                                                    *(_QWORD*)(v609 +
                                                                                               16) =
                                                                                        0;
                                                                                    *(_QWORD*)(v609 +
                                                                                               40) =
                                                                                        0;
                                                                                    *(_QWORD*)(v609 +
                                                                                               48) =
                                                                                        0;
                                                                                    v610 =
                                                                                        v609;
                                                                                    *(_QWORD*)(v609 +
                                                                                               8) =
                                                                                        0;
                                                                                    v611 =
                                                                                        (atomic_ullong*)(v609 +
                                                                                                         8);
                                                                                    *(_QWORD*)(v609 +
                                                                                               56) =
                                                                                        0;
                                                                                    *(_QWORD*)(v609 +
                                                                                               64) =
                                                                                        0;
                                                                                    *(_QWORD*)
                                                                                        v609 =
                                                                                        GameData_1fe5a38;
                                                                                    *(_QWORD*)(v609 +
                                                                                               32) =
                                                                                        0;
                                                                                    v612 =
                                                                                        v609 +
                                                                                        32;
                                                                                    *(_BYTE*)(v609 +
                                                                                              73) =
                                                                                        0;
                                                                                    *(_WORD*)(v609 +
                                                                                              74) =
                                                                                        0;
                                                                                    *(_DWORD*)(v609 +
                                                                                               76) =
                                                                                        0;
                                                                                    *(_QWORD*)(v609 +
                                                                                               80) =
                                                                                        0;
                                                                                    *(_QWORD*)(v609 +
                                                                                               88) =
                                                                                        0;
                                                                                    *(_QWORD*)(v609 +
                                                                                               96) =
                                                                                        0;
                                                                                    *(_QWORD*)(v609 +
                                                                                               104) =
                                                                                        0;
                                                                                    *(_QWORD*)(v609 +
                                                                                               112) =
                                                                                        0;
                                                                                    *(_QWORD*)(v609 +
                                                                                               120) =
                                                                                        0;
                                                                                    *(_QWORD*)(v609 +
                                                                                               136) =
                                                                                        0;
                                                                                    *(_QWORD*)(v609 +
                                                                                               144) =
                                                                                        0;
                                                                                    *(_QWORD*)(v609 +
                                                                                               152) =
                                                                                        0;
                                                                                    *(_QWORD*)(v609 +
                                                                                               160) =
                                                                                        0;
                                                                                    *(_QWORD*)(v609 +
                                                                                               168) =
                                                                                        0;
                                                                                    *(_QWORD*)(v609 +
                                                                                               176) =
                                                                                        0;
                                                                                    *(_QWORD*)(v609 +
                                                                                               184) =
                                                                                        0;
                                                                                    *(_QWORD*)(v609 +
                                                                                               192) =
                                                                                        0;
                                                                                    *(_QWORD*)(v609 +
                                                                                               200) =
                                                                                        0;
                                                                                    *(_QWORD*)(v609 +
                                                                                               208) =
                                                                                        0;
                                                                                    *(_QWORD*)(v609 +
                                                                                               216) =
                                                                                        0;
                                                                                    *(_QWORD*)(v609 +
                                                                                               128) =
                                                                                        0;
                                                                                    v613 =
                                                                                        GameData_212f4a0
                                                                                            [0] +
                                                                                        2;
                                                                                    *(_BYTE*)(v609 +
                                                                                              104) =
                                                                                        0;
                                                                                    *(_BYTE*)(v609 +
                                                                                              120) =
                                                                                        0;
                                                                                    *(_DWORD*)(v609 +
                                                                                               96) =
                                                                                        -371817049;
                                                                                    v728_
                                                                                        .v728
                                                                                            [1] =
                                                                                        v562;
                                                                                    LODWORD(
                                                                                        v728_
                                                                                            .v728
                                                                                                [2]) =
                                                                                        v123;
                                                                                    v728_
                                                                                        .v730 =
                                                                                        v728_
                                                                                            .v728;
                                                                                    *(_QWORD*)(v609 +
                                                                                               32) =
                                                                                        v613;
                                                                                    *(_DWORD*)(v609 +
                                                                                               40) =
                                                                                        1128267776;
                                                                                    strcpy(
                                                                                        (char*)(v609 +
                                                                                                56),
                                                                                        "\"GambitChariotPu");
                                                                                    v728_
                                                                                        .v728
                                                                                            [0] =
                                                                                        (__int64)
                                                                                            GameData_1fe5b68;
                                                                                    GameRoutine_e4fc30(
                                                                                        v728_
                                                                                            .v728,
                                                                                        (_QWORD*)(v609 +
                                                                                                  128));
                                                                                    if (v728_
                                                                                            .v730 ==
                                                                                        v728_
                                                                                            .v728) {
                                                                                      v614 =
                                                                                          32;
                                                                                    }
                                                                                    else {
                                                                                      if (v728_
                                                                                              .v730 ==
                                                                                          nullptr) {
                                                                                        goto LABEL_993;
                                                                                      }
                                                                                      v614 =
                                                                                          40;
                                                                                    }
                                                                                    (*(void (**)(
                                                                                        __int64))(
                                                                                        *v728_
                                                                                             .v730 +
                                                                                        v614))(
                                                                                        (__int64)v728_
                                                                                            .v730);
                                                                                  LABEL_993:
                                                                                    v615 = *(
                                                                                        _QWORD*)(v3 +
                                                                                                 128);
                                                                                    v690_
                                                                                        .v690 =
                                                                                        v612;
                                                                                    v690_
                                                                                        .v691 =
                                                                                        v610;
                                                                                    atomic_fetch_add_explicit(
                                                                                        (atomic_ullong* volatile)(v610 +
                                                                                                                  8),
                                                                                        1u,
                                                                                        memory_order_relaxed);
                                                                                    v616 = *(
                                                                                        float*)(v610 +
                                                                                                40);
                                                                                    *(_QWORD*)(v610 +
                                                                                               48) =
                                                                                        v615;
                                                                                    if (v616 >
                                                                                        *(float*)(v615 +
                                                                                                  24)) {
                                                                                      ((void (*)(
                                                                                          __int64))
                                                                                           GameRoutine_ce6d60)(
                                                                                          v615);
                                                                                    }
                                                                                    GameRoutine_ce65f0(
                                                                                        (__int64*)(v615 +
                                                                                                   80),
                                                                                        &v690_
                                                                                             .v690);
                                                                                    v728_
                                                                                        .v728
                                                                                            [0] =
                                                                                        (__int64)
                                                                                            GameData_1fd7c18;
                                                                                    v728_
                                                                                        .v730 =
                                                                                        v728_
                                                                                            .v728;
                                                                                    GameRoutine_ce6740(
                                                                                        v615,
                                                                                        (__int64)v728_
                                                                                            .v728);
                                                                                    if (v728_
                                                                                            .v730 ==
                                                                                        v728_
                                                                                            .v728) {
                                                                                      v617 =
                                                                                          32;
                                                                                    }
                                                                                    else {
                                                                                      if (v728_
                                                                                              .v730 ==
                                                                                          nullptr) {
                                                                                      LABEL_1000:
                                                                                        v618 =
                                                                                            v690_
                                                                                                .v691;
                                                                                        if (v690_.v691 !=
                                                                                                0 &&
                                                                                            atomic_fetch_add(
                                                                                                (atomic_ullong* volatile)(v690_
                                                                                                                              .v691 +
                                                                                                                          8),
                                                                                                0xFFFFFFFFFFFFFFFFLL) ==
                                                                                                0) {
                                                                                          (*(void (**)(
                                                                                              __int64))(
                                                                                              *(_QWORD*)
                                                                                                  v618 +
                                                                                              16LL))(
                                                                                              v618);
                                                                                          std___1___shared_weak_count___release_weak(
                                                                                              v618);
                                                                                        }
                                                                                        if (atomic_fetch_add(
                                                                                                v611,
                                                                                                0xFFFFFFFFFFFFFFFFLL) ==
                                                                                            0) {
                                                                                          (*(void (**)(
                                                                                              __int64))(
                                                                                              *(_QWORD*)
                                                                                                  v610 +
                                                                                              16LL))(
                                                                                              v610);
                                                                                          std___1___shared_weak_count___release_weak(
                                                                                              v610);
                                                                                        }
                                                                                        v619 = fw_memory_HeapManager_Allocate(
                                                                                            *v569,
                                                                                            192,
                                                                                            16,
                                                                                            0);
                                                                                        *(_QWORD*)(v619 +
                                                                                                   16) =
                                                                                            0;
                                                                                        *(_QWORD*)(v619 +
                                                                                                   40) =
                                                                                            0;
                                                                                        *(_QWORD*)(v619 +
                                                                                                   48) =
                                                                                            0;
                                                                                        v620 =
                                                                                            v619;
                                                                                        *(_QWORD*)(v619 +
                                                                                                   56) =
                                                                                            0;
                                                                                        *(_QWORD*)(v619 +
                                                                                                   64) =
                                                                                            0;
                                                                                        *(_QWORD*)(v619 +
                                                                                                   72) =
                                                                                            0;
                                                                                        *(_QWORD*)(v619 +
                                                                                                   80) =
                                                                                            0;
                                                                                        *(_QWORD*)(v619 +
                                                                                                   88) =
                                                                                            0;
                                                                                        *(_QWORD*)(v619 +
                                                                                                   96) =
                                                                                            0;
                                                                                        *(_QWORD*)(v619 +
                                                                                                   8) =
                                                                                            0;
                                                                                        v621 =
                                                                                            (atomic_ullong*)(v619 +
                                                                                                             8);
                                                                                        *(_QWORD*)
                                                                                            v619 =
                                                                                            GameData_1fe53d8;
                                                                                        *(_QWORD*)(v619 +
                                                                                                   32) =
                                                                                            0;
                                                                                        v622 =
                                                                                            v619 +
                                                                                            32;
                                                                                        *(_QWORD*)(v619 +
                                                                                                   104) =
                                                                                            0;
                                                                                        *(_QWORD*)(v619 +
                                                                                                   112) =
                                                                                            0;
                                                                                        *(_QWORD*)(v619 +
                                                                                                   120) =
                                                                                            0;
                                                                                        *(_QWORD*)(v619 +
                                                                                                   128) =
                                                                                            0;
                                                                                        *(_QWORD*)(v619 +
                                                                                                   136) =
                                                                                            0;
                                                                                        *(_QWORD*)(v619 +
                                                                                                   152) =
                                                                                            0;
                                                                                        *(_QWORD*)(v619 +
                                                                                                   160) =
                                                                                            0;
                                                                                        *(_QWORD*)(v619 +
                                                                                                   168) =
                                                                                            0;
                                                                                        *(_QWORD*)(v619 +
                                                                                                   176) =
                                                                                            0;
                                                                                        *(_QWORD*)(v619 +
                                                                                                   184) =
                                                                                            0;
                                                                                        *(_QWORD*)(v619 +
                                                                                                   144) =
                                                                                            0;
                                                                                        v728_
                                                                                            .v728
                                                                                                [1] =
                                                                                            v562;
                                                                                        LODWORD(
                                                                                            v728_
                                                                                                .v728
                                                                                                    [2]) =
                                                                                            v123;
                                                                                        v728_
                                                                                            .v730 =
                                                                                            v728_
                                                                                                .v728;
                                                                                        *(_QWORD*)(v619 +
                                                                                                   32) =
                                                                                            GameData_212f470
                                                                                                [0] +
                                                                                            2;
                                                                                        *(_DWORD*)(v619 +
                                                                                                   40) =
                                                                                            1128464384;
                                                                                        *(_BYTE*)(v619 +
                                                                                                  56) =
                                                                                            26;
                                                                                        *(_QWORD*)(v619 +
                                                                                                   57) = v676
                                                                                            [1];
                                                                                        *(_QWORD*)(v619 +
                                                                                                   62) = v676
                                                                                            [0];
                                                                                        *(_DWORD*)(v619 +
                                                                                                   92) =
                                                                                            0x40000000;
                                                                                        v728_
                                                                                            .v728
                                                                                                [0] =
                                                                                            (__int64)
                                                                                                GameData_1fe5be8;
                                                                                        GameRoutine_e4fc30(
                                                                                            v728_
                                                                                                .v728,
                                                                                            (_QWORD*)(v619 +
                                                                                                      144));
                                                                                        if (v728_
                                                                                                .v730 ==
                                                                                            v728_
                                                                                                .v728) {
                                                                                          v623 =
                                                                                              32;
                                                                                        }
                                                                                        else {
                                                                                          if (v728_
                                                                                                  .v730 ==
                                                                                              nullptr) {
                                                                                            goto LABEL_1010;
                                                                                          }
                                                                                          v623 =
                                                                                              40;
                                                                                        }
                                                                                        (*(void (**)(
                                                                                            __int64))(
                                                                                            *v728_
                                                                                                 .v730 +
                                                                                            v623))(
                                                                                            (__int64)v728_
                                                                                                .v730);
                                                                                      LABEL_1010:
                                                                                        v728_
                                                                                            .v730 =
                                                                                            v728_
                                                                                                .v728;
                                                                                        v728_
                                                                                            .v728
                                                                                                [0] =
                                                                                            (__int64)
                                                                                                GameData_1fe5c68;
                                                                                        GameRoutine_e4ea90(
                                                                                            v728_
                                                                                                .v728,
                                                                                            (_QWORD*)(v620 +
                                                                                                      96));
                                                                                        if (v728_
                                                                                                .v730 ==
                                                                                            v728_
                                                                                                .v728) {
                                                                                          v624 =
                                                                                              32;
                                                                                        }
                                                                                        else {
                                                                                          if (v728_
                                                                                                  .v730 ==
                                                                                              nullptr) {
                                                                                            goto LABEL_1015;
                                                                                          }
                                                                                          v624 =
                                                                                              40;
                                                                                        }
                                                                                        (*(void (**)(
                                                                                            __int64))(
                                                                                            *v728_
                                                                                                 .v730 +
                                                                                            v624))(
                                                                                            (__int64)v728_
                                                                                                .v730);
                                                                                      LABEL_1015:
                                                                                        v625 = *(
                                                                                            _QWORD*)(v3 +
                                                                                                     128);
                                                                                        v688_
                                                                                            .v688 =
                                                                                            v622;
                                                                                        v688_
                                                                                            .v689 =
                                                                                            v620;
                                                                                        atomic_fetch_add_explicit(
                                                                                            (atomic_ullong* volatile)(v620 +
                                                                                                                      8),
                                                                                            1u,
                                                                                            memory_order_relaxed);
                                                                                        v626 = *(
                                                                                            float*)(v620 +
                                                                                                    40);
                                                                                        *(_QWORD*)(v620 +
                                                                                                   48) =
                                                                                            v625;
                                                                                        if (v626 >
                                                                                            *(float*)(v625 +
                                                                                                      24)) {
                                                                                          ((void (*)(
                                                                                              __int64))
                                                                                               GameRoutine_ce6d60)(
                                                                                              v625);
                                                                                        }
                                                                                        GameRoutine_ce65f0(
                                                                                            (__int64*)(v625 +
                                                                                                       80),
                                                                                            &v688_
                                                                                                 .v688);
                                                                                        v728_
                                                                                            .v728
                                                                                                [0] =
                                                                                            (__int64)
                                                                                                GameData_1fd7c18;
                                                                                        v728_
                                                                                            .v730 =
                                                                                            v728_
                                                                                                .v728;
                                                                                        GameRoutine_ce6740(
                                                                                            v625,
                                                                                            (__int64)v728_
                                                                                                .v728);
                                                                                        if (v728_
                                                                                                .v730 ==
                                                                                            v728_
                                                                                                .v728) {
                                                                                          v627 =
                                                                                              32;
                                                                                        }
                                                                                        else {
                                                                                          if (v728_
                                                                                                  .v730 ==
                                                                                              nullptr) {
                                                                                          LABEL_1022:
                                                                                            v628 =
                                                                                                v688_
                                                                                                    .v689;
                                                                                            if (v688_.v689 !=
                                                                                                    0 &&
                                                                                                atomic_fetch_add(
                                                                                                    (atomic_ullong* volatile)(v688_
                                                                                                                                  .v689 +
                                                                                                                              8),
                                                                                                    0xFFFFFFFFFFFFFFFFLL) ==
                                                                                                    0) {
                                                                                              (*(void (**)(
                                                                                                  __int64))(
                                                                                                  *(_QWORD*)
                                                                                                      v628 +
                                                                                                  16LL))(
                                                                                                  v628);
                                                                                              std___1___shared_weak_count___release_weak(
                                                                                                  v628);
                                                                                            }
                                                                                            if (atomic_fetch_add(
                                                                                                    v621,
                                                                                                    0xFFFFFFFFFFFFFFFFLL) ==
                                                                                                0) {
                                                                                              (*(void (**)(
                                                                                                  __int64))(
                                                                                                  *(_QWORD*)
                                                                                                      v620 +
                                                                                                  16LL))(
                                                                                                  v620);
                                                                                              std___1___shared_weak_count___release_weak(
                                                                                                  v620);
                                                                                            }
                                                                                            v629 = (_QWORD*)fw_memory_HeapManager_Allocate(
                                                                                                *v569,
                                                                                                128,
                                                                                                16,
                                                                                                0);
                                                                                            v629[2] =
                                                                                                0;
                                                                                            v630 =
                                                                                                (__int64)
                                                                                                    v629;
                                                                                            v631 = GameData_212f460
                                                                                                [0];
                                                                                            v629[4] =
                                                                                                0;
                                                                                            v629[5] =
                                                                                                0;
                                                                                            v629[6] =
                                                                                                0;
                                                                                            v629[7] =
                                                                                                0;
                                                                                            *v629 =
                                                                                                GameData_1fe5338;
                                                                                            v629[8] =
                                                                                                0;
                                                                                            v629[9] =
                                                                                                0;
                                                                                            v629[11] =
                                                                                                0;
                                                                                            v629[12] =
                                                                                                0;
                                                                                            v629[13] =
                                                                                                0;
                                                                                            v629[14] =
                                                                                                0;
                                                                                            v629[15] =
                                                                                                0;
                                                                                            v629[10] =
                                                                                                0;
                                                                                            v629[1] =
                                                                                                0;
                                                                                            v632 =
                                                                                                (atomic_ullong*)(v629 +
                                                                                                                 1);
                                                                                            v629[3] =
                                                                                                v631 +
                                                                                                2;
                                                                                            v633 =
                                                                                                v629 +
                                                                                                3;
                                                                                            *((_DWORD*)
                                                                                                  v629 +
                                                                                              8) =
                                                                                                1128464384;
                                                                                            GameRoutine_60a020(
                                                                                                (__int64)(v629 +
                                                                                                          10),
                                                                                                "Stratagem_Chariot_SmokeA");
                                                                                            if ((*(_BYTE*)(v630 +
                                                                                                           104) &
                                                                                                 1) !=
                                                                                                0) {
                                                                                              *(_QWORD*)(v630 +
                                                                                                         112) =
                                                                                                  11;
                                                                                              v634 = *(
                                                                                                  char**)(v630 +
                                                                                                          120);
                                                                                            }
                                                                                            else {
                                                                                              *(_BYTE*)(v630 +
                                                                                                        104) =
                                                                                                  22;
                                                                                              v634 =
                                                                                                  (char*)(v630 +
                                                                                                          105);
                                                                                            }
                                                                                            strcpy(
                                                                                                v634,
                                                                                                "Loc_C_Trans");
                                                                                            v686_
                                                                                                .v686 =
                                                                                                v633;
                                                                                            v686_
                                                                                                .v687 =
                                                                                                v630;
                                                                                            v635 = *(
                                                                                                _QWORD*)(v3 +
                                                                                                         128);
                                                                                            atomic_fetch_add_explicit(
                                                                                                (atomic_ullong* volatile)(v630 +
                                                                                                                          8),
                                                                                                1u,
                                                                                                memory_order_relaxed);
                                                                                            v636 = *(
                                                                                                float*)(v630 +
                                                                                                        32);
                                                                                            *(_QWORD*)(v630 +
                                                                                                       40) =
                                                                                                v635;
                                                                                            if (v636 >
                                                                                                *(float*)(v635 +
                                                                                                          24)) {
                                                                                              ((void (*)(
                                                                                                  __int64))
                                                                                                   GameRoutine_ce6d60)(
                                                                                                  v635);
                                                                                            }
                                                                                            GameRoutine_ce65f0(
                                                                                                (__int64*)(v635 +
                                                                                                           80),
                                                                                                &v686_
                                                                                                     .v686);
                                                                                            v728_
                                                                                                .v728
                                                                                                    [0] =
                                                                                                (__int64)
                                                                                                    GameData_1fd7c18;
                                                                                            v728_
                                                                                                .v730 =
                                                                                                v728_
                                                                                                    .v728;
                                                                                            GameRoutine_ce6740(
                                                                                                v635,
                                                                                                (__int64)v728_
                                                                                                    .v728);
                                                                                            if (v728_
                                                                                                    .v730 ==
                                                                                                v728_
                                                                                                    .v728) {
                                                                                              v637 =
                                                                                                  32;
                                                                                            }
                                                                                            else {
                                                                                              if (v728_
                                                                                                      .v730 ==
                                                                                                  nullptr) {
                                                                                              LABEL_1037:
                                                                                                v638 =
                                                                                                    v686_
                                                                                                        .v687;
                                                                                                if (v686_.v687 !=
                                                                                                        0 &&
                                                                                                    atomic_fetch_add(
                                                                                                        (atomic_ullong* volatile)(v686_
                                                                                                                                      .v687 +
                                                                                                                                  8),
                                                                                                        0xFFFFFFFFFFFFFFFFLL) ==
                                                                                                        0) {
                                                                                                  (*(void (**)(
                                                                                                      __int64))(
                                                                                                      *(_QWORD*)
                                                                                                          v638 +
                                                                                                      16LL))(
                                                                                                      v638);
                                                                                                  std___1___shared_weak_count___release_weak(
                                                                                                      v638);
                                                                                                }
                                                                                                if (atomic_fetch_add(
                                                                                                        v632,
                                                                                                        0xFFFFFFFFFFFFFFFFLL) ==
                                                                                                    0) {
                                                                                                  (*(void (**)(
                                                                                                      __int64))(
                                                                                                      *(_QWORD*)
                                                                                                          v630 +
                                                                                                      16LL))(
                                                                                                      v630);
                                                                                                  std___1___shared_weak_count___release_weak(
                                                                                                      v630);
                                                                                                }
                                                                                                v639 = fw_memory_HeapManager_Allocate(
                                                                                                    *v569,
                                                                                                    88,
                                                                                                    16,
                                                                                                    0);
                                                                                                *(_QWORD*)(v639 +
                                                                                                           8) =
                                                                                                    0;
                                                                                                v640 =
                                                                                                    (atomic_ullong*)(v639 +
                                                                                                                     8);
                                                                                                *(_QWORD*)(v639 +
                                                                                                           16) =
                                                                                                    0;
                                                                                                v641 =
                                                                                                    v639;
                                                                                                *(_QWORD*)
                                                                                                    v639 =
                                                                                                    GameData_1fe5528;
                                                                                                *(_QWORD*)(v639 +
                                                                                                           72) =
                                                                                                    0;
                                                                                                *(_QWORD*)(v639 +
                                                                                                           80) =
                                                                                                    0;
                                                                                                *(_QWORD*)(v639 +
                                                                                                           32) =
                                                                                                    0;
                                                                                                *(_QWORD*)(v639 +
                                                                                                           40) =
                                                                                                    0;
                                                                                                *(_QWORD*)(v639 +
                                                                                                           48) =
                                                                                                    0;
                                                                                                *(_QWORD*)(v639 +
                                                                                                           56) =
                                                                                                    0;
                                                                                                *(_QWORD*)(v639 +
                                                                                                           64) =
                                                                                                    0;
                                                                                                v642 = *(
                                                                                                    _QWORD*)(v3 +
                                                                                                             128);
                                                                                                v643 =
                                                                                                    GameData_212f478
                                                                                                        [0] +
                                                                                                    2;
                                                                                                *(_DWORD*)(v639 +
                                                                                                           80) =
                                                                                                    1045220557;
                                                                                                *(_QWORD*)(v639 +
                                                                                                           24) =
                                                                                                    v643;
                                                                                                *(_DWORD*)(v639 +
                                                                                                           32) =
                                                                                                    1128464384;
                                                                                                v684_
                                                                                                    .v684 =
                                                                                                    v639 +
                                                                                                    24;
                                                                                                v684_
                                                                                                    .v685 =
                                                                                                    v639;
                                                                                                atomic_fetch_add_explicit(
                                                                                                    (atomic_ullong* volatile)(v639 +
                                                                                                                              8),
                                                                                                    1u,
                                                                                                    memory_order_relaxed);
                                                                                                *(_QWORD*)(v639 +
                                                                                                           40) =
                                                                                                    v642;
                                                                                                if (*(float*)(v642 +
                                                                                                              24) <
                                                                                                    0x1.8600000000000p+7f) {
                                                                                                  ((void (*)(
                                                                                                      __int64,
                                                                                                      float))
                                                                                                       GameRoutine_ce6d60)(
                                                                                                      v642,
                                                                                                      0x1.8600000000000p+7f);
                                                                                                }
                                                                                                GameRoutine_ce65f0(
                                                                                                    (__int64*)(v642 +
                                                                                                               80),
                                                                                                    &v684_
                                                                                                         .v684);
                                                                                                v728_
                                                                                                    .v728
                                                                                                        [0] =
                                                                                                    (__int64)
                                                                                                        GameData_1fd7c18;
                                                                                                v728_
                                                                                                    .v730 =
                                                                                                    v728_
                                                                                                        .v728;
                                                                                                GameRoutine_ce6740(
                                                                                                    v642,
                                                                                                    (__int64)v728_
                                                                                                        .v728);
                                                                                                if (v728_
                                                                                                        .v730 ==
                                                                                                    v728_
                                                                                                        .v728) {
                                                                                                  v644 =
                                                                                                      32;
                                                                                                }
                                                                                                else {
                                                                                                  if (v728_
                                                                                                          .v730 ==
                                                                                                      nullptr) {
                                                                                                    goto LABEL_1049;
                                                                                                  }
                                                                                                  v644 =
                                                                                                      40;
                                                                                                }
                                                                                                (*(void (**)(
                                                                                                    __int64))(
                                                                                                    *v728_
                                                                                                         .v730 +
                                                                                                    v644))(
                                                                                                    (__int64)v728_
                                                                                                        .v730);
                                                                                              LABEL_1049:
                                                                                                v645 =
                                                                                                    v684_
                                                                                                        .v685;
                                                                                                if (v684_.v685 !=
                                                                                                        0 &&
                                                                                                    atomic_fetch_add(
                                                                                                        (atomic_ullong* volatile)(v684_
                                                                                                                                      .v685 +
                                                                                                                                  8),
                                                                                                        0xFFFFFFFFFFFFFFFFLL) ==
                                                                                                        0) {
                                                                                                  (*(void (**)(
                                                                                                      __int64))(
                                                                                                      *(_QWORD*)
                                                                                                          v645 +
                                                                                                      16LL))(
                                                                                                      v645);
                                                                                                  std___1___shared_weak_count___release_weak(
                                                                                                      v645);
                                                                                                }
                                                                                                if (atomic_fetch_add(
                                                                                                        v640,
                                                                                                        0xFFFFFFFFFFFFFFFFLL) ==
                                                                                                    0) {
                                                                                                  (*(void (**)(
                                                                                                      __int64))(
                                                                                                      *(_QWORD*)
                                                                                                          v641 +
                                                                                                      16LL))(
                                                                                                      v641);
                                                                                                  std___1___shared_weak_count___release_weak(
                                                                                                      v641);
                                                                                                }
                                                                                                v646 =
                                                                                                    0;
                                                                                                v647 =
                                                                                                    GameData_212f4a8
                                                                                                        [0] +
                                                                                                    2;
                                                                                                while (
                                                                                                    1) {
                                                                                                  v648 =
                                                                                                      (float)
                                                                                                          v646 /
                                                                                                      0x1.8000000000000p+4f;
                                                                                                  v649 =
                                                                                                      (float)(fminf(
                                                                                                                  fmaxf(
                                                                                                                      v648,
                                                                                                                      0x0.0p+0f),
                                                                                                                  0x1.0000000000000p+0f) *
                                                                                                              0x1.6666680000000p-1f) +
                                                                                                      0x1.a000000000000p+1f;
                                                                                                  v650 =
                                                                                                      (float)(v648 +
                                                                                                              -0x1.a000000000000p+1f) /
                                                                                                      0x1.6666680000000p-1f;
                                                                                                  if (v650 <=
                                                                                                      0x1.0000000000000p+0f) {
                                                                                                    v651 =
                                                                                                        v650;
                                                                                                  }
                                                                                                  else {
                                                                                                    v651 =
                                                                                                        0x1.0000000000000p+0f;
                                                                                                  }
                                                                                                  v652 =
                                                                                                      (float)(fminf(
                                                                                                                  fmaxf(
                                                                                                                      v651,
                                                                                                                      0x0.0p+0f),
                                                                                                                  0x1.0000000000000p+0f) *
                                                                                                              -0x1.26e9780000000p-6f) +
                                                                                                      0x1.eb851e0000000p-6f;
                                                                                                  if (v650 >=
                                                                                                      0x0.0p+0f) {
                                                                                                    v653 =
                                                                                                        v652;
                                                                                                  }
                                                                                                  else {
                                                                                                    v653 =
                                                                                                        0x1.eb851e0000000p-6f;
                                                                                                  }
                                                                                                  v654 = fw_memory_HeapManager_Allocate(
                                                                                                      *(_QWORD*)
                                                                                                          fw_memory_g_heap_manager_ptr,
                                                                                                      88,
                                                                                                      16,
                                                                                                      0);
                                                                                                  v655 = *(
                                                                                                      _QWORD*)(v3 +
                                                                                                               128);
                                                                                                  *(_QWORD*)(v654 +
                                                                                                             24) =
                                                                                                      v647;
                                                                                                  *(_QWORD*)(v654 +
                                                                                                             8) =
                                                                                                      0;
                                                                                                  v656 =
                                                                                                      (atomic_ullong*)(v654 +
                                                                                                                       8);
                                                                                                  v657 =
                                                                                                      v654;
                                                                                                  *(_QWORD*)(v654 +
                                                                                                             16) =
                                                                                                      0;
                                                                                                  *(_QWORD*)
                                                                                                      v654 =
                                                                                                      GameData_1fe5b18;
                                                                                                  *(_QWORD*)(v654 +
                                                                                                             72) =
                                                                                                      0;
                                                                                                  *(_QWORD*)(v654 +
                                                                                                             80) =
                                                                                                      0;
                                                                                                  *(_QWORD*)(v654 +
                                                                                                             32) =
                                                                                                      0;
                                                                                                  *(_QWORD*)(v654 +
                                                                                                             40) =
                                                                                                      0;
                                                                                                  *(_QWORD*)(v654 +
                                                                                                             48) =
                                                                                                      0;
                                                                                                  *(_QWORD*)(v654 +
                                                                                                             56) =
                                                                                                      0;
                                                                                                  *(_QWORD*)(v654 +
                                                                                                             64) =
                                                                                                      0;
                                                                                                  *(float*)(v654 +
                                                                                                            80) =
                                                                                                      v653;
                                                                                                  v682_
                                                                                                      .v682 =
                                                                                                      v654 +
                                                                                                      24;
                                                                                                  v682_
                                                                                                      .v683 =
                                                                                                      v654;
                                                                                                  *(float*)(v654 +
                                                                                                            32) =
                                                                                                      v649 *
                                                                                                      0x1.e000000000000p+5f;
                                                                                                  atomic_fetch_add_explicit(
                                                                                                      (atomic_ullong* volatile)(v654 +
                                                                                                                                8),
                                                                                                      1u,
                                                                                                      memory_order_relaxed);
                                                                                                  *(_QWORD*)(v654 +
                                                                                                             40) =
                                                                                                      v655;
                                                                                                  if ((float)(v649 *
                                                                                                              0x1.e000000000000p+5f) >
                                                                                                      *(float*)(v655 +
                                                                                                                24)) {
                                                                                                    ((void (*)(
                                                                                                        __int64,
                                                                                                        float))
                                                                                                         GameRoutine_ce6d60)(
                                                                                                        v655,
                                                                                                        v649 *
                                                                                                            0x1.e000000000000p+5f);
                                                                                                  }
                                                                                                  GameRoutine_ce65f0(
                                                                                                      (__int64*)(v655 +
                                                                                                                 80),
                                                                                                      &v682_
                                                                                                           .v682);
                                                                                                  v728_
                                                                                                      .v730 =
                                                                                                      v728_
                                                                                                          .v728;
                                                                                                  v728_
                                                                                                      .v728
                                                                                                          [0] =
                                                                                                      (__int64)
                                                                                                          GameData_1fd7c18;
                                                                                                  GameRoutine_ce6740(
                                                                                                      v655,
                                                                                                      (__int64)v728_
                                                                                                          .v728);
                                                                                                  if (v728_
                                                                                                          .v730 ==
                                                                                                      v728_
                                                                                                          .v728) {
                                                                                                    v658 =
                                                                                                        32;
                                                                                                  }
                                                                                                  else {
                                                                                                    if (v728_
                                                                                                            .v730 ==
                                                                                                        nullptr) {
                                                                                                      goto LABEL_1071;
                                                                                                    }
                                                                                                    v658 =
                                                                                                        40;
                                                                                                  }
                                                                                                  (*(void (**)(
                                                                                                      __int64))(
                                                                                                      *v728_
                                                                                                           .v730 +
                                                                                                      v658))(
                                                                                                      (__int64)v728_
                                                                                                          .v730);
                                                                                                LABEL_1071:
                                                                                                  v659 =
                                                                                                      v682_
                                                                                                          .v683;
                                                                                                  if (v682_.v683 !=
                                                                                                          0 &&
                                                                                                      atomic_fetch_add(
                                                                                                          (atomic_ullong* volatile)(v682_
                                                                                                                                        .v683 +
                                                                                                                                    8),
                                                                                                          0xFFFFFFFFFFFFFFFFLL) ==
                                                                                                          0) {
                                                                                                    (*(void (**)(
                                                                                                        __int64))(
                                                                                                        *(_QWORD*)
                                                                                                            v659 +
                                                                                                        16LL))(
                                                                                                        v659);
                                                                                                    std___1___shared_weak_count___release_weak(
                                                                                                        v659);
                                                                                                  }
                                                                                                  if (atomic_fetch_add(
                                                                                                          v656,
                                                                                                          0xFFFFFFFFFFFFFFFFLL) ==
                                                                                                      0) {
                                                                                                    (*(void (**)(
                                                                                                        __int64))(
                                                                                                        *(_QWORD*)
                                                                                                            v657 +
                                                                                                        16LL))(
                                                                                                        v657);
                                                                                                    std___1___shared_weak_count___release_weak(
                                                                                                        v657);
                                                                                                  }
                                                                                                  if (++v646 ==
                                                                                                      24) {
                                                                                                    v660 = fw_memory_HeapManager_Allocate(
                                                                                                        *(_QWORD*)
                                                                                                            fw_memory_g_heap_manager_ptr,
                                                                                                        80,
                                                                                                        16,
                                                                                                        0);
                                                                                                    *(_QWORD*)(v660 +
                                                                                                               8) =
                                                                                                        0;
                                                                                                    v229 =
                                                                                                        (atomic_ullong*)(v660 +
                                                                                                                         8);
                                                                                                    *(_QWORD*)(v660 +
                                                                                                               16) =
                                                                                                        0;
                                                                                                    v230 =
                                                                                                        v660;
                                                                                                    *(_QWORD*)(v660 +
                                                                                                               32) =
                                                                                                        0;
                                                                                                    *(_QWORD*)(v660 +
                                                                                                               40) =
                                                                                                        0;
                                                                                                    *(_QWORD*)(v660 +
                                                                                                               48) =
                                                                                                        0;
                                                                                                    *(_QWORD*)(v660 +
                                                                                                               56) =
                                                                                                        0;
                                                                                                    *(_QWORD*)
                                                                                                        v660 =
                                                                                                        GameData_1fe5648;
                                                                                                    v661 = GameData_212f488
                                                                                                        [0];
                                                                                                    v662 = *(
                                                                                                        _QWORD*)(v3 +
                                                                                                                 128);
                                                                                                    *(_QWORD*)(v660 +
                                                                                                               64) =
                                                                                                        0;
                                                                                                    *(_QWORD*)(v660 +
                                                                                                               72) =
                                                                                                        0;
                                                                                                    *(_QWORD*)(v660 +
                                                                                                               24) =
                                                                                                        v661 +
                                                                                                        2;
                                                                                                    *(_DWORD*)(v660 +
                                                                                                               32) =
                                                                                                        1131216896;
                                                                                                    v680_
                                                                                                        .v680 =
                                                                                                        v660 +
                                                                                                        24;
                                                                                                    v680_
                                                                                                        .v681 =
                                                                                                        v660;
                                                                                                    atomic_fetch_add_explicit(
                                                                                                        (atomic_ullong* volatile)(v660 +
                                                                                                                                  8),
                                                                                                        1u,
                                                                                                        memory_order_relaxed);
                                                                                                    *(_QWORD*)(v660 +
                                                                                                               40) =
                                                                                                        v662;
                                                                                                    if (*(float*)(v662 +
                                                                                                                  24) <
                                                                                                        0x1.da00000000000p+7f) {
                                                                                                      ((void (*)(
                                                                                                          __int64,
                                                                                                          float))
                                                                                                           GameRoutine_ce6d60)(
                                                                                                          v662,
                                                                                                          0x1.da00000000000p+7f);
                                                                                                    }
                                                                                                    GameRoutine_ce65f0(
                                                                                                        (__int64*)(v662 +
                                                                                                                   80),
                                                                                                        &v680_
                                                                                                             .v680);
                                                                                                    v728_
                                                                                                        .v728
                                                                                                            [0] =
                                                                                                        (__int64)
                                                                                                            GameData_1fd7c18;
                                                                                                    v728_
                                                                                                        .v730 =
                                                                                                        v728_
                                                                                                            .v728;
                                                                                                    GameRoutine_ce6740(
                                                                                                        v662,
                                                                                                        (__int64)v728_
                                                                                                            .v728);
                                                                                                    if (v728_
                                                                                                            .v730 ==
                                                                                                        v728_
                                                                                                            .v728) {
                                                                                                      v663 =
                                                                                                          32;
                                                                                                    LABEL_1080:
                                                                                                      (*(void (**)(
                                                                                                          __int64))(
                                                                                                          *v728_
                                                                                                               .v730 +
                                                                                                          v663))(
                                                                                                          (__int64)v728_
                                                                                                              .v730);
                                                                                                    }
                                                                                                    else if (
                                                                                                        v728_
                                                                                                            .v730 !=
                                                                                                        nullptr) {
                                                                                                      v663 =
                                                                                                          40;
                                                                                                      goto LABEL_1080;
                                                                                                    }
                                                                                                    v234 =
                                                                                                        v680_
                                                                                                            .v681;
                                                                                                    if (v680_
                                                                                                            .v681 ==
                                                                                                        0) {
                                                                                                      goto LABEL_1084;
                                                                                                    }
                                                                                                    goto LABEL_1082;
                                                                                                  }
                                                                                                }
                                                                                              }
                                                                                              v637 =
                                                                                                  40;
                                                                                            }
                                                                                            (*(void (**)(
                                                                                                __int64))(
                                                                                                *v728_
                                                                                                     .v730 +
                                                                                                v637))(
                                                                                                (__int64)v728_
                                                                                                    .v730);
                                                                                            goto LABEL_1037;
                                                                                          }
                                                                                          v627 =
                                                                                              40;
                                                                                        }
                                                                                        (*(void (**)(
                                                                                            __int64))(
                                                                                            *v728_
                                                                                                 .v730 +
                                                                                            v627))(
                                                                                            (__int64)v728_
                                                                                                .v730);
                                                                                        goto LABEL_1022;
                                                                                      }
                                                                                      v617 =
                                                                                          40;
                                                                                    }
                                                                                    (*(void (**)(
                                                                                        __int64))(
                                                                                        *v728_
                                                                                             .v730 +
                                                                                        v617))(
                                                                                        (__int64)v728_
                                                                                            .v730);
                                                                                    goto LABEL_1000;
                                                                                  }
                                                                                  v607 =
                                                                                      40;
                                                                                }
                                                                                (*(void (**)(
                                                                                    __int64))(
                                                                                    *v728_
                                                                                         .v730 +
                                                                                    v607))(
                                                                                    (__int64)v728_
                                                                                        .v730);
                                                                                goto LABEL_983;
                                                                              }
                                                                              v600 =
                                                                                  40;
                                                                            }
                                                                            (*(void (**)(
                                                                                __int64))(
                                                                                *v728_
                                                                                     .v730 +
                                                                                v600))(
                                                                                (__int64)v728_
                                                                                    .v730);
                                                                            goto LABEL_971;
                                                                          }
                                                                          v594 =
                                                                              40;
                                                                        }
                                                                        (*(void (**)(
                                                                            __int64))(
                                                                            *v728_
                                                                                 .v730 +
                                                                            v594))(
                                                                            (__int64)v728_
                                                                                .v730);
                                                                        goto LABEL_959;
                                                                      }
                                                                      v587 = 40;
                                                                    }
                                                                    (*(void (**)(
                                                                        __int64))(
                                                                        *v728_
                                                                             .v730 +
                                                                        v587))(
                                                                        (__int64)v728_
                                                                            .v730);
                                                                    goto LABEL_947;
                                                                  }
                                                                  v581 = 40;
                                                                }
                                                                (*(void (**)(
                                                                    __int64))(
                                                                    *v728_
                                                                         .v730 +
                                                                    v581))(
                                                                    (__int64)v728_
                                                                        .v730);
                                                                goto LABEL_935;
                                                              }
                                                              v574 = 40;
                                                            }
                                                            (*(void (**)(
                                                                __int64))(
                                                                *v728_.v730 +
                                                                v574))(
                                                                (__int64)
                                                                    v728_.v730);
                                                            goto LABEL_923;
                                                          }
                                                          v567 = 40;
                                                        }
                                                        (*(void (**)(__int64))(
                                                            *v728_.v730 +
                                                            v567))(
                                                            (__int64)
                                                                v728_.v730);
                                                        goto LABEL_911;
                                                      }
                                                    }
                                                    v563 = 32;
                                                    goto LABEL_903;
                                                  }
                                                  v552 = 40;
                                                }
                                                (*(void (**)(__int64))(
                                                    *v728_.v730 + v552))(
                                                    (__int64)v728_.v730);
                                                goto LABEL_892;
                                              }
                                              v545 = 40;
                                            }
                                            (*(void (**)(__int64))(*v728_.v730 +
                                                                   v545))(
                                                (__int64)v728_.v730);
                                            goto LABEL_880;
                                          }
                                          v538 = 40;
                                        }
                                        (*(void (**)(__int64))(*v728_.v730 +
                                                               v538))(
                                            (__int64)v728_.v730);
                                        goto LABEL_868;
                                      }
                                      v531 = 40;
                                    }
                                    (*(void (**)(__int64))(*v728_.v730 + v531))(
                                        (__int64)v728_.v730);
                                    goto LABEL_856;
                                  }
                                  v524 = 40;
                                }
                                (*(void (**)(__int64))(*v728_.v730 + v524))(
                                    (__int64)v728_.v730);
                                goto LABEL_844;
                              }
                              v517 = 40;
                            }
                            (*(void (**)(__int64))(*v728_.v730 + v517))(
                                (__int64)v728_.v730);
                            goto LABEL_827;
                          }
                          v507 = 40;
                        }
                        (*(void (**)(__int64))(*v728_.v730 + v507))(
                            (__int64)v728_.v730);
                        goto LABEL_810;
                      }
                      v494 = 40;
                    }
                    (*(void (**)(__int64))(*v728_.v730 + v494))(
                        (__int64)v728_.v730);
                    goto LABEL_793;
                  }
                  v365 = 40;
                }
                (*(void (**)(__int64))(*v728_.v730 + v365))(
                    (__int64)v728_.v730);
                goto LABEL_593;
              }
              v354 = 40;
            }
            (*(void (**)(__int64))(*v728_.v730 + v354))((__int64)v728_.v730);
            goto LABEL_576;
          }
          v341 = 40;
        }
        (*(void (**)(__int64))(*v728_.v730 + v341))((__int64)v728_.v730);
        goto LABEL_559;
      }
      v154 = 40;
    }
    (*(void (**)(__int64))(*v728_.v730 + v154))((__int64)v728_.v730);
    goto LABEL_542;
  }
  if (v88 == 4) {
    LegionGambit_e4d550(v3, 0x1.99999a0000000p-2f);
    LegionGambit_e4d990(v3, 16);
    v108 = fw_memory_HeapManager_Allocate(*v26, 224, 16, 0);
    *(_QWORD*)(v108 + 8) = 0;
    v109 = (atomic_ullong*)(v108 + 8);
    *(_QWORD*)(v108 + 16) = 0;
    *(_QWORD*)(v108 + 40) = 0;
    *(_QWORD*)(v108 + 48) = 0;
    *(_QWORD*)(v108 + 56) = 0;
    *(_QWORD*)(v108 + 64) = 0;
    v110 = v108;
    *(_QWORD*)v108 = GameData_1fe5a38;
    *(_QWORD*)(v108 + 72) = 0;
    *(_QWORD*)(v108 + 80) = 0;
    *(_QWORD*)(v108 + 88) = 0;
    *(_QWORD*)(v108 + 96) = 0;
    *(_QWORD*)(v108 + 104) = 0;
    *(_QWORD*)(v108 + 112) = 0;
    *(_QWORD*)(v108 + 120) = 0;
    *(_QWORD*)(v108 + 128) = 0;
    *(_QWORD*)(v108 + 136) = 0;
    *(_QWORD*)(v108 + 144) = 0;
    *(_QWORD*)(v108 + 152) = 0;
    *(_QWORD*)(v108 + 160) = 0;
    *(_QWORD*)(v108 + 168) = 0;
    *(_QWORD*)(v108 + 176) = 0;
    *(_QWORD*)(v108 + 184) = 0;
    *(_QWORD*)(v108 + 192) = 0;
    *(_QWORD*)(v108 + 200) = 0;
    *(_QWORD*)(v108 + 208) = 0;
    *(_QWORD*)(v108 + 216) = 0;
    *(_QWORD*)(v108 + 32) = 0;
    v111 = *(_QWORD*)(v3 + 128);
    v112 = GameData_212f4a0[0] + 2;
    *(_BYTE*)(v108 + 56) = 18;
    *(_BYTE*)(v108 + 65) = 98;
    *(_BYTE*)(v108 + 104) = 0;
    *(_BYTE*)(v108 + 120) = 0;
    v677_.v677 = v108 + 32;
    v677_.v678 = v108;
    v676[0] = *(_QWORD*)"GambitSub";
    *(_QWORD*)(v108 + 57) = *(_QWORD*)"GambitSub";
    *(_QWORD*)(v108 + 32) = v112;
    *(_DWORD*)(v108 + 40) = 1111490560;
    *(_DWORD*)(v108 + 96) = 82343;
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v108 + 8), 1u,
                              memory_order_relaxed);
    *(_QWORD*)(v108 + 48) = v111;
    if (*(float*)(v111 + 24) < 0x1.8000000000000p+5f) {
      ((void (*)(__int64, float))GameRoutine_ce6d60)(v111,
                                                     0x1.8000000000000p+5f);
    }
    GameRoutine_ce65f0((__int64*)(v111 + 80), &v677_.v677);
    v728_.v728[0] = (__int64)GameData_1fd7c18;
    v728_.v730 = v728_.v728;
    GameRoutine_ce6740(v111, (__int64)v728_.v728);
    if (v728_.v730 == v728_.v728) {
      v113 = 32;
    }
    else {
      if (v728_.v730 == nullptr) {
      LABEL_235:
        v159 = v677_.v678;
        if (v677_.v678 != 0 &&
            atomic_fetch_add((atomic_ullong* volatile)(v677_.v678 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v159 + 16LL))(v159);
          std___1___shared_weak_count___release_weak(v159);
        }
        if (atomic_fetch_add(v109, 0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v110 + 16LL))(v110);
          std___1___shared_weak_count___release_weak(v110);
        }
        v160 = (_QWORD*)fw_memory_HeapManager_Allocate(*v26, 128, 16, 0);
        v160[2] = 0;
        v161 = GameData_212f460[0];
        *v160 = GameData_1fe5338;
        v160[4] = 0;
        v160[5] = 0;
        v160[6] = 0;
        v160[7] = 0;
        v162 = v161 + 2;
        v164 = *(_QWORD*)(v3 + 48);
        v163 = *(_QWORD*)(v3 + 56);
        v160[1] = 0;
        v165 = (atomic_ullong*)(v160 + 1);
        v160[10] = 0;
        v166 = v160 + 10;
        v160[8] = 0;
        v160[9] = 0;
        v160[11] = 0;
        v160[12] = 0;
        v160[13] = 0;
        v160[14] = 0;
        v676[1] = v3 + 41;
        v160[15] = 0;
        v160[3] = v162;
        v167 = v160 + 3;
        *((_DWORD*)v160 + 8) = 1109917696;
        v168 = *(unsigned __int8*)(v3 + 40);
        v169 = (v168 & 1) == 0;
        v170 = v168 >> 1;
        if (v169) {
          v171 = v170;
        }
        else {
          v171 = v164;
        }
        if (v169) {
          v172 = v3 + 41;
        }
        else {
          v172 = v163;
        }
        v173 = v171 + 10;
        if (v171 + 10 >= 0xFFFFFFFFFFFFFFF7LL) {
          goto LABEL_1094;
        }
        v174 = (__int64)v160;
        if (v173 > 0x16) {
          if ((v173 | 7) == 0x17) {
            v177 = 26;
          }
          else {
            v177 = (v173 | 7) + 1;
          }
          v176 = fw_memory_HeapManager_Allocate(*v26, v177, 16, 0);
          v728_.v728[1] = v171 + 10;
          v728_.v728[2] = v176;
          v728_.v728[0] = v177 | 1;
          v175 = v177 | 1;
        }
        else {
          v175 = 2 * v173;
          v176 = 0;
          v728_.v728[1] = 0;
          v728_.v728[2] = 0;
          v728_.v728[0] = (unsigned __int8)(2 * v173);
        }
        if ((v175 & 1) != 0) {
          v178 = (char*)v176;
        }
        else {
          v178 = (char*)v728_.v728 + 1;
        }
        *(_QWORD*)v178 = *(_QWORD*)"Stratagem_";
        *((_WORD*)v178 + 4) = 24429;
        if ((v175 & 1) != 0) {
          v179 = (char*)(v176 + 10);
        }
        else {
          v179 = (char*)&v728_.v728[1] + 3;
        }
        if (v171 != 0) {
          memmove((__int64)v179, v172, v171);
        }
        v179[v171] = 0;
        v180 = (__int64*)GameRoutine_1a09ce0((__int64)v728_.v728,
                                             "_MagicCircleA", 0xDu);
        v181 = *v180;
        v182 = v180[1];
        v183 = v180[2];
        *v180 = 0;
        v180[1] = 0;
        v180[2] = 0;
        if ((*v166 & 1) != 0) {
          v184 = *(_QWORD*)(v174 + 96);
          if (v184 != 0) {
            v185 = 128;
            if (*(_QWORD*)(*v26 + 200) == 0) {
              v185 = 56;
            }
            nn_mem_StandardAllocator_Free(*v26 + v185, v184);
          }
        }
        v186 = v728_.v728[0];
        *(_QWORD*)(v174 + 80) = v181;
        *(_QWORD*)(v174 + 88) = v182;
        *(_QWORD*)(v174 + 96) = v183;
        if ((v186 & 1) != 0 && v728_.v728[2] != 0) {
          v187 = 128;
          if (*(_QWORD*)(*v26 + 200) == 0) {
            v187 = 56;
          }
          nn_mem_StandardAllocator_Free(*v26 + v187, v728_.v728[2]);
        }
        if ((*(_BYTE*)(v174 + 104) & 1) != 0) {
          *(_QWORD*)(v174 + 112) = 11;
          v188 = *(char**)(v174 + 120);
        }
        else {
          *(_BYTE*)(v174 + 104) = 22;
          v188 = (char*)(v174 + 105);
        }
        strcpy(v188, "Loc_C_Trans");
        v726_.v726 = (__int64)v167;
        v726_.v727 = v174;
        v189 = *(_QWORD*)(v3 + 128);
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v174 + 8), 1u,
                                  memory_order_relaxed);
        v190 = *(float*)(v174 + 32);
        *(_QWORD*)(v174 + 40) = v189;
        if (v190 > *(float*)(v189 + 24)) {
          ((void (*)(__int64))GameRoutine_ce6d60)(v189);
        }
        GameRoutine_ce65f0((__int64*)(v189 + 80), &v726_.v726);
        v728_.v728[0] = (__int64)GameData_1fd7c18;
        v728_.v730 = v728_.v728;
        GameRoutine_ce6740(v189, (__int64)v728_.v728);
        if (v728_.v730 == v728_.v728) {
          v191 = 32;
        }
        else {
          if (v728_.v730 == nullptr) {
          LABEL_603:
            v372 = v726_.v727;
            if (v726_.v727 != 0 &&
                atomic_fetch_add((atomic_ullong* volatile)(v726_.v727 + 8),
                                 0xFFFFFFFFFFFFFFFFLL) == 0) {
              (*(void (**)(__int64))(*(_QWORD*)v372 + 16LL))(v372);
              std___1___shared_weak_count___release_weak(v372);
            }
            if (atomic_fetch_add(v165, 0xFFFFFFFFFFFFFFFFLL) == 0) {
              (*(void (**)(__int64))(*(_QWORD*)v174 + 16LL))(v174);
              std___1___shared_weak_count___release_weak(v174);
            }
            v373 = fw_memory_HeapManager_Allocate(*v26, 128, 16, 0);
            *(_QWORD*)(v373 + 16) = 0;
            v374 = GameData_212f4b0[0];
            *(_QWORD*)v373 = GameData_1fe5ce8;
            *(_QWORD*)(v373 + 32) = 0;
            *(_QWORD*)(v373 + 40) = 0;
            *(_QWORD*)(v373 + 48) = 0;
            *(_QWORD*)(v373 + 56) = 0;
            v375 = v676[1];
            *(_QWORD*)(v373 + 8) = 0;
            v376 = (atomic_ullong*)(v373 + 8);
            *(_QWORD*)(v373 + 80) = 0;
            v377 = (_BYTE*)(v373 + 80);
            *(_QWORD*)(v373 + 64) = 0;
            *(_QWORD*)(v373 + 72) = 0;
            *(_QWORD*)(v373 + 88) = 0;
            *(_QWORD*)(v373 + 96) = 0;
            *(_QWORD*)(v373 + 104) = 0;
            *(_QWORD*)(v373 + 112) = 0;
            *(_QWORD*)(v373 + 120) = 0;
            *(_QWORD*)(v373 + 24) = v374 + 2;
            v378 = v373 + 24;
            *(_BYTE*)(v373 + 57) = 98;
            v380 = *(_QWORD*)(v3 + 48);
            v379 = *(_QWORD*)(v3 + 56);
            *(_DWORD*)(v373 + 32) = 1109917696;
            *(_BYTE*)(v373 + 48) = 18;
            v381 = *(unsigned __int8*)(v3 + 40);
            v382 = (v381 & 1) == 0;
            v383 = v381 >> 1;
            if (v382) {
              v384 = v383;
            }
            else {
              v384 = v380;
            }
            if (v382) {
              v385 = v375;
            }
            else {
              v385 = v379;
            }
            v386 = v384 + 10;
            *(_QWORD*)(v373 + 49) = v676[0];
            if (v384 + 10 >= 0xFFFFFFFFFFFFFFF7LL) {
              goto LABEL_1094;
            }
            v387 = v373;
            if (v386 > 0x16) {
              if ((v386 | 7) == 0x17) {
                v390 = 26;
              }
              else {
                v390 = (v386 | 7) + 1;
              }
              v389 = fw_memory_HeapManager_Allocate(*v26, v390, 16, 0);
              v728_.v728[1] = v384 + 10;
              v728_.v728[2] = v389;
              v728_.v728[0] = v390 | 1;
              v388 = v390 | 1;
            }
            else {
              v388 = 2 * v386;
              v389 = 0;
              v728_.v728[1] = 0;
              v728_.v728[2] = 0;
              v728_.v728[0] = (unsigned __int8)(2 * v386);
            }
            if ((v388 & 1) != 0) {
              v391 = (char*)v389;
            }
            else {
              v391 = (char*)v728_.v728 + 1;
            }
            *(_QWORD*)v391 = *(_QWORD*)"Stratagem_";
            *((_WORD*)v391 + 4) = 24429;
            if ((v388 & 1) != 0) {
              v392 = (char*)(v389 + 10);
            }
            else {
              v392 = (char*)&v728_.v728[1] + 3;
            }
            if (v384 != 0) {
              memmove((__int64)v392, v385, v384);
            }
            v392[v384] = 0;
            v393 = (__int64*)GameRoutine_1a09ce0((__int64)v728_.v728,
                                                 "_MagicCircleB", 0xDu);
            v394 = *v393;
            v395 = v393[1];
            v396 = v393[2];
            *v393 = 0;
            v393[1] = 0;
            v393[2] = 0;
            if ((*v377 & 1) != 0) {
              v397 = *(_QWORD*)(v387 + 96);
              if (v397 != 0) {
                v398 = 128;
                if (*(_QWORD*)(*v26 + 200) == 0) {
                  v398 = 56;
                }
                nn_mem_StandardAllocator_Free(*v26 + v398, v397);
              }
            }
            v399 = v728_.v728[0];
            *(_QWORD*)(v387 + 80) = v394;
            *(_QWORD*)(v387 + 88) = v395;
            *(_QWORD*)(v387 + 96) = v396;
            if ((v399 & 1) != 0 && v728_.v728[2] != 0) {
              v400 = 128;
              if (*(_QWORD*)(*v26 + 200) == 0) {
                v400 = 56;
              }
              nn_mem_StandardAllocator_Free(*v26 + v400, v728_.v728[2]);
            }
            if ((*(_BYTE*)(v387 + 104) & 1) != 0) {
              *(_QWORD*)(v387 + 112) = 11;
              v401 = *(char**)(v387 + 120);
            }
            else {
              *(_BYTE*)(v387 + 104) = 22;
              v401 = (char*)(v387 + 105);
            }
            strcpy(v401, "Loc_C_Trans");
            v724_.v724 = v378;
            v724_.v725 = v387;
            v402 = *(_QWORD*)(v3 + 128);
            atomic_fetch_add_explicit((atomic_ullong* volatile)(v387 + 8), 1u,
                                      memory_order_relaxed);
            v403 = *(float*)(v387 + 32);
            *(_QWORD*)(v387 + 40) = v402;
            if (v403 > *(float*)(v402 + 24)) {
              ((void (*)(__int64))GameRoutine_ce6d60)(v402);
            }
            GameRoutine_ce65f0((__int64*)(v402 + 80), &v724_.v724);
            v728_.v728[0] = (__int64)GameData_1fd7c18;
            v728_.v730 = v728_.v728;
            GameRoutine_ce6740(v402, (__int64)v728_.v728);
            if (v728_.v730 == v728_.v728) {
              v404 = 32;
            }
            else {
              if (v728_.v730 == nullptr) {
                goto LABEL_649;
              }
              v404 = 40;
            }
            (*(void (**)(__int64))(*v728_.v730 + v404))((__int64)v728_.v730);
          LABEL_649:
            v405 = v724_.v725;
            if (v724_.v725 != 0 &&
                atomic_fetch_add((atomic_ullong* volatile)(v724_.v725 + 8),
                                 0xFFFFFFFFFFFFFFFFLL) == 0) {
              (*(void (**)(__int64))(*(_QWORD*)v405 + 16LL))(v405);
              std___1___shared_weak_count___release_weak(v405);
            }
            if (atomic_fetch_add(v376, 0xFFFFFFFFFFFFFFFFLL) == 0) {
              (*(void (**)(__int64))(*(_QWORD*)v387 + 16LL))(v387);
              std___1___shared_weak_count___release_weak(v387);
            }
            v406 = 0;
            v407 = GameData_212f4a8[0] + 2;
            while (1) {
              v408 = (float)v406 / 0x1.8000000000000p+4f;
              v409 =
                  (float)(fminf(fmaxf(v408, 0x0.0p+0f), 0x1.0000000000000p+0f) *
                          0x1.19999c0000000p+0f) +
                  0x1.0000000000000p+1f;
              v410 = (float)(v408 + -0x1.0000000000000p+1f) /
                     0x1.19999c0000000p+0f;
              if (v410 <= 0x1.0000000000000p+0f) {
                v411 = v410;
              }
              else {
                v411 = 0x1.0000000000000p+0f;
              }
              v412 =
                  (float)(fminf(fmaxf(v411, 0x0.0p+0f), 0x1.0000000000000p+0f) *
                          0x1.47ae160000000p-7f) +
                  0x1.eb851e0000000p-7f;
              if (v410 >= 0x0.0p+0f) {
                v413 = v412;
              }
              else {
                v413 = 0x1.eb851e0000000p-7f;
              }
              v414 = fw_memory_HeapManager_Allocate(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr, 88, 16, 0);
              v415 = *(_QWORD*)(v3 + 128);
              *(_QWORD*)(v414 + 24) = v407;
              *(_QWORD*)(v414 + 8) = 0;
              v416 = (atomic_ullong*)(v414 + 8);
              v417 = v414;
              *(_QWORD*)(v414 + 16) = 0;
              *(_QWORD*)v414 = GameData_1fe5b18;
              *(_QWORD*)(v414 + 72) = 0;
              *(_QWORD*)(v414 + 80) = 0;
              *(_QWORD*)(v414 + 32) = 0;
              *(_QWORD*)(v414 + 40) = 0;
              *(_QWORD*)(v414 + 48) = 0;
              *(_QWORD*)(v414 + 56) = 0;
              *(_QWORD*)(v414 + 64) = 0;
              *(float*)(v414 + 80) = v413;
              v722_.v722 = v414 + 24;
              v722_.v723 = v414;
              *(float*)(v414 + 32) = v409 * 0x1.e000000000000p+5f;
              atomic_fetch_add_explicit((atomic_ullong* volatile)(v414 + 8), 1u,
                                        memory_order_relaxed);
              *(_QWORD*)(v414 + 40) = v415;
              if ((float)(v409 * 0x1.e000000000000p+5f) >
                  *(float*)(v415 + 24)) {
                ((void (*)(__int64, float))GameRoutine_ce6d60)(
                    v415, v409 * 0x1.e000000000000p+5f);
              }
              GameRoutine_ce65f0((__int64*)(v415 + 80), &v722_.v722);
              v728_.v730 = v728_.v728;
              v728_.v728[0] = (__int64)GameData_1fd7c18;
              GameRoutine_ce6740(v415, (__int64)v728_.v728);
              if (v728_.v730 == v728_.v728) {
                v418 = 32;
              }
              else {
                if (v728_.v730 == nullptr) {
                  goto LABEL_671;
                }
                v418 = 40;
              }
              (*(void (**)(__int64))(*v728_.v730 + v418))((__int64)v728_.v730);
            LABEL_671:
              v419 = v722_.v723;
              if (v722_.v723 != 0 &&
                  atomic_fetch_add((atomic_ullong* volatile)(v722_.v723 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
                (*(void (**)(__int64))(*(_QWORD*)v419 + 16LL))(v419);
                std___1___shared_weak_count___release_weak(v419);
              }
              if (atomic_fetch_add(v416, 0xFFFFFFFFFFFFFFFFLL) == 0) {
                (*(void (**)(__int64))(*(_QWORD*)v417 + 16LL))(v417);
                std___1___shared_weak_count___release_weak(v417);
              }
              if (++v406 == 24) {
                v420 = (_QWORD*)fw_memory_HeapManager_Allocate(
                    *(_QWORD*)fw_memory_g_heap_manager_ptr, 128, 16, 0);
                v420[1] = 0;
                v421 = (atomic_ullong*)(v420 + 1);
                v420[2] = 0;
                *v420 = GameData_1fe5338;
                v422 = GameData_212f460[0];
                v420[4] = 0;
                v420[5] = 0;
                v424 = *(_QWORD*)(v3 + 48);
                v423 = *(_QWORD*)(v3 + 56);
                v425 = v676[1];
                v420[10] = 0;
                v426 = v420 + 10;
                v420[6] = 0;
                v420[7] = 0;
                v420[8] = 0;
                v420[9] = 0;
                v420[11] = 0;
                v420[12] = 0;
                v420[13] = 0;
                v420[14] = 0;
                v420[15] = 0;
                v420[3] = v422 + 2;
                v427 = v420 + 3;
                *((_DWORD*)v420 + 8) = 1128660993;
                v428 = *(unsigned __int8*)(v3 + 40);
                v429 = (v428 & 1) == 0;
                v430 = v428 >> 1;
                if (v429) {
                  v431 = v430;
                }
                else {
                  v431 = v424;
                }
                if (v429) {
                  v432 = v425;
                }
                else {
                  v432 = v423;
                }
                v433 = v431 + 10;
                if (v431 + 10 < 0xFFFFFFFFFFFFFFF7LL) {
                  v434 = (__int64)v420;
                  if (v433 > 0x16) {
                    if ((v433 | 7) == 0x17) {
                      v437 = 26;
                    }
                    else {
                      v437 = (v433 | 7) + 1;
                    }
                    v436 = fw_memory_HeapManager_Allocate(
                        *(_QWORD*)fw_memory_g_heap_manager_ptr, v437, 16, 0);
                    v728_.v728[1] = v431 + 10;
                    v728_.v728[2] = v436;
                    v728_.v728[0] = v437 | 1;
                    v435 = v437 | 1;
                  }
                  else {
                    v435 = 2 * v433;
                    v436 = 0;
                    v728_.v728[1] = 0;
                    v728_.v728[2] = 0;
                    v728_.v728[0] = (unsigned __int8)(2 * v433);
                  }
                  if ((v435 & 1) != 0) {
                    v438 = (char*)v436;
                  }
                  else {
                    v438 = (char*)v728_.v728 + 1;
                  }
                  *(_QWORD*)v438 = *(_QWORD*)"Stratagem_";
                  *((_WORD*)v438 + 4) = 24429;
                  if ((v435 & 1) != 0) {
                    v439 = (char*)(v436 + 10);
                  }
                  else {
                    v439 = (char*)&v728_.v728[1] + 3;
                  }
                  if (v431 != 0) {
                    memmove((__int64)v439, v432, v431);
                  }
                  v439[v431] = 0;
                  v440 = (__int64*)GameRoutine_1a09ce0((__int64)v728_.v728,
                                                       "_MagicCircleC", 0xDu);
                  v441 = *v440;
                  v442 = v440[1];
                  v443 = v440[2];
                  *v440 = 0;
                  v440[1] = 0;
                  v440[2] = 0;
                  v444 = (__int64*)fw_memory_g_heap_manager_ptr;
                  if ((*v426 & 1) != 0) {
                    v445 = *(_QWORD*)(v434 + 96);
                    if (v445 != 0) {
                      v446 = 128;
                      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                     200LL) == 0) {
                        v446 = 56;
                      }
                      nn_mem_StandardAllocator_Free(
                          *(_QWORD*)fw_memory_g_heap_manager_ptr + v446, v445);
                    }
                  }
                  v447 = v728_.v728[0];
                  *(_QWORD*)(v434 + 80) = v441;
                  *(_QWORD*)(v434 + 88) = v442;
                  *(_QWORD*)(v434 + 96) = v443;
                  if ((v447 & 1) != 0 && v728_.v728[2] != 0) {
                    v448 = 128;
                    if (*(_QWORD*)(*v444 + 200) == 0) {
                      v448 = 56;
                    }
                    nn_mem_StandardAllocator_Free(*v444 + v448, v728_.v728[2]);
                  }
                  if ((*(_BYTE*)(v434 + 104) & 1) != 0) {
                    *(_QWORD*)(v434 + 112) = 11;
                    v449 = *(char**)(v434 + 120);
                  }
                  else {
                    *(_BYTE*)(v434 + 104) = 22;
                    v449 = (char*)(v434 + 105);
                  }
                  strcpy(v449, "Loc_C_Trans");
                  v720_.v720 = (__int64)v427;
                  v720_.v721 = v434;
                  v450 = *(_QWORD*)(v3 + 128);
                  atomic_fetch_add_explicit((atomic_ullong* volatile)(v434 + 8),
                                            1u, memory_order_relaxed);
                  v451 = *(float*)(v434 + 32);
                  *(_QWORD*)(v434 + 40) = v450;
                  if (v451 > *(float*)(v450 + 24)) {
                    ((void (*)(__int64))GameRoutine_ce6d60)(v450);
                  }
                  GameRoutine_ce65f0((__int64*)(v450 + 80), &v720_.v720);
                  v728_.v728[0] = (__int64)GameData_1fd7c18;
                  v728_.v730 = v728_.v728;
                  GameRoutine_ce6740(v450, (__int64)v728_.v728);
                  if (v728_.v730 == v728_.v728) {
                    v452 = 32;
                  LABEL_714:
                    (*(void (**)(__int64))(*v728_.v730 + v452))(
                        (__int64)v728_.v730);
                  }
                  else if (v728_.v730 != nullptr) {
                    v452 = 40;
                    goto LABEL_714;
                  }
                  v453 = v720_.v721;
                  if (v720_.v721 != 0 &&
                      atomic_fetch_add(
                          (atomic_ullong* volatile)(v720_.v721 + 8),
                          0xFFFFFFFFFFFFFFFFLL) == 0) {
                    (*(void (**)(__int64))(*(_QWORD*)v453 + 16LL))(v453);
                    std___1___shared_weak_count___release_weak(v453);
                  }
                  if (atomic_fetch_add(v421, 0xFFFFFFFFFFFFFFFFLL) == 0) {
                    (*(void (**)(__int64))(*(_QWORD*)v434 + 16LL))(v434);
                    std___1___shared_weak_count___release_weak(v434);
                  }
                  v454 = fw_memory_HeapManager_Allocate(*v444, 104, 16, 0);
                  *(_QWORD*)(v454 + 8) = 0;
                  v455 = (atomic_ullong*)(v454 + 8);
                  *(_QWORD*)(v454 + 16) = 0;
                  *(_QWORD*)(v454 + 32) = 0;
                  *(_QWORD*)(v454 + 40) = 0;
                  v456 = v454;
                  *(_QWORD*)v454 = GameData_1fe4f48;
                  *(_QWORD*)(v454 + 48) = 0;
                  *(_QWORD*)(v454 + 56) = 0;
                  *(_QWORD*)(v454 + 64) = 0;
                  *(_QWORD*)(v454 + 72) = 0;
                  *(_QWORD*)(v454 + 96) = 0;
                  v457 = *(_QWORD*)(v3 + 128);
                  v458 = GameData_212f430[0] + 2;
                  *(_DWORD*)(v454 + 32) = 1129054208;
                  *(_QWORD*)(v454 + 24) = v458;
                  *(_QWORD*)(v454 + 80) = 0x3D4CCCCD00000002LL;
                  *(_QWORD*)(v454 + 88) = 0x3F8000003F800000LL;
                  v718_.v718 = v454 + 24;
                  v718_.v719 = v454;
                  atomic_fetch_add_explicit((atomic_ullong* volatile)(v454 + 8),
                                            1u, memory_order_relaxed);
                  *(_QWORD*)(v454 + 40) = v457;
                  if (*(float*)(v457 + 24) < 0x1.9800000000000p+7f) {
                    ((void (*)(__int64, float))GameRoutine_ce6d60)(
                        v457, 0x1.9800000000000p+7f);
                  }
                  GameRoutine_ce65f0((__int64*)(v457 + 80), &v718_.v718);
                  v728_.v728[0] = (__int64)GameData_1fd7c18;
                  v728_.v730 = v728_.v728;
                  GameRoutine_ce6740(v457, (__int64)v728_.v728);
                  if (v728_.v730 == v728_.v728) {
                    v459 = 32;
                  LABEL_726:
                    (*(void (**)(__int64))(*v728_.v730 + v459))(
                        (__int64)v728_.v730);
                  }
                  else if (v728_.v730 != nullptr) {
                    v459 = 40;
                    goto LABEL_726;
                  }
                  v460 = v718_.v719;
                  if (v718_.v719 != 0 &&
                      atomic_fetch_add(
                          (atomic_ullong* volatile)(v718_.v719 + 8),
                          0xFFFFFFFFFFFFFFFFLL) == 0) {
                    (*(void (**)(__int64))(*(_QWORD*)v460 + 16LL))(v460);
                    std___1___shared_weak_count___release_weak(v460);
                  }
                  if (atomic_fetch_add(v455, 0xFFFFFFFFFFFFFFFFLL) == 0) {
                    (*(void (**)(__int64))(*(_QWORD*)v456 + 16LL))(v456);
                    std___1___shared_weak_count___release_weak(v456);
                  }
                  v461 = fw_memory_HeapManager_Allocate(*v444, 88, 16, 0);
                  *(_QWORD*)(v461 + 8) = 0;
                  v462 = (atomic_ullong*)(v461 + 8);
                  *(_QWORD*)(v461 + 16) = 0;
                  v463 = v461;
                  *(_QWORD*)v461 = GameData_1fe5528;
                  *(_QWORD*)(v461 + 72) = 0;
                  *(_QWORD*)(v461 + 80) = 0;
                  *(_QWORD*)(v461 + 32) = 0;
                  *(_QWORD*)(v461 + 40) = 0;
                  *(_QWORD*)(v461 + 48) = 0;
                  *(_QWORD*)(v461 + 56) = 0;
                  *(_QWORD*)(v461 + 64) = 0;
                  v464 = *(_QWORD*)(v3 + 128);
                  v465 = GameData_212f478[0] + 2;
                  *(_DWORD*)(v461 + 80) = 1045220557;
                  *(_QWORD*)(v461 + 24) = v465;
                  *(_DWORD*)(v461 + 32) = 1129054208;
                  v716_.v716 = v461 + 24;
                  v716_.v717 = v461;
                  atomic_fetch_add_explicit((atomic_ullong* volatile)(v461 + 8),
                                            1u, memory_order_relaxed);
                  *(_QWORD*)(v461 + 40) = v464;
                  if (*(float*)(v464 + 24) < 0x1.9800000000000p+7f) {
                    ((void (*)(__int64, float))GameRoutine_ce6d60)(
                        v464, 0x1.9800000000000p+7f);
                  }
                  GameRoutine_ce65f0((__int64*)(v464 + 80), &v716_.v716);
                  v728_.v730 = v728_.v728;
                  v728_.v728[0] = (__int64)GameData_1fd7c18;
                  GameRoutine_ce6740(v464, (__int64)v728_.v728);
                  if (v728_.v730 == v728_.v728) {
                    v466 = 32;
                  LABEL_738:
                    (*(void (**)(__int64))(*v728_.v730 + v466))(
                        (__int64)v728_.v730);
                  }
                  else if (v728_.v730 != nullptr) {
                    v466 = 40;
                    goto LABEL_738;
                  }
                  v467 = v716_.v717;
                  if (v716_.v717 != 0 &&
                      atomic_fetch_add(
                          (atomic_ullong* volatile)(v716_.v717 + 8),
                          0xFFFFFFFFFFFFFFFFLL) == 0) {
                    (*(void (**)(__int64))(*(_QWORD*)v467 + 16LL))(v467);
                    std___1___shared_weak_count___release_weak(v467);
                  }
                  if (atomic_fetch_add(v462, 0xFFFFFFFFFFFFFFFFLL) == 0) {
                    (*(void (**)(__int64))(*(_QWORD*)v463 + 16LL))(v463);
                    std___1___shared_weak_count___release_weak(v463);
                  }
                  v468 = fw_memory_HeapManager_Allocate(*v444, 224, 16, 0);
                  *(_QWORD*)(v468 + 8) = 0;
                  v469 = (atomic_ullong*)(v468 + 8);
                  *(_QWORD*)(v468 + 16) = 0;
                  *(_QWORD*)(v468 + 40) = 0;
                  *(_QWORD*)(v468 + 48) = 0;
                  v470 = v468;
                  *(_QWORD*)(v468 + 56) = 0;
                  *(_QWORD*)(v468 + 64) = 0;
                  *(_QWORD*)(v468 + 72) = 0;
                  *(_QWORD*)(v468 + 80) = 0;
                  *(_QWORD*)v468 = GameData_1fe5a38;
                  *(_QWORD*)(v468 + 88) = 0;
                  *(_QWORD*)(v468 + 96) = 0;
                  *(_QWORD*)(v468 + 104) = 0;
                  *(_QWORD*)(v468 + 112) = 0;
                  *(_QWORD*)(v468 + 120) = 0;
                  *(_QWORD*)(v468 + 128) = 0;
                  *(_QWORD*)(v468 + 136) = 0;
                  *(_QWORD*)(v468 + 144) = 0;
                  *(_QWORD*)(v468 + 152) = 0;
                  *(_QWORD*)(v468 + 160) = 0;
                  *(_QWORD*)(v468 + 168) = 0;
                  *(_QWORD*)(v468 + 176) = 0;
                  *(_QWORD*)(v468 + 184) = 0;
                  *(_QWORD*)(v468 + 192) = 0;
                  *(_QWORD*)(v468 + 200) = 0;
                  *(_QWORD*)(v468 + 208) = 0;
                  *(_QWORD*)(v468 + 216) = 0;
                  *(_QWORD*)(v468 + 32) = 0;
                  v471 = *(_QWORD*)(v3 + 128);
                  v472 = GameData_212f4a0[0] + 2;
                  *(_BYTE*)(v468 + 56) = 18;
                  *(_BYTE*)(v468 + 65) = 98;
                  *(_BYTE*)(v468 + 104) = 0;
                  *(_BYTE*)(v468 + 120) = 0;
                  v714_.v714 = v468 + 32;
                  v714_.v715 = v468;
                  *(_QWORD*)(v468 + 57) = v676[0];
                  *(_QWORD*)(v468 + 32) = v472;
                  *(_DWORD*)(v468 + 40) = 1129054208;
                  *(_DWORD*)(v468 + 96) = 2017201876;
                  atomic_fetch_add_explicit((atomic_ullong* volatile)(v468 + 8),
                                            1u, memory_order_relaxed);
                  *(_QWORD*)(v468 + 48) = v471;
                  if (*(float*)(v471 + 24) < 0x1.9800000000000p+7f) {
                    ((void (*)(__int64, float))GameRoutine_ce6d60)(
                        v471, 0x1.9800000000000p+7f);
                  }
                  GameRoutine_ce65f0((__int64*)(v471 + 80), &v714_.v714);
                  v728_.v728[0] = (__int64)GameData_1fd7c18;
                  v728_.v730 = v728_.v728;
                  GameRoutine_ce6740(v471, (__int64)v728_.v728);
                  if (v728_.v730 == v728_.v728) {
                    v473 = 32;
                  LABEL_750:
                    (*(void (**)(__int64))(*v728_.v730 + v473))(
                        (__int64)v728_.v730);
                  }
                  else if (v728_.v730 != nullptr) {
                    v473 = 40;
                    goto LABEL_750;
                  }
                  v474 = v714_.v715;
                  if (v714_.v715 != 0 &&
                      atomic_fetch_add(
                          (atomic_ullong* volatile)(v714_.v715 + 8),
                          0xFFFFFFFFFFFFFFFFLL) == 0) {
                    (*(void (**)(__int64))(*(_QWORD*)v474 + 16LL))(v474);
                    std___1___shared_weak_count___release_weak(v474);
                  }
                  if (atomic_fetch_add(v469, 0xFFFFFFFFFFFFFFFFLL) == 0) {
                    (*(void (**)(__int64))(*(_QWORD*)v470 + 16LL))(v470);
                    std___1___shared_weak_count___release_weak(v470);
                  }
                  v475 = 0;
                  LODWORD(v676[1]) = 1079613850;
                  LODWORD(v676[0]) = -1067869798;
                  v476 = GameData_212f4a8[0] + 2;
                  while (2) {
                    v477 = (float)v475 / 0x1.4000000000000p+4f;
                    v478 = *(float*)&v676[1] +
                           (float)(fminf(fmaxf(v477, 0x0.0p+0f),
                                         0x1.0000000000000p+0f) *
                                   0x1.6666600000000p-1f);
                    v479 =
                        (float)(v477 + *(float*)v676) / 0x1.6666600000000p-1f;
                    if (v479 <= 0x1.0000000000000p+0f) {
                      v480 = v479;
                    }
                    else {
                      v480 = 0x1.0000000000000p+0f;
                    }
                    if (v479 >= 0x0.0p+0f) {
                      v481 = v480;
                    }
                    else {
                      v481 = 0x0.0p+0f;
                    }
                    v482 =
                        (float)(fminf(fmaxf(powf(v481, 0x1.99999a0000000p-1f),
                                            0x0.0p+0f),
                                      0x1.0000000000000p+0f) *
                                -0x1.6872b00000000p-4f) +
                        0x1.cac0840000000p-4f;
                    v483 = fw_memory_HeapManager_Allocate(
                        *(_QWORD*)fw_memory_g_heap_manager_ptr, 88, 16, 0);
                    v484 = *(_QWORD*)(v3 + 128);
                    *(_QWORD*)(v483 + 24) = v476;
                    *(_QWORD*)(v483 + 8) = 0;
                    v485 = (atomic_ullong*)(v483 + 8);
                    v486 = v483;
                    *(_QWORD*)(v483 + 16) = 0;
                    *(_QWORD*)v483 = GameData_1fe5b18;
                    *(_QWORD*)(v483 + 72) = 0;
                    *(_QWORD*)(v483 + 80) = 0;
                    *(_QWORD*)(v483 + 32) = 0;
                    *(_QWORD*)(v483 + 40) = 0;
                    *(_QWORD*)(v483 + 48) = 0;
                    *(_QWORD*)(v483 + 56) = 0;
                    *(_QWORD*)(v483 + 64) = 0;
                    *(float*)(v483 + 80) = v482;
                    v712_.v712 = v483 + 24;
                    v712_.v713 = v483;
                    *(float*)(v483 + 32) = v478 * 0x1.e000000000000p+5f;
                    atomic_fetch_add_explicit(
                        (atomic_ullong* volatile)(v483 + 8), 1u,
                        memory_order_relaxed);
                    *(_QWORD*)(v483 + 40) = v484;
                    if ((float)(v478 * 0x1.e000000000000p+5f) >
                        *(float*)(v484 + 24)) {
                      ((void (*)(__int64, float))GameRoutine_ce6d60)(
                          v484, v478 * 0x1.e000000000000p+5f);
                    }
                    GameRoutine_ce65f0((__int64*)(v484 + 80), &v712_.v712);
                    v728_.v730 = v728_.v728;
                    v728_.v728[0] = (__int64)GameData_1fd7c18;
                    GameRoutine_ce6740(v484, (__int64)v728_.v728);
                    if (v728_.v730 == v728_.v728) {
                      v487 = 32;
                    LABEL_772:
                      (*(void (**)(__int64))(*v728_.v730 + v487))(
                          (__int64)v728_.v730);
                    }
                    else if (v728_.v730 != nullptr) {
                      v487 = 40;
                      goto LABEL_772;
                    }
                    v488 = v712_.v713;
                    if (v712_.v713 != 0 &&
                        atomic_fetch_add(
                            (atomic_ullong* volatile)(v712_.v713 + 8),
                            0xFFFFFFFFFFFFFFFFLL) == 0) {
                      (*(void (**)(__int64))(*(_QWORD*)v488 + 16LL))(v488);
                      std___1___shared_weak_count___release_weak(v488);
                    }
                    if (atomic_fetch_add(v485, 0xFFFFFFFFFFFFFFFFLL) == 0) {
                      (*(void (**)(__int64))(*(_QWORD*)v486 + 16LL))(v486);
                      std___1___shared_weak_count___release_weak(v486);
                    }
                    if (++v475 == 20) {
                      v489 = fw_memory_HeapManager_Allocate(
                          *(_QWORD*)fw_memory_g_heap_manager_ptr, 80, 16, 0);
                      *(_QWORD*)(v489 + 8) = 0;
                      v229 = (atomic_ullong*)(v489 + 8);
                      *(_QWORD*)(v489 + 16) = 0;
                      v230 = v489;
                      *(_QWORD*)(v489 + 32) = 0;
                      *(_QWORD*)(v489 + 40) = 0;
                      *(_QWORD*)(v489 + 48) = 0;
                      *(_QWORD*)(v489 + 56) = 0;
                      *(_QWORD*)v489 = GameData_1fe5648;
                      v490 = GameData_212f488[0];
                      v491 = *(_QWORD*)(v3 + 128);
                      *(_QWORD*)(v489 + 64) = 0;
                      *(_QWORD*)(v489 + 72) = 0;
                      *(_QWORD*)(v489 + 24) = v490 + 2;
                      *(_DWORD*)(v489 + 32) = 1133314048;
                      v710_.v710 = v489 + 24;
                      v710_.v711 = v489;
                      atomic_fetch_add_explicit(
                          (atomic_ullong* volatile)(v489 + 8), 1u,
                          memory_order_relaxed);
                      *(_QWORD*)(v489 + 40) = v491;
                      if (*(float*)(v491 + 24) < 0x1.1a00000000000p+8f) {
                        ((void (*)(__int64, float))GameRoutine_ce6d60)(
                            v491, 0x1.1a00000000000p+8f);
                      }
                      GameRoutine_ce65f0((__int64*)(v491 + 80), &v710_.v710);
                      v728_.v728[0] = (__int64)GameData_1fd7c18;
                      v728_.v730 = v728_.v728;
                      GameRoutine_ce6740(v491, (__int64)v728_.v728);
                      if (v728_.v730 == v728_.v728) {
                        v492 = 32;
                      LABEL_782:
                        (*(void (**)(__int64))(*v728_.v730 + v492))(
                            (__int64)v728_.v730);
                      }
                      else if (v728_.v730 != nullptr) {
                        v492 = 40;
                        goto LABEL_782;
                      }
                      v234 = v710_.v711;
                      if (v710_.v711 == 0) {
                      LABEL_1084:
                        if (atomic_fetch_add(v229, 0xFFFFFFFFFFFFFFFFLL) == 0) {
                          goto LABEL_1085;
                        }
                        goto LABEL_1086;
                      }
                    LABEL_1082:
                      if (atomic_fetch_add((atomic_ullong* volatile)(v234 + 8),
                                           0xFFFFFFFFFFFFFFFFLL) == 0) {
                        (*(void (**)(__int64))(*(_QWORD*)v234 + 16LL))(v234);
                        std___1___shared_weak_count___release_weak(v234);
                      }
                      goto LABEL_1084;
                    }
                    continue;
                  }
                }
              LABEL_1094:
                String_60a1d0();
              }
            }
          }
          v191 = 40;
        }
        (*(void (**)(__int64))(*v728_.v730 + v191))((__int64)v728_.v730);
        goto LABEL_603;
      }
      v113 = 40;
    }
    (*(void (**)(__int64))(*v728_.v730 + v113))((__int64)v728_.v730);
    goto LABEL_235;
  }
  if (v88 != 5) {
    goto LABEL_1086;
  }
  LegionGambit_e4d550(v3, 0x1.99999a0000000p-4f);
  LegionGambit_e4d990(v3, 10);
  v89 = fw_memory_HeapManager_Allocate(*v26, 144, 16, 0);
  *(_QWORD*)(v89 + 16) = 0;
  v90 = v89;
  v91 = GameData_212f458[0];
  *(_QWORD*)v89 = GameData_1fe5168;
  *(_QWORD*)(v89 + 40) = 0;
  *(_QWORD*)(v89 + 48) = 0;
  *(_QWORD*)(v89 + 96) = 0;
  *(_QWORD*)(v89 + 56) = 0;
  *(_QWORD*)(v89 + 64) = 0;
  *(_QWORD*)(v89 + 72) = 0;
  *(_QWORD*)(v89 + 80) = 0;
  *(_QWORD*)(v89 + 88) = 0;
  *(_QWORD*)(v89 + 104) = 0;
  *(_QWORD*)(v89 + 112) = 0;
  *(_QWORD*)(v89 + 120) = 0;
  *(_QWORD*)(v89 + 128) = 0;
  *(_QWORD*)(v89 + 136) = 0;
  *(_QWORD*)(v89 + 8) = 0;
  v92 = (atomic_ullong*)(v89 + 8);
  v728_.v730 = v728_.v728;
  *(_QWORD*)(v89 + 32) = v91 + 2;
  v93 = v89 + 32;
  *(_DWORD*)(v89 + 40) = 1119879168;
  *(_BYTE*)(v89 + 56) = 18;
  *(_BYTE*)(v89 + 65) = 98;
  v728_.v728[0] = (__int64)GameData_1fe5d38;
  *(_QWORD*)(v89 + 57) = *(_QWORD*)"GambitSub";
  GameRoutine_e4eee0(v728_.v728, (_QWORD*)(v89 + 96));
  if (v728_.v730 == v728_.v728) {
    v94 = 32;
  }
  else {
    if (v728_.v730 == nullptr) {
      goto LABEL_360;
    }
    v94 = 40;
  }
  (*(void (**)(__int64))(*v728_.v730 + v94))((__int64)v728_.v730);
LABEL_360:
  v235 = *(_QWORD*)(v3 + 128);
  v677_.v677 = v93;
  v677_.v678 = v90;
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v90 + 8), 1u,
                            memory_order_relaxed);
  v236 = *(float*)(v90 + 40);
  *(_QWORD*)(v90 + 48) = v235;
  if (v236 > *(float*)(v235 + 24)) {
    ((void (*)(__int64))GameRoutine_ce6d60)(v235);
  }
  GameRoutine_ce65f0((__int64*)(v235 + 80), &v677_.v677);
  v728_.v728[0] = (__int64)GameData_1fd7c18;
  v728_.v730 = v728_.v728;
  GameRoutine_ce6740(v235, (__int64)v728_.v728);
  if (v728_.v730 == v728_.v728) {
    v237 = 32;
    goto LABEL_366;
  }
  if (v728_.v730 != nullptr) {
    v237 = 40;
  LABEL_366:
    (*(void (**)(__int64))(*v728_.v730 + v237))((__int64)v728_.v730);
  }
  v238 = v677_.v678;
  if (v677_.v678 != 0 &&
      atomic_fetch_add((atomic_ullong* volatile)(v677_.v678 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v238 + 16LL))(v238);
    std___1___shared_weak_count___release_weak(v238);
  }
  if (atomic_fetch_add(v92, 0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v90 + 16LL))(v90);
    std___1___shared_weak_count___release_weak(v90);
  }
  v239 = fw_memory_HeapManager_Allocate(*v26, 144, 16, 0);
  *(_QWORD*)(v239 + 16) = 0;
  v240 = v239;
  v241 = GameData_212f498[0];
  *(_QWORD*)(v239 + 56) = 0;
  *(_QWORD*)(v239 + 64) = 0;
  *(_QWORD*)(v239 + 40) = 0;
  *(_QWORD*)(v239 + 48) = 0;
  *(_QWORD*)(v239 + 96) = 0;
  *(_QWORD*)(v239 + 72) = 0;
  *(_QWORD*)(v239 + 80) = 0;
  *(_QWORD*)(v239 + 88) = 0;
  *(_QWORD*)(v239 + 104) = 0;
  *(_QWORD*)(v239 + 112) = 0;
  *(_QWORD*)v239 = GameData_1fe57e8;
  *(_QWORD*)(v239 + 120) = 0;
  *(_QWORD*)(v239 + 128) = 0;
  *(_QWORD*)(v239 + 136) = 0;
  *(_QWORD*)(v239 + 57) = *(_QWORD*)"GambitSub";
  *(_QWORD*)(v239 + 8) = 0;
  v242 = (atomic_ullong*)(v239 + 8);
  v728_.v730 = v728_.v728;
  *(_QWORD*)(v239 + 32) = v241 + 2;
  v243 = v239 + 32;
  *(_BYTE*)(v239 + 56) = 18;
  *(_BYTE*)(v239 + 65) = 98;
  v728_.v728[0] = (__int64)GameData_1fe5db8;
  v728_.v728[1] = v3;
  GameRoutine_e4ea90(v728_.v728, (_QWORD*)(v239 + 96));
  if (v728_.v730 == v728_.v728) {
    v244 = 32;
  }
  else {
    if (v728_.v730 == nullptr) {
      goto LABEL_377;
    }
    v244 = 40;
  }
  (*(void (**)(__int64))(*v728_.v730 + v244))((__int64)v728_.v730);
LABEL_377:
  v245 = *(_QWORD*)(v3 + 128);
  v726_.v726 = v243;
  v726_.v727 = v240;
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v240 + 8), 1u,
                            memory_order_relaxed);
  v246 = *(float*)(v240 + 40);
  *(_QWORD*)(v240 + 48) = v245;
  if (v246 > *(float*)(v245 + 24)) {
    ((void (*)(__int64))GameRoutine_ce6d60)(v245);
  }
  GameRoutine_ce65f0((__int64*)(v245 + 80), &v726_.v726);
  v728_.v728[0] = (__int64)GameData_1fd7c18;
  v728_.v730 = v728_.v728;
  GameRoutine_ce6740(v245, (__int64)v728_.v728);
  if (v728_.v730 == v728_.v728) {
    v247 = 32;
    goto LABEL_383;
  }
  if (v728_.v730 != nullptr) {
    v247 = 40;
  LABEL_383:
    (*(void (**)(__int64))(*v728_.v730 + v247))((__int64)v728_.v730);
  }
  v248 = v726_.v727;
  if (v726_.v727 != 0 &&
      atomic_fetch_add((atomic_ullong* volatile)(v726_.v727 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v248 + 16LL))(v248);
    std___1___shared_weak_count___release_weak(v248);
  }
  if (atomic_fetch_add(v242, 0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v240 + 16LL))(v240);
    std___1___shared_weak_count___release_weak(v240);
  }
  v249 = fw_memory_HeapManager_Allocate(*v26, 104, 16, 0);
  *(_QWORD*)(v249 + 8) = 0;
  v250 = (atomic_ullong*)(v249 + 8);
  *(_QWORD*)(v249 + 16) = 0;
  v251 = v249;
  *(_QWORD*)(v249 + 32) = 0;
  *(_QWORD*)(v249 + 40) = 0;
  *(_QWORD*)(v249 + 48) = 0;
  *(_QWORD*)(v249 + 56) = 0;
  *(_QWORD*)(v249 + 64) = 0;
  *(_QWORD*)(v249 + 72) = 0;
  *(_QWORD*)v249 = GameData_1fe5e38;
  v252 = *(_QWORD*)(v3 + 128);
  v253 = GameData_212f4b8[0] + 2;
  strcpy((char*)(v249 + 80), "&Stratagem_ZOC_D");
  *(_BYTE*)(v249 + 97) = 0;
  *(_WORD*)(v249 + 98) = 0;
  *(_DWORD*)(v249 + 100) = 0;
  *(_QWORD*)(v249 + 24) = v253;
  *(_DWORD*)(v249 + 32) = 1119879168;
  v724_.v724 = v249 + 24;
  v724_.v725 = v249;
  *(_DWORD*)(v249 + 96) = 1635411809;
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v249 + 8), 1u,
                            memory_order_relaxed);
  *(_QWORD*)(v249 + 40) = v252;
  if (*(float*)(v252 + 24) < 0x1.8000000000000p+6f) {
    ((void (*)(__int64, float))GameRoutine_ce6d60)(v252, 0x1.8000000000000p+6f);
  }
  GameRoutine_ce65f0((__int64*)(v252 + 80), &v724_.v724);
  v728_.v728[0] = (__int64)GameData_1fd7c18;
  v728_.v730 = v728_.v728;
  GameRoutine_ce6740(v252, (__int64)v728_.v728);
  if (v728_.v730 == v728_.v728) {
    v254 = 32;
    goto LABEL_395;
  }
  if (v728_.v730 != nullptr) {
    v254 = 40;
  LABEL_395:
    (*(void (**)(__int64))(*v728_.v730 + v254))((__int64)v728_.v730);
  }
  v255 = v724_.v725;
  if (v724_.v725 != 0 &&
      atomic_fetch_add((atomic_ullong* volatile)(v724_.v725 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v255 + 16LL))(v255);
    std___1___shared_weak_count___release_weak(v255);
  }
  if (atomic_fetch_add(v250, 0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v251 + 16LL))(v251);
    std___1___shared_weak_count___release_weak(v251);
  }
  v256 = fw_memory_HeapManager_Allocate(*v26, 224, 16, 0);
  *(_QWORD*)(v256 + 8) = 0;
  v257 = (atomic_ullong*)(v256 + 8);
  *(_QWORD*)(v256 + 16) = 0;
  *(_QWORD*)(v256 + 40) = 0;
  *(_QWORD*)(v256 + 48) = 0;
  v258 = v256;
  *(_QWORD*)(v256 + 56) = 0;
  *(_QWORD*)(v256 + 64) = 0;
  *(_QWORD*)(v256 + 72) = 0;
  *(_QWORD*)(v256 + 80) = 0;
  *(_QWORD*)v256 = GameData_1fe5a38;
  *(_QWORD*)(v256 + 88) = 0;
  *(_QWORD*)(v256 + 96) = 0;
  *(_QWORD*)(v256 + 104) = 0;
  *(_QWORD*)(v256 + 112) = 0;
  *(_QWORD*)(v256 + 120) = 0;
  *(_QWORD*)(v256 + 128) = 0;
  *(_QWORD*)(v256 + 136) = 0;
  *(_QWORD*)(v256 + 144) = 0;
  *(_QWORD*)(v256 + 152) = 0;
  *(_QWORD*)(v256 + 160) = 0;
  *(_QWORD*)(v256 + 176) = 0;
  *(_QWORD*)(v256 + 184) = 0;
  *(_QWORD*)(v256 + 192) = 0;
  *(_QWORD*)(v256 + 200) = 0;
  *(_QWORD*)(v256 + 208) = 0;
  *(_QWORD*)(v256 + 216) = 0;
  *(_QWORD*)(v256 + 32) = 0;
  v259 = *(_QWORD*)(v3 + 128);
  v260 = GameData_212f4a0[0] + 2;
  *(_BYTE*)(v256 + 56) = 18;
  *(_BYTE*)(v256 + 65) = 98;
  *(_DWORD*)(v256 + 96) = 501870813;
  *(_DWORD*)(v256 + 88) = 1148846080;
  *(_BYTE*)(v256 + 112) = 0;
  *(_QWORD*)(v256 + 160) = 0;
  *(_QWORD*)(v256 + 168) = 0;
  *(_QWORD*)(v256 + 57) = *(_QWORD*)"GambitSub";
  v722_.v722 = v256 + 32;
  v722_.v723 = v256;
  *(_QWORD*)(v256 + 32) = v260;
  *(_DWORD*)(v256 + 40) = 1107296255;
  *(_BYTE*)(v256 + 92) = 1;
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v256 + 8), 1u,
                            memory_order_relaxed);
  *(_QWORD*)(v256 + 48) = v259;
  if (*(float*)(v259 + 24) < 0x1.fffffe0000000p+4f) {
    ((void (*)(__int64, float))GameRoutine_ce6d60)(v259, 0x1.fffffe0000000p+4f);
  }
  GameRoutine_ce65f0((__int64*)(v259 + 80), &v722_.v722);
  v728_.v728[0] = (__int64)GameData_1fd7c18;
  v728_.v730 = v728_.v728;
  GameRoutine_ce6740(v259, (__int64)v728_.v728);
  if (v728_.v730 == v728_.v728) {
    v261 = 32;
    goto LABEL_407;
  }
  if (v728_.v730 != nullptr) {
    v261 = 40;
  LABEL_407:
    (*(void (**)(__int64))(*v728_.v730 + v261))((__int64)v728_.v730);
  }
  v262 = v722_.v723;
  if (v722_.v723 != 0 &&
      atomic_fetch_add((atomic_ullong* volatile)(v722_.v723 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v262 + 16LL))(v262);
    std___1___shared_weak_count___release_weak(v262);
  }
  if (atomic_fetch_add(v257, 0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v258 + 16LL))(v258);
    std___1___shared_weak_count___release_weak(v258);
  }
  v263 = fw_memory_HeapManager_Allocate(*v26, 88, 16, 0);
  *(_QWORD*)(v263 + 8) = 0;
  v264 = (atomic_ullong*)(v263 + 8);
  *(_QWORD*)(v263 + 16) = 0;
  v265 = v263;
  *(_QWORD*)v263 = GameData_1fe5388;
  *(_QWORD*)(v263 + 32) = 0;
  *(_QWORD*)(v263 + 40) = 0;
  *(_QWORD*)(v263 + 48) = 0;
  *(_QWORD*)(v263 + 56) = 0;
  *(_QWORD*)(v263 + 64) = 0;
  *(_QWORD*)(v263 + 72) = 0;
  v266 = *(_QWORD*)(v3 + 128);
  v267 = GameData_212f468[0] + 2;
  *(_QWORD*)(v263 + 80) = 0x3D4CCCCD3D4CCCCDLL;
  *(_QWORD*)(v263 + 24) = v267;
  *(_DWORD*)(v263 + 32) = 1120665600;
  v720_.v720 = v263 + 24;
  v720_.v721 = v263;
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v263 + 8), 1u,
                            memory_order_relaxed);
  *(_QWORD*)(v263 + 40) = v266;
  if (*(float*)(v266 + 24) < 0x1.9800000000000p+6f) {
    ((void (*)(__int64, float))GameRoutine_ce6d60)(v266, 0x1.9800000000000p+6f);
  }
  GameRoutine_ce65f0((__int64*)(v266 + 80), &v720_.v720);
  v728_.v728[0] = (__int64)GameData_1fd7c18;
  v728_.v730 = v728_.v728;
  GameRoutine_ce6740(v266, (__int64)v728_.v728);
  if (v728_.v730 == v728_.v728) {
    v268 = 32;
    goto LABEL_419;
  }
  if (v728_.v730 != nullptr) {
    v268 = 40;
  LABEL_419:
    (*(void (**)(__int64))(*v728_.v730 + v268))((__int64)v728_.v730);
  }
  v269 = v720_.v721;
  if (v720_.v721 != 0 &&
      atomic_fetch_add((atomic_ullong* volatile)(v720_.v721 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v269 + 16LL))(v269);
    std___1___shared_weak_count___release_weak(v269);
  }
  if (atomic_fetch_add(v264, 0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v265 + 16LL))(v265);
    std___1___shared_weak_count___release_weak(v265);
  }
  v270 = fw_memory_HeapManager_Allocate(*v26, 80, 16, 0);
  *(_QWORD*)(v270 + 8) = 0;
  v271 = (atomic_ullong*)(v270 + 8);
  *(_QWORD*)(v270 + 16) = 0;
  v230 = v270;
  *(_QWORD*)(v270 + 32) = 0;
  *(_QWORD*)(v270 + 40) = 0;
  *(_QWORD*)(v270 + 48) = 0;
  *(_QWORD*)(v270 + 56) = 0;
  *(_QWORD*)v270 = GameData_1fe5648;
  v272 = GameData_212f488[0];
  v273 = *(_QWORD*)(v3 + 128);
  *(_QWORD*)(v270 + 64) = 0;
  *(_QWORD*)(v270 + 72) = 0;
  *(_QWORD*)(v270 + 24) = v272 + 2;
  *(_DWORD*)(v270 + 32) = 1125908480;
  v718_.v718 = v270 + 24;
  v718_.v719 = v270;
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v270 + 8), 1u,
                            memory_order_relaxed);
  *(_QWORD*)(v270 + 40) = v273;
  if (*(float*)(v273 + 24) < 0x1.3800000000000p+7f) {
    ((void (*)(__int64, float))GameRoutine_ce6d60)(v273, 0x1.3800000000000p+7f);
  }
  GameRoutine_ce65f0((__int64*)(v273 + 80), &v718_.v718);
  v728_.v728[0] = (__int64)GameData_1fd7c18;
  v728_.v730 = v728_.v728;
  GameRoutine_ce6740(v273, (__int64)v728_.v728);
  if (v728_.v730 == v728_.v728) {
    v274 = 32;
  }
  else {
    if (v728_.v730 == nullptr) {
      goto LABEL_432;
    }
    v274 = 40;
  }
  (*(void (**)(__int64))(*v728_.v730 + v274))((__int64)v728_.v730);
LABEL_432:
  v275 = v718_.v719;
  if (v718_.v719 != 0 &&
      atomic_fetch_add((atomic_ullong* volatile)(v718_.v719 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v275 + 16LL))(v275);
    std___1___shared_weak_count___release_weak(v275);
  }
  if (atomic_fetch_add(v271, 0xFFFFFFFFFFFFFFFFLL) == 0) {
  LABEL_1085:
    (*(void (**)(__int64))(*(_QWORD*)v230 + 16LL))(v230);
    std___1___shared_weak_count___release_weak(v230);
  }
LABEL_1086:
  v664 = *(_QWORD*)(v3 + 128);
  v665 = *(__int64**)(v664 + 80);
  for (i = *(__int64**)(v664 + 88); v665 != i; v665 += 2) {
    v667 = *v665;
    v668 = v665[1];
    if (v668 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v668 + 8), 1u,
                                memory_order_relaxed);
      *(_QWORD*)(v667 + 48) = v3;
      if (atomic_fetch_add((atomic_ullong* volatile)(v668 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v668 + 16LL))(v668);
        std___1___shared_weak_count___release_weak(v668);
      }
    }
    else {
      *(_QWORD*)(v667 + 48) = v3;
    }
  }
}

void game_combat_1068b40(__int64 a1, char a2)
{
  __int64 v2;
  __int64 v3;
  float32x4_t* v6;
  __int128 v7;
  __int128 v9;
  float v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  bool v14;
  float v15;
  float v16;
  float v17;
  __int64 v18;
  float32x4_t v19;
  float32x4_t v20;
  int8x16_t v21;
  float32x4_t v22;
  float v23;
  unsigned __int64 v24;
  float32x4_t v25;
  int8x16_t v26;
  double v27;
  double v28;
  double v29;
  float v30;
  float v31;
  float v32;
  unsigned __int32 v36;
  float v37;
  float v38[8];
  __int128 v39;
  __int128 v40;

  v2 = *(_QWORD*)(a1 + 80);
  if (v2 == 0) {
    return;
  }
  v3 = *(_QWORD*)(a1 + 88);
  if (*(_QWORD*)(v2 + 8) == -1 || v3 == 0) {
    return;
  }
  v6 = *(float32x4_t**)(v3 + 8);
  if (*GameData_212d168 != 3) {
    v10 = LANES128(v6[19]).n128_f32[1];
    goto LABEL_18;
  }
  *(_QWORD*)&v7 = *(_QWORD*)(a1 + 40);
  *(_QWORD*)&v9 = (unsigned int)v7 | 0x4348000000000000LL;
  DWORD1(v7) = -1027080192;
  *((_QWORD*)&v9 + 1) = (unsigned int)HIDWORD(*(_QWORD*)(a1 + 40));
  *((_QWORD*)&v7 + 1) = *((_QWORD*)&v9 + 1);
  v40 = v9;
  v39 = v7;
  GameRoutine_1085a10((void*)(v38), v3 + 160, &v40, &v39, 0);
  v10 = v38[1];
  if ((a2 & 1) == 0) {
    v11 = *(_QWORD*)(a1 + 80);
    if (v11 == 0 ||
        ((v12 = *(_QWORD*)(v11 + 8), v13 = *(_QWORD*)(a1 + 88), v12 != -1)
             ? (v14 = v13 == 0)
             : (v14 = true),
         v14)) {
      v15 = 0x1.11570c0000000p-5f;
    }
    else {
      v15 = (float)(*(float*)(*(_QWORD*)(v13 + 304) + 16LL) *
                    0x1.0aef000000000p+4f) *
            0x1.0624de0000000p-10f;
      v17 = 0x0.0p+0f;
      if (v15 <= 0x0.0p+0f) {
        goto LABEL_16;
      }
    }
    v37 = v38[1];
    v16 = powf(0x1.99999a0000000p-1f, v15 * 0x1.df851e0000000p+4f);
    v10 = v37;
    v17 = 0x1.0000000000000p+0f - v16;
  LABEL_16:
    v10 =
        *(float*)(a1 + 116) + (float)((float)(v10 - *(float*)(a1 + 116)) * v17);
  }
LABEL_18:
  v18 = *(_QWORD*)(a1 + 40);
  LANES128(v19).n128_u64[0] = __PAIR64__(LODWORD(v10), v18);
  LANES128(v19).n128_u64[1] = HIDWORD(v18);
  v20 = vsubq_f32(v6[19], v19);
  v21 = vmulq_f32(v20, v20);
  LANES128(v21).n128_u64[0] =
      LANES64_OF(
          vadd_f32(COERCE_AS(float32x2_t,
                             LANES128_OF(vextq_s8(v21, v21, 8u)).n128_u64[0]),
                   COERCE_AS(float32x2_t, LANES128(v21).n128_u64[0])))
          .n64_u64[0];
  if (LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v21).n128_u64[0]),
                           COERCE_AS(float32x2_t, LANES128(v21).n128_u64[0])))
          .n64_f32[0] != 0x0.0p+0f) {
    LANES128(v6[19]).n128_u32[0] = v18;
    LANES128(v6[19]).n128_f32[1] = v10;
    v22 = v6[19];
    LANES128(v6[18]).n128_u32[2] |= 1u;
    LANES128(v22).n128_u64[1] = HIDWORD(v18);
    v6[19] = v22;
  }
  *(_QWORD*)v38 = 0x3F80000000000000LL;
  v23 = game_combat_e401e0(v38, (float*)(a1 + 48));
  LODWORD(v24) = 0;
  *((float*)&v24 + 1) = v23;
  v25 = vsubq_f32(v6[20], COERCE_AS(float32x4_t, v24));
  v26 = vmulq_f32(v25, v25);
  LANES128(v26).n128_u64[0] =
      LANES64_OF(
          vadd_f32(COERCE_AS(float32x2_t,
                             LANES128_OF(vextq_s8(v26, v26, 8u)).n128_u64[0]),
                   COERCE_AS(float32x2_t, LANES128(v26).n128_u64[0])))
          .n64_u64[0];
  if (LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v26).n128_u64[0]),
                           COERCE_AS(float32x2_t, LANES128(v26).n128_u64[0])))
          .n64_f32[0] != 0x0.0p+0f) {
    LANES128(v6[20]).n128_u32[0] = 0;
    LANES128(v6[20]).n128_f32[1] = v23;
    v6[20] = COERCE_AS(float32x4_t, LANES128(v6[20]).n128_u64[0]);
    v27 = v23 * 0x1.0000000000000p-1;
    v28 = cos(v27);
    v29 = sin(v27);
    v30 = v28 + PSEUDO_UNFUSED(v29 * 0x0.0p+0);
    v31 = PSEUDO_UNFUSED(v29 * -0x0.0p+0) + v28 * 0x0.0p+0;
    v32 = v29 + PSEUDO_UNFUSED(v28 * 0x0.0p+0);
    if (COERCE_FLOAT(*(_OWORD*)&v6[21]) != v31 ||
        COERCE_FLOAT(HIDWORD(LANES128(v6[21]).n128_u64[0])) != v32 ||
        COERCE_FLOAT(LANES128(v6[21]).n128_u64[1]) != v31 ||
        COERCE_FLOAT(DWORD3(*(_OWORD*)&v6[21])) != v30) {
      v36 = LANES128(v6[18]).n128_u32[2];
      LANES128(v6[21]).n128_f32[0] = v31;
      LANES128(v6[21]).n128_f32[1] = v32;
      LANES128(v6[21]).n128_f32[2] = v31;
      LANES128(v6[21]).n128_f32[3] = v30;
      LANES128(v6[18]).n128_u32[2] = v36 | 1;
    }
  }
}

#pragma GCC visibility pop
