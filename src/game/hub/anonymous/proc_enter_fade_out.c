#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_658c00(_QWORD);
__int64 game_ProcInst_Unregister(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
extern _UNKNOWN GameData_22350e0;
extern __int64 (*game_ProcInst_vtable[])();
extern __int64 (*game_hub_anonymous_ProcEnterFadeOut_vtable[])();
extern __int64 GameData_2235100;
extern __int64 fw_memory_g_heap_manager_ptr;
__int64 ProcEnterFadeOut_Destructor(__int64 a1);
__int64 ProcEnterFadeOut_DeletingDestructor(__int64 a1);

__int64 ProcEnterFadeOut_Destructor(__int64 a1)
{
  _QWORD* v2;
  __int64 v3;

  *(_QWORD*)a1 = game_hub_anonymous_ProcEnterFadeOut_vtable;
  v2 = (_QWORD*)GameData_2235100;
  GameData_2235100 = 0;
  if (v2 == (_QWORD*)&GameData_22350e0) {
    v3 = 32;
  }
  else {
    if (v2 == nullptr) {
      goto LABEL_6;
    }
    v3 = 40;
  }
  (*(void (**)(__int64))(*v2 + v3))((__int64)v2);
LABEL_6:
  *(_QWORD*)a1 = game_ProcInst_vtable;
  if ((*(_WORD*)(a1 + 136) & 0x100) != 0) {
    *(_WORD*)(a1 + 136) &= ~0x100u;
  }
  game_ProcInst_Unregister(a1);
  return GameRoutine_658c00(a1 + 88);
}

__int64 ProcEnterFadeOut_DeletingDestructor(__int64 a1)
{
  _QWORD* v2;
  __int64 v3;
  __int64 v4;

  *(_QWORD*)a1 = game_hub_anonymous_ProcEnterFadeOut_vtable;
  v2 = (_QWORD*)GameData_2235100;
  GameData_2235100 = 0;
  if (v2 == (_QWORD*)&GameData_22350e0) {
    v3 = 32;
  }
  else {
    if (v2 == nullptr) {
      goto LABEL_6;
    }
    v3 = 40;
  }
  (*(void (**)(__int64))(*v2 + v3))((__int64)v2);
LABEL_6:
  *(_QWORD*)a1 = game_ProcInst_vtable;
  if ((*(_WORD*)(a1 + 136) & 0x100) != 0) {
    *(_WORD*)(a1 + 136) &= ~0x100u;
  }
  game_ProcInst_Unregister(a1);
  GameRoutine_658c00(a1 + 88);
  v4 = 128;
  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
    v4 = 56;
  }
  return nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                       v4);
}

#pragma GCC visibility pop
