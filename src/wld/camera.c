#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64* GameData_212e740[2];
__int64 Camera_DeletingDestructor_a7fcc0(_QWORD* a1);

__int64 Camera_DeletingDestructor_a7fcc0(_QWORD* a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;

  v2 = a1[46];
  *a1 = GameData_212e740[0] + 2;
  v3 = fw_memory_g_heap_manager_ptr;
  if (v2 != 0) {
    v4 = a1[47];
    if (v2 == v4) {
      goto LABEL_8;
    }
    do {
      v5 = *(_QWORD*)(v4 - 8);
      *(_QWORD*)(v4 - 8) = 0;
      if (v5 != 0) {
        (*(void (**)(__int64))(*(_QWORD*)v5 + 8LL))(v5);
      }
      v4 -= 24;
    } while (v4 != v2);
    v6 = a1[46];
    a1[47] = v2;
    v2 = v6;
    if (v6 != 0) {
    LABEL_8:
      v7 = 128;
      if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
        v7 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v7, v2);
    }
  }
  v8 = 128;
  if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
    v8 = 56;
  }
  return nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v8, a1);
}

#pragma GCC visibility pop
