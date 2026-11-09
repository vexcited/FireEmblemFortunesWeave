#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_1762890(__int64, unsigned int);
__int64 GameRoutine_1762a50(__int64 result, __int64*);
__int64 GameRoutine_1762ef0(__int64, __int64);
__int64 GameRoutine_1763ac0(__int64, signed int, unsigned int);
__int64 GameRoutine_6e3b50(_QWORD, _QWORD);
__int64 GameRoutine_930b90(_QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_telop_TelopResult_Destroy_TelopResult(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
extern __int64 (*game_telop_TelopSidestoryResult_vtable[])();
extern __int64 GameData_21f8118;
extern __int64 GameData_21f8120;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_GameModeData_instance_;
extern int GameData_21f8110;
extern int GameData_21f8130;
void __attribute__((noreturn)) GameRoutine_e66f80(_QWORD);
__int64 TelopSidestoryResult_Unknown57(__int64 result);
__int64 TelopSidestoryResult_Destructor(_QWORD* a1);
__int64 TelopSidestoryResult_DeletingDestructor(_QWORD* a1);

__int64 TelopSidestoryResult_Unknown57(__int64 result)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  char v15;
  __int64 v16;
  _QWORD* v17;
  char v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  unsigned int v23;
  int v24;
  int* v25;
  int v26;
  bool v27;
  unsigned __int64 v28;
  signed int v29;
  __int64 v30;
  int* v31;
  unsigned __int64 v32;
  int v33;
  int v34;
  signed int v35;
  int* v36;
  __int64 v37;
  int* v38;
  signed int v39;
  unsigned __int64 v40;
  signed int v41;
  __int64 v42[3];

  v1 = *(_QWORD*)(result + 1184);
  v2 = *(_QWORD*)(result + 1176);
  v3 = result;
  v4 = v1 - v2;
  if (v1 != v2) {
    if ((unsigned __int64)(0x6DB6DB6DB6DB6DB7LL * (v4 >> 4)) >=
        0x24924924924924ALL) {
      GameRoutine_e66f80(result);
    }
    v5 = fw_memory_g_heap_manager_ptr;
    v6 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                        v1 - v2, 16, 0);
    v7 = 0;
    v42[0] = v6;
    v42[2] = v6 + v4;
    do {
      v11 = v2 + v7;
      v12 = v6 + v7;
      *(_DWORD*)v12 = *(_DWORD*)(v2 + v7);
      *(_QWORD*)(v12 + 4) = *(_QWORD*)(v2 + v7 + 4);
      if (*(_BYTE*)(v2 + v7 + 12) != 0) {
        v8 = *(_QWORD*)(v11 + 12);
      }
      else {
        v8 = 0;
      }
      *(_QWORD*)(v12 + 48) = 0;
      v9 = v12 + 48;
      *(_QWORD*)(v12 + 12) = v8;
      *(_WORD*)(v12 + 26) = 0;
      *(_DWORD*)(v12 + 28) = 0;
      *(_QWORD*)(v12 + 40) = v12 + 48;
      *(_QWORD*)(v12 + 56) = 0;
      *(_QWORD*)(v12 + 64) = 0;
      *(_QWORD*)(v12 + 72) = 0;
      *(_QWORD*)(v12 + 80) = 0;
      GameRoutine_930b90(v12 + 24, v11 + 24);
      v10 = *(_QWORD*)(v11 + 88);
      v7 += 112;
      *(_DWORD*)(v9 + 48) = *(_DWORD*)(v11 + 96);
      *(_QWORD*)(v9 + 40) = v10;
      *(_WORD*)(v9 + 56) = *(_WORD*)(v11 + 104);
    } while (v2 + v7 != v1);
    v42[1] = v6 + v7;
    GameRoutine_1762a50(v3, v42);
    do {
      v14 = v6 + v7;
      v15 = *(_BYTE*)(v6 + v7 - 48);
      *(_DWORD*)(v14 - 80) = 0;
      *(_QWORD*)(v14 - 88) = 0;
      if ((v15 & 1) != 0) {
        **(_BYTE**)(v14 - 32) = 0;
        *(_QWORD*)(v14 - 40) = 0;
      }
      else {
        *(_WORD*)(v14 - 48) = 0;
      }
      v16 = v6 + v7;
      v17 = (_QWORD*)(v6 + v7 - 64);
      GameRoutine_6e3b50(v6 + v7 - 72, *v17);
      v18 = *(_BYTE*)(v14 - 48);
      *(_QWORD*)(v16 - 56) = 0;
      *(_QWORD*)(v16 - 72) = v17;
      *v17 = 0;
      if ((v18 & 1) != 0) {
        v13 = *(_QWORD*)(v16 - 32);
        if (v13 != 0) {
          if (*(_QWORD*)(*(_QWORD*)v5 + 200LL) != 0) {
            v19 = 128;
          }
          else {
            v19 = 56;
          }
          nn_mem_StandardAllocator_Free(*(_QWORD*)v5 + v19, v13);
          v13 = *(_QWORD*)(v16 - 64);
        }
      }
      else {
        v13 = 0;
      }
      GameRoutine_6e3b50(v6 + v7 - 72, v13);
      v7 -= 112;
    } while (v7 != 0);
    v20 = 128;
    if (*(_QWORD*)(*(_QWORD*)v5 + 200LL) == 0) {
      v20 = 56;
    }
    result = nn_mem_StandardAllocator_Free(*(_QWORD*)v5 + v20, v6);
  }
  v21 = **(_QWORD**)(v3 + 1168);
  if (*(_WORD*)(v21 + 336) != 0) {
    result = GameRoutine_1762890(v3, *(unsigned __int16*)(v21 + 336));
    v21 = **(_QWORD**)(v3 + 1168);
  }
  v22 = *(_QWORD*)(v21 + 368);
  if (v22 != 0) {
    result = GameRoutine_1762ef0(v3, v22);
    v21 = **(_QWORD**)(v3 + 1168);
  }
  v23 = *(unsigned __int8*)(v21 + 338);
  if (*(_BYTE*)(v21 + 338) != 0) {
    if (game_GameModeData_instance_ != 0) {
      v24 = *(_DWORD*)(game_GameModeData_instance_ + 60);
      v25 = &GameData_21f8110;
      if (v24 == 2) {
        v28 = (unsigned __int64)(GameData_21f8120 - GameData_21f8118) >> 2;
      }
      else if (v24 == 3) {
        v26 = *(_DWORD*)(game_GameModeData_instance_ + 64);
        v27 = v26 <= 1;
        if (v26 <= 1) {
          LODWORD(v28) = 1;
        }
        else {
          LODWORD(v28) =
              (unsigned __int64)(GameData_21f8120 - GameData_21f8118) >> 2;
        }
        if (!v27) {
          v25 = &GameData_21f8130;
        }
      }
      else {
        LODWORD(v28) = 1;
      }
      v31 = v25 + 2;
      v30 = *((_QWORD*)v25 + 1);
      v32 = (unsigned __int64)(*((_QWORD*)v31 + 1) - v30) >> 2;
      if ((int)v28 < (int)v32) {
        LODWORD(v32) = v28;
      }
      v33 = v32 - 1;
      if ((int)v28 <= 0) {
        v34 = 0;
      }
      else {
        v34 = v33;
      }
      v35 = *(_DWORD*)(v30 + 4LL * v34);
      v36 = &GameData_21f8110;
      if (v24 == 3 && *(int*)(game_GameModeData_instance_ + 64) > 1) {
        v36 = &GameData_21f8130;
      }
      v38 = v36 + 2;
      v37 = *((_QWORD*)v36 + 1);
      v39 = *(_DWORD*)(game_GameModeData_instance_ + 76);
      v40 = (unsigned __int64)(*((_QWORD*)v38 + 1) - v37) >> 2;
      if ((int)v40 <= 1) {
        LODWORD(v40) = 1;
      }
      v41 = *(_DWORD*)(v37 + 4LL * (unsigned int)v40 - 4);
      if (v41 >= v39) {
        v41 = *(_DWORD*)(game_GameModeData_instance_ + 76);
      }
      if (v39 >= v35) {
        v29 = v41;
      }
      else {
        v29 = v35;
      }
    }
    else {
      v29 = 0;
    }
    return GameRoutine_1763ac0(v3, v29, v23);
  }
  return result;
}

