#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_157b780(_QWORD, _QWORD);
__int64 game_menu_EquipUnitSelectMenu_UpdateEquipList_lambda1_Invoke(__int64 a1,
                                                                     int* a2);
__attribute__((swiftcall)) void GameRoutine_15d4100(PSEUDO_X8, __int64*,
                                                    const char**);
__attribute__((swiftcall)) void LayoutAccessor_1560070(PSEUDO_X8, __int64*,
                                                       const char*);
__int64 EquipUnitSelectMenu_16cdaa0(__int64*, __int64*);
__int64 std___1___shared_weak_count___release_weak(__int64);
__int64 std___1___shared_weak_count_lock(__int64);
__int64 ui_LayoutAccessor_SetPaneVisible(__int64 result, const char*, char);
char* game_util_Format(const char*, ...);
extern __int64 (*ui_Event_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
unsigned __int64 strlen(const char*);
void MenuItemSkill_1899480(__int64, unsigned int, char, char);
void PageTab_16e6880(__int64, int, unsigned int, unsigned int);
void nn_mem_StandardAllocator_Free(__int64, __int64);
__int64 EquipUnitSelectMenu_16cd870(__int64* a1);
_QWORD*
game_menu_EquipUnitSelectMenu_UpdateEquipList_lambda0_Invoke(_QWORD* result,
                                                             int* a2);
_DWORD* GameRoutine_932460(unsigned __int8*, __int64*);
_QWORD* GameRoutine_6d7e80(__int64, __int64, __int64);
_QWORD* Util_1575c70(__int64, __int64, int, const char*, char, __int64);
__attribute__((swiftcall)) void
GameRoutine_15d4100_alt1(PSEUDO_X8, __int64*,
                         _QWORD*) __asm__("GameRoutine_15d4100");
__attribute__((swiftcall)) void
game_gameui_Util_CollectArtsInfoList(PSEUDO_X8, __int64, int, __int64, char);
__int64* LayoutAccessor_155fbe0(__int64*, const char*);
__int64 Alignment_56b600(__int64 result);
__int64 AsyncLoadThumbImage_1899d60(__int64, __int64);
__int64 AsyncLoadThumbImage_189a040(__int64, _BYTE*);
__int64 AsyncLoadThumbImage_189a3a0(_QWORD*, __int64);
__int64 Element_18863e0(__int64, const char**, char);
__int64 ExpTableFile_7d67c0(int);
__int64 GameHr_157b5c0(__int64 result, unsigned __int16*);
__int64 GameRoutine_15748c0(__int64, unsigned __int16*, char);
__int64 GameRoutine_1583710(__int64*, __int64, __int64);
__int64 GameRoutine_15de930(__int64 result);
__int64 GameRoutine_15dedb0(int*, unsigned __int8*, __int64);
__int64 GameRoutine_1627860(__int64 result);
__int64 GameRoutine_16ccdc0(__int64 result);
__int64 GameRoutine_932160(__int64, __int64);
__int64 GameRoutine_932360(unsigned __int8*, __int64*);
__int64 LayoutAccessor_155e830(__int64 result, char);
__int64 LayoutAccessor_155ea30(__int64*);
__int64 LayoutAccessor_1562cf0(__int64 result, const char*);
__int64 MenuItemSkill_189a700(__int64);
__int64 MenuItem_188bf10(__int64, const char*);
__int64 Util_15792c0(__int64*, unsigned __int16*, char, unsigned __int8,
                     __int64, const char*, __int64, char);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 game_Unit_SkillList_FindKind(__int64, unsigned __int8);
__int64 game_gameui_Util_CountAvailableArtsNum(__int64);
__int64 game_gameui_control_1898940(__int64);
__int64 ui_LayoutAccessor_FindAlignment(__int64*, const char*);
__int64 ui_LayoutAccessor_SetPaneVisible_alt1(
    __int64 result, __int64, char) __asm__("ui_LayoutAccessor_SetPaneVisible");
bool GameRoutine_15dee60(_DWORD*, __int64);
char* GameHr_6ed030(__int64);
char* LayoutAccessor_1562060(char* result, __int64, const char*);
extern _UNKNOWN* GameData_212c8a8;
extern __int64 (*GameData_2097018[])();
extern __int64 (*GameData_2097098[])();
extern __int64* GameData_212c878[6];
extern __int64* GameData_212c880[5];
extern __int64* GameData_212c8a0;
extern __int64* GameData_212c8b0[11];
extern __int64* GameData_212d890[2];
extern __int64* game_g_empty_item_ptr;
extern __int64 GameData_212c998[148];
extern __int64 GameData_21d9988;
extern __int64 GameData_21d9990;
extern __int64 GameData_21f4018[];
extern char* GameData_2096d18[];
unsigned __int8* Unit_931120(unsigned __int8*);
void AsyncLoadThumbImage_1899ba0(__int64);
void GameHr_157e0f0(__int64, const char*, const char*);
void GameRoutine_156c5d0(__int64, __int64, char);
void GameRoutine_157e060(__int64*, const char*, const char*);
void Util_157f4e0(__int64*, __int64, __int64);
void game_menu_EquipUnitSelectMenu_UpdateEquipList(__int64 a1, __int64 a2,
                                                   char a3);

__int64 EquipUnitSelectMenu_16cd870(__int64* a1)
{
  int v2;
  __int64 v3;
  char v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 result;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  char v12;
  int v13;
  int v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  struct {
    __int64 v18;
    __int64 v19;
    __int64 v20;
  } v18_;

  ui_LayoutAccessor_SetPaneVisible((__int64)(a1 + 119), "L_Num", 0);
  v2 = (*(__int64 (**)(__int64*))(*a1 + 1208))(a1);
  v3 = *a1;
  *((_DWORD*)a1 + 338) = v2;
  *((_DWORD*)a1 + 339) = v2;
  v4 = (*(__int64 (**)(__int64*))(v3 + 1200))(a1);
  ui_LayoutAccessor_SetPaneVisible((__int64)(a1 + 106),
                                   "L_UnitInfoDetail/A_KeyHelp", v4 & 1);
  v5 = *a1;
  v6 = *((unsigned int*)a1 + 338);
  v18_.v19 = 0;
  v18_.v20 = 0;
  v18_.v18 = 0;
  (*(void (**)(__int64*, __int64*, __int64))(v5 + 1216))(a1, &v18_.v18, v6);
  EquipUnitSelectMenu_16cdaa0(a1, &v18_.v18);
  if (v18_.v18 != 0) {
    v18_.v19 = v18_.v18;
    v7 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v7 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v7,
                                  v18_.v18);
  }
  result = (*(__int64 (**)(__int64*))(*a1 + 1192))(a1);
  if ((result & 1) == 0) {
    a1[150] = 0;
    *((_DWORD*)a1 + 302) = 0;
    LayoutAccessor_1560070((void*)(&v18_.v18), a1 + 106,
                           "L_UnitInfoDetail/L_PageTab");
    if (v18_.v19 != 0) {
      v9 = std___1___shared_weak_count_lock(v18_.v19);
      v10 = v9;
      if (v9 != 0) {
        v11 = v18_.v18;
        v12 = 0;
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v9 + 16), 1u,
                                  memory_order_relaxed);
      LABEL_12:
        v13 = (*(__int64 (**)(__int64*))(*a1 + 192))(a1);
        if (v10 != 0) {
          v14 = v13;
          v15 = std___1___shared_weak_count_lock(v10);
          if (v15 != 0) {
            v16 = v15;
            if (v11 != 0) {
              *((_DWORD*)a1 + 310) = 1;
              atomic_fetch_add_explicit((atomic_ullong* volatile)(v10 + 16), 1u,
                                        memory_order_relaxed);
              a1[162] = v11;
              v17 = a1[163];
              a1[163] = v10;
              if (v17 != 0) {
                std___1___shared_weak_count___release_weak(v17);
              }
              PageTab_16e6880((__int64)(a1 + 150), v14, 4u, 5u);
            }
            if (atomic_fetch_add((atomic_ullong* volatile)(v16 + 8),
                                 0xFFFFFFFFFFFFFFFFLL) == 0) {
              (*(void (**)(__int64))(*(_QWORD*)v16 + 16LL))(v16);
              std___1___shared_weak_count___release_weak(v16);
            }
          }
          std___1___shared_weak_count___release_weak(v10);
        }
        if ((v12 & 1) == 0 &&
            atomic_fetch_add((atomic_ullong* volatile)(v10 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v10 + 16LL))(v10);
          std___1___shared_weak_count___release_weak(v10);
        }
        result = v18_.v19;
        if (v18_.v19 != 0) {
          return std___1___shared_weak_count___release_weak(v18_.v19);
        }
        return result;
      }
      v11 = 0;
    }
    else {
      v11 = 0;
      v10 = 0;
    }
    v12 = 1;
    goto LABEL_12;
  }
  return result;
}

