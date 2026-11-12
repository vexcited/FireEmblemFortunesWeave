#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__attribute__((swiftcall)) void GameRoutine_1572700(PSEUDO_X8, __int64*,
                                                    const char**);
__attribute__((swiftcall)) void GameRoutine_9d5180(PSEUDO_X8, __int64*,
                                                   _QWORD*);
__attribute__((swiftcall)) void GameRoutine_fa73c0(PSEUDO_X8, __int64*,
                                                   const char**);
__attribute__((swiftcall)) void LayoutAccessor_1560070(PSEUDO_X8, __int64*,
                                                       const char*);
__attribute__((swiftcall)) void game_gameui_1594d10(PSEUDO_X8, _WORD* result,
                                                    int, __int64);
__int64 GameHr_15b7780(_QWORD*);
__int64 GameRoutine_156d580(__int64);
__int64 GameRoutine_156d790(__int64);
__int64 GameRoutine_156d8f0(__int64);
__int64 GameRoutine_174d580(__int64, unsigned int*, __int64, float);
__int64 LayoutAccessor_1562cf0(__int64 result, unsigned int*);
__int64 Manager_136a920(__int64, __int64, int, unsigned int, _BYTE*);
__int64 Manager_136afb0(__int64, unsigned int, _BYTE*);
__int64 StatusClass_189d120(__int64*, _QWORD*, char, char, char, char, char);
__int64 StatusHP_18920d0(_QWORD*, __int64, char);
__int64 StatusNum_1890220(__int64, unsigned int, unsigned int, unsigned int,
                          char, char, int);
__int64 StatusNum_1890820(__int64, unsigned int, unsigned int);
__int64 UnitDerivedParams_6deeb0(__int64, char);
__int64 UnitItemList_710640(__int64);
__int64 UnitItemList_710b30(__int64);
__int64 Unit_6c8300(_QWORD*, char);
__int64 Util_15792c0(__int64*, unsigned __int16*, char, unsigned __int8,
                     __int64, const char*, const char*, int);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 game_1841930(__int64, __int64);
__int64 game_Unit_GetAttack(__int64, char, int, int, char);
__int64 game_Unit_GetParam(__int64);
__int64 game_Unit_GetParamLimit(_QWORD*, unsigned __int8*);
__int64 game_Unit_GetUnknown4(__int64, char);
__int64 game_Unit_GetUnknown6(__int64, char);
__int64 std___1___shared_weak_count___release_weak(__int64);
__int64 std___1___shared_weak_count_lock(__int64);
__int64 ui_LayoutAccessor_FindPane(__int64*, const char*);
__int64 ui_LayoutAccessor_FindTextBox(__int64*, const char*);
__int64 ui_LayoutAccessor_SetPaneVisible(__int64 result, const char*, char);
bool game_6ed370(__int64);
bool game_HasSkill(_QWORD*, _DWORD*);
char* GameRoutine_a4dbe0(__int64, const char*, char);
char* game_util_Format(const char*, ...);
extern _BYTE GameData_1c019a4[10];
extern _DWORD* game_g_shared_system_skills_ptr;
extern _UNKNOWN* GameData_20c9688;
extern __int64 (*GameData_20c94c8[])();
extern __int64 (*GameData_20c9548[])();
extern __int64 (*GameData_20c95c8[])();
extern __int64* GameData_212c878[6];
extern __int64* GameData_212c8a0;
extern __int64* GameData_212c8b0[11];
extern __int64* GameData_212c998[148];
extern __int64* GameData_212d670[3];
extern __int64* GameData_212d678[2];
extern __int64* GameData_212e348;
extern __int64* game_g_empty_item_ptr;
extern __int64* msg_MessageManager_instance__ptr[2];
extern __int64* ui_LayoutAccessor_empty__ptr[3];
extern __int64 GameData_212d690;
extern __int64 GameData_21c99b8;
extern __int64 GameData_21d9968;
extern __int64 GameData_21d9970;
extern __int64 GameData_21f4018[];
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 ui_LayoutAccessor_empty_;
extern __int64 ui_Manager_instance_;
extern char GameData_1a9f09e;
unsigned __int64 strlen(const char*);
unsigned __int8* Unit_931120(unsigned __int8*);
void GameRoutine_156c5d0(__int64, __int64, char);
void GameRoutine_156c910(__int64 result, const char*, int, ...);
void nn_mem_StandardAllocator_Free(__int64, __int64);
__int64 game_menu_UnitTroopMenuItem_OnUpdateContent(__int64 a1);
void game_menu_UnitTroopMenuItem_OnUpdateContent_lambda1_Invoke(_QWORD* a1,
                                                                int* a2);
__int64 UnitTroopMenuItem_1795520(__int64 a1, int a2, unsigned int a3,
                                  unsigned int a4);
__int64 game_menu_UnitTroopMenuItem_OnUpdateContent_lambda2_Invoke(__int64 a1,
                                                                   int* a2);
__int64* Util_1580bf0(__int64* result, __int64, unsigned int, char, char, char,
                      char, char);
__int64 Util_1580a10(__int64 result, unsigned __int8);
__int64 game_HasSkill_alt1(_QWORD*, unsigned int*) __asm__("game_HasSkill");
extern __int64 GameData_21d99a8;
extern __int64 GameData_21d99b0;
__int64 game_menu_UnitTroopMenuItem_OnUpdateContent_lambda0_Invoke(
    __int64 result, unsigned __int8* a2, int* a3);

