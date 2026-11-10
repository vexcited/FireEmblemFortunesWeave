#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
extern __int64 fw_memory_g_heap_manager_ptr;
void __attribute__((noreturn)) GameRoutine_60a210();
void __attribute__((noreturn)) GameRoutine_6f26d0();
__int64 game_ItemSeqConst_List_Copy_lambda0_Invoke(__int64 result, _QWORD* a2);

__int64 game_ItemSeqConst_List_Copy_lambda0_Invoke(__int64 result, _QWORD* a2)
{
  __int64** v2;
  unsigned __int64 v4;
  char* v5;
  __int64 v6;
  __int64 v7;
  unsigned __int64 v8;
  __int64 v9;
  __int64 v10;
  unsigned __int64 v11;
  __int64 v12;
  _QWORD* v13;
  __int64* v14;
  __int64* v15;
  _QWORD* v16;
  __int64* v17;
  _QWORD* v18;
  __int64 v19;
  __int64 v20;

  v2 = *(__int64***)(result + 8);
  v5 = (char*)v2[1];
  v4 = (unsigned __int64)v2[2];
  if ((unsigned __int64)v5 >= v4) {
    v7 = v5 - (char*)*v2;
    v8 = (v7 >> 3) + 1;
    if (v8 >> 61 != 0) {
      GameRoutine_6f26d0();
    }
    v9 = v4 - (_QWORD)*v2;
    v10 = v9 >> 2;
    if (v9 >> 2 <= v8) {
      v10 = (v7 >> 3) + 1;
    }
    if ((unsigned __int64)v9 >= 0x7FFFFFFFFFFFFFF8LL) {
      v11 = 0x1FFFFFFFFFFFFFFFLL;
    }
    else {
      v11 = v10;
    }
    if (v11 >> 61 != 0) {
      GameRoutine_60a210();
    }
    v12 = fw_memory_g_heap_manager_ptr;
    result = fw_memory_HeapManager_Allocate(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v11, 16, 0);
    v13 = (_QWORD*)(result + v7);
    *v13 = *a2;
    v6 = result + v7 + 8;
    v14 = *v2;
    v15 = v2[1];
    v16 = (_QWORD*)((char*)v13 + ((char*)*v2 - (char*)v15));
    if (*v2 != v15) {
      v17 = *v2;
      v18 = v16;
      do {
        v19 = *v17++;
        *v18++ = v19;
      } while (v17 != v15);
    }
    *v2 = v16;
    v2[1] = (__int64*)v6;
    v2[2] = (__int64*)(result + 8 * v11);
    if (v14 != nullptr) {
      v20 = 128;
      if (*(_QWORD*)(*(_QWORD*)v12 + 200LL) == 0) {
        v20 = 56;
      }
      result = nn_mem_StandardAllocator_Free(*(_QWORD*)v12 + v20, v14);
    }
  }
  else {
    *(_QWORD*)v5 = 0;
    *(_QWORD*)v5 = *a2;
    v6 = (__int64)(v5 + 8);
  }
  v2[1] = (__int64*)v6;
  return result;
}

#pragma GCC visibility pop
