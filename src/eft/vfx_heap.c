#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_mem_StandardAllocator_Free(_QWORD);
extern __int64 fw_memory_g_heap_manager_ptr;
__int64 VfxHeap_Unknown3_alt1(__int64 a1,
                              __int64 a2) __asm__("VfxHeap_Unknown3");
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void VfxHeap_Unknown3(__int64 a1, __int64 a2);

void VfxHeap_Unknown3(__int64 a1, __int64 a2)
{
  __int64 v2;

  if (a2 != 0) {
    v2 = 528;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 600LL) == 0) {
      v2 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v2, a2);
  }
}

#pragma GCC visibility pop
