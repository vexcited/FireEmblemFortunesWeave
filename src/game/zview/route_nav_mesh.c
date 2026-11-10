#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_fe6920(void);
__int64 GameRoutine_fe7660(_QWORD);
__int64 GameRoutine_fe7820(_QWORD, _QWORD);
__int64 GameRoutine_fe7900(float);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 strlen(_QWORD);
__n128 GameRoutine_fe6920_alt1(_QWORD*,
                               __n128 result) __asm__("GameRoutine_fe6920");
__n128 nn_mem_StandardAllocator_Free(_QWORD);
__n128 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64 (*GameData_1ffe6f8[])();
extern __int64 (*game_zview_RouteNavMesh_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64* GameData_212ee30[4];
__n128 RouteNavMesh_Unknown5(_QWORD* a1);
__int64 RouteNavMesh_fe6b60(_QWORD* a1, __int64 a2, __n128 a3);

__n128 RouteNavMesh_Unknown5(_QWORD* a1)
{
  __n128 result;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;

  *a1 = game_zview_RouteNavMesh_vtable;
  GameRoutine_fe6920();
  v3 = a1[3];
  if (v3 != 0) {
    v4 = a1[4];
    if (v3 == v4) {
      goto LABEL_9;
    }
    do {
      v5 = *(_QWORD*)(v4 - 8);
      if (v5 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                                      0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
        result = std___1___shared_weak_count___release_weak(v5);
      }
      v4 -= 16;
    } while (v4 != v3);
    v6 = a1[3];
    a1[4] = v3;
    if (v6 != 0) {
    LABEL_9:
      v7 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v7 = 56;
      }
      result = nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v7);
    }
  }
  v8 = a1[2];
  if (v8 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v8 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64, long double))(*(_QWORD*)v8 + 16LL))(
        v8, *(long double*)&result);
    return std___1___shared_weak_count___release_weak(v8);
  }
  return result;
}

__int64 RouteNavMesh_fe6b60(_QWORD* a1, __int64 a2, __n128 a3)
{
  _QWORD* v5;
  _QWORD* v6;
  _QWORD* v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  _QWORD v12[2];

  GameRoutine_fe6920_alt1(a1, a3);
  v5 = (_QWORD*)fw_memory_HeapManager_Allocate(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 376, 16, 0);
  v6 = v5 + 3;
  v7 = v5;
  v5[1] = 0;
  v5[2] = 0;
  *v5 = GameData_1ffe6f8;
  GameRoutine_fe7660(v5 + 3);
  v8 = a1[2];
  a1[1] = v6;
  a1[2] = v7;
  if (v8 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v8 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8);
    std___1___shared_weak_count___release_weak(v8);
  }
  v9 = a1[1];
  if ((*(_BYTE*)a2 & 1) != 0) {
    v10 = *(_QWORD*)(a2 + 16);
  }
  else {
    v10 = a2 + 1;
  }
  v12[0] = v10;
  v12[1] = strlen(v10);
  GameRoutine_fe7820(v9, v12);
  ++*(_QWORD*)(*GameData_212ee30[0] + 80);
  return GameRoutine_fe7900(0.0f);
}

#pragma GCC visibility pop
