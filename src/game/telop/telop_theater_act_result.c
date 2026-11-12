#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_156c5d0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_17356e0(_QWORD*, __int64);
__int64 GameRoutine_1760e40(__int64, unsigned int);
__int64 GameRoutine_17618b0(__int64);
__int64 GameRoutine_1762890(__int64, unsigned int);
__int64 GameRoutine_1763740(__int64, __int64**, char);
__int64 GameRoutine_1763ac0(__int64, signed int, unsigned int);
__int64 GameRoutine_1763e20(__int64, _QWORD*, __int64, __int64, __int64);
__int64 GameRoutine_190a0c0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_a4dbe0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_a51e10(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_GameVariableTable_Find(_QWORD, _QWORD);
__int64 game_HashString(_QWORD);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
__int64 ui_LayoutAccessor_FindTextBox(_QWORD, _QWORD);
extern _UNKNOWN GameData_1afed0f;
extern __int64 GameData_21f8118;
extern __int64 GameData_21f8120;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_GameModeData_instance_;
extern __int64* GameData_212e348;
extern __int64* msg_MessageManager_instance__ptr[2];
extern int GameData_21f8110;
extern int GameData_21f8130;
void GameRoutine_1763c20(__int64, __int64**);
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
void __attribute__((noreturn)) GameRoutine_688200(_QWORD);
void __attribute__((noreturn)) GameRoutine_6c1f60(_QWORD);
void __attribute__((noreturn)) GameRoutine_740050(_QWORD);
__int64 TelopTheaterActResult_Unknown57_alt1(__int64 a1) __asm__(
    "TelopTheaterActResult_Unknown57");
__int64* GameRoutine_1760e40_alt1(__int64,
                                  unsigned int) __asm__("GameRoutine_1760e40");
__int64* GameRoutine_17618b0_alt1(__int64) __asm__("GameRoutine_17618b0");
__int64 GameRoutine_17356e0_alt1(__int64*,
                                 __int64) __asm__("GameRoutine_17356e0");
__int64 GameRoutine_1763740_alt1(_QWORD*, __int64**,
                                 char) __asm__("GameRoutine_1763740");
__int64 TelopResult_1762890(__int64, unsigned int);
__int64 TelopResult_1763ac0(__int64, signed int, unsigned int);
__int64 fw_memory_HeapManager_Allocate_alt1(
    __int64, __int64, __int64,
    unsigned int) __asm__("fw_memory_HeapManager_Allocate");
__int64 game_GameVariableTable_Find_alt1(_QWORD*, unsigned __int64*) __asm__(
    "game_GameVariableTable_Find");
__int64 game_HashString_alt1(__int64 result) __asm__("game_HashString");
__int64 game_telop_1763c20(__int64*, __int64**);
__int64 memcpy_alt1(__int64, __int64, unsigned __int64) __asm__("memcpy");
__int64 ui_LayoutAccessor_FindTextBox_alt1(__int64*, __int64) __asm__(
    "ui_LayoutAccessor_FindTextBox");
char* GameRoutine_a4dbe0_alt1(__int64, _BYTE*,
                              char) __asm__("GameRoutine_a4dbe0");
void GameHr_a51e10(__int64, unsigned int, unsigned int, int);
void GameRoutine_156c5d0_alt1(__int64, __int64,
                              char) __asm__("GameRoutine_156c5d0");
void GameRoutine_1763e20_alt1(__int64*, _QWORD*, __int64, __int64,
                              const char*) __asm__("GameRoutine_1763e20");
void GameRoutine_190a0c0_alt1(float*, __int64, float*, _QWORD*,
                              __int64) __asm__("GameRoutine_190a0c0");
void __attribute__((noreturn))
GameRoutine_60a210_alt1() __asm__("GameRoutine_60a210");
void __attribute__((noreturn))
GameRoutine_688200_alt1() __asm__("GameRoutine_688200");
void __attribute__((noreturn))
GameRoutine_6c1f60_alt1() __asm__("GameRoutine_6c1f60");
void __attribute__((noreturn))
GameRoutine_740050_alt1() __asm__("GameRoutine_740050");
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void TelopTheaterActResult_Unknown57(__int64 a1);

void TelopTheaterActResult_Unknown57(__int64 a1)
{

#pragma clang fp contract(off)
  __int64* v1;
  _QWORD* v2;
  __int64 v3;
  int v4;
  unsigned __int64 v5;
  unsigned __int64 v6;
  __int64* v7;
  int v8;
  __int64 v9;
  int v10;
  __int64 v11;
  __int64* v12;
  char* v13;
  __int64 v14;
  char* v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  unsigned __int64 v20;
  char* v21;
  __int64* v22;
  unsigned __int64 v23;
  _QWORD* v24;
  __int64 v25;
  unsigned __int64 v26;
  __int64 v27;
  unsigned __int64 v28;
  unsigned __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  unsigned __int64 v37;
  __int64 v38;
  unsigned __int64 v39;
  unsigned __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  unsigned __int64 v45;
  __int64 v46;
  __int64* v47;
  __int64* v48;
  char* v49;
  __int64 v50;
  __int64 v51;
  __int64 v52;
  __int64* v53;
  char* v54;
  __int64 v55;
  char* v56;
  __int64* v57;
  __int64* v58;
  __int64 v59;
  __int64 v60;
  __int64 v61;
  _QWORD* v62;
  int v63;
  int v64;
  char v65;
  __int64* v66;
  __int64* v67;
  __int64 v68;
  __int64 v69;
  __int64 v70;
  unsigned int v71;
  int v72;
  int* v73;
  int v74;
  bool v75;
  unsigned __int64 v76;
  signed int v77;
  __int64 v78;
  int* v79;
  unsigned __int64 v80;
  int v81;
  int v82;
  signed int v83;
  int* v84;
  __int64 v85;
  int* v86;
  signed int v87;
  unsigned __int64 v88;
  signed int v89;
  __int64 v90;
  __int64 v91;
  unsigned __int64 v92;
  __int64 v93;
  __int64* v94;
  char* v95;
  __int64 v96;
  __int64 v97;
  __int64* v98;
  _QWORD* v99;
  __int64 v100;
  __int64 v101;
  struct {
    __int64* v102;
    char* v103;
    char* v104;
  } v102_;
  struct {
    __int64* v105;
    void* v106;
    unsigned __int64 v107;
    unsigned __int64 v108;
    int v109;
    int v110;
    __int64 v111;
    __int64 v112;
    __int64 v113;
    __int64 v114;
    __int64 v115;
    __int64 v116;
    __int64 v117;
    __int64 v118;
    __int64 v119;
    __int64 v120;
    __int64 v121;
    __int64 v122;
    __int64 v123;
  } v105_;
  float v124;
  _DWORD v125[4];

  v1 = *(__int64**)(a1 + 1168);
  v2 = (_QWORD*)a1;
  v3 = v1[8];
  if (v3 == 0) {
    goto LABEL_117;
  }
  if (*(_WORD*)(v3 + 32) != 0) {
    TelopResult_1762890(a1, *(unsigned __int16*)(v3 + 32));
    v1 = (__int64*)v2[146];
    v3 = v1[8];
  }
  v4 = *(unsigned __int16*)(v3 + 36);
  if (*(_WORD*)(v3 + 36) != 0) {
    v5 = v1[1] - *v1;
    v6 = v5 >> 3;
    if ((int)(v5 >> 3) > 3) {
      v105_.v106 = &GameData_1afed0f;
      v105_.v105 = (__int64*)game_HashString_alt1((__int64)&GameData_1afed0f);
      v10 = game_GameModeData_instance_;
      if (game_GameModeData_instance_ != 0) {
        v11 = game_GameVariableTable_Find_alt1(
            *(_QWORD**)(game_GameModeData_instance_ + 48),
            (unsigned __int64*)&v105_.v105);
        if (v11 != 0) {
          v10 = *(_DWORD*)(v11 + 32);
        }
        else {
          v10 = 0;
        }
      }
      v75 = v10 <= v4;
      v53 = msg_MessageManager_instance__ptr[0];
      if (v75) {
        v54 = "MID_Sys_Result_Msg_Reliance_EXP_Up_Big";
      }
      else {
        v54 = "MID_Sys_Result_Msg_Reliance_EXP_Up";
      }
      GameHr_a51e10(*msg_MessageManager_instance__ptr[0] + 14704, 0, v6, 0);
      v55 = *v53;
      v105_.v111 = -1;
      v105_.v112 = -1;
      v105_.v113 = -1;
      v105_.v114 = -1;
      v105_.v115 = -1;
      v105_.v116 = -1;
      v105_.v117 = -1;
      v105_.v118 = -1;
      v105_.v119 = -1;
      v105_.v120 = -1;
      v105_.v121 = -1;
      v105_.v122 = -1;
      v105_.v105 = GameData_212e348 + 2;
      v105_.v106 = (void*)0xFFFF0001FFFF0000LL;
      v105_.v107 = 0xFFFF0004FFFF0002LL;
      v105_.v108 = 0xFFFF0006FFFF0005LL;
      v105_.v123 = 8;
      v105_.v109 = -65529;
      v105_.v110 = -65528;
      v56 = GameRoutine_a4dbe0_alt1(v55, v54, 0);
      v57 = GameRoutine_1760e40_alt1((__int64)v2, 0);
      v58 = v57;
      if (v56 != nullptr) {
        v59 = ui_LayoutAccessor_FindTextBox_alt1(v57, (__int64)"L_Txt/T_Txt");
        if (v59 != 0) {
          GameRoutine_156c5d0_alt1(v59, (__int64)v56, 0);
        }
      }
      v60 = ui_LayoutAccessor_FindTextBox_alt1(v58, (__int64)"L_Txt/T_Txt");
      if (v60 != 0) {
        v61 = v60;
        v62 = (_QWORD*)ui_LayoutAccessor_FindTextBox_alt1(
            v58, (__int64)"L_Txt/T_Txt");
        if (v62 != nullptr) {
          GameRoutine_190a0c0_alt1((float*)&v105_.v105, (__int64)v125, &v124,
                                   v62, v62[27]);
          v63 = v125[0];
          v64 = v125[1];
        }
        else {
          v63 = 0;
          v64 = 0;
        }
        v65 = *(_BYTE*)(v61 + 88);
        *(_DWORD*)(v61 + 80) = v63;
        *(_DWORD*)(v61 + 84) = v64;
        *(_BYTE*)(v61 + 88) = v65 | 0x10;
      }
      GameRoutine_17356e0_alt1(v58, (__int64)"L_Txt");
      goto LABEL_88;
    }
    v7 = GameRoutine_1760e40_alt1((__int64)v2, 0x12u);
    v105_.v106 = &GameData_1afed0f;
    v105_.v105 = (__int64*)game_HashString_alt1((__int64)&GameData_1afed0f);
    v8 = game_GameModeData_instance_;
    if (game_GameModeData_instance_ != 0) {
      v9 = game_GameVariableTable_Find_alt1(
          *(_QWORD**)(game_GameModeData_instance_ + 48),
          (unsigned __int64*)&v105_.v105);
      if (v9 != 0) {
        v8 = *(_DWORD*)(v9 + 32);
      }
      else {
        v8 = 0;
      }
    }
    v75 = v8 <= v4;
    v12 = msg_MessageManager_instance__ptr[0];
    if (v75) {
      v13 = "MID_Sys_Result_Msg_Reliance_EXP_Up_Big";
    }
    else {
      v13 = "MID_Sys_Result_Msg_Reliance_EXP_Up";
    }
    GameHr_a51e10(*msg_MessageManager_instance__ptr[0] + 14704, 0, v6, 0);
    v14 = *v12;
    v105_.v111 = -1;
    v105_.v112 = -1;
    v105_.v113 = -1;
    v105_.v114 = -1;
    v105_.v115 = -1;
    v105_.v116 = -1;
    v105_.v117 = -1;
    v105_.v118 = -1;
    v105_.v119 = -1;
    v105_.v120 = -1;
    v105_.v121 = -1;
    v105_.v122 = -1;
    v105_.v105 = GameData_212e348 + 2;
    v105_.v106 = (void*)0xFFFF0001FFFF0000LL;
    v105_.v107 = 0xFFFF0004FFFF0002LL;
    v105_.v108 = 0xFFFF0006FFFF0005LL;
    v105_.v123 = 8;
    v105_.v109 = -65529;
    v105_.v110 = -65528;
    v15 = GameRoutine_a4dbe0_alt1(v14, v13, 0);
    if (v15 != nullptr) {
      v16 = (__int64)v15;
      v17 = ui_LayoutAccessor_FindTextBox_alt1(v7, (__int64)"T_Txt");
      if (v17 != 0) {
        GameRoutine_156c5d0_alt1(v17, v16, 0);
      }
    }
    if ((int)v6 <= 0) {
      v46 = 0;
      v21 = nullptr;
      v22 = nullptr;
      v105_.v106 = nullptr;
      v105_.v107 = 0;
      v105_.v105 = nullptr;
    }
    else {
      v98 = v7;
      v99 = v2;
      v18 = 0;
      v19 = 0;
      v20 = 0;
      v21 = nullptr;
      v22 = nullptr;
      v23 = 0;
      v24 = nullptr;
      v101 = (v5 >> 3) & 0x7FFFFFFF;
      do {
        v25 = *v1;
        if ((unsigned __int64)v24 >= v23) {
          v26 = (unsigned __int64)v24 - v19;
          v27 = ((__int64)v24 - v19) >> 3;
          v28 = v27 + 1;
          if ((unsigned __int64)(v27 + 1) >> 61 != 0) {
            goto LABEL_124;
          }
          if ((__int64)(v23 - v19) >> 2 > v28) {
            v28 = (__int64)(v23 - v19) >> 2;
          }
          if (v23 - v19 >= 0x7FFFFFFFFFFFFFF8LL) {
            v29 = 0x1FFFFFFFFFFFFFFFLL;
          }
          else {
            v29 = v28;
          }
          if (v29 != 0) {
            if (v29 >> 61 != 0) {
              goto LABEL_123;
            }
            v30 = v19;
            v31 = fw_memory_HeapManager_Allocate_alt1(
                *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v29, 16, 0);
            v19 = v30;
          }
          else {
            v31 = 0;
          }
          v32 = *(_QWORD*)(v25 + 8 * v18);
          v23 = v31 + 8 * v29;
          v33 = v19;
          v34 = v31 + v26 - 8 * v27;
          *(_QWORD*)(v31 + v26) = v32;
          v24 = (_QWORD*)(v31 + v26 + 8);
          memcpy_alt1(v34, v19, v26);
          if (v33 != 0) {
            v35 = 128;
            if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                0) {
              v35 = 56;
            }
            nn_mem_StandardAllocator_Free_alt1(
                *(_QWORD*)fw_memory_g_heap_manager_ptr + v35, v33);
          }
          v19 = v34;
        }
        else {
          *v24++ = *(_QWORD*)(v25 + 8 * v18);
        }
        v36 = *(_QWORD*)(*(_QWORD*)(*v1 + 8 * v18) + 392LL);
        if ((unsigned __int64)v21 < v20) {
          *(_QWORD*)v21 = v36;
          v21 += 8;
        }
        else {
          v37 = v21 - (char*)v22;
          v38 = (v21 - (char*)v22) >> 3;
          v39 = v38 + 1;
          if ((unsigned __int64)(v38 + 1) >> 61 != 0) {
            GameRoutine_688200_alt1();
          }
          v100 = (__int64)v22;
          if ((__int64)(v20 - (_QWORD)v22) >> 2 > v39) {
            v39 = (__int64)(v20 - (_QWORD)v22) >> 2;
          }
          if (v20 - (unsigned __int64)v22 >= 0x7FFFFFFFFFFFFFF8LL) {
            v40 = 0x1FFFFFFFFFFFFFFFLL;
          }
          else {
            v40 = v39;
          }
          if (v40 != 0) {
            if (v40 >> 61 != 0) {
            LABEL_123:
              GameRoutine_60a210_alt1();
            }
            v41 = v19;
            v42 = fw_memory_HeapManager_Allocate_alt1(
                *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v40, 16, 0);
          }
          else {
            v41 = v19;
            v42 = 0;
          }
          v20 = v42 + 8 * v40;
          v43 = v42 + v37 - 8 * v38;
          *(_QWORD*)(v42 + v37) = v36;
          v21 = (char*)(v42 + v37 + 8);
          memcpy_alt1(v43, v100, v37);
          if (v100 != 0) {
            v44 = 128;
            if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                0) {
              v44 = 56;
            }
            nn_mem_StandardAllocator_Free_alt1(
                *(_QWORD*)fw_memory_g_heap_manager_ptr + v44, v100);
          }
          v19 = v41;
          v22 = (__int64*)v43;
        }
        ++v18;
      } while (v101 != v18);
      v2 = v99;
      v45 = (unsigned __int64)v24 - v19;
      v105_.v106 = nullptr;
      v105_.v107 = 0;
      v105_.v105 = nullptr;
      if (v24 != (_QWORD*)v19) {
        if ((v45 & 0x8000000000000000LL) != 0) {
        LABEL_124:
          GameRoutine_740050_alt1();
        }
        v46 = v19;
        v47 = (__int64*)fw_memory_g_heap_manager_ptr;
        v48 = (__int64*)fw_memory_HeapManager_Allocate_alt1(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, v45, 16, 0);
        v49 = (char*)v48 + v45;
        v50 = (__int64)v48;
        v105_.v105 = v48;
        v105_.v106 = v48;
        v105_.v107 = (unsigned __int64)v48 + v45;
        memcpy_alt1((__int64)v48, v46, v45);
        v105_.v106 = v49;
        game_telop_1763c20(v98, &v105_.v105);
        v51 = *v47;
        v105_.v106 = (void*)v50;
        v52 = 128;
        if (*(_QWORD*)(v51 + 200) == 0) {
          v52 = 56;
        }
        nn_mem_StandardAllocator_Free_alt1(v51 + v52, v50);
      LABEL_77:
        v66 = GameRoutine_17618b0_alt1((__int64)v2);
        if ((unsigned __int64)(v21 - (char*)v22) < 9) {
          if (v22 == nullptr) {
          LABEL_84:
            if (v46 != 0) {
              v69 = 128;
              if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                  0) {
                v69 = 56;
              }
              nn_mem_StandardAllocator_Free_alt1(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr + v69, v46);
            }
            goto LABEL_88;
          }
        }
        else {
          v67 = v66;
          GameRoutine_1763e20_alt1(v66, v2, *v22, v22[1], "L_RelianceAB");
          if (v21 - (char*)v22 == 24) {
            GameRoutine_1763e20_alt1(v67, v2, *v22, v22[2], "L_RelianceAC");
            GameRoutine_1763e20_alt1(v67, v2, v22[1], v22[2], "L_RelianceBC");
          }
        }
        v68 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v68 = 56;
        }
        nn_mem_StandardAllocator_Free_alt1(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v68, (__int64)v22);
        goto LABEL_84;
      }
      v7 = v98;
      v46 = v19;
    }
    game_telop_1763c20(v7, &v105_.v105);
    goto LABEL_77;
  }
