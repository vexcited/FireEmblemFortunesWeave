#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_136a920(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_136ad70(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1596b00(_QWORD);
__int64 GameRoutine_174d580(_QWORD, _QWORD, _QWORD, float);
__int64 GameSideStoryData_12b50c0(_QWORD, _QWORD);
__int64 GameSubquestData_1256ec0(void);
__int64 GameSubquestData_125a1a0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameSubquestData_125b8e0(_QWORD);
__int64 LayoutAccessor_155e830(_QWORD, _QWORD);
__int64 LayoutAccessor_155ea30(_QWORD);
__int64 LayoutAccessor_1562680(_QWORD, _QWORD, float);
__int64 LayoutAccessor_1562cf0(_QWORD, _QWORD);
__int64 LayoutAccessor_15635a0(_QWORD, _QWORD, _QWORD);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_GameVariableTable_Find(_QWORD, _QWORD);
__int64 game_HashString(void);
__int64 game_gmap_SpotMgr_FindSpot(void);
__int64 game_util_Format(const char*, ...);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
__int64 ui_LayoutAccessor_FindPane(_QWORD, _QWORD);
extern _UNKNOWN GameData_1aeeeee;
extern __int64 (*GameData_2075838[])();
extern __int64 (*GameData_20758c8[])();
extern __int64 (*GameData_2075948[])();
extern __int64 (*GameData_20759c8[])();
extern __int64 (*GameData_2075a48[])();
extern __int64 (*GameData_2075ac8[])();
extern __int64 (*GameData_2075b48[])();
extern __int64 (*GameData_2075bc8[])();
extern __int64 (*GameData_2075c48[])();
extern __int64 GameData_212c7b0[11];
extern __int64 GameData_212c7b8[10];
extern __int64 GameData_2130e20;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_GameModeData_instance_;
extern __int64 ui_Manager_instance_;
extern __int64* GameData_212c780;
extern __int64* GameData_212c790;
extern __int64* GameData_212d670[3];
extern __int64* GameData_212d678[2];
extern char GameData_1a9f09e;
extern char* GameData_2075cb8[16];
extern char* GameData_2075cf8[8];
extern char* GameData_2075d18[4];
void __attribute__((noreturn)) GameRoutine_1654e20(void);
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
bool game_gmap_GmapUIDef_SetQuestIcon(__int64 a1, __int64 a2, char a3);
bool GmapUIDef_1653b80_alt1(__int64* a1, int a2,
                            float a3) __asm__("GmapUIDef_1653b80");
__int64 game_gmap_GmapUIDef_SetQuestIcon_lambda2_Invoke(__int64 a1, _QWORD* a2);
__int64 game_gmap_GmapUIDef_SetQuestIcon_lambda3_Invoke(__int64 a1, _QWORD* a2);
__int64 game_gmap_GmapUIDef_SetQuestIcon_lambda4_Invoke(__int64 a1, _QWORD* a2);
__int64 game_gmap_GmapUIDef_SetQuestIcon_lambda5_Invoke(__int64 a1, _QWORD* a2);
__int64 game_gmap_GmapUIDef_SetQuestIcon_lambda6_Invoke(__int64 a1, _QWORD* a2);
__int64 game_gmap_GmapUIDef_SetQuestIcon_lambda7_Invoke(__int64 a1, _QWORD* a2);
__int64 game_gmap_GmapUIDef_SetQuestIcon_lambda8_Invoke(__int64 a1, _QWORD* a2);
__int64 game_gmap_GmapUIDef_SetQuestIcon_lambda9_Invoke(__int64 a1, _QWORD* a2);
__int64 GameRoutine_ae2330(_QWORD);
__int64 game_HashString_alt1(_QWORD, _QWORD) __asm__("game_HashString");
extern __int64 GameData_21c9e48;
void __attribute__((noreturn)) GameRoutine_1655af0(void);
__int64 GmapUIDef_1654a80(__int64 a1, __int64 a2);
__int64 GameRoutine_9db9e0(_QWORD, _QWORD);
__int64 Impl_13287c0(_QWORD);
__int64 game_HashString_alt2(_QWORD) __asm__("game_HashString");
__int64 game_gmap_SpotMgr_FindSpot_alt1(_QWORD) __asm__(
    "game_gmap_SpotMgr_FindSpot");
__int64 memcpy(_QWORD, _QWORD, _QWORD);
void __attribute__((noreturn)) GameRoutine_1654c60(void);
__attribute__((swiftcall)) void GmapUIDef_1654700(PSEUDO_X8 x8_, __int64 a1);
extern __int64 GameData_21c96e8;
extern __int64 GameData_22416c0;
__int64 GmapUIDef_1654300(__int64 result, __int64 a2, char a3);
__int64 GameSubquestData_1256ec0_alt1(_QWORD*,
                                      char) __asm__("GameSubquestData_1256ec0");
__int64 GameSubquestData_125b8e0_alt1(
    _QWORD*, const char*, unsigned __int8) __asm__("GameSubquestData_125b8e0");
__int64 LayoutAccessor_155e830_alt1(__int64 result,
                                    char) __asm__("LayoutAccessor_155e830");
__int64 LayoutAccessor_155ea30_alt1(__int64*) __asm__("LayoutAccessor_155ea30");
__int64 fw_memory_HeapManager_Allocate_alt1(
    __int64, __int64, __int64,
    unsigned int) __asm__("fw_memory_HeapManager_Allocate");
__int64 game_GameVariableTable_Find_alt1(_QWORD*, unsigned __int64*) __asm__(
    "game_GameVariableTable_Find");
