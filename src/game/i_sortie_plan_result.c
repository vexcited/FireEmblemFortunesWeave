#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_mem_StandardAllocator_Free(_QWORD);
extern __int64 (*game_ISortiePlanResult_vtable)();
extern __int64 fw_memory_g_heap_manager;
_QWORD* ISortiePlanResult_Destructor_alt1(_QWORD* result) __asm__(
    "ISortiePlanResult_Destructor");
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void ISortiePlanResult_Destructor(_QWORD* a1);

void ISortiePlanResult_Destructor(_QWORD* a1)
{
  _QWORD* v1;
  _QWORD* v2;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;

  v1 = (_QWORD*)a1[4];
  v2 = (_QWORD*)a1[5];
  *a1 = &game_ISortiePlanResult_vtable;
  a1[2] = a1[1];
  if (v1 != v2) {
    do {
      if (*v1 != 0) {
        (*(void (**)(_QWORD))(*(_QWORD*)*v1 + 8LL))(*v1);
      }
      ++v1;
    } while (v1 != v2);
    v1 = (_QWORD*)a1[4];
  }
  a1[5] = v1;
  if (v1 != nullptr) {
    v4 = 128;
    if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
      v4 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(fw_memory_g_heap_manager + v4,
                                       (__int64)v1);
  }
  v5 = a1[1];
  if (v5 != 0) {
    v6 = fw_memory_g_heap_manager;
    a1[2] = v5;
    v7 = 128;
    if (*(_QWORD*)(v6 + 200) == 0) {
      v7 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(v6 + v7, v5);
  }
}

#pragma GCC visibility pop