LABEL_88:
  v1 = (__int64*)v2[146];
  v70 = v1[8];
  v71 = *(unsigned __int16*)(v70 + 34);
  if (*(_WORD*)(v70 + 34) != 0) {
    if (game_GameModeData_instance_ != 0) {
      v72 = *(_DWORD*)(game_GameModeData_instance_ + 60);
      v73 = &GameData_21f8110;
      if (v72 == 2) {
        v76 = (unsigned __int64)(GameData_21f8120 - GameData_21f8118) >> 2;
      }
      else if (v72 == 3) {
        v74 = *(_DWORD*)(game_GameModeData_instance_ + 64);
        v75 = v74 <= 1;
        if (v74 <= 1) {
          LODWORD(v76) = 1;
        }
        else {
          LODWORD(v76) =
              (unsigned __int64)(GameData_21f8120 - GameData_21f8118) >> 2;
        }
        if (!v75) {
          v73 = &GameData_21f8130;
        }
      }
      else {
        LODWORD(v76) = 1;
      }
      v79 = v73 + 2;
      v78 = *((_QWORD*)v73 + 1);
      v80 = (unsigned __int64)(*((_QWORD*)v79 + 1) - v78) >> 2;
      if ((int)v76 < (int)v80) {
        LODWORD(v80) = v76;
      }
      v81 = v80 - 1;
      if ((int)v76 <= 0) {
        v82 = 0;
      }
      else {
        v82 = v81;
      }
      v83 = *(_DWORD*)(v78 + 4LL * v82);
      v84 = &GameData_21f8110;
      if (v72 == 3 && *(int*)(game_GameModeData_instance_ + 64) > 1) {
        v84 = &GameData_21f8130;
      }
      v86 = v84 + 2;
      v85 = *((_QWORD*)v84 + 1);
      v87 = *(_DWORD*)(game_GameModeData_instance_ + 76);
      v88 = (unsigned __int64)(*((_QWORD*)v86 + 1) - v85) >> 2;
      if ((int)v88 <= 1) {
        LODWORD(v88) = 1;
      }
      v89 = *(_DWORD*)(v85 + 4LL * (unsigned int)v88 - 4);
      if (v89 >= v87) {
        v89 = *(_DWORD*)(game_GameModeData_instance_ + 76);
      }
      if (v87 >= v83) {
        v77 = v89;
      }
      else {
        v77 = v83;
      }
    }
    else {
      v77 = 0;
    }
    TelopResult_1763ac0((__int64)v2, v77, v71);
    v1 = (__int64*)v2[146];
  }
LABEL_117:
  v91 = *v1;
  v90 = v1[1];
  v102_.v103 = nullptr;
  v102_.v104 = nullptr;
  v92 = v90 - v91;
  v102_.v102 = nullptr;
  if (v90 == v91) {
    GameRoutine_1763740_alt1(v2, &v102_.v102, 1);
  }
  else {
    if ((v92 & 0x8000000000000000LL) != 0) {
      GameRoutine_6c1f60_alt1();
    }
    v93 = fw_memory_g_heap_manager_ptr;
    v94 = (__int64*)fw_memory_HeapManager_Allocate_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, v90 - v91, 16, 0);
    v95 = (char*)v94 + v92;
    v96 = (__int64)v94;
    v102_.v102 = v94;
    v102_.v104 = (char*)v94 + v92;
    memcpy_alt1((__int64)v94, v91, v92);
    v102_.v103 = v95;
    GameRoutine_1763740_alt1(v2, &v102_.v102, 1);
    v97 = 128;
    if (*(_QWORD*)(*(_QWORD*)v93 + 200LL) == 0) {
      v97 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v93 + v97, v96);
  }
}

#pragma GCC visibility pop