__int64 game_menu_UnitTroopMenuItem_OnUpdateContent(__int64 a1)
{

#pragma clang fp contract(off)
  __int64 v2;
  __int64 v3;
  __int64* v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  atomic_ullong* v9;
  __int64* v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  char v14;
  _BYTE* v15;
  __int64 v16;
  int v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  atomic_ullong* v21;
  __int64* v22;
  __int64* v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  unsigned int v27;
  __int64 v28;
  unsigned int v29;
  __int64** v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  atomic_ullong* v35;
  __int64* v36;
  __int64* v37;
  __int64 v38;
  __int64* v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  atomic_ullong* v43;
  __int64* v44;
  __int64* v45;
  __int64** v46;
  __int64* v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  atomic_ullong* v51;
  __int64* v52;
  __int64* v53;
  __int64 v54;
  __int64 v55;
  __int64 v56;
  __int64 v57;
  __int64 v58;
  atomic_ullong* v59;
  __int64* v60;
  __int64* v61;
  __int64 v62;
  __int64 v63;
  __int64 v64;
  int v65;
  int v66;
  int v67;
  __int64 v68;
  __int64 v69;
  __int64 v70;
  __int64* v71;
  __int64 v72;
  __int64 v73;
  __int64 v74;
  __int64 v75;
  atomic_ullong* v76;
  __int64* v77;
  __int64* v78;
  __int64 v79;
  __int64* v80;
  __int64 v81;
  _BOOL4 v82;
  __int64 v83;
  __int64 v84;
  __int64 v85;
  atomic_ullong* v86;
  __int64* v87;
  __int64* v88;
  __int64 v89;
  __int64 v90;
  __int64* v91;
  __int64 v92;
  __int64 v93;
  int v94;
  int v95;
  unsigned int v96;
  __int64 v97;
  __int64 v98;
  __int64 v99;
  __int64 v100;
  __int64 v101;
  atomic_ullong* v102;
  __int64* v103;
  __int64* v104;
  __int64 v105;
  __int64 v106;
  unsigned int v107;
  __int64 v108;
  bool v109;
  __int64 v110;
  char v111;
  __int64 v112;
  __int64 v113;
  __int64 v114;
  atomic_ullong* v115;
  __int64* v116;
  __int64* v117;
  __int64 v118;
  __int64 v119;
  __int64 v120;
  atomic_ullong* v121;
  __int64* v122;
  __int64* v123;
  _BOOL4 v124;
  __int64 v125;
  __int64 v126;
  __int64 v127;
  atomic_ullong* v128;
  __int64* v129;
  __int64* v130;
  char* v131;
  __int64 v132;
  __int64 v133;
  __int64 v134;
  atomic_ullong* v135;
  __int64* v136;
  __int64* v137;
  __int64 v138;
  __int64 v139;
  __int64 v140;
  atomic_ullong* v141;
  __int64* v142;
  __int64* v143;
  __int64 v144;
  unsigned __int64 v145;
  int v146;
  int v147;
  int v148;
  int v149;
  __int64 v150;
  __int64 v151;
  __int64 v152;
  unsigned __int64 v153;
  int v154;
  __int64 v155;
  int v156;
  int v157;
  int v158;
  __int64 v159;
  __int64 v160;
  __int64 v161;
  atomic_ullong* v162;
  __int64* v163;
  __int64* v164;
  float v165;
  int v166;
  int v167;
  int v168;
  __int64 v169;
  _BYTE* v170;
  __int64 v171;
  __int64 v172;
  __int64 v173;
  __int64 v174;
  atomic_ullong* v175;
  __int64* v176;
  __int64 v177;
  unsigned __int16* v178;
  __int64* v179;
  __int64 v180;
  __int64 v181;
  int v182;
  __int64 v183;
  __int64 v184;
  __int64* v185;
  __int64 v186;
  __int64* v187;
  const char* v188;
  __int64 v189;
  char* v190;
  __int64 v191;
  __int64 v192;
  __int64 v193;
  __int64 v194;
  __int64 v195;
  atomic_ullong* v196;
  __int64* v197;
  __int64* v198;
  __int64 v199;
  char v200;
  __int64 v201;
  __int64* v202;
  __int64 v203;
  __int64 v204;
  __int64 v205;
  __int64* v206;
  __int64 v207;
  unsigned __int8* v208;
  __int64 v209;
  __int64 v210;
  __int64 v211;
  __int64 v212;
  __int64 v213;
  atomic_ullong* v214;
  __int64* v215;
  __int64* v216;
  __int64 v217;
  __int64 v218;
  __int64 v219;
  char* v220;
  __int64 v221;
  __int64 v222;
  atomic_ullong* v223;
  __int64* v224;
  __int64* v225;
  __int64 v226;
  __int64 v227;
  __int64 v228;
  atomic_ullong* v229;
  __int64* v230;
  __int64* v231;
  unsigned int* v232;
  unsigned int v234;
  __int64 v235;
  __int64 v236;
  struct {
    __int64 v237;
    __int64 v238;
  } v237_;
  const char* v239[2];
  struct {
    __int64* v240;
    __int64 v241;
    const char** v242;
    unsigned __int64 v243;
    __int64** v244;
    __int64 v245;
    __int64 v246;
    __int64 v247;
    __int64 v248;
    __int64 v249;
    __int64 v250;
    __int64 v251;
    __int64 v252;
    __int64 v253;
    __int64 v254;
    __int64 v255;
    __int64 v256;
    __int64 v257;
  } v240_;

  GameHr_15b7780((_QWORD*)a1);
  v2 = *(_QWORD*)(a1 + 56);
  if (v2 != 0) {
    v3 = std___1___shared_weak_count_lock(v2);
    if (v3 != 0) {
      v4 = *(__int64**)(a1 + 48);
      if (atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                           0xFFFFFFFFFFFFFFFFLL) != 0) {
        if (v4 != nullptr) {
          goto LABEL_5;
        }
      }
      else {
        v6 = v3;
        (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
        std___1___shared_weak_count___release_weak(v6);
        if (v4 != nullptr) {
        LABEL_5:
          v5 = *(_QWORD*)(a1 + 56);
          if (v5 == 0) {
            goto LABEL_12;
          }
          goto LABEL_9;
        }
      }
    }
  }
  v4 = ui_LayoutAccessor_empty__ptr[0];
  v5 = *(_QWORD*)(a1 + 56);
  if (v5 == 0) {
    goto LABEL_12;
  }
LABEL_9:
  v7 = std___1___shared_weak_count_lock(v5);
  if (v7 == 0) {
    goto LABEL_12;
  }
  v8 = v7;
  v9 = (atomic_ullong*)(v7 + 8);
  v10 = *(__int64**)(a1 + 48);
  if (atomic_fetch_add(v9, 0xFFFFFFFFFFFFFFFFLL) != 0) {
    if (v10 != nullptr) {
      goto LABEL_13;
    }
    goto LABEL_12;
  }
  v47 = v10;
  (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8);
  std___1___shared_weak_count___release_weak(v8);
  v10 = v47;
  if (v47 == nullptr) {
  LABEL_12:
    v10 = ui_LayoutAccessor_empty__ptr[0];
  }
LABEL_13:
  v11 = ui_LayoutAccessor_FindPane(v10, "IconClan");
  if (v11 != 0) {
    v12 = __dynamic_cast(v11, GameData_212d670[0], GameData_212d678[0], 0);
  }
  else {
    v12 = 0;
  }
  v13 = Unit_6c8300(*(_QWORD**)(a1 + 88), 0);
  v14 = 0;
  if (v12 != 0 && v13 != 0) {
    v15 = *(_BYTE**)(v13 + 48);
    if (v15 != nullptr && *v15 != 0 &&
        (v16 = v13,
         (Manager_136afb0(ui_Manager_instance_ + 1264, 5u, v15) & 1) != 0)) {
      v14 = Manager_136a920(ui_Manager_instance_ + 1264, v12, 0, 5u,
                            *(_BYTE**)(v16 + 48));
    }
    else {
      v14 = 0;
    }
  }
  ui_LayoutAccessor_SetPaneVisible((__int64)v4, "IconClan", v14 & 1);
  v17 = *(_DWORD*)(a1 + 96);
  if (v17 <= 1) {
    if (v17 != 0) {
      if (v17 != 1) {
        goto LABEL_106;
      }
      v18 = *(_QWORD*)(a1 + 56);
      if (v18 == 0) {
        goto LABEL_31;
      }
      v19 = std___1___shared_weak_count_lock(v18);
      if (v19 == 0) {
        goto LABEL_31;
      }
      v20 = v19;
      v21 = (atomic_ullong*)(v19 + 8);
      v22 = *(__int64**)(a1 + 48);
      if (atomic_fetch_add(v21, 0xFFFFFFFFFFFFFFFFLL) == 0) {
        v23 = v22;
        (*(void (**)(__int64))(*(_QWORD*)v20 + 16LL))(v20);
        std___1___shared_weak_count___release_weak(v20);
        v22 = v23;
      }
      if (v22 == nullptr) {
      LABEL_31:
        v22 = ui_LayoutAccessor_empty__ptr[0];
      }
      v239[0] = "L_Move";
      v239[1] = (_BYTE*)((_UNKNOWN*)0x6LL);
      GameRoutine_9d5180((void*)(&v240_.v240), v22, v239);
      if (v240_.v241 != 0) {
        v24 = std___1___shared_weak_count_lock(v240_.v241);
        v25 = (__int64)v240_.v240;
        if (v240_.v241 != 0) {
          std___1___shared_weak_count___release_weak(v240_.v241);
        }
        if (v24 != 0 && v25 != 0) {
          v26 = *(_QWORD*)(a1 + 88);
          LOBYTE(v240_.v240) = 10;
          v27 = game_Unit_GetParam(v26);
          v28 = *(_QWORD*)(a1 + 88);
          LOBYTE(v240_.v240) = 10;
          v29 = game_Unit_GetParam(v28);
          StatusNum_1890220(v25, v27, v29, 0x63u, 1, 0, -1);
        }
        else if (v24 == 0) {
          goto LABEL_81;
        }
        if (atomic_fetch_add((atomic_ullong* volatile)(v24 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v24 + 16LL))(v24);
          std___1___shared_weak_count___release_weak(v24);
        }
      }
    LABEL_81:
      v56 = *(_QWORD*)(a1 + 56);
      if (v56 == 0) {
        goto LABEL_86;
      }
      v57 = std___1___shared_weak_count_lock(v56);
      if (v57 == 0) {
        goto LABEL_86;
      }
      v58 = v57;
      v59 = (atomic_ullong*)(v57 + 8);
      v60 = *(__int64**)(a1 + 48);
      if (atomic_fetch_add(v59, 0xFFFFFFFFFFFFFFFFLL) == 0) {
        v61 = v60;
        (*(void (**)(__int64))(*(_QWORD*)v58 + 16LL))(v58);
        std___1___shared_weak_count___release_weak(v58);
        v60 = v61;
      }
      if (v60 == nullptr) {
      LABEL_86:
        v60 = ui_LayoutAccessor_empty__ptr[0];
      }
      v239[0] = "L_Physique";
      v239[1] = (_BYTE*)(((_UNKNOWN**)0x8LL) + 2);
      GameRoutine_9d5180((void*)(&v240_.v240), v60, v239);
      if (v240_.v241 == 0) {
        goto LABEL_100;
      }
      v62 = std___1___shared_weak_count_lock(v240_.v241);
      v63 = (__int64)v240_.v240;
      if (v240_.v241 != 0) {
        std___1___shared_weak_count___release_weak(v240_.v241);
      }
      if (v62 != 0 && v63 != 0) {
        v64 = *(_QWORD*)(a1 + 88);
        LOBYTE(v240_.v240) = 1;
        v65 = game_Unit_GetParam(v64);
        v66 = *(char*)(v64 + 807);
        LOBYTE(v240_.v240) = 1;
        LODWORD(v64) = (v65 / 5 + v66) & ~((v65 / 5 + v66) >> 31);
        v67 = game_Unit_GetParam(*(_QWORD*)(a1 + 88));
        StatusNum_1890220(v63, v64, (v67 / 5) & ~((v67 / 5) >> 31), 0xFFFFFFFF,
                          1, 0, -1);
      }
      else if (v62 == 0) {
      LABEL_100:
        LODWORD(v239[0]) = 0;
        v240_.v240 = (__int64*)GameData_20c94c8;
        v240_.v241 = a1;
        v240_.v244 = &v240_.v240;
        v240_.v242 = v239;
        GameRoutine_156d580((__int64)&v240_.v240);
        goto LABEL_101;
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v62 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v62 + 16LL))(v62);
        std___1___shared_weak_count___release_weak(v62);
      }
      goto LABEL_100;
    }
    v32 = *(_QWORD*)(a1 + 56);
    if (v32 == 0) {
      goto LABEL_48;
    }
    v33 = std___1___shared_weak_count_lock(v32);
    if (v33 == 0) {
      goto LABEL_48;
    }
    v34 = v33;
    v35 = (atomic_ullong*)(v33 + 8);
    v36 = *(__int64**)(a1 + 48);
    if (atomic_fetch_add(v35, 0xFFFFFFFFFFFFFFFFLL) == 0) {
      v37 = v36;
      (*(void (**)(__int64))(*(_QWORD*)v34 + 16LL))(v34);
      std___1___shared_weak_count___release_weak(v34);
      v36 = v37;
    }
    if (v36 == nullptr) {
    LABEL_48:
      v36 = ui_LayoutAccessor_empty__ptr[0];
    }
    v239[0] = "L_ClassGroup";
    v239[1] = (_BYTE*)(((_UNKNOWN**)0x8LL) + 4);
    GameRoutine_fa73c0((void*)(&v240_.v240), v36, v239);
    if (v240_.v241 != 0) {
      v38 = std___1___shared_weak_count_lock(v240_.v241);
      v39 = v240_.v240;
      if (v240_.v241 != 0) {
        std___1___shared_weak_count___release_weak(v240_.v241);
      }
      if (v38 != 0 && v39 != nullptr) {
        StatusClass_189d120(v39, *(_QWORD**)(a1 + 88), 1, 1, 0, 0, 1);
        v40 = *(_QWORD*)(a1 + 56);
        if (v40 == 0) {
          goto LABEL_59;
        }
        v41 = std___1___shared_weak_count_lock(v40);
        if (v41 == 0) {
          goto LABEL_59;
        }
        v42 = v41;
        v43 = (atomic_ullong*)(v41 + 8);
        v44 = *(__int64**)(a1 + 48);
        if (atomic_fetch_add(v43, 0xFFFFFFFFFFFFFFFFLL) == 0) {
          v45 = v44;
          (*(void (**)(__int64))(*(_QWORD*)v42 + 16LL))(v42);
          std___1___shared_weak_count___release_weak(v42);
          v44 = v45;
        }
        if (v44 == nullptr) {
        LABEL_59:
          v44 = ui_LayoutAccessor_empty__ptr[0];
        }
        ui_LayoutAccessor_SetPaneVisible((__int64)v44,
                                         "L_ClassGroup/GaugeBorder", 0);
      }
      else if (v38 == 0) {
        goto LABEL_116;
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v38 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v38 + 16LL))(v38);
        std___1___shared_weak_count___release_weak(v38);
      }
    }
  LABEL_116:
    v73 = *(_QWORD*)(a1 + 56);
    if (v73 == 0) {
      goto LABEL_121;
    }
    v74 = std___1___shared_weak_count_lock(v73);
    if (v74 == 0) {
      goto LABEL_121;
    }
    v75 = v74;
    v76 = (atomic_ullong*)(v74 + 8);
    v77 = *(__int64**)(a1 + 48);
    if (atomic_fetch_add(v76, 0xFFFFFFFFFFFFFFFFLL) == 0) {
      v78 = v77;
      (*(void (**)(__int64))(*(_QWORD*)v75 + 16LL))(v75);
      std___1___shared_weak_count___release_weak(v75);
      v77 = v78;
    }
    if (v77 == nullptr) {
    LABEL_121:
      v77 = ui_LayoutAccessor_empty__ptr[0];
    }
    v239[0] = "L_HPGroup";
    v239[1] = (_BYTE*)(((_UNKNOWN**)0x8LL) + 1);
    GameRoutine_1572700((void*)(&v240_.v240), v77, v239);
    if (v240_.v241 != 0) {
      v79 = std___1___shared_weak_count_lock(v240_.v241);
      v80 = v240_.v240;
      if (v240_.v241 != 0) {
        std___1___shared_weak_count___release_weak(v240_.v241);
      }
      if (v79 != 0 && v80 != nullptr) {
        StatusHP_18920d0(v80, *(_QWORD*)(a1 + 88), 1);
      }
      else if (v79 == 0) {
        goto LABEL_131;
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v79 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v79 + 16LL))(v79);
        std___1___shared_weak_count___release_weak(v79);
      }
    }
  LABEL_131:
    v81 = *(_QWORD*)(a1 + 88);
    if (v81 != 0) {
      v82 = (int)UnitItemList_710b30(v81 + 828) > 0;
      v83 = *(_QWORD*)(a1 + 56);
      if (v83 == 0) {
        goto LABEL_139;
      }
    }
    else {
      v82 = false;
      v83 = *(_QWORD*)(a1 + 56);
      if (v83 == 0) {
        goto LABEL_139;
      }
    }
    v84 = std___1___shared_weak_count_lock(v83);
    if (v84 != 0) {
      v85 = v84;
      v86 = (atomic_ullong*)(v84 + 8);
      v87 = *(__int64**)(a1 + 48);
      if (atomic_fetch_add(v86, 0xFFFFFFFFFFFFFFFFLL) == 0) {
        v88 = v87;
        (*(void (**)(__int64))(*(_QWORD*)v85 + 16LL))(v85);
        std___1___shared_weak_count___release_weak(v85);
        v87 = v88;
      }
      if (v87 != nullptr) {
      LABEL_140:
        ui_LayoutAccessor_SetPaneVisible((__int64)v87, "N_MagicNum", v82);
        if (!v82) {
          goto LABEL_155;
        }
        v89 = *(_QWORD*)(a1 + 56);
        if (v89 != 0) {
          v90 = std___1___shared_weak_count_lock(v89);
          if (v90 != 0) {
            v91 = *(__int64**)(a1 + 48);
            if (atomic_fetch_add((atomic_ullong* volatile)(v90 + 8),
                                 0xFFFFFFFFFFFFFFFFLL) != 0) {
              if (v91 != nullptr) {
                goto LABEL_145;
              }
            }
            else {
              v93 = v90;
              (*(void (**)(__int64))(*(_QWORD*)v90 + 16LL))(v90);
              std___1___shared_weak_count___release_weak(v93);
              if (v91 != nullptr) {
              LABEL_145:
                v92 = *(_QWORD*)(a1 + 88);
                if (v92 == 0) {
                  goto LABEL_151;
                }
              LABEL_149:
                v94 = UnitItemList_710640(v92 + 828);
                v95 = UnitItemList_710b30(v92 + 828);
                if (v95 >= 1) {
                  v96 = (int)(float)((float)(100 * v94) /
                                     (float)(unsigned int)v95);
                LABEL_152:
                  v97 = ui_LayoutAccessor_FindPane(v91, "T_MagicNum");
                  if (v97 != 0) {
                    v98 = __dynamic_cast(v97, GameData_212d670[0],
                                         GameData_212d690, 0);
                    if (v98 != 0) {
                      GameRoutine_156c910(v98, "%d", 1, v96);
                    }
                  }
                LABEL_155:
                  v99 = *(_QWORD*)(a1 + 56);
                  if (v99 == 0) {
                    goto LABEL_160;
                  }
                  v100 = std___1___shared_weak_count_lock(v99);
                  if (v100 == 0) {
                    goto LABEL_160;
                  }
                  v101 = v100;
                  v102 = (atomic_ullong*)(v100 + 8);
                  v103 = *(__int64**)(a1 + 48);
                  if (atomic_fetch_add(v102, 0xFFFFFFFFFFFFFFFFLL) == 0) {
                    v104 = v103;
                    (*(void (**)(__int64))(*(_QWORD*)v101 + 16LL))(v101);
                    std___1___shared_weak_count___release_weak(v101);
                    v103 = v104;
                  }
                  if (v103 == nullptr) {
                  LABEL_160:
                    v103 = ui_LayoutAccessor_empty__ptr[0];
                  }
                  v239[0] = "L_Lv";
                  v239[1] = (_BYTE*)((_UNKNOWN*)0x4LL);
                  GameRoutine_9d5180((void*)(&v240_.v240), v103, v239);
                  if (v240_.v241 == 0) {
                    goto LABEL_170;
                  }
                  v105 = std___1___shared_weak_count_lock(v240_.v241);
                  v106 = (__int64)v240_.v240;
                  if (v240_.v241 != 0) {
                    std___1___shared_weak_count___release_weak(v240_.v241);
                  }
                  if (v105 != 0 && v106 != 0) {
                    v107 = *(unsigned __int8*)(*(_QWORD*)(a1 + 88) + 498LL);
                    StatusNum_1890220(v106, v107, v107, 0x63u, 1, 0, -1);
                  }
                  else if (v105 == 0) {
                  LABEL_170:
                    v108 = *(_QWORD*)(a1 + 88);
                    if (*(unsigned __int8*)(v108 + 498) > 0x62u) {
                      v112 = *(_QWORD*)(a1 + 56);
                      if (v112 == 0) {
                        goto LABEL_179;
                      }
                      v113 = std___1___shared_weak_count_lock(v112);
                      if (v113 == 0) {
                        goto LABEL_179;
                      }
                      v114 = v113;
                      v115 = (atomic_ullong*)(v113 + 8);
                      v116 = *(__int64**)(a1 + 48);
                      if (atomic_fetch_add(v115, 0xFFFFFFFFFFFFFFFFLL) == 0) {
                        v117 = v116;
                        (*(void (**)(__int64))(*(_QWORD*)v114 + 16LL))(v114);
                        std___1___shared_weak_count___release_weak(v114);
                        v116 = v117;
                      }
                      if (v116 == nullptr) {
                      LABEL_179:
                        v116 = ui_LayoutAccessor_empty__ptr[0];
                      }
                      LayoutAccessor_1562cf0((__int64)v116,
                                             (unsigned int*)"GaugeOff");
                      v118 = *(_QWORD*)(a1 + 56);
                      if (v118 == 0) {
                        goto LABEL_185;
                      }
                      v119 = std___1___shared_weak_count_lock(v118);
                      if (v119 == 0) {
                        goto LABEL_185;
                      }
                      v120 = v119;
                      v121 = (atomic_ullong*)(v119 + 8);
                      v122 = *(__int64**)(a1 + 48);
                      if (atomic_fetch_add(v121, 0xFFFFFFFFFFFFFFFFLL) == 0) {
                        v123 = v122;
                        (*(void (**)(__int64))(*(_QWORD*)v120 + 16LL))(v120);
                        std___1___shared_weak_count___release_weak(v120);
                        v122 = v123;
                      }
                      if (v122 == nullptr) {
                      LABEL_185:
                        v122 = ui_LayoutAccessor_empty__ptr[0];
                      }
                      ui_LayoutAccessor_SetPaneVisible((__int64)v122,
                                                       "L_ExpGauge", 0);
                    }
                    else {
                      LODWORD(v240_.v240) =
                          *game_g_shared_system_skills_ptr & 0xFFF;
                      v109 = game_HasSkill((_QWORD*)(v108 + 1744), &v240_.v240);
                      v110 = *(_QWORD*)(v108 + 440);
                      if (v109 && (v110 == 0 ? (v111 = 9)
                                             : (v111 = *(_BYTE*)(v110 + 16)),
                                   ((1 << v111) & 0xF1) != 0)) {
                        v124 = false;
                      }
                      else {
                        v124 =
                            v110 == 0 ||
                            (unsigned int)*(unsigned __int8*)(v110 + 16) - 4 <
                                0xFFFFFFFD;
                      }
                      v125 = *(_QWORD*)(a1 + 56);
                      if (v125 == 0) {
                        goto LABEL_198;
                      }
                      v126 = std___1___shared_weak_count_lock(v125);
                      if (v126 == 0) {
                        goto LABEL_198;
                      }
                      v127 = v126;
                      v128 = (atomic_ullong*)(v126 + 8);
                      v129 = *(__int64**)(a1 + 48);
                      if (atomic_fetch_add(v128, 0xFFFFFFFFFFFFFFFFLL) == 0) {
                        v130 = v129;
                        (*(void (**)(__int64))(*(_QWORD*)v127 + 16LL))(v127);
                        std___1___shared_weak_count___release_weak(v127);
                        v129 = v130;
                      }
                      if (v129 == nullptr) {
                      LABEL_198:
                        v129 = ui_LayoutAccessor_empty__ptr[0];
                      }
                      if (v124) {
                        v131 = "GaugeOn";
                      }
                      else {
                        v131 = "GaugeOff";
                      }
                      LayoutAccessor_1562cf0((__int64)v129,
                                             (unsigned int*)v131);
                      v132 = *(_QWORD*)(a1 + 56);
                      if (v132 == 0) {
                        goto LABEL_207;
                      }
                      v133 = std___1___shared_weak_count_lock(v132);
                      if (v133 == 0) {
                        goto LABEL_207;
                      }
                      v134 = v133;
                      v135 = (atomic_ullong*)(v133 + 8);
                      v136 = *(__int64**)(a1 + 48);
                      if (atomic_fetch_add(v135, 0xFFFFFFFFFFFFFFFFLL) == 0) {
                        v137 = v136;
                        (*(void (**)(__int64))(*(_QWORD*)v134 + 16LL))(v134);
                        std___1___shared_weak_count___release_weak(v134);
                        v136 = v137;
                      }
                      if (v136 == nullptr) {
                      LABEL_207:
                        v136 = ui_LayoutAccessor_empty__ptr[0];
                      }
                      ui_LayoutAccessor_SetPaneVisible((__int64)v136,
                                                       "L_ExpGauge", v124);
                      if (v124) {
                        v138 = *(_QWORD*)(a1 + 56);
                        if (v138 == 0) {
                          goto LABEL_214;
                        }
                        v139 = std___1___shared_weak_count_lock(v138);
                        if (v139 == 0) {
                          goto LABEL_214;
                        }
                        v140 = v139;
                        v141 = (atomic_ullong*)(v139 + 8);
                        v142 = *(__int64**)(a1 + 48);
                        if (atomic_fetch_add(v141, 0xFFFFFFFFFFFFFFFFLL) == 0) {
                          v143 = v142;
                          (*(void (**)(__int64))(*(_QWORD*)v140 + 16LL))(v140);
                          std___1___shared_weak_count___release_weak(v140);
                          v142 = v143;
                        }
                        if (v142 == nullptr) {
                        LABEL_214:
                          v142 = ui_LayoutAccessor_empty__ptr[0];
                        }
                        v144 = *(_QWORD*)(a1 + 88);
                        v145 = (unsigned __int64)(GameData_21d9970 -
                                                  GameData_21d9968) >>
                               2;
                        if (*(unsigned __int8*)(v144 + 498) >= (int)v145) {
                          v146 = (unsigned __int64)(GameData_21d9970 -
                                                    GameData_21d9968) >>
                                 2;
                        }
                        else {
                          v146 = *(unsigned __int8*)(v144 + 498);
                        }
                        if (*(_BYTE*)(v144 + 498) != 0) {
                          v147 = v146;
                        }
                        else {
                          v147 = 1;
                        }
                        if (v147 == (_DWORD)v145) {
                          v148 = 0;
                        }
                        else {
                          v148 = *(_DWORD*)(GameData_21d9968 + 4LL * v147);
                        }
                        v149 = *(_DWORD*)(v144 + 504);
                        v150 =
                            ui_LayoutAccessor_FindPane(v142, "T_Exp_NumNext");
                        if (v150 != 0) {
                          v151 = __dynamic_cast(v150, GameData_212d670[0],
                                                GameData_212d690, 0);
                          if (v151 != 0) {
                            GameRoutine_156c910(v151, "%d", 1,
                                                (unsigned int)(v148 - v149));
                          }
                        }
                        v152 = *(_QWORD*)(a1 + 88);
                        v153 = (unsigned __int64)(GameData_21d9970 -
                                                  GameData_21d9968) >>
                               2;
                        if (*(unsigned __int8*)(v152 + 498) >= (int)v153) {
                          v154 = (unsigned __int64)(GameData_21d9970 -
                                                    GameData_21d9968) >>
                                 2;
                        }
                        else {
                          v154 = *(unsigned __int8*)(v152 + 498);
                        }
                        if (*(_BYTE*)(v152 + 498) != 0) {
                          v155 = v154 - 1;
                        }
                        else {
                          v154 = 1;
                          v155 = 0;
                        }
                        if (v154 == (_DWORD)v153) {
                          v156 = 0;
                        }
                        else {
                          v156 = *(_DWORD*)(GameData_21d9968 + 4LL * v154);
                        }
                        v157 = *(_DWORD*)(v152 + 504);
                        v158 = *(_DWORD*)(GameData_21d9968 + 4 * v155);
                        v159 = *(_QWORD*)(a1 + 56);
                        if (v159 == 0) {
                          goto LABEL_241;
                        }
                        v160 = std___1___shared_weak_count_lock(v159);
                        if (v160 == 0) {
                          goto LABEL_241;
                        }
                        v161 = v160;
                        v162 = (atomic_ullong*)(v160 + 8);
                        v163 = *(__int64**)(a1 + 48);
                        if (atomic_fetch_add(v162, 0xFFFFFFFFFFFFFFFFLL) == 0) {
                          v164 = v163;
                          (*(void (**)(__int64))(*(_QWORD*)v161 + 16LL))(v161);
                          std___1___shared_weak_count___release_weak(v161);
                          v163 = v164;
                        }
                        if (v163 == nullptr) {
                        LABEL_241:
                          v163 = ui_LayoutAccessor_empty__ptr[0];
                        }
                        LayoutAccessor_1560070((void*)(&v237_.v237), v163,
                                               "L_ExpGauge");
                        v165 = 0x1.0000000000000p+0f;
                        if (v156 >= 1) {
                          v166 = v156 - v158;
                          if (v156 != v158) {
                            if (v157 <= v158) {
                              v167 = v158;
                            }
                            else {
                              v167 = v157;
                            }
                            v168 = v167 - v158;
                            if (v166 < v168) {
                              v168 = v156 - v158;
                            }
                            v165 = (float)v168 / (float)v166;
                          }
                        }
                        GameRoutine_174d580((__int64)&v237_.v237,
                                            (unsigned int*)"GaugeUp", 7, v165);
                        if (v237_.v238 != 0) {
                          std___1___shared_weak_count___release_weak(
                              v237_.v238);
                        }
                      }
                    }
                    v169 = 2;
                    v170 = (_BYTE*)(*(_QWORD*)(a1 + 88) + 847LL);
                    v171 = *GameData_212c878[0];
                    while (1) {
                      if (*(_WORD*)(v170 - 19) != 0 &&
                          (*(v170 - 16) & 1) != 0 &&
                          *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(v171 + 64) +
                                                         8LL *
                                                             *(unsigned __int16*)(v170 -
                                                                                  19)) +
                                              72LL) < 8u) {
                        LODWORD(v169) = v169 - 2;
                        v172 = *(_QWORD*)(a1 + 56);
                        if (v172 != 0) {
                          goto LABEL_270;
                        }
                        goto LABEL_276;
                      }
                      if (*(_WORD*)(v170 - 11) != 0 && (*(v170 - 8) & 1) != 0 &&
                          *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(v171 + 64) +
                                                         8LL *
                                                             *(unsigned __int16*)(v170 -
                                                                                  11)) +
                                              72LL) < 8u) {
                        break;
                      }
                      if (*(_WORD*)(v170 - 3) != 0 && (*v170 & 1) != 0 &&
                          *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(v171 + 64) +
                                                         8LL *
                                                             *(unsigned __int16*)(v170 -
                                                                                  3)) +
                                              72LL) < 8u) {
                        v172 = *(_QWORD*)(a1 + 56);
                        if (v172 != 0) {
                          goto LABEL_270;
                        }
                        goto LABEL_276;
                      }
                      v169 += 3;
                      v170 += 24;
                      if (v169 == 32) {
                        LODWORD(v169) = -1;
                        v172 = *(_QWORD*)(a1 + 56);
                        if (v172 != 0) {
                          goto LABEL_270;
                        }
                        goto LABEL_276;
                      }
                    }
                    LODWORD(v169) = v169 - 1;
                    v172 = *(_QWORD*)(a1 + 56);
                    if (v172 == 0) {
                      goto LABEL_276;
                    }
                  LABEL_270:
                    v173 = std___1___shared_weak_count_lock(v172);
                    if (v173 != 0) {
                      v174 = v173;
                      v175 = (atomic_ullong*)(v173 + 8);
                      v176 = *(__int64**)(a1 + 48);
                      if (atomic_fetch_add(v175, 0xFFFFFFFFFFFFFFFFLL) == 0) {
                        v179 = v176;
                        (*(void (**)(__int64))(*(_QWORD*)v174 + 16LL))(v174);
                        std___1___shared_weak_count___release_weak(v174);
                        v176 = v179;
                        if (v179 == nullptr) {
                          goto LABEL_276;
                        }
                      LABEL_273:
                        if ((_DWORD)v169 == -1) {
                        LABEL_277:
                          v177 = 0;
                          v178 = (unsigned __int16*)game_g_empty_item_ptr;
                        LABEL_278:
                          Util_15792c0(v176, v178, 1, 1u, v177, "L_ItemIcon",
                                       "T_ItemName", 1);
                          v180 = *(_QWORD*)(a1 + 88);
                          v181 = *(_QWORD*)(v180 + 400);
                          v182 = *(unsigned __int8*)(v181 + 96);
                          if (v182 != 2) {
                            if (v182 == 1 && *(_BYTE*)(v180 + 1944) != 0) {
                              v183 = *(_QWORD*)(a1 + 56);
                              if (v183 == 0) {
                                goto LABEL_286;
                              }
                              v184 = std___1___shared_weak_count_lock(v183);
                              if (v184 == 0) {
                                goto LABEL_286;
                              }
                              v185 = *(__int64**)(a1 + 48);
                              if (atomic_fetch_add(
                                      (atomic_ullong* volatile)(v184 + 8),
                                      0xFFFFFFFFFFFFFFFFLL) == 0) {
                                v186 = v184;
                                (*(void (**)(__int64))(*(_QWORD*)v184 + 16LL))(
                                    v184);
                                std___1___shared_weak_count___release_weak(
                                    v186);
                              }
                              if (v185 == nullptr) {
                              LABEL_286:
                                v185 = ui_LayoutAccessor_empty__ptr[0];
                              }
                              v187 = GameData_212c998[0];
                              v188 = *(
                                  const char**)(*(_QWORD*)(*(_QWORD*)(*GameData_212c998
                                                                          [0] +
                                                                      64) +
                                                           8LL *
                                                               *(unsigned __int8*)(v180 +
                                                                                   1944)) +
                                                32LL);
                              v240_.v245 = -1;
                              v240_.v246 = -1;
                              v240_.v247 = -1;
                              v240_.v248 = -1;
                              v240_.v249 = -1;
                              v240_.v250 = -1;
                              v240_.v251 = -1;
                              v240_.v252 = -1;
                              v240_.v253 = -1;
                              v240_.v254 = -1;
                              v240_.v255 = -1;
                              v189 = *msg_MessageManager_instance__ptr[0];
                              v240_.v256 = -1;
                              v240_.v257 = 8;
                              v240_.v240 = GameData_212e348 + 2;
                              v240_.v241 = 0xFFFF0001FFFF0000LL;
                              v240_.v244 = (__int64**)0xFFFF0008FFFF0007LL;
                              v240_.v242 = (const char**)0xFFFF0004FFFF0002LL;
                              v240_.v243 = 0xFFFF0006FFFF0005LL;
                              v190 = GameRoutine_a4dbe0(v189, v188, 0);
                              if (v190 != nullptr) {
                                v191 = (__int64)v190;
                                v192 = ui_LayoutAccessor_FindTextBox(
                                    v185, "T_DeployName");
                                if (v192 != 0) {
                                  GameRoutine_156c5d0(v192, v191, 0);
                                }
                              }
                              v193 = *(_QWORD*)(a1 + 56);
                              if (v193 == 0) {
                                goto LABEL_295;
                              }
                              v194 = std___1___shared_weak_count_lock(v193);
                              if (v194 == 0) {
                                goto LABEL_295;
                              }
                              v195 = v194;
                              v196 = (atomic_ullong*)(v194 + 8);
                              v197 = *(__int64**)(a1 + 48);
                              if (atomic_fetch_add(v196,
                                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
                                v198 = v197;
                                (*(void (**)(__int64))(*(_QWORD*)v195 + 16LL))(
                                    v195);
                                std___1___shared_weak_count___release_weak(
                                    v195);
                                v197 = v198;
                              }
                              if (v197 == nullptr) {
                              LABEL_295:
                                v197 = ui_LayoutAccessor_empty__ptr[0];
                              }
                              v199 = ui_LayoutAccessor_FindPane(v197,
                                                                "DeployIcon");
                              if (v199 != 0) {
                                v199 = __dynamic_cast(v199, GameData_212d670[0],
                                                      GameData_212d678[0], 0);
                              }
                              game_1841930(
                                  v199,
                                  *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*v187 + 64) +
                                                        8LL *
                                                            *(unsigned __int8*)(v180 +
                                                                                1944)) +
                                             64LL));
                              v200 = 1;
                              v201 = *(_QWORD*)(a1 + 56);
                              if (v201 == 0) {
                                goto LABEL_337;
                              }
                              goto LABEL_333;
                            }
                          LABEL_323:
                            v200 = 0;
                            v201 = *(_QWORD*)(a1 + 56);
                            if (v201 == 0) {
                              goto LABEL_337;
                            }
                            goto LABEL_333;
                          }
                          if (*(_BYTE*)(v180 + 1880) != 0) {
                            v202 = (__int64*)(v180 + 1880);
                          }
                          else {
                            v203 = *(_QWORD*)(v181 + 112);
                            if (v203 != 0) {
                              v202 = &GameData_21f4018
                                         [8 * (unsigned __int64)*(
                                                  unsigned __int8*)(v203 + 32)];
                            }
                            else {
                              v202 = GameData_212c8b0[0];
                            }
                            if (*(_BYTE*)v202 == 0) {
                              goto LABEL_323;
                            }
                          }
                          v204 = *(_QWORD*)(a1 + 56);
                          if (v204 == 0) {
                            goto LABEL_311;
                          }
                          v205 = std___1___shared_weak_count_lock(v204);
                          if (v205 == 0) {
                            goto LABEL_311;
                          }
                          v206 = *(__int64**)(a1 + 48);
                          if (atomic_fetch_add(
                                  (atomic_ullong* volatile)(v205 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
                            v207 = v205;
                            (*(void (**)(__int64))(*(_QWORD*)v205 + 16LL))(
                                v205);
                            std___1___shared_weak_count___release_weak(v207);
                          }
                          if (v206 == nullptr) {
                          LABEL_311:
                            v206 = ui_LayoutAccessor_empty__ptr[0];
                          }
                          v208 = Unit_931120((unsigned __int8*)v202);
                          if (v208 != nullptr) {
                            v209 = (__int64)v208;
                            v210 = ui_LayoutAccessor_FindTextBox(
                                v206, "T_DeployName");
                            if (v210 != 0) {
                              GameRoutine_156c5d0(v210, v209, 0);
                            }
                          }
                          v211 = *(_QWORD*)(a1 + 56);
                          if (v211 == 0) {
                            goto LABEL_320;
                          }
                          v212 = std___1___shared_weak_count_lock(v211);
                          if (v212 == 0) {
                            goto LABEL_320;
                          }
                          v213 = v212;
                          v214 = (atomic_ullong*)(v212 + 8);
                          v215 = *(__int64**)(a1 + 48);
                          if (atomic_fetch_add(v214, 0xFFFFFFFFFFFFFFFFLL) ==
                              0) {
                            v216 = v215;
                            (*(void (**)(__int64))(*(_QWORD*)v213 + 16LL))(
                                v213);
                            std___1___shared_weak_count___release_weak(v213);
                            v215 = v216;
                          }
                          if (v215 == nullptr) {
                          LABEL_320:
                            v215 = ui_LayoutAccessor_empty__ptr[0];
                          }
                          v217 = ui_LayoutAccessor_FindPane(v215, "DeployIcon");
                          if (v217 != 0) {
                            v218 = __dynamic_cast(v217, GameData_212d670[0],
                                                  GameData_212d678[0], 0);
                          }
                          else {
                            v218 = 0;
                          }
                          v200 = 1;
                          if (v218 != 0) {
                            v219 =
                                *(_QWORD*)(*(_QWORD*)(*GameData_212c8a0 + 64) +
                                           8LL * *(unsigned __int8*)v202);
                            if (v219 != 0) {
                              if ((unsigned int)*(unsigned __int8*)(v219 + 32) -
                                      1 >
                                  4) {
                                v220 = &GameData_1a9f09e;
                              }
                              else {
                                v220 = (char*)*(
                                    &GameData_20c9688 +
                                    (unsigned __int8)(*(_BYTE*)(v219 + 32) -
                                                      1));
                              }
                              Manager_136a920(ui_Manager_instance_ + 1264, v218,
                                              0, 2u, v220);
                            }
                          }
                          v201 = *(_QWORD*)(a1 + 56);
                          if (v201 == 0) {
                            goto LABEL_337;
                          }
                        LABEL_333:
                          v221 = std___1___shared_weak_count_lock(v201);
                          if (v221 != 0) {
                            v222 = v221;
                            v223 = (atomic_ullong*)(v221 + 8);
                            v224 = *(__int64**)(a1 + 48);
                            if (atomic_fetch_add(v223, 0xFFFFFFFFFFFFFFFFLL) ==
                                0) {
                              v225 = v224;
                              (*(void (**)(__int64))(*(_QWORD*)v222 + 16LL))(
                                  v222);
                              std___1___shared_weak_count___release_weak(v222);
                              v224 = v225;
                            }
                            if (v224 != nullptr) {
                            LABEL_338:
                              ui_LayoutAccessor_SetPaneVisible(
                                  (__int64)v224, "DeployIcon", v200);
                              v226 = *(_QWORD*)(a1 + 56);
                              if (v226 == 0) {
                                goto LABEL_343;
                              }
                              v227 = std___1___shared_weak_count_lock(v226);
                              if (v227 == 0) {
                                goto LABEL_343;
                              }
                              v228 = v227;
                              v229 = (atomic_ullong*)(v227 + 8);
                              v230 = *(__int64**)(a1 + 48);
                              if (atomic_fetch_add(v229,
                                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
                                v231 = v230;
                                (*(void (**)(__int64))(*(_QWORD*)v228 + 16LL))(
                                    v228);
                                std___1___shared_weak_count___release_weak(
                                    v228);
                                v230 = v231;
                              }
                              if (v230 == nullptr) {
                              LABEL_343:
                                v230 = ui_LayoutAccessor_empty__ptr[0];
                              }
                              ui_LayoutAccessor_SetPaneVisible(
                                  (__int64)v230, "T_DeployName", v200);
                              v68 = *(_QWORD*)(a1 + 56);
                              if (v68 == 0) {
                                goto LABEL_345;
                              }
                              goto LABEL_107;
                            }
                          }
                        LABEL_337:
                          v224 = ui_LayoutAccessor_empty__ptr[0];
                          goto LABEL_338;
                        }
                      LABEL_274:
                        v177 = *(_QWORD*)(a1 + 88);
                        v178 =
                            (unsigned __int16*)(v177 + 8LL * (int)v169 + 828);
                        goto LABEL_278;
                      }
                      if (v176 != nullptr) {
                        goto LABEL_273;
                      }
                    }
                  LABEL_276:
                    v176 = ui_LayoutAccessor_empty__ptr[0];
                    if ((_DWORD)v169 == -1) {
                      goto LABEL_277;
                    }
                    goto LABEL_274;
                  }
                  if (atomic_fetch_add((atomic_ullong* volatile)(v105 + 8),
                                       0xFFFFFFFFFFFFFFFFLL) == 0) {
                    (*(void (**)(__int64))(*(_QWORD*)v105 + 16LL))(v105);
                    std___1___shared_weak_count___release_weak(v105);
                  }
                  goto LABEL_170;
                }
              LABEL_151:
                v96 = 0;
                goto LABEL_152;
              }
            }
          }
        }
        v91 = ui_LayoutAccessor_empty__ptr[0];
        v92 = *(_QWORD*)(a1 + 88);
        if (v92 == 0) {
          goto LABEL_151;
        }
        goto LABEL_149;
      }
    }
  LABEL_139:
    v87 = ui_LayoutAccessor_empty__ptr[0];
    goto LABEL_140;
  }
  if (v17 != 2) {
    if (v17 != 3) {
      goto LABEL_106;
    }
    LODWORD(v236) = 0;
    v235 = 0;
    v234 = 0;
    v30 = (__int64**)fw_memory_HeapManager_Allocate(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, 48, 16, 0);
    v240_.v244 = v30;
    *v30 = (__int64*)GameData_20c95c8;
    v30[1] = &v236;
    v30[2] = (__int64*)a1;
    v30[3] = (__int64*)((char*)&v235 + 4);
    v30[4] = &v235;
    v30[5] = (__int64*)&v234;
    GameRoutine_156d790((__int64)&v240_.v240);
    if (v240_.v244 == &v240_.v240) {
      v31 = 4;
    }
    else {
      if (v240_.v244 == nullptr) {
        goto LABEL_66;
      }
      v31 = 5;
    }
    ((void (*)(void*))(*v240_.v244)[v31])(v240_.v244);
  LABEL_66:
    v48 = *(_QWORD*)(a1 + 56);
    if (v48 == 0) {
      goto LABEL_71;
    }
    v49 = std___1___shared_weak_count_lock(v48);
    if (v49 == 0) {
      goto LABEL_71;
    }
    v50 = v49;
    v51 = (atomic_ullong*)(v49 + 8);
    v52 = *(__int64**)(a1 + 48);
    if (atomic_fetch_add(v51, 0xFFFFFFFFFFFFFFFFLL) == 0) {
      v53 = v52;
      (*(void (**)(__int64))(*(_QWORD*)v50 + 16LL))(v50);
      std___1___shared_weak_count___release_weak(v50);
      v52 = v53;
    }
    if (v52 == nullptr) {
    LABEL_71:
      v52 = ui_LayoutAccessor_empty__ptr[0];
    }
    v239[0] = "L_TotalNum";
    v239[1] = (_BYTE*)(((_UNKNOWN**)0x8LL) + 2);
    GameRoutine_9d5180((void*)(&v240_.v240), v52, v239);
    if (v240_.v241 != 0) {
      v54 = std___1___shared_weak_count_lock(v240_.v241);
      v55 = (__int64)v240_.v240;
      if (v240_.v241 != 0) {
        std___1___shared_weak_count___release_weak(v240_.v241);
      }
      if (v54 != 0 && v55 != 0) {
        StatusNum_1890220(v55, HIDWORD(v235), v235, v234, 1, 0, -1);
      }
      else if (v54 == 0) {
        goto LABEL_106;
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v54 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v54 + 16LL))(v54);
        std___1___shared_weak_count___release_weak(v54);
        v68 = *(_QWORD*)(a1 + 56);
        if (v68 == 0) {
          goto LABEL_345;
        }
        goto LABEL_107;
      }
    }
    goto LABEL_106;
  }
  v239[0] = (const char*)a1;
  v236 = a1;
  HIDWORD(v235) = 0;
  v46 = (__int64**)fw_memory_HeapManager_Allocate(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 40, 16, 0);
  v240_.v244 = v46;
  *v46 = (__int64*)GameData_20c9548;
  v46[1] = (__int64*)a1;
  v46[2] = (__int64*)((char*)&v235 + 4);
  v46[3] = (__int64*)v239;
  v46[4] = &v236;
  GameRoutine_156d8f0((__int64)&v240_.v240);