__int64 game_HashString_alt3(__int64 result) __asm__("game_HashString");
__int64 std___1___shared_weak_count___release_weak_alt1(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
__int64 std___1___shared_weak_count_lock_alt1(__int64) __asm__(
    "std___1___shared_weak_count_lock");
unsigned int* game_gmap_SpotMgr_FindSpot_alt2(unsigned int* result) __asm__(
    "game_gmap_SpotMgr_FindSpot");
void GameSideStoryData_12b50c0_alt1(__int64, __int64*) __asm__(
    "GameSideStoryData_12b50c0");
void GameSubquestData_125a1a0_alt1(__int64, __int64*, unsigned int*,
                                   char) __asm__("GameSubquestData_125a1a0");
void __attribute__((noreturn))
GameRoutine_1654e20_alt1() __asm__("GameRoutine_1654e20");
void __attribute__((noreturn))
GameRoutine_60a210_alt1() __asm__("GameRoutine_60a210");
void game_gameui_1596b00(__int64);
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
__int64 GameHr_1562680(__int64 result, const char*, float);
__int64 GameRoutine_174d580_alt1(__int64*, const char*,
                                 __int64) __asm__("GameRoutine_174d580");
__int64
LayoutAccessor_1562cf0_alt1(__int64 result,
                            const char*) __asm__("LayoutAccessor_1562cf0");
__int64 LayoutAccessor_15635a0_alt1(__int64*, const char*,
                                    char) __asm__("LayoutAccessor_15635a0");
bool GmapUIDef_1653b80(__int64 a1, int a2, float a3);
_QWORD* Troop_133e4e0(__int64);
__attribute__((swiftcall)) void GameRoutine_1587740(PSEUDO_X8, __int64*,
                                                    const char**);
__attribute__((swiftcall)) void LayoutAccessor_1560070(PSEUDO_X8, __int64*,
                                                       const char*);
__int64 GameHr_1562680_alt1(__int64 result, unsigned int*,
                            float) __asm__("GameHr_1562680");
__int64 GameHr_1840740(__int64, unsigned int, __int64, unsigned __int8, char);
__int64 GameHr_1840a20(__int64, unsigned int, __int64, unsigned __int8, char);
__int64 GameRoutine_1582e00(__int64, int);
__int64 GameRoutine_19a8d80(__int64, __int64, char, unsigned int*, __int64, int,
                            char, char, __int16);
__int64 Impl_13261c0(__int64);
__int64 JobIcon_19a9d00(__int64);
__int64 LayoutAccessor_15635a0_alt2(__int64*, __int64,
                                    char) __asm__("LayoutAccessor_15635a0");
__int64 game_1841930(__int64, __int64);
__int64 game_Unit_GetJob(__int64);
__int64 game_gmap_TroopMgr_CountTroop_1349680(__int64);
__int64 ui_LayoutAccessor_FindPane_alt1(__int64*, const char*) __asm__(
    "ui_LayoutAccessor_FindPane");
__int64 ui_LayoutAccessor_SetPaneVisible(__int64 result, const char*, char);
bool GameRoutine_1342060(__int64);
bool GameRoutine_1651fc0(__int64);
bool SpotAttachmentExplore_15199c0(__int64, __int64);
extern _UNKNOWN* GameData_212da30;
extern __int64 (*GameData_20447f0[])();
extern __int64 GameData_212d690;
extern __int64 GameData_22416b0;
void GameRoutine_156c910(__int64 result, const char*, int, ...);
__int64 GmapUIDef_16537e0(__int64* a1, __int64 a2);
__int64 GmapUIDef_1653cd0(__int64 a1, __int64 a2, char a3);
void GmapUIDef_1653f50(_DWORD* a1, __int64 a2);
__int64 GameRoutine_9db9e0_alt1(unsigned int,
                                unsigned int) __asm__("GameRoutine_9db9e0");
__int64 memcpy_alt1(__int64, __int64, unsigned __int64) __asm__("memcpy");
bool GameRoutine_ae2330_alt1(__int64) __asm__("GameRoutine_ae2330");
bool Impl_13287c0_alt1(__int64) __asm__("Impl_13287c0");
void __attribute__((noreturn))
GameRoutine_1654c60_alt1() __asm__("GameRoutine_1654c60");
void __attribute__((noreturn))
GameRoutine_1655af0_alt1() __asm__("GameRoutine_1655af0");

bool game_gmap_GmapUIDef_SetQuestIcon(__int64 a1, __int64 a2, char a3)
{
  __int64 v3;
  __int64 v4;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  _QWORD* v11;
  _QWORD* v12;
  _QWORD* v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  int v19;
  __int64 v20;
  _QWORD* v21;
  __int64 v22;
  __int64 v23;
  bool v24;
  __int64 v25;
  __int64 v26;
  _QWORD* v27;
  _QWORD* v28;
  _QWORD* v29;
  __int64 v30;
  unsigned __int64 v31;
  __int64 (***v32)();
  __int64 (**v33)();
  unsigned __int64 v34;
  __int64 v35;
  __int64 v36;
  char* v37;
  unsigned __int64 v38;
  unsigned __int64 v39;
  unsigned __int64 v40;
  __int64 v41;
  char v42;
  __int64 v43;
  char* v44;
  __int64 v45;
  __int64 v46;
  __int64 (***v47)();
  __int64 v48;
  __int64 (***v49)();
  __int64 v50;
  _QWORD* v51;
  char* v52;
  unsigned __int64 v53;
  unsigned __int64 v54;
  unsigned __int64 v55;
  __int64 v56;
  __int64 v57;
  char* v58;
  __int64 (***v59)();
  __int64 v60;
  __int64 (***v61)();
  __int64 v62;
  _QWORD* v63;
  __int64 v64;
  __int64* v65;
  __int64 v66;
  __int64 v67;
  __int64 v68;
  unsigned int* v69;
  int v70;
  __int64 v71;
  unsigned __int64 v72;
  _QWORD* v73;
  __int64 v74;
  __int64 v75;
  char* v76;
  unsigned __int64 v77;
  unsigned __int64 v78;
  unsigned __int64 v79;
  __int64 v80;
  char v81;
  __int64 v82;
  char* v83;
  __int64 v84;
  __int64 v85;
  _QWORD* v86;
  __int64 v87;
  _QWORD* v88;
  __int64 v89;
  _QWORD* v90;
  __int64 v91;
  __int64* v92;
  __int64* v93;
  __int64 v94;
  __int64 v95;
  __int64 v96;
  __int64 v97;
  __int64 v98;
  unsigned __int64 v99;
  __int64 (***v100)();
  __int64 (**v101)();
  unsigned __int64 v102;
  _QWORD* v103;
  char* v104;
  unsigned __int64 v105;
  unsigned __int64 v106;
  unsigned __int64 v107;
  __int64 v108;
  __int64 v109;
  _QWORD* v110;
  __int64 v111;
  __int64 v112;
  __int64 (***v113)();
  __int64 v114;
  __int64 (***v115)();
  __int64 v116;
  char* v117;
  __int64 v118;
  __int64 v119;
  __int64 v120;
  __int64* v121;
  __int64 v122;
  unsigned int v123;
  char* v124;
  unsigned __int64 v125;
  unsigned __int64 v126;
  unsigned __int64 v127;
  __int64 v128;
  __int64* v129;
  __int64 v130;
  _QWORD* v131;
  __int64 v132;
  __int64 v133;
  __int64 (***v134)();
  __int64 v135;
  __int64 (***v136)();
  __int64 v137;
  char* v138;
  unsigned __int64 v139;
  unsigned __int64 v140;
  unsigned __int64 v141;
  unsigned __int64 v142;
  unsigned __int64 v143;
  __int64 v144;
  __int64 v145;
  _QWORD* v146;
  __int64 (***v147)();
  __int64 v148;
  __int64 (***v149)();
  unsigned __int64 v150;
  unsigned __int64 v151;
  unsigned __int64 v152;
  __int64 v153;
  __int64 v154;
  _QWORD* v155;
  __int64 (***v156)();
  __int64 v157;
  __int64 (***v158)();
  __int64 v159;
  char* v160;
  __int64 v161;
  char* v162;
  __int64 v163;
  __int64 v164;
  __int64 v165;
  const char* v166;
  _QWORD* v167;
  __int64 v168;
  __int64 v169;
  char v170;
  unsigned __int64 v171;
  unsigned __int64 v172;
  __int64 v173;
  __int64 v174;
  unsigned __int64 v175;
  unsigned __int64 v176;
  unsigned __int64 v177;
  __int64 v178;
  __int64 v179;
  __int64 v180;
  __int64 v181;
  __int64 v182;
  __int64 v183;
  char v184;
  __int64 v185;
  __int64 v186;
  __int64 v187;
  __int64 v188;
  _QWORD* v189;
  __int64 v190;
  char* v191;
  char* v192;
  unsigned __int64 v193;
  __int64 v194;
  char* v195;
  unsigned __int64 v196;
  _QWORD* v197;
  __int64 v198;
  __int64 v199;
  char* v200;
  unsigned __int64 v201;
  unsigned __int64 v202;
  unsigned __int64 v203;
  __int64 v204;
  __int64 v205;
  __int64 v206;
  char* v207;
  __int64 v208;
  __int64 v209;
  _QWORD* v210;
  __int64 v211;
  _QWORD* v212;
  __int64 v213;
  _QWORD* v214;
  __int64 v215;
  __int64 v216;
  int v217;
  __int64 v218;
  __int64 v219;
  __int64 v220;
  char v221;
  struct {
    __int64* v223;
    __int64* v224;
    __int64 v225;
  } v223_;

  v4 = *(_QWORD*)(a1 + 32);
  v3 = *(_QWORD*)(a1 + 40);
  if (v4 != v3) {
    do {
      v21 = *(_QWORD**)(v3 - 16);
      v22 = v3 - 48;
      if ((_QWORD*)(v3 - 48) == v21) {
        v20 = 32;
      }
      else {
        if (v21 == nullptr) {
          goto LABEL_20;
        }
        v20 = 40;
      }
      (*(void (**)(__int64))(*v21 + v20))((__int64)v21);
    LABEL_20:
      v3 = v22;
    } while (v22 != v4);
  }
  *(_QWORD*)(a1 + 40) = v4;
  *(_BYTE*)(a1 + 64) = 1;
  v8 = *(_QWORD*)(a2 + 120);
  if (v8 != 0 && game_GameModeData_instance_ != 0) {
    v9 = *(_QWORD*)(game_GameModeData_instance_ + 24);
    if (v9 != 0 && v8 == *(_QWORD*)(v9 + 200)) {
      goto LABEL_15;
    }
  }
  v10 = *(_QWORD*)(*GameData_212c790 + 8);
  v11 = *(_QWORD**)(v10 + 8);
  v12 = *(_QWORD**)(v10 + 16);
  while (1) {
    if (v11 == v12) {
      goto LABEL_95;
    }
    v13 = (_QWORD*)*v11;
    if (*(_QWORD*)*v11 == a2) {
      v14 = v13[12];
      if (v14 != 0 && (unsigned int)*(unsigned __int8*)(v14 + 32) - 3 < 2) {
        break;
      }
    }
    ++v11;
  }
  if ((v13[68] & 8) != 0) {
  LABEL_15:
    v223_.v224 = (__int64*)&GameData_1aeeeee;
    v223_.v223 = (__int64*)game_HashString_alt3((__int64)&GameData_1aeeeee);
    if (game_GameModeData_instance_ == 0 ||
        (v15 = game_GameVariableTable_Find_alt1(
             *(_QWORD**)(game_GameModeData_instance_ + 48),
             (unsigned __int64*)&v223_.v223)) == 0 ||
        *(_DWORD*)(v15 + 32) == 0) {
      v16 = *(_QWORD*)(*GameData_212c780 + 8);
      v17 = *(_QWORD*)(v16 + 48);
      v18 = *(_QWORD*)(v16 + 56);
      if (v17 != v18) {
        v19 = 0;
        do {
          v23 = *(_QWORD*)(*(_QWORD*)v17 + 120LL);
          v24 = v23 == 0 || game_GameModeData_instance_ == 0;
          if (!v24 &&
              (v25 = *(_QWORD*)(game_GameModeData_instance_ + 24)) != 0 &&
              v23 == *(_QWORD*)(v25 + 200)) {
          LABEL_24:
            ++v19;
          }
          else {
            v26 = *(_QWORD*)(*GameData_212c790 + 8);
            v27 = *(_QWORD**)(v26 + 8);
            v28 = *(_QWORD**)(v26 + 16);
            while (v27 != v28) {
              v29 = (_QWORD*)*v27;
              if (*(_QWORD*)*v27 == *(_QWORD*)v17) {
                v30 = v29[12];
                if (v30 != 0 &&
                    (unsigned int)*(unsigned __int8*)(v30 + 32) - 3 < 2) {
                  if ((v29[68] & 8) != 0) {
                    goto LABEL_24;
                  }
                  break;
                }
              }
              ++v27;
            }
          }
          v17 += 8;
        } while (v17 != v18);
        if (v19 > 1) {
          v32 = *(__int64 (****)())(a1 + 40);
          v31 = *(_QWORD*)(a1 + 48);
          if ((unsigned __int64)v32 < v31) {
            v33 = GameData_2075838;
          LABEL_45:
            *v32 = v33;
            v32[4] = (__int64 (**)(void))v32;
            v35 = (__int64)(v32 + 6);
          LABEL_94:
            *(_QWORD*)(a1 + 40) = v35;
            *(_BYTE*)(a1 + 64) = 1;
            goto LABEL_95;
          }
          v36 = *(_QWORD*)(a1 + 32);
          v52 = (char*)v32 - v36;
          v53 = 1 - 0x5555555555555555LL * (((__int64)v32 - v36) >> 4);
          if (v53 > 0x555555555555555LL) {
            goto LABEL_366;
          }
          v54 = 0xAAAAAAAAAAAAAAABLL * ((__int64)(v31 - v36) >> 4);
          if (2 * v54 > v53) {
            v53 = 2 * v54;
          }
          if (v54 >= 0x2AAAAAAAAAAAAAALL) {
            v55 = 0x555555555555555LL;
          }
          else {
            v55 = v53;
          }
          if (v55 > 0x555555555555555LL) {
            goto LABEL_367;
          }
          v56 = 3 * v55;
          v42 = a3;
          v57 = fw_memory_HeapManager_Allocate_alt1(
              *(_QWORD*)fw_memory_g_heap_manager_ptr, 48 * v55, 16, 0);
          v58 = &v52[v57];
          v45 = v57 + 16 * v56;
          v46 = v57;
          *(_QWORD*)v58 = GameData_2075838;
          v35 = (__int64)&v52[v57 + 48];
          *((_QWORD*)v58 + 4) = v58;
          if ((__int64 (***)(void))v36 != v32) {
            v59 = (__int64 (***)(void))v36;
            v60 = v57;
            do {
              v61 = (__int64 (***)(void))v59[4];
              if (v61 != nullptr) {
                if (v59 == v61) {
                  *(_QWORD*)(v60 + 32) = v60;
                  ((void (*)(__int64 (***)(void), __int64))(*v61)[3])(v61, v60);
                }
                else {
                  *(_QWORD*)(v60 + 32) = v61;
                  v59[4] = nullptr;
                }
              }
              else {
                *(_QWORD*)(v60 + 32) = 0;
              }
              v59 += 6;
              v60 += 48;
            } while (v59 != v32);
            while (1) {
              v63 = *(_QWORD**)(v36 + 32);
              if ((_QWORD*)v36 == v63) {
                v62 = 32;
              }
              else {
                if (v63 == nullptr) {
                  goto LABEL_84;
                }
                v62 = 40;
              }
              (*(void (**)(__int64))(*v63 + v62))((__int64)v63);
            LABEL_84:
              v36 += 48;
              if ((__int64 (***)(void))v36 == v32) {
                goto LABEL_88;
              }
            }
          }
        LABEL_89:
          *(_QWORD*)(a1 + 32) = v46;
          *(_QWORD*)(a1 + 40) = v35;
          *(_QWORD*)(a1 + 48) = v45;
          if (v36 != 0) {
            v64 = 128;
            if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                0) {
              v64 = 56;
            }
            nn_mem_StandardAllocator_Free_alt1(
                *(_QWORD*)fw_memory_g_heap_manager_ptr + v64, v36);
          }
          a3 = v42;
          goto LABEL_94;
        }
      }
      v32 = *(__int64 (****)())(a1 + 40);
      v34 = *(_QWORD*)(a1 + 48);
      if ((unsigned __int64)v32 < v34) {
        v33 = GameData_20758c8;
        goto LABEL_45;
      }
      v36 = *(_QWORD*)(a1 + 32);
      v37 = (char*)v32 - v36;
      v38 = 1 - 0x5555555555555555LL * (((__int64)v32 - v36) >> 4);
      if (v38 > 0x555555555555555LL) {
        goto LABEL_366;
      }
      v39 = 0xAAAAAAAAAAAAAAABLL * ((__int64)(v34 - v36) >> 4);
      if (2 * v39 > v38) {
        v38 = 2 * v39;
      }
      if (v39 >= 0x2AAAAAAAAAAAAAALL) {
        v40 = 0x555555555555555LL;
      }
      else {
        v40 = v38;
      }
      if (v40 > 0x555555555555555LL) {
        goto LABEL_367;
      }
      v41 = 3 * v40;
      v42 = a3;
      v43 = fw_memory_HeapManager_Allocate_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 48 * v40, 16, 0);
      v44 = &v37[v43];
      v45 = v43 + 16 * v41;
      v46 = v43;
      *(_QWORD*)v44 = GameData_20758c8;
      v35 = (__int64)&v37[v43 + 48];
      *((_QWORD*)v44 + 4) = v44;
      if ((__int64 (***)(void))v36 == v32) {
        goto LABEL_89;
      }
      v47 = (__int64 (***)(void))v36;
      v48 = v43;
      do {
        v49 = (__int64 (***)(void))v47[4];
        if (v49 != nullptr) {
          if (v47 == v49) {
            *(_QWORD*)(v48 + 32) = v48;
            ((void (*)(__int64 (***)(void), __int64))(*v49)[3])(v49, v48);
          }
          else {
            *(_QWORD*)(v48 + 32) = v49;
            v47[4] = nullptr;
          }
        }
        else {
          *(_QWORD*)(v48 + 32) = 0;
        }
        v47 += 6;
        v48 += 48;
      } while (v47 != v32);
      while (1) {
        v51 = *(_QWORD**)(v36 + 32);
        if ((_QWORD*)v36 == v51) {
          v50 = 32;
        }
        else {
          if (v51 == nullptr) {
            goto LABEL_63;
          }
          v50 = 40;
        }
        (*(void (**)(__int64))(*v51 + v50))((__int64)v51);
      LABEL_63:
        v36 += 48;
        if ((__int64 (***)(void))v36 == v32) {
        LABEL_88:
          v36 = *(_QWORD*)(a1 + 32);
          goto LABEL_89;
        }
      }
    }
  }
LABEL_95:
  v223_.v224 = nullptr;
  v223_.v225 = 0;
  v223_.v223 = nullptr;
  GameSideStoryData_12b50c0_alt1(*(_QWORD*)GameData_212c7b8[0],
                                 (__int64*)&v223_.v223);
  v66 = (__int64)v223_.v223;
  v65 = v223_.v224;
  if (v223_.v223 == v223_.v224) {
  LABEL_103:
    v70 = 0;
    if (v66 == 0) {
      goto LABEL_107;
    }
    goto LABEL_104;
  }
  v67 = (__int64)v223_.v223;
  while (1) {
    v68 = *(_QWORD*)v67;
    v69 = *(unsigned int**)(**(_QWORD**)v67 + 200LL);
    if (v69 != nullptr &&
        game_gmap_SpotMgr_FindSpot_alt2(v69) == (unsigned int*)a2 &&
        *(_BYTE*)(v68 + 8) == 3) {
      break;
    }
    v67 += 8;
    if ((__int64*)v67 == v65) {
      goto LABEL_103;
    }
  }
  v70 = 1;
  if (v66 != 0) {
  LABEL_104:
    v223_.v224 = (__int64*)v66;
    v71 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v71 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v71, v66);
  }
