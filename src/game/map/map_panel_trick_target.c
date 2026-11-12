#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_f85d20(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
extern __int64 (*game_map_MapPanelTrickTarget_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
__int64 MapPanelTrickTarget_Destructor(_QWORD* a1);
__int64 MapPanelTrickTarget_DeletingDestructor_alt1(_QWORD* a1) __asm__(
    "MapPanelTrickTarget_DeletingDestructor");
__int64 GameRoutine_74e080(_QWORD, _QWORD);
__int64 game_map_MapPanelTrickTarget_UpdateTarget_lambda0_Invoke_alt1(
    __int64 a1, _DWORD* a2,
    _DWORD*
        a3) __asm__("game_map_MapPanelTrickTarget_UpdateTarget_lambda0_Invoke");
__int64 game_map_MapPanelTrickTarget_UpdateTarget_lambda1_Invoke_alt1(
    __int64 a1, _DWORD* a2,
    _DWORD*
        a3) __asm__("game_map_MapPanelTrickTarget_UpdateTarget_lambda1_Invoke");
bool game_map_MapPanelTrickTarget_UpdateTarget_lambda2_Invoke(__int64 a1,
                                                              _DWORD* a2,
                                                              _DWORD* a3);
__int64 game_map_MapPanelTrickTarget_UpdateTarget_lambda3_Invoke(__int64 a1,
                                                                 _DWORD* a2,
                                                                 _DWORD* a3);
__int64 CharacterController_d42d20(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_64dfe0(_QWORD, _QWORD);
__int64 GameRoutine_74e220(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_f155c0(_QWORD);
__int64 GameRoutine_f85860(_QWORD, _QWORD);
__int64 GameRoutine_fcacb0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                           _QWORD);
__int64 MapDrawConst_fcbcc0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 MapPanelRage_f1a700(_QWORD, _QWORD);
__int64 __cxa_guard_acquire(_QWORD);
__int64 __cxa_guard_release(_QWORD);
__int64 fw_containers_BalanceAfterInsert(_QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_UnitPool_Get(_QWORD);
__int64 game_UnitPool_GetFirst(_QWORD);
__int64 game_UnitSkillList_GetMaxValue(_QWORD, _QWORD);
__int64 game_map_f54910(__int64);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
__n128 nn_mem_StandardAllocator_Free_alt1(_QWORD) __asm__(
    "nn_mem_StandardAllocator_Free");
extern _UNKNOWN* GameData_212c540;
extern _UNKNOWN* GameData_212c958;
extern _UNKNOWN GameData_21a6130;
extern __int128 GameData_21a6120;
extern __int64 (*GameData_1ff7f18[])();
extern __int64 (*GameData_1ff7f98[])();
extern __int64 (*GameData_1ff8018[])();
extern __int64 (*GameData_1ff8098[])();
extern __int64 (*game_map_TrickTargetMeshData_vtable[])();
extern __int64* GameData_212ce90[3];
extern __int64* GameData_212ce98[2];
extern __int64* GameData_212cfb8[11];
extern __int64* GameData_212cfd0[8];
extern __int64* GameData_212f8b0[14];
extern __int64 GameData_212d020[5];
extern __int64 GameData_212d038[2];
extern __int64 GameData_21ca310;
extern __int64 GameData_2226688;
extern __int64 GameData_2226690;
extern __int64 game_script_hub_g_frame_counter_ptr[3];
extern unsigned __int8 GameData_1b41abf[17];
float32x4_t* GameRoutine_f54fe0(float32x4_t* result);
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
void __attribute__((noreturn)) GameRoutine_60a310(_QWORD, _QWORD, _QWORD);
void __attribute__((noreturn)) GameRoutine_74e1f0(_QWORD);
void __attribute__((noreturn)) String_60a250(_QWORD);
void game_map_MapPanelTrickTarget_UpdateTarget(__int64 a1);
_BYTE* GameRoutine_74e080_alt1(__int64*, __int64) __asm__("GameRoutine_74e080");
_BYTE* game_map_MapPanelTrickTarget_UpdateTarget_lambda0_Invoke(__int64 a1,
                                                                _DWORD* a2,
                                                                _DWORD* a3);
_BYTE* game_map_MapPanelTrickTarget_UpdateTarget_lambda1_Invoke(__int64 a1,
                                                                _DWORD* a2,
                                                                _DWORD* a3);
_BYTE* MapPanelRage_f1a700_alt1(__int64*,
                                __int64) __asm__("MapPanelRage_f1a700");
__int64* GameRoutine_64dfe0_alt1(__int64* result,
                                 __int64*) __asm__("GameRoutine_64dfe0");
__int64*
GameRoutine_f155c0_alt1(__int64* result, char*, char*,
                        unsigned __int64) __asm__("GameRoutine_f155c0");
__int64* fw_containers_BalanceAfterInsert_alt1(
    __int64* result, __int64*) __asm__("fw_containers_BalanceAfterInsert");
__int64* game_UnitPool_Get_alt1(_BYTE*) __asm__("game_UnitPool_Get");
__int64 CharacterController_d42d20_alt1(
    __int64 result, char*, char*,
    unsigned __int64) __asm__("CharacterController_d42d20");
__int64 GameHr_fcacb0(__int64, __int64, __int64, __int64, __int64, __int16);
__int64 GameRoutine_74e220_alt1(__int64 result, int*, char*,
                                unsigned __int64) __asm__("GameRoutine_74e220");
__int64 MapDrawConst_fcbcc0_alt1(__int64, int, unsigned __int8, unsigned __int8,
                                 __int64, char) __asm__("MapDrawConst_fcbcc0");
__int64 fw_memory_HeapManager_Allocate_alt1(
    __int64, __int64, __int64,
    unsigned int) __asm__("fw_memory_HeapManager_Allocate");
__int64 game_UnitPool_GetFirst_alt1(int*) __asm__("game_UnitPool_GetFirst");
__int64 game_UnitSkillList_GetMaxValue_alt1(_QWORD*, __int64*) __asm__(
    "game_UnitSkillList_GetMaxValue");
__int64 std___1___shared_weak_count___release_weak_alt1(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
__int64 std___1___shared_weak_count_lock_alt1(__int64) __asm__(
    "std___1___shared_weak_count_lock");
int __cxa_guard_acquire_alt1(__int64) __asm__("__cxa_guard_acquire");
void GameHr_f85860(__int64, __int64);
void GameRoutine_f85d20_alt1(_QWORD*) __asm__("GameRoutine_f85d20");
void __attribute__((noreturn))
GameRoutine_60a210_alt1() __asm__("GameRoutine_60a210");
void __attribute__((noreturn))
GameRoutine_60a310_alt1() __asm__("GameRoutine_60a310");
void __attribute__((noreturn))
GameRoutine_74e1f0_alt1() __asm__("GameRoutine_74e1f0");
void __attribute__((noreturn))
String_60a250_alt1(const char*) __asm__("String_60a250");
void __cxa_guard_release_alt1(__int64) __asm__("__cxa_guard_release");
void nn_mem_StandardAllocator_Free_alt2(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void MapPanelTrickTarget_DeletingDestructor(__int64 a1);
__int64 PrimitiveDrawStack_f525a0(__int64*, __int64);
__int64 fw_text_String_CopyTerminated(__int64*, __int64, unsigned __int64);
extern __int64* GameData_212f878;
extern __int64 GameData_212d018[6];
void PrimitiveDrawStack_f51430(__int64, __int64);
void MapPanelTrickTarget_Unknown4(__int64 a1);

void game_map_MapPanelTrickTarget_UpdateTarget(__int64 a1)
{

#pragma clang fp contract(off)
  __int64 v1;
  __int64* v2;
  __int64* v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  int v13;
  __int64* v14;
  __int64* v15;
  bool v16;
  __int64* v17;
  bool v18;
  __int64* v19;
  __int64* v20;
  __int64* v21;
  __int64* v22;
  __int64* v23;
  char* v24;
  __int64* v25;
  __int64 v26;
  unsigned __int8* v27;
  __int64 v28;
  unsigned int v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  _QWORD* v36;
  _QWORD* v37;
  __int64* v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  unsigned __int64 v46;
  __int64 v47;
  char v48;
  int v49;
  int v50;
  int v51;
  __int64 v52;
  int v53;
  int v54;
  int v55;
  char v56;
  __int64 v58;
  char v59;
  int v60;
  int v61;
  int v62;
  __int64 v63;
  int v64;
  int v65;
  int v66;
  int v67;
  int v68;
  int v69;
  int v70;
  int v71;
  bool v72;
  unsigned __int64 v73;
  __int64 v74;
  int v75;
  int v76;
  int v77;
  int v78;
  int v79;
  int v80;
  int v81;
  int v82;
  int v83;
  int v84;
  int v85;
  unsigned int v86;
  int v87;
  int v88;
  unsigned __int64 v89;
  __int64 v90;
  unsigned __int64 v91;
  __int64 v92;
  unsigned __int64 v93;
  __int64 v94;
  unsigned __int64 v95;
  __int64 v96;
  _BYTE* v97;
  _BYTE* v98;
  char v99;
  __int64 v100;
  __int64 v101;
  __int64 v102;
  unsigned __int64 v103;
  __int64 v104;
  unsigned __int8** v105;
  unsigned __int8** v106;
  unsigned __int8* v107;
  unsigned __int8* v108;
  unsigned __int8* v109;
  unsigned __int8* v110;
  unsigned __int8* v111;
  signed __int64 v113;
  __int64 v114;
  unsigned __int64 v115;
  __int64 v116;
  unsigned __int64 v117;
  __int64 v118;
  unsigned __int8* v119;
  __int64 v120;
  unsigned __int8* v121;
  _BYTE* v122;
  unsigned __int8 v123;
  __int64 v124;
  __int64 v125;
  unsigned __int8 v126;
  unsigned __int8 v127;
  __int16 v129;
  __int64 v130;
  float32x4_t v131;
  char* v132;
  float32x4_t* v133;
  char* v134;
  float32x4_t v135;
  float32x4_t v136;
  int8x16_t v137;
  float32x4_t v139;
  unsigned __int64 v140;
  __int64 v141;
  unsigned __int64 v142;
  __int64** v143;
  __int64 v144;
  _QWORD* v145;
  unsigned __int64 v146;
  unsigned __int64 v147;
  unsigned __int64 v148;
  __int64 v149;
  __int64* v150;
  __int64 v151;
  __int128 v152;
  __int128 v153;
  __int128 v154;
  __int64 v155;
  __int128 v156;
  float32x4_t v157;
  __int64 v158;
  __int64** v159;
  __int128 v160;
  __int128 v161;
  __int64 v162;
  __int64 v163;
  __int64 v164;
  int v165;
  __int64 v166;
  __int64 v167;
  unsigned __int64 v168;
  __int64 v169;
  __int64* v170;
  __int64 v171;
  __int64 v172;
  int v173;
  char* v174;
  __int64 v175;
  char* v176;
  char* v177;
  char* v178;
  void (**v179)(char*);
  __int64 v180;
  __int64 v181;
  __int64 v182;
  unsigned __int8** v183;
  __int64 v184;
  __int64 v185;
  __int64 v186;
  __int64 v187;
  __int64 v188;
  __int64 v189;
  float32x4_t* v190;
  float32x4_t* v191;
  __int64 v192;
  __int64 v193;
  __int64* v194;
  __int64 v195;
  __int64 v196;
  float v197;
  float v198;
  float v199;
  float v200;
  float v201;
  unsigned __int64 v202;
  float32x4_t* v203;
  float32x4_t* v204;
  float32x4_t* v205;
  __int64* v206;
  __int64 v207;
  __int64 v208;
  __int64 v209;
  __int64 v210;
  unsigned __int64 v211;
  __int64 v212;
  __int64* v213;
  __int64 v214;
  void (***v215)(_QWORD);
  void (***v216)(_QWORD);
  void (**v217)(_QWORD);
  __int64 v218;
  __int64 v219;
  unsigned __int8* v220;
  unsigned __int8* v221;
  unsigned __int8* v222;
  __int64* v224;
  __int64 v225;
  int v227;
  __int64* v228;
  char* v229;
  int v230;
  unsigned __int8** v231;
  struct {
    _QWORD v232[4];
    _QWORD* v233;
  } v232_;
  struct {
    __int64 v234;
    __int64 (***v235)();
    __int128 v236;
    __int128 v237;
    __int128 v238;
    __int128 v239;
    __int64 v240;
    __int64 v241;
    float32x4_t* v242;
    float32x4_t* v243;
    char gap208_[8];
    char* v244;
    char* v245;
    char gap232_[8];
    __int128 v246;
    __int64 v247;
    __int64 v248;
    float32x4_t v249;
    __int64 v250;
    __int64 v251;
    __int64 v252;
    __int64 v253;
    __int64 v254;
    __int64 v255;
    int v256;
  } v234_;
  unsigned __int8** v257;
  struct {
    unsigned __int8* v258;
    unsigned __int8* v259;
    unsigned __int64 v260;
  } v258_;
  struct {
    __int64 (**v261)();
    __int64 (**v262)();
    __int64 v263;
    char gap408_[8];
    __int64* v264;
  } v261_;
  struct {
    __int64 v265;
    unsigned __int8** v266;
    __int64 v267;
  } v265_;
  struct {
    unsigned __int8* v268;
    __int64 v269;
    __int64 v270;
  } v268_;

  v1 = a1;
  if (*(_BYTE*)(a1 + 8) != 1) {
    goto LABEL_303;
  }
  v2 = *(__int64**)(a1 + 16);
  v3 = (__int64*)(a1 + 24);
  if (v2 != (__int64*)(a1 + 24)) {
    do {
      v12 = v2[6];
      *((_BYTE*)v2 + 272) = 0;
      if (((*(__int64 (**)(void*))(v12 + 48))((void*)&v2[6]) & 1) != 0) {
        v13 = 1036831949;
      }
      else {
        v13 = 0;
        *((_DWORD*)v2 + 69) = 0;
      }
      v14 = (__int64*)v2[1];
      *((_DWORD*)v2 + 70) = v13;
      if (v14 != nullptr) {
        do {
          v15 = v14;
          v14 = (__int64*)*v14;
        } while (v14 != nullptr);
      }
      else {
        do {
          v15 = (__int64*)v2[2];
          v16 = v2 == (__int64*)*v15;
          v2 = v15;
        } while (!v16);
      }
      v2 = v15;
    } while (v15 != v3);
  }
  if (((*(__int64 (**)(__int64))(*(_QWORD*)v1 + 48LL))(v1) & 1) == 0) {
    goto LABEL_302;
  }
  v268_.v269 = 0;
  v268_.v270 = 0;
  v268_.v268 = nullptr;
  v4 = GameData_212d020[0];
  v5 = *(_QWORD*)(*(_QWORD*)GameData_212d020[0] + 24LL);
  v6 = *(_QWORD*)(*(_QWORD*)GameData_212d020[0] + 104LL);
  v7 = GameData_212d038[0];
  if (v6 != 0 &&
      (v8 = *(_QWORD*)(*(_QWORD*)GameData_212d020[0] + 96LL),
       v9 = *(_QWORD*)(*(_QWORD*)GameData_212d020[0] + 104LL),
       atomic_fetch_add_explicit((atomic_ullong* volatile)(v6 + 16), 1u,
                                 memory_order_relaxed),
       v10 = std___1___shared_weak_count_lock_alt1(v9),
       std___1___shared_weak_count___release_weak_alt1(v6), v10 != 0)) {
    if (v8 != 0) {
      v11 = 254936;
    }
    else if (*(_BYTE*)(*(_QWORD*)v7 + 156LL) != 0) {
      v11 = 8;
    }
    else {
      v11 = 127472;
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v10 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v10 + 16LL))(v10);
      std___1___shared_weak_count___release_weak_alt1(v10);
    }
  }
  else if (*(_BYTE*)(*(_QWORD*)v7 + 156LL) != 0) {
    v11 = 8;
  }
  else {
    v11 = 127472;
  }
  v16 = (*(_QWORD*)(v5 + v11 + 127168) | *(_QWORD*)(v5 + v11 + 127192)) == 0 ||
        v5 == 0;
  v17 = (__int64*)(v5 + v11 + 127408);
  v18 = v16 || &v268_.v268 == (unsigned __int8**)v17;
  if (v18 ||
      (GameRoutine_74e220_alt1((__int64)&v268_.v268, (int*)*v17,
                               *(char**)(v5 + v11 + 127416),
                               (*(_QWORD*)(v5 + v11 + 127416) - *v17) >> 2),
       (unsigned __int8*)v268_.v269 == v268_.v268)) {
    if (*(_DWORD*)(*(_QWORD*)v4 + 4368LL) < 3u ||
        (v19 = GameData_212cfd0[0], *(_BYTE*)(*GameData_212cfd0[0] + 8) == 0) ||
        (v20 = game_UnitPool_Get_alt1((_BYTE*)(*GameData_212cfd0[0] + 8))) ==
            nullptr ||
        v20[49] == 0 || (*((_BYTE*)v20 + 417) & 0x1C) != 0 ||
        (v21 = v20,
         (*(float (**)(__int64*))(v20[19] + 16))(v20 + 19) <= 0x0.0p+0f) ||
        *(_DWORD*)(*(_QWORD*)v4 + 4368LL) != 6 ||
        (*(_BYTE*)(*v19 + 8) == 0
             ? (v23 = v21, v22 = nullptr)
             : (v22 = game_UnitPool_Get_alt1((_BYTE*)(*v19 + 8)), v23 = v21),
         v22 != v23)) {
      v221 = *(unsigned __int8**)(*(_QWORD*)v7 + 88LL);
      v220 = *(unsigned __int8**)(*(_QWORD*)v7 + 96LL);
      while (v221 != v220) {
        v222 = v268_.v268;
        if (v268_.v268 != (unsigned __int8*)v268_.v269) {
          while (*v222 != *v221 || v222[1] != v221[1]) {
            v222 += 4;
            if (v222 == (unsigned __int8*)v268_.v269) {
              goto LABEL_357;
            }
          }
        }
        if (v222 == (unsigned __int8*)v268_.v269) {
        LABEL_357:
          MapPanelRage_f1a700_alt1((__int64*)&v268_.v268, (__int64)v221);
        }
        v221 += 4;
      }
    }
  }
  v24 = (char*)v268_.v268;
  v224 = v3;
  v265_.v266 = nullptr;
  v265_.v267 = 0;
  v265_.v265 = 0;
  v229 = (char*)v268_.v269;
  if (v268_.v268 != (unsigned __int8*)v268_.v269 &&
      GameData_2226688 != GameData_2226690) {
    v25 = GameData_212cfb8[0];
    do {
      v27 = (unsigned __int8*)GameData_2226688;
      v26 = GameData_2226690;
      while (v27 != (unsigned __int8*)v26) {
        v28 = *v27;
        v29 = *v24 + 32 * v24[1];
        v30 = *(_QWORD*)(*v25 + 16);
        if (v29 >= 0x400) {
          v29 = 0;
        }
        v31 =
            *(__int16*)(v30 + ((unsigned __int64)GameData_1b41abf[v28] << 11) +
                        2LL * v29 + 104);
        if ((v31 & 0x8000000000000000LL) == 0) {
          v32 = *(_QWORD*)(v30 + 8);
          if (v32 != 0) {
            v33 = v32 + 144LL * (int)v31;
            if ((_DWORD)v28 == (*(unsigned __int8 (**)(__int64))(*(_QWORD*)v33 +
                                                                 40LL))(v33) &&
                ((*(__int64 (**)(__int64))(*(_QWORD*)v33 + 16LL))(v33) & 1) !=
                    0) {
              v261_.v262 = nullptr;
              v261_.v263 = 0;
              v261_.v261 = nullptr;
              *(_QWORD*)&v234_.v237 = &v234_.v234;
              v234_.v234 = (__int64)GameData_1ff7f18;
              v234_.v235 = &v261_.v261;
              (*(void (**)(__int64, __int64*))(*(_QWORD*)v33 + 752LL))(
                  v33, &v234_.v234);
              if ((__int64*)v234_.v237 == &v234_.v234) {
                v34 = 32;
              LABEL_61:
                (*(void (**)(__int64))(*(_QWORD*)v234_.v237 + v34))(
                    (__int64)v234_.v237);
              }
              else if ((_QWORD)v234_.v237 != 0) {
                v34 = 40;
                goto LABEL_61;
              }
              GameHr_f85860((__int64)&v265_.v265, (__int64)&v261_.v261);
              if (v261_.v261 != nullptr) {
                v261_.v262 = v261_.v261;
                v35 = 128;
                if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                               200LL) == 0) {
                  v35 = 56;
                }
                nn_mem_StandardAllocator_Free_alt2(
                    *(_QWORD*)fw_memory_g_heap_manager_ptr + v35,
                    (__int64)v261_.v261);
              }
            }
          }
        }
        ++v27;
      }
      v24 += 4;
    } while (v24 != v229);
  }
  v36 = *(_QWORD**)(*(_QWORD*)GameData_212d020[0] + 4376LL);
  v37 = *(_QWORD**)(*(_QWORD*)GameData_212d020[0] + 4384LL);
  if (v36 != v37) {
    v38 = (__int64*)fw_memory_g_heap_manager_ptr;
    while (((*(__int64 (**)(_QWORD))(*(_QWORD*)*v36 + 16LL))(*v36) & 1) == 0) {
    LABEL_68:
      if (++v36 == v37) {
        goto LABEL_80;
      }
    }
    v261_.v262 = nullptr;
    v261_.v263 = 0;
    v261_.v261 = nullptr;
    v39 = *v36;
    v234_.v234 = (__int64)GameData_1ff7f98;
    v234_.v235 = &v261_.v261;
    *(_QWORD*)&v234_.v237 = &v234_.v234;
    (*(void (**)(__int64, __int64*))(*(_QWORD*)v39 + 752LL))(v39, &v234_.v234);
    if ((__int64*)v234_.v237 == &v234_.v234) {
      v40 = 32;
    }
    else {
      if ((_QWORD)v234_.v237 == 0) {
        goto LABEL_75;
      }
      v40 = 40;
    }
    (*(void (**)(__int64))(*(_QWORD*)v234_.v237 + v40))((__int64)v234_.v237);
  LABEL_75:
    GameHr_f85860((__int64)&v265_.v265, (__int64)&v261_.v261);
    if (v261_.v261 != nullptr) {
      v41 = *v38;
      v261_.v262 = v261_.v261;
      if (*(_QWORD*)(v41 + 200) != 0) {
        v42 = 128;
      }
      else {
        v42 = 56;
      }
      nn_mem_StandardAllocator_Free_alt2(v41 + v42, (__int64)v261_.v261);
    }
    goto LABEL_68;
  }
LABEL_80:
  LODWORD(v258_.v258) = *(_DWORD*)(*(_QWORD*)GameData_212d038[0] + 82LL);
  LODWORD(v234_.v234) = 15;
  v43 = game_UnitPool_GetFirst_alt1((int*)&v234_.v234);
  if (v43 == 0) {
    goto LABEL_181;
  }
  v44 = *(_QWORD*)(v43 + 432);
  v45 = v43;
  if (v44 == 0) {
    v44 = *(_QWORD*)(v43 + 440);
    if (v44 != 0) {
      v46 = *(unsigned __int8*)(v44 + 16);
      if (v46 <= 8) {
        v219 = 24LL * *(unsigned __int8*)(v44 + 16) + 556024;
        while (1) {
          if (v46 <= 2) {
            v44 = *(_QWORD*)(*(_QWORD*)(GameData_21ca310 + 56) + v219);
            if (v44 != 0) {
              break;
            }
          }
          ++v46;
          v219 += 24;
          if (v46 == 9) {
            goto LABEL_84;
          }
        }
      }
      else {
      LABEL_84:
        v44 = 0;
      }
    }
  }
LABEL_87:
  while (2) {
    v47 = v44;
    v48 = *(_BYTE*)(v45 + 584);
    v49 = *(unsigned __int8*)(v45 + 585);
    v50 = *(_DWORD*)(v45 + 592);
    v261_.v264 = (__int64*)&v261_.v261;
    v261_.v261 = GameData_1ff8018;
    v261_.v262 = (__int64 (**)(void))&v258_.v258;
    if (v50 < 1) {
      goto LABEL_101;
    }
    v51 = v49 << 24;
    v52 = v47;
    v53 = 0;
  LABEL_89:
    v54 = v51;
    v55 = v50;
    while (1) {
      LODWORD(v234_.v234) = (char)(v53 + v48);
      LODWORD(v232_.v232[0]) = v54 >> 24;
      if (v261_.v264 == nullptr) {
        GameRoutine_60a310_alt1();
      }
      v56 = (*(__int64 (**)(__int64*, __int64*, _QWORD*))(*v261_.v264 + 48))(
          v261_.v264, &v234_.v234, v232_.v232);
      if ((v56 & 1) != 0) {
        break;
      }
      --v55;
      v54 += 0x1000000;
      if (v55 == 0) {
        if (++v53 != v50) {
          goto LABEL_89;
        }
        break;
      }
    }
    if (v261_.v264 == (__int64*)&v261_.v261) {
      v59 = v56;
      v58 = 32;
      v47 = v52;
    LABEL_98:
      (*(void (**)(__int64*))(*v261_.v264 + v58))(v261_.v264);
      if ((v59 & 1) != 0) {
        goto LABEL_106;
      }
    LABEL_101:
      if (*(_QWORD*)(v45 + 392) == 0 || (*(_BYTE*)(v45 + 417) & 0x1C) != 0 ||
          (*(float (**)(__int64))(*(_QWORD*)(v45 + 152) + 16LL))(v45 + 152) <=
              0x0.0p+0f ||
          (*(_BYTE*)(*GameData_212ce90[0] + 21) & 1) == 0 &&
              (*(_BYTE*)(v45 + 417) & 0x20) == 0) {
        goto LABEL_172;
      }
      goto LABEL_106;
    }
    v47 = v52;
    if (v261_.v264 != nullptr) {
      v58 = 40;
      v59 = v56;
      goto LABEL_98;
    }
    if ((v56 & 1) == 0) {
      goto LABEL_101;
    }
  LABEL_106:
    v234_.v234 = 0x80000000000LL;
    v60 =
        game_UnitSkillList_GetMaxValue_alt1((_QWORD*)(v45 + 1744), &v234_.v234);
    if (v60 == 0) {
      goto LABEL_172;
    }
    v234_.v235 = nullptr;
    *(_QWORD*)&v234_.v236 = 0;
    v234_.v234 = 0;
    v61 = v60;
    v62 = *(char*)(v45 + 584);
    v63 = *GameData_212ce98[0];
    if (v62 - v60 <= *(unsigned __int8*)(*GameData_212ce98[0] + 28)) {
      v64 = *(unsigned __int8*)(*GameData_212ce98[0] + 28);
    }
    else {
      v64 = v62 - v60;
    }
    v65 = *(char*)(v45 + 585);
    v230 = v64;
    if (v65 - v60 <= *(unsigned __int8*)(*GameData_212ce98[0] + 29)) {
      v66 = *(unsigned __int8*)(*GameData_212ce98[0] + 29);
    }
    else {
      v66 = v65 - v60;
    }
    v67 = *(unsigned __int8*)(v63 + 30);
    v68 = *(unsigned __int8*)(v63 + 31);
    v69 = *(_DWORD*)(v45 + 592) + v60;
    v70 = v69 + v62;
    if (v70 >= v67) {
      v71 = v67;
    }
    else {
      v71 = v70;
    }
    if (v69 + v65 < v68) {
      v68 = v69 + v65;
    }
    v227 = v68;
    v72 = v66 <= v68 && v64 <= v71;
    if (!v72) {
      GameHr_f85860((__int64)&v265_.v265, (__int64)&v234_.v234);
      goto LABEL_172;
    }
    v225 = v47;
    v73 = 0;
    v74 = 0;
    do {
      v75 = v230;
      do {
        v76 = *(_DWORD*)(v45 + 592);
        v77 = *(char*)(v45 + 584);
        v78 = *(char*)(v45 + 585);
        if ((unsigned int)(v76 * v76) < 2) {
          v87 = v75 - v77;
          if (v87 < 0) {
            v87 = -v87;
          }
          v88 = v66 - v78;
          if (v88 < 0) {
            v88 = -v88;
          }
          v81 = v88 + v87;
        }
        else {
          if (v76 < 1) {
            if (v61 < 10000) {
              goto LABEL_129;
            }
            goto LABEL_150;
          }
          v79 = v76 + v78;
          v80 = v76 + v77;
          v81 = 10000;
          do {
            v82 = v66 - v78;
            v83 = v75 - v77;
            v84 = *(char*)(v45 + 584);
            if (v66 - v78 < 0) {
              v82 = v78 - v66;
            }
            do {
              ++v84;
              if (v83 >= 0) {
                v85 = v83;
              }
              else {
                v85 = -v83;
              }
              --v83;
              v86 = v85 + v82;
              if (v86 < v81) {
                v81 = v86;
              }
            } while (v84 < v80);
            ++v78;
          } while (v78 < v79);
        }
        if (v81 > v61) {
          goto LABEL_129;
        }
      LABEL_150:
        if (v73 < (unsigned __int64)v234_.v236) {
          *(_BYTE*)v73 = v75;
          *(_BYTE*)(v73 + 1) = v66;
          *(_WORD*)(v73 + 2) = 0;
          v73 += 4LL;
        }
        else {
          v89 = v73 - v74;
          v90 = (__int64)(v73 - v74) >> 2;
          v91 = v90 + 1;
          if ((unsigned __int64)(v90 + 1) >> 62 != 0) {
          LABEL_370:
            GameRoutine_74e1f0_alt1();
          }
          v92 = v234_.v236 - v74;
          if (((__int64)v234_.v236 - v74) >> 1 > v91) {
            v91 = v92 >> 1;
          }
          if ((unsigned __int64)v92 >= 0x7FFFFFFFFFFFFFFCLL) {
            v93 = 0x3FFFFFFFFFFFFFFFLL;
          }
          else {
            v93 = v91;
          }
          if (v93 >> 62 != 0) {
          LABEL_369:
            GameRoutine_60a210_alt1();
          }
          v94 = fw_memory_HeapManager_Allocate_alt1(
              *(_QWORD*)fw_memory_g_heap_manager_ptr, 4 * v93, 16, 0);
          v95 = v94 + v89;
          v96 = v94 + v89 - 4 * v90;
          *(_BYTE*)v95 = v75;
          *(_BYTE*)(v95 + 1) = v66;
          *(_WORD*)(v95 + 2) = 0;
          if (v74 != v73) {
            v97 = (_BYTE*)v74;
            v98 = (_BYTE*)v96;
            do {
              *v98 = *v97;
              v98[1] = v97[1];
              v98[2] = v97[2];
              v99 = v97[3];
              v97 += 4;
              v98[3] = v99;
              v98 += 4;
            } while (v97 != (_BYTE*)v73);
          }
          v73 = v95 + 4;
          v234_.v235 = (__int64 (***)(void))(v95 + 4);
          *(_QWORD*)&v234_.v236 = v94 + 4 * v93;
          if (v74 != 0) {
            v100 = 128;
            if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                0) {
              v100 = 56;
            }
            nn_mem_StandardAllocator_Free_alt2(
                *(_QWORD*)fw_memory_g_heap_manager_ptr + v100, v74);
          }
          v74 = v96;
        }
        v234_.v235 = (__int64 (***)(void))v73;
      LABEL_129:
        v72 = v75++ < v71;
      } while (v72);
      v234_.v234 = v74;
      v72 = v66++ < v227;
    } while (v72);
    GameHr_f85860((__int64)&v265_.v265, (__int64)&v234_.v234);
    v47 = v225;
    if (v74 != 0) {
      v234_.v235 = (__int64 (***)(void))v74;
      v101 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v101 = 56;
      }
      nn_mem_StandardAllocator_Free_alt2(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v101, v74);
    }
  LABEL_172:
    if (v47 != 0) {
      v44 = *(_QWORD*)(v47 + 432);
      v45 = v47;
      if (v44 == 0) {
        v102 = *(_QWORD*)(v47 + 440);
        v45 = v47;
        if (v102 != 0) {
          v103 = *(unsigned __int8*)(v102 + 16);
          v44 = 0;
          v45 = v47;
          if (v103 <= 8) {
            v104 = 24LL * (unsigned int)v103 + 556024;
            while (1) {
              if (v103 <= 2) {
                v44 = *(_QWORD*)(*(_QWORD*)(GameData_21ca310 + 56) + v104);
                if (v44 != 0) {
                  break;
                }
              }
              ++v103;
              v104 += 24;
              if (v103 == 9) {
                v44 = 0;
                v45 = v47;
                goto LABEL_87;
              }
            }
            v45 = v47;
          }
        }
      }
      continue;
    }
    break;
  }
