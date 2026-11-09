#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_1488580(__int64 result, unsigned __int8);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
extern __int64 (*GameData_20431b0[])();
extern __int64 (*game_facility_SceneSoundManager_Impl_vtable[])();
extern __int64 GameData_224ae20;
extern __int64 fw_memory_g_heap_manager_ptr;
extern int GameData_224ae28;
__int64 Impl_Destructor_1488d50(_QWORD* a1);

__int64 Impl_Destructor_1488d50(_QWORD* a1)
{
  __int64 result;
  __int64 v3;
  __int64* v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;

  *a1 = game_facility_SceneSoundManager_Impl_vtable;
  GameRoutine_1488580((__int64)a1, 0);
  result = GameRoutine_1488580((__int64)a1, 1u);
  v3 = a1[4];
  v4 = (__int64*)fw_memory_g_heap_manager_ptr;
  if (v3 != 0) {
    v5 = *(_QWORD*)fw_memory_g_heap_manager_ptr;
    a1[5] = v3;
    v6 = 128;
    if (*(_QWORD*)(v5 + 200) == 0) {
      v6 = 56;
    }
    result = nn_mem_StandardAllocator_Free(v5 + v6, v3);
  }
  v7 = a1[1];
  if (v7 != 0) {
    v8 = *v4;
    a1[2] = v7;
    v9 = 128;
    if (*(_QWORD*)(v8 + 200) == 0) {
      v9 = 56;
    }
    result = nn_mem_StandardAllocator_Free(v8 + v9, v7);
  }
  *a1 = GameData_20431b0;
  if ((_QWORD*)GameData_224ae20 == a1) {
    GameData_224ae20 = 0;
    GameData_224ae28 = 0;
  }
  return result;
}

#pragma GCC visibility pop
