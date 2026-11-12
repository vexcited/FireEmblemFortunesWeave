#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_mem_StandardAllocator_Free(_QWORD);
extern __int64 (*game_GameUnitRecord_Impl_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
_QWORD*
Impl_Destructor_130c420_alt1(_QWORD* result) __asm__("Impl_Destructor_130c420");
__int64 Impl_DeletingDestructor_130c4e0_alt1(_QWORD* a1) __asm__(
    "Impl_DeletingDestructor_130c4e0");
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void Impl_Destructor_130c420(_QWORD* a1);
void Impl_DeletingDestructor_130c4e0(_QWORD* a1);

void Impl_Destructor_130c420(_QWORD* a1)
{
  _QWORD* v1;
  __int64 v3;
  _QWORD* v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;

  v1 = (_QWORD*)a1[3];
  *a1 = game_GameUnitRecord_Impl_vtable;
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
  v6 = a1[1];
  a1[1] = 0;
  if (v6 != 0) {
    v7 = 128;
    if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
      v7 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v3 + v7, v6);
  }
}

void Impl_DeletingDestructor_130c4e0(_QWORD* a1)
{
  _QWORD* v1;
  __int64 v3;
  _QWORD* v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;

  v1 = (_QWORD*)a1[3];
  *a1 = game_GameUnitRecord_Impl_vtable;
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
  v6 = a1[1];
  a1[1] = 0;
  if (v6 != 0) {
    v7 = 128;
    if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
      v7 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v3 + v7, v6);
  }
  v8 = 128;
  if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
    v8 = 56;
  }
  nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v3 + v8, (__int64)a1);
}

#pragma GCC visibility pop
