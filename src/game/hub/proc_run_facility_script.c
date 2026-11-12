#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_658c00(_QWORD);
__int64 GameRoutine_d8cf60(void);
__int64 game_ProcInst_Unregister(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
extern __int64 (*GameData_1ff0320[])();
extern __int64 (*game_ProcInst_vtable[])();
extern __int64 (*game_hub_ProcRunFacilityScript_vtable[])();
extern __int64 GameData_21f3cb8;
extern __int64 GameData_221fb00;
extern __int64 fw_memory_g_heap_manager_ptr;
__int64 ProcRunFacilityScript_Destructor_alt1(__int64 a1) __asm__(
    "ProcRunFacilityScript_Destructor");
__int64 game_ProcInst_Unregister_alt1(__int64 result) __asm__(
    "game_ProcInst_Unregister");
__int64 game_d8cf60(__int64 result);
void GameRoutine_658c00_alt1(__int64*) __asm__("GameRoutine_658c00");
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void ProcRunFacilityScript_Destructor(__int64 a1);

void ProcRunFacilityScript_Destructor(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  _QWORD* v4;
  __int64 v5;

  *(_QWORD*)a1 = game_hub_ProcRunFacilityScript_vtable;
  if (*(_BYTE*)(a1 + 208) == 1) {
    *(_BYTE*)(a1 + 208) = 0;
    if (GameData_21f3cb8 != 0) {
      game_d8cf60(GameData_21f3cb8);
    }
  }
  if ((*(_BYTE*)(a1 + 216) & 1) != 0) {
    v2 = *(_QWORD*)(a1 + 232);
    if (v2 != 0) {
      v3 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v3 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v3, v2);
    }
  }
  v4 = *(_QWORD**)(a1 + 192);
  *(_QWORD*)a1 = GameData_1ff0320;
  if (v4 == (_QWORD*)(a1 + 160)) {
    v5 = 32;
  }
  else {
    if (v4 == nullptr) {
      goto LABEL_14;
    }
    v5 = 40;
  }
  (*(void (**)(__int64))(*v4 + v5))((__int64)v4);
LABEL_14:
  GameData_221fb00 = 0;
  *(_QWORD*)a1 = game_ProcInst_vtable;
  if ((*(_WORD*)(a1 + 136) & 0x100) != 0) {
    *(_WORD*)(a1 + 136) &= ~0x100u;
  }
  game_ProcInst_Unregister_alt1(a1);
  GameRoutine_658c00_alt1((__int64*)(a1 + 88));
}

#pragma GCC visibility pop
