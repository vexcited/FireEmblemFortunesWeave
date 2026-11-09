#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64 (*base_time_Manager_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
void __attribute__((noreturn)) GameRoutine_17db4b0(void);
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
_QWORD* Manager_Destructor_17dab60(_QWORD* result);
__int64 Manager_DeletingDestructor_17dac60(_QWORD* a1);
_QWORD* Manager_17dad60(_QWORD* result, __int64 a2);

_QWORD* Manager_Destructor_17dab60(_QWORD* result)
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

  v1 = result[28];
  v2 = result;
  *result = base_time_Manager_vtable;
  v3 = fw_memory_g_heap_manager_ptr;
  if (v1 != 0) {
    v4 = result[29];
    if (v1 == v4) {
      goto LABEL_8;
    }
    do {
      result = *(_QWORD**)(v4 - 8);
      if (result != nullptr) {
        result = (_QWORD*)std___1___shared_weak_count___release_weak(result);
      }
      v4 -= 16;
    } while (v4 != v1);
    v5 = v2[28];
    v2[29] = v1;
    v1 = v5;
    if (v5 != 0) {
    LABEL_8:
      v6 = 128;
      if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
        v6 = 56;
      }
      result = (_QWORD*)nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v6, v1);
    }
  }
  v7 = v2[25];
  if (v7 != 0) {
    v8 = *(_QWORD*)v3;
    v2[26] = v7;
    v9 = 128;
    if (*(_QWORD*)(v8 + 200) == 0) {
      v9 = 56;
    }
    return (_QWORD*)nn_mem_StandardAllocator_Free(v8 + v9, v7);
  }
  return result;
}

__int64 Manager_DeletingDestructor_17dac60(_QWORD* a1)
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

  v1 = a1[28];
  *a1 = base_time_Manager_vtable;
  v3 = fw_memory_g_heap_manager_ptr;
  if (v1 != 0) {
    v4 = a1[29];
    if (v1 == v4) {
      goto LABEL_8;
    }
    do {
      v5 = *(_QWORD*)(v4 - 8);
      if (v5 != 0) {
        std___1___shared_weak_count___release_weak(v5);
      }
      v4 -= 16;
    } while (v4 != v1);
    v6 = a1[28];
    a1[29] = v1;
    v1 = v6;
    if (v6 != 0) {
    LABEL_8:
      v7 = 128;
      if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
        v7 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v7, v1);
    }
  }
  v8 = a1[25];
  if (v8 != 0) {
    v9 = *(_QWORD*)v3;
    a1[26] = v8;
    v10 = 128;
    if (*(_QWORD*)(v9 + 200) == 0) {
      v10 = 56;
    }
    nn_mem_StandardAllocator_Free(v9 + v10, v8);
  }
  v11 = 128;
  if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
    v11 = 56;
  }
  return nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v11, a1);
}

_QWORD* Manager_17dad60(_QWORD* result, __int64 a2)
{
  unsigned __int64 v2;
  _QWORD* v3;
  _QWORD* v4;
  __int64 v5;
  __int64 v6;
  char* v7;
  __int64 v8;
  unsigned __int64 v9;
  __int64 v10;
  __int64 v11;
  unsigned __int64 v12;
  __int64 v13;
  __int64 v14;
  unsigned __int64 v15;
  __int64 v16;
  __int64 v17;

  v3 = (_QWORD*)result[26];
  v2 = result[27];
  v4 = result;
  if ((unsigned __int64)v3 >= v2) {
    v6 = result[25];
    v7 = (char*)v3 - v6;
    v8 = ((__int64)v3 - v6) >> 3;
    v9 = v8 + 1;
    if ((unsigned __int64)(v8 + 1) >> 61 != 0) {
      GameRoutine_17db4b0();
    }
    v10 = v2 - v6;
    v11 = fw_memory_g_heap_manager_ptr;
    if (v10 >> 2 > v9) {
      v9 = v10 >> 2;
    }
    if ((unsigned __int64)v10 >= 0x7FFFFFFFFFFFFFF8LL) {
      v12 = 0x1FFFFFFFFFFFFFFFLL;
    }
    else {
      v12 = v9;
    }
    if (v12 != 0) {
      if (v12 >> 61 != 0) {
        GameRoutine_60a210(result);
      }
      v13 = a2;
      v14 = fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v12, 16, 0);
      a2 = v13;
    }
    else {
      v14 = 0;
    }
    v15 = v14 + 8 * v12;
    v16 = (__int64)&v7[v14 + -8 * v8];
    *(_QWORD*)&v7[v14] = a2;
    v5 = (__int64)&v7[v14 + 8];
    result = (_QWORD*)memcpy(v16, v6, v7);
    v4[25] = v16;
    v4[26] = v5;
    v4[27] = v15;
    if (v6 != 0) {
      v17 = 128;
      if (*(_QWORD*)(*(_QWORD*)v11 + 200LL) == 0) {
        v17 = 56;
      }
      result = (_QWORD*)nn_mem_StandardAllocator_Free(*(_QWORD*)v11 + v17, v6);
    }
  }
  else {
    *v3 = a2;
    v5 = (__int64)(v3 + 1);
  }
  v4[26] = v5;
  return result;
}

#pragma GCC visibility pop