__int64 TelopSidestoryResult_Destructor(_QWORD* a1)
{
  __int64 v1;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  char v8;
  char v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;

  v1 = a1[147];
  *a1 = game_telop_TelopSidestoryResult_vtable;
  if (v1 != 0) {
    v3 = a1[148];
    v4 = fw_memory_g_heap_manager_ptr;
    if (v1 == v3) {
      goto LABEL_16;
    }
    v5 = v3 - 40;
    do {
      v8 = *(_BYTE*)(v5 - 8);
      *(_DWORD*)(v5 - 40) = 0;
      *(_QWORD*)(v5 - 48) = 0;
      if ((v8 & 1) != 0) {
        **(_BYTE**)(v5 + 8) = 0;
        *(_QWORD*)v5 = 0;
      }
      else {
        *(_WORD*)(v5 - 8) = 0;
      }
      GameRoutine_6e3b50(v5 - 32, *(_QWORD*)(v5 - 24));
      v9 = *(_BYTE*)(v5 - 8);
      *(_QWORD*)(v5 - 24) = 0;
      *(_QWORD*)(v5 - 16) = 0;
      *(_QWORD*)(v5 - 32) = v5 - 24;
      if ((v9 & 1) != 0) {
        v6 = *(_QWORD*)(v5 + 8);
        if (v6 != 0) {
          if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) != 0) {
            v10 = 128;
          }
          else {
            v10 = 56;
          }
          nn_mem_StandardAllocator_Free(*(_QWORD*)v4 + v10, v6);
          v6 = *(_QWORD*)(v5 - 24);
        }
      }
      else {
        v6 = 0;
      }
      GameRoutine_6e3b50(v5 - 32, v6);
      v7 = v5 - 72;
      v5 -= 112;
    } while (v7 != v1);
    v11 = a1[147];
    a1[148] = v1;
    v1 = v11;
    if (v11 != 0) {
    LABEL_16:
      v12 = 128;
      if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) == 0) {
        v12 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v4 + v12, v1);
    }
  }
  return game_telop_TelopResult_Destroy_TelopResult(a1);
}

