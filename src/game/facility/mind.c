#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_145ca80(_QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
extern __int64 (*GameData_1fae598[])();
extern __int64 (*game_facility_Mind_vtable[])();
extern __int64 GameData_21f3ff8;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_UnitListSet_instance_;
extern int GameData_21f3ff4;
__int64 Mind_Destructor_alt1(_QWORD* a1) __asm__("Mind_Destructor");
__int64
Mind_DeletingDestructor_alt1(_QWORD* a1) __asm__("Mind_DeletingDestructor");
void GameHr_145ca80(__int64**, __int64*);
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void Mind_Destructor(_QWORD* a1);
void Mind_DeletingDestructor(_QWORD* a1);

void Mind_Destructor(_QWORD* a1)
{
  __int64 v2;
  __int64* v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;

  *a1 = game_facility_Mind_vtable;
  GameHr_145ca80((__int64**)&game_UnitListSet_instance_, nullptr);
  v2 = a1[9];
  v3 = (__int64*)fw_memory_g_heap_manager_ptr;
  if (v2 != 0) {
    v4 = *(_QWORD*)fw_memory_g_heap_manager_ptr;
    a1[10] = v2;
    v5 = 128;
    if (*(_QWORD*)(v4 + 200) == 0) {
      v5 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(v4 + v5, v2);
  }
  v6 = a1[6];
  if (v6 != 0) {
    v7 = *v3;
    a1[7] = v6;
    v8 = 128;
    if (*(_QWORD*)(v7 + 200) == 0) {
      v8 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(v7 + v8, v6);
  }
  *a1 = GameData_1fae598;
  if ((_QWORD*)GameData_21f3ff8 == a1) {
    GameData_21f3ff8 = 0;
    GameData_21f3ff4 = 0;
  }
}

void Mind_DeletingDestructor(_QWORD* a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;

  *a1 = game_facility_Mind_vtable;
  GameHr_145ca80((__int64**)&game_UnitListSet_instance_, nullptr);
  v2 = a1[9];
  v3 = fw_memory_g_heap_manager_ptr;
  if (v2 != 0) {
    v4 = *(_QWORD*)fw_memory_g_heap_manager_ptr;
    a1[10] = v2;
    v5 = 128;
    if (*(_QWORD*)(v4 + 200) == 0) {
      v5 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(v4 + v5, v2);
  }
  v6 = a1[6];
  if (v6 != 0) {
    v7 = *(_QWORD*)v3;
    a1[7] = v6;
    v8 = 128;
    if (*(_QWORD*)(v7 + 200) == 0) {
      v8 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(v7 + v8, v6);
  }
  *a1 = GameData_1fae598;
  if ((_QWORD*)GameData_21f3ff8 == a1) {
    GameData_21f3ff8 = 0;
    GameData_21f3ff4 = 0;
  }
  v9 = 128;
  if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
    v9 = 56;
  }
  nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v3 + v9, (__int64)a1);
}

#pragma GCC visibility pop