void game_menu_EquipUnitSelectMenu_UpdateEquipList(__int64 a1, __int64 a2,
                                                   char a3)
{
  __int64 v5;
  __int64* v6;
  __int64 v7;
  int v8;
  __int64* v9;
  __int64 v10;
  __int64 v11;
  char v12;
  __int64 i;
  char* v14;
  __int64 v15;
  __int64* v16;
  __int64 v17;
  __int64 v18;
  unsigned __int64 v19;
  unsigned __int64 v20;
  const char* v21;
  const char* v22;
  __int64 v23;
  __int64 v24;
  const char* v25;
  __int64 v26;
  __int64 v27;
  __int64* v28;
  int v29;
  char* v30;
  __int64 v31;
  const char* v32;
  __int64* v33;
  __int64 v34;
  __int64 v35;
  unsigned __int16* v36;
  __int64 v37;
  unsigned int v38;
  int v39;
  __int64 v40;
  unsigned int v41;
  unsigned int v42;
  __int64* v43;
  __int64* v44;
  __int64 v45;
  const char* v46;
  __int64 v47;
  __int64* v48;
  int v49;
  __int64 v50;
  unsigned int* v51;
  __int64 v52;
  unsigned int v53;
  __int64 v54;
  int v56;
  int v57;
  int v58;
  __int64 v59;
  const char* v60;
  __int64 v61;
  _QWORD* v62;
  __int64* v63;
  __int64* v64;
  __int64 v65;
  _BYTE* v66;
  __int64 v67;
  __int64 v68;
  const char* v69;
  __int64 v70;
  const char* v71;
  __int64 v72;
  __int64 v73;
  __int64 v74;
  __int64 v75;
  __int64 v76;
  __int64 v77;
  __int64* v78;
  __int64 v79;
  int v80;
  unsigned __int64 v81;
  unsigned __int64 v82;
  unsigned __int64 v83;
  unsigned int v84;
  const char* v85;
  __int64 v86;
  const char* v87;
  int v88;
  unsigned int v89;
  bool v90;
  int v91;
  __int64 v92;
  const char* v93;
  unsigned int v94;
  unsigned int v95;
  char* v96;
  __int64 v97;
  const char* v98;
  __int64 v99;
  __int64 v100;
  unsigned int v101;
  _BOOL4 v102;
  int v103;
  int* v104;
  __int64 v105;
  const char* v106;
  const char* v107;
  char* v108;
  unsigned __int8* v109;
  __int64 v110;
  const char* v111;
  __int64 v112;
  int v113;
  unsigned __int64 v114;
  const char* v115;
  __int64 v116;
  char v117;
  char v118;
  int v119;
  char* v120;
  __int64 v121;
  __int64 v122;
  const char* v123;
  __int64 v124;
  __int64* v125;
  unsigned __int16* v126;
  int v127;
  char* v128;
  __int64 v129;
  __int64* v130;
  __int64 v131;
  char* v132;
  __int64 v133;
  __int64* v134;
  char v135;
  const char* v136;
  char v137;
  __int64 v138;
  const char* v139;
  __int64 v140;
  __int64 v141;
  __int64 v142;
  __int64 v143;
  __int64 v144;
  __int64 v145;
  const char* v146;
  const char* v147;
  __int64 v148;
  const char* v149;
  __int64 v150;
  __int64 v151;
  const char* v152;
  __int64 v153;
  __int64 v154;
  const char* v155;
  int v156;
  __int64* v157;
  const char* v158;
  __int64 v159;
  __int64 v160;
  const char* v161;
  __int64 v162;
  __int64 v163;
  const char* v164;
  __int64 v165;
  __int64 v166;
  const char* v167;
  __int64 v168;
  const char* v169;
  __int64 v170;
  __int64 v171;
  const char** v172;
  __int64 v173;
  const char* v174;
  const char* v175;
  _QWORD* v176;
  __int64 v177;
  char* v178;
  char* v179;
  __int64 v180;
  __int64 v181;
  const char* v182;
  int v183;
  __int64 v184;
  int* v185;
  __int64 v186;
  int v187;
  int v188;
  const char* v189;
  __int64 v190;
  __int64 v191;
  __int64 v192;
  __int64 v193;
  __int64 v194;
  __int64 v195[2];
  struct {
    __int64 v196;
    __int64 v197;
  } v196_;
  struct {
    _QWORD v198[4];
    _QWORD* v199;
  } v198_;
  struct {
    __int64 v200;
    __int64 v201;
    __int64 v202;
    __int64 v203;
    __int64 v204;
  } v200_;
  char* v205;
  unsigned __int64 v206;
  __int64 v207;
  int v208;
  struct {
    char* v209;
    __int64 v210;
    char v211;
    char gap225_[3];
    int v212;
    char v213;
    char gap233_[3];
    int v214;
  } v209_;
  __int64 v215[2];

  v215[0] = a2;
  LayoutAccessor_1560070((void*)(&v200_.v200), (__int64*)(a1 + 848),
                         "L_UnitInfoDetail");
  if (v200_.v201 == 0) {
    return;
  }
  v5 = std___1___shared_weak_count_lock(v200_.v201);
  v6 = (__int64*)v200_.v200;
  if (v5 != 0) {
    v7 = v200_.v200;
  }
  else {
    v7 = 0;
  }
  if (v200_.v201 != 0) {
    std___1___shared_weak_count___release_weak(v200_.v201);
  }
  if (v7 == 0) {
    goto LABEL_32;
  }
  if (v215[0] == 0) {
    v22 = "N_List";
    goto LABEL_31;
  }
  LayoutAccessor_155e830((__int64)v6, 1);
  ui_LayoutAccessor_SetPaneVisible_alt1((__int64)v6, (__int64)"N_List", 1);
  v8 = *(_DWORD*)(a1 + 1352);
  if (v8 > 4) {
    if ((unsigned int)(v8 - 5) >= 2) {
      if (v8 != 7) {
        if (v8 != 8) {
          goto LABEL_32;
        }
        LayoutAccessor_1562cf0((__int64)v6, "LegionInfo");
        LayoutAccessor_1560070((void*)(&v200_.v200), v6, "L_MenuItem_Info");
        if (v200_.v201 != 0) {
          v23 = v5;
          v24 = std___1___shared_weak_count_lock(v200_.v201);
          v25 = (const char*)v200_.v200;
          if (v24 != 0) {
            v26 = v200_.v200;
          }
          else {
            v26 = 0;
          }
          if (v200_.v201 != 0) {
            std___1___shared_weak_count___release_weak(v200_.v201);
          }
          if (v26 != 0) {
            v195[0] = v26;
            v195[1] = v24;
            if (v24 != 0) {
              atomic_fetch_add_explicit((atomic_ullong* volatile)(v24 + 16), 1u,
                                        memory_order_relaxed);
              GameRoutine_157e060(v195, "MID_DeployMenu_Legion", nullptr);
              std___1___shared_weak_count___release_weak(v24);
            }
            else {
              GameRoutine_157e060(v195, "MID_DeployMenu_Legion", nullptr);
            }
            LayoutAccessor_1562cf0((__int64)v25, "UnitInfoDetail_Short");
          }
          v5 = v23;
          if (v24 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v24 + 8),
                                           0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v24 + 16LL))(v24);
            std___1___shared_weak_count___release_weak(v24);
          }
        }
        LayoutAccessor_1560070((void*)(&v200_.v200), v6,
                               "L_Legion_Gambit_Info");
        if (v200_.v201 != 0) {
          v138 = std___1___shared_weak_count_lock(v200_.v201);
          if (v138 != 0) {
            v139 = (const char*)v200_.v200;
            v140 = v138;
            v141 = v5;
            atomic_fetch_add_explicit((atomic_ullong* volatile)(v138 + 16), 1u,
                                      memory_order_relaxed);
            v142 = std___1___shared_weak_count_lock(v138);
            if (v142 != 0) {
              v143 = v142;
              if (v139 != nullptr) {
                GameHr_157e0f0((__int64)v139, "MID_BtlMenu_Gambit",
                               "MID_Sys_Remaining");
              }
              if (atomic_fetch_add((atomic_ullong* volatile)(v143 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
                (*(void (**)(__int64))(*(_QWORD*)v143 + 16LL))(v143);
                std___1___shared_weak_count___release_weak(v143);
              }
            }
            std___1___shared_weak_count___release_weak(v140);
            v5 = v141;
            if (atomic_fetch_add((atomic_ullong* volatile)(v140 + 8),
                                 0xFFFFFFFFFFFFFFFFLL) == 0) {
              (*(void (**)(__int64))(*(_QWORD*)v140 + 16LL))(v140);
              std___1___shared_weak_count___release_weak(v140);
            }
          }
          if (v200_.v201 != 0) {
            std___1___shared_weak_count___release_weak(v200_.v201);
          }
        }
        if ((a3 & 1) == 0) {
          v144 = v215[0];
          if (*(_BYTE*)(v215[0] + 1944) != 0) {
            v208 = 0;
            GameRoutine_15dee60(&v208, v215[0]);
            v205 = "L_Legion_Name";
            v206 = 13;
            GameRoutine_15d4100_alt1((void*)(&v200_.v200), v6, &v205);
            v209_.v209 = nullptr;
            v209_.v210 = 0;
            if (v200_.v201 != 0) {
              v145 = v5;
              v209_.v210 = std___1___shared_weak_count_lock(v200_.v201);
              if (v209_.v210 != 0) {
                v146 = (const char*)v200_.v200;
                v209_.v209 = (char*)v200_.v200;
              }
              else {
                v146 = nullptr;
              }
              if (v200_.v201 != 0) {
                std___1___shared_weak_count___release_weak(v200_.v201);
              }
              if (v146 != nullptr) {
                MenuItemSkill_1899480((__int64)v146, 3u, 0, 0);
                MenuItem_188bf10(
                    (__int64)v146,
                    *(const char**)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)
                                                              GameData_212c998
                                                                  [0] +
                                                          64LL) +
                                               8LL *
                                                   *(unsigned __int8*)(v144 +
                                                                       1944)) +
                                    32LL));
                v154 = *((_QWORD*)v146 + 129);
                if (v154 != 0) {
                  *(_BYTE*)(v154 + 88) |= 1u;
                }
                v200_.v200 = (__int64)"NumNone";
                v200_.v201 = 7;
                Element_18863e0((__int64)v146, (const char**)&v200_.v200, 1);
                AsyncLoadThumbImage_1899d60(
                    (__int64)v146,
                    *(_QWORD*)(*(_QWORD*)(*GameData_212c880[0] + 64) +
                               8LL * (v208 & 0xFFF)));
              }
            }
            else {
              v145 = v5;
            }
            GameRoutine_16ccdc0((__int64)&v209_.v209);
            v205 = "L_Legion_Gambit";
            v206 = 15;
            GameRoutine_15d4100_alt1((void*)(&v200_.v200), v6, &v205);
            v209_.v209 = nullptr;
            v209_.v210 = 0;
            if (v200_.v201 != 0) {
              v209_.v210 = std___1___shared_weak_count_lock(v200_.v201);
              v5 = v145;
              if (v209_.v210 != 0) {
                v155 = (const char*)v200_.v200;
                v209_.v209 = (char*)v200_.v200;
              }
              else {
                v155 = nullptr;
              }
              if (v200_.v201 != 0) {
                std___1___shared_weak_count___release_weak(v200_.v201);
              }
              if (v155 != nullptr) {
                MenuItemSkill_1899480((__int64)v155, 1u, 0, 0);
                v156 = v208;
                if ((v155[1080] & 1) == 0) {
                  *((_BYTE*)v155 + 1080) = 1;
                }
                *((_DWORD*)v155 + 269) = v156;
                *((_QWORD*)v155 + 137) = v215[0];
                v200_.v202 = 0;
                v200_.v200 = (__int64)(GameData_212d890[0] + 2);
                LODWORD(v200_.v201) = 20;
                (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, const char*,
                                                        __int64*))(
                    *((_QWORD*)v155 + 9) + 16LL))((void*)(&v205), v155 + 72,
                                                  &v200_.v200);
                AsyncLoadThumbImage_1899ba0((__int64)v155);
              }
            }
            else {
              v5 = v145;
            }
            GameRoutine_16ccdc0((__int64)&v209_.v209);
            LayoutAccessor_1560070((void*)(&v209_.v209), v6, "L_GambitRange");
            v200_.v200 = 0;
            v200_.v201 = 0;
            if (v209_.v210 != 0) {
              v200_.v201 = std___1___shared_weak_count_lock(v209_.v210);
              if (v200_.v201 != 0) {
                v157 = (__int64*)v209_.v209;
                v200_.v200 = (__int64)v209_.v209;
              }
              else {
                v157 = nullptr;
              }
              if (v209_.v210 != 0) {
                std___1___shared_weak_count___release_weak(v209_.v210);
              }
              if (v157 != nullptr) {
                LayoutAccessor_155e830((__int64)v157, 1);
                Util_157f4e0(v157, v215[0],
                             *(_QWORD*)(*(_QWORD*)(*GameData_212c880[0] + 64) +
                                        8LL * (v208 & 0xFFF)));
              }
            }
            GameRoutine_1627860((__int64)&v200_.v200);
            goto LABEL_32;
          }
        }
        v205 = "L_Legion_Name";
        v206 = 13;
        GameRoutine_15d4100_alt1((void*)(&v200_.v200), v6, &v205);
        v209_.v209 = nullptr;
        v209_.v210 = 0;
        if (v200_.v201 != 0) {
          v209_.v210 = std___1___shared_weak_count_lock(v200_.v201);
          if (v209_.v210 != 0) {
            v147 = (const char*)v200_.v200;
            v209_.v209 = (char*)v200_.v200;
          }
          else {
            v147 = nullptr;
          }
          if (v200_.v201 != 0) {
            std___1___shared_weak_count___release_weak(v200_.v201);
          }
          if (v147 != nullptr) {
            MenuItemSkill_1899480((__int64)v147, 4u, 0, 0);
            MenuItem_188bf10((__int64)v147, "MID_Sys_Empty");
            v148 = *((_QWORD*)v147 + 129);
            if (v148 != 0) {
              *(_BYTE*)(v148 + 88) |= 1u;
            }
            *((_BYTE*)v147 + 1072) = 5;
            MenuItemSkill_189a700((__int64)v147);
            v200_.v200 = (__int64)"NumNone";
            v200_.v201 = 7;
            Element_18863e0((__int64)v147, (const char**)&v200_.v200, 1);
          }
        }
        GameRoutine_16ccdc0((__int64)&v209_.v209);
        v205 = "L_Legion_Gambit";
        v206 = 15;
        GameRoutine_15d4100_alt1((void*)(&v200_.v200), v6, &v205);
        v209_.v209 = nullptr;
        v209_.v210 = 0;
        if (v200_.v201 != 0) {
          v209_.v210 = std___1___shared_weak_count_lock(v200_.v201);
          if (v209_.v210 != 0) {
            v149 = (const char*)v200_.v200;
            v209_.v209 = (char*)v200_.v200;
          }
          else {
            v149 = nullptr;
          }
          if (v200_.v201 != 0) {
            std___1___shared_weak_count___release_weak(v200_.v201);
          }
          if (v149 != nullptr) {
            MenuItemSkill_1899480((__int64)v149, 1u, 0, 0);
            MenuItem_188bf10((__int64)v149, "MID_Sys_Empty");
            v150 = *((_QWORD*)v149 + 129);
            if (v150 != 0) {
              *(_BYTE*)(v150 + 88) |= 1u;
            }
            AsyncLoadThumbImage_1899ba0((__int64)v149);
            v200_.v200 = (__int64)"NumNone";
            v200_.v201 = 7;
            Element_18863e0((__int64)v149, (const char**)&v200_.v200, 1);
          }
        }
        GameRoutine_16ccdc0((__int64)&v209_.v209);
        v22 = "L_GambitRange";
      LABEL_31:
        ui_LayoutAccessor_SetPaneVisible_alt1((__int64)v6, (__int64)v22, 0);
        goto LABEL_32;
      }
      LayoutAccessor_1562cf0((__int64)v6, "Animal");
      v43 = LayoutAccessor_155fbe0(v6, "L_AnimalAttack_Info");
      GameHr_157e0f0((__int64)v43, "MID_Menu_ExclusiveItem", nullptr);
      v44 = LayoutAccessor_155fbe0(v6, "L_AnimalMorph_Info");
      GameHr_157e0f0((__int64)v44, "MID_BtlMenu_Rage", "MID_Sys_Remaining");
      LayoutAccessor_1560070((void*)(&v200_.v200), v6, "L_MenuItem_Info");
      if (v200_.v201 != 0) {
        v45 = std___1___shared_weak_count_lock(v200_.v201);
        if (v45 != 0) {
          v46 = (const char*)v200_.v200;
        }
        else {
          v46 = nullptr;
        }
        if (v200_.v201 != 0) {
          std___1___shared_weak_count___release_weak(v200_.v201);
        }
      }
      else {
        v45 = 0;
        v46 = nullptr;
      }
      v194 = v5;
      LayoutAccessor_1560070((void*)(&v200_.v200), v6, "L_Info_Skill");
      if (v200_.v201 != 0) {
        v70 = std___1___shared_weak_count_lock(v200_.v201);
        if (v70 != 0) {
          v71 = (const char*)v200_.v200;
        }
        else {
          v71 = nullptr;
        }
        if (v200_.v201 != 0) {
          std___1___shared_weak_count___release_weak(v200_.v201);
        }
      }
      else {
        v70 = 0;
        v71 = nullptr;
      }
      if (v45 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v45 + 16), 1u,
                                  memory_order_relaxed);
        v72 = std___1___shared_weak_count_lock(v45);
        if (v72 != 0) {
          v73 = v72;
          if (v46 != nullptr) {
            GameHr_157e0f0((__int64)v46, "MID_DeployMenu_Ride", nullptr);
          }
          if (atomic_fetch_add((atomic_ullong* volatile)(v73 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v73 + 16LL))(v73);
            std___1___shared_weak_count___release_weak(v73);
          }
        }
        std___1___shared_weak_count___release_weak(v45);
      }
      if (v70 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v70 + 16), 1u,
                                  memory_order_relaxed);
        v74 = std___1___shared_weak_count_lock(v70);
        if (v74 != 0) {
          v75 = v74;
          if (v71 != nullptr) {
            GameHr_157e0f0((__int64)v71, "MID_Sys_Singular_Skill", nullptr);
          }
          if (atomic_fetch_add((atomic_ullong* volatile)(v75 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v75 + 16LL))(v75);
            std___1___shared_weak_count___release_weak(v75);
          }
        }
        std___1___shared_weak_count___release_weak(v70);
      }
      v76 = v215[0];
      v77 = *(_QWORD*)(v215[0] + 400);
      v78 = (__int64*)(v215[0] + 1880);
      if (*(_BYTE*)(v77 + 96) == 2 && *(_BYTE*)(v215[0] + 1880) == 0) {
        v79 = *(_QWORD*)(v77 + 112);
        if (v79 != 0) {
          v78 = &GameData_21f4018[8 * (unsigned __int64)*(
                                          unsigned __int8*)(v79 + 32)];
        }
        else {
          v78 = GameData_212c8b0[0];
        }
      }
      v191 = v45;
      if ((a3 & 1) != 0 || *(_BYTE*)v78 == 0) {
        LayoutAccessor_1562cf0((__int64)v6, "Animal");
        v205 = "L_AnimalName";
        v206 = 12;
        GameRoutine_15d4100_alt1((void*)(&v200_.v200), v6, &v205);
        v209_.v209 = nullptr;
        v209_.v210 = 0;
        if (v200_.v201 != 0) {
          v209_.v210 = std___1___shared_weak_count_lock(v200_.v201);
          if (v209_.v210 != 0) {
            v107 = (const char*)v200_.v200;
            v209_.v209 = (char*)v200_.v200;
          }
          else {
            v107 = nullptr;
          }
          if (v200_.v201 != 0) {
            std___1___shared_weak_count___release_weak(v200_.v201);
          }
          if (v107 != nullptr) {
            MenuItemSkill_1899480((__int64)v107, 4u, 0, 0);
            MenuItemSkill_189a700((__int64)v107);
            MenuItem_188bf10((__int64)v107, "MID_Sys_Empty");
            v151 = *((_QWORD*)v107 + 129);
            if (v151 != 0) {
              *(_BYTE*)(v151 + 88) |= 1u;
            }
            v200_.v200 = (__int64)"NumNone";
            v200_.v201 = 7;
            Element_18863e0((__int64)v107, (const char**)&v200_.v200, 1);
          }
        }
        GameRoutine_16ccdc0((__int64)&v209_.v209);
        v205 = "L_RelianceSkill";
        v206 = 15;
        GameRoutine_15d4100_alt1((void*)(&v200_.v200), v6, &v205);
        v209_.v209 = nullptr;
        v209_.v210 = 0;
        if (v200_.v201 != 0) {
          v209_.v210 = std___1___shared_weak_count_lock(v200_.v201);
          if (v209_.v210 != 0) {
            v152 = (const char*)v200_.v200;
            v209_.v209 = (char*)v200_.v200;
          }
          else {
            v152 = nullptr;
          }
          if (v200_.v201 != 0) {
            std___1___shared_weak_count___release_weak(v200_.v201);
          }
          if (v152 != nullptr) {
            MenuItemSkill_1899480((__int64)v152, 1u, 0, 0);
            MenuItemSkill_189a700((__int64)v152);
            MenuItem_188bf10((__int64)v152, "MID_Sys_Empty");
            v153 = *((_QWORD*)v152 + 129);
            if (v153 != 0) {
              *(_BYTE*)(v153 + 88) |= 1u;
            }
            v200_.v200 = (__int64)"NumNone";
            v200_.v201 = 7;
            Element_18863e0((__int64)v152, (const char**)&v200_.v200, 1);
            LayoutAccessor_1562cf0((__int64)(v152 + 88), "RelianceOff");
          }
        }
        GameRoutine_16ccdc0((__int64)&v209_.v209);
        ui_LayoutAccessor_SetPaneVisible_alt1(
            (__int64)v6, (__int64)"L_AnimalName/L_AnimalLv", 0);
        LayoutAccessor_1562cf0((__int64)v6, "AttackMorphOff");
        goto LABEL_503;
      }
      if (*(_QWORD*)(v77 + 88) != 0) {
        v100 = *(_QWORD*)(v215[0] + 400);
      }
      else {
        v100 = 0;
      }
      v101 = *(unsigned __int16*)(v100 + 128);
      v186 = v100;
      v102 = v101 > 1;
      v103 = game_Unit_SkillList_FindKind(v215[0] + 1456, 6u);
      v104 = (int*)(*(_QWORD*)(v76 + 1488) + 4LL * (unsigned int)v103);
      if (v103 <= -1) {
        v104 = (int*)GameData_212c8a8;
      }
      v185 = v104;
      if ((*v104 & 0xFFF) != 0) {
        v102 = true;
      }
      v187 = *v104 & 0xFFF;
      v188 = *(_DWORD*)(v76 + 416);
      if (v102) {
        LayoutAccessor_1562cf0((__int64)v6, "AttackMorphOn");
        LayoutAccessor_1562cf0((__int64)v46, "UnitInfoDetail_Short");
        v105 = (__int64)v71;
        v106 = "UnitInfoDetail_Short";
      }
      else {
        v106 = "AttackMorphOff";
        v105 = (__int64)v6;
      }
      LayoutAccessor_1562cf0(v105, v106);
      v205 = "L_AnimalName";
      v206 = 12;
      GameRoutine_15d4100_alt1((void*)(&v200_.v200), v6, &v205);
      v209_.v209 = nullptr;
      v209_.v210 = 0;
      if (v200_.v201 != 0) {
        v209_.v210 = std___1___shared_weak_count_lock(v200_.v201);
        if (v209_.v210 != 0) {
          v209_.v209 = (char*)v200_.v200;
        }
        if (v200_.v201 != 0) {
          std___1___shared_weak_count___release_weak(v200_.v201);
        }
        if (v209_.v209 != nullptr) {
          (*(void (**)(char*, bool))(*(_QWORD*)v209_.v209 + 152LL))(
              v209_.v209, (v188 & 0x40000) == 0);
          MenuItemSkill_1899480((__int64)v209_.v209, 3u, 0, 0);
          AsyncLoadThumbImage_189a040((__int64)v209_.v209, v78);
          v108 = v209_.v209;
          v109 = Unit_931120((unsigned __int8*)v78);
          v110 = *((_QWORD*)v108 + 129);
          if (v110 != 0) {
            GameRoutine_156c5d0(v110, (__int64)v109, 0);
          }
          v111 = v209_.v209;
          v112 = *((_QWORD*)v209_.v209 + 129);
          if (v112 != 0) {
            *(_BYTE*)(v112 + 88) |= 1u;
          }
          v200_.v200 = (__int64)"NumNone";
          v200_.v201 = 7;
          Element_18863e0((__int64)v111, (const char**)&v200_.v200, 1);
        }
      }
      GameRoutine_16ccdc0((__int64)&v209_.v209);
      if (*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c8a0 + 64) +
                               8LL * *(unsigned __int8*)v78) +
                    109LL) != 0) {
        ui_LayoutAccessor_SetPaneVisible_alt1(
            (__int64)v6, (__int64)"L_AnimalName/L_AnimalLv", 1);
        LayoutAccessor_1560070((void*)(&v196_.v196), v6,
                               "L_AnimalName/L_AnimalLv");
        GameRoutine_1583710(&v196_.v196, (__int64)v78, v215[0]);
        if (v196_.v197 != 0) {
          std___1___shared_weak_count___release_weak(v196_.v197);
        }
        v200_.v200 = 0;
        v200_.v201 = v215[0];
        if (v215[0] != 0) {
          v200_.v200 = *(_QWORD*)(v215[0] + 392);
        }
        v113 = GameRoutine_932160((__int64)v78, (__int64)&v200_.v200);
        v114 = (unsigned __int64)(GameData_21d9990 - GameData_21d9988) >> 2;
        if ((int)v114 >= 5) {
          LODWORD(v114) = 5;
        }
        v90 = v113 < (int)ExpTableFile_7d67c0(
                         *(_DWORD*)(GameData_21d9988 + 4LL * (int)v114 - 4));
        v115 = "L_AnimalName/L_AnimalLv/L_Gauge";
        v116 = (__int64)v6;
        v117 = v90;
      }
      else {
        v115 = "L_AnimalName/L_AnimalLv";
        v116 = (__int64)v6;
        v117 = 0;
      }
      ui_LayoutAccessor_SetPaneVisible_alt1(v116, (__int64)v115, v117);
      v205 = "L_RelianceSkill";
      v206 = 15;
      GameRoutine_15d4100_alt1((void*)(&v200_.v200), v6, &v205);
      v209_.v209 = nullptr;
      v209_.v210 = 0;
      if (v200_.v201 != 0) {
        v209_.v210 = std___1___shared_weak_count_lock(v200_.v201);
        if (v209_.v210 != 0) {
          v209_.v209 = (char*)v200_.v200;
        }
        if (v200_.v201 != 0) {
          std___1___shared_weak_count___release_weak(v200_.v201);
        }
        if (v209_.v209 != nullptr) {
          v208 = 0;
          v118 = GameRoutine_15dedb0(&v208, (unsigned __int8*)v78, v215[0]);
          v119 = v208;
          if ((v208 & 0xFFF) != 0) {
            MenuItemSkill_1899480((__int64)v209_.v209, 1u, (v118 & 1) == 0, 0);
            v120 = v209_.v209;
            v209_.v209[1072] = 12;
            if ((v120[1080] & 1) == 0) {
              v120[1080] = 1;
            }
            v121 = v215[0];
            *((_DWORD*)v120 + 269) = v119;
            *((_QWORD*)v120 + 137) = v121;
            v200_.v202 = 0;
            v200_.v200 = (__int64)(GameData_212d890[0] + 2);
            LODWORD(v200_.v201) = 20;
            (*(__attribute__((swiftcall)) void (**)(
                PSEUDO_X8, char*, __int64*))(*((_QWORD*)v120 + 9) + 16LL))(
                (void*)(&v205), v120 + 72, &v200_.v200);
          }
          else {
            MenuItemSkill_1899480((__int64)v209_.v209, 1u, 0, 0);
            MenuItemSkill_189a700((__int64)v209_.v209);
            MenuItem_188bf10((__int64)v209_.v209, "MID_Sys_Empty");
            v158 = v209_.v209;
            v159 = *((_QWORD*)v209_.v209 + 129);
            if (v159 != 0) {
              *(_BYTE*)(v159 + 88) |= 1u;
            }
            v200_.v200 = (__int64)"NumNone";
            v200_.v201 = 7;
            Element_18863e0((__int64)v158, (const char**)&v200_.v200, 1);
            LayoutAccessor_1562cf0((__int64)(v209_.v209 + 88), "RelianceOff");
          }
        }
      }
      GameRoutine_16ccdc0((__int64)&v209_.v209);
      if (!v102) {
      LABEL_503:
        if (v70 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v70 + 8),
                                         0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v70 + 16LL))(v70);
          std___1___shared_weak_count___release_weak(v70);
        }
        v5 = v194;
        if (v191 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v191 + 8),
                                          0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v191 + 16LL))(v191);
          std___1___shared_weak_count___release_weak(v191);
        }
        goto LABEL_32;
      }
      if (v101 > 1) {
        LayoutAccessor_1560070((void*)(&v200_.v200), v6, "L_AnimalAttack00");
        if (v200_.v201 == 0) {
          v162 = v186;
          goto LABEL_442;
        }
        v160 = std___1___shared_weak_count_lock(v200_.v201);
        v161 = (const char*)v200_.v200;
        v162 = v186;
        if (v200_.v201 != 0) {
          std___1___shared_weak_count___release_weak(v200_.v201);
        }
        if (v160 != 0 && v161 != nullptr) {
          LayoutAccessor_155e830((__int64)v161, 0);
        }
        else if (v160 == 0) {
          goto LABEL_442;
        }
        if (atomic_fetch_add((atomic_ullong* volatile)(v160 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v160 + 16LL))(v160);
          std___1___shared_weak_count___release_weak(v160);
        }
      LABEL_442:
        LayoutAccessor_1560070((void*)(&v200_.v200), v6, "L_AnimalAttack01");
        if (v200_.v201 != 0) {
          v166 = std___1___shared_weak_count_lock(v200_.v201);
          v167 = (const char*)v200_.v200;
          if (v200_.v201 != 0) {
            std___1___shared_weak_count___release_weak(v200_.v201);
          }
          if (v166 != 0 && v167 != nullptr) {
            LayoutAccessor_155e830((__int64)v167, 0);
          }
          else if (v166 == 0) {
            goto LABEL_462;
          }
          if (atomic_fetch_add((atomic_ullong* volatile)(v166 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v166 + 16LL))(v166);
            std___1___shared_weak_count___release_weak(v166);
          }
        }
      LABEL_462:
        v171 = *(unsigned __int16*)(v162 + 128);
        if (v171 != 0) {
          v172 = (const char**)GameData_2096d18;
          v173 = 8;
          while (1) {
            v175 = *v172++;
            v174 = v175;
            v176 = *(_QWORD**)(*(_QWORD*)(v77 + 136) + v173);
            v209_.v209 = (char*)v175;
            v209_.v210 = strlen(v175);
            GameRoutine_15d4100_alt1((void*)(&v200_.v200), v6, &v209_.v209);
            if (v200_.v201 != 0) {
              v177 = std___1___shared_weak_count_lock(v200_.v201);
              v178 = (char*)v200_.v200;
              if (v200_.v201 != 0) {
                std___1___shared_weak_count___release_weak(v200_.v201);
              }
              if (v177 != 0 && v178 != nullptr) {
                (*(void (**)(char*, bool))(*(_QWORD*)v178 + 152LL))(
                    v178, (v188 & 0x40000) == 0);
                MenuItemSkill_1899480((__int64)v178, 1u, 0, 0);
                if (v176 != nullptr && *v176 != 0) {
                  *((_QWORD*)v178 + 137) = v215[0];
                  AsyncLoadThumbImage_189a3a0(v178, (__int64)v176);
                  v179 = GameHr_6ed030((__int64)v176);
                  v180 = *((_QWORD*)v178 + 129);
                  if (v180 != 0) {
                    GameRoutine_156c5d0(v180, (__int64)v179, 0);
                    v181 = *((_QWORD*)v178 + 129);
                    if (v181 != 0) {
                      *(_BYTE*)(v181 + 88) |= 1u;
                    }
                  }
                  v200_.v200 = (__int64)"NumNone";
                  v200_.v201 = 7;
                  Element_18863e0((__int64)v178, (const char**)&v200_.v200, 1);
                  LayoutAccessor_1560070((void*)(&v209_.v209), v6, v174);
                  v200_.v200 = 0;
                  v200_.v201 = 0;
                  if (v209_.v210 != 0) {
                    v200_.v201 = std___1___shared_weak_count_lock(v209_.v210);
                    if (v200_.v201 != 0) {
                      v200_.v200 = (__int64)v209_.v209;
                    }
                    if (v209_.v210 != 0) {
                      std___1___shared_weak_count___release_weak(v209_.v210);
                    }
                    if (v200_.v200 != 0) {
                      LayoutAccessor_155e830(v200_.v200, 1);
                    }
                  }
                  GameRoutine_1627860((__int64)&v200_.v200);
                }
              LABEL_484:
                if (atomic_fetch_add((atomic_ullong* volatile)(v177 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
                  (*(void (**)(__int64))(*(_QWORD*)v177 + 16LL))(v177);
                  std___1___shared_weak_count___release_weak(v177);
                }
                goto LABEL_464;
              }
              if (v177 != 0) {
                goto LABEL_484;
              }
            }
          LABEL_464:
            --v171;
            v173 += 16;
            if (v171 == 0) {
              goto LABEL_489;
            }
          }
        }
        goto LABEL_489;
      }
      v209_.v209 = "L_AnimalAttack00";
      v209_.v210 = 16;
      GameRoutine_15d4100_alt1((void*)(&v200_.v200), v6, &v209_.v209);
      if (v200_.v201 != 0) {
        v163 = std___1___shared_weak_count_lock(v200_.v201);
        v164 = (const char*)v200_.v200;
        if (v200_.v201 != 0) {
          std___1___shared_weak_count___release_weak(v200_.v201);
        }
        if (v163 != 0 && v164 != nullptr) {
          (*(void (**)(const char*, __int64))(*(_QWORD*)v164 + 40LL))(v164, 1);
          MenuItemSkill_1899480((__int64)v164, 1u, 0, 0);
          MenuItemSkill_189a700((__int64)v164);
          MenuItem_188bf10((__int64)v164, "MID_Sys_Empty");
          v165 = *((_QWORD*)v164 + 129);
          if (v165 != 0) {
            *(_BYTE*)(v165 + 88) |= 1u;
          }
          v200_.v200 = (__int64)"NumNone";
          v200_.v201 = 7;
          Element_18863e0((__int64)v164, (const char**)&v200_.v200, 1);
        }
        else if (v163 == 0) {
          goto LABEL_451;
        }
        if (atomic_fetch_add((atomic_ullong* volatile)(v163 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v163 + 16LL))(v163);
          std___1___shared_weak_count___release_weak(v163);
        }
      }
    LABEL_451:
      v209_.v209 = "L_AnimalAttack01";
      v209_.v210 = 16;
      GameRoutine_15d4100_alt1((void*)(&v200_.v200), v6, &v209_.v209);
      if (v200_.v201 != 0) {
        v168 = std___1___shared_weak_count_lock(v200_.v201);
        v169 = (const char*)v200_.v200;
        if (v200_.v201 != 0) {
          std___1___shared_weak_count___release_weak(v200_.v201);
        }
        if (v168 != 0 && v169 != nullptr) {
          (*(void (**)(const char*, _QWORD))(*(_QWORD*)v169 + 40LL))(v169, 0);
          MenuItemSkill_1899480((__int64)v169, 1u, 0, 0);
          MenuItemSkill_189a700((__int64)v169);
          MenuItem_188bf10((__int64)v169, "MID_Sys_Empty");
          v170 = *((_QWORD*)v169 + 129);
          if (v170 != 0) {
            *(_BYTE*)(v170 + 88) |= 1u;
          }
          v200_.v200 = (__int64)"NumNone";
          v200_.v201 = 7;
          Element_18863e0((__int64)v169, (const char**)&v200_.v200, 1);
          goto LABEL_487;
        }
        if (v168 != 0) {
        LABEL_487:
          if (atomic_fetch_add((atomic_ullong* volatile)(v168 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v168 + 16LL))(v168);
            std___1___shared_weak_count___release_weak(v168);
          }
        }
      }
    LABEL_489:
      if (v187 != 0) {
        v205 = "L_AnimalMorph";
        v206 = 13;
        GameRoutine_15d4100_alt1((void*)(&v200_.v200), v6, &v205);
        v209_.v209 = nullptr;
        v209_.v210 = 0;
        if (v200_.v201 != 0) {
          v209_.v210 = std___1___shared_weak_count_lock(v200_.v201);
          if (v209_.v210 != 0) {
            v182 = (const char*)v200_.v200;
            v209_.v209 = (char*)v200_.v200;
          }
          else {
            v182 = nullptr;
          }
          if (v200_.v201 != 0) {
            std___1___shared_weak_count___release_weak(v200_.v201);
          }
          if (v182 != nullptr) {
            (*(void (**)(const char*, __int64))(*(_QWORD*)v182 + 152LL))(v182,
                                                                         1);
            MenuItemSkill_1899480((__int64)v182, 1u, 0, 0);
            v183 = *v185;
            if ((v182[1080] & 1) == 0) {
              *((_BYTE*)v182 + 1080) = 1;
            }
            *((_DWORD*)v182 + 269) = v183;
            *((_QWORD*)v182 + 137) = v215[0];
            v200_.v202 = 0;
            v200_.v200 = (__int64)(GameData_212d890[0] + 2);
            LODWORD(v200_.v201) = 20;
            (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, const char*,
                                                    __int64*))(
                *((_QWORD*)v182 + 9) + 16LL))((void*)(&v205), v182 + 72,
                                              &v200_.v200);
          }
        }
        GameRoutine_16ccdc0((__int64)&v209_.v209);
      }
      v184 = ui_LayoutAccessor_FindAlignment(v6, "A_AttackMorph");
      if (v184 != 0) {
        Alignment_56b600(v184);
      }
      goto LABEL_503;
    }
    LayoutAccessor_1562cf0((__int64)v6, "Skill");
    v33 = LayoutAccessor_155fbe0(v6, "L_MenuItem_Info");
    GameHr_157e0f0((__int64)v33, "MID_SysMenu_Arts", nullptr);
    v193 = v5;
    if ((a3 & 1) != 0) {
      v34 = 0;
      v35 = 0;
    LABEL_187:
      v80 = game_gameui_Util_CountAvailableArtsNum(v215[0]);
      v190 = v34;
      if (*(_DWORD*)(a1 + 1352) == 5) {
        v81 = 0;
      }
      else {
        v81 = 10;
      }
      v82 = (v35 - v34) >> 3;
      if (v82 > v81) {
        v83 = v34 + 8 * v81;
        v84 = 0;
        v85 = (const char*)(GameData_212d890[0] + 2);
        while (1) {
          v209_.v209 = game_util_Format("L_Skill%02d", v84);
          v209_.v210 = strlen(v209_.v209);
          GameRoutine_15d4100_alt1((void*)(&v200_.v200), v6, &v209_.v209);
          if (v200_.v201 != 0) {
            v86 = std___1___shared_weak_count_lock(v200_.v201);
            v87 = (const char*)v200_.v200;
            if (v200_.v201 != 0) {
              std___1___shared_weak_count___release_weak(v200_.v201);
            }
            if (v86 != 0 && v87 != nullptr) {
              MenuItemSkill_1899480((__int64)v87, 1u,
                                    (*(_BYTE*)(v83 + 6) & 1) == 0, 0);
              AsyncLoadThumbImage_1899d60(
                  (__int64)v87,
                  *(_QWORD*)(*(_QWORD*)(*GameData_212c880[0] + 64) +
                             8LL * (*(_DWORD*)v83 & 0xFFF)));
              v88 = *(_DWORD*)v83;
              if ((v87[1080] & 1) == 0) {
                *((_BYTE*)v87 + 1080) = 1;
              }
              *((_DWORD*)v87 + 269) = v88;
              v200_.v202 = 0;
              v200_.v200 = (__int64)v85;
              *((_QWORD*)v87 + 137) = v215[0];
              LODWORD(v200_.v201) = 20;
              (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, const char*,
                                                      __int64*))(
                  *((_QWORD*)v87 + 9) + 16LL))((void*)(&v209_.v209), v87 + 72,
                                               &v200_.v200);
            LABEL_201:
              if (atomic_fetch_add((atomic_ullong* volatile)(v86 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
                (*(void (**)(__int64))(*(_QWORD*)v86 + 16LL))(v86);
                std___1___shared_weak_count___release_weak(v86);
              }
              goto LABEL_203;
            }
            if (v86 != 0) {
              goto LABEL_201;
            }
          }
        LABEL_203:
          ++v81;
          v89 = v84 + 1;
          if (v82 > v81) {
            v83 += 8LL;
            v90 = v84++ > 8;
            if (!v90) {
              continue;
            }
          }
          goto LABEL_208;
        }
      }
      v89 = 0;
    LABEL_208:
      if ((int)v81 < v80 && v89 <= 9) {
        v91 = v81 + 1;
        while (1) {
          v209_.v209 = game_util_Format("L_Skill%02d", v89);
          v209_.v210 = strlen(v209_.v209);
          GameRoutine_15d4100_alt1((void*)(&v200_.v200), v6, &v209_.v209);
          if (v200_.v201 != 0) {
            v92 = std___1___shared_weak_count_lock(v200_.v201);
            v93 = (const char*)v200_.v200;
            if (v200_.v201 != 0) {
              std___1___shared_weak_count___release_weak(v200_.v201);
            }
            if (v92 != 0 && v93 != nullptr) {
              MenuItemSkill_1899480((__int64)v93, 1u, 0, 0);
              *((_BYTE*)v93 + 1072) = 2;
              game_gameui_control_1898940((__int64)v93);
            LABEL_218:
              if (atomic_fetch_add((atomic_ullong* volatile)(v92 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
                (*(void (**)(__int64))(*(_QWORD*)v92 + 16LL))(v92);
                std___1___shared_weak_count___release_weak(v92);
              }
              goto LABEL_220;
            }
            if (v92 != 0) {
              goto LABEL_218;
            }
          }
        LABEL_220:
          v94 = v89 + 1;
          if (v89 <= 8) {
            ++v89;
            v90 = v91++ < v80;
            if (v90) {
              continue;
            }
          }
          goto LABEL_224;
        }
      }
      v94 = v89;
    LABEL_224:
      v95 = 0;
      while (1) {
        v96 = game_util_Format("L_Skill%02d", v95);
        LayoutAccessor_1560070((void*)(&v200_.v200), v6, v96);
        if (v200_.v201 != 0) {
          v97 = std___1___shared_weak_count_lock(v200_.v201);
          v98 = (const char*)v200_.v200;
          if (v200_.v201 != 0) {
            std___1___shared_weak_count___release_weak(v200_.v201);
          }
          if (v97 != 0 && v98 != nullptr) {
            LayoutAccessor_155e830((__int64)v98, v95 < v94);
          LABEL_233:
            if (atomic_fetch_add((atomic_ullong* volatile)(v97 + 8),
                                 0xFFFFFFFFFFFFFFFFLL) == 0) {
              (*(void (**)(__int64))(*(_QWORD*)v97 + 16LL))(v97);
              std___1___shared_weak_count___release_weak(v97);
            }
            goto LABEL_225;
          }
          if (v97 != 0) {
            goto LABEL_233;
          }
        }
      LABEL_225:
        if (++v95 == 10) {
          v5 = v193;
          if (v190 != 0) {
            v99 = 128;
            if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                0) {
              v99 = 56;
            }
            nn_mem_StandardAllocator_Free(
                *(_QWORD*)fw_memory_g_heap_manager_ptr + v99, v190);
          }
          goto LABEL_32;
        }
      }
    }
    v198_.v198[0] = GameData_2097098;
    v198_.v198[1] = v215;
    v198_.v199 = v198_.v198;
    game_gameui_Util_CollectArtsInfoList((void*)(&v200_.v200), v215[0], 0,
                                         (__int64)v198_.v198, 0);
    v34 = v200_.v200;
    v35 = v200_.v201;
    v200_.v201 = 0;
    v200_.v202 = 0;
    v200_.v200 = 0;
    if (v198_.v199 == v198_.v198) {
      v47 = 32;
    }
    else {
      if (v198_.v199 == nullptr) {
        goto LABEL_187;
      }
      v47 = 40;
    }
    (*(void (**)(__int64))(*v198_.v199 + v47))((__int64)v198_.v199);
    goto LABEL_187;
  }
  v192 = v5;
  if ((unsigned int)(v8 - 1) >= 3) {
    if (v8 != 0) {
      if (v8 != 4) {
        goto LABEL_32;
      }
      LayoutAccessor_1562cf0((__int64)v6, "Skill");
      v29 = 0;
      while (1) {
        v30 = game_util_Format("L_Skill%02d", v29);
        LayoutAccessor_1560070((void*)(&v200_.v200), v6, v30);
        if (v200_.v201 != 0) {
          v31 = std___1___shared_weak_count_lock(v200_.v201);
          v32 = (const char*)v200_.v200;
          if (v200_.v201 != 0) {
            std___1___shared_weak_count___release_weak(v200_.v201);
          }
          if (v31 != 0 && v32 != nullptr) {
            LayoutAccessor_155e830((__int64)v32, 1);
          LABEL_66:
            if (atomic_fetch_add((atomic_ullong* volatile)(v31 + 8),
                                 0xFFFFFFFFFFFFFFFFLL) == 0) {
              (*(void (**)(__int64))(*(_QWORD*)v31 + 16LL))(v31);
              std___1___shared_weak_count___release_weak(v31);
            }
            goto LABEL_58;
          }
          if (v31 != 0) {
            goto LABEL_66;
          }
        }
      LABEL_58:
        if (++v29 == 10) {
          v48 = LayoutAccessor_155fbe0(v6, "L_MenuItem_Info");
          GameHr_157e0f0((__int64)v48, "MID_SysMenu_Skill", nullptr);
          v49 = 0;
          v208 = 0;
          LOBYTE(v209_.v209) = 10;
          HIDWORD(v209_.v209) = 1;
          v209_.v211 = 1;
          v209_.v214 = 1;
          LOBYTE(v209_.v210) = 11;
          HIDWORD(v209_.v210) = 3;
          v209_.v212 = 5;
          v209_.v213 = 12;
          if ((a3 & 1) != 0) {
            goto LABEL_146;
          }
          v50 = 32;
          v51 = (unsigned int*)&v209_.v209 + 1;
          v189 = (const char*)(GameData_212d890[0] + 2);
          while (1) {
            v53 = *((unsigned __int8*)v51 - 4);
            v54 = v215[0];
            v207 = *v51;
            if (v53 == 12) {
              if (v215[0] != 0 && *(_BYTE*)(v215[0] + 1880) != 0) {
                v200_.v200 = *(_QWORD*)(v215[0] + 392);
                v200_.v201 = v215[0];
                v56 = *(_DWORD*)GameRoutine_932360(
                    (unsigned __int8*)(v215[0] + 1880), &v200_.v200);
                v57 = v56 & 0xFFF;
                if ((v56 & 0xFFF) != 0 ||
                    (v200_.v200 = *(_QWORD*)(v54 + 392), v200_.v201 = v54,
                     ((v56 = *GameRoutine_932460((unsigned __int8*)(v54 + 1880),
                                                 &v200_.v200)) &
                      0xFFF) != 0)) {
                  v58 = v208++;
                  v205 = game_util_Format("L_Skill%02d", v58);
                  v206 = strlen(v205);
                  GameRoutine_15d4100_alt1((void*)(&v200_.v200), v6, &v205);
                  if (v200_.v201 != 0) {
                    v59 = std___1___shared_weak_count_lock(v200_.v201);
                    v60 = (const char*)v200_.v200;
                    if (v200_.v201 != 0) {
                      std___1___shared_weak_count___release_weak(v200_.v201);
                    }
                    if (v59 != 0 && v60 != nullptr) {
                      MenuItemSkill_1899480((__int64)v60, 1u, v57 == 0, 0);
                      if ((v60[1080] & 1) == 0) {
                        *((_BYTE*)v60 + 1080) = 1;
                      }
                      v61 = v215[0];
                      *((_DWORD*)v60 + 269) = v56;
                      v200_.v202 = 0;
                      *((_QWORD*)v60 + 137) = v61;
                      v200_.v200 = (__int64)v189;
                      LODWORD(v200_.v201) = 20;
                      (*(__attribute__((swiftcall)) void (**)(
                          PSEUDO_X8, const char*, __int64*))(
                          *((_QWORD*)v60 + 9) + 16LL))((void*)(&v205), v60 + 72,
                                                       &v200_.v200);
                      ++HIDWORD(v207);
                    LABEL_128:
                      if (atomic_fetch_add((atomic_ullong* volatile)(v59 + 8),
                                           0xFFFFFFFFFFFFFFFFLL) == 0) {
                        (*(void (**)(__int64))(*(_QWORD*)v59 + 16LL))(v59);
                        std___1___shared_weak_count___release_weak(v59);
                      }
                      goto LABEL_108;
                    }
                    if (v59 != 0) {
                      goto LABEL_128;
                    }
                  }
                }
              }
            }
            else {
              v62 = (_QWORD*)fw_memory_HeapManager_Allocate(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr, 48, 16, 0);
              v62[4] = &v208;
              v62[5] = v215;
              v200_.v204 = (__int64)v62;
              *v62 = GameData_2097018;
              v62[1] = (char*)&v207 + 4;
              v62[2] = &v207;
              v62[3] = v7;
              GameRoutine_6d7e80(v54, v53, (__int64)&v200_.v200);
              if ((__int64*)v200_.v204 == &v200_.v200) {
                v52 = 32;
              }
              else {
                if (v200_.v204 == 0) {
                  goto LABEL_108;
                }
                v52 = 40;
              }
              (*(void (**)(__int64))(*(_QWORD*)v200_.v204 + v52))(
                  (__int64)v200_.v204);
            }
          LABEL_108:
            v51 += 2;
            v50 -= 8;
            if (v50 == 0) {
              v49 = v208;
              if (v208 > 9) {
              LABEL_155:
                v5 = v192;
                goto LABEL_32;
              }
            LABEL_146:
              while (2) {
                v205 = game_util_Format("L_Skill%02d", v49);
                v206 = strlen(v205);
                GameRoutine_15d4100_alt1((void*)(&v200_.v200), v6, &v205);
                if (v200_.v201 != 0) {
                  v68 = std___1___shared_weak_count_lock(v200_.v201);
                  v69 = (const char*)v200_.v200;
                  if (v200_.v201 != 0) {
                    std___1___shared_weak_count___release_weak(v200_.v201);
                  }
                  if (v68 != 0 && v69 != nullptr) {
                    MenuItemSkill_1899480((__int64)v69, 1u, 0, 0);
                    *((_BYTE*)v69 + 1072) = 1;
                    game_gameui_control_1898940((__int64)v69);
                  LABEL_153:
                    if (atomic_fetch_add((atomic_ullong* volatile)(v68 + 8),
                                         0xFFFFFFFFFFFFFFFFLL) == 0) {
                      (*(void (**)(__int64))(*(_QWORD*)v68 + 16LL))(v68);
                      std___1___shared_weak_count___release_weak(v68);
                    }
                  }
                  else if (v68 != 0) {
                    goto LABEL_153;
                  }
                }
                if (++v49 == 10) {
                  goto LABEL_155;
                }
                continue;
              }
            }
          }
        }
      }
    }
    LayoutAccessor_1562cf0((__int64)v6, "Item_MasteryOn");
    v63 = LayoutAccessor_155fbe0(v6, "L_MenuItem_Info");
    GameHr_157e0f0((__int64)v63, "MID_Sys_Equipped", nullptr);
    v64 = LayoutAccessor_155fbe0(v6, "L_Item_Info");
    GameHr_157e0f0((__int64)v64, "MID_SysMenu_Item", nullptr);
    v65 = 2;
    v66 = (_BYTE*)(v215[0] + 847);
    v67 = *GameData_212c878[0];
    while (1) {
      if (*(_WORD*)(v66 - 19) != 0 && (*(v66 - 16) & 1) != 0 &&
          *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(v67 + 64) +
                                         8LL * *(unsigned __int16*)(v66 - 19)) +
                              72LL) < 8u) {
        LODWORD(v65) = v65 - 2;
        goto LABEL_290;
      }
      if (*(_WORD*)(v66 - 11) != 0 && (*(v66 - 8) & 1) != 0 &&
          *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(v67 + 64) +
                                         8LL * *(unsigned __int16*)(v66 - 11)) +
                              72LL) < 8u) {
        break;
      }
      if (*(_WORD*)(v66 - 3) != 0 && (*v66 & 1) != 0 &&
          *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(v67 + 64) +
                                         8LL * *(unsigned __int16*)(v66 - 3)) +
                              72LL) < 8u) {
        goto LABEL_290;
      }
      v65 += 3;
      v66 += 24;
      if (v65 == 32) {
        LODWORD(v65) = -1;
        goto LABEL_290;
      }
    }
    LODWORD(v65) = v65 - 1;
  LABEL_290:
    LayoutAccessor_1560070((void*)(&v200_.v200), v6, "L_Equip");
    if (v200_.v201 == 0) {
      goto LABEL_304;
    }
    v122 = std___1___shared_weak_count_lock(v200_.v201);
    v123 = (const char*)v200_.v200;
    if (v200_.v201 != 0) {
      std___1___shared_weak_count___release_weak(v200_.v201);
    }
    if (v122 != 0 && v123 != nullptr) {
      if ((a3 & 1) != 0 || (_DWORD)v65 == -1) {
        v125 = (__int64*)v123;
        v124 = 0;
        v126 = (unsigned __int16*)game_g_empty_item_ptr;
      }
      else {
        v124 = v215[0];
        v125 = (__int64*)v123;
        v126 = (unsigned __int16*)(v215[0] + 8LL * (int)v65 + 828);
      }
      Util_15792c0(v125, v126, 1, 1u, v124, "L_Icon", (__int64)"T_Txt", 1);
      LayoutAccessor_1562cf0((__int64)v123, "EquipDefault");
      LayoutAccessor_1562cf0((__int64)v123, "Info");
    }
    else if (v122 == 0) {
    LABEL_304:
      if ((a3 & 1) != 0) {
        v127 = 0;
        while (1) {
          v128 = game_util_Format("L_Item%02d", v127);
          LayoutAccessor_1560070((void*)(&v200_.v200), v6, v128);
          if (v200_.v201 != 0) {
            v129 = std___1___shared_weak_count_lock(v200_.v201);
            v130 = (__int64*)v200_.v200;
            if (v200_.v201 != 0) {
              std___1___shared_weak_count___release_weak(v200_.v201);
            }
            if (v129 != 0 && v130 != nullptr) {
              Util_15792c0(v130, (unsigned __int16*)game_g_empty_item_ptr, 0,
                           1u, 0, "L_Icon", (__int64)"T_Txt", 1);
              LayoutAccessor_1562cf0((__int64)v130, "Default");
              LayoutAccessor_1562cf0((__int64)v130, "Info");
            LABEL_314:
              if (atomic_fetch_add((atomic_ullong* volatile)(v129 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
                (*(void (**)(__int64))(*(_QWORD*)v129 + 16LL))(v129);
                std___1___shared_weak_count___release_weak(v129);
              }
              goto LABEL_306;
            }
            if (v129 != 0) {
              goto LABEL_314;
            }
          }
        LABEL_306:
          if (++v127 == 6) {
            goto LABEL_330;
          }
        }
      }
      v131 = 0;
      while (1) {
        v209_.v209 = nullptr;
        v209_.v209 = *(char**)(v215[0] + 8 * v131 + 828);
        v132 = game_util_Format("L_Item%02d", v131);
        LayoutAccessor_1560070((void*)(&v200_.v200), v6, v132);
        if (v200_.v201 != 0) {
          v133 = std___1___shared_weak_count_lock(v200_.v201);
          v134 = (__int64*)v200_.v200;
          if (v200_.v201 != 0) {
            std___1___shared_weak_count___release_weak(v200_.v201);
          }
          if (v133 != 0 && v134 != nullptr) {
            v135 = GameHr_157b5c0(v215[0], (unsigned __int16*)&v209_.v209);
            if ((v135 & 1) != 0) {
              v136 = "Default";
            }
            else {
              v136 = "DisableDefault";
            }
            Util_15792c0(v134, (unsigned __int16*)&v209_.v209, 0, 1u, v215[0],
                         "L_Icon", (__int64)"T_Txt", v135 & 1);
            LayoutAccessor_1562cf0((__int64)v134, v136);
            LayoutAccessor_1562cf0((__int64)v134, "Info");
          LABEL_328:
            if (atomic_fetch_add((atomic_ullong* volatile)(v133 + 8),
                                 0xFFFFFFFFFFFFFFFFLL) == 0) {
              (*(void (**)(__int64))(*(_QWORD*)v133 + 16LL))(v133);
              std___1___shared_weak_count___release_weak(v133);
            }
            goto LABEL_317;
          }
          if (v133 != 0) {
            goto LABEL_328;
          }
        }
      LABEL_317:
        if (++v131 == 6) {
        LABEL_330:
          v137 = LayoutAccessor_155ea30(v6);
          Util_1575c70((__int64)v6, v215[0], 1, nullptr, 0, 0);
          LayoutAccessor_155e830((__int64)v6, v137 & 1);
          ui_LayoutAccessor_SetPaneVisible_alt1(
              (__int64)v6, (__int64)"N_MasteryInfoItem", (a3 & 1) == 0);
          v5 = v192;
          goto LABEL_32;
        }
      }
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v122 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v122 + 16LL))(v122);
      std___1___shared_weak_count___release_weak(v122);
    }
    goto LABEL_304;
  }
  LayoutAccessor_1562cf0((__int64)v6, "Magic");
  v9 = LayoutAccessor_155fbe0(v6, "L_MenuItem_Info");
  GameHr_157e0f0((__int64)v9, "MID_Menu_Magic", nullptr);
  v200_.v203 = -1;
  v200_.v204 = -1;
  v200_.v201 = -1;
  v200_.v202 = -1;
  v200_.v200 = -1;
  GameRoutine_15de930(v215[0]);
  v10 = v215[0];
  if ((a3 & 1) == 0) {
    v36 = (unsigned __int16*)(v215[0] + 884);
    v37 = 0;
    v38 = 0;
    v39 = *(_DWORD*)(a1 + 1352);
    v40 = *(_QWORD*)(*GameData_212c878[0] + 64);
    while (1) {
      if ((unsigned int)*(unsigned __int8*)(*(_QWORD*)(v40 + 8LL * *(v36 - 4)) +
                                            72LL) -
              5 >
          1) {
        goto LABEL_83;
      }
      if (v39 == 3) {
        break;
      }
      if (v39 != 2) {
        if (v39 != 1) {
          goto LABEL_82;
        }
        v41 = v38;
        if (v38 >= 0xA) {
          goto LABEL_82;
        }
      LABEL_81:
        *((_DWORD*)&v200_.v200 + v41) = v37;
        goto LABEL_82;
      }
      v41 = v38 - 10;
      if (v38 - 10 < 0xA) {
        goto LABEL_81;
      }
    LABEL_82:
      ++v38;
    LABEL_83:
      if ((unsigned int)*(unsigned __int8*)(*(_QWORD*)(v40 + 8LL * *v36) +
                                            72LL) -
              5 >
          1) {
        goto LABEL_73;
      }
      if (v39 == 1) {
        v42 = v38;
        if (v38 > 9) {
          goto LABEL_72;
        }
      }
      else {
        if (v39 == 2) {
          v42 = v38 - 10;
        }
        else {
          if (v39 != 3) {
            goto LABEL_72;
          }
          v42 = v38 - 20;
        }
        if (v42 >= 0xA) {
          goto LABEL_72;
        }
      }
      *((_DWORD*)&v200_.v200 + v42) = v37 + 1;
    LABEL_72:
      ++v38;
    LABEL_73:
      v37 += 2;
      v36 += 8;
      if (v37 == 24) {
        goto LABEL_12;
      }
    }
    v41 = v38 - 20;
    if (v38 - 20 > 9) {
      goto LABEL_82;
    }
    goto LABEL_81;
  }