LABEL_181:
  v105 = (unsigned __int8**)v265_.v265;
  v106 = v265_.v266;
  v258_.v259 = nullptr;
  v258_.v260 = 0;
  v258_.v258 = nullptr;
  if ((unsigned __int8**)v265_.v265 != v265_.v266) {
    v107 = nullptr;
    v108 = nullptr;
    v231 = v265_.v266;
    do {
      v109 = *v105;
      v110 = v105[1];
      while (v109 != v110) {
        if (v108 == v107) {
        LABEL_196:
          if ((unsigned __int64)v107 < v258_.v260) {
            *v107 = *v109;
            v107[1] = v109[1];
            v107[2] = v109[2];
            v107[3] = v109[3];
            v107 += 4;
          }
          else {
            v113 = v107 - v108;
            v114 = (v107 - v108) >> 2;
            v115 = v114 + 1;
            if ((unsigned __int64)(v114 + 1) >> 62 != 0) {
              goto LABEL_370;
            }
            v116 = v258_.v260 - (_QWORD)v108;
            if ((__int64)(v258_.v260 - (_QWORD)v108) >> 1 > v115) {
              v115 = v116 >> 1;
            }
            if ((unsigned __int64)v116 >= 0x7FFFFFFFFFFFFFFCLL) {
              v117 = 0x3FFFFFFFFFFFFFFFLL;
            }
            else {
              v117 = v115;
            }
            if (v117 >> 62 != 0) {
              goto LABEL_369;
            }
            v118 = fw_memory_HeapManager_Allocate_alt1(
                *(_QWORD*)fw_memory_g_heap_manager_ptr, 4 * v117, 16, 0);
            v119 = (unsigned __int8*)(v118 + v113);
            v120 = v118 + v113 - 4 * v114;
            *v119 = *v109;
            v119[1] = v109[1];
            v119[2] = v109[2];
            v119[3] = v109[3];
            if (v108 != v107) {
              v121 = v108;
              v122 = (_BYTE*)v120;
              do {
                *v122 = *v121;
                v122[1] = v121[1];
                v122[2] = v121[2];
                v123 = v121[3];
                v121 += 4;
                v122[3] = v123;
                v122 += 4;
              } while (v121 != v107);
            }
            v107 = v119 + 4;
            v258_.v258 = (unsigned __int8*)v120;
            v258_.v259 = v119 + 4;
            v258_.v260 = v118 + 4 * v117;
            if (v108 != nullptr) {
              v124 = 128;
              if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                  0) {
                v124 = 56;
              }
              nn_mem_StandardAllocator_Free_alt2(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr + v124, (__int64)v108);
            }
            v108 = (unsigned __int8*)v120;
          }
          v258_.v259 = v107;
        }
        else {
          v111 = v108;
          while (*v111 != *v109 || v111[1] != v109[1]) {
            v111 += 4;
            if (v111 == v107) {
              goto LABEL_196;
            }
          }
        }
        v109 += 4;
      }
      v106 = v231;
      v105 += 3;
    } while (v105 != v231);
    if (v107 != v108) {
      v257 = &v258_.v258;
      v228 = GameData_212f8b0[0] + 2;
      while (1) {
        game_map_f54910((__int64)&v234_.v234);
        v234_.v234 = (__int64)game_map_TrickTargetMeshData_vtable;
        v126 = *v108;
        v127 = v108[1];
        v232_.v232[0] = GameData_1ff8098;
        v232_.v232[1] = &v257;
        v232_.v233 = v232_.v232;
        v129 =
            MapDrawConst_fcbcc0_alt1(a1, 1, v126, v127, (__int64)v232_.v232, 1);
        if (v232_.v233 == v232_.v232) {
          v130 = 32;
        }
        else {
          if (v232_.v233 == nullptr) {
            goto LABEL_223;
          }
          v130 = 40;
        }
        (*(void (**)(__int64))(*v232_.v233 + v130))((__int64)v232_.v233);
      LABEL_223:
        GameHr_fcacb0(a1, (__int64)&v234_.v234, 1, (unsigned int)(char)*v108,
                      (unsigned int)(char)v108[1], v129);
        if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6130,
                                  memory_order_acquire) &
             1) == 0 &&
            __cxa_guard_acquire_alt1((__int64)&GameData_21a6130) != 0) {
          v180 = *((_QWORD*)GameData_212c540 + 1);
          *(_QWORD*)&GameData_21a6120 = *(_QWORD*)GameData_212c540;
          *((_QWORD*)&GameData_21a6120 + 1) = v180;
          __cxa_guard_release_alt1((__int64)&GameData_21a6130);
        }
        v131 = COERCE_AS(float32x4_t, GameData_21a6120);
        v133 = v234_.v242;
        v132 = (char*)v234_.v243;
        if (v234_.v243 != v234_.v242) {
          v134 = (char*)v234_.v242;
          do {
            v135 = *((float32x4_t*)v134 + 1);
            v134 += 64;
            v131 = vaddq_f32(v131, v135);
          } while (v134 != (char*)v234_.v243);
          v131 = vmulq_n_f32(
              v131, 0x1.0000000000000p+0f /
                        (float)(unsigned __int64)(((char*)v234_.v243 -
                                                   (char*)v234_.v242) >>
                                                  6));
          LANES128(v131).n128_u32[3] = 0;
        }
        v136 = vsubq_f32(v131, v234_.v249);
        v137 = vmulq_f32(v136, v136);
        LANES128(v137).n128_u64[0] =
            LANES64_OF(
                vadd_f32(COERCE_AS(
                             float32x2_t,
                             LANES128_OF(vextq_s8(v137, v137, 8u)).n128_u64[0]),
                         COERCE_AS(float32x2_t, LANES128(v137).n128_u64[0])))
                .n64_u64[0];
        if (LANES64_OF(
                vpadd_f32(COERCE_AS(float32x2_t, LANES128(v137).n128_u64[0]),
                          COERCE_AS(float32x2_t, LANES128(v137).n128_u64[0])))
                    .n64_f32[0] > 0x0.0p+0f &&
            v234_.v243 != v234_.v242) {
          do {
            v133[1] = vsubq_f32(v133[1], v136);
            v133 += 4;
          } while (v133 != (float32x4_t*)v132);
        }
        LANES128(v139).n128_u64[0] = LANES128(v131).n128_u64[0];
        LANES128(v139).n128_u64[1] = LANES128(v131).n128_u32[2];
        v234_.v249 = v139;
        v140 = (*(__int64 (**)(__int64*))(v234_.v234 + 32))(&v234_.v234);
        v141 = *v224;
        v142 = v140;
        v143 = (__int64**)v224;
        v144 = (__int64)v224;
        if (*v224 != 0) {
          v145 = (_QWORD*)*v224;
          while (1) {
            v146 = v145[4];
            if (v140 >= v146) {
              if (v146 >= v140) {
                while (1) {
                  while (1) {
                    v147 = *(_QWORD*)(v141 + 32);
                    if (v140 >= v147) {
                      break;
                    }
                    v141 = *(_QWORD*)v141;
                    if (v141 == 0) {
                      goto LABEL_372;
                    }
                  }
                  if (v147 >= v140) {
                    goto LABEL_264;
                  }
                  v141 = *(_QWORD*)(v141 + 8);
                  if (v141 == 0) {
                  LABEL_372:
                    String_60a250_alt1("map::at:  key not found");
                  }
                }
              }
              ++v145;
            }
            v145 = (_QWORD*)*v145;
            if (v145 == nullptr) {
              while (1) {
                while (1) {
                  v148 = *(_QWORD*)(v141 + 32);
                  v144 = v141;
                  if (v140 >= v148) {
                    break;
                  }
                  v141 = *(_QWORD*)v141;
                  v143 = (__int64**)v144;
                  if (*(_QWORD*)v144 == 0) {
                    goto LABEL_249;
                  }
                }
                if (v148 >= v140) {
                  goto LABEL_252;
                }
                v141 = *(_QWORD*)(v141 + 8);
                if (v141 == 0) {
                  v143 = (__int64**)(v144 + 8);
                  goto LABEL_249;
                }
              }
            }
          }
        }
      LABEL_249:
        v149 = v144;
        v144 = fw_memory_HeapManager_Allocate_alt1(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 304, 16, 0);
        *(_QWORD*)(v144 + 32) = v142;
        game_map_f54910(v144 + 48);
        *(_QWORD*)(v144 + 16) = v149;
        *(_QWORD*)(v144 + 48) = game_map_TrickTargetMeshData_vtable;
        v150 = (__int64*)v144;
        *(_QWORD*)v144 = 0;
        *(_QWORD*)(v144 + 8) = 0;
        *v143 = (__int64*)v144;
        v151 = **(_QWORD**)(a1 + 16);
        if (v151 != 0) {
          *(_QWORD*)(a1 + 16) = v151;
          v150 = *v143;
        }
        fw_containers_BalanceAfterInsert_alt1(*(__int64**)(a1 + 24), v150);
        ++*(_QWORD*)(a1 + 32);
      LABEL_252:
        *(_QWORD*)(v144 + 56) = v234_.v235;
        v152 = v234_.v237;
        *(_OWORD*)(v144 + 64) = v234_.v236;
        *(_OWORD*)(v144 + 80) = v152;
        v153 = v234_.v238;
        v154 = v234_.v239;
        v155 = v234_.v241;
        *(_QWORD*)(v144 + 128) = v234_.v240;
        *(_QWORD*)(v144 + 136) = v155;
        *(_OWORD*)(v144 + 96) = v153;
        *(_OWORD*)(v144 + 112) = v154;
        if ((__int64*)(v144 + 48) != &v234_.v234) {
          GameRoutine_f155c0_alt1((__int64*)(v144 + 144), (char*)v234_.v242,
                                  (char*)v234_.v243,
                                  ((char*)v234_.v243 - (char*)v234_.v242) >> 6);
          CharacterController_d42d20_alt1(v144 + 168, v234_.v244, v234_.v245,
                                          (v234_.v245 - v234_.v244) >> 4);
        }
        v156 = v234_.v246;
        v157 = v234_.v249;
        v158 = v234_.v248;
        v159 = (__int64**)v224;
        v141 = (__int64)v224;
        *(_QWORD*)(v144 + 208) = v234_.v247;
        *(_QWORD*)(v144 + 216) = v158;
        *(_QWORD*)(v144 + 192) = v156;
        *(_QWORD*)(v144 + 224) = LANES128(v157).n128_u64[0];
        v160 = *(_OWORD*)(v144 + 192);
        *((_QWORD*)&v160 + 1) = DWORD2(v156);
        v161 = *(_OWORD*)(v144 + 224);
        *((_QWORD*)&v161 + 1) = LANES128(v157).n128_u32[2];
        *(_OWORD*)(v144 + 192) = v160;
        v162 = v234_.v250;
        v163 = v234_.v251;
        *(_OWORD*)(v144 + 224) = v161;
        *(_QWORD*)(v144 + 240) = v162;
        *(_QWORD*)(v144 + 248) = v163;
        v164 = v234_.v253;
        v165 = v234_.v256;
        *(_QWORD*)(v144 + 256) = v234_.v252;
        *(_QWORD*)(v144 + 264) = v164;
        *(_DWORD*)(v144 + 288) = v165;
        v166 = v234_.v255;
        *(_QWORD*)(v144 + 272) = v234_.v254;
        *(_QWORD*)(v144 + 280) = v166;
        v167 = *v224;
        if (*v224 != 0) {
          while (1) {
            while (1) {
              v141 = v167;
              v168 = *(_QWORD*)(v167 + 32);
              if (v142 >= v168) {
                break;
              }
              v167 = *(_QWORD*)v141;
              v159 = (__int64**)v141;
              if (*(_QWORD*)v141 == 0) {
                goto LABEL_261;
              }
            }
            if (v168 >= v142) {
              break;
            }
            v167 = *(_QWORD*)(v141 + 8);
            if (v167 == 0) {
              v159 = (__int64**)(v141 + 8);
              goto LABEL_261;
            }
          }
        }
        else {
        LABEL_261:
          v169 = v141;
          v141 = fw_memory_HeapManager_Allocate_alt1(
              *(_QWORD*)fw_memory_g_heap_manager_ptr, 304, 16, 0);
          *(_QWORD*)(v141 + 32) = v142;
          game_map_f54910(v141 + 48);
          *(_QWORD*)(v141 + 48) = game_map_TrickTargetMeshData_vtable;
          *(_QWORD*)v141 = 0;
          *(_QWORD*)(v141 + 8) = 0;
          v170 = (__int64*)v141;
          *(_QWORD*)(v141 + 16) = v169;
          *v159 = (__int64*)v141;
          v171 = **(_QWORD**)(a1 + 16);
          if (v171 != 0) {
            *(_QWORD*)(a1 + 16) = v171;
            v170 = *v159;
          }
          fw_containers_BalanceAfterInsert_alt1(*(__int64**)(a1 + 24), v170);
          ++*(_QWORD*)(a1 + 32);
        }
      LABEL_264:
        v172 = *(_QWORD*)(v141 + 48);
        *(_BYTE*)(v141 + 272) = 1;
        if (((*(__int64 (**)(__int64))(v172 + 48))((__int64)(v141 + 48)) & 1) !=
            0) {
          v173 = 1036831949;
        }
        else {
          v173 = 0;
          *(_DWORD*)(v141 + 276) = 1065353216;
        }
        v174 = v234_.v244;
        *(_DWORD*)(v141 + 280) = v173;
        v234_.v234 = (__int64)v228;
        if (v174 != nullptr) {
          v234_.v245 = v174;
          v175 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v175 = 56;
          }
          nn_mem_StandardAllocator_Free_alt2(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v175, (__int64)v174);
        }
        v176 = (char*)v234_.v242;
        if (v234_.v242 != nullptr) {
          if (v234_.v242 == v234_.v243) {
            goto LABEL_214;
          }
          v177 = (char*)&v234_.v243[-4];
          v178 = (char*)&v234_.v243[-4];
          do {
            v179 = *(void (***)(char*))v178;
            v178 -= 64;
            (*v179)(v177);
            v16 = v177 == v176;
            v177 = v178;
          } while (!v16);
          v234_.v243 = (float32x4_t*)v176;
          v176 = (char*)v234_.v242;
          if (v234_.v242 != nullptr) {
          LABEL_214:
            v125 = 128;
            if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                0) {
              v125 = 56;
            }
            nn_mem_StandardAllocator_Free_alt2(
                *(_QWORD*)fw_memory_g_heap_manager_ptr + v125, (__int64)v176);
          }
        }
        v108 += 4;
        if (v108 == v107) {
          v108 = v258_.v258;
          break;
        }
      }
    }
    if (v108 != nullptr) {
      v258_.v259 = v108;
      v181 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v181 = 56;
      }
      nn_mem_StandardAllocator_Free_alt2(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v181, (__int64)v108);
    }
  }
  v182 = v265_.v265;
  if (v265_.v265 != 0) {
    if ((unsigned __int8**)v265_.v265 != v106) {
      v183 = v106;
      v184 = fw_memory_g_heap_manager_ptr;
      do {
        v186 = (__int64)*(v183 - 3);
        v183 -= 3;
        v185 = v186;
        if (v186 != 0) {
          *(v106 - 2) = (unsigned __int8*)v185;
          if (*(_QWORD*)(*(_QWORD*)v184 + 200LL) != 0) {
            v187 = 128;
          }
          else {
            v187 = 56;
          }
          nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)v184 + v187, v185);
        }
        v106 = v183;
      } while (v183 != (unsigned __int8**)v182);
    }
    v188 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v188 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v188, v182);
  }
  if (v268_.v268 != nullptr) {
    v268_.v269 = (__int64)v268_.v268;
    v189 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v189 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v189, (__int64)v268_.v268);
  }
  v1 = a1;
