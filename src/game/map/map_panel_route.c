#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_f1cba0(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64 (*game_map_MapPanelRoute_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
__int64 MapPanelRoute_Destructor(_QWORD* a1);
__int64 MapPanelRoute_DeletingDestructor(_QWORD* a1);
extern __int64 (*game_map_RouteMeshData_vtable[])();
extern __int64* GameData_212f8b0[14];
_QWORD* MapPanelRoute_f1cba0(_QWORD* result);

__int64 MapPanelRoute_Destructor(_QWORD* a1)
{
  __int64 v1;
  _QWORD* v2;

  v1 = a1[6];
  *a1 = game_map_MapPanelRoute_vtable;
  if (v1 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v1 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    v2 = a1;
    (*(void (**)(__int64))(*(_QWORD*)v1 + 16LL))(v1);
    std___1___shared_weak_count___release_weak(v1);
    a1 = v2;
  }
  return GameRoutine_f1cba0(a1[3]);
}

__int64 MapPanelRoute_DeletingDestructor(_QWORD* a1)
{
  __int64 v1;
  __int64 v3;

  v1 = a1[6];
  *a1 = game_map_MapPanelRoute_vtable;
  if (v1 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v1 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v1 + 16LL))(v1);
    std___1___shared_weak_count___release_weak(v1);
  }
  GameRoutine_f1cba0(a1[3]);
  v3 = 128;
  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
    v3 = 56;
  }
  return nn_mem_StandardAllocator_Free(
      *(_QWORD*)fw_memory_g_heap_manager_ptr + v3, a1);
}

_QWORD* MapPanelRoute_f1cba0(_QWORD* result)
{
  _QWORD* v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  void (***v7)(_QWORD);
  void (***v8)(_QWORD);
  void (***v9)(_QWORD);
  void (***v10)(_QWORD);
  void (**v11)(_QWORD);
  bool v12;
  void (***v13)(_QWORD);
  __int64 v14;
  __int64 v15;

  if (result != nullptr) {
    v1 = result;
    MapPanelRoute_f1cba0(*result);
    MapPanelRoute_f1cba0(v1[1]);
    v2 = v1[38];
    v1[6] = game_map_RouteMeshData_vtable;
    if (v2 != 0) {
      std___1___shared_weak_count___release_weak(v2);
    }
    v3 = v1[21];
    v1[6] = GameData_212f8b0[0] + 2;
    v4 = fw_memory_g_heap_manager_ptr;
    if (v3 != 0) {
      v5 = *(_QWORD*)fw_memory_g_heap_manager_ptr;
      v1[22] = v3;
      v6 = 128;
      if (*(_QWORD*)(v5 + 200) == 0) {
        v6 = 56;
      }
      nn_mem_StandardAllocator_Free(v5 + v6, v3);
    }
    v7 = (void (***)(_QWORD))v1[18];
    if (v7 != nullptr) {
      v8 = (void (***)(_QWORD))v1[19];
      if (v7 == v8) {
        goto LABEL_14;
      }
      v9 = v8 - 8;
      v10 = v8 - 8;
      do {
        v11 = *v10;
        v10 -= 8;
        (*v11)(v9);
        v12 = v9 == v7;
        v9 = v10;
      } while (!v12);
      v13 = (void (***)(_QWORD))v1[18];
      v1[19] = v7;
      v7 = v13;
      if (v13 != nullptr) {
      LABEL_14:
        v14 = 128;
        if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) == 0) {
          v14 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)v4 + v14, v7);
      }
    }
    v15 = 128;
    if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) == 0) {
      v15 = 56;
    }
    return (_QWORD*)nn_mem_StandardAllocator_Free(*(_QWORD*)v4 + v15, v1);
  }
  return result;
}

#pragma GCC visibility pop
