#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_1006d40(_QWORD);
__int64 GameRoutine_658c00(_QWORD);
__int64 game_ProcInst_Unregister(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
extern __int64 (*GameData_1fedaa8[])();
extern __int64 (*game_ProcInst_vtable[])();
extern __int64 (*game_evt_EventManagerBase_ProcRunEventBase_vtable)();
extern __int64 GameData_212c608[2];
extern __int64 GameData_22190c0;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64* GameData_2130638[4];
__int64 ProcRunEvent_Destructor_eacfe0(__int64 a1);
__int64 ProcRunEvent_DeletingDestructor_ead0e0(__int64 a1);
__int64 ProcRunEvent_Unknown19_ead1f0(__int64 result);
__int64 ProcRunEvent_Destructor(_QWORD* a1);
__int64 ProcRunEvent_DeletingDestructor(_QWORD* a1);

__int64 ProcRunEvent_Destructor_eacfe0(__int64 a1)
{
  _QWORD* v2;
  _QWORD* v3;
  _QWORD* v4;
  __int64 v5;
  _QWORD* v6;
  __int64 v7;

  *(_QWORD*)(a1 + 200) = GameData_1fedaa8;
  *(_QWORD*)a1 = &game_evt_EventManagerBase_ProcRunEventBase_vtable;
  if (*(_QWORD*)(a1 + 168) != 0) {
    v2 = *(_QWORD**)(a1 + 160);
    v3 = (_QWORD*)(a1 + 152);
    v4 = *(_QWORD**)(*(_QWORD*)(a1 + 152) + 8LL);
    *(_QWORD*)(*v2 + 8LL) = v4;
    *v4 = *v2;
    *(_QWORD*)(a1 + 168) = 0;
    if (v2 != (_QWORD*)(a1 + 152)) {
      v5 = fw_memory_g_heap_manager_ptr;
      do {
        v6 = (_QWORD*)v2[1];
        if (*(_QWORD*)(*(_QWORD*)v5 + 200LL) != 0) {
          v7 = 128;
        }
        else {
          v7 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)v5 + v7, v2);
        v2 = v6;
      } while (v6 != v3);
    }
  }
  *(_QWORD*)a1 = game_ProcInst_vtable;
  if ((*(_WORD*)(a1 + 136) & 0x100) != 0) {
    *(_WORD*)(a1 + 136) &= ~0x100u;
  }
  game_ProcInst_Unregister(a1);
  return GameRoutine_658c00(a1 + 88);
}

__int64 ProcRunEvent_DeletingDestructor_ead0e0(__int64 a1)
{
  __int64 v2;
  _QWORD* v3;
  _QWORD* v4;
  _QWORD* v5;
  _QWORD* v6;
  __int64 v7;
  __int64 v8;

  *(_QWORD*)(a1 + 200) = GameData_1fedaa8;
  *(_QWORD*)a1 = GameData_2130638[0] + 2;
  v2 = fw_memory_g_heap_manager_ptr;
  if (*(_QWORD*)(a1 + 168) != 0) {
    v3 = *(_QWORD**)(a1 + 160);
    v4 = (_QWORD*)(a1 + 152);
    v5 = *(_QWORD**)(*(_QWORD*)(a1 + 152) + 8LL);
    *(_QWORD*)(*v3 + 8LL) = v5;
    *v5 = *v3;
    *(_QWORD*)(a1 + 168) = 0;
    if (v3 != (_QWORD*)(a1 + 152)) {
      do {
        v6 = (_QWORD*)v3[1];
        if (*(_QWORD*)(*(_QWORD*)v2 + 200LL) != 0) {
          v7 = 128;
        }
        else {
          v7 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)v2 + v7, v3);
        v3 = v6;
      } while (v6 != v4);
    }
  }
  *(_QWORD*)a1 = GameData_212c608[0] + 16;
  if ((*(_WORD*)(a1 + 136) & 0x100) != 0) {
    *(_WORD*)(a1 + 136) &= ~0x100u;
  }
  game_ProcInst_Unregister(a1);
  GameRoutine_658c00(a1 + 88);
  v8 = 128;
  if (*(_QWORD*)(*(_QWORD*)v2 + 200LL) == 0) {
    v8 = 56;
  }
  return nn_mem_StandardAllocator_Free(*(_QWORD*)v2 + v8, a1);
}