LABEL_302:
  *(_BYTE*)(v1 + 8) = 0;
LABEL_303:
  v190 = *(float32x4_t**)(v1 + 16);
  v191 = (float32x4_t*)(v1 + 24);
  if (v190 != (float32x4_t*)(v1 + 24)) {
    v192 = game_script_hub_g_frame_counter_ptr[0];
    v193 = fw_memory_g_heap_manager_ptr;
    v194 = GameData_212f8b0[0] + 2;
    do {
      v197 = LANES128(v190[17]).n128_f32[2];
      v198 =
          (float)(*(float*)(*(_QWORD*)v192 + 160LL) * 0x1.0aef000000000p+4f) /
          0x1.f400000000000p+9f;
      if (v197 <= 0x0.0p+0f) {
        if (LANES128(v190[17]).n128_u8[0] != 0) {
          v201 = 0x1.0000000000000p+0f;
        }
        else {
          v201 = 0x0.0p+0f;
        }
      }
      else {
        v199 = v198 / v197;
        v200 = LANES128(v190[17]).n128_f32[1];
        if (LANES128(v190[17]).n128_u8[0] != 0) {
          v201 = fminf(fmaxf(v199 + v200, 0x1.51eb860000000p-2f),
                       0x1.0000000000000p+0f);
        }
        else {
          v201 = fminf(fmaxf(v200 - v199, 0x0.0p+0f), 0x1.570a3c0000000p-1f);
        }
      }
      LANES128(v190[17]).n128_f32[1] = v201;
      v202 = LANES128(v190[3]).n128_u64[0];
      LANES128(v190[15]).n128_f32[0] = v198 + LANES128(v190[15]).n128_f32[0];
      (*(void (**)(float32x4_t*))(v202 + 40))(v190 + 3);
      GameRoutine_f54fe0(v190 + 3);
      v203 = (float32x4_t*)LANES128(*(v190)).n128_u64[1];
      if ((LANES128(v190[17]).n128_u8[0] & 1) != 0 ||
          LANES128(v190[17]).n128_f32[1] > 0x0.0p+0f) {
        if (v203 != nullptr) {
          do {
            v205 = v203;
            v203 = (float32x4_t*)LANES128(*(v203)).n128_u64[0];
          } while (v203 != nullptr);
        }
        else {
          do {
            v205 = (float32x4_t*)LANES128(v190[1]).n128_u64[0];
            v16 = v190 == (float32x4_t*)LANES128(*(v205)).n128_u64[0];
            v190 = v205;
          } while (!v16);
        }
      }
      else {
        v204 = v190;
        if (v203 != nullptr) {
          do {
            v205 = v203;
            v203 = (float32x4_t*)LANES128(*(v203)).n128_u64[0];
          } while (v203 != nullptr);
        }
        else {
          do {
            v205 = (float32x4_t*)LANES128(v204[1]).n128_u64[0];
            v16 = v204 == (float32x4_t*)LANES128(*(v205)).n128_u64[0];
            v204 = v205;
          } while (!v16);
        }
        if (*(float32x4_t**)(v1 + 16) == v190) {
          *(_QWORD*)(v1 + 16) = v205;
        }
        v206 = *(__int64**)(v1 + 24);
        --*(_QWORD*)(v1 + 32);
        GameRoutine_64dfe0_alt1(v206, (__int64*)v190);
        v207 = LANES128(v190[10]).n128_i64[1];
        LANES128(v190[3]).n128_u64[0] = (unsigned __int64)v194;
        if (v207 != 0) {
          v208 = *(_QWORD*)v193;
          LANES128(v190[11]).n128_u64[0] = v207;
          if (*(_QWORD*)(v208 + 200) != 0) {
            v209 = 128;
          }
          else {
            v209 = 56;
          }
          nn_mem_StandardAllocator_Free_alt2(v208 + v209, v207);
        }
        v210 = LANES128(v190[9]).n128_i64[0];
        if (v210 != 0) {
          v211 = LANES128(v190[9]).n128_u64[1];
          if (v210 == v211) {
            goto LABEL_305;
          }
          v212 = v193;
          v213 = v194;
          v214 = v192;
          v215 = (void (***)(_QWORD))(v211 - 64);
          v216 = (void (***)(_QWORD))(v211 - 64);
          do {
            v217 = *v216;
            v216 -= 8;
            (*v217)(v215);
            v16 = v215 == (void (***)(_QWORD))v210;
            v215 = v216;
          } while (!v16);
          v218 = LANES128(v190[9]).n128_i64[0];
          v1 = a1;
          v192 = v214;
          v194 = v213;
          v193 = v212;
          LANES128(v190[9]).n128_u64[1] = v210;
          v210 = v218;
          if (v218 != 0) {
          LABEL_305:
            if (*(_QWORD*)(*(_QWORD*)v193 + 200LL) != 0) {
              v195 = 128;
            }
            else {
              v195 = 56;
            }
            nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)v193 + v195, v210);
          }
        }
        if (*(_QWORD*)(*(_QWORD*)v193 + 200LL) != 0) {
          v196 = 128;
        }
        else {
          v196 = 56;
        }
        nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)v193 + v196,
                                           (__int64)v190);
      }
      v190 = v205;
    } while (v205 != v191);
  }
}