LABEL_12:
  v11 = v10 + 828;
  v12 = 1;
  for (i = 0; i != 10; ++i) {
    v14 = game_util_Format("L_Magic%02d", i);
    LayoutAccessor_1560070((void*)(&v209_.v209), v6, v14);
    if (v209_.v210 == 0) {
      continue;
    }
    v15 = std___1___shared_weak_count_lock(v209_.v210);
    v16 = (__int64*)v209_.v209;
    if (v209_.v210 != 0) {
      std___1___shared_weak_count___release_weak(v209_.v210);
    }
    if (v15 != 0 && v16 != nullptr) {
      v17 = *((unsigned int*)&v200_.v200 + i);
      if ((v17 & 0x80000000) != 0) {
        Util_15792c0(v16, (unsigned __int16*)game_g_empty_item_ptr, 0, 1u, 0,
                     "L_Icon", (__int64)"T_Txt", 1);
      }
      else {
        v18 = v11 + 8 * v17;
        v19 = GameRoutine_15748c0(v215[0], (unsigned __int16*)(v18 + 48), 1) &
              0x100000000LL;
        v20 = HIDWORD(v19);
        if (v19 != 0) {
          v21 = "Default";
        }
        else {
          v21 = "DisableDefault";
        }
        LayoutAccessor_1562cf0((__int64)v16, v21);
        LayoutAccessor_1562cf0((__int64)v16, "Info");
        Util_15792c0(v16, (unsigned __int16*)(v18 + 48), 0, 0, v215[0],
                     "L_Icon", (__int64)"T_Txt", v20);
        v12 = 0;
      }
      LayoutAccessor_155e830((__int64)v16, (int)v17 >= 0);
    }
    else if (v15 == 0) {
      continue;
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v15 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v15 + 16LL))(v15);
      std___1___shared_weak_count___release_weak(v15);
    }
  }
  if ((v12 & 1) != 0) {
    LayoutAccessor_1560070((void*)(&v209_.v209), v6, "L_Magic00");
    if (v209_.v210 != 0) {
      v27 = std___1___shared_weak_count_lock(v209_.v210);
      v28 = (__int64*)v209_.v209;
      if (v209_.v210 != 0) {
        std___1___shared_weak_count___release_weak(v209_.v210);
      }
      if (v27 != 0 && v28 != nullptr) {
        LayoutAccessor_1562cf0((__int64)v28, "Default");
        LayoutAccessor_1562cf0((__int64)v28, "Info");
        Util_15792c0(v28, (unsigned __int16*)game_g_empty_item_ptr, 0, 0, 0,
                     "L_Icon", (__int64)"T_Txt", 1);
        LayoutAccessor_155e830((__int64)v28, 1);
        ui_LayoutAccessor_SetPaneVisible_alt1((__int64)v28, (__int64)"T_Txt",
                                              1);
        LayoutAccessor_1562060((char*)v28, (__int64)"T_Txt", "MID_Sys_Empty");
      LABEL_157:
        if (atomic_fetch_add((atomic_ullong* volatile)(v27 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v27 + 16LL))(v27);
          std___1___shared_weak_count___release_weak(v27);
        }
      }
      else if (v27 != 0) {
        goto LABEL_157;
      }
    }
  }