__int64 ProcRunEvent_Unknown19_ead1f0(__int64 result)
{
  unsigned int v1;
  bool v2;
  int v3;

  v1 = *(_DWORD*)(result + 208);
  v2 = v1 > 0xC;
  v3 = (1 << v1) & 0x1500;
  if (v2 || v3 == 0) {
    return GameRoutine_1006d40(GameData_22190c0);
  }
  return result;
}

__int64 ProcRunEvent_Destructor(_QWORD* a1)
{
  _QWORD* v2;
  _QWORD* v3;
  _QWORD* v4;
  _QWORD* v5;
  __int64 v6;
  _QWORD* v7;
  __int64 v8;

  *(a1 - 25) = GameData_2130638[0] + 2;
  v2 = a1 - 25;
  *a1 = GameData_1fedaa8;
  if (*(a1 - 4) != 0) {
    v3 = (_QWORD*)*(a1 - 5);
    v4 = a1 - 6;
    v5 = *(_QWORD**)(*(a1 - 6) + 8LL);
    *(_QWORD*)(*v3 + 8LL) = v5;
    *v5 = *v3;
    *(a1 - 4) = 0;
    if (v3 != a1 - 6) {
      v6 = fw_memory_g_heap_manager_ptr;
      do {
        v7 = (_QWORD*)v3[1];
        if (*(_QWORD*)(*(_QWORD*)v6 + 200LL) != 0) {
          v8 = 128;
        }
        else {
          v8 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)v6 + v8, v3);
        v3 = v7;
      } while (v7 != v4);
    }
  }
  *(a1 - 25) = game_ProcInst_vtable;
  if ((*(_WORD*)(a1 - 8) & 0x100) != 0) {
    *((_WORD*)a1 - 32) &= ~0x100u;
  }
  game_ProcInst_Unregister(v2);
  return GameRoutine_658c00(a1 - 14);
}

__int64 ProcRunEvent_DeletingDestructor(_QWORD* a1)
{
  _QWORD* v2;
  __int64 v3;
  _QWORD* v4;
  _QWORD* v5;
  _QWORD* v6;
  _QWORD* v7;
  __int64 v8;
  __int64 v9;

  *(a1 - 25) = GameData_2130638[0] + 2;
  v2 = a1 - 25;
  *a1 = GameData_1fedaa8;
  v3 = fw_memory_g_heap_manager_ptr;
  if (*(a1 - 4) != 0) {
    v4 = (_QWORD*)*(a1 - 5);
    v5 = a1 - 6;
    v6 = *(_QWORD**)(*(a1 - 6) + 8LL);
    *(_QWORD*)(*v4 + 8LL) = v6;
    *v6 = *v4;
    *(a1 - 4) = 0;
    if (v4 != a1 - 6) {
      do {
        v7 = (_QWORD*)v4[1];
        if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) != 0) {
          v8 = 128;
        }
        else {
          v8 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v8, v4);
        v4 = v7;
      } while (v7 != v5);
    }
  }
  *(a1 - 25) = GameData_212c608[0] + 16;
  if ((*(_WORD*)(a1 - 8) & 0x100) != 0) {
    *((_WORD*)a1 - 32) &= ~0x100u;
  }
  game_ProcInst_Unregister(v2);
  GameRoutine_658c00(a1 - 14);
  v9 = 128;
  if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
    v9 = 56;
  }
  return nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v9, v2);
}

#pragma GCC visibility pop