LABEL_107:
  if (v70 != 0) {
    v73 = *(_QWORD**)(a1 + 40);
    v72 = *(_QWORD*)(a1 + 48);
    if ((unsigned __int64)v73 < v72) {
      v73[4] = v73;
      v74 = (__int64)(v73 + 6);
      *v73 = GameData_2075948;
    LABEL_137:
      *(_QWORD*)(a1 + 40) = v74;
      *(_BYTE*)(a1 + 64) = 1;
      goto LABEL_138;
    }
    v75 = *(_QWORD*)(a1 + 32);
    v76 = (char*)v73 - v75;
    v77 = 1 - 0x5555555555555555LL * (((__int64)v73 - v75) >> 4);
    if (v77 > 0x555555555555555LL) {
      goto LABEL_366;
    }
    v78 = 0xAAAAAAAAAAAAAAABLL * ((__int64)(v72 - v75) >> 4);
    if (2 * v78 > v77) {
      v77 = 2 * v78;
    }
    if (v78 >= 0x2AAAAAAAAAAAAAALL) {
      v79 = 0x555555555555555LL;
    }
    else {
      v79 = v77;
    }
    if (v79 > 0x555555555555555LL) {
      goto LABEL_367;
    }
    v80 = 3 * v79;
    v81 = a3;
    v82 = fw_memory_HeapManager_Allocate_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, 48 * v79, 16, 0);
    v83 = &v76[v82];
    v84 = v82 + 16 * v80;
    v85 = v82;
    *(_QWORD*)v83 = GameData_2075948;
    v74 = (__int64)&v76[v82 + 48];
    *((_QWORD*)v83 + 4) = v83;
    if ((_QWORD*)v75 == v73) {
    LABEL_132:
      *(_QWORD*)(a1 + 32) = v85;
      *(_QWORD*)(a1 + 40) = v74;
      *(_QWORD*)(a1 + 48) = v84;
      if (v75 != 0) {
        v91 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v91 = 56;
        }
        nn_mem_StandardAllocator_Free_alt1(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v91, v75);
      }
      a3 = v81;
      goto LABEL_137;
    }
    v86 = (_QWORD*)v75;
    v87 = v82;
    do {
      v88 = (_QWORD*)v86[4];
      if (v88 != nullptr) {
        if (v86 == v88) {
          *(_QWORD*)(v87 + 32) = v87;
          (*(void (**)(_QWORD*, __int64))(*v88 + 24LL))(v88, v87);
        }
        else {
          *(_QWORD*)(v87 + 32) = v88;
          v86[4] = 0;
        }
      }
      else {
        *(_QWORD*)(v87 + 32) = 0;
      }
      v86 += 6;
      v87 += 48;
    } while (v86 != v73);
    while (1) {
      v90 = *(_QWORD**)(v75 + 32);
      if ((_QWORD*)v75 == v90) {
        v89 = 32;
      }
      else {
        if (v90 == nullptr) {
          goto LABEL_127;
        }
        v89 = 40;
      }
      (*(void (**)(__int64))(*v90 + v89))((__int64)v90);
    LABEL_127:
      v75 += 48;
      if ((_QWORD*)v75 == v73) {
        v75 = *(_QWORD*)(a1 + 32);
        goto LABEL_132;
      }
    }
  }
LABEL_138:
  v223_.v224 = nullptr;
  v223_.v225 = 0;
  v223_.v223 = nullptr;
  v92 = (__int64*)GameData_212c7b0[0];
  GameSubquestData_125a1a0_alt1(*(_QWORD*)GameData_212c7b0[0],
                                (__int64*)&v223_.v223, (unsigned int*)a2, 0);
  v94 = (__int64)v223_.v223;
  v93 = v223_.v224;
  if (v223_.v223 != nullptr) {
    v223_.v224 = v223_.v223;
    v95 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v95 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v95, (__int64)v223_.v223);
  }
  if (v93 == (__int64*)v94) {
    goto LABEL_270;
  }
  v96 = *v92;
  v223_.v224 = nullptr;
  v223_.v225 = 0;
  v223_.v223 = nullptr;
  GameSubquestData_125a1a0_alt1(v96, (__int64*)&v223_.v223, (unsigned int*)a2,
                                0);
  v97 = (__int64)v223_.v223;
  v98 = (__int64)v223_.v223;
  if (v223_.v223 != v223_.v224) {
    do {
      if (*(_BYTE*)(**(_QWORD**)v98 + 112LL) == 7) {
        goto LABEL_147;
      }
      v98 += 8;
    } while ((__int64*)v98 != v223_.v224);
    v98 = (__int64)v223_.v224;
  LABEL_147:
    while (*(_BYTE*)(**(_QWORD**)v97 + 112LL) != 5) {
      v97 += 8;
      if ((__int64*)v97 == v223_.v224) {
        v97 = (__int64)v223_.v224;
        break;
      }
    }
  }
  if ((__int64*)v98 != v223_.v224) {
    v100 = *(__int64 (****)())(a1 + 40);
    v99 = *(_QWORD*)(a1 + 48);
    if ((unsigned __int64)v100 < v99) {
      v101 = GameData_20759c8;
    LABEL_156:
      *v100 = v101;
      v100[4] = (__int64 (**)(void))v100;
      v103 = v100 + 6;
      goto LABEL_265;
    }
    v104 = *(char**)(a1 + 32);
    v105 = 1 - 0x5555555555555555LL * (((char*)v100 - v104) >> 4);
    if (v105 > 0x555555555555555LL) {
      goto LABEL_366;
    }
    v106 = 0xAAAAAAAAAAAAAAABLL * ((__int64)(v99 - (_QWORD)v104) >> 4);
    if (2 * v106 > v105) {
      v105 = 2 * v106;
    }
    if (v106 >= 0x2AAAAAAAAAAAAAALL) {
      v107 = 0x555555555555555LL;
    }
    else {
      v107 = v105;
    }
    if (v107 > 0x555555555555555LL) {
      goto LABEL_367;
    }
    v108 = 3 * v107;
    v109 = fw_memory_HeapManager_Allocate_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, 48 * v107, 16, 0);
    v110 = (_QWORD*)(v109 + (char*)v100 - v104);
    v111 = v109 + 16 * v108;
    v112 = v109;
    *v110 = GameData_20759c8;
    v103 = v110 + 6;
    v110[4] = v110;
    if (v104 == (char*)v100) {
      goto LABEL_180;
    }
    v113 = (__int64 (***)(void))v104;
    v114 = v109;
    do {
      v115 = (__int64 (***)(void))v113[4];
      if (v115 != nullptr) {
        if (v113 == v115) {
          *(_QWORD*)(v114 + 32) = v114;
          ((void (*)(__int64 (***)(void), __int64))(*v115)[3])(v115, v114);
        }
        else {
          *(_QWORD*)(v114 + 32) = v115;
          v113[4] = nullptr;
        }
      }
      else {
        *(_QWORD*)(v114 + 32) = 0;
      }
      v113 += 6;
      v114 += 48;
    } while (v113 != v100);
    v92 = (__int64*)GameData_212c7b0[0];
    while (1) {
      v117 = *((char**)v104 + 4);
      if (v104 == v117) {
        v116 = 32;
      }
      else {
        if (v117 == nullptr) {
          goto LABEL_175;
        }
        v116 = 40;
      }
      (*(void (**)(__int64))(*(_QWORD*)v117 + v116))((__int64)v117);
    LABEL_175:
      v104 += 48;
      if (v104 == (char*)v100) {
        v104 = *(char**)(a1 + 32);
      LABEL_180:
        *(_QWORD*)(a1 + 32) = v112;
        *(_QWORD*)(a1 + 40) = v103;
        *(_QWORD*)(a1 + 48) = v111;
        if (v104 != nullptr) {
          v118 = (__int64)v104;
          v119 = *(_QWORD*)fw_memory_g_heap_manager_ptr;
          goto LABEL_262;
        }
        goto LABEL_265;
      }
    }
  }
  if ((__int64*)v97 != v223_.v224) {
    v100 = *(__int64 (****)())(a1 + 40);
    v102 = *(_QWORD*)(a1 + 48);
    if ((unsigned __int64)v100 < v102) {
      v101 = GameData_2075a48;
      goto LABEL_156;
    }
    v124 = *(char**)(a1 + 32);
    v125 = 1 - 0x5555555555555555LL * (((char*)v100 - v124) >> 4);
    if (v125 > 0x555555555555555LL) {
      goto LABEL_366;
    }
    v126 = 0xAAAAAAAAAAAAAAABLL * ((__int64)(v102 - (_QWORD)v124) >> 4);
    if (2 * v126 > v125) {
      v125 = 2 * v126;
    }
    if (v126 >= 0x2AAAAAAAAAAAAAALL) {
      v127 = 0x555555555555555LL;
    }
    else {
      v127 = v125;
    }
    if (v127 > 0x555555555555555LL) {
      goto LABEL_367;
    }
    v128 = 3 * v127;
    v129 = (__int64*)fw_memory_g_heap_manager_ptr;
    v130 = fw_memory_HeapManager_Allocate_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, 48 * v127, 16, 0);
    v131 = (_QWORD*)(v130 + (char*)v100 - v124);
    v132 = v130 + 16 * v128;
    v133 = v130;
    *v131 = GameData_2075a48;
    v103 = v131 + 6;
    v131[4] = v131;
    if (v124 != (char*)v100) {
      v134 = (__int64 (***)(void))v124;
      v135 = v130;
      do {
        v136 = (__int64 (***)(void))v134[4];
        if (v136 != nullptr) {
          if (v134 == v136) {
            *(_QWORD*)(v135 + 32) = v135;
            ((void (*)(__int64 (***)(void), __int64))(*v136)[3])(v136, v135);
          }
          else {
            *(_QWORD*)(v135 + 32) = v136;
            v134[4] = nullptr;
          }
        }
        else {
          *(_QWORD*)(v135 + 32) = 0;
        }
        v134 += 6;
        v135 += 48;
      } while (v134 != v100);
      v92 = (__int64*)GameData_212c7b0[0];
      v129 = (__int64*)fw_memory_g_heap_manager_ptr;
      while (1) {
        v138 = *((char**)v124 + 4);
        if (v124 == v138) {
          v137 = 32;
        }
        else {
          if (v138 == nullptr) {
            goto LABEL_206;
          }
          v137 = 40;
        }
        (*(void (**)(__int64))(*(_QWORD*)v138 + v137))((__int64)v138);
      LABEL_206:
        v124 += 48;
        if (v124 == (char*)v100) {
          goto LABEL_259;
        }
      }
    }
    goto LABEL_244;
  }
  GameSubquestData_125a1a0_alt1(*v92, (__int64*)&v223_.v223, (unsigned int*)a2,
                                0);
  v120 = (__int64)v223_.v223;
  if (v223_.v223 == v223_.v224) {
    goto LABEL_266;
  }
  v121 = v223_.v223;
  while (1) {
    v122 = *v121++;
    v123 = *(unsigned __int16*)(*(_QWORD*)v122 + 128LL);
    if (v123 >= 2) {
      break;
    }
    if (v123 == 1) {
      v100 = *(__int64 (****)())(a1 + 40);
      v140 = *(_QWORD*)(a1 + 48);
      if ((unsigned __int64)v100 < v140) {
        v101 = GameData_2075b48;
        goto LABEL_156;
      }
      v124 = *(char**)(a1 + 32);
      v150 = 1 - 0x5555555555555555LL * (((char*)v100 - v124) >> 4);
      if (v150 > 0x555555555555555LL) {
        goto LABEL_366;
      }
      v151 = 0xAAAAAAAAAAAAAAABLL * ((__int64)(v140 - (_QWORD)v124) >> 4);
      if (2 * v151 > v150) {
        v150 = 2 * v151;
      }
      if (v151 >= 0x2AAAAAAAAAAAAAALL) {
        v152 = 0x555555555555555LL;
      }
      else {
        v152 = v150;
      }
      if (v152 > 0x555555555555555LL) {
        goto LABEL_367;
      }
      v153 = 3 * v152;
      v129 = (__int64*)fw_memory_g_heap_manager_ptr;
      v154 = fw_memory_HeapManager_Allocate_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 48 * v152, 16, 0);
      v155 = (_QWORD*)(v154 + (char*)v100 - v124);
      v132 = v154 + 16 * v153;
      v133 = v154;
      *v155 = GameData_2075b48;
      v103 = v155 + 6;
      v155[4] = v155;
      if (v124 == (char*)v100) {
        goto LABEL_244;
      }
      v156 = (__int64 (***)(void))v124;
      v157 = v154;
      do {
        v158 = (__int64 (***)(void))v156[4];
        if (v158 != nullptr) {
          if (v156 == v158) {
            *(_QWORD*)(v157 + 32) = v157;
            ((void (*)(__int64 (***)(void), __int64))(*v158)[3])(v158, v157);
          }
          else {
            *(_QWORD*)(v157 + 32) = v158;
            v156[4] = nullptr;
          }
        }
        else {
          *(_QWORD*)(v157 + 32) = 0;
        }
        v156 += 6;
        v157 += 48;
      } while (v156 != v100);
      v92 = (__int64*)GameData_212c7b0[0];
      v129 = (__int64*)fw_memory_g_heap_manager_ptr;
      while (2) {
        v162 = *((char**)v124 + 4);
        if (v124 != v162) {
          if (v162 != nullptr) {
            v161 = 40;
          LABEL_254:
            (*(void (**)(__int64))(*(_QWORD*)v162 + v161))((__int64)v162);
          }
          v124 += 48;
          if (v124 == (char*)v100) {
            goto LABEL_259;
          }
          continue;
        }
        break;
      }
      v161 = 32;
      goto LABEL_254;
    }
    if (v121 == v223_.v224) {
      goto LABEL_266;
    }
  }
  v100 = *(__int64 (****)())(a1 + 40);
  v139 = *(_QWORD*)(a1 + 48);
  if ((unsigned __int64)v100 < v139) {
    v101 = GameData_2075ac8;
    goto LABEL_156;
  }
  v124 = *(char**)(a1 + 32);
  v141 = 1 - 0x5555555555555555LL * (((char*)v100 - v124) >> 4);
  if (v141 > 0x555555555555555LL) {
    goto LABEL_366;
  }
  v142 = 0xAAAAAAAAAAAAAAABLL * ((__int64)(v139 - (_QWORD)v124) >> 4);
  if (2 * v142 > v141) {
    v141 = 2 * v142;
  }
  if (v142 >= 0x2AAAAAAAAAAAAAALL) {
    v143 = 0x555555555555555LL;
  }
  else {
    v143 = v141;
  }
  if (v143 > 0x555555555555555LL) {
    goto LABEL_367;
  }
  v144 = 3 * v143;
  v129 = (__int64*)fw_memory_g_heap_manager_ptr;
  v145 = fw_memory_HeapManager_Allocate_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 48 * v143, 16, 0);
  v146 = (_QWORD*)(v145 + (char*)v100 - v124);
  v132 = v145 + 16 * v144;
  v133 = v145;
  *v146 = GameData_2075ac8;
  v103 = v146 + 6;
  v146[4] = v146;
  if (v124 == (char*)v100) {
  LABEL_244:
    v92 = (__int64*)GameData_212c7b0[0];
    goto LABEL_260;
  }
  v147 = (__int64 (***)(void))v124;
  v148 = v145;
  do {
    v149 = (__int64 (***)(void))v147[4];
    if (v149 != nullptr) {
      if (v147 == v149) {
        *(_QWORD*)(v148 + 32) = v148;
        ((void (*)(__int64 (***)(void), __int64))(*v149)[3])(v149, v148);
      }
      else {
        *(_QWORD*)(v148 + 32) = v149;
        v147[4] = nullptr;
      }
    }
    else {
      *(_QWORD*)(v148 + 32) = 0;
    }
    v147 += 6;
    v148 += 48;
  } while (v147 != v100);
  v92 = (__int64*)GameData_212c7b0[0];
  v129 = (__int64*)fw_memory_g_heap_manager_ptr;
  do {
    v160 = *((char**)v124 + 4);
    if (v124 == v160) {
      v159 = 32;
    LABEL_247:
      (*(void (**)(__int64))(*(_QWORD*)v160 + v159))((__int64)v160);
      goto LABEL_248;
    }
    if (v160 != nullptr) {
      v159 = 40;
      goto LABEL_247;
    }
  LABEL_248:
    v124 += 48;
  } while (v124 != (char*)v100);