void MapPanelTrickTarget_Unknown4(__int64 a1)
{

#pragma clang fp contract(off)
  float32x4_t v2;
  float32x4_t* v3;
  float32x4_t v4;
  float32x4_t v5;
  unsigned __int32 v6;
  unsigned int v7;
  float32x4_t v8;
  float32x4_t v9;
  __int64* v10;
  _QWORD* v11;
  float32x4_t* v12;
  unsigned __int64 v13;
  __int64 v14;
  int v15;
  unsigned __int64 v16;
  __int64 v17;
  unsigned __int64 v18;
  __int64 v19;
  _QWORD* v20;
  _QWORD* v21;
  __int64 v22;
  __int64 v23;
  float32x4_t* v24;
  unsigned __int64 v25;
  _QWORD* v26;
  _QWORD* v27;
  bool v28;
  __int64 v29;
  int v30;
  unsigned __int64 v31;
  __int64 v32;
  unsigned __int64 v33;
  unsigned __int64 v34;
  __int64 v35;
  _QWORD* v36;
  __int64 v37;
  _QWORD* v38;
  _QWORD* v39;
  struct {
    _QWORD v40[4];
    float32x4_t v41;
    float32x4_t v42;
    __int64 v43;
    int v44;
    char gap76_[4];
    unsigned __int64 v45;
    unsigned __int64 v46;
    unsigned __int64 v47;
    unsigned __int8 v48;
  } v40_;
  struct {
    unsigned __int64 v49[4];
    float32x4_t v50;
    float32x4_t v51;
    __int64 v52;
    int v53;
    char gap188_[4];
    float32x4_t v54;
    unsigned __int64 v55;
    unsigned __int8 v56;
  } v49_;

  BYTE4(v40_.v47) = 0;
  v40_.v48 = 0;
  LOWORD(v40_.v47) = 0;
  v40_.v45 = 0;
  v40_.v46 = 0;
  strcpy((char*)v40_.v40, ",MapPanelDeployTutorial");
  v2 = *(float32x4_t*)GameData_212c958;
  v40_.v43 = 0x500000000LL;
  v3 = (float32x4_t*)*GameData_212f878;
  qmemcpy(v49_.v49, v40_.v40, 24);
  v40_.v44 = 1;
  v49_.v53 = 1;
  v5 = v3[5];
  v4 = v3[6];
  v49_.v54 = (__typeof__(v49_.v54)){0};
  v49_.v55 = v40_.v47;
  v6 = LANES128(v3[89]).n128_u32[3];
  *(float*)&v7 = -LANES128(v3[89]).n128_f32[2];
  v40_.v41 = vmulq_f32(v2, v5);
  v40_.v42 = vmulq_f32(v2, v4);
  v49_.v52 = 0x500000000LL;
  v49_.v50 = v40_.v41;
  v49_.v51 = v40_.v42;
  v49_.v56 = 0;
  v9 = v3[3];
  v8 = v3[4];
  v49_.v53 = 0;
  LOBYTE(v49_.v55) = 1;
  v49_.v50 = vmulq_f32(v2, v9);
  v49_.v51 = vmulq_f32(v2, v8);
  LANES128(v49_.v50).n128_u32[3] =
      vmuls_lane_f32(LANES128(v49_.v50).n128_f32[3], v40_.v41, 3);
  LANES128(v2).n128_u64[0] = __PAIR64__(v7, v6);
  LANES128(v49_.v51).n128_u32[3] =
      vmuls_lane_f32(LANES128(v49_.v51).n128_f32[3], v40_.v42, 3);
  LANES128(v2).n128_u64[1] = v6;
  v49_.v54 = v2;
  v10 = (__int64*)GameData_212d018[0];
  v11 = *(_QWORD**)GameData_212d018[0];
  v12 = *(float32x4_t**)(*(_QWORD*)GameData_212d018[0] + 24LL);
  if ((unsigned __int64)v12 >=
      *(_QWORD*)(*(_QWORD*)GameData_212d018[0] + 32LL)) {
    v14 = PrimitiveDrawStack_f525a0(v11 + 2, (__int64)v49_.v49);
  }
  else {
    if ((v49_.v49[0] & 1) != 0) {
      fw_text_String_CopyTerminated(
          *(__int64**)(*(_QWORD*)GameData_212d018[0] + 24LL), v49_.v49[2],
          v49_.v49[1]);
    }
    else {
      LANES128(*(v12)).n128_u64[1] = v40_.v40[1];
      v13 = v40_.v40[0];
      LANES128(v12[1]).n128_u64[0] = v40_.v40[2];
      LANES128(*(v12)).n128_u64[0] = v13;
    }
    v15 = v49_.v53;
    v14 = (__int64)&v12[7];
    LANES128(v12[3]).n128_u64[1] = LANES128(v49_.v51).n128_u64[1];
    v12[2] = v49_.v50;
    v16 = LANES128(v49_.v51).n128_u64[0];
    v17 = v49_.v52;
    LANES128(v12[4]).n128_u32[2] = v15;
    LANES128(v12[4]).n128_u64[0] = v17;
    LANES128(v12[3]).n128_u64[0] = v16;
    v12[5] = v49_.v54;
    v18 = v49_.v55;
    LANES128(v12[6]).n128_u8[8] = v49_.v56;
    LANES128(v12[6]).n128_u64[0] = v18;
  }
  v19 = v11[2];
  v11[3] = v14;
  v11[1] = 0x6DB6DB6DB6DB6DB7LL * ((v14 - v19) >> 4) - 1;
  v20 = (_QWORD*)(a1 + 24);
  v21 = *(_QWORD**)(a1 + 16);
  if (v21 != (_QWORD*)(a1 + 24)) {
    do {
      PrimitiveDrawStack_f51430(*v10, (__int64)(v21 + 6));
      v26 = (_QWORD*)v21[1];
      if (v26 != nullptr) {
        do {
          v27 = v26;
          v26 = (_QWORD*)*v26;
        } while (v26 != nullptr);
      }
      else {
        do {
          v27 = (_QWORD*)v21[2];
          v28 = v21 == (_QWORD*)*v27;
          v21 = v27;
        } while (!v28);
      }
      v21 = v27;
    } while (v27 != v20);
  }
  v22 = *v10;
  *(_QWORD*)(*v10 + 8) = 1024;
  if ((v49_.v49[0] & 1) != 0 && v49_.v49[2] != 0) {
    v23 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v23 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v23, v49_.v49[2]);
    v22 = *v10;
  }
  v24 = *(float32x4_t**)(v22 + 24);
  if ((unsigned __int64)v24 >= *(_QWORD*)(v22 + 32)) {
    v29 = PrimitiveDrawStack_f525a0((__int64*)(v22 + 16), (__int64)v40_.v40);
  }
  else {
    if ((v40_.v40[0] & 1) != 0) {
      fw_text_String_CopyTerminated(*(__int64**)(v22 + 24), v40_.v40[2],
                                    v40_.v40[1]);
    }
    else {
      LANES128(*(v24)).n128_u64[1] = v40_.v40[1];
      v25 = v40_.v40[0];
      LANES128(v24[1]).n128_u64[0] = v40_.v40[2];
      LANES128(*(v24)).n128_u64[0] = v25;
    }
    v30 = v40_.v44;
    v29 = (__int64)&v24[7];
    LANES128(v24[3]).n128_u64[1] = LANES128(v40_.v42).n128_u64[1];
    v24[2] = v40_.v41;
    v31 = LANES128(v40_.v42).n128_u64[0];
    v32 = v40_.v43;
    LANES128(v24[4]).n128_u32[2] = v30;
    LANES128(v24[4]).n128_u64[0] = v32;
    LANES128(v24[3]).n128_u64[0] = v31;
    v33 = v40_.v46;
    LANES128(v24[5]).n128_u64[0] = v40_.v45;
    LANES128(v24[5]).n128_u64[1] = v33;
    v34 = v40_.v47;
    LANES128(v24[6]).n128_u8[8] = v40_.v48;
    LANES128(v24[6]).n128_u64[0] = v34;
  }
  v35 = *(_QWORD*)(v22 + 16);
  *(_QWORD*)(v22 + 24) = v29;
  *(_QWORD*)(v22 + 8) = 0x6DB6DB6DB6DB6DB7LL * ((v29 - v35) >> 4) - 1;
  v36 = *(_QWORD**)(a1 + 16);
  if (v36 != v20) {
    do {
      PrimitiveDrawStack_f51430(*v10, (__int64)(v36 + 6));
      v38 = (_QWORD*)v36[1];
      if (v38 != nullptr) {
        do {
          v39 = v38;
          v38 = (_QWORD*)*v38;
        } while (v38 != nullptr);
      }
      else {
        do {
          v39 = (_QWORD*)v36[2];
          v28 = v36 == (_QWORD*)*v39;
          v36 = v39;
        } while (!v28);
      }
      v36 = v39;
    } while (v39 != v20);
  }
  *(_QWORD*)(*v10 + 8) = 1024;
  if ((v40_.v40[0] & 1) != 0 && v40_.v40[2] != 0) {
    v37 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v37 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v37, v40_.v40[2]);
  }
}

