#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_lmem_AllocateFromFrameHeap(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
extern __int64 (*base_thread_ExecutorBase_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
_QWORD*
ExecutorBase_Unknown2_alt1(_QWORD* result) __asm__("ExecutorBase_Unknown2");
__int64 ScratchMemoryResource_Unknown2(__int64 a1, __int64 a2,
                                       unsigned __int64 a3);
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void ExecutorBase_Unknown2(_QWORD* a1);

void ExecutorBase_Unknown2(_QWORD* a1)
{
  __int64 v1;
  __int64 v2;

  v1 = a1[3];
  a1[3] = 0;
  *a1 = base_thread_ExecutorBase_vtable;
  if (v1 != 0) {
    v2 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v2 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v2, v1);
  }
}

void __attribute__((noreturn)) ExecutorBase_Unknown3() { __udf(0x8002u); }

#pragma GCC visibility pop
