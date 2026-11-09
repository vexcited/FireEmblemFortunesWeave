#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_6bebe0(_QWORD);
__int64 MapTerrainFile_6b38a0(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
extern __int64 (*game_BattleFieldScope_vtable[])();
extern __int64 GameData_21ca208;
extern __int64 GameData_21ca260;
extern __int64 fw_memory_g_heap_manager_ptr;
__int64 BattleFieldScope_Destructor(__int64 result);
__int64 BattleFieldScope_DeletingDestructor(__int64 a1);

__int64 BattleFieldScope_Destructor(__int64 result)
{
  __int64 v1;

  *(_QWORD*)result = game_BattleFieldScope_vtable;
  if (*(_BYTE*)(result + 16) == 1) {
    v1 = GameRoutine_6bebe0(GameData_21ca260 + 8);
    MapTerrainFile_6b38a0(v1);
    (*(void (**)(__int64))(*(_QWORD*)GameData_21ca260 + 24LL))(
        GameData_21ca260);
    if (GameData_21ca260 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)GameData_21ca260 + 8LL))(
          GameData_21ca260);
    }
    GameData_21ca260 = 0;
    (*(void (**)(__int64))(*(_QWORD*)GameData_21ca208 + 24LL))(
        GameData_21ca208);
    result = GameData_21ca208;
    if (GameData_21ca208 != 0) {
      result = (*(__int64 (**)(__int64))(*(_QWORD*)GameData_21ca208 + 8LL))(
          GameData_21ca208);
    }
    GameData_21ca208 = 0;
  }
  return result;
}

__int64 BattleFieldScope_DeletingDestructor(__int64 a1)
{
  __int64 v2;
  __int64 v3;

  *(_QWORD*)a1 = game_BattleFieldScope_vtable;
  if (*(_BYTE*)(a1 + 16) == 1) {
    v2 = GameRoutine_6bebe0(GameData_21ca260 + 8);
    MapTerrainFile_6b38a0(v2);
    (*(void (**)(__int64))(*(_QWORD*)GameData_21ca260 + 24LL))(
        GameData_21ca260);
    if (GameData_21ca260 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)GameData_21ca260 + 8LL))(
          GameData_21ca260);
    }
    GameData_21ca260 = 0;
    (*(void (**)(__int64))(*(_QWORD*)GameData_21ca208 + 24LL))(
        GameData_21ca208);
    if (GameData_21ca208 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)GameData_21ca208 + 8LL))(
          GameData_21ca208);
    }
    GameData_21ca208 = 0;
  }
  v3 = 128;
  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
    v3 = 56;
  }
  return nn_mem_StandardAllocator_Free(
      *(_QWORD*)fw_memory_g_heap_manager_ptr + v3, a1);
}

#pragma GCC visibility pop
