#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_190de60(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
extern __int64 (*cspine_SpineCapturerBase_vtable)();
extern __int64 fw_memory_g_heap_manager_ptr;
__int64 SpineCapturerBase_Destructor_alt1(__int64 a1) __asm__(
    "SpineCapturerBase_Destructor");
void GameRoutine_190de60_alt1(__int64*) __asm__("GameRoutine_190de60");
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void SpineCapturerBase_Destructor(__int64 a1);

void SpineCapturerBase_Destructor(__int64 a1)
{
  __int64 v2;
  __int64* v3;
  unsigned __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;

  *(_QWORD*)a1 = &cspine_SpineCapturerBase_vtable;
  *(_DWORD*)(a1 + 8) = -1;
  *(_QWORD*)(a1 + 16) = (unsigned __int64)*(unsigned int*)(a1 + 20) << 32;
  *(_QWORD*)(a1 + 24) = 0;
  v2 = *(_QWORD*)(a1 + 80);
  if (v2 != 0) {
    v3 = *(__int64**)(a1 + 48);
    v4 = *(_QWORD*)(a1 + 72);
    v5 = fw_memory_g_heap_manager_ptr;
    do {
      --v2;
      *(_QWORD*)(a1 + 72) = ++v4;
      *(_QWORD*)(a1 + 80) = v2;
      if (v4 >= 0x800) {
        v6 = *v3;
        if (*v3 != 0) {
          if (*(_QWORD*)(*(_QWORD*)v5 + 200LL) != 0) {
            v7 = 128;
          }
          else {
            v7 = 56;
          }
          nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v5 + v7, v6);
          v3 = *(__int64**)(a1 + 48);
          v4 = *(_QWORD*)(a1 + 72);
          v2 = *(_QWORD*)(a1 + 80);
        }
        ++v3;
        v4 -= 1024LL;
        *(_QWORD*)(a1 + 48) = v3;
        *(_QWORD*)(a1 + 72) = v4;
      }
    } while (v2 != 0);
  }
  *(_QWORD*)(a1 + 32) = 0;
  GameRoutine_190de60_alt1((__int64*)(a1 + 40));
}

void __attribute__((noreturn)) SpineCapturerBase_DeletingDestructor()
{
  __udf(0x8002u);
}

#pragma GCC visibility pop