LABEL_101:
  if (v240_.v244 == &v240_.v240) {
    v69 = 4;
  }
  else {
    if (v240_.v244 == nullptr) {
      goto LABEL_106;
    }
    v69 = 5;
  }
  ((void (*)(void*))(*v240_.v244)[v69])(v240_.v244);
LABEL_106:
  v68 = *(_QWORD*)(a1 + 56);
  if (v68 == 0) {
  LABEL_345:
    v71 = ui_LayoutAccessor_empty__ptr[0];
    goto LABEL_346;
  }
LABEL_107:
  v70 = std___1___shared_weak_count_lock(v68);
  if (v70 == 0) {
    goto LABEL_345;
  }
  v71 = *(__int64**)(a1 + 48);
  if (atomic_fetch_add((atomic_ullong* volatile)(v70 + 8),
                       0xFFFFFFFFFFFFFFFFLL) != 0) {
    if (v71 == nullptr) {
      goto LABEL_345;
    }
  }
  else {
    v72 = v70;
    (*(void (**)(__int64))(*(_QWORD*)v70 + 16LL))(v70);
    std___1___shared_weak_count___release_weak(v72);
    if (v71 == nullptr) {
      goto LABEL_345;
    }
  }
LABEL_346:
  v232 = (unsigned int*)game_util_Format("Page%02d", *(_DWORD*)(a1 + 96));
  return LayoutAccessor_1562cf0((__int64)v71, v232);
}

