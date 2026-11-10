#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
extern __int64 fw_memory_g_heap_manager_ptr;
void __attribute__((noreturn)) GameRoutine_9433d0(void);
__int64 game_IndependentData_Calculate_lambda0_Invoke(__int64 result,
                                                      unsigned __int8* a2);

__int64 game_IndependentData_Calculate_lambda0_Invoke(__int64 result,
                                                      unsigned __int8* a2)
{
  __int64 v2;
  __int64 v3;
  int v4;
  __int64* v6;
  unsigned __int64 v7;
  _BYTE* v8;
  __int64 v9;
  __int64 v10;
  _BYTE* v11;
  unsigned __int64 v12;
  unsigned __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;

  v2 = *a2;
  v3 = *(_QWORD*)(result + 8);
  if ((unsigned int)v2 > 7) {
    if ((unsigned int)v2 > 0xC) {
      return result;
    }
  }
  else if (*(char*)(v3 + v2 + 812) < 0) {
    return result;
  }
  v4 = *(unsigned __int8*)(v3 + v2 + 540);
  if (v4 != 0 && v4 != 12) {
    v6 = *(__int64**)(result + 16);
    v8 = (_BYTE*)v6[1];
    v7 = v6[2];
    if ((unsigned __int64)v8 >= v7) {
      v10 = *v6;
      v11 = &v8[-*v6];
      v12 = (unsigned __int64)(v11 + 1);
      if ((__int64)(v11 + 1) < 0) {
        GameRoutine_9433d0();
      }
      v13 = v7 - v10;
      v14 = fw_memory_g_heap_manager_ptr;
      if (2 * v13 > v12) {
        v12 = 2 * v13;
      }
      if (v13 >= 0x3FFFFFFFFFFFFFFFLL) {
        v15 = 0x7FFFFFFFFFFFFFFFLL;
      }
      else {
        v15 = v12;
      }
      if (v15 != 0) {
        v16 = fw_memory_HeapManager_Allocate(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, v15, 16, 0);
      }
      else {
        v16 = 0;
      }
      v11[v16] = v2;
      v9 = (__int64)&v11[v16 + 1];
      result = memcpy(v16, v10, v11);
      *v6 = v16;
      v6[1] = v9;
      v6[2] = v16 + v15;
      if (v10 != 0) {
        v17 = 128;
        if (*(_QWORD*)(*(_QWORD*)v14 + 200LL) == 0) {
          v17 = 56;
        }
        result = nn_mem_StandardAllocator_Free(*(_QWORD*)v14 + v17);
      }
    }
    else {
      *v8 = v2;
      v9 = (__int64)(v8 + 1);
    }
    v6[1] = v9;
  }
  return result;
}

#pragma GCC visibility pop
