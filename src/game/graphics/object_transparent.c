#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64 (*GameData_1ff4628[])();
extern __int64 (*game_graphics_ObjectTransparent_vtable[])();
extern __int64 GameData_21c9758;
extern __int64 fw_memory_g_heap_manager_ptr;
extern int GameData_2221120;
_QWORD* ObjectTransparent_Destructor(_QWORD* result);

_QWORD* ObjectTransparent_Destructor(_QWORD* result)
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
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;

  v1 = result[34];
  v2 = result;
  *result = game_graphics_ObjectTransparent_vtable;
  v3 = fw_memory_g_heap_manager_ptr;
  if (v1 != 0) {
    v4 = *(_QWORD*)fw_memory_g_heap_manager_ptr;
    result[35] = v1;
    v5 = 128;
    if (*(_QWORD*)(v4 + 200) == 0) {
      v5 = 56;
    }
    result = (_QWORD*)nn_mem_StandardAllocator_Free(v4 + v5, v1);
  }
  v6 = v2[30];
  if (v6 != 0) {
    v7 = v2[31];
    if (v6 == v7) {
      goto LABEL_24;
    }
    v8 = v2[31];
    do {
      v12 = *(_QWORD*)(v8 - 24);
      v8 -= 24;
      v10 = v12;
      if (v12 != 0) {
        v13 = *(_QWORD*)(v7 - 16);
        if (v10 == v13) {
          goto LABEL_9;
        }
        do {
          v14 = *(_QWORD*)(v13 - 24);
          if (v14 != 0) {
            *(_QWORD*)(v13 - 16) = v14;
            if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) != 0) {
              v15 = 128;
            }
            else {
              v15 = 56;
            }
            result =
                (_QWORD*)nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v15, v14);
          }
          v13 -= 48;
        } while (v13 != v10);
        v9 = *(_QWORD*)(v7 - 24);
        *(_QWORD*)(v7 - 16) = v10;
        v10 = v9;
        if (v9 != 0) {
        LABEL_9:
          if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) != 0) {
            v11 = 128;
          }
          else {
            v11 = 56;
          }
          result =
              (_QWORD*)nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v11, v10);
        }
      }
      v7 = v8;
    } while (v6 != v8);
    v16 = v2[30];
    v2[31] = v6;
    v6 = v16;
    if (v16 != 0) {
    LABEL_24:
      v17 = 128;
      if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
        v17 = 56;
      }
      result = (_QWORD*)nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v17, v6);
    }
  }
  v18 = v2[27];
  if (v18 != 0) {
    v19 = *(_QWORD*)v3;
    v2[28] = v18;
    v20 = 128;
    if (*(_QWORD*)(v19 + 200) == 0) {
      v20 = 56;
    }
    result = (_QWORD*)nn_mem_StandardAllocator_Free(v19 + v20, v18);
  }
  v21 = v2[24];
  if (v21 != 0) {
    v22 = *(_QWORD*)v3;
    v2[25] = v21;
    v23 = 128;
    if (*(_QWORD*)(v22 + 200) == 0) {
      v23 = 56;
    }
    result = (_QWORD*)nn_mem_StandardAllocator_Free(v22 + v23, v21);
  }
  v24 = v2[21];
  if (v24 != 0) {
    v25 = *(_QWORD*)v3;
    v2[22] = v24;
    v26 = 128;
    if (*(_QWORD*)(v25 + 200) == 0) {
      v26 = 56;
    }
    result = (_QWORD*)nn_mem_StandardAllocator_Free(v25 + v26, v24);
  }
  v27 = v2[18];
  if (v27 != 0) {
    v28 = *(_QWORD*)v3;
    v2[19] = v27;
    v29 = 128;
    if (*(_QWORD*)(v28 + 200) == 0) {
      v29 = 56;
    }
    result = (_QWORD*)nn_mem_StandardAllocator_Free(v28 + v29, v27);
  }
  v30 = v2[4];
  if (v30 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v30 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v30 + 16LL))(v30);
    result = (_QWORD*)std___1___shared_weak_count___release_weak(v30);
  }
  *v2 = GameData_1ff4628;
  if ((_QWORD*)GameData_21c9758 == v2) {
    GameData_21c9758 = 0;
    GameData_2221120 = 0;
  }
  return result;
}

#pragma GCC visibility pop