LABEL_32:
  if (v5 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
    std___1___shared_weak_count___release_weak(v5);
  }
}

_QWORD*

game_menu_EquipUnitSelectMenu_UpdateEquipList_lambda0_Invoke(_QWORD* result,
                                                             int* a2)
{
  _DWORD* v2;
  __int64* v3;
  _QWORD* v5;
  int v6;
  __int64 v7;
  __int64 v8;
  int v9;
  const char* v10[2];
  struct {
    __int64 (**v11)();
    _QWORD* v12;
    __int64 v13;
  } v11_;

  if ((signed __int32)*(_DWORD*)result[1] <
      (signed __int32)*(_DWORD*)result[2]) {
    v3 = (__int64*)result[3];
    v2 = (_DWORD*)result[4];
    v5 = result;
    v6 = (*v2)++;
    v10[0] = game_util_Format("L_Skill%02d", v6);
    v10[1] = (const char*)strlen(v10[0]);
    GameRoutine_15d4100((void*)((__int64*)&v11_.v11), v3, v10);
    result = v11_.v12;
    if (v11_.v12 != nullptr) {
      v7 = std___1___shared_weak_count_lock((__int64)v11_.v12);
      v8 = (__int64)v11_.v11;
      result = v11_.v12;
      if (v11_.v12 != nullptr) {
        result = (_QWORD*)std___1___shared_weak_count___release_weak(
            (__int64)v11_.v12);
      }
      if (v7 != 0 && v8 != 0) {
        MenuItemSkill_1899480(v8, 1u, 0, 0);
        v9 = *a2;
        if ((*(_BYTE*)(v8 + 1080) & 1) == 0) {
          *(_BYTE*)(v8 + 1080) = 1;
        }
        *(_DWORD*)(v8 + 1076) = v9;
        *(_QWORD*)(v8 + 1096) = *(_QWORD*)v5[5];
        v11_.v13 = 0;
        v11_.v11 = ui_Event_vtable;
        LODWORD(v11_.v12) = 20;
        result = X8CALL_X0(
            _QWORD*,
            (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, __int64,
                                                    __int64 (***)(void)))(
                *(_QWORD*)(v8 + 72) + 16LL))((void*)v10, v8 + 72, &v11_.v11));
        ++*(_DWORD*)v5[1];
      }
      else if (v7 == 0) {
        return result;
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
        return (_QWORD*)std___1___shared_weak_count___release_weak(v7);
      }
    }
  }
  return result;
}

__int64 game_menu_EquipUnitSelectMenu_UpdateEquipList_lambda1_Invoke(__int64 a1,
                                                                     int* a2)
{
  __int64 v2;
  int v4;

  v2 = **(_QWORD**)(a1 + 8);
  v4 = *a2;
  return GameRoutine_157b780(v2, &v4) & 1;
}

#pragma GCC visibility pop
