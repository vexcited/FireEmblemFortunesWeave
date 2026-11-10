#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_1015560(_QWORD);
__int64 GameRoutine_155e140(_QWORD);
__int64 GameRoutine_1563f90(_QWORD, _QWORD);
__int64 GameRoutine_1564060(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64 (*game_map_BattleInfoWindowBase_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
__int64 BattleInfoWindowBase_DeletingDestructor(_QWORD* a1);
__int64 GameRoutine_6e3d00(_QWORD, _QWORD);
__int64 memmove(_QWORD, _QWORD, _QWORD);
__int64
game_map_BattleInfoWindowBase_SetSkillIcons_lambda1_Invoke(__int64 result,
                                                           _DWORD* a2);

__int64 BattleInfoWindowBase_DeletingDestructor(_QWORD* a1)
{
  __int64 v1;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 result;
  __int64 v13;

  v1 = a1[18];
  a1[18] = 0;
  *a1 = game_map_BattleInfoWindowBase_vtable;
  v3 = fw_memory_g_heap_manager_ptr;
  if (v1 != 0) {
    GameRoutine_1015560(v1);
    v4 = 128;
    if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
      v4 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v4, v1);
    v5 = a1[18];
    a1[18] = 0;
    if (v5 != 0) {
      GameRoutine_1015560(v5);
      v6 = 128;
      if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
        v6 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v6, v5);
    }
  }
  v7 = a1[17];
  a1[17] = 0;
  if (v7 != 0) {
    GameRoutine_1015560(v7);
    v8 = 128;
    if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
      v8 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v8, v7);
    v9 = a1[17];
    a1[17] = 0;
    if (v9 != 0) {
      GameRoutine_1015560(v9);
      v10 = 128;
      if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
        v10 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v10, v9);
    }
  }
  GameRoutine_155e140(a1 + 3);
  v11 = a1[15];
  if (v11 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v11 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v11 + 16LL))(v11);
    std___1___shared_weak_count___release_weak(v11);
  }
  GameRoutine_1564060(a1 + 9);
  GameRoutine_1563f90(a1 + 6, a1[7]);
  result = a1[4];
  if (result != 0) {
    result = std___1___shared_weak_count___release_weak(result);
  }
  v13 = a1[2];
  if (v13 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v13 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v13 + 16LL))(v13);
    return std___1___shared_weak_count___release_weak(v13);
  }
  return result;
}

__int64

game_map_BattleInfoWindowBase_SetSkillIcons_lambda1_Invoke(__int64 result,
                                                           _DWORD* a2)
{
  __int64 v2;
  _DWORD* v3;
  _DWORD* v4;
  __int64 v5;
  __int64 v6;
  char* v7;
  signed __int64 v8;

  v2 = *(_QWORD*)(result + 8);
  v4 = *(_DWORD**)v2;
  v3 = *(_DWORD**)(v2 + 8);
  if (v4 != v3) {
    while (((*v4 ^ *a2) & 0xFFF) != 0) {
      if (++v4 == v3) {
        return result;
      }
    }
  }
  if (v4 != v3) {
    v5 = result;
    result = GameRoutine_6e3d00(*(_QWORD*)(result + 16), v4);
    v6 = *(_QWORD*)(v5 + 8);
    v7 = *(char**)(v6 + 8);
    v8 = v7 - (char*)(v4 + 1);
    if (v7 != (char*)(v4 + 1)) {
      result = memmove(v4, v4 + 1, v7 - (char*)(v4 + 1));
    }
    *(_QWORD*)(v6 + 8) = (char*)v4 + v8;
  }
  return result;
}

#pragma GCC visibility pop
