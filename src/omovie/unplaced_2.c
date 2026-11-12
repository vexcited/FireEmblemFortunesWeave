#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__attribute__((swiftcall)) void GameRoutine_18d0d60(PSEUDO_X8, _QWORD* result,
                                                    _QWORD*);
extern __int64 fw_memory_g_heap_manager_ptr;
void GameRoutine_18d1570(__int64);
void nn_mem_StandardAllocator_Free(__int64, __int64);
__int64 omovie_18d0c60(_QWORD* a1, __int64* a2);

__int64 omovie_18d0c60(_QWORD* a1, __int64* a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  struct {
    __int64 v11;
    char gap16_[8];
    char v12;
  } v11_;

  v2 = *a2;
  GameRoutine_18d0d60((void*)((__int64)&v11_.v11), a1, a2);
  v3 = v11_.v11;
  v11_.v11 = 0;
  if (v3 != 0) {
    v4 = fw_memory_g_heap_manager_ptr;
    if (v11_.v12 == 1) {
      v5 = *(_QWORD*)(v3 + 40);
      *(_QWORD*)(v3 + 40) = 0;
      if (v5 != 0) {
        GameRoutine_18d1570(v5);
        v6 = 128;
        if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) == 0) {
          v6 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)v4 + v6, v5);
      }
      if ((*(_BYTE*)(v3 + 16) & 1) != 0) {
        v7 = *(_QWORD*)(v3 + 32);
        if (v7 != 0) {
          v8 = 128;
          if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) == 0) {
            v8 = 56;
          }
          nn_mem_StandardAllocator_Free(*(_QWORD*)v4 + v8, v7);
        }
      }
    }
    v9 = 128;
    if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) == 0) {
      v9 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)v4 + v9, v3);
  }
  return v2;
}

#pragma GCC visibility pop
