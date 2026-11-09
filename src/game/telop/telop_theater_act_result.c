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
__int64 TelopTheaterActResult_Unknown57(__int64 a1);

__int64 TelopTheaterActResult_Unknown57(__int64 a1)
{
  __int64* v1;
  _QWORD* v2;
  __int64 v3;
  int v4;
  unsigned __int64 v5;
  unsigned __int64 v6;
  __int64 v7;
  int v8;
  __int64 v9;
  int v10;
  __int64 v11;
  __int64* v12;
  const char* v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  char* v18;
  unsigned __int64 v19;
  char* v20;
  __int64* v21;
  unsigned __int64 v22;
  char* v23;
  __int64 v24;
  char* v25;
  __int64 v26;
  unsigned __int64 v27;
  unsigned __int64 v28;
  char* v29;
  __int64 v30;
  __int64 v31;
  char* v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  signed __int64 v36;
  __int64 v37;
  unsigned __int64 v38;
  unsigned __int64 v39;
  char* v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  signed __int64 v44;
  char* v45;
  __int64* v46;
  __int64* v47;
  __int64* v48;
  __int64* v49;
  __int64 v50;
  __int64 v51;
  __int64* v52;
  const char* v53;
  __int64 v54;
  __int64 v55;
  __int64 v56;
  _QWORD* v57;
  __int64 v58;
  __int64 v59;
  __int64 v60;
  __int64 v61;
  int v62;
  int v63;
  char v64;
  __int64 v65;
  __int64 v66;
  __int64 v67;
  __int64 v68;
  unsigned int v69;
  int v70;
  int* v71;
  int v72;
  bool v73;
  unsigned __int64 v74;
  signed int v75;
  __int64 v76;
  int* v77;
  unsigned __int64 v78;
  int v79;
  int v80;
  signed int v81;
  int* v82;
  __int64 v83;
  int* v84;
  signed int v85;
  unsigned __int64 v86;
  signed int v87;
  __int64 v88;
  __int64 v89;
  __int64 v90;
  __int64 v91;
  __int64* v92;
  char* v93;
  __int64* v94;
  __int64 v95;
  __int64 v97;
  _QWORD* v98;
  __int64* v99;
  __int64 v100;
  __int64* v101;
  char* v102;
  char* v103;
  __int64* v104;
  __int64* v105;
  unsigned __int64 v106;
  unsigned __int64 v107;
  int v108;
  int v109;
  __int64 v110;
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
  char v123[4];
  _DWORD v124[4];

  v1 = *(__int64**)(a1 + 1168);
  v2 = (_QWORD*)a1;
  v3 = v1[8];
  if (v3 == 0) {
    goto LABEL_117;
  }
  if (*(_WORD*)(v3 + 32) != 0) {
    a1 = GameRoutine_1762890(a1, *(unsigned __int16*)(v3 + 32));
    v1 = (__int64*)v2[146];
    v3 = v1[8];
  }
  v4 = *(unsigned __int16*)(v3 + 36);
  if (*(_WORD*)(v3 + 36) != 0) {
    v5 = v1[1] - *v1;
    v6 = v5 >> 3;
    if ((int)(v5 >> 3) > 3) {
      v105 = (__int64*)&GameData_1afed0f;
      v104 = (__int64*)game_HashString(&GameData_1afed0f);
      v10 = game_GameModeData_instance_;
      if (game_GameModeData_instance_ != 0) {
        v11 = game_GameVariableTable_Find(
            *(_QWORD*)(game_GameModeData_instance_ + 48), &v104);
        if (v11 != 0) {
          v10 = *(_DWORD*)(v11 + 32);
        }
        else {
          v10 = 0;
        }
      }
      v73 = v10 <= v4;
      v52 = msg_MessageManager_instance__ptr[0];
      if (v73) {
        v53 = "MID_Sys_Result_Msg_Reliance_EXP_Up_Big";
      }
      else {
        v53 = "MID_Sys_Result_Msg_Reliance_EXP_Up";
      }
      GameRoutine_a51e10(*msg_MessageManager_instance__ptr[0] + 14704, 0,
                         (unsigned int)v6, 0);
      v54 = *v52;
      v110 = -1;
      v111 = -1;
      v112 = -1;
      v113 = -1;
      v114 = -1;
      v115 = -1;
      v116 = -1;
      v117 = -1;
      v118 = -1;
      v119 = -1;
      v120 = -1;
      v121 = -1;
      v104 = GameData_212e348 + 2;
      v105 = (__int64*)0xFFFF0001FFFF0000LL;
      v106 = 0xFFFF0004FFFF0002LL;
      v107 = 0xFFFF0006FFFF0005LL;
      v122 = 8;
      v108 = -65529;
      v109 = -65528;
      v55 = GameRoutine_a4dbe0(v54, v53, 0, &v104);
      v56 = GameRoutine_1760e40((__int64)v2, 0);
      v57 = (_QWORD*)v56;
      if (v55 != 0) {
        v58 = ui_LayoutAccessor_FindTextBox(v56, "L_Txt/T_Txt");
        if (v58 != 0) {
          GameRoutine_156c5d0(v58, v55, 0);
        }
      }
      v59 = ui_LayoutAccessor_FindTextBox(v57, "L_Txt/T_Txt");
      if (v59 != 0) {
        v60 = v59;
        v61 = ui_LayoutAccessor_FindTextBox(v57, "L_Txt/T_Txt");
        if (v61 != 0) {
          GameRoutine_190a0c0(&v104, v124, v123, v61, *(_QWORD*)(v61 + 216));
          v62 = v124[0];
          v63 = v124[1];
        }
        else {
          v62 = 0;
          v63 = 0;
        }
        v64 = *(_BYTE*)(v60 + 88);
        *(_DWORD*)(v60 + 80) = v62;
        *(_DWORD*)(v60 + 84) = v63;
        *(_BYTE*)(v60 + 88) = v64 | 0x10;
      }
      a1 = GameRoutine_17356e0(v57, (__int64)"L_Txt");
      goto LABEL_88;
    }
    v7 = GameRoutine_1760e40((__int64)v2, 0x12u);
    v105 = (__int64*)&GameData_1afed0f;
    v104 = (__int64*)game_HashString(&GameData_1afed0f);
    v8 = game_GameModeData_instance_;
    if (game_GameModeData_instance_ != 0) {
      v9 = game_GameVariableTable_Find(
          *(_QWORD*)(game_GameModeData_instance_ + 48), &v104);
      if (v9 != 0) {
        v8 = *(_DWORD*)(v9 + 32);
      }
      else {
        v8 = 0;
      }
    }
    v73 = v8 <= v4;
    v12 = msg_MessageManager_instance__ptr[0];
    if (v73) {
      v13 = "MID_Sys_Result_Msg_Reliance_EXP_Up_Big";
    }
    else {
      v13 = "MID_Sys_Result_Msg_Reliance_EXP_Up";
    }
    GameRoutine_a51e10(*msg_MessageManager_instance__ptr[0] + 14704, 0,
                       (unsigned int)v6, 0);
    v14 = *v12;
    v110 = -1;
    v111 = -1;
    v112 = -1;
    v113 = -1;
    v114 = -1;
    v115 = -1;
    v116 = -1;
    v117 = -1;
    v118 = -1;
    v119 = -1;
    v120 = -1;
    v121 = -1;
    v104 = GameData_212e348 + 2;
    v105 = (__int64*)0xFFFF0001FFFF0000LL;
    v106 = 0xFFFF0004FFFF0002LL;
    v107 = 0xFFFF0006FFFF0005LL;
    v122 = 8;
    v108 = -65529;
    v109 = -65528;
    v15 = GameRoutine_a4dbe0(v14, v13, 0, &v104);
    if (v15 != 0) {
      v16 = v15;
      v15 = ui_LayoutAccessor_FindTextBox(v7, "T_Txt");
      if (v15 != 0) {
        v15 = GameRoutine_156c5d0(v15, v16, 0);
      }
    }
    if ((int)v6 <= 0) {
      v45 = nullptr;
      v20 = nullptr;
      v21 = nullptr;
      v105 = nullptr;
      v106 = 0;
      v104 = nullptr;
    }
    else {
      v97 = v7;
      v98 = v2;
      v17 = 0;
      v18 = nullptr;
      v19 = 0;
      v20 = nullptr;
      v21 = nullptr;
      v22 = 0;
      v23 = nullptr;
      v100 = (v5 >> 3) & 0x7FFFFFFF;
      do {
        v24 = *v1;
        if ((unsigned __int64)v23 >= v22) {
          v25 = (char*)(v23 - v18);
          v26 = (v23 - v18) >> 3;
          v27 = v26 + 1;
          if ((unsigned __int64)(v26 + 1) >> 61 != 0) {
            goto LABEL_124;
          }
          if ((__int64)(v22 - (_QWORD)v18) >> 2 > v27) {
            v27 = (__int64)(v22 - (_QWORD)v18) >> 2;
          }
          if (v22 - (unsigned __int64)v18 >= 0x7FFFFFFFFFFFFFF8LL) {
            v28 = 0x1FFFFFFFFFFFFFFFLL;
          }
          else {
            v28 = v27;
          }
          if (v28 != 0) {
            if (v28 >> 61 != 0) {
              goto LABEL_123;
            }
            v29 = v18;
            v30 = fw_memory_HeapManager_Allocate(
                *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v28, 16, 0);
            v18 = v29;
          }
          else {
            v30 = 0;
          }
          v31 = *(_QWORD*)(v24 + 8 * v17);
          v22 = v30 + 8 * v28;
          v32 = v18;
          v33 = (__int64)&v25[v30 + -8 * v26];
          *(_QWORD*)&v25[v30] = v31;
          v23 = &v25[v30 + 8];
          v15 = memcpy(v33, v18, v25);
          if (v32 != nullptr) {
            v34 = 128;
            if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                0) {
              v34 = 56;
            }
            v15 = nn_mem_StandardAllocator_Free(
                *(_QWORD*)fw_memory_g_heap_manager_ptr + v34, v32);
          }
          v18 = (char*)v33;
        }
        else {
          *(_QWORD*)v23 = *(_QWORD*)(v24 + 8 * v17);
          v23 += 8;
        }
        v35 = *(_QWORD*)(*(_QWORD*)(*v1 + 8 * v17) + 392LL);
        if ((unsigned __int64)v20 < v19) {
          *(_QWORD*)v20 = v35;
          v20 += 8;
        }
        else {
          v36 = v20 - (char*)v21;
          v37 = (v20 - (char*)v21) >> 3;
          v38 = v37 + 1;
          if ((unsigned __int64)(v37 + 1) >> 61 != 0) {
            GameRoutine_688200(v15);
          }
          v99 = v21;
          if ((__int64)(v19 - (_QWORD)v21) >> 2 > v38) {
            v38 = (__int64)(v19 - (_QWORD)v21) >> 2;
          }
          if (v19 - (unsigned __int64)v21 >= 0x7FFFFFFFFFFFFFF8LL) {
            v39 = 0x1FFFFFFFFFFFFFFFLL;
          }
          else {
            v39 = v38;
          }
          if (v39 != 0) {
            if (v39 >> 61 != 0) {
            LABEL_123:
              GameRoutine_60a210(v15);
            }
            v40 = v18;
            v41 = fw_memory_HeapManager_Allocate(
                *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v39, 16, 0);
          }
          else {
            v40 = v18;
            v41 = 0;
          }
          v19 = v41 + 8 * v39;
          v42 = v41 + v36 - 8 * v37;
          *(_QWORD*)(v41 + v36) = v35;
          v20 = (char*)(v41 + v36 + 8);
          v15 = memcpy(v42, v99, v36);
          if (v99 != nullptr) {
            v43 = 128;
            if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                0) {
              v43 = 56;
            }
            v15 = nn_mem_StandardAllocator_Free(
                *(_QWORD*)fw_memory_g_heap_manager_ptr + v43, v99);
          }
          v18 = v40;
          v21 = (__int64*)v42;
        }
        ++v17;
      } while (v100 != v17);
      v2 = v98;
      v44 = v23 - v18;
      v105 = nullptr;
      v106 = 0;
      v104 = nullptr;
      if (v23 != v18) {
        if (v44 < 0) {
        LABEL_124:
          GameRoutine_740050(v15);
        }
        v45 = v18;
        v46 = (__int64*)fw_memory_g_heap_manager_ptr;
        v47 = (__int64*)fw_memory_HeapManager_Allocate(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, v44, 16, 0);
        v48 = (__int64*)((char*)v47 + v44);
        v49 = v47;
        v104 = v47;
        v105 = v47;
        v106 = (unsigned __int64)v47 + v44;
        memcpy(v47, v45, v44);
        v105 = v48;
        GameRoutine_1763c20(v97, &v104);
        v50 = *v46;
        v105 = v49;
        v51 = 128;
        if (*(_QWORD*)(v50 + 200) == 0) {
          v51 = 56;
        }
        nn_mem_StandardAllocator_Free(v50 + v51, v49);
      LABEL_77:
        a1 = GameRoutine_17618b0((__int64)v2);
        if ((unsigned __int64)(v20 - (char*)v21) < 9) {
          if (v21 == nullptr) {
          LABEL_84:
            if (v45 != nullptr) {
              v67 = 128;
              if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                  0) {
                v67 = 56;
              }
              a1 = nn_mem_StandardAllocator_Free(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr + v67, v45);
            }
            goto LABEL_88;
          }
        }
        else {
          v65 = a1;
          GameRoutine_1763e20(a1, v2, *v21, v21[1], (__int64)"L_RelianceAB");
          if (v20 - (char*)v21 == 24) {
            GameRoutine_1763e20(v65, v2, *v21, v21[2], (__int64)"L_RelianceAC");
            GameRoutine_1763e20(v65, v2, v21[1], v21[2],
                                (__int64)"L_RelianceBC");
          }
        }
        v66 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v66 = 56;
        }
        a1 = nn_mem_StandardAllocator_Free(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v66, v21);
        goto LABEL_84;
      }
      v7 = v97;
      v45 = v18;
    }
    GameRoutine_1763c20(v7, &v104);
    goto LABEL_77;
  }