LABEL_259:
  v124 = *(char**)(a1 + 32);
LABEL_260:
  *(_QWORD*)(a1 + 32) = v133;
  *(_QWORD*)(a1 + 40) = v103;
  *(_QWORD*)(a1 + 48) = v132;
  if (v124 != nullptr) {
    v119 = *v129;
    v118 = (__int64)v124;
  LABEL_262:
    v163 = 128;
    if (*(_QWORD*)(v119 + 200) == 0) {
      v163 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(v119 + v163, v118);
  }
LABEL_265:
  v120 = (__int64)v223_.v223;
  *(_QWORD*)(a1 + 40) = v103;
  *(_BYTE*)(a1 + 64) = 1;
LABEL_266:
  if (v120 != 0) {
    v223_.v224 = (__int64*)v120;
    v164 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v164 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v164, v120);
  }
LABEL_270:
  v165 = *(_QWORD*)(a2 + 120);
  if (v165 != 0) {
    v166 = *(const char**)(v165 + 112);
    if (v166 != nullptr && *v166 != 0) {
      v167 = (_QWORD*)*v92;
      if (game_GameModeData_instance_ != 0) {
        v168 = GameSubquestData_125b8e0_alt1(
            v167, v166, *(_BYTE*)(game_GameModeData_instance_ + 15));
        if (v168 == 0) {
          goto LABEL_309;
        }
      }
      else {
        v168 = GameSubquestData_125b8e0_alt1(v167, v166, 0);
        if (v168 == 0) {
          goto LABEL_309;
        }
      }
      if ((*(_BYTE*)(v168 + 9) & 0xFE) != 4) {
        v169 = v168;
        if ((GameSubquestData_1256ec0_alt1((_QWORD*)v168, 1) & 1) != 0) {
          v170 = *(_BYTE*)(v169 + 9);
          v172 = *(_QWORD*)(a1 + 40);
          v171 = *(_QWORD*)(a1 + 48);
          if (v172 < v171) {
            *(_BYTE*)(v172 + 8) = v170;
            *(_QWORD*)(v172 + 32) = v172;
            v173 = v172 + 48;
            *(_QWORD*)v172 = GameData_2075bc8;
          LABEL_308:
            *(_QWORD*)(a1 + 40) = v173;
            *(_BYTE*)(a1 + 64) = 1;
            goto LABEL_309;
          }
          v174 = *(_QWORD*)(a1 + 32);
          v175 = 1 - 0x5555555555555555LL * ((__int64)(v172 - v174) >> 4);
          if (v175 <= 0x555555555555555LL) {
            v176 = 0xAAAAAAAAAAAAAAABLL * ((__int64)(v171 - v174) >> 4);
            if (2 * v176 > v175) {
              v175 = 2 * v176;
            }
            if (v176 >= 0x2AAAAAAAAAAAAAALL) {
              v177 = 0x555555555555555LL;
            }
            else {
              v177 = v175;
            }
            if (v177 <= 0x555555555555555LL) {
              v178 = 3 * v177;
              v179 = fw_memory_g_heap_manager_ptr;
              v180 = fw_memory_HeapManager_Allocate_alt1(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr, 48 * v177, 16, 0);
              v181 = v180 + v172 - v174;
              v182 = v180 + 16 * v178;
              v183 = v180;
              *(_QWORD*)v181 = GameData_2075bc8;
              v173 = v181 + 48;
              *(_BYTE*)(v181 + 8) = v170;
              *(_QWORD*)(v181 + 32) = v181;
              if (v174 == v172) {
              LABEL_304:
                *(_QWORD*)(a1 + 32) = v183;
                *(_QWORD*)(a1 + 40) = v173;
                *(_QWORD*)(a1 + 48) = v182;
                if (v174 != 0) {
                  v190 = 128;
                  if (*(_QWORD*)(*(_QWORD*)v179 + 200LL) == 0) {
                    v190 = 56;
                  }
                  nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v179 + v190,
                                                     v174);
                }
                goto LABEL_308;
              }
              v184 = a3;
              v185 = v174;
              v186 = v180;
              do {
                v187 = *(_QWORD*)(v185 + 32);
                if (v187 != 0) {
                  if (v185 == v187) {
                    *(_QWORD*)(v186 + 32) = v186;
                    (*(void (**)(__int64, __int64))(*(_QWORD*)v187 + 24LL))(
                        v187, v186);
                  }
                  else {
                    *(_QWORD*)(v186 + 32) = v187;
                    *(_QWORD*)(v185 + 32) = 0;
                  }
                }
                else {
                  *(_QWORD*)(v186 + 32) = 0;
                }
                v185 += 48;
                v186 += 48;
              } while (v185 != v172);
              a3 = v184;
              v179 = fw_memory_g_heap_manager_ptr;
              while (2) {
                v189 = *(_QWORD**)(v174 + 32);
                if ((_QWORD*)v174 != v189) {
                  if (v189 != nullptr) {
                    v188 = 40;
                  LABEL_298:
                    (*(void (**)(__int64))(*v189 + v188))((__int64)v189);
                  }
                  v174 += 48;
                  if (v174 == v172) {
                    v174 = *(_QWORD*)(a1 + 32);
                    goto LABEL_304;
                  }
                  continue;
                }
                break;
              }
              v188 = 32;
              goto LABEL_298;
            }
          LABEL_367:
            GameRoutine_60a210_alt1();
          }
        LABEL_366:
          GameRoutine_1654e20_alt1();
        }
      }
    }
  }
LABEL_309:
  if ((a3 & 1) != 0) {
    v192 = *(char**)(*(_QWORD*)GameData_2130e20 + 8LL);
    v191 = *(char**)(*(_QWORD*)GameData_2130e20 + 16LL);
    if (v192 == v191) {
      goto LABEL_326;
    }
    v193 = v191 - v192 - 8;
    if ((~(_BYTE)v193 & 0x18) != 0) {
      v194 = ((unsigned __int8)((unsigned int)v193 >> 3) + 1) & 3;
      while (*(_QWORD*)v192 != a2) {
        v192 += 8;
        if (--v194 == 0) {
          goto LABEL_315;
        }
      }
    LABEL_326:
      if (v192 != v191) {
        v197 = *(_QWORD**)(a1 + 40);
        v196 = *(_QWORD*)(a1 + 48);
        if ((unsigned __int64)v197 < v196) {
          v197[4] = v197;
          v198 = (__int64)(v197 + 6);
          *v197 = GameData_2075c48;
          goto LABEL_355;
        }
        v199 = *(_QWORD*)(a1 + 32);
        v200 = (char*)v197 - v199;
        v201 = 1 - 0x5555555555555555LL * (((__int64)v197 - v199) >> 4);
        if (v201 > 0x555555555555555LL) {
          goto LABEL_366;
        }
        v202 = 0xAAAAAAAAAAAAAAABLL * ((__int64)(v196 - v199) >> 4);
        if (2 * v202 > v201) {
          v201 = 2 * v202;
        }
        if (v202 >= 0x2AAAAAAAAAAAAAALL) {
          v203 = 0x555555555555555LL;
        }
        else {
          v203 = v201;
        }
        if (v203 > 0x555555555555555LL) {
          goto LABEL_367;
        }
        v204 = 3 * v203;
        v205 = fw_memory_g_heap_manager_ptr;
        v206 = fw_memory_HeapManager_Allocate_alt1(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 48 * v203, 16, 0);
        v207 = &v200[v206];
        v208 = v206 + 16 * v204;
        v209 = v206;
        *(_QWORD*)v207 = GameData_2075c48;
        v198 = (__int64)&v200[v206 + 48];
        *((_QWORD*)v207 + 4) = v207;
        if ((_QWORD*)v199 != v197) {
          v210 = (_QWORD*)v199;
          v211 = v206;
          do {
            v212 = (_QWORD*)v210[4];
            if (v212 != nullptr) {
              if (v210 == v212) {
                *(_QWORD*)(v211 + 32) = v211;
                (*(void (**)(_QWORD*, __int64))(*v212 + 24LL))(v212, v211);
              }
              else {
                *(_QWORD*)(v211 + 32) = v212;
                v210[4] = 0;
              }
            }
            else {
              *(_QWORD*)(v211 + 32) = 0;
            }
            v210 += 6;
            v211 += 48;
          } while (v210 != v197);
          while (1) {
            v214 = *(_QWORD**)(v199 + 32);
            if ((_QWORD*)v199 == v214) {
              v213 = 32;
            }
            else {
              if (v214 == nullptr) {
                goto LABEL_346;
              }
              v213 = 40;
            }
            (*(void (**)(__int64))(*v214 + v213))((__int64)v214);
          LABEL_346:
            v199 += 48;
            if ((_QWORD*)v199 == v197) {
              v199 = *(_QWORD*)(a1 + 32);
              break;
            }
          }
        }
        *(_QWORD*)(a1 + 32) = v209;
        *(_QWORD*)(a1 + 40) = v198;
        *(_QWORD*)(a1 + 48) = v208;
        if (v199 != 0) {
          v215 = 128;
          if (*(_QWORD*)(*(_QWORD*)v205 + 200LL) == 0) {
            v215 = 56;
          }
          nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v205 + v215, v199);
        }
      LABEL_355:
        *(_QWORD*)(a1 + 40) = v198;
        *(_BYTE*)(a1 + 64) = 1;
      }
    }
    else {
    LABEL_315:
      if (v193 >= 0x18) {
        v192 += 16;
        while (1) {
          if (*((_QWORD*)v192 - 2) == a2) {
            v192 -= 16;
            goto LABEL_326;
          }
          if (*((_QWORD*)v192 - 1) == a2) {
            v192 -= 8;
            goto LABEL_326;
          }
          if (*(_QWORD*)v192 == a2) {
            goto LABEL_326;
          }
          if (*((_QWORD*)v192 + 1) == a2) {
            break;
          }
          v195 = v192 + 16;
          v192 += 32;
          if (v195 == v191) {
            goto LABEL_356;
          }
        }
        v192 += 8;
        goto LABEL_326;
      }
    }
  }
