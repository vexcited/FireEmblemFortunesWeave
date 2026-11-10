#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_mem_StandardAllocator_Free(_QWORD);
extern __int64 fw_memory_g_heap_manager_ptr;
__int64* Section_18db560(__int64* result);
__int64 Section_18db600(__int64 result);
__int64* Section_18db740(__int64* result);

__int64* Section_18db560(__int64* result)
{
  __int64 v1;
  __int64 v2;
  __int64* v3;
  __int64 v4;
  __int64 v5;

  v1 = *result;
  if (*result != 0) {
    v2 = result[1];
    v3 = result;
    if (v1 == v2) {
      goto LABEL_5;
    }
    do {
      v2 -= 72;
      result = (__int64*)Section_18db600(v2);
    } while (v2 != v1);
    v4 = *v3;
    v3[1] = v1;
    if (v4 != 0) {
    LABEL_5:
      v5 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v5 = 56;
      }
      return (__int64*)nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v5);
    }
  }
  return result;
}

__int64 Section_18db600(__int64 result)
{
  __int64 v1;
  _QWORD* v2;
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

  v1 = *(_QWORD*)(result + 48);
  v2 = (_QWORD*)result;
  v3 = fw_memory_g_heap_manager_ptr;
  if (v1 != 0) {
    v4 = *(_QWORD*)fw_memory_g_heap_manager_ptr;
    *(_QWORD*)(result + 56) = v1;
    v5 = 128;
    if (*(_QWORD*)(v4 + 200) == 0) {
      v5 = 56;
    }
    result = nn_mem_StandardAllocator_Free(v4 + v5);
  }
  v6 = v2[3];
  if (v6 != 0) {
    v7 = v2[4];
    if (v6 == v7) {
      goto LABEL_15;
    }
    v8 = v2[4];
    do {
      v10 = *(_QWORD*)(v8 - 24);
      v8 -= 24;
      v9 = v10;
      if (v10 != 0) {
        *(_QWORD*)(v7 - 16) = v9;
        if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) != 0) {
          v11 = 128;
        }
        else {
          v11 = 56;
        }
        result = nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v11);
      }
      v7 = v8;
    } while (v8 != v6);
    v12 = v2[3];
    v2[4] = v6;
    if (v12 != 0) {
    LABEL_15:
      v13 = 128;
      if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
        v13 = 56;
      }
      result = nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v13);
    }
  }
  if (*v2 != 0) {
    v14 = 128;
    if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
      v14 = 56;
    }
    return nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v14);
  }
  return result;
}

__int64* Section_18db740(__int64* result)
{
  __int64 v1;
  __int64 v2;
  __int64* v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;

  v1 = *result;
  if (*result != 0) {
    v2 = result[1];
    v3 = result;
    v4 = fw_memory_g_heap_manager_ptr;
    if (v1 == v2) {
      goto LABEL_11;
    }
    v5 = result[1];
    do {
      v7 = *(_QWORD*)(v5 - 24);
      v5 -= 24;
      v6 = v7;
      if (v7 != 0) {
        *(_QWORD*)(v2 - 16) = v6;
        if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) != 0) {
          v8 = 128;
        }
        else {
          v8 = 56;
        }
        result = (__int64*)nn_mem_StandardAllocator_Free(*(_QWORD*)v4 + v8);
      }
      v2 = v5;
    } while (v5 != v1);
    v9 = *v3;
    v3[1] = v1;
    if (v9 != 0) {
    LABEL_11:
      v10 = 128;
      if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) == 0) {
        v10 = 56;
      }
      return (__int64*)nn_mem_StandardAllocator_Free(*(_QWORD*)v4 + v10);
    }
  }
  return result;
}

#pragma GCC visibility pop
