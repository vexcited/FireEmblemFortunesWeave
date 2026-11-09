#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_156c5d0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1760e40(__int64, unsigned int);
__int64 GameRoutine_17618b0(__int64);
__int64 GameRoutine_1763740(__int64, __int64**, char);
__int64 GameRoutine_1763e20(__int64, _QWORD*, __int64, __int64, __int64);
__int64 GameRoutine_a4dbe0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_a51e10(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_GameVariableTable_Find(_QWORD, _QWORD);
__int64 game_HashString(_QWORD);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
__int64 ui_LayoutAccessor_FindTextBox(_QWORD, _QWORD);
extern _UNKNOWN GameData_1afed0f;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_GameModeData_instance_;
extern __int64* GameData_212e348;
extern __int64* msg_MessageManager_instance__ptr[2];
void GameRoutine_1763c20(__int64, __int64**);
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
void __attribute__((noreturn)) GameRoutine_688200(_QWORD);
void __attribute__((noreturn)) GameRoutine_6c1f60(_QWORD);
void __attribute__((noreturn)) GameRoutine_740050(_QWORD);
__int64 TelopTheaterWatchResult_Unknown57(__int64 a1);

__int64 TelopTheaterWatchResult_Unknown57(__int64 a1)
{
  _QWORD* v1;
  __int64 v2;
  unsigned __int64 v3;
  int v4;
  unsigned __int64 v5;
  int v6;
  __int64 v7;
  bool v8;
  __int64* v9;
  const char* v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  char* v15;
  unsigned __int64 v16;
  char* v17;
  __int64* v18;
  unsigned __int64 v19;
  char* v20;
  __int64 v21;
  char* v22;
  __int64 v23;
  unsigned __int64 v24;
  unsigned __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  signed __int64 v31;
  __int64 v32;
  unsigned __int64 v33;
  unsigned __int64 v34;
  __int64 v35;
  signed __int64 v36;
  __int64 v37;
  __int64 v38;
  signed __int64 v39;
  char* v40;
  __int64* v41;
  __int64* v42;
  __int64* v43;
  __int64* v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  __int64 v51;
  __int64 v52;
  __int64 v53;
  __int64 v54;
  __int64 v55;
  __int64* v56;
  char* v57;
  __int64* v58;
  __int64 v59;
  __int64 v61;
  _QWORD* v62;
  __int64 v63;
  __int64 v64;
  __int64* v65;
  char* v66;
  char* v67;
  __int64* v68;
  __int64* v69;
  unsigned __int64 v70;
  unsigned __int64 v71;
  int v72;
  int v73;
  __int64 v74;
  __int64 v75;
  __int64 v76;
  __int64 v77;
  __int64 v78;
  __int64 v79;
  __int64 v80;
  __int64 v81;
  __int64 v82;
  __int64 v83;
  __int64 v84;
  __int64 v85;
  __int64 v86;

  v1 = (_QWORD*)a1;
  v64 = *(_QWORD*)(a1 + 1168);
  v2 = GameRoutine_1760e40(a1, 0x12u);
  v3 = *(_QWORD*)(v64 + 16) - *(_QWORD*)(v64 + 8);
  v4 = *(_DWORD*)(v64 + 48);
  v69 = (__int64*)&GameData_1afed0f;
  v5 = v3 >> 3;
  v68 = (__int64*)game_HashString(&GameData_1afed0f);
  v6 = game_GameModeData_instance_;
  if (game_GameModeData_instance_ != 0) {
    v7 = game_GameVariableTable_Find(
        *(_QWORD*)(game_GameModeData_instance_ + 48), &v68);
    if (v7 != 0) {
      v6 = *(_DWORD*)(v7 + 32);
    }
    else {
      v6 = 0;
    }
  }
  v8 = v4 < v6;
  v9 = msg_MessageManager_instance__ptr[0];
  if (v8) {
    v10 = "MID_Sys_Result_Msg_Reliance_EXP_Up";
  }
  else {
    v10 = "MID_Sys_Result_Msg_Reliance_EXP_Up_Big";
  }
  GameRoutine_a51e10(*msg_MessageManager_instance__ptr[0] + 14704, 0,
                     (unsigned int)v5, 0);
  v11 = *v9;
  v74 = -1;
  v75 = -1;
  v76 = -1;
  v77 = -1;
  v78 = -1;
  v79 = -1;
  v80 = -1;
  v81 = -1;
  v82 = -1;
  v83 = -1;
  v84 = -1;
  v85 = -1;
  v68 = GameData_212e348 + 2;
  v69 = (__int64*)0xFFFF0001FFFF0000LL;
  v70 = 0xFFFF0004FFFF0002LL;
  v71 = 0xFFFF0006FFFF0005LL;
  v86 = 8;
  v72 = -65529;
  v73 = -65528;
  v12 = GameRoutine_a4dbe0(v11, v10, 0, &v68);
  if (v12 != 0) {
    v13 = v12;
    v12 = ui_LayoutAccessor_FindTextBox(v2, "T_Txt");
    if (v12 != 0) {
      v12 = GameRoutine_156c5d0(v12, v13, 0);
    }
  }
  if ((int)v5 <= 0) {
    v15 = nullptr;
    v17 = nullptr;
    v18 = nullptr;
    v69 = nullptr;
    v70 = 0;
    v68 = nullptr;
  LABEL_55:
    GameRoutine_1763c20(v2, &v68);
    goto LABEL_56;
  }
  v61 = v2;
  v62 = v1;
  v14 = 0;
  v15 = nullptr;
  v16 = 0;
  v17 = nullptr;
  v18 = nullptr;
  v19 = 0;
  v20 = nullptr;
  v63 = (v3 >> 3) & 0x7FFFFFFF;
  do {
    v21 = *(_QWORD*)(v64 + 8);
    if ((unsigned __int64)v20 >= v19) {
      v22 = (char*)(v20 - v15);
      v23 = (v20 - v15) >> 3;
      v24 = v23 + 1;
      if ((unsigned __int64)(v23 + 1) >> 61 != 0) {
        goto LABEL_74;
      }
      if ((__int64)(v19 - (_QWORD)v15) >> 2 > v24) {
        v24 = (__int64)(v19 - (_QWORD)v15) >> 2;
      }
      if (v19 - (unsigned __int64)v15 >= 0x7FFFFFFFFFFFFFF8LL) {
        v25 = 0x1FFFFFFFFFFFFFFFLL;
      }
      else {
        v25 = v24;
      }
      if (v25 != 0) {
        if (v25 >> 61 != 0) {
          goto LABEL_73;
        }
        v26 = fw_memory_HeapManager_Allocate(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v25, 16, 0);
      }
      else {
        v26 = 0;
      }
      v27 = *(_QWORD*)(v21 + 8 * v14);
      v19 = v26 + 8 * v25;
      v28 = (__int64)&v22[v26 + -8 * v23];
      *(_QWORD*)&v22[v26] = v27;
      v20 = &v22[v26 + 8];
      v12 = memcpy(v28, v15, v22);
      if (v15 != nullptr) {
        v29 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v29 = 56;
        }
        v12 = nn_mem_StandardAllocator_Free(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v29, v15);
      }
      v15 = (char*)v28;
    }
    else {
      *(_QWORD*)v20 = *(_QWORD*)(v21 + 8 * v14);
      v20 += 8;
    }
    v30 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v64 + 8) + 8 * v14) + 392LL);
    if ((unsigned __int64)v17 < v16) {
      *(_QWORD*)v17 = v30;
      v17 += 8;
    }
    else {
      v31 = v17 - (char*)v18;
      v32 = (v17 - (char*)v18) >> 3;
      v33 = v32 + 1;
      if ((unsigned __int64)(v32 + 1) >> 61 != 0) {
        GameRoutine_688200(v12);
      }
      if ((__int64)(v16 - (_QWORD)v18) >> 2 > v33) {
        v33 = (__int64)(v16 - (_QWORD)v18) >> 2;
      }
      if (v16 - (unsigned __int64)v18 >= 0x7FFFFFFFFFFFFFF8LL) {
        v34 = 0x1FFFFFFFFFFFFFFFLL;
      }
      else {
        v34 = v33;
      }
      if (v34 != 0) {
        if (v34 >> 61 != 0) {
        LABEL_73:
          GameRoutine_60a210(v12);
        }
        v35 = fw_memory_HeapManager_Allocate(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v34, 16, 0);
      }
      else {
        v35 = 0;
      }
      v16 = v35 + 8 * v34;
      v36 = v17 - (char*)v18;
      v37 = v35 + v31 - 8 * v32;
      *(_QWORD*)(v35 + v31) = v30;
      v17 = (char*)(v35 + v31 + 8);
      v12 = memcpy(v37, v18, v36);
      if (v18 != nullptr) {
        v38 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v38 = 56;
        }
        v12 = nn_mem_StandardAllocator_Free(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v38, v18);
      }
      v18 = (__int64*)v37;
    }
    ++v14;
  } while (v63 != v14);
  v1 = v62;
  v39 = v20 - v15;
  v69 = nullptr;
  v70 = 0;
  v68 = nullptr;
  if (v20 == v15) {
    v2 = v61;
    goto LABEL_55;
  }
  if (v39 < 0) {
  LABEL_74:
    GameRoutine_740050(v12);
  }
  v40 = (char*)(v20 - v15);
  v41 = (__int64*)fw_memory_g_heap_manager_ptr;
  v42 = (__int64*)fw_memory_HeapManager_Allocate(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, v40, 16, 0);
  v43 = (__int64*)((char*)v42 + v39);
  v44 = v42;
  v68 = v42;
  v69 = v42;
  v70 = (unsigned __int64)v42 + v39;
  memcpy(v42, v15, v39);
  v69 = v43;
  GameRoutine_1763c20(v61, &v68);
  v45 = *v41;
  v69 = v44;
  v46 = 128;
  if (*(_QWORD*)(v45 + 200) == 0) {
    v46 = 56;
  }
  nn_mem_StandardAllocator_Free(v45 + v46, v44);