LABEL_356:
  v216 = *(_QWORD*)(a1 + 16);
  v217 = -1431655765 * ((*(_QWORD*)(a1 + 40) - *(_QWORD*)(a1 + 32)) >> 4);
  if (v216 != 0) {
    v218 = std___1___shared_weak_count_lock_alt1(v216);
    if (v218 != 0) {
      v219 = *(_QWORD*)(a1 + 8);
      v220 = v218;
      if (v219 != 0) {
        v221 = LayoutAccessor_155ea30_alt1(*(__int64**)(a1 + 8));
        if (v217 >= 1 && (v221 & 1) == 0) {
          *(_BYTE*)(a1 + 64) = 1;
        }
        LayoutAccessor_155e830_alt1(v219, v217 > 0);
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v220 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v220 + 16LL))(v220);
        std___1___shared_weak_count___release_weak_alt1(v220);
      }
    }
  }
  game_gameui_1596b00(a1);
  return v217 > 0;
}

__int64 GmapUIDef_16537e0(__int64* a1, __int64 a2)
{

#pragma clang fp contract(off)
  __int64* v2;
  __int64 v3;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64** v8;
  __int64* v9;
  __int64* v10;
  unsigned int* v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  unsigned int v16;
  int v17;
  __int64 v18;
  unsigned int v20;
  unsigned int v21;
  int v22;
  int v23;
  __int64 v24;
  int v25;
  __int64 v26;
  float v27;
  __int64 v28;
  __int64 v29;
  char* v30;
  float v31;
  char* v32;
  int v33;
  _QWORD v35[2];
  _QWORD v36[2];
  struct {
    _QWORD v37[4];
    _QWORD* v38;
  } v37_;

  v2 = a1;
  v3 = a1[1];
  if (v3 == 0) {
    goto LABEL_21;
  }
  v5 = std___1___shared_weak_count_lock_alt1(v3);
  if (v5 == 0) {
    goto LABEL_21;
  }
  v6 = *v2;
  v7 = v5;
  if (*v2 == 0) {
    goto LABEL_18;
  }
  LayoutAccessor_155e830_alt1(*v2, 0);
  v8 = *(__int64***)(GameData_22416b0 + 8);
  v9 = *v8;
  v10 = v8[1];
  if (v9 == v10) {
  LABEL_7:
    v14 = *(_QWORD*)(a2 + 280);
    if (v14 != 0 &&
        ((*(unsigned __int8 (**)(__int64))(*(_QWORD*)v14 + 24LL))(v14) != 1 ||
         ((*(__int64 (**)(_QWORD))(**(_QWORD**)(a2 + 280) + 112LL))(
              *(_QWORD*)(a2 + 280)) &
          1) == 0)) {
      v15 = *(_QWORD*)(a2 + 280);
      if (v15 != 0) {
        v16 = (*(unsigned __int8 (**)(_QWORD))(*(_QWORD*)v15 + 24LL))(
            *(_QWORD*)(a2 + 280));
        v17 = 8;
        if (v16 <= 2) {
          if (v16 != 0) {
            if (v16 == 1) {
              if (*(_BYTE*)((*(__int64 (**)(__int64))(*(_QWORD*)v15 + 192LL))(
                                v15) +
                            94) == 1) {
                v17 = 2;
              }
              else {
                v17 = 1;
              }
            }
          }
          else {
            v17 = 0;
          }
        }
        else {
          switch (v16) {
          case 3u:
            v17 = 3;
            break;
          case 4u:
            if ((unsigned __int8)Impl_13261c0(a2) == 8) {
              v17 = 8;
            }
            else {
              v17 = 4;
            }
            break;
          case 5u:
            v17 = 5;
            break;
          default:
            v17 = 8;
            break;
          }
        }
        v25 = (*(__int64 (**)(__int64))(*(_QWORD*)v15 + 96LL))(v15);
        v26 = v2[1];
        v27 = (float)v25 / 0x1.9000000000000p+6f;
        v35[0] = *v2;
        v35[1] = v26;
        if (v26 != 0) {
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v26 + 16), 1u,
                                    memory_order_relaxed);
          LOBYTE(v2) = GmapUIDef_1653b80((__int64)v35, v17, v27);
          std___1___shared_weak_count___release_weak_alt1(v26);
        }
        else {
          LOBYTE(v2) = GmapUIDef_1653b80((__int64)v35, v17, v27);
        }
        v28 = (*(__int64 (**)(__int64))(*(_QWORD*)v15 + 264LL))(v15);
        if (v28 != 0 && ((v29 = v28, (*(unsigned __int8 (**)(__int64))(
                                         *(_QWORD*)v15 + 24LL))(v15) == 5) ||
                         SpotAttachmentExplore_15199c0(a2, v29))) {
          v30 = "ColorUp";
        }
        else {
          v30 = "ColorDefault";
        }
        GameHr_1562680_alt1(v6, (unsigned int*)v30, 0x1.0000000000000p+0f);
        goto LABEL_48;
      }
    }
  LABEL_18:
    LODWORD(v18) = 1;
    goto LABEL_19;
  }
  while (1) {
    v12 = *v9++;
    v11 = (unsigned int*)v12;
    v13 = *(_QWORD*)(v12 + 112);
    if (*(_QWORD*)(v13 + 48) == *(_QWORD*)(a2 + 120)) {
      break;
    }
    if (v9 == v10) {
      goto LABEL_7;
    }
  }
  if (*(_QWORD*)(v13 + 64) != 0) {
    goto LABEL_18;
  }
  v20 = *v11;
  v21 = *(unsigned __int16*)(v13 + 76);
  v22 = v21 - *v11;
  if (v22 < 1) {
    goto LABEL_18;
  }
  v37_.v37[0] = GameData_20447f0;
  v37_.v37[1] = v11;
  v37_.v38 = v37_.v37;
  v23 = game_gmap_TroopMgr_CountTroop_1349680((__int64)v37_.v37);
  if (v37_.v38 == v37_.v37) {
    v24 = 32;
  }
  else {
    if (v37_.v38 == nullptr) {
      goto LABEL_51;
    }
    v24 = 40;
  }
  (*(void (**)(__int64))(*v37_.v38 + v24))((__int64)v37_.v38);
LABEL_51:
  v31 = 0x1.0000000000000p+0f;
  if (v23 <= 0) {
    v32 = "ColorMiasmaGenera";
  }
  else {
    v32 = "ColorMiasmaGate";
  }
  if (v23 <= 0) {
    v33 = 6;
  }
  else {
    v33 = 7;
  }
  GameHr_1562680_alt1(v6, (unsigned int*)v32, 0x1.0000000000000p+0f);
  if (v21 != 0 && v21 >= v20) {
    v31 = (float)(unsigned int)v22 / (float)v21;
  }
  v18 = v2[1];
  v36[0] = *v2;
  v36[1] = v18;
  if (v18 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v18 + 16), 1u,
                              memory_order_relaxed);
    LOBYTE(v2) = GmapUIDef_1653b80((__int64)v36, v33, v31);
    std___1___shared_weak_count___release_weak_alt1(v18);
  LABEL_48:
    LODWORD(v18) = 0;
    goto LABEL_19;
  }
  LOBYTE(v2) = GmapUIDef_1653b80((__int64)v36, v33, v31);
LABEL_19:
  if (atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
    std___1___shared_weak_count___release_weak_alt1(v7);
    if ((_DWORD)v18 == 0) {
      return (unsigned __int8)v2 & 1;
    }
    goto LABEL_21;
  }
  if ((_DWORD)v18 != 0) {
  LABEL_21:
    LOBYTE(v2) = 0;
  }
  return (unsigned __int8)v2 & 1;
}

bool GmapUIDef_1653b80(__int64 a1, int a2, float a3)
{

#pragma clang fp contract(off)
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v10;
  __int64* v11;
  __int64 v12;
  _BOOL4 v13;
  const char* v14;
  __int64 v15[6];

  if (a2 == 8) {
    return false;
  }
  v15[2] = v5;
  v15[4] = v3;
  v15[5] = v4;
  if (*(_QWORD*)(a1 + 8) != 0 &&
      (v10 = std___1___shared_weak_count_lock_alt1(*(_QWORD*)(a1 + 8))) != 0) {
    v11 = *(__int64**)a1;
    v12 = v10;
    v13 = v11 == nullptr;
    if (v11 != nullptr) {
      v14 = GameData_2075cb8[a2];
      LayoutAccessor_155e830_alt1((__int64)v11, 1);
      if ((LayoutAccessor_15635a0_alt1(v11, v14, 1) & 1) == 0) {
        LayoutAccessor_1562cf0_alt1((__int64)v11, v14);
      }
      if (a3 >= 0x1.0000000000000p+0f) {
        if ((LayoutAccessor_15635a0_alt1(v11, "GaugeMax", 1) & 1) == 0) {
          GameHr_1562680((__int64)v11, "GaugeMax", 0x1.0000000000000p+0f);
        }
      }
      else {
        v15[0] = (__int64)v11;
        v15[1] = v12;
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v12 + 16), 1u,
                                  memory_order_relaxed);
        GameRoutine_174d580_alt1(v15, "GaugeUp", 7);
        std___1___shared_weak_count___release_weak_alt1(v12);
      }
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v12 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v12 + 16LL))(v12);
      std___1___shared_weak_count___release_weak_alt1(v12);
    }
  }
  else {
    v13 = true;
  }
  return !v13;
}