__int64 TelopSidestoryResult_DeletingDestructor(_QWORD* a1)
{
  __int64 v1;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  char v8;
  char v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;

  v1 = a1[147];
  *a1 = game_telop_TelopSidestoryResult_vtable;
  v3 = fw_memory_g_heap_manager_ptr;
  if (v1 != 0) {
    v4 = a1[148];
    if (v1 == v4) {
      goto LABEL_16;
    }
    v5 = v4 - 40;
    do {
      v8 = *(_BYTE*)(v5 - 8);
      *(_DWORD*)(v5 - 40) = 0;
      *(_QWORD*)(v5 - 48) = 0;
      if ((v8 & 1) != 0) {
        **(_BYTE**)(v5 + 8) = 0;
        *(_QWORD*)v5 = 0;
      }
      else {
        *(_WORD*)(v5 - 8) = 0;
      }
      GameRoutine_6e3b50(v5 - 32, *(_QWORD*)(v5 - 24));
      v9 = *(_BYTE*)(v5 - 8);
      *(_QWORD*)(v5 - 24) = 0;
      *(_QWORD*)(v5 - 16) = 0;
      *(_QWORD*)(v5 - 32) = v5 - 24;
      if ((v9 & 1) != 0) {
        v6 = *(_QWORD*)(v5 + 8);
        if (v6 != 0) {
          if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) != 0) {
            v10 = 128;
          }
          else {
            v10 = 56;
          }
          nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v10, v6);
          v6 = *(_QWORD*)(v5 - 24);
        }
      }
      else {
        v6 = 0;
      }
      GameRoutine_6e3b50(v5 - 32, v6);
      v7 = v5 - 72;
      v5 -= 112;
    } while (v7 != v1);
    v11 = a1[147];
    a1[148] = v1;
    v1 = v11;
    if (v11 != 0) {
    LABEL_16:
      v12 = 128;
      if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
        v12 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v12, v1);
    }
  }
  game_telop_TelopResult_Destroy_TelopResult(a1);
  v13 = 128;
  if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
    v13 = 56;
  }
  return nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v13, a1);
}

#pragma GCC visibility pop