__int64 MapPanelTrickTarget_Destructor(_QWORD* a1)
{
  *a1 = game_map_MapPanelTrickTarget_vtable;
  return GameRoutine_f85d20(a1[3]);
}

void MapPanelTrickTarget_DeletingDestructor(__int64 a1)
{
  __int64 v2;

  *(_QWORD*)a1 = game_map_MapPanelTrickTarget_vtable;
  GameRoutine_f85d20_alt1(*(_QWORD**)(a1 + 24));
  v2 = 128;
  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
    v2 = 56;
  }
  nn_mem_StandardAllocator_Free_alt2(
      *(_QWORD*)fw_memory_g_heap_manager_ptr + v2, a1);
}

_BYTE* game_map_MapPanelTrickTarget_UpdateTarget_lambda0_Invoke(__int64 a1,
                                                                _DWORD* a2,
                                                                _DWORD* a3)
{
  char v3;
  __int64* v4;
  struct {
    _BYTE v6[2];
    __int16 v7;
  } v6_;

  v3 = *a2;
  v4 = *(__int64**)(a1 + 8);
  v6_.v7 = 0;
  v6_.v6[0] = v3;
  v6_.v6[1] = *a3;
  return GameRoutine_74e080_alt1(v4, (__int64)v6_.v6);
}