__int64 GmapUIDef_1653cd0(__int64 a1, __int64 a2, char a3)
{
  __int64 result;
  __int64* v7;
  __int64 v8;
  __int64 v9;
  int v10;
  char v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  unsigned int v17;
  struct {
    __int64 v18;
    __int64 v19;
  } v18_;
  struct {
    __int64 v20;
    __int64 v21;
  } v20_;

  if (a2 == 0 || *(_QWORD*)(a1 + 8) == 0) {
    return 0;
  }
  result = std___1___shared_weak_count_lock_alt1(*(_QWORD*)(a1 + 8));
  if (result == 0) {
    return result;
  }
  v7 = *(__int64**)a1;
  v8 = result;
  if (v7 == nullptr) {
    goto LABEL_29;
  }
  if ((unsigned __int8)Impl_13261c0(a2) != 8) {
    GameHr_1562680_alt1((__int64)v7, (unsigned int*)"Spot_Gauge",
                        0x1.0000000000000p+0f);
    LayoutAccessor_1560070((void*)(&v18_.v18), v7, "L_Gauge");
    v11 = GmapUIDef_16537e0(&v18_.v18, a2);
    if (v18_.v19 != 0) {
      std___1___shared_weak_count___release_weak_alt1(v18_.v19);
      if ((v11 & 1) == 0) {
        goto LABEL_29;
      }
    }
    else if ((v11 & 1) == 0) {
      goto LABEL_29;
    }
  LABEL_15:
    LayoutAccessor_155e830_alt1((__int64)v7, 1);
    if ((a3 & 1) != 0 && (v12 = *(_QWORD*)(a2 + 280)) != 0 &&
        ((*(unsigned __int8 (**)(__int64))(*(_QWORD*)v12 + 24LL))(v12) != 1 ||
         ((*(__int64 (**)(_QWORD))(**(_QWORD**)(a2 + 280) + 112LL))(
              *(_QWORD*)(a2 + 280)) &
          1) == 0) &&
        (v13 = *(_QWORD*)(a2 + 280)) != 0 &&
        (v14 = (*(__int64 (**)(__int64))(*(_QWORD*)v13 + 264LL))(v13)) != 0) {
      v15 = v14;
      if ((LayoutAccessor_15635a0_alt2(v7, (__int64)"IconLegionOn", 1) & 1) ==
          0) {
        GameHr_1562680_alt1((__int64)v7, (unsigned int*)"IconLegionOn",
                            0x1.0000000000000p+0f);
      }
      v16 = ui_LayoutAccessor_FindPane_alt1(v7, "IconLegion");
      if (v16 != 0) {
        v16 = __dynamic_cast(v16, GameData_212d670[0], GameData_212d678[0], 0);
      }
      game_1841930(v16, *(_QWORD*)(v15 + 64));
    }
    else {
      GameHr_1562680_alt1((__int64)v7, (unsigned int*)"IconLegionOff",
                          0x1.0000000000000p+0f);
    }
    result = 1;
    goto LABEL_30;
  }
  result = *(_QWORD*)(a2 + 280);
  if (result != 0) {
    if ((*(unsigned __int8 (**)(__int64))(*(_QWORD*)result + 24LL))(result) !=
            1 ||
        ((*(__int64 (**)(_QWORD))(**(_QWORD**)(a2 + 280) + 112LL))(
             *(_QWORD*)(a2 + 280)) &
         1) == 0) {
      v9 = *(_QWORD*)(a2 + 280);
      if (v9 != 0) {
        GameHr_1562680_alt1((__int64)v7, (unsigned int*)"Spot_Fort",
                            0x1.0000000000000p+0f);
        LayoutAccessor_1560070((void*)(&v20_.v20), v7, "L_Fort");
        v10 = (*(__int64 (**)(__int64))(*(_QWORD*)v9 + 256LL))(v9);
        GameRoutine_1582e00((__int64)&v20_.v20, v10);
        if (v20_.v21 != 0) {
          std___1___shared_weak_count___release_weak_alt1(v20_.v21);
        }
        goto LABEL_15;
      }
    }
  LABEL_29:
    result = 0;
  }
LABEL_30:
  if (atomic_fetch_add((atomic_ullong* volatile)(v8 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    v17 = result;
    (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8);
    std___1___shared_weak_count___release_weak_alt1(v8);
    return v17;
  }
  return result;
}

void GmapUIDef_1653f50(_DWORD* a1, __int64 a2)
{
  __int64 v3;
  __int64 v5;
  __int64* v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  char* v11;
  __int64 v12;
  __int64 v13;
  unsigned int v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  unsigned int* v18;
  char v19;
  __int64 v20;
  __int64 v21;
  _QWORD* v22;
  _QWORD* v23;
  __int64 v24;
  __int64 v25;
  int v26;
  _QWORD* v27;
  const char* v28[2];
  struct {
    __int64 v29;
    __int64 v30;
  } v29_;

  v3 = *(_QWORD*)(a2 + 8);
  if (v3 != 0) {
    v5 = std___1___shared_weak_count_lock_alt1(v3);
    if (v5 != 0) {
      v6 = *(__int64**)a2;
      v7 = v5;
      if (v6 != nullptr) {
        if (*a1 == 1) {
          LayoutAccessor_155e830_alt1((__int64)v6, 1);
          GameHr_1562680_alt1((__int64)v6, (unsigned int*)"TypeAlly_Num",
                              0x1.0000000000000p+0f);
          ui_LayoutAccessor_SetPaneVisible((__int64)v6, "T_Num",
                                           (signed __int32)a1[2] > 1);
          v14 = a1[2];
          v15 = ui_LayoutAccessor_FindPane_alt1(v6, "T_Num");
          if (v15 != 0) {
            v16 = __dynamic_cast(v15, GameData_212d670[0], GameData_212d690, 0);
            if (v16 != 0) {
              GameRoutine_156c910(v16, "%d", 1, v14);
            }
          }
          goto LABEL_42;
        }
        if (*a1 == 0) {
          v8 = *((_QWORD*)a1 + 1);
          v9 = *(_QWORD*)(v8 + 96);
          v10 = *(_QWORD*)(v8 + 552);
          if ((v9 | v10) == 0) {
            LayoutAccessor_155e830_alt1((__int64)v6, 1);
            if (GameRoutine_1651fc0(*((_QWORD*)a1 + 1))) {
              v11 = "TypePlayer_Disable";
            }
            else {
              v11 = "TypePlayer_Default";
            }
            GameHr_1562680_alt1((__int64)v6, (unsigned int*)v11,
                                0x1.0000000000000p+0f);
            v12 = ui_LayoutAccessor_FindPane_alt1(v6, "Face");
            if (v12 != 0) {
              v13 = __dynamic_cast(v12, GameData_212d670[0],
                                   GameData_212d678[0], 0);
            }
            else {
              v13 = 0;
            }
            v27 = Troop_133e4e0(*((_QWORD*)a1 + 1));
            GameHr_1840740(v13, 0, (__int64)v27, 6u, 1);
            goto LABEL_42;
          }
          if (v9 == 0 && v10 != 0) {
            if (*(_QWORD*)(v8 + 104) != 0 || *(__int16*)(v8 + 642) *
                                                     *(__int16*)(v8 + 640) *
                                                     *(__int16*)(v8 + 644) !=
                                                 0) {
              LayoutAccessor_155e830_alt1((__int64)v6, 1);
              GameHr_1562680_alt1((__int64)v6,
                                  (unsigned int*)"TypeAlly_Face_Default",
                                  0x1.0000000000000p+0f);
              v17 = ui_LayoutAccessor_FindPane_alt1(v6, "Face");
              if (v17 != 0) {
                v17 = __dynamic_cast(v17, GameData_212d670[0],
                                     GameData_212d678[0], 0);
              }
              GameHr_1840a20(v17, 0, *(_QWORD*)(*((_QWORD*)a1 + 1) + 552LL), 6u,
                             1);
            }
            goto LABEL_42;
          }
          if (v9 != 0 && *(_BYTE*)(v9 + 32) == 1) {
            LayoutAccessor_155e830_alt1((__int64)v6, 1);
            GameHr_1562680_alt1((__int64)v6, (unsigned int*)"TypeEnemy",
                                0x1.0000000000000p+0f);
            v18 = (unsigned int*)(GameRoutine_1342060(*((_QWORD*)a1 + 1))
                                      ? "Btl"
                                      : "CmdBtl");
            GameHr_1562680_alt1((__int64)v6, v18, 0x1.0000000000000p+0f);
            v19 = *(_BYTE*)(*((_QWORD*)a1 + 1) + 546LL);
            v28[0] = "L_Class";
            v28[1] = (_BYTE*)((_UNKNOWN*)0x7LL);
            GameRoutine_1587740((void*)(&v29_.v29), v6, v28);
            if (v29_.v30 != 0) {
              v20 = std___1___shared_weak_count_lock_alt1(v29_.v30);
              v21 = v29_.v29;
              if (v29_.v30 != 0) {
                std___1___shared_weak_count___release_weak_alt1(v29_.v30);
              }
              if (v20 != 0 && v21 != 0) {
                if ((v19 & 0x20) != 0) {
                  JobIcon_19a9d00(v21);
                }
                else {
                  v22 = Troop_133e4e0(*((_QWORD*)a1 + 1));
                  if (v22 != nullptr) {
                    v23 = v22;
                    v24 = game_Unit_GetJob((__int64)v22);
                    if (v24 != 0) {
                      v25 = v23[49];
                      if (v25 != 0) {
                        v26 = *(unsigned __int8*)(v25 + 441);
                        if (v26 == 3) {
                          if (*((unsigned __int8*)v23 + 2136) <= 1u) {
                            LOBYTE(v26) = 1;
                          }
                          else {
                            LOBYTE(v26) = *((_BYTE*)v23 + 2136);
                          }
                        }
                      }
                      else {
                        LOBYTE(v26) = 0;
                      }
                      LODWORD(v29_.v29) =
                          *(_DWORD*)((char*)((_UNKNOWN*)0x98LL) +
                                     (_QWORD)GameData_212da30);
                      GameRoutine_19a8d80(v21, v24, v26,
                                          (unsigned int*)&v29_.v29, 0, -1, 0, 0,
                                          0);
                    }
                  }
                }
                goto LABEL_50;
              }
              if (v20 != 0) {
              LABEL_50:
                if (atomic_fetch_add((atomic_ullong* volatile)(v20 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
                  (*(void (**)(__int64))(*(_QWORD*)v20 + 16LL))(v20);
                  std___1___shared_weak_count___release_weak_alt1(v20);
                }
              }
            }
          }
        }
      }
    LABEL_42:
      if (atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
        std___1___shared_weak_count___release_weak_alt1(v7);
      }
    }
  }
}

__int64 GmapUIDef_1654300(__int64 result, __int64 a2, char a3)
{
  __int64 v3;
  int v4;
  _BOOL4 v5;
  __int64 v6;
  int v7;
  unsigned int v8;
  int v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  int v15;
  __int64* v16;
  bool v17;
  unsigned __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64* v21;
  __int64 v22;
  __int64* v23;
  __int64* v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  int v28;
  _QWORD* v29;
  unsigned __int64 v30;
  __int64 v31;
  __int64 v32;
  _QWORD* v33;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  int v38;
  int v40;
  _DWORD* v41;

  *(_DWORD*)(result + 96) = 0;
  if (a2 == 0) {
    return result;
  }
  v3 = *(_QWORD*)(a2 + 96);
  if (v3 == 0) {
    *(_BYTE*)(result + 100) = 0;
    v10 = *(_QWORD*)(a2 + 96);
    if (v10 != 0) {
      v7 = *(unsigned __int8*)(v10 + 32);
      if ((unsigned int)(v7 - 3) < 2) {
        v8 = 0;
        v5 = false;
        v9 = 0;
        if ((a3 & 1) != 0) {
          goto LABEL_88;
        }
        goto LABEL_24;
      }
      goto LABEL_23;
    }
  LABEL_14:
    if (*(_QWORD*)(a2 + 552) == 0 || *(_QWORD*)(a2 + 104) != 0 ||
        (v9 = *(__int16*)(a2 + 642) * *(__int16*)(a2 + 640) *
              *(__int16*)(a2 + 644)) != 0) {
      v8 = 1;
      v5 = false;
      v9 = 0;
      *(_QWORD*)(result + 8) = a2;
      *(_DWORD*)result = 0;
      *(_DWORD*)(result + 96) = 1;
      if ((a3 & 1) != 0) {
        goto LABEL_88;
      }
    }
    else {
      v8 = 0;
      v5 = false;
      if ((a3 & 1) != 0) {
        goto LABEL_88;
      }
    }
    goto LABEL_24;
  }
  v4 = *(unsigned __int8*)(v3 + 32);
  v5 = v4 == 1;
  *(_BYTE*)(result + 100) = v5;
  v6 = *(_QWORD*)(a2 + 96);
  if (v6 == 0) {
    if (v4 == 1) {
      v8 = 0;
      v9 = 0;
      v5 = true;
      if ((a3 & 1) != 0) {
        goto LABEL_88;
      }
      goto LABEL_24;
    }
    goto LABEL_14;
  }
  v7 = *(unsigned __int8*)(v6 + 32);
  if ((unsigned int)(v7 - 3) < 2) {
  LABEL_5:
    v8 = 0;
    v9 = 0;
    if ((a3 & 1) != 0) {
      goto LABEL_88;
    }
    goto LABEL_24;
  }
  if (v4 == 1) {
    v5 = true;
    if (v7 == 1) {
      v9 = 0;
      *(_QWORD*)(result + 8) = a2;
      *(_DWORD*)result = 0;
      v8 = 1;
      *(_DWORD*)(result + 96) = 1;
      if ((a3 & 1) != 0) {
        goto LABEL_88;
      }
      goto LABEL_24;
    }
    goto LABEL_5;
  }
LABEL_23:
  v8 = 0;
  v5 = false;
  v9 = v7 == 2;
  if ((a3 & 1) != 0) {
    goto LABEL_88;
  }
LABEL_24:
  v11 = GameData_21c96e8;
  v12 = *(_QWORD*)(GameData_21c96e8 + 8);
  if (*(_BYTE*)(v12 + 60) != 1) {
    goto LABEL_34;
  }
  v13 = *(_QWORD*)(a2 + 96);
  v14 = *(_QWORD*)(a2 + 552);
  if (*(_BYTE*)(GameData_22416c0 + 54) != 1) {
    if ((v13 | v14) != 0 && *(_QWORD*)(a2 + 32) != *(_QWORD*)(a2 + 24) &&
        (v13 == 0 && v14 != 0 && *(_QWORD*)(a2 + 104) == 0 &&
             *(__int16*)(a2 + 642) * *(__int16*)(a2 + 640) *
                     *(__int16*)(a2 + 644) ==
                 0 &&
             *(_QWORD*)(v14 + 352) == 0 ||
         (*(_WORD*)(a2 + 544) & 3) != 2)) {
      goto LABEL_88;
    }
    goto LABEL_34;
  }
  if ((v13 | v14) != 0 || *(_DWORD*)(a2 + 84) != *(_DWORD*)(v12 + 56) ||
      *(_QWORD*)(a2 + 32) == *(_QWORD*)(a2 + 24)) {
  LABEL_34:
    v15 = *(_DWORD*)(a2 + 540);
    v16 = (__int64*)a2;
    v17 = __OFSUB__(v15, 1);
    v18 = (unsigned int)(v15 - 1);
    if (((v18 & 0x80000000) != 0LL) == v17) {
      v19 = *(_QWORD*)(a2 + 24);
      v20 = *(_QWORD*)(a2 + 32) - v19;
      v21 = (__int64*)(v19 + 8LL * (unsigned int)v18);
      if (v18 >= v20 >> 3) {
        v16 = (__int64*)a2;
      }
      else {
        v16 = v21;
      }
    }
    v22 = *v16;
    if (*v16 == 0) {
      goto LABEL_88;
    }
    v23 = *(__int64**)(v12 + 8);
    v24 = *(__int64**)(v12 + 16);
    if (v23 == v24) {
      goto LABEL_88;
    }
    v25 = GameData_22416c0;
    while (1) {
      v27 = *v23;
      v28 = *(_DWORD*)(*v23 + 540);
      v29 = (_QWORD*)*v23;
      v17 = __OFSUB__(v28, 1);
      v30 = (unsigned int)(v28 - 1);
      if (((v30 & 0x80000000) != 0LL) == v17) {
        v31 = *(_QWORD*)(v27 + 24);
        v32 = *(_QWORD*)(v27 + 32) - v31;
        v33 = (_QWORD*)(v31 + 8LL * (unsigned int)v30);
        if (v30 >= v32 >> 3) {
          v29 = (_QWORD*)*v23;
        }
        else {
          v29 = v33;
        }
      }
      if (v27 == a2 || *v29 != v22) {
        goto LABEL_42;
      }
      v35 = *(_QWORD*)(v11 + 8);
      if ((*(_BYTE*)(v35 + 60) & 1) == 0) {
        break;
      }
      v36 = *(_QWORD*)(v27 + 96);
      v37 = *(_QWORD*)(v27 + 552);
      if (*(_BYTE*)(v25 + 54) == 1) {
        if ((v36 | v37) != 0) {
          goto LABEL_59;
        }
        if (*(_DWORD*)(v27 + 84) == *(_DWORD*)(v35 + 56)) {
          if (*(_QWORD*)(v27 + 32) != *(_QWORD*)(v27 + 24) || v5) {
            goto LABEL_42;
          }
          goto LABEL_70;
        }
      }
      else if ((v36 | v37) != 0) {
        if (*(_QWORD*)(v27 + 32) != *(_QWORD*)(v27 + 24) &&
            (v36 == 0 && v37 != 0 && *(_QWORD*)(v27 + 104) == 0 &&
                 *(__int16*)(v27 + 642) * *(__int16*)(v27 + 640) *
                         *(__int16*)(v27 + 644) ==
                     0 &&
                 *(_QWORD*)(v37 + 352) == 0 ||
             (*(_WORD*)(v27 + 544) & 3) != 2)) {
          goto LABEL_42;
        }
      LABEL_59:
        if (v36 != 0) {
          v38 = *(unsigned __int8*)(v36 + 32);
          if ((unsigned int)(v38 - 3) < 2) {
            goto LABEL_42;
          }
          if (!v5) {
            v40 = v38 == 2;
          LABEL_80:
            v9 += v40;
            goto LABEL_42;
          }
          if (v38 != 1 || v8 > 5) {
            goto LABEL_42;
          }
          goto LABEL_41;
        }
      }
      if (!v5) {
      LABEL_70:
        if (*(_QWORD*)(v27 + 552) != 0 && *(_QWORD*)(v27 + 104) == 0 &&
            *(__int16*)(v27 + 642) * *(__int16*)(v27 + 640) *
                    *(__int16*)(v27 + 644) ==
                0) {
          v40 = 0;
          goto LABEL_80;
        }
        if (v8 > 5) {
          goto LABEL_42;
        }
      LABEL_41:
        v26 = result + 16LL * v8;
        *(_DWORD*)v26 = 0;
        *(_QWORD*)(v26 + 8) = v27;
        v8 = *(_DWORD*)(result + 96) + 1;
        *(_DWORD*)(result + 96) = v8;
      }
    LABEL_42:
      if (++v23 == v24) {
        goto LABEL_88;
      }
    }
    v36 = *(_QWORD*)(v27 + 96);
    goto LABEL_59;
  }
LABEL_88:
  if (v9 >= 1 && v8 <= 5) {
    v41 = (_DWORD*)(result + 16LL * v8);
    v41[2] = v9;
    *v41 = 1;
    ++*(_DWORD*)(result + 96);
  }
  return result;
}

__attribute__((swiftcall)) void GmapUIDef_1654700(PSEUDO_X8 x8_, __int64 a1)
{
  __int64* a2 = (__int64*)PSEUDO_X8_VALUE(x8_);
  __int64 v3;
  unsigned __int64 v4;
  unsigned __int64 v5;
  unsigned __int64 v7;
  unsigned __int64 v8;
  _QWORD* v9;
  _QWORD* v10;
  unsigned __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64* v14;
  __int64 v15;
  __int64 v16;
  unsigned __int64 v17;
  unsigned __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  unsigned int* v22;
  __int64 v23;
  int v24;
  int v25;
  unsigned __int64 v26;
  unsigned __int64 v27;
  __int64 v28;
  unsigned __int64 v29;
  __int64 v30;
  unsigned __int64 v31;
  __int64 v32;
  unsigned __int64 v33;
  unsigned __int64 v34;
  __int64 v35;
  __int64 v36;

  a2[1] = 0;
  a2[2] = 0;
  *a2 = 0;
  if ((*(_BYTE*)a1 & 1) != 0) {
    v3 = *(_QWORD*)(a1 + 16);
  }
  else {
    v3 = a1 + 1;
  }
  v4 = game_HashString_alt3(v3);
  if (v4 != 0) {
    v5 = *(_QWORD*)(GameData_21c9e48 + 96);
    if (v5 != 0 && *(_QWORD*)(GameData_21c9e48 + 112) != 0) {
      v7 = v5 - 1;
      if ((v5 & (v5 - 1)) != 0) {
        v8 = v4;
        if (v4 >= v5) {
          v8 = v4 % v5;
        }
      }
      else {
        v8 = v7 & v4;
      }
      v9 = *(_QWORD**)(*(_QWORD*)(GameData_21c9e48 + 88) + 8 * v8);
      if (v9 != nullptr) {
        v10 = (_QWORD*)*v9;
        if (v10 != nullptr) {
          if ((v5 & v7) == 0) {
            while (1) {
              v12 = v10[1];
              if (v12 == v4) {
                if (v10[2] == v4) {
                  goto LABEL_29;
                }
              }
              else if ((v12 & v7) != v8) {
                return;
              }
              v10 = (_QWORD*)*v10;
              if (v10 == nullptr) {
                return;
              }
            }
          }
          while (1) {
            v11 = v10[1];
            if (v11 == v4) {
              break;
            }
            if (v11 >= v5) {
              v11 %= v5;
            }
            if (v11 != v8) {
              return;
            }
          LABEL_18:
            v10 = (_QWORD*)*v10;
            if (v10 == nullptr) {
              return;
            }
          }
          if (v10[2] != v4) {
            goto LABEL_18;
          }
        LABEL_29:
          v13 = v10[3];
          if (v13 != 0) {
            v14 = *(__int64**)(v13 + 40);
            v15 = *v14;
            v16 = v14[1] - *v14;
            if ((int)((unsigned __int64)v16 >> 3) >= 1) {
              v17 = 0;
              v18 = 0;
              v19 = 0;
              while (1) {
                if (v18 >= v16 >> 3) {
                  *a2 = v19;
                  GameRoutine_1655af0_alt1();
                }
                v21 = *(_QWORD*)(v15 + 8 * v18);
                v22 = game_gmap_SpotMgr_FindSpot_alt2(
                    *(unsigned int**)(v21 + 40));
                v23 = (__int64)v22;
                if (game_GameModeData_instance_ != 0 &&
                    *(_BYTE*)(game_GameModeData_instance_ + 15) == 1 &&
                    (*(_BYTE*)(v21 + 67) & 1) != 0) {
                  v24 = 5;
                }
                else {
                  v24 = 4;
                  if (*((_BYTE*)v22 + 176) != 3 || (v22[28] & 1) != 0) {
                    goto LABEL_56;
                  }
                  if (GameRoutine_ae2330_alt1(v21)) {
                    if ((*(_BYTE*)(v23 + 178) & 4) == 0) {
                      if (game_GameModeData_instance_ != 0) {
                      LABEL_49:
                        v25 = *(_DWORD*)(game_GameModeData_instance_ + 72);
                      }
                      else {
                      LABEL_50:
                        v25 = 0;
                      }
                      if (v25 >= (int)GameRoutine_9db9e0_alt1(
                                     0x17u, *(unsigned __int16*)(v21 + 64))) {
                        if (Impl_13287c0_alt1(v23)) {
                          v24 = 0;
                        }
                        else {
                          v24 = 6;
                        }
                      }
                      else {
                        v24 = 1;
                      }
                      goto LABEL_56;
                    }
                    if (game_GameModeData_instance_ == 0) {
                      goto LABEL_50;
                    }
                    if (*(_DWORD*)(game_GameModeData_instance_ + 60) != 3) {
                      goto LABEL_49;
                    }
                    v24 = 2;
                  }
                  else {
                    v24 = 3;
                  }
                }
              LABEL_56:
                v26 = a2[2];
                if (v17 < v26) {
                  *(_QWORD*)v17 = v21;
                  *(_DWORD*)(v17 + 8) = v24;
                  v17 += 16LL;
                }
                else {
                  v27 = v17 - v19;
                  v28 = (__int64)(v17 - v19) >> 4;
                  v29 = v28 + 1;
                  if ((unsigned __int64)(v28 + 1) >> 60 != 0) {
                    *a2 = v19;
                    GameRoutine_1654c60_alt1();
                  }
                  v30 = v26 - v19;
                  if (v30 >> 3 > v29) {
                    v29 = v30 >> 3;
                  }
                  if ((unsigned __int64)v30 >= 0x7FFFFFFFFFFFFFF0LL) {
                    v31 = 0xFFFFFFFFFFFFFFFLL;
                  }
                  else {
                    v31 = v29;
                  }
                  if (v31 != 0) {
                    if (v31 >> 60 != 0) {
                      *a2 = v19;
                      GameRoutine_60a210_alt1();
                    }
                    v32 = fw_memory_HeapManager_Allocate_alt1(
                        *(_QWORD*)fw_memory_g_heap_manager_ptr, 16 * v31, 16,
                        0);
                  }
                  else {
                    v32 = 0;
                  }
                  v33 = v32 + v27;
                  v34 = v32 + 16 * v31;
                  *(_QWORD*)v33 = v21;
                  v35 = v32 + v27 - 16 * v28;
                  *(_DWORD*)(v33 + 8) = v24;
                  v17 = v32 + v27 + 16;
                  memcpy_alt1(v35, v19, v27);
                  a2[1] = v17;
                  a2[2] = v34;
                  if (v19 != 0) {
                    v36 = 128;
                    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                   200LL) == 0) {
                      v36 = 56;
                    }
                    nn_mem_StandardAllocator_Free_alt1(
                        *(_QWORD*)fw_memory_g_heap_manager_ptr + v36, v19);
                  }
                  v19 = v35;
                }
                v15 = *v14;
                v20 = v14[1];
                ++v18;
                a2[1] = v17;
                v16 = v20 - v15;
                if ((__int64)v18 >= (int)((unsigned __int64)v16 >> 3)) {
                  goto LABEL_73;
                }
              }
            }
            v19 = 0;
          LABEL_73:
            *a2 = v19;
          }
        }
      }
    }
  }
}

__int64 GmapUIDef_1654a80(__int64 a1, __int64 a2)
{
  __int64 v2;
  unsigned __int64 v3;
  unsigned __int64 v4;
  unsigned __int64 v6;
  unsigned __int64 v7;
  _QWORD* v8;
  _QWORD* v9;
  unsigned __int64 v10;
  unsigned int v11;
  __int64 v12;
  __int64 v13;
  __int64* v14;
  __int64 v15;
  __int64 v16;
  unsigned __int64 v17;
  int v18;
  int v19;
  __int64 v20;

  if ((*(_BYTE*)a1 & 1) != 0) {
    v2 = *(_QWORD*)(a1 + 16);
  }
  else {
    v2 = a1 + 1;
  }
  v3 = game_HashString_alt1(v2, a2);
  if (v3 == 0) {
    return 2;
  }
  v4 = *(_QWORD*)(GameData_21c9e48 + 96);
  if (v4 == 0 || *(_QWORD*)(GameData_21c9e48 + 112) == 0) {
    return 2;
  }
  v6 = v4 - 1;
  if ((v4 & (v4 - 1)) != 0) {
    v7 = v3;
    if (v3 >= v4) {
      v7 = v3 % v4;
    }
  }
  else {
    v7 = v6 & v3;
  }
  v8 = *(_QWORD**)(*(_QWORD*)(GameData_21c9e48 + 88) + 8 * v7);
  if (v8 == nullptr) {
    return 2;
  }
  v9 = (_QWORD*)*v8;
  if (v9 == nullptr) {
    return 2;
  }
  if ((v4 & v6) == 0) {
    while (1) {
      v12 = v9[1];
      if (v12 == v3) {
        if (v9[2] == v3) {
          goto LABEL_29;
        }
      }
      else if ((v12 & v6) != v7) {
        return 2;
      }
      v9 = (_QWORD*)*v9;
      v11 = 2;
      if (v9 == nullptr) {
        return v11;
      }
    }
  }
  while (1) {
    v10 = v9[1];
    if (v10 == v3) {
      break;
    }
    if (v10 >= v4) {
      v10 %= v4;
    }
    if (v10 != v7) {
      return 2;
    }
  LABEL_18:
    v9 = (_QWORD*)*v9;
    if (v9 == nullptr) {
      return 2;
    }
  }
  if (v9[2] != v3) {
    goto LABEL_18;
  }
LABEL_29:
  v13 = v9[3];
  if (v13 == 0) {
    return 2;
  }
  v14 = *(__int64**)(v13 + 40);
  v15 = *v14;
  v16 = v14[1] - *v14;
  if ((int)((unsigned __int64)v16 >> 3) < 1) {
    return 2;
  }
  v17 = 0;
  LOBYTE(v18) = 1;
  v19 = 1;
  do {
    if (v17 >= v16 >> 3) {
      GameRoutine_1655af0();
    }
    v20 = *(_QWORD*)(v15 + 8 * v17);
    if (game_GameModeData_instance_ == 0 ||
        *(_BYTE*)(game_GameModeData_instance_ + 15) != 1 ||
        (*(_BYTE*)(v20 + 67) & 1) == 0) {
      v19 = 0;
    }
    if ((v18 & 1) != 0) {
      v18 = GameRoutine_ae2330(v20) ^ 1;
    }
    else {
      v18 = 0;
    }
    if (((v19 | v18) & 1) == 0) {
      return 0;
    }
    v15 = *v14;
    ++v17;
    v16 = v14[1] - *v14;
  } while ((__int64)v17 < (int)((unsigned __int64)v16 >> 3));
  v11 = v18 & 1;
  if ((v19 & 1) != 0) {
    return 2;
  }
  return v11;
}

__int64 game_gmap_GmapUIDef_SetQuestIcon_lambda2_Invoke(__int64 a1, _QWORD* a2)
{
  __int64 result;
  __int64 v4;
  __int64 v5;
  __int64 v6;

  *((_DWORD*)a2 + 4) = 1;
  if (*((_DWORD*)a2 + 2) == 0) {
    LayoutAccessor_1562cf0(*a2, "MainQuest");
  }
  result = ui_LayoutAccessor_FindPane(*a2, "IconQuest");
  if (result != 0) {
    result =
        __dynamic_cast(result, GameData_212d670[0], GameData_212d678[0], 0);
    if (result != 0) {
      v4 = *((unsigned int*)a2 + 2);
      v5 = result;
      if ((unsigned int)v4 > 3) {
        v6 = game_util_Format(&GameData_1a9f09e, "Main_Unknown");
      }
      else {
        v6 = game_util_Format(GameData_2075cf8[v4], "Main_Unknown");
      }
      return GameRoutine_136ad70(ui_Manager_instance_ + 1264, v5, 0, 7, v6);
    }
  }
  return result;
}

__int64 game_gmap_GmapUIDef_SetQuestIcon_lambda3_Invoke(__int64 a1, _QWORD* a2)
{
  __int64 result;
  __int64 v4;
  __int64 v5;
  __int64 v6;

  *((_DWORD*)a2 + 4) = 1;
  if (*((_DWORD*)a2 + 2) == 0) {
    LayoutAccessor_1562cf0(*a2, "MainQuest");
  }
  result = ui_LayoutAccessor_FindPane(*a2, "IconQuest");
  if (result != 0) {
    result =
        __dynamic_cast(result, GameData_212d670[0], GameData_212d678[0], 0);
    if (result != 0) {
      v4 = *((unsigned int*)a2 + 2);
      v5 = result;
      if ((unsigned int)v4 > 3) {
        v6 = game_util_Format(&GameData_1a9f09e, "Main");
      }
      else {
        v6 = game_util_Format(GameData_2075cf8[v4], "Main");
      }
      return GameRoutine_136a920(ui_Manager_instance_ + 1264, v5, 0, 7, v6);
    }
  }
  return result;
}

__int64 game_gmap_GmapUIDef_SetQuestIcon_lambda4_Invoke(__int64 a1, _QWORD* a2)
{
  __int64 result;
  __int64 v4;
  __int64 v5;
  __int64 v6;

  *((_DWORD*)a2 + 4) = 1;
  if (*((_DWORD*)a2 + 2) == 0) {
    LayoutAccessor_1562cf0(*a2, "Default");
  }
  result = ui_LayoutAccessor_FindPane(*a2, "IconQuest");
  if (result != 0) {
    result =
        __dynamic_cast(result, GameData_212d670[0], GameData_212d678[0], 0);
    if (result != 0) {
      v4 = *((unsigned int*)a2 + 2);
      v5 = result;
      if ((unsigned int)v4 > 3) {
        v6 = game_util_Format(&GameData_1a9f09e, "SideStory");
      }
      else {
        v6 = game_util_Format(GameData_2075cf8[v4], "SideStory");
      }
      return GameRoutine_136a920(ui_Manager_instance_ + 1264, v5, 0, 7, v6);
    }
  }
  return result;
}

__int64 game_gmap_GmapUIDef_SetQuestIcon_lambda5_Invoke(__int64 a1, _QWORD* a2)
{
  __int64 result;
  __int64 v4;
  __int64 v5;
  __int64 v6;

  *((_DWORD*)a2 + 4) = 1;
  if (*((_DWORD*)a2 + 2) == 0) {
    LayoutAccessor_1562cf0(*a2, "Default");
  }
  result = ui_LayoutAccessor_FindPane(*a2, "IconQuest");
  if (result != 0) {
    result =
        __dynamic_cast(result, GameData_212d670[0], GameData_212d678[0], 0);
    if (result != 0) {
      v4 = *((unsigned int*)a2 + 2);
      v5 = result;
      if ((unsigned int)v4 > 3) {
        v6 = game_util_Format(&GameData_1a9f09e, "Sub_Show");
      }
      else {
        v6 = game_util_Format(GameData_2075cf8[v4], "Sub_Show");
      }
      return GameRoutine_136a920(ui_Manager_instance_ + 1264, v5, 0, 7, v6);
    }
  }
  return result;
}

__int64 game_gmap_GmapUIDef_SetQuestIcon_lambda6_Invoke(__int64 a1, _QWORD* a2)
{
  __int64 result;
  __int64 v4;
  __int64 v5;
  __int64 v6;

  *((_DWORD*)a2 + 4) = 1;
  if (*((_DWORD*)a2 + 2) == 0) {
    LayoutAccessor_1562cf0(*a2, "Default");
  }
  result = ui_LayoutAccessor_FindPane(*a2, "IconQuest");
  if (result != 0) {
    result =
        __dynamic_cast(result, GameData_212d670[0], GameData_212d678[0], 0);
    if (result != 0) {
      v4 = *((unsigned int*)a2 + 2);
      v5 = result;
      if ((unsigned int)v4 > 3) {
        v6 = game_util_Format(&GameData_1a9f09e, "Sub_Challenge");
      }
      else {
        v6 = game_util_Format(GameData_2075cf8[v4], "Sub_Challenge");
      }
      return GameRoutine_136a920(ui_Manager_instance_ + 1264, v5, 0, 7, v6);
    }
  }
  return result;
}

__int64 game_gmap_GmapUIDef_SetQuestIcon_lambda7_Invoke(__int64 a1, _QWORD* a2)
{
  __int64 result;
  __int64 v4;
  __int64 v5;
  __int64 v6;

  *((_DWORD*)a2 + 4) = 1;
  if (*((_DWORD*)a2 + 2) == 0) {
    LayoutAccessor_1562cf0(*a2, "Default");
  }
  result = ui_LayoutAccessor_FindPane(*a2, "IconQuest");
  if (result != 0) {
    result =
        __dynamic_cast(result, GameData_212d670[0], GameData_212d678[0], 0);
    if (result != 0) {
      v4 = *((unsigned int*)a2 + 2);
      v5 = result;
      if ((unsigned int)v4 > 3) {
        v6 = game_util_Format(&GameData_1a9f09e, "Sub_Unknown");
      }
      else {
        v6 = game_util_Format(GameData_2075cf8[v4], "Sub_Unknown");
      }
      return GameRoutine_136ad70(ui_Manager_instance_ + 1264, v5, 0, 7, v6);
    }
  }
  return result;
}

__int64 game_gmap_GmapUIDef_SetQuestIcon_lambda8_Invoke(__int64 a1, _QWORD* a2)
{
  __int64 result;
  __int64 v4;
  __int64 v5;
  __int64 v6;

  *((_DWORD*)a2 + 4) = 1;
  if (*((_DWORD*)a2 + 2) == 0) {
    LayoutAccessor_1562cf0(*a2, "Default");
  }
  result = ui_LayoutAccessor_FindPane(*a2, "IconQuest");
  if (result != 0) {
    result =
        __dynamic_cast(result, GameData_212d670[0], GameData_212d678[0], 0);
    if (result != 0) {
      v4 = *((unsigned int*)a2 + 2);
      v5 = result;
      if ((unsigned int)v4 > 3) {
        v6 = game_util_Format(&GameData_1a9f09e, "Sub_Dest");
      }
      else {
        v6 = game_util_Format(GameData_2075cf8[v4], "Sub_Dest");
      }
      return GameRoutine_136a920(ui_Manager_instance_ + 1264, v5, 0, 7, v6);
    }
  }
  return result;
}

__int64 game_gmap_GmapUIDef_SetQuestIcon_lambda9_Invoke(__int64 a1, _QWORD* a2)
{
  __int64 result;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  unsigned __int64 v8;
  __int64 v9;
  char* v10;

  *((_DWORD*)a2 + 4) = 1;
  if (*((_DWORD*)a2 + 2) == 0) {
    LayoutAccessor_1562cf0(*a2, "Default");
  }
  result = ui_LayoutAccessor_FindPane(*a2, "IconQuest");
  if (result != 0) {
    result =
        __dynamic_cast(result, GameData_212d670[0], GameData_212d678[0], 0);
    if (result != 0) {
      v5 = *((unsigned int*)a2 + 2);
      v6 = result;
      if ((unsigned int)v5 > 3) {
        v7 = game_util_Format(&GameData_1a9f09e, "Sub");
      }
      else {
        v7 = game_util_Format(GameData_2075cf8[v5], "Sub");
      }
      result = GameRoutine_136a920(ui_Manager_instance_ + 1264, v6, 0, 7, v7);
    }
  }
  v8 = *(unsigned __int8*)(a1 + 8);
  if (v8 <= 3) {
    v9 = *a2;
    v10 = GameData_2075d18[v8];
    *((_DWORD*)a2 + 4) = 1;
    LayoutAccessor_1562cf0(v9, v10);
    result = LayoutAccessor_1562cf0(*a2, "Enable");
    *((_BYTE*)a2 + 20) = 1;
  }
  return result;
}

#pragma GCC visibility pop