__int64 game_menu_UnitTroopMenuItem_OnUpdateContent_lambda0_Invoke(
    __int64 result, unsigned __int8* a2, int* a3)
{
  _QWORD* v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64* v10;
  _DWORD* v11;
  int v12;
  char* v13;
  __int64 v14;
  __int64* v15;
  char v16;
  __int64 v17;
  char v18;
  unsigned int v19;
  unsigned __int64 v20;
  int v21;
  unsigned int v22;
  int v23;
  int v24;
  int v25;
  unsigned int v26;
  int v27;
  __int64 v28;
  char v29;
  __int64 v30;
  char v31;
  char v32;
  struct {
    __int64* v33;
    __int64 v34;
  } v33_;

  if (*a3 <= 7) {
    v5 = *(_QWORD**)(result + 8);
    v6 = result;
    v7 = *a2;
    v8 = v5[7];
    if (v8 != 0) {
      v9 = std___1___shared_weak_count_lock(v8);
      if (v9 != 0) {
        v10 = (__int64*)v5[6];
        if (atomic_fetch_add((atomic_ullong* volatile)(v9 + 8),
                             0xFFFFFFFFFFFFFFFFLL) != 0) {
          if (v10 != nullptr) {
            goto LABEL_7;
          }
        }
        else {
          v28 = v9;
          (*(void (**)(__int64))(*(_QWORD*)v9 + 16LL))(v9);
          std___1___shared_weak_count___release_weak(v28);
          if (v10 != nullptr) {
          LABEL_7:
            v11 = *(_DWORD**)(v6 + 16);
            v12 = (*v11)++;
            v13 = game_util_Format("L_MasteryInfoItem%02d", v12);
            LayoutAccessor_1560070((void*)(&v33_.v33), v10, v13);
            result = v33_.v34;
            if (v33_.v34 == 0) {
              return result;
            }
            v14 = std___1___shared_weak_count_lock(v33_.v34);
            v15 = v33_.v33;
            result = v33_.v34;
            if (v33_.v34 != 0) {
              result = std___1___shared_weak_count___release_weak(v33_.v34);
            }
            if (v14 == 0 || v15 == nullptr) {
              if (v14 == 0) {
                return result;
              }
              goto LABEL_44;
            }
            v16 = Util_1580a10(v5[11], v7);
            v17 = v5[11];
            v18 = v16;
            v19 = *(unsigned __int8*)(v17 + v7 + 540);
            v20 = (unsigned __int64)(GameData_21d99b0 - GameData_21d99a8) >> 2;
            if ((int)v20 < 1) {
              LOBYTE(v21) = 0;
            LABEL_32:
              if (v19 >= (unsigned __int8)v21) {
                goto LABEL_37;
              }
            }
            else {
              v21 = 0;
              if ((unsigned int)v20 >= 0xC) {
                v22 = 12;
              }
              else {
                v22 = (unsigned __int64)(GameData_21d99b0 - GameData_21d99a8) >>
                      2;
              }
              v23 =
                  *(_DWORD*)(GameData_21d99a8 + 4LL * (unsigned int)(v20 - 1));
              v24 = *(_DWORD*)(GameData_21d99a8 + 4LL * v22 - 4);
              if (v23 >= v24) {
                v23 = v24;
              }
              if (v24 >= (signed __int32)*(_DWORD*)GameData_21d99a8) {
                v25 = v23;
              }
              else {
                v25 = *(_DWORD*)GameData_21d99a8;
              }
              while (1) {
                v26 = (unsigned int)(v21 + v20) >> 1;
                v27 = *(_DWORD*)(GameData_21d99a8 + 4LL * v26);
                if (v25 == v27) {
                  break;
                }
                if (v25 < v27) {
                  LODWORD(v20) = (unsigned int)(v21 + v20) >> 1;
                }
                else {
                  v21 = v26 + 1;
                }
                if (v21 >= (int)v20) {
                  goto LABEL_32;
                }
              }
              if (v19 >= (unsigned __int8)(v26 + 1)) {
              LABEL_37:
                v32 = 1;
              LABEL_43:
                result =
                    (__int64)Util_1580bf0(v15, v17, v7, v18 & 1, 0, 0, 0, v32);
              LABEL_44:
                if (atomic_fetch_add((atomic_ullong* volatile)(v14 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
                  (*(void (**)(__int64))(*(_QWORD*)v14 + 16LL))(v14);
                  return std___1___shared_weak_count___release_weak(v14);
                }
                return result;
              }
            }
            LODWORD(v33_.v33) = *game_g_shared_system_skills_ptr & 0xFFF;
            v29 = game_HasSkill_alt1((_QWORD*)(v17 + 1744),
                                     (unsigned int*)&v33_.v33);
            v30 = *(_QWORD*)(v17 + 440);
            if ((v29 & 1) == 0 ||
                (v30 == 0 ? (v31 = 9) : (v31 = *(_BYTE*)(v30 + 16)), v32 = 1,
                 ((1 << v31) & 0xF1) == 0)) {
              v32 = v30 != 0 &&
                    (unsigned int)*(unsigned __int8*)(v30 + 16) - 1 < 3;
            }
            goto LABEL_43;
          }
        }
      }
    }
    v10 = &ui_LayoutAccessor_empty_;
    goto LABEL_7;
  }
  return result;
}

void game_menu_UnitTroopMenuItem_OnUpdateContent_lambda1_Invoke(_QWORD* a1,
                                                                int* a2)
{
  int v2;
  __int64 v3;
  __int64 v4;
  _WORD* v6;
  __int64* v7;
  unsigned int v8;
  __int64 v9;
  unsigned int v10;
  unsigned int v11;
  char* v12;
  __int64 v13;
  __int64 v14;
  __int64* v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  _DWORD* v19;
  __int64* v20;
  int v21;
  unsigned int v22;
  unsigned int v23;
  _DWORD* v24;
  __int64* v25;
  __int64 v26;
  int v27;
  __int64 v28;
  int v29;
  float v30;
  float v31;
  _DWORD* v32;
  __int64 v33;
  int v34;
  __int64 v35;
  int v36;
  float v37;
  float v38;
  _DWORD* v39;
  __int64* v40;
  int v41;
  __int64 v42;
  __int64 v43;
  __int64* v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  unsigned int v49;
  int v50;
  _DWORD* v51;
  unsigned int v52;
  __int64 v53;
  _DWORD* v54;
  __int64 v55;
  int v56;
  __int64 v57;
  int v58;
  float v59;
  float v60;
  _DWORD* v61;
  __int64 v62;
  __int64 v63;
  __int64 v64;
  int v65;
  int v66;
  int v67;
  _DWORD* v68;
  __int64 v69;
  int v70;
  __int64* v71;
  int v72;
  __int64 v73;
  int v74;
  float v75;
  float v76;
  int v77;
  int v78;
  bool v79;
  unsigned int v80;
  int v81;
  __int64 v82;
  bool v84;
  int v85;
  unsigned int v86;
  __int64 v87;
  struct {
    int v88;
    unsigned __int8 v89;
    char gap5_[11];
    unsigned int v90;
    unsigned int v91;
    char gap24_[8];
    __int64 v92;
    __int64 v93;
  } v88_;
  _QWORD v94[2];
  struct {
    __int64 v95;
    __int64 v96;
  } v95_;

  v2 = *a2;
  v3 = a1[1];
  if (*a2 <= 12) {
    if (v2 > 10) {
      if (v2 != 11) {
        if (v2 != 12) {
          return;
        }
        v24 = (_DWORD*)a1[2];
        v25 = (__int64*)a1[3];
        v21 = (*v24)++;
        v26 = *(_QWORD*)(v3 + 88);
        v27 = UnitDerivedParams_6deeb0(v26, 0) + *(__int16*)(v26 + 636);
        if (*(_WORD*)(v26 + 1952) != 0) {
          v27 +=
              *(__int16*)(*(_QWORD*)(*(_QWORD*)(GameData_21c99b8 + 64) +
                                     8LL * *(unsigned __int16*)(v26 + 1952)) +
                          118LL);
        }
        v28 = *(_QWORD*)(v3 + 88);
        v22 = v27 & ~(v27 >> 31);
        v29 = UnitDerivedParams_6deeb0(v28, 1) + *(__int16*)(v28 + 636);
        if (*(_WORD*)(v28 + 1952) != 0) {
          v29 +=
              *(__int16*)(*(_QWORD*)(*(_QWORD*)(GameData_21c99b8 + 64) +
                                     8LL * *(unsigned __int16*)(v28 + 1952)) +
                          118LL);
        }
        v30 = *(float*)(v28 + 688);
        if (v30 <= 0x1.0000000000000p+0f) {
          v31 = v30 * (float)(v29 + *(__int16*)(v28 + 684));
        }
        else {
          v31 = (float)*(__int16*)(v28 + 684) + (float)((float)v29 * v30);
        }
        v77 = (int)v31;
        if ((int)v31 >= 999) {
          v77 = 999;
        }
        v78 = *(__int16*)(v28 + 686);
        goto LABEL_102;
      }
      v51 = (_DWORD*)a1[2];
      v20 = (__int64*)a1[3];
      v21 = (*v51)++;
      v22 = UnitDerivedParams_6deeb0(*(_QWORD*)(v3 + 88), 0);
      v23 = UnitDerivedParams_6deeb0(*(_QWORD*)(v3 + 88), 1);
    }
    else {
      if (v2 == 0) {
        v39 = (_DWORD*)a1[2];
        v40 = (__int64*)a1[3];
        v41 = (*v39)++;
        v42 = *(_QWORD*)(v3 + 88);
        v43 = *(_QWORD*)(v42 + 1952);
        v44 = GameData_212c878[0];
        if (*(_WORD*)(v42 + 1952) != 0) {
          v45 = *(_QWORD*)(v42 + 1952);
        }
        else {
          LODWORD(v45) = 0;
        }
        v46 = *(_QWORD*)(*GameData_212c878[0] + 64);
        v47 = *(_QWORD*)(v46 + 8LL * (unsigned __int16)v45);
        if (*(unsigned __int8*)(v47 + 72) <= 7u && *(_BYTE*)(v47 + 73) == 1) {
          v79 = game_6ed370(v47);
          v80 = game_Unit_GetAttack(
              v42, v79,
              *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(*v44 + 64) +
                                             8LL * (unsigned __int16)v45) +
                                  88LL) >>
                  ((v45 & 0x8000000) != 0),
              1, 0);
          v42 = *(_QWORD*)(v3 + 88);
          v49 = v80;
          v50 = *(unsigned __int16*)(v42 + 1952);
          v43 = *(_QWORD*)(v42 + 1952);
          v46 = *(_QWORD*)(*v44 + 64);
        }
        else {
          v49 = 0;
          v50 = (unsigned __int16)*(_QWORD*)(v42 + 1952);
        }
        if (v50 != 0) {
          v81 = v43;
        }
        else {
          v81 = 0;
        }
        v82 = *(_QWORD*)(v46 + 8LL * (unsigned __int16)v81);
        if (*(unsigned __int8*)(v82 + 72) <= 7u && *(_BYTE*)(v82 + 73) == 1) {
          v84 = game_6ed370(v82);
          v52 = game_Unit_GetAttack(
              v42, v84,
              *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(*v44 + 64) +
                                             8LL * (unsigned __int16)v81) +
                                  88LL) >>
                  ((v81 & 0x8000000) != 0),
              1, 1);
        }
        else {
          v52 = 0;
        }
        v53 = *v40;
        v85 = v41;
        v86 = v49;
        goto LABEL_105;
      }
      if (v2 != 10) {
        return;
      }
      v19 = (_DWORD*)a1[2];
      v20 = (__int64*)a1[3];
      v21 = (*v19)++;
      v22 = game_Unit_GetUnknown4(*(_QWORD*)(v3 + 88), 0);
      v23 = game_Unit_GetUnknown4(*(_QWORD*)(v3 + 88), 1);
    }
    v52 = v23;
    v53 = *v20;
  LABEL_104:
    v85 = v21;
    v86 = v22;
  LABEL_105:
    UnitTroopMenuItem_1795520(v53, v85, v86, v52);
    return;
  }
  if (v2 <= 14) {
    if (v2 == 13) {
      v61 = (_DWORD*)a1[2];
      v25 = (__int64*)a1[3];
      v21 = (*v61)++;
      v62 = *(_QWORD*)(v3 + 88);
      if (*(_WORD*)(v62 + 1952) != 0 &&
          *(_BYTE*)((v63 = *(_QWORD*)(*(_QWORD*)(GameData_21c99b8 + 64) +
                                      8LL * *(unsigned __int16*)(v62 + 1952))) +
                    73) == 1) {
        v64 = *(_QWORD*)(v3 + 88);
        v65 = *(__int16*)(v62 + 638) + *(__int16*)(v63 + 120);
        v66 = game_Unit_GetParam(v62);
        LOBYTE(v88_.v88) = 3;
        v67 = game_Unit_GetParam(v64) + v66;
        v62 = *(_QWORD*)(v3 + 88);
        v22 = (v65 + v67 / 2) & ~((v65 + v67 / 2) >> 31);
      }
      else {
        v22 = 0;
      }
      v52 = game_Unit_GetUnknown6(v62, 1);
      goto LABEL_103;
    }
    if (v2 != 14) {
      return;
    }
    v32 = (_DWORD*)a1[2];
    v25 = (__int64*)a1[3];
    v21 = (*v32)++;
    LOBYTE(v88_.v88) = 5;
    v33 = *(_QWORD*)(v3 + 88);
    v34 = game_Unit_GetParam(v33) + *(__int16*)(v33 + 640);
    if (*(_WORD*)(v33 + 1952) != 0) {
      v34 += *(__int16*)(*(_QWORD*)(*(_QWORD*)(GameData_21c99b8 + 64) +
                                    8LL * *(unsigned __int16*)(v33 + 1952)) +
                         122LL);
    }
    v35 = *(_QWORD*)(v3 + 88);
    v22 = v34 & ~(v34 >> 31);
    LOBYTE(v88_.v88) = 5;
    v36 = game_Unit_GetParam(v35) + *(__int16*)(v35 + 640);
    if (*(_WORD*)(v35 + 1952) != 0) {
      v36 += *(__int16*)(*(_QWORD*)(*(_QWORD*)(GameData_21c99b8 + 64) +
                                    8LL * *(unsigned __int16*)(v35 + 1952)) +
                         122LL);
    }
    v37 = *(float*)(v35 + 704);
    if (v37 <= 0x1.0000000000000p+0f) {
      v38 = v37 * (float)(v36 + *(__int16*)(v35 + 700));
    }
    else {
      v38 = (float)*(__int16*)(v35 + 700) + (float)((float)v36 * v37);
    }
    v77 = (int)v38;
    if ((int)v38 >= 999) {
      v77 = 999;
    }
    v78 = *(__int16*)(v35 + 702);
  LABEL_102:
    v52 = (v77 + v78) & ~((v77 + v78) >> 31);
  LABEL_103:
    v53 = *v25;
    goto LABEL_104;
  }
  if (v2 == 15) {
    v54 = (_DWORD*)a1[2];
    v25 = (__int64*)a1[3];
    v21 = (*v54)++;
    LOBYTE(v88_.v88) = 6;
    v55 = *(_QWORD*)(v3 + 88);
    v56 = game_Unit_GetParam(v55) + *(__int16*)(v55 + 630);
    if (*(_WORD*)(v55 + 1952) != 0) {
      v56 += *(__int16*)(*(_QWORD*)(*(_QWORD*)(GameData_21c99b8 + 64) +
                                    8LL * *(unsigned __int16*)(v55 + 1952)) +
                         112LL);
    }
    v57 = *(_QWORD*)(v3 + 88);
    v22 = v56 & ~(v56 >> 31);
    LOBYTE(v88_.v88) = 6;
    v58 = game_Unit_GetParam(v57) + *(__int16*)(v57 + 630);
    if (*(_WORD*)(v57 + 1952) != 0) {
      v58 += *(__int16*)(*(_QWORD*)(*(_QWORD*)(GameData_21c99b8 + 64) +
                                    8LL * *(unsigned __int16*)(v57 + 1952)) +
                         112LL);
    }
    v59 = *(float*)(v57 + 664);
    if (v59 <= 0x1.0000000000000p+0f) {
      v60 = v59 * (float)(v58 + *(__int16*)(v57 + 660));
    }
    else {
      v60 = (float)*(__int16*)(v57 + 660) + (float)((float)v58 * v59);
    }
    v77 = (int)v60;
    if ((int)v60 >= 999) {
      v77 = 999;
    }
    v78 = *(__int16*)(v57 + 662);
    goto LABEL_102;
  }
  if (v2 == 16) {
    v68 = (_DWORD*)a1[2];
    v25 = (__int64*)a1[3];
    v21 = (*v68)++;
    LOBYTE(v88_.v88) = 7;
    v69 = *(_QWORD*)(v3 + 88);
    v70 = game_Unit_GetParam(v69);
    v71 = GameData_212c878[0];
    v72 = v70 + *(__int16*)(v69 + 632);
    if (*(_WORD*)(v69 + 1952) != 0) {
      v72 += *(__int16*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) +
                                    8LL * *(unsigned __int16*)(v69 + 1952)) +
                         114LL);
    }
    v73 = *(_QWORD*)(v3 + 88);
    v22 = v72 & ~(v72 >> 31);
    LOBYTE(v88_.v88) = 7;
    v74 = game_Unit_GetParam(v73) + *(__int16*)(v73 + 632);
    if (*(_WORD*)(v73 + 1952) != 0) {
      v74 += *(__int16*)(*(_QWORD*)(*(_QWORD*)(*v71 + 64) +
                                    8LL * *(unsigned __int16*)(v73 + 1952)) +
                         114LL);
    }
    v75 = *(float*)(v73 + 672);
    if (v75 <= 0x1.0000000000000p+0f) {
      v76 = v75 * (float)(v74 + *(__int16*)(v73 + 668));
    }
    else {
      v76 = (float)*(__int16*)(v73 + 668) + (float)((float)v74 * v75);
    }
    v77 = (int)v76;
    if ((int)v76 >= 999) {
      v77 = 999;
    }
    v78 = *(__int16*)(v73 + 670);
    goto LABEL_102;
  }
  if (v2 != 17) {
    return;
  }
  v4 = *(_QWORD*)(v3 + 88);
  if (*(_WORD*)(v4 + 1952) != 0) {
    v6 = (_WORD*)(v4 + 1952);
  }
  else {
    v6 = nullptr;
  }
  game_gameui_1594d10((void*)((__int64)&v88_.v88), v6, 17, v4);
  v7 = (__int64*)a1[4];
  ++*(_DWORD*)a1[2];
  v8 = v88_.v89;
  v9 = *v7;
  if (v88_.v88 == 17) {
    v10 = v88_.v90;
  }
  else {
    v10 = 0;
  }
  if (v88_.v88 == 17) {
    v11 = v88_.v91;
  }
  else {
    v11 = 0;
  }
  v12 = game_util_Format("L_Status%02d");
  v13 = *(_QWORD*)(v9 + 56);
  if (v13 == 0) {
    goto LABEL_20;
  }
  v14 = std___1___shared_weak_count_lock(v13);
  if (v14 == 0) {
    goto LABEL_20;
  }
  v15 = *(__int64**)(v9 + 48);
  if (atomic_fetch_add((atomic_ullong* volatile)(v14 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    v16 = v14;
    (*(void (**)(__int64))(*(_QWORD*)v14 + 16LL))(v14);
    std___1___shared_weak_count___release_weak(v16);
  }
  if (v15 == nullptr) {
  LABEL_20:
    v15 = &ui_LayoutAccessor_empty_;
  }
  v94[0] = v12;
  v94[1] = strlen(v12);
  GameRoutine_9d5180((void*)(&v95_.v95), v15, v94);
  if (v95_.v96 == 0) {
    goto LABEL_109;
  }
  v17 = std___1___shared_weak_count_lock(v95_.v96);
  v18 = v95_.v95;
  if (v95_.v96 != 0) {
    std___1___shared_weak_count___release_weak(v95_.v96);
  }
  if (v17 != 0 && v18 != 0) {
    (*(void (**)(__int64, _QWORD))(*(_QWORD*)v18 + 40LL))(v18, v8);
    if (v8 != 0) {
      StatusNum_1890820(v18, v10, v11);
    }
    goto LABEL_107;
  }
  if (v17 != 0) {
  LABEL_107:
    if (atomic_fetch_add((atomic_ullong* volatile)(v17 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v17 + 16LL))(v17);
      std___1___shared_weak_count___release_weak(v17);
    }
  }
LABEL_109:
  if (v88_.v92 != 0) {
    v88_.v93 = v88_.v92;
    v87 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v87 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v87,
                                  v88_.v92);
  }
}