_BYTE* game_map_MapPanelTrickTarget_UpdateTarget_lambda1_Invoke(__int64 a1,
                                                                _DWORD* a2,
                                                                _DWORD* a3)
{
  char v3;
  __int64* v4;
  struct {
    _BYTE v6[2];
    __int16 v7;
  } v6_;

  v3 = *a2;
  v4 = *(__int64**)(a1 + 8);
  v6_.v7 = 0;
  v6_.v6[0] = v3;
  v6_.v6[1] = *a3;
  return GameRoutine_74e080_alt1(v4, (__int64)v6_.v6);
}

bool game_map_MapPanelTrickTarget_UpdateTarget_lambda2_Invoke(__int64 a1,
                                                              _DWORD* a2,
                                                              _DWORD* a3)
{
  char* v3;

  v3 = *(char**)(a1 + 8);
  return *a2 == *v3 && *a3 == v3[1];
}

__int64 game_map_MapPanelTrickTarget_UpdateTarget_lambda3_Invoke(__int64 a1,
                                                                 _DWORD* a2,
                                                                 _DWORD* a3)
{
  char** v3;
  char* v4;
  char* v5;

  v3 = **(char****)(a1 + 8);
  v4 = *v3;
  v5 = v3[1];
  if (v4 == v5) {
    return 0;
  }
  while (*a2 != *v4 || *a3 != v4[1]) {
    v4 += 4;
    if (v4 == v5) {
      return 0;
    }
  }
  return 1;
}

#pragma GCC visibility pop
