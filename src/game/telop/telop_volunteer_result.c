#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__attribute__((swiftcall)) void TelopResult_17619f0(PSEUDO_X8, __int64, int);
__attribute__((swiftcall)) void game_9591b0(PSEUDO_X8, _QWORD);
__int64 GameRoutine_156c5d0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1760e40(_QWORD, _QWORD);
__int64 GameRoutine_17618b0(_QWORD, long double);
__int64 GameRoutine_1763740(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1763e20(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_60a020(_QWORD, _QWORD);
__int64 GameRoutine_a4dbe0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 Manager_136a920(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 Manager_a51e10(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_GameVariableTable_Find(_QWORD, _QWORD);
__int64 game_HashString(_QWORD);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
__int64 ui_LayoutAccessor_FindPane(_QWORD, _QWORD);
__int64 ui_LayoutAccessor_FindTextBox(_QWORD, _QWORD);
__n128 game_telop_1763c20(__int64, __int64**);
__n128 std___1___shared_weak_count___release_weak();
extern _UNKNOWN GameData_1afed0f;
extern __int64* GameData_212d670[3];
extern __int64* GameData_212d678[2];
extern __int64* GameData_212e348;
extern __int64* msg_MessageManager_instance__ptr[2];
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_GameModeData_instance_;
extern __int64 ui_Manager_instance_;
extern char** msg_MessageManager_empty_text__ptr;
void GameRoutine_1751050(_QWORD*, __int64*, __int64, unsigned int,
                         unsigned int);
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
void __attribute__((noreturn)) GameRoutine_688200(_QWORD);
void __attribute__((noreturn)) GameRoutine_6c1f60(_QWORD, _QWORD);
void __attribute__((noreturn)) GameRoutine_740050(_QWORD);
__int64 TelopVolunteerResult_1772a20(__int64 a1);

__int64 TelopVolunteerResult_1772a20(__int64 a1)
{
  __int64 v1;
  unsigned int v2;
  int v3;
  _DWORD* v4;
  long double v5;
  __int64* v6;
  __int64* v7;
  signed int v8;
  __int64 v9;
  int v10;
  __int64 v11;
  int v12;
  int v13;
  int v14;
  __int64 v15;
  long double v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  _QWORD* v29;
  __int64 v30;
  __int64 v31;
  _QWORD* v32;
  unsigned __int64 v33;
  unsigned __int64 v34;
  int v35;
  int v36;
  int v37;
  int v38;
  __int64 v39;
  const char* v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  unsigned __int64 v46;
  char* v47;
  char* v48;
  unsigned __int64 v49;
  char* v50;
  __int64* v51;
  __int64 v52;
  char* v53;
  __int64 v54;
  unsigned __int64 v55;
  unsigned __int64 v56;
  __int64 v57;
  __int64 v58;
  __int64 v59;
  __int64 v60;
  signed __int64 v61;
  __int64 v62;
  unsigned __int64 v63;
  unsigned __int64 v64;
  __int64 v65;
  signed __int64 v66;
  __int64 v67;
  __int64 v68;
  signed __int64 v69;
  char* v70;
  __int64* v71;
  __int64* v72;
  __int64* v73;
  __int64* v74;
  __int64 v75;
  __int64 v76;
  long double v77;
  __int64 v78;
  __int64 v79;
  __int64 v80;
  __int64 v81;
  __int64 result;
  __int64* v83;
  __int64 v84;
  __int64 v85;
  __int64 v86;
  __int64 v87;
  __int64 v88;
  __int64 v89;
  __int64 v90;
  __int64 v91;
  __int64 v92;
  __int64 v93;
  __int64 v94;
  char* v95;
  __int64 v96;
  __int64 v97;
  __int64 v98;
  __int64 v99[2];
  __int64 v100;
  __int64 v101;
  __int64* v102;
  __int64* v103;
  unsigned __int64 v104;
  unsigned __int64 v105;
  int v106;
  int v107;
  __int64 v108;
  __int64 v109;
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

  v1 = a1;
  v2 = *(_DWORD*)(*(__int64 (**)(_QWORD))(**(_QWORD**)(a1 + 1168) + 80LL))(
      *(_QWORD*)(a1 + 1168));
  v3 = *(_DWORD*)((*(__int64 (**)(_QWORD))(**(_QWORD**)(v1 + 1168) + 80LL))(
                      *(_QWORD*)(v1 + 1168)) +
                  4);
  v4 = (_DWORD*)(*(__int64 (**)(_QWORD))(**(_QWORD**)(v1 + 1168) + 80LL))(
      *(_QWORD*)(v1 + 1168));
  v6 = msg_MessageManager_instance__ptr[0];
  v7 = GameData_212e348;
  v8 = v3 - *v4;
  if (v8 >= 1) {
    v9 = *(_QWORD*)(v1 + 1176);
    v10 = *(_DWORD*)(*(__int64 (**)(_QWORD))(**(_QWORD**)(v1 + 1168) + 80LL))(
        *(_QWORD*)(v1 + 1168));
    v11 = *(_QWORD*)(*(_QWORD*)(v9 + 16) + 24LL);
    v12 = *(_DWORD*)(v11 + 424);
    v13 = *(_DWORD*)(v11 + 428);
    if (v13 >= v10) {
      v13 = v10;
    }
    if (v10 >= v12) {
      v14 = v13;
    }
    else {
      v14 = v12;
    }
    *(_DWORD*)(v9 + 4) = v14;
    v15 = GameRoutine_1760e40(v1, 9);
    *(_QWORD*)(v1 + 1184) = v15;
    TelopResult_17619f0((void*)(&v100), v1, 9);
    v99[0] = v100;
    v99[1] = v101;
    if (v101 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v101 + 16), 1u,
                                memory_order_relaxed);
      GameRoutine_1751050((_QWORD*)(v1 + 1192), v99, *(_QWORD*)(v1 + 1176), v2,
                          v8);
      *(__n128*)&v16 = std___1___shared_weak_count___release_weak();
    }
    else {
      GameRoutine_1751050((_QWORD*)(v1 + 1192), v99, *(_QWORD*)(v1 + 1176), v2,
                          v8);
    }
    v17 = *(_QWORD*)((*(__int64 (**)(_QWORD, long double))(
                         **(_QWORD**)(v1 + 1168) + 48LL))(*(_QWORD*)(v1 + 1168),
                                                          v16) +
                     32);
    v18 = *v6;
    v108 = -1;
    v109 = -1;
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
    v120 = 8;
    v106 = -65529;
    v107 = -65528;
    v102 = v7 + 2;
    v103 = (__int64*)0xFFFF0001FFFF0000LL;
    v104 = 0xFFFF0004FFFF0002LL;
    v105 = 0xFFFF0006FFFF0005LL;
    v19 = GameRoutine_a4dbe0(v18, v17, 0, &v102);
    if (v19 != 0) {
      v20 = v19;
    }
    else {
      v20 = (__int64)*msg_MessageManager_empty_text__ptr;
    }
    GameRoutine_60a020(*v6 + 14704, v20);
    v21 = *v6;
    v108 = -1;
    v109 = -1;
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
    v102 = v7 + 2;
    v103 = (__int64*)0xFFFF0001FFFF0000LL;
    v104 = 0xFFFF0004FFFF0002LL;
    v105 = 0xFFFF0006FFFF0005LL;
    v120 = 8;
    v106 = -65529;
    v107 = -65528;
    v22 = GameRoutine_a4dbe0(v21, "MID_Sys_Result_Msg_Temple_Contribution_Up",
                             0, &v102);
    if (v22 != 0) {
      v23 = v22;
      v24 = ui_LayoutAccessor_FindTextBox(v15, "T_Txt");
      if (v24 != 0) {
        GameRoutine_156c5d0(v24, v23, 0);
      }
    }
    v25 = ui_LayoutAccessor_FindPane(v15, "Thumb");
    if (v25 != 0) {
      v26 = __dynamic_cast(v25, GameData_212d670[0], GameData_212d678[0], 0);
    }
    else {
      v26 = 0;
    }
    v7 = GameData_212e348;
    v27 = (*(__int64 (**)(_QWORD))(**(_QWORD**)(v1 + 1168) + 48LL))(
        *(_QWORD*)(v1 + 1168));
    game_9591b0((void*)(&v102), v27);
    if (v26 != 0) {
      Manager_136a920(ui_Manager_instance_ + 1264, v26, 0, 13);
    }
    if (((unsigned __int8)v102 & 1) != 0 && v104 != 0) {
      v28 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v28 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                    v28);
    }
    if (v101 != 0) {
      *(__n128*)&v5 = std___1___shared_weak_count___release_weak();
    }
  }
  v29 = (_QWORD*)(*(__int64 (**)(_QWORD, long double))(
      **(_QWORD**)(v1 + 1168) + 40LL))(*(_QWORD*)(v1 + 1168), v5);
  if (*v29 != v29[1] &&
      (*(unsigned __int8 (**)(_QWORD))(**(_QWORD**)(v1 + 1168) + 56LL))(
          *(_QWORD*)(v1 + 1168)) != 0) {
    v30 = *(_QWORD*)(v1 + 1168);
    v31 = GameRoutine_1760e40(v1, 18);
    v32 = (_QWORD*)(*(__int64 (**)(__int64))(*(_QWORD*)v30 + 40LL))(v30);
    v33 = v32[1] - *v32;
    v34 = v33 >> 3;
    v35 = *(_DWORD*)((*(__int64 (**)(__int64))(*(_QWORD*)v30 + 64LL))(v30) + 4);
    v36 = *(_DWORD*)(*(__int64 (**)(__int64))(*(_QWORD*)v30 + 64LL))(v30);
    v103 = (__int64*)&GameData_1afed0f;
    v37 = v35 - v36;
    v102 = (__int64*)game_HashString(&GameData_1afed0f);
    v38 = game_GameModeData_instance_;
    if (game_GameModeData_instance_ != 0) {
      v39 = game_GameVariableTable_Find(
          *(_QWORD*)(game_GameModeData_instance_ + 48), &v102);
      if (v39 != 0) {
        v38 = *(_DWORD*)(v39 + 32);
      }
      else {
        v38 = 0;
      }
    }
    if (v37 >= v38) {
      v40 = "MID_Sys_Result_Msg_Reliance_EXP_Up_Big";
    }
    else {
      v40 = "MID_Sys_Result_Msg_Reliance_EXP_Up";
    }
    Manager_a51e10(*v6 + 14704, 0, (unsigned int)v34, 0);
    v41 = *v6;
    v108 = -1;
    v109 = -1;
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
    v102 = v7 + 2;
    v103 = (__int64*)0xFFFF0001FFFF0000LL;
    v104 = 0xFFFF0004FFFF0002LL;
    v105 = 0xFFFF0006FFFF0005LL;
    v120 = 8;
    v106 = -65529;
    v107 = -65528;
    v42 = GameRoutine_a4dbe0(v41, v40, 0, &v102);
    if (v42 != 0) {
      v43 = v42;
      v44 = ui_LayoutAccessor_FindTextBox(v31, "T_Txt");
      if (v44 != 0) {
        GameRoutine_156c5d0(v44, v43, 0);
      }
    }
    if ((int)v34 <= 0) {
      v95 = nullptr;
      v47 = nullptr;
      v48 = nullptr;
      v103 = nullptr;
      v104 = 0;
      v102 = nullptr;
    }
    else {
      v92 = v31;
      v93 = v1;
      v45 = 0;
      v46 = 0;
      v47 = nullptr;
      v48 = nullptr;
      v49 = 0;
      v50 = nullptr;
      v94 = (v33 >> 3) & 0x7FFFFFFF;
      v95 = nullptr;
      do {
        v51 = (__int64*)(*(__int64 (**)(__int64))(*(_QWORD*)v30 + 40LL))(v30);
        v52 = *v51;
        if ((unsigned __int64)v50 >= v49) {
          v53 = (char*)(v50 - v95);
          v54 = (v50 - v95) >> 3;
          v55 = v54 + 1;
          if ((unsigned __int64)(v54 + 1) >> 61 != 0) {
            goto LABEL_104;
          }
          if ((__int64)(v49 - (_QWORD)v95) >> 2 > v55) {
            v55 = (__int64)(v49 - (_QWORD)v95) >> 2;
          }
          if (v49 - (unsigned __int64)v95 >= 0x7FFFFFFFFFFFFFF8LL) {
            v56 = 0x1FFFFFFFFFFFFFFFLL;
          }
          else {
            v56 = v55;
          }
          if (v56 != 0) {
            if (v56 >> 61 != 0) {
              goto LABEL_103;
            }
            v57 = fw_memory_HeapManager_Allocate(
                *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v56, 16, 0);
          }
          else {
            v57 = 0;
          }
          v49 = v57 + 8 * v56;
          v58 = (__int64)&v53[v57 + -8 * v54];
          *(_QWORD*)&v53[v57] = *(_QWORD*)(v52 + 8 * v45);
          v50 = &v53[v57 + 8];
          memcpy(v58, v95, v53);
          if (v95 != nullptr) {
            v59 = 128;
            if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                0) {
              v59 = 56;
            }
            nn_mem_StandardAllocator_Free(
                *(_QWORD*)fw_memory_g_heap_manager_ptr + v59);
          }
          v95 = (char*)v58;
        }
        else {
          *(_QWORD*)v50 = *(_QWORD*)(v52 + 8 * v45);
          v50 += 8;
        }
        v51 = (__int64*)(*(__int64 (**)(__int64))(*(_QWORD*)v30 + 40LL))(v30);
        v60 = *(_QWORD*)(*(_QWORD*)(*v51 + 8 * v45) + 392LL);
        if ((unsigned __int64)v47 < v46) {
          *(_QWORD*)v47 = v60;
          v47 += 8;
        }
        else {
          v61 = v47 - v48;
          v62 = (v47 - v48) >> 3;
          v63 = v62 + 1;
          if ((unsigned __int64)(v62 + 1) >> 61 != 0) {
            GameRoutine_688200(v51);
          }
          if ((__int64)(v46 - (_QWORD)v48) >> 2 > v63) {
            v63 = (__int64)(v46 - (_QWORD)v48) >> 2;
          }
          if (v46 - (unsigned __int64)v48 >= 0x7FFFFFFFFFFFFFF8LL) {
            v64 = 0x1FFFFFFFFFFFFFFFLL;
          }
          else {
            v64 = v63;
          }
          if (v64 != 0) {
            if (v64 >> 61 != 0) {
            LABEL_103:
              GameRoutine_60a210(v51);
            }
            v65 = fw_memory_HeapManager_Allocate(
                *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v64, 16, 0);
          }
          else {
            v65 = 0;
          }
          v46 = v65 + 8 * v64;
          v66 = v47 - v48;
          v67 = v65 + v61 - 8 * v62;
          *(_QWORD*)(v65 + v61) = v60;
          v47 = (char*)(v65 + v61 + 8);
          v51 = (__int64*)memcpy(v67, v48, v66);
          if (v48 != nullptr) {
            v68 = 128;
            if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                0) {
              v68 = 56;
            }
            v51 = (__int64*)nn_mem_StandardAllocator_Free(
                *(_QWORD*)fw_memory_g_heap_manager_ptr + v68);
          }
          v48 = (char*)v67;
        }
        ++v45;
      } while (v94 != v45);
      v31 = v92;
      v1 = v93;
      v69 = v50 - v95;
      v103 = nullptr;
      v104 = 0;
      v102 = nullptr;
      if (v50 != v95) {
        if (v69 < 0) {
        LABEL_104:
          GameRoutine_740050(v51);
        }
        v70 = (char*)(v50 - v95);
        v71 = (__int64*)fw_memory_g_heap_manager_ptr;
        v72 = (__int64*)fw_memory_HeapManager_Allocate(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, v70, 16, 0);
        v73 = (__int64*)((char*)v72 + v69);
        v74 = v72;
        v102 = v72;
        v103 = v72;
        v104 = (unsigned __int64)v72 + v69;
        memcpy(v72, v95, v69);
        v103 = v73;
        game_telop_1763c20(v92, &v102);
        v75 = *v71;
        v103 = v74;
        v76 = 128;
        if (*(_QWORD*)(v75 + 200) == 0) {
          v76 = 56;
        }
        nn_mem_StandardAllocator_Free(v75 + v76);
      LABEL_84:
        v78 = GameRoutine_17618b0(v1, v77);
        if ((unsigned __int64)(v47 - v48) < 9) {
          if (v48 == nullptr) {
          LABEL_91:
            if (v95 != nullptr) {
              v81 = 128;
              if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                  0) {
                v81 = 56;
              }
              nn_mem_StandardAllocator_Free(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr + v81);
            }
            goto LABEL_95;
          }
        }
        else {
          v79 = v78;
          GameRoutine_1763e20(v78, v1, *(_QWORD*)v48, *((_QWORD*)v48 + 1),
                              "L_RelianceAB");
          if (v47 - v48 == 24) {
            GameRoutine_1763e20(v79, v1, *(_QWORD*)v48, *((_QWORD*)v48 + 2),
                                "L_RelianceAC");
            GameRoutine_1763e20(v79, v1, *((_QWORD*)v48 + 1),
                                *((_QWORD*)v48 + 2), "L_RelianceBC");
          }
        }
        v80 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v80 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                      v80);
        goto LABEL_91;
      }
    }
    *(__n128*)&v77 = game_telop_1763c20(v31, &v102);
    goto LABEL_84;
  }
