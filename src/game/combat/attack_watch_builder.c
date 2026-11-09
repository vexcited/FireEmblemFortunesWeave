#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_mem_StandardAllocator_Free(_QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64 (*game_combat_AttackWatchBuilder_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
_QWORD* AttackWatchBuilder_Destructor(_QWORD* result);

_QWORD* AttackWatchBuilder_Destructor(_QWORD* result)
{
  __int64 v1;
  __int64 v2;
  _QWORD* v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;

  v2 = result[2];
  v1 = result[3];
  v3 = result;
  *result = game_combat_AttackWatchBuilder_vtable;
  v4 = v2;
  if (v2 != v1) {
    do {
      v5 = *(_QWORD*)(v1 - 8);
      if (v5 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                                      0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
        result = (_QWORD*)std___1___shared_weak_count___release_weak(v5);
      }
      v1 -= 16;
    } while (v1 != v2);
    v4 = v3[2];
  }
  v3[3] = v2;
  if (v4 != 0) {
    if (v4 == v2) {
      v3[3] = v4;
    }
    else {
      do {
        v6 = *(_QWORD*)(v2 - 8);
        if (v6 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v6 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
          result = (_QWORD*)std___1___shared_weak_count___release_weak(v6);
        }
        v2 -= 16;
      } while (v2 != v4);
      v7 = v3[2];
      v3[3] = v4;
      if (v7 == 0) {
        return result;
      }
    }
    v8 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v8 = 56;
    }
    return (_QWORD*)nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v8);
  }
  return result;
}

#pragma GCC visibility pop
