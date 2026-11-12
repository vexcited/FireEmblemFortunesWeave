#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_mem_StandardAllocator_Free(_QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64 (*game_ConvergeConst_CompResult_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
_QWORD*
CompResult_Destructor_alt1(_QWORD* result) __asm__("CompResult_Destructor");
__int64 std___1___shared_weak_count___release_weak_alt1(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void CompResult_Destructor(_QWORD* a1);

void CompResult_Destructor(_QWORD* a1)
{
  _QWORD* v1;
  __int64 v3;
  _QWORD* v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;

  v1 = (_QWORD*)a1[6];
  *a1 = game_ConvergeConst_CompResult_vtable;
  v3 = fw_memory_g_heap_manager_ptr;
  if (v1 != nullptr) {
    do {
      v4 = (_QWORD*)*v1;
      if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) != 0) {
        v5 = 128;
      }
      else {
        v5 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v3 + v5, (__int64)v1);
      v1 = v4;
    } while (v4 != nullptr);
  }
  v6 = a1[4];
  a1[4] = 0;
  if (v6 != 0) {
    v7 = 128;
    if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
      v7 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v3 + v7, v6);
  }
  v8 = a1[1];
  if (v8 != 0) {
    v9 = a1[2];
    if (v8 == v9) {
      goto LABEL_18;
    }
    do {
      v10 = *(_QWORD*)(v9 - 8);
      if (v10 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v10 + 8),
                                       0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v10 + 16LL))(v10);
        std___1___shared_weak_count___release_weak_alt1(v10);
      }
      v9 -= 16;
    } while (v9 != v8);
    v11 = a1[1];
    a1[2] = v8;
    v8 = v11;
    if (v11 != 0) {
    LABEL_18:
      v12 = 128;
      if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
        v12 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v3 + v12, v8);
    }
  }
}

#pragma GCC visibility pop