LABEL_95:
  result = (*(__int64 (**)(__int64))(*(_QWORD*)v1 + 496LL))(v1);
  if ((result & 1) != 0) {
    v83 = (__int64*)(*(__int64 (**)(_QWORD))(**(_QWORD**)(v1 + 1168) + 40LL))(
        *(_QWORD*)(v1 + 1168));
    v86 = *v83;
    v85 = v83[1];
    v96 = 0;
    v97 = 0;
    v87 = v85 - v86;
    v98 = 0;
    if (v85 == v86) {
      return GameRoutine_1763740(v1, &v96, 1);
    }
    else {
      if (v87 < 0) {
        GameRoutine_6c1f60(v83, v84);
      }
      v88 = fw_memory_g_heap_manager_ptr;
      v89 = fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, v85 - v86, 16, 0);
      v90 = v89 + v87;
      v96 = v89;
      v98 = v89 + v87;
      memcpy(v89, v86, v87);
      v97 = v90;
      GameRoutine_1763740(v1, &v96, 1);
      v91 = 128;
      if (*(_QWORD*)(*(_QWORD*)v88 + 200LL) == 0) {
        v91 = 56;
      }
      return nn_mem_StandardAllocator_Free(*(_QWORD*)v88 + v91);
    }
  }
  return result;
}

#pragma GCC visibility pop
