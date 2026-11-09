#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_mem_StandardAllocator_Free(_QWORD);
extern __int64 fw_memory_g_heap_manager_ptr;
__int64 TelopFacilityOpen_fd5700(__int64 result);

__int64 TelopFacilityOpen_fd5700(__int64 result)
{
  __int64 v1;
  __int64* v2;
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

  v1 = *(_QWORD*)(result + 24);
  v2 = (__int64*)result;
  v3 = fw_memory_g_heap_manager_ptr;
  if (v1 != 0) {
    v4 = *(_QWORD*)(result + 32);
    if (v1 == v4) {
      goto LABEL_12;
    }
    do {
      if ((*(_BYTE*)(v4 - 24) & 1) != 0 && *(_QWORD*)(v4 - 8) != 0) {
        if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) != 0) {
          v5 = 128;
        }
        else {
          v5 = 56;
        }
        result = nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v5);
      }
      v4 -= 32;
    } while (v4 != v1);
    v6 = v2[3];
    v2[4] = v1;
    if (v6 != 0) {
    LABEL_12:
      v7 = 128;
      if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
        v7 = 56;
      }
      result = nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v7);
    }
  }
  v8 = *v2;
  if (*v2 != 0) {
    v9 = v2[1];
    if (v8 == v9) {
      goto LABEL_32;
    }
    do {
      if ((*(_BYTE*)(v9 - 24) & 1) != 0 && *(_QWORD*)(v9 - 8) != 0) {
        if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) != 0) {
          v10 = 128;
        }
        else {
          v10 = 56;
        }
        result = nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v10);
      }
      if ((*(_BYTE*)(v9 - 48) & 1) != 0 && *(_QWORD*)(v9 - 32) != 0) {
        if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) != 0) {
          v11 = 128;
        }
        else {
          v11 = 56;
        }
        result = nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v11);
      }
      v9 -= 56;
    } while (v9 != v8);
    v12 = *v2;
    v2[1] = v8;
    if (v12 != 0) {
    LABEL_32:
      v13 = 128;
      if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
        v13 = 56;
      }
      return nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v13);
    }
  }
  return result;
}

#pragma GCC visibility pop
