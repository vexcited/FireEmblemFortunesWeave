#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_658c00(_QWORD);
__int64 GameRoutine_75d120(_QWORD, _QWORD);
__int64 GameRoutine_822180(void);
__int64 game_ProcInst_Unregister(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
extern __int64 (*game_ProcInst_vtable[])();
extern __int64 (*game_map_ProcEventBattle_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
__int64 ProcEventBattle_Destructor(__int64 a1);
__int64 ProcEventBattle_DeletingDestructor(__int64 a1);
__int64 ProcEventBattle_Unknown2(__int64 a1);
__int64 game_VariableManager_SetFlag(_QWORD, _QWORD);
extern __int64 GameData_21ec9b0;
extern __int64 GameData_21ec9b8;
extern __int64 GameData_21ec9c8;
extern __int64 GameData_21ec9d0;
extern __int64 fw_memory_g_heap_manager;
void GameRoutine_821570();
void ProcEventBattle_822180();

__int64 ProcEventBattle_Destructor(__int64 a1)
{
  *(_QWORD*)a1 = game_map_ProcEventBattle_vtable;
  GameRoutine_822180();
  *(_QWORD*)a1 = game_ProcInst_vtable;
  if ((*(_WORD*)(a1 + 136) & 0x100) != 0) {
    *(_WORD*)(a1 + 136) &= ~0x100u;
  }
  game_ProcInst_Unregister(a1);
  return GameRoutine_658c00(a1 + 88);
}

__int64 ProcEventBattle_DeletingDestructor(__int64 a1)
{
  __int64 v2;

  *(_QWORD*)a1 = game_map_ProcEventBattle_vtable;
  GameRoutine_822180();
  *(_QWORD*)a1 = game_ProcInst_vtable;
  if ((*(_WORD*)(a1 + 136) & 0x100) != 0) {
    *(_WORD*)(a1 + 136) &= ~0x100u;
  }
  game_ProcInst_Unregister(a1);
  GameRoutine_658c00(a1 + 88);
  v2 = 128;
  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
    v2 = 56;
  }
  return nn_mem_StandardAllocator_Free(
      *(_QWORD*)fw_memory_g_heap_manager_ptr + v2, a1);
}

__int64 ProcEventBattle_Unknown2(__int64 a1)
{
  __int64 result;
  unsigned __int8* v3;
  unsigned int v4;
  bool v5;
  int v6;
  bool v7;

  result = GameRoutine_75d120(a1, 1);
  v3 = *(unsigned __int8**)(a1 + 16);
  if (v3 != nullptr) {
    v4 = *v3;
    v5 = v4 >= 0x10;
    v7 = v4 == 16;
    v6 = (1 << v4) & 0x1CE00;
    v7 = !v7 && v5 || v6 == 0;
    if (!v7) {
      *(_WORD*)(a1 + 136) |= 0x80u;
    }
  }
  *(_WORD*)(a1 + 136) |= 8u;
  return result;
}

void ProcEventBattle_822180()
{
  __int64 v0;
  __int64 v1;
  __int64 v2;
  __int64 v3;
  unsigned __int64 v4;
  __int64 v5;
  unsigned __int64 v6;
  __int64* v7;
  __int64 v8;
  __int64 v9;
  unsigned __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;

  v0 = GameData_21ec9d0;
  if (GameData_21ec9d0 != 0) {
    v1 = GameData_21ec9d0 - 1;
    v2 = GameData_21ec9c8;
    v3 = GameData_21ec9b0;
    v4 = GameData_21ec9c8 + GameData_21ec9d0 - 1;
    v5 = *(_QWORD*)(GameData_21ec9b0 + 8 * (v4 / 0xAA));
    v6 = v4 % 0xAA;
    v7 = (__int64*)(v5 + 24 * v6);
    v8 = *v7;
    v9 = v7[1];
    if (*v7 != v9) {
      do {
        game_VariableManager_SetFlag(v8, *(unsigned int*)(v8 + 16));
        v8 += 24;
      } while (v8 != v9);
      v2 = GameData_21ec9c8;
      v0 = GameData_21ec9d0;
      v3 = GameData_21ec9b0;
      v1 = GameData_21ec9d0 - 1;
      v10 = GameData_21ec9d0 - 1 + GameData_21ec9c8;
      v6 = v10 % 0xAA;
      v5 = *(_QWORD*)(GameData_21ec9b0 + 8 * (v10 / 0xAA));
      v8 = *(_QWORD*)(v5 + 24 * v6);
    }
    if (v8 != 0) {
      *(_QWORD*)(v5 + 24 * v6 + 8) = v8;
      v11 = 128;
      if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
        v11 = 56;
      }
      nn_mem_StandardAllocator_Free(fw_memory_g_heap_manager + v11, v8);
      v2 = GameData_21ec9c8;
      v0 = GameData_21ec9d0;
      v3 = GameData_21ec9b0;
      v1 = GameData_21ec9d0 - 1;
    }
    v12 = GameData_21ec9b8;
    v13 = v2 + v0;
    GameData_21ec9d0 = v1;
    if (GameData_21ec9b8 == v3) {
      v14 = 0;
    }
    else {
      v14 = 170 * ((GameData_21ec9b8 - v3) >> 3) - 1;
    }
    if ((unsigned __int64)(v14 - v13 - 339) <= 0xFFFFFFFFFFFFFEABLL) {
      v15 = *(_QWORD*)(GameData_21ec9b8 - 8);
      if (v15 != 0) {
        v16 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v16 = 56;
        }
        nn_mem_StandardAllocator_Free(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v16, v15);
        v12 = GameData_21ec9b8;
      }
      GameData_21ec9b8 = v12 - 8;
    }
  }
  GameRoutine_821570();
}

#pragma GCC visibility pop
