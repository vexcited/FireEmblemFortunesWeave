#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
extern __int64 fw_memory_g_heap_manager_ptr;
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
void __attribute__((noreturn)) GameRoutine_892b20(void);
__int64 game_anonymous_TimelineMerge_Build_closure_Invoke(__int64 result,
                                                          __int64* a2);
__int64 game_anonymous_TimelineMerge_Build_closure0_Invoke(__int64 result,
                                                           __int64* a2);

__int64 game_anonymous_TimelineMerge_Build_closure_Invoke(__int64 result,
                                                          __int64* a2)
{
  __int64 v2;
  unsigned int v3;
  bool v4;
  __int64 v5;
  __int64* v7;
  unsigned __int64 v8;
  _QWORD* v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  unsigned __int64 v13;
  __int64 v14;
  __int64 v15;
  unsigned __int64 v16;
  __int64 v17;
  unsigned __int64 v18;
  __int64 v19;
  __int64 v20;

  v2 = *a2;
  if (*(__int16*)(*(_QWORD*)(*a2 + 24) + 98LL) *
          *(__int16*)(*(_QWORD*)(*a2 + 24) + 96LL) *
          *(__int16*)(*(_QWORD*)(*a2 + 24) + 100LL) !=
      0) {
    v3 = *(unsigned __int8*)(v2 + 33);
    v4 = v3 > 0x24;
    v5 = (1LL << v3) & 0x198007F1C0LL;
    if (!v4 && v5 != 0) {
      v7 = *(__int64**)(result + 8);
      v9 = (_QWORD*)v7[1];
      v8 = v7[2];
      if ((unsigned __int64)v9 >= v8) {
        v11 = *v7;
        v12 = (__int64)v9 - *v7;
        v13 = (v12 >> 3) + 1;
        if (v13 >> 61 != 0) {
          GameRoutine_892b20();
        }
        v14 = v8 - v11;
        v15 = fw_memory_g_heap_manager_ptr;
        if (v14 >> 2 > v13) {
          v13 = v14 >> 2;
        }
        if ((unsigned __int64)v14 >= 0x7FFFFFFFFFFFFFF8LL) {
          v16 = 0x1FFFFFFFFFFFFFFFLL;
        }
        else {
          v16 = v13;
        }
        if (v16 != 0) {
          if (v16 >> 61 != 0) {
            GameRoutine_60a210(result);
          }
          v17 = fw_memory_HeapManager_Allocate(
              *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v16, 16, 0);
        }
        else {
          v17 = 0;
        }
        v18 = v17 + 8 * v16;
        v19 = v17 + v12 - 8 * (v12 >> 3);
        *(_QWORD*)(v17 + v12) = v2;
        v10 = v17 + v12 + 8;
        result = memcpy(v19, v11, v12);
        *v7 = v19;
        v7[1] = v10;
        v7[2] = v18;
        if (v11 != 0) {
          v20 = 128;
          if (*(_QWORD*)(*(_QWORD*)v15 + 200LL) == 0) {
            v20 = 56;
          }
          result = nn_mem_StandardAllocator_Free(*(_QWORD*)v15 + v20);
        }
      }
      else {
        *v9 = v2;
        v10 = (__int64)(v9 + 1);
      }
      v7[1] = v10;
    }
  }
  return result;
}

__int64 game_anonymous_TimelineMerge_Build_closure0_Invoke(__int64 result,
                                                           __int64* a2)
{
  __int64 v2;
  __int64* v3;
  unsigned __int64 v4;
  _QWORD* v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  unsigned __int64 v9;
  __int64 v10;
  __int64 v11;
  unsigned __int64 v12;
  __int64 v13;
  unsigned __int64 v14;
  __int64 v15;
  __int64 v16;

  v2 = *a2;
  if (*(__int16*)(*(_QWORD*)(*a2 + 24) + 98LL) *
              *(__int16*)(*(_QWORD*)(*a2 + 24) + 96LL) *
              *(__int16*)(*(_QWORD*)(*a2 + 24) + 100LL) !=
          0 &&
      (unsigned int)*(unsigned __int8*)(v2 + 33) - 33 <= 1) {
    v3 = *(__int64**)(result + 8);
    v5 = (_QWORD*)v3[1];
    v4 = v3[2];
    if ((unsigned __int64)v5 >= v4) {
      v7 = *v3;
      v8 = (__int64)v5 - *v3;
      v9 = (v8 >> 3) + 1;
      if (v9 >> 61 != 0) {
        GameRoutine_892b20();
      }
      v10 = v4 - v7;
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
        v13 = fw_memory_HeapManager_Allocate(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v12, 16, 0);
      }
      else {
        v13 = 0;
      }
      v14 = v13 + 8 * v12;
      v15 = v13 + v8 - 8 * (v8 >> 3);
      *(_QWORD*)(v13 + v8) = v2;
      v6 = v13 + v8 + 8;
      result = memcpy(v15, v7, v8);
      *v3 = v15;
      v3[1] = v6;
      v3[2] = v14;
      if (v7 != 0) {
        v16 = 128;
        if (*(_QWORD*)(*(_QWORD*)v11 + 200LL) == 0) {
          v16 = 56;
        }
        result = nn_mem_StandardAllocator_Free(*(_QWORD*)v11 + v16);
      }
    }
    else {
      *v5 = v2;
      v6 = (__int64)(v5 + 1);
    }
    v3[1] = v6;
  }
  return result;
}

#pragma GCC visibility pop
