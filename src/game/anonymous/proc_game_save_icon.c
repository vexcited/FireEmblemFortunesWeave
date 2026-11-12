#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_155e830(_QWORD, _QWORD);
__int64 GameRoutine_1563030(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_658c00(_QWORD);
__int64 game_ProcInst_Unregister(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
extern __int64 (*game_ProcInst_vtable[])();
extern __int64 (*game_anonymous_ProcGameSaveIcon_vtable[])();
extern __int64 GameData_21eef18;
extern __int64 GameData_21ef1b8;
extern __int64 fw_memory_g_heap_manager_ptr;
__int64 ProcGameSaveIcon_Destructor(__int64 a1);
__int64 ProcGameSaveIcon_DeletingDestructor_alt1(__int64 a1) __asm__(
    "ProcGameSaveIcon_DeletingDestructor");
__int64 ProcGameSaveIcon_Unknown2(__int64 result);
__int64 LayoutAccessor_155e830(__int64 result, char);
__int64 LayoutAccessor_1563030(__int64 result, __int64, char);
__int64 game_ProcInst_Unregister_alt1(__int64 result) __asm__(
    "game_ProcInst_Unregister");
void GameRoutine_658c00_alt1(__int64*) __asm__("GameRoutine_658c00");
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void ProcGameSaveIcon_DeletingDestructor(__int64 a1);

__int64 ProcGameSaveIcon_Destructor(__int64 a1)
{
  __int64 v2;

  *(_QWORD*)a1 = game_anonymous_ProcGameSaveIcon_vtable;
  v2 = GameData_21ef1b8;
  if (GameData_21ef1b8 != 0) {
    GameRoutine_155e830(GameData_21ef1b8 + 24, 0);
    GameRoutine_1563030(v2 + 24, 0, 0);
  }
  GameData_21eef18 = 0;
  *(_QWORD*)a1 = game_ProcInst_vtable;
  if ((*(_WORD*)(a1 + 136) & 0x100) != 0) {
    *(_WORD*)(a1 + 136) &= ~0x100u;
  }
  game_ProcInst_Unregister(a1);
  return GameRoutine_658c00(a1 + 88);
}

void ProcGameSaveIcon_DeletingDestructor(__int64 a1)
{
  __int64 v2;
  __int64 v3;

  *(_QWORD*)a1 = game_anonymous_ProcGameSaveIcon_vtable;
  v2 = GameData_21ef1b8;
  if (GameData_21ef1b8 != 0) {
    LayoutAccessor_155e830(GameData_21ef1b8 + 24, 0);
    LayoutAccessor_1563030(v2 + 24, 0, 0);
  }
  GameData_21eef18 = 0;
  *(_QWORD*)a1 = game_ProcInst_vtable;
  if ((*(_WORD*)(a1 + 136) & 0x100) != 0) {
    *(_WORD*)(a1 + 136) &= ~0x100u;
  }
  game_ProcInst_Unregister_alt1(a1);
  GameRoutine_658c00_alt1((__int64*)(a1 + 88));
  v3 = 128;
  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
    v3 = 56;
  }
  nn_mem_StandardAllocator_Free_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr + v3, a1);
}

__int64 ProcGameSaveIcon_Unknown2(__int64 result)
{
  unsigned __int8* v1;
  unsigned int v2;
  bool v3;
  int v4;

  if (*(_BYTE*)(result + 152) == 1) {
    v1 = *(unsigned __int8**)(result + 16);
    if (v1 != nullptr) {
      v2 = *v1;
      v3 = v2 > 0x10;
      v4 = (1 << v2) & 0x1CE00;
      if (!v3 && v4 != 0) {
        *(_WORD*)(result + 136) |= 0x80u;
      }
    }
    *(_WORD*)(result + 136) |= 8u;
  }
  return result;
}

#pragma GCC visibility pop
