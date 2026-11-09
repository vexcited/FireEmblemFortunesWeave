#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_190de60(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
extern __int64 (*cspine_SpineCapturerBase_vtable)();
extern __int64 fw_memory_g_heap_manager_ptr;
__int64 SpineCapturerBase_Destructor(__int64 a1);
void GameHr_1919330(__int64 a1, __int64 a2);

void __attribute__((noreturn)) SpineCapturerBase_DeletingDestructor()
{
  __udf(0x8002u);
}

__int64 SpineCapturerBase_Destructor(__int64 a1)
{
  __int64 v2;
  _QWORD* v3;
  unsigned __int64 v4;
  __int64 v5;
  __int64 v6;

  *(_QWORD*)a1 = &cspine_SpineCapturerBase_vtable;
  *(_DWORD*)(a1 + 8) = -1;
  *(_QWORD*)(a1 + 16) = (unsigned __int64)*(unsigned int*)(a1 + 20) << 32;
  *(_QWORD*)(a1 + 24) = 0;
  v2 = *(_QWORD*)(a1 + 80);
  if (v2 != 0) {
    v3 = *(_QWORD**)(a1 + 48);
    v4 = *(_QWORD*)(a1 + 72);
    v5 = fw_memory_g_heap_manager_ptr;
    do {
      --v2;
      *(_QWORD*)(a1 + 72) = ++v4;
      *(_QWORD*)(a1 + 80) = v2;
      if (v4 >= 0x800) {
        if (*v3 != 0) {
          if (*(_QWORD*)(*(_QWORD*)v5 + 200LL) != 0) {
            v6 = 128;
          }
          else {
            v6 = 56;
          }
          nn_mem_StandardAllocator_Free(*(_QWORD*)v5 + v6);
          v3 = *(_QWORD**)(a1 + 48);
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
  return GameRoutine_190de60(a1 + 40);
}

void GameHr_1919330(__int64 a1, __int64 a2)
{
  *(_WORD*)a2 = 0;
  *(_BYTE*)(a2 + 2) = 0;
  *(_WORD*)(a2 + 6) = 42;
}

#pragma GCC visibility pop
