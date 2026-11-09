#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_1763ac0(__int64, signed int, unsigned int);
__int64 GameRoutine_1768fe0(__int64);
__int64 game_telop_TelopResult_Destroy_TelopResult(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
extern __int64 (*game_telop_TelopGetItemResult_vtable[])();
extern __int64 GameData_21f8118;
extern __int64 GameData_21f8120;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_GameModeData_instance_;
extern char GameData_1a9f09e;
extern int GameData_21f8110;
extern int GameData_21f8130;
void GameRoutine_1761b30(__int64, int, char, _QWORD*, __int64, _QWORD*,
                         _QWORD*);
void TelopDestroyGateResult_Unknown56(__int64 a1);
__int64 TelopDestroyGateResult_Unknown57(__int64 a1);
__int64 TelopDestroyGateResult_DeletingDestructor(_QWORD* a1);

void TelopDestroyGateResult_Unknown56(__int64 a1)
{
  _QWORD v1[2];
  _QWORD v2[2];
  _QWORD v3[2];
  _QWORD v4[2];

  v4[0] = "MID_Sys_Result_Headline_Destroyed_Hell";
  v4[1] = 38;
  v3[0] = &GameData_1a9f09e;
  v3[1] = 0;
  v2[0] = "In_Judege01";
  v2[1] = 11;
  v1[0] = "Type_Common";
  v1[1] = 11;
  GameRoutine_1761b30(a1, 0, 1, v4, (__int64)v3, v2, v1);
}

__int64 TelopDestroyGateResult_Unknown57(__int64 a1)
{
  __int64 result;
  signed int v3;
  int v4;
  int* v5;
  int v6;
  bool v7;
  unsigned __int64 v8;
  signed int v9;
  __int64 v10;
  int* v11;
  unsigned __int64 v12;
  int v13;
  int v14;
  signed int v15;
  int* v16;
  __int64 v17;
  int* v18;
  signed int v19;
  unsigned __int64 v20;
  signed int v21;

  result = GameRoutine_1768fe0(a1);
  v3 = *(_DWORD*)(a1 + 1216);
  if (v3 >= 1) {
    if (game_GameModeData_instance_ != 0) {
      v4 = *(_DWORD*)(game_GameModeData_instance_ + 60);
      v5 = &GameData_21f8110;
      if (v4 == 2) {
        v8 = (unsigned __int64)(GameData_21f8120 - GameData_21f8118) >> 2;
      }
      else if (v4 == 3) {
        v6 = *(_DWORD*)(game_GameModeData_instance_ + 64);
        v7 = v6 <= 1;
        if (v6 <= 1) {
          LODWORD(v8) = 1;
        }
        else {
          LODWORD(v8) =
              (unsigned __int64)(GameData_21f8120 - GameData_21f8118) >> 2;
        }
        if (!v7) {
          v5 = &GameData_21f8130;
        }
      }
      else {
        LODWORD(v8) = 1;
      }
      v11 = v5 + 2;
      v10 = *((_QWORD*)v5 + 1);
      v12 = (unsigned __int64)(*((_QWORD*)v11 + 1) - v10) >> 2;
      if ((int)v8 < (int)v12) {
        LODWORD(v12) = v8;
      }
      v13 = v12 - 1;
      if ((int)v8 <= 0) {
        v14 = 0;
      }
      else {
        v14 = v13;
      }
      v15 = *(_DWORD*)(v10 + 4LL * v14);
      v16 = &GameData_21f8110;
      if (v4 == 3 && *(int*)(game_GameModeData_instance_ + 64) > 1) {
        v16 = &GameData_21f8130;
      }
      v18 = v16 + 2;
      v17 = *((_QWORD*)v16 + 1);
      v19 = *(_DWORD*)(game_GameModeData_instance_ + 76);
      v20 = (unsigned __int64)(*((_QWORD*)v18 + 1) - v17) >> 2;
      if ((int)v20 <= 1) {
        LODWORD(v20) = 1;
      }
      v21 = *(_DWORD*)(v17 + 4LL * (unsigned int)v20 - 4);
      if (v21 >= v19) {
        v21 = *(_DWORD*)(game_GameModeData_instance_ + 76);
      }
      if (v19 >= v15) {
        v9 = v21;
      }
      else {
        v9 = v15;
      }
    }
    else {
      v9 = 0;
    }
    return GameRoutine_1763ac0(a1, v9, v3);
  }
  return result;
}

__int64 TelopDestroyGateResult_DeletingDestructor(_QWORD* a1)
{
  __int64 v1;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;

  v1 = a1[149];
  *a1 = game_telop_TelopGetItemResult_vtable;
  v3 = fw_memory_g_heap_manager_ptr;
  if (v1 != 0) {
    v4 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v4 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v4,
                                  v1);
  }
  v5 = a1[146];
  if (v5 != 0) {
    v6 = *(_QWORD*)v3;
    a1[147] = v5;
    v7 = 128;
    if (*(_QWORD*)(v6 + 200) == 0) {
      v7 = 56;
    }
    nn_mem_StandardAllocator_Free(v6 + v7, v5);
  }
  game_telop_TelopResult_Destroy_TelopResult(a1);
  v8 = 128;
  if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
    v8 = 56;
  }
  return nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v8, a1);
}

#pragma GCC visibility pop