__int64 UnitTroopMenuItem_1795520(__int64 a1, int a2, unsigned int a3,
                                  unsigned int a4)
{
  char* v7;
  __int64 v8;
  __int64 v9;
  __int64* v10;
  __int64 result;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  _QWORD v15[2];
  struct {
    __int64 v16;
    __int64 v17;
  } v16_;

  v7 = game_util_Format("L_Status%02d", a2);
  v8 = *(_QWORD*)(a1 + 56);
  if (v8 == 0) {
    goto LABEL_5;
  }
  v9 = std___1___shared_weak_count_lock(v8);
  if (v9 == 0) {
    goto LABEL_5;
  }
  v10 = *(__int64**)(a1 + 48);
  if (atomic_fetch_add((atomic_ullong* volatile)(v9 + 8),
                       0xFFFFFFFFFFFFFFFFLL) != 0) {
    if (v10 != nullptr) {
      goto LABEL_6;
    }
    goto LABEL_5;
  }
  v14 = v9;
  (*(void (**)(__int64))(*(_QWORD*)v9 + 16LL))(v9);
  std___1___shared_weak_count___release_weak(v14);
  if (v10 == nullptr) {
  LABEL_5:
    v10 = &ui_LayoutAccessor_empty_;
  }
LABEL_6:
  v15[0] = v7;
  v15[1] = strlen(v7);
  GameRoutine_9d5180((void*)(&v16_.v16), v10, v15);
  result = v16_.v17;
  if (v16_.v17 == 0) {
    return result;
  }
  v12 = std___1___shared_weak_count_lock(v16_.v17);
  v13 = v16_.v16;
  result = v16_.v17;
  if (v16_.v17 != 0) {
    result = std___1___shared_weak_count___release_weak(v16_.v17);
  }
  if (v12 != 0 && v13 != 0) {
    result = StatusNum_1890220(v13, a4, a3, 0xFFFFFFFF, 1, 0, -1);
  }
  else if (v12 == 0) {
    return result;
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v12 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v12 + 16LL))(v12);
    return std___1___shared_weak_count___release_weak(v12);
  }
  return result;
}