LABEL_88:
  v1 = (__int64*)v2[146];
  v68 = v1[8];
  v69 = *(unsigned __int16*)(v68 + 34);
  if (*(_WORD*)(v68 + 34) != 0) {
    if (game_GameModeData_instance_ != 0) {
      v70 = *(_DWORD*)(game_GameModeData_instance_ + 60);
      v71 = &GameData_21f8110;
      if (v70 == 2) {
        v74 = (unsigned __int64)(GameData_21f8120 - GameData_21f8118) >> 2;
      }
      else if (v70 == 3) {
        v72 = *(_DWORD*)(game_GameModeData_instance_ + 64);
        v73 = v72 <= 1;
        if (v72 <= 1) {
          LODWORD(v74) = 1;
        }
        else {
          LODWORD(v74) =
              (unsigned __int64)(GameData_21f8120 - GameData_21f8118) >> 2;
        }
        if (!v73) {
          v71 = &GameData_21f8130;
        }
      }
      else {
        LODWORD(v74) = 1;
      }
      v77 = v71 + 2;
      v76 = *((_QWORD*)v71 + 1);
      v78 = (unsigned __int64)(*((_QWORD*)v77 + 1) - v76) >> 2;
      if ((int)v74 < (int)v78) {
        LODWORD(v78) = v74;
      }
      v79 = v78 - 1;
      if ((int)v74 <= 0) {
        v80 = 0;
      }
      else {
        v80 = v79;
      }
      v81 = *(_DWORD*)(v76 + 4LL * v80);
      v82 = &GameData_21f8110;
      if (v70 == 3 && *(int*)(game_GameModeData_instance_ + 64) > 1) {
        v82 = &GameData_21f8130;
      }
      v84 = v82 + 2;
      v83 = *((_QWORD*)v82 + 1);
      v85 = *(_DWORD*)(game_GameModeData_instance_ + 76);
      v86 = (unsigned __int64)(*((_QWORD*)v84 + 1) - v83) >> 2;
      if ((int)v86 <= 1) {
        LODWORD(v86) = 1;
      }
      v87 = *(_DWORD*)(v83 + 4LL * (unsigned int)v86 - 4);
      if (v87 >= v85) {
        v87 = *(_DWORD*)(game_GameModeData_instance_ + 76);
      }
      if (v85 >= v81) {
        v75 = v87;
      }
      else {
        v75 = v81;
      }
    }
    else {
      v75 = 0;
    }
    a1 = GameRoutine_1763ac0((__int64)v2, v75, v69);
    v1 = (__int64*)v2[146];
  }

LABEL_117:
  v89 = *v1;
  v88 = v1[1];
  v102 = nullptr;
  v103 = nullptr;
  v90 = v88 - v89;
  v101 = nullptr;
  if (v88 == v89) {
    return GameRoutine_1763740((__int64)v2, &v101, 1);
  }
  if (v90 < 0) {
    GameRoutine_6c1f60(a1);
  }
  v91 = fw_memory_g_heap_manager_ptr;
  v92 = (__int64*)fw_memory_HeapManager_Allocate(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, v88 - v89, 16, 0);
  v93 = (char*)v92 + v90;
  v94 = v92;
  v101 = v92;
  v103 = (char*)v92 + v90;
  memcpy(v92, v89, v90);
  v102 = v93;
  GameRoutine_1763740((__int64)v2, &v101, 1);
  v95 = 128;
  if (*(_QWORD*)(*(_QWORD*)v91 + 200LL) == 0) {
    v95 = 56;
  }
  return nn_mem_StandardAllocator_Free(*(_QWORD*)v91 + v95, v94);
}

#pragma GCC visibility pop
