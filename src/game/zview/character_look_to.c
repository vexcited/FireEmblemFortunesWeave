#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64 (*game_zview_CharacterLookTo_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
_QWORD* CharacterLookTo_Destructor(_QWORD* result);

_QWORD* CharacterLookTo_Destructor(_QWORD* result)
{
  __int64 v1;
  _QWORD* v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;

  v1 = result[47];
  v2 = result;
  *result = game_zview_CharacterLookTo_vtable;
  v3 = fw_memory_g_heap_manager_ptr;
  if (v1 != 0) {
    v4 = *(_QWORD*)fw_memory_g_heap_manager_ptr;
    result[48] = v1;
    v5 = 128;
    if (*(_QWORD*)(v4 + 200) == 0) {
      v5 = 56;
    }
    result = (_QWORD*)nn_mem_StandardAllocator_Free(v4 + v5, v1);
  }
  v6 = v2[44];
  if (v6 != 0) {
    v7 = v2[45];
    if (v6 == v7) {
      goto LABEL_13;
    }
    do {
      v8 = *(_QWORD*)(v7 - 8);
      if (v8 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v8 + 8),
                                      0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8);
        result = (_QWORD*)std___1___shared_weak_count___release_weak(v8);
      }
      v7 -= 16;
    } while (v7 != v6);
    v9 = v2[44];
    v2[45] = v6;
    v6 = v9;
    if (v9 != 0) {
    LABEL_13:
      v10 = 128;
      if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
        v10 = 56;
      }
      return (_QWORD*)nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v10, v6);
    }
  }
  return result;
}

#pragma GCC visibility pop
