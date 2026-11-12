#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_mem_StandardAllocator_Free(_QWORD);
extern __int64 fw_memory_g_heap_manager_ptr;
__int64 TelopFacilityOpen_fd5700_alt1(__int64 result) __asm__(
    "TelopFacilityOpen_fd5700");
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void TelopFacilityOpen_fd5700(__int64* a1);

void TelopFacilityOpen_fd5700(__int64* a1)
{
  __int64 v1;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;

  v1 = a1[3];
  v3 = fw_memory_g_heap_manager_ptr;
  if (v1 != 0) {
    v4 = a1[4];
    if (v1 == v4) {
      goto LABEL_12;
    }
    do {
      if ((*(_BYTE*)(v4 - 24) & 1) != 0) {
        v5 = *(_QWORD*)(v4 - 8);
        if (v5 != 0) {
          if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) != 0) {
            v6 = 128;
          }
          else {
            v6 = 56;
          }
          nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v3 + v6, v5);
        }
      }
      v4 -= 32;
    } while (v4 != v1);
    v7 = a1[3];
    a1[4] = v1;
    v1 = v7;
    if (v7 != 0) {
    LABEL_12:
      v8 = 128;
      if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
        v8 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v3 + v8, v1);
    }
  }
  v9 = *a1;
  if (*a1 != 0) {
    v10 = a1[1];
    if (v9 == v10) {
      goto LABEL_32;
    }
    do {
      if ((*(_BYTE*)(v10 - 24) & 1) != 0) {
        v11 = *(_QWORD*)(v10 - 8);
        if (v11 != 0) {
          if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) != 0) {
            v12 = 128;
          }
          else {
            v12 = 56;
          }
          nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v3 + v12, v11);
        }
      }
      if ((*(_BYTE*)(v10 - 48) & 1) != 0) {
        v13 = *(_QWORD*)(v10 - 32);
        if (v13 != 0) {
          if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) != 0) {
            v14 = 128;
          }
          else {
            v14 = 56;
          }
          nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v3 + v14, v13);
        }
      }
      v10 -= 56;
    } while (v10 != v9);
    v15 = *a1;
    a1[1] = v9;
    v9 = v15;
    if (v15 != 0) {
    LABEL_32:
      v16 = 128;
      if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
        v16 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v3 + v16, v9);
    }
  }
}

#pragma GCC visibility pop
