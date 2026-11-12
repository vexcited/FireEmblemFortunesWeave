#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 memcpy(__int64, __int64, unsigned __int64);
__int64 memset(__int64, int, unsigned __int64);
extern __int64 fw_memory_g_heap_manager_ptr;
void __attribute__((noreturn)) GameRoutine_60a210();
void __attribute__((noreturn)) GameRoutine_bbce10();
void nn_mem_StandardAllocator_Free(__int64, __int64);
void gfxa_anonymous_bbccb0(__int64* a1, unsigned __int64 a2);

void gfxa_anonymous_bbccb0(__int64* a1, unsigned __int64 a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v6;
  signed __int64 v7;
  __int64 v8;
  unsigned __int64 v9;
  __int64 v10;
  __int64 v11;
  unsigned __int64 v12;
  __int64 v13;
  __int64 v14;
  unsigned __int64 v15;
  __int64 v16;

  v3 = a1[1];
  v2 = a1[2];
  if (a2 <= (v2 - v3) >> 4) {
    memset(a1[1], 0, 16 * a2);
    a1[1] = v3 + 16 * a2;
  }
  else {
    v6 = *a1;
    v7 = v3 - *a1;
    v8 = v7 >> 4;
    v9 = (v7 >> 4) + a2;
    if (v9 >> 60 != 0) {
      GameRoutine_bbce10();
    }
    v10 = v2 - v6;
    v11 = fw_memory_g_heap_manager_ptr;
    if (v10 >> 3 > v9) {
      v9 = v10 >> 3;
    }
    if ((unsigned __int64)v10 >= 0x7FFFFFFFFFFFFFF0LL) {
      v12 = 0xFFFFFFFFFFFFFFFLL;
    }
    else {
      v12 = v9;
    }
    if (v12 != 0) {
      if (v12 >> 60 != 0) {
        GameRoutine_60a210();
      }
      v13 = fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 16 * v12, 16, 0);
    }
    else {
      v13 = 0;
    }
    v14 = v13 + v7;
    v15 = v13 + 16 * v12;
    memset(v13 + v7, 0, 16 * a2);
    memcpy(v14 - 16 * v8, v6, v7);
    *a1 = v14 - 16 * v8;
    a1[1] = v14 + 16 * a2;
    a1[2] = v15;
    if (v6 != 0) {
      v16 = 128;
      if (*(_QWORD*)(*(_QWORD*)v11 + 200LL) == 0) {
        v16 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v11 + v16, v6);
    }
  }
}

#pragma GCC visibility pop
