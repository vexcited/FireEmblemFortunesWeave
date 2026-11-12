#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_mem_StandardAllocator_Free(_QWORD);
extern __int64 fw_memory_g_heap_manager_ptr;
__int64
EntryMemory_Destructor_alt1(__int64 result) __asm__("EntryMemory_Destructor");
__int64 EntryMemory_Unknown2(__int64 result, __int64 a2);
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void EntryMemory_Destructor(__int64 a1);

void EntryMemory_Destructor(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  __int64 v4;
  __int64 v5;
  __int64* v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;

  v1 = *(_QWORD*)(a1 + 16);
  if (v1 != 0) {
    v2 = *(_QWORD*)(a1 + 24);
    v4 = fw_memory_g_heap_manager_ptr;
    if (v1 == v2) {
      goto LABEL_21;
    }
    do {
      v6 = *(__int64**)(v2 - 8);
      *(_QWORD*)(v2 - 8) = 0;
      if (v6 != nullptr) {
        v7 = v6[3];
        if (v7 != 0) {
          v8 = *(_QWORD*)v4;
          v6[4] = v7;
          if (*(_QWORD*)(v8 + 200) != 0) {
            v9 = 128;
          }
          else {
            v9 = 56;
          }
          nn_mem_StandardAllocator_Free_alt1(v8 + v9, v7);
        }
        v10 = *v6;
        if (*v6 != 0) {
          v11 = *(_QWORD*)v4;
          v6[1] = v10;
          if (*(_QWORD*)(v11 + 200) != 0) {
            v12 = 128;
          }
          else {
            v12 = 56;
          }
          nn_mem_StandardAllocator_Free_alt1(v11 + v12, v10);
        }
        if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) != 0) {
          v5 = 128;
        }
        else {
          v5 = 56;
        }
        nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v4 + v5, (__int64)v6);
      }
      v2 -= 16;
    } while (v2 != v1);
    v13 = *(_QWORD*)(a1 + 16);
    *(_QWORD*)(a1 + 24) = v1;
    v1 = v13;
    if (v13 != 0) {
    LABEL_21:
      v14 = 128;
      if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) == 0) {
        v14 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v4 + v14, v1);
    }
  }
}

__int64 EntryMemory_Unknown2(__int64 result, __int64 a2)
{
  _QWORD* v2;
  _QWORD* v3;
  __int64 v4;

  v2 = *(_QWORD**)(result + 16);
  v3 = *(_QWORD**)(result + 24);
  while (v2 != v3) {
    if (*v2 == a2) {
      v4 = v2[1];
      *v2 = 0;
      *(_BYTE*)(v4 + 56) = 0;
    }
    v2 += 2;
  }
  return result;
}

#pragma GCC visibility pop
