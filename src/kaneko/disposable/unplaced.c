#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 std___1___shared_weak_count___release_weak(__int64);
extern __int64 fw_memory_g_heap_manager_ptr;
void __attribute__((noreturn)) GameRoutine_10aaaa0();
void __attribute__((noreturn)) GameRoutine_60a210();
void nn_mem_StandardAllocator_Free(__int64, __int64);
_QWORD* kaneko_disposable_10aa900(__int64* a1, __int64* a2);

_QWORD* kaneko_disposable_10aa900(__int64* a1, __int64* a2)
{
  __int64 v2;
  unsigned __int64 v3;
  unsigned __int64 v5;
  __int64 v6;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  _QWORD* v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  _QWORD* v16;
  _QWORD* v17;
  _QWORD* v18;
  _QWORD* v19;
  _QWORD* v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;

  v2 = a1[1] - *a1;
  v3 = 1 - 0x5555555555555555LL * (v2 >> 3);
  if (v3 > 0xAAAAAAAAAAAAAAALL) {
    GameRoutine_10aaaa0();
  }
  if (0x5555555555555556LL * ((a1[2] - *a1) >> 3) > v3) {
    v3 = 0x5555555555555556LL * ((a1[2] - *a1) >> 3);
  }
  if (0xAAAAAAAAAAAAAAABLL * ((a1[2] - *a1) >> 3) >= 0x555555555555555LL) {
    v5 = 0xAAAAAAAAAAAAAAALL;
  }
  else {
    v5 = v3;
  }
  if (v5 > 0xAAAAAAAAAAAAAAALL) {
    GameRoutine_60a210();
  }
  v6 = 3 * v5;
  v8 = fw_memory_g_heap_manager_ptr;
  v9 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      24 * v5, 16, 0);
  v10 = *a2;
  v11 = a2[1];
  v12 = (_QWORD*)(v9 + v2);
  *a2 = 0;
  a2[1] = 0;
  v13 = v9 + 8 * v6;
  *v12 = v10;
  v12[1] = v11;
  v14 = a2[2];
  v15 = *a1;
  v16 = (_QWORD*)a1[1];
  v17 = v12 + 3;
  v12[2] = v14;
  v18 = (_QWORD*)((char*)v12 + v15 - (_QWORD)v16);
  if ((_QWORD*)v15 != v16) {
    v19 = (_QWORD*)v15;
    v20 = v18;
    do {
      *v20 = *v19;
      v20[1] = v19[1];
      *v19 = 0;
      v19[1] = 0;
      v21 = v19[2];
      v19 += 3;
      v20[2] = v21;
      v20 += 3;
    } while (v19 != v16);
    do {
      v22 = *(_QWORD*)(v15 + 8);
      if (v22 != 0) {
        std___1___shared_weak_count___release_weak(v22);
      }
      v15 += 24;
    } while ((_QWORD*)v15 != v16);
    v15 = *a1;
  }
  *a1 = (__int64)v18;
  a1[1] = (__int64)v17;
  a1[2] = v13;
  if (v15 != 0) {
    v23 = 128;
    if (*(_QWORD*)(*(_QWORD*)v8 + 200LL) == 0) {
      v23 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)v8 + v23, v15);
  }
  return v17;
}

#pragma GCC visibility pop
