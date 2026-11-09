#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_7a8220(_QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
__int64 strlen(_QWORD);
extern __int64 fw_memory_g_heap_manager;
extern __int64 fw_memory_g_heap_manager_ptr;
void __attribute__((noreturn)) String_60a1d0(_QWORD);
__int64 Se_80e330(__int64 a1, __int64 a2);

__int64 Se_80e330(__int64 a1, __int64 a2)
{
  unsigned __int64 v4;
  unsigned __int64 v5;
  char* v6;
  __int64 v7;
  __int64 result;
  __int64 v9;
  _QWORD v10[2];
  char* v11;

  v4 = strlen(a2);
  if (v4 >= 0xFFFFFFFFFFFFFFF7LL) {
    String_60a1d0(v4);
  }
  v5 = v4;
  if (v4 >= 0x17) {
    if ((v4 | 7) == 0x17) {
      v7 = 26;
    }
    else {
      v7 = (v4 | 7) + 1;
    }
    v6 = (char*)fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v7, 16,
                                               0);
    v10[1] = v5;
    v11 = v6;
    v10[0] = v7 | 1;
  }
  else {
    LOBYTE(v10[0]) = 2 * v4;
    v6 = (char*)v10 + 1;
    if (v4 == 0) {
      goto LABEL_10;
    }
  }
  memcpy(v6, a2, v5);

LABEL_10:
  v6[v5] = 0;
  result = GameRoutine_7a8220(a1 + 344, v10);
  if ((v10[0] & 1) != 0 && v11 != nullptr) {
    v9 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v9 = 56;
    }
    return nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v9, v11);
  }
  return result;
}

#pragma GCC visibility pop
