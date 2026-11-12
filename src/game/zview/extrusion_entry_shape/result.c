#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_mem_StandardAllocator_Free(_QWORD);
extern __int64 (*game_zview_ExtrusionEntryShape_Result_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
__int64
Result_DeletingDestructor_alt1(_QWORD* a1) __asm__("Result_DeletingDestructor");
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void Result_DeletingDestructor(_QWORD* a1);

void Result_DeletingDestructor(_QWORD* a1)
{
  void (***v2)(_QWORD);
  void (***v3)(_QWORD);
  __int64 v4;

  *a1 = game_zview_ExtrusionEntryShape_Result_vtable;
  v2 = (void (***)(_QWORD))a1[1];
  if (v2 != nullptr) {
    (**v2)(v2);
    a1[1] = 0;
  }
  v3 = (void (***)(_QWORD))a1[2];
  if (v3 != nullptr) {
    (**v3)(v3);
  }
  v4 = 128;
  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
    v4 = 56;
  }
  nn_mem_StandardAllocator_Free_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr + v4, (__int64)a1);
}

#pragma GCC visibility pop
