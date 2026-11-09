#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
extern __int64 (*game_map_MapHeightMap_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
_QWORD* MapHeightMap_Destructor(_QWORD* result);

_QWORD* MapHeightMap_Destructor(_QWORD* result)
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
  _QWORD* v12;
  _QWORD* v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  _QWORD* v17;
  _QWORD* v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  _QWORD* v22;
  _QWORD* v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;

  v1 = result[32];
  v2 = result;
  *result = game_map_MapHeightMap_vtable;
  v3 = fw_memory_g_heap_manager_ptr;
  if (v1 != 0) {
    v4 = *(_QWORD*)fw_memory_g_heap_manager_ptr;
    result[33] = v1;
    v5 = 128;
    if (*(_QWORD*)(v4 + 200) == 0) {
      v5 = 56;
    }
    result = (_QWORD*)nn_mem_StandardAllocator_Free(v4 + v5, v1);
  }
  v6 = v2[29];
  if (v6 != 0) {
    v7 = *(_QWORD*)v3;
    v2[30] = v6;
    v8 = 128;
    if (*(_QWORD*)(v7 + 200) == 0) {
      v8 = 56;
    }
    result = (_QWORD*)nn_mem_StandardAllocator_Free(v7 + v8, v6);
  }
  v9 = v2[26];
  if (v9 != 0) {
    v10 = *(_QWORD*)v3;
    v2[27] = v9;
    v11 = 128;
    if (*(_QWORD*)(v10 + 200) == 0) {
      v11 = 56;
    }
    result = (_QWORD*)nn_mem_StandardAllocator_Free(v10 + v11, v9);
  }
  v12 = (_QWORD*)v2[18];
  if (v12 != nullptr) {
    do {
      v13 = (_QWORD*)*v12;
      if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) != 0) {
        v14 = 128;
      }
      else {
        v14 = 56;
      }
      result = (_QWORD*)nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v14, v12);
      v12 = v13;
    } while (v13 != nullptr);
  }
  v15 = v2[16];
  v2[16] = 0;
  if (v15 != 0) {
    v16 = 128;
    if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
      v16 = 56;
    }
    result = (_QWORD*)nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v16, v15);
  }
  v17 = (_QWORD*)v2[11];
  if (v17 != nullptr) {
    do {
      v18 = (_QWORD*)*v17;
      if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) != 0) {
        v19 = 128;
      }
      else {
        v19 = 56;
      }
      result = (_QWORD*)nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v19, v17);
      v17 = v18;
    } while (v18 != nullptr);
  }
  v20 = v2[9];
  v2[9] = 0;
  if (v20 != 0) {
    v21 = 128;
    if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
      v21 = 56;
    }
    result = (_QWORD*)nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v21, v20);
  }
  v22 = (_QWORD*)v2[4];
  if (v22 != nullptr) {
    do {
      v23 = (_QWORD*)*v22;
      if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) != 0) {
        v24 = 128;
      }
      else {
        v24 = 56;
      }
      result = (_QWORD*)nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v24, v22);
      v22 = v23;
    } while (v23 != nullptr);
  }
  v25 = v2[2];
  v2[2] = 0;
  if (v25 != 0) {
    v26 = 128;
    if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
      v26 = 56;
    }
    return (_QWORD*)nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v26, v25);
  }
  return result;
}

#pragma GCC visibility pop
