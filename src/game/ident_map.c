#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
extern __int64 (*game_IdentMap_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
_QWORD* IdentMap_Destructor(_QWORD* result);

_QWORD* IdentMap_Destructor(_QWORD* result)
{
  _QWORD* v1;
  __int64 v2;
  _QWORD* v3;
  _QWORD* v4;
  __int64 v5;
  unsigned __int64 v6;
  unsigned __int64 v7;
  __int64 v8;
  unsigned __int64 v9;
  __int64 v10;
  __int64 v11;
  _QWORD* v12;
  _QWORD* v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;

  v1 = result;
  *result = game_IdentMap_vtable;
  v2 = fw_memory_g_heap_manager_ptr;
  if (result[4] != 0) {
    v3 = (_QWORD*)result[3];
    if (v3 != nullptr) {
      do {
        v4 = (_QWORD*)*v3;
        if (*(_QWORD*)(*(_QWORD*)v2 + 200LL) != 0) {
          v5 = 128;
        }
        else {
          v5 = 56;
        }
        result = (_QWORD*)nn_mem_StandardAllocator_Free(*(_QWORD*)v2 + v5, v3);
        v3 = v4;
      } while (v4 != nullptr);
    }
    v6 = v1[2];
    v1[3] = 0;
    if (v6 != 0) {
      v7 = v6 & 7;
      if (v6 >= 8) {
        v9 = v6 & 0xFFFFFFFFFFFFFFF8LL;
        v8 = 0;
        do {
          *(_QWORD*)(v1[1] + 8 * v8) = 0;
          *(_QWORD*)(v1[1] + 8 * v8 + 8) = 0;
          *(_QWORD*)(v1[1] + 8 * v8 + 16) = 0;
          *(_QWORD*)(v1[1] + 8 * v8 + 24) = 0;
          *(_QWORD*)(v1[1] + 8 * v8 + 32) = 0;
          *(_QWORD*)(v1[1] + 8 * v8 + 40) = 0;
          *(_QWORD*)(v1[1] + 8 * v8 + 48) = 0;
          v10 = v1[1] + 8 * v8;
          v8 += 8;
          *(_QWORD*)(v10 + 56) = 0;
        } while (v9 != v8);
      }
      else {
        v8 = 0;
      }
      if (v7 != 0) {
        v11 = 8 * v8;
        do {
          --v7;
          *(_QWORD*)(v1[1] + v11) = 0;
          v11 += 8;
        } while (v7 != 0);
      }
    }
    v1[4] = 0;
  }
  v12 = (_QWORD*)v1[3];
  if (v12 != nullptr) {
    do {
      v13 = (_QWORD*)*v12;
      if (*(_QWORD*)(*(_QWORD*)v2 + 200LL) != 0) {
        v14 = 128;
      }
      else {
        v14 = 56;
      }
      result = (_QWORD*)nn_mem_StandardAllocator_Free(*(_QWORD*)v2 + v14, v12);
      v12 = v13;
    } while (v13 != nullptr);
  }
  v15 = v1[1];
  v1[1] = 0;
  if (v15 != 0) {
    v16 = 128;
    if (*(_QWORD*)(*(_QWORD*)v2 + 200LL) == 0) {
      v16 = 56;
    }
    return (_QWORD*)nn_mem_StandardAllocator_Free(*(_QWORD*)v2 + v16, v15);
  }
  return result;
}

#pragma GCC visibility pop
