#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_mem_StandardAllocator_Free(_QWORD);
extern __int64 (*game_GameGlobalSkill_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
_QWORD* GameGlobalSkill_Destructor(_QWORD* result);

_QWORD* GameGlobalSkill_Destructor(_QWORD* result)
{
  _QWORD* v1;
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
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;

  v1 = (_QWORD*)result[1];
  *result = game_GameGlobalSkill_vtable;
  if (v1 != nullptr) {
    v2 = (_QWORD*)v1[14];
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
        nn_mem_StandardAllocator_Free(*(_QWORD*)v4 + v6);
        v2 = v5;
      } while (v5 != nullptr);
    }
    v7 = v1[12];
    v1[12] = 0;
    if (v7 != 0) {
      v8 = 128;
      if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) == 0) {
        v8 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v4 + v8);
    }
    v9 = v1[7];
    if (v9 != 0) {
      v10 = *(_QWORD*)v4;
      v1[8] = v9;
      v11 = 128;
      if (*(_QWORD*)(v10 + 200) == 0) {
        v11 = 56;
      }
      nn_mem_StandardAllocator_Free(v10 + v11);
    }
    v12 = v1[4];
    if (v12 != 0) {
      v13 = *(_QWORD*)v4;
      v1[5] = v12;
      v14 = 128;
      if (*(_QWORD*)(v13 + 200) == 0) {
        v14 = 56;
      }
      nn_mem_StandardAllocator_Free(v13 + v14);
    }
    if (*v1 != 0) {
      v15 = *(_QWORD*)v4;
      v1[1] = *v1;
      v16 = 128;
      if (*(_QWORD*)(v15 + 200) == 0) {
        v16 = 56;
      }
      nn_mem_StandardAllocator_Free(v15 + v16);
    }
    v17 = 128;
    if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) == 0) {
      v17 = 56;
    }
    result = (_QWORD*)nn_mem_StandardAllocator_Free(*(_QWORD*)v4 + v17);
    v3[1] = 0;
  }
  return result;
}

#pragma GCC visibility pop
