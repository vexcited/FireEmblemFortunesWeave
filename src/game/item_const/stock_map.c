#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
extern __int64 (*game_ItemConst_StockMap_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
_QWORD* StockMap_Destructor(_QWORD* result);

_QWORD* StockMap_Destructor(_QWORD* result)
{
  __int64* v1;
  _QWORD* v2;
  _QWORD* v3;
  __int64 v4;
  _QWORD* v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;

  v1 = (__int64*)result[1];
  *result = game_ItemConst_StockMap_vtable;
  if (v1 != nullptr) {
    v2 = (_QWORD*)v1[5];
    v3 = result;
    v4 = fw_memory_g_heap_manager_ptr;
    if (v2 != nullptr) {
      do {
        v5 = (_QWORD*)*v2;
        if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) != 0) {
          v6 = 128;
        }
        else {
          v6 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)v4 + v6, v2);
        v2 = v5;
      } while (v5 != nullptr);
    }
    v7 = v1[3];
    v1[3] = 0;
    if (v7 != 0) {
      v8 = 128;
      if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) == 0) {
        v8 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v4 + v8, v7);
    }
    v9 = *v1;
    if (*v1 != 0) {
      v10 = *(_QWORD*)v4;
      v1[1] = v9;
      v11 = 128;
      if (*(_QWORD*)(v10 + 200) == 0) {
        v11 = 56;
      }
      nn_mem_StandardAllocator_Free(v10 + v11, v9);
    }
    v12 = 128;
    if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) == 0) {
      v12 = 56;
    }
    result = (_QWORD*)nn_mem_StandardAllocator_Free(*(_QWORD*)v4 + v12, v1);
    v3[1] = 0;
  }
  return result;
}

#pragma GCC visibility pop