__int64 game_menu_UnitTroopMenuItem_OnUpdateContent_lambda2_Invoke(__int64 a1,
                                                                   int* a2)
{
  _DWORD* v2;
  _QWORD* v3;
  int v4;
  int v6;
  char* v7;
  __int64 v8;
  __int64 v9;
  __int64* v10;
  __int64 result;
  __int64 v12;
  __int64 v13;
  char v14;
  __int64 v15;
  unsigned int v16;
  unsigned int v17;
  __int64 v18;
  unsigned int v19;
  __int64 v20;
  _QWORD v21[2];
  struct {
    __int64 v22;
    __int64 v23;
  } v22_;

  v2 = *(_DWORD**)(a1 + 8);
  v3 = *(_QWORD**)(a1 + 16);
  v4 = *a2;
  v6 = (*v2)++;
  v7 = game_util_Format("L_Status%02d", v6);
  v8 = v3[7];
  if (v8 == 0) {
    goto LABEL_5;
  }
  v9 = std___1___shared_weak_count_lock(v8);
  if (v9 == 0) {
    goto LABEL_5;
  }
  v10 = (__int64*)v3[6];
  if (atomic_fetch_add((atomic_ullong* volatile)(v9 + 8),
                       0xFFFFFFFFFFFFFFFFLL) != 0) {
    if (v10 != nullptr) {
      goto LABEL_6;
    }
    goto LABEL_5;
  }
  v20 = v9;
  (*(void (**)(__int64))(*(_QWORD*)v9 + 16LL))(v9);
  std___1___shared_weak_count___release_weak(v20);
  if (v10 == nullptr) {
  LABEL_5:
    v10 = &ui_LayoutAccessor_empty_;
  }
LABEL_6:
  v21[0] = v7;
  v21[1] = strlen(v7);
  GameRoutine_9d5180((void*)(&v22_.v22), v10, v21);
  result = v22_.v23;
  if (v22_.v23 != 0) {
    v12 = std___1___shared_weak_count_lock(v22_.v23);
    v13 = v22_.v22;
    result = v22_.v23;
    if (v22_.v23 != 0) {
      result = std___1___shared_weak_count___release_weak(v22_.v23);
    }
    if (v12 != 0 && v13 != 0) {
      if ((unsigned int)(v4 - 28) > 9) {
        v14 = 11;
      }
      else {
        v14 = GameData_1c019a4[v4 - 28];
      }
      v15 = v3[11];
      LOBYTE(v22_.v22) = v14;
      **(_DWORD**)(a1 + 24) += game_Unit_GetParam(v15);
      LOBYTE(v22_.v22) = v14;
      **(_DWORD**)(a1 + 32) += game_Unit_GetParam(v3[11]);
      LOBYTE(v22_.v22) = v14;
      v16 =
          game_Unit_GetParamLimit((_QWORD*)v3[11], (unsigned __int8*)&v22_.v22);
      **(_DWORD**)(a1 + 40) += v16;
      LOBYTE(v22_.v22) = v14;
      v17 = game_Unit_GetParam(v3[11]);
      v18 = v3[11];
      LOBYTE(v21[0]) = v14;
      v19 = game_Unit_GetParam(v18);
      StatusNum_1890220(v13, v17, v19, v16, 1, 0, -1);
      result =
          (*(__int64 (**)(__int64, __int64))(*(_QWORD*)v13 + 40LL))(v13, 1);
    }
    else if (v12 == 0) {
      return result;
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v12 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v12 + 16LL))(v12);
      return std___1___shared_weak_count___release_weak(v12);
    }
  }
  return result;
}

#pragma GCC visibility pop
