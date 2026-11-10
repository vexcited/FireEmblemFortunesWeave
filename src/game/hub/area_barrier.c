#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__n128 nn_mem_StandardAllocator_Free(_QWORD);
__n128 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64 (*GameData_1ffcb78[])();
extern __int64 GameData_22124c8;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64* GameData_212fb18[3];
extern int GameData_222b910;
__n128 AreaBarrier_DeletingDestructor(_QWORD* a1);

__n128 AreaBarrier_DeletingDestructor(_QWORD* a1)
{
  _QWORD* v1;
  __int64 v2;
  _QWORD* v3;
  __int64 v4;

  v1 = a1 - 1;
  v2 = a1[2];
  *a1 = GameData_212fb18[0] + 2;
  if (v2 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v2 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    v3 = a1 - 1;
    (*(void (**)(__int64))(*(_QWORD*)v2 + 16LL))(v2);
    std___1___shared_weak_count___release_weak(v2);
    v1 = v3;
  }
  *v1 = GameData_1ffcb78;
  if ((_QWORD*)GameData_22124c8 == v1) {
    GameData_22124c8 = 0;
    GameData_222b910 = 0;
  }
  v4 = 128;
  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
    v4 = 56;
  }
  return nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                       v4);
}

#pragma GCC visibility pop
