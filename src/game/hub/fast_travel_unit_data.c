#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_1212140(_QWORD);
__int64 game_GameVariableTable_Find(_QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64 (*game_hub_FastTravelBase_vtable)();
extern __int64 (*game_hub_FastTravelUnitData_vtable[])();
extern __int64 GameData_220d618;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_GameModeData_instance_;
extern __int64 game_gmap_GmapClock_instance_;
__int64 FastTravelUnitData_Unknown2(__int64 a1);
__int64 FastTravelUnitData_Destructor(__int64 result);
__int64 FastTravelUnitData_DeletingDestructor(__int64 a1);

__int64 FastTravelUnitData_Unknown2(__int64 a1)
{
  _DWORD* v1;
  __int64 v3;
  char v4;
  __int64 result;
  __int64 v6;

  v1 = *(_DWORD**)(a1 + 8);
  if (v1 == nullptr || *v1 != 1 ||
      (*(_BYTE*)(GameData_220d618 + 56) & 4) == 0 ||
      game_gmap_GmapClock_instance_ == 0 ||
      *(__int16*)(game_gmap_GmapClock_instance_ + 22) *
              *(__int16*)(game_gmap_GmapClock_instance_ + 20) *
              *(__int16*)(game_gmap_GmapClock_instance_ + 24) ==
          0) {
    return 0;
  }
  v6 = *(_QWORD*)(a1 + 32);
  GameRoutine_1212140(&v6);
  v3 = *(_QWORD*)(a1 + 32);
  v6 = v3;
  v4 = GameRoutine_1212140(&v6);
  result = 0;
  if ((v4 & 1) != 0 && v3 != 0) {
    if (game_GameModeData_instance_ != 0) {
      result = game_GameVariableTable_Find(
          *(_QWORD*)(game_GameModeData_instance_ + 48),
          *(_QWORD*)(v3 + 24) + 1512LL);
      if (result != 0) {
        return *(_DWORD*)(result + 32) != 0;
      }
    }
    else {
      return 0;
    }
  }
  return result;
}

__int64 FastTravelUnitData_Destructor(__int64 result)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;

  *(_QWORD*)result = game_hub_FastTravelUnitData_vtable;
  if (*(_BYTE*)(result + 144) == 1) {
    if ((*(_BYTE*)(result + 96) & 1) != 0) {
      v1 = *(_QWORD*)(result + 112);
      if (v1 != 0) {
        v2 = result;
        v3 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v3 = 56;
        }
        nn_mem_StandardAllocator_Free(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v3, v1);
        result = v2;
      }
    }
    if ((*(_BYTE*)(result + 72) & 1) != 0) {
      v4 = *(_QWORD*)(result + 88);
      if (v4 != 0) {
        v5 = result;
        v6 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v6 = 56;
        }
        nn_mem_StandardAllocator_Free(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v6, v4);
        result = v5;
      }
    }
  }
  v7 = *(_QWORD*)(result + 16);
  *(_QWORD*)result = &game_hub_FastTravelBase_vtable;
  if (v7 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
    return std___1___shared_weak_count___release_weak(v7);
  }
  return result;
}

__int64 FastTravelUnitData_DeletingDestructor(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;

  *(_QWORD*)a1 = game_hub_FastTravelUnitData_vtable;
  v2 = fw_memory_g_heap_manager_ptr;
  if (*(_BYTE*)(a1 + 144) == 1) {
    if ((*(_BYTE*)(a1 + 96) & 1) != 0) {
      v3 = *(_QWORD*)(a1 + 112);
      if (v3 != 0) {
        v4 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v4 = 56;
        }
        nn_mem_StandardAllocator_Free(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v4, v3);
      }
    }
    if ((*(_BYTE*)(a1 + 72) & 1) != 0) {
      v5 = *(_QWORD*)(a1 + 88);
      if (v5 != 0) {
        v6 = 128;
        if (*(_QWORD*)(*(_QWORD*)v2 + 200LL) == 0) {
          v6 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)v2 + v6, v5);
      }
    }
  }
  v7 = *(_QWORD*)(a1 + 16);
  *(_QWORD*)a1 = &game_hub_FastTravelBase_vtable;
  if (v7 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
    std___1___shared_weak_count___release_weak(v7);
  }
  v8 = 128;
  if (*(_QWORD*)(*(_QWORD*)v2 + 200LL) == 0) {
    v8 = 56;
  }
  return nn_mem_StandardAllocator_Free(*(_QWORD*)v2 + v8, a1);
}

#pragma GCC visibility pop