LABEL_56:
  v47 = GameRoutine_17618b0((__int64)v1);
  if ((unsigned __int64)(v17 - (char*)v18) < 9) {
    if (v18 == nullptr) {
      goto LABEL_63;
    }
  }
  else {
    v48 = v47;
    GameRoutine_1763e20(v47, v1, *v18, v18[1], (__int64)"L_RelianceAB");
    if (v17 - (char*)v18 == 24) {
      GameRoutine_1763e20(v48, v1, *v18, v18[2], (__int64)"L_RelianceAC");
      GameRoutine_1763e20(v48, v1, v18[1], v18[2], (__int64)"L_RelianceBC");
    }
  }
  v49 = 128;
  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
    v49 = 56;
  }
  v47 = nn_mem_StandardAllocator_Free(
      *(_QWORD*)fw_memory_g_heap_manager_ptr + v49, v18);

LABEL_63:
  if (v15 != nullptr) {
    v50 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v50 = 56;
    }
    v47 = nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v50, v15);
  }
  v51 = v1[146];
  v65 = nullptr;
  v66 = nullptr;
  v67 = nullptr;
  v53 = *(_QWORD*)(v51 + 8);
  v52 = *(_QWORD*)(v51 + 16);
  v54 = v52 - v53;
  if (v52 == v53) {
    return GameRoutine_1763740((__int64)v1, &v65, 0);
  }
  if (v54 < 0) {
    GameRoutine_6c1f60(v47);
  }
  v55 = fw_memory_g_heap_manager_ptr;
  v56 = (__int64*)fw_memory_HeapManager_Allocate(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, v52 - v53, 16, 0);
  v57 = (char*)v56 + v54;
  v58 = v56;
  v65 = v56;
  v67 = (char*)v56 + v54;
  memcpy(v56, v53, v54);
  v66 = v57;
  GameRoutine_1763740((__int64)v1, &v65, 0);
  v59 = 128;
  if (*(_QWORD*)(*(_QWORD*)v55 + 200LL) == 0) {
    v59 = 56;
  }
  return nn_mem_StandardAllocator_Free(*(_QWORD*)v55 + v59, v58);
}

#pragma GCC visibility pop
