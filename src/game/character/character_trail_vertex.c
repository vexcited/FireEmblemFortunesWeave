#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
extern __int64 fw_memory_g_heap_manager_ptr;
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
void __attribute__((noreturn)) GameRoutine_a78a90(_QWORD);
__int64* CharacterTrailVertex_d35160(__int64* result, _DWORD* a2);

__int64* CharacterTrailVertex_d35160(__int64* result, _DWORD* a2)
{
  unsigned __int64 v2;
  _DWORD* v3;
  __int64* v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  unsigned __int64 v8;
  __int64 v9;
  __int64 v10;
  unsigned __int64 v11;
  _DWORD* v12;
  __int64 v13;
  unsigned __int64 v14;
  __int64 v15;
  __int64 v16;

  v3 = (_DWORD*)result[1];
  v2 = result[2];
  v4 = result;
  if ((unsigned __int64)v3 >= v2) {
    v6 = *result;
    v7 = (__int64)v3 - *result;
    v8 = (v7 >> 2) + 1;
    if (v8 >> 62 != 0) {
      GameRoutine_a78a90(result);
    }
    v9 = v2 - v6;
    v10 = fw_memory_g_heap_manager_ptr;
    if (v9 >> 1 > v8) {
      v8 = v9 >> 1;
    }
    if ((unsigned __int64)v9 >= 0x7FFFFFFFFFFFFFFCLL) {
      v11 = 0x3FFFFFFFFFFFFFFFLL;
    }
    else {
      v11 = v8;
    }
    if (v11 != 0) {
      if (v11 >> 62 != 0) {
        GameRoutine_60a210(result);
      }
      v12 = a2;
      v13 = fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 4 * v11, 16, 0);
      a2 = v12;
    }
    else {
      v13 = 0;
    }
    v14 = v13 + 4 * v11;
    v15 = v13 + v7 - 4 * (v7 >> 2);
    *(_DWORD*)(v13 + v7) = *a2;
    v5 = v13 + v7 + 4;
    result = (__int64*)memcpy(v15, v6, v7);
    *v4 = v15;
    v4[1] = v5;
    v4[2] = v14;
    if (v6 != 0) {
      v16 = 128;
      if (*(_QWORD*)(*(_QWORD*)v10 + 200LL) == 0) {
        v16 = 56;
      }
      result = (__int64*)nn_mem_StandardAllocator_Free(*(_QWORD*)v10 + v16, v6);
    }
  }
  else {
    *v3 = *a2;
    v5 = (__int64)(v3 + 1);
  }
  v4[1] = v5;
  return result;
}

#pragma GCC visibility pop
