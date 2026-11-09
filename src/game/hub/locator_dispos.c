#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_mem_StandardAllocator_Free(_QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64 (*GameData_1fdf640[])();
extern __int64 (*game_hub_LocatorDispos_vtable[])();
extern __int64 GameData_220d620;
extern __int64 fw_memory_g_heap_manager_ptr;
extern int GameData_2213f50;
_QWORD* LocatorDispos_Destructor(_QWORD* result);

_QWORD* LocatorDispos_Destructor(_QWORD* result)
{
  __int64 v1;
  _QWORD* v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  char v6;
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

  v1 = result[10];
  v2 = result;
  *result = game_hub_LocatorDispos_vtable;
  v3 = fw_memory_g_heap_manager_ptr;
  if (v1 != 0) {
    v4 = result[11];
    if (v1 == v4) {
      goto LABEL_12;
    }
    v5 = result[11];
    do {
      v6 = *(_BYTE*)(v5 - 24);
      v5 -= 24;
      if ((v6 & 1) != 0 && *(_QWORD*)(v4 - 8) != 0) {
        if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) != 0) {
          v7 = 128;
        }
        else {
          v7 = 56;
        }
        result = (_QWORD*)nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v7);
      }
      v4 = v5;
    } while (v5 != v1);
    v8 = v2[10];
    v2[11] = v1;
    if (v8 != 0) {
    LABEL_12:
      v9 = 128;
      if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
        v9 = 56;
      }
      result = (_QWORD*)nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v9);
    }
  }
  v10 = v2[7];
  if (v10 != 0) {
    v11 = *(_QWORD*)v3;
    v2[8] = v10;
    v12 = 128;
    if (*(_QWORD*)(v11 + 200) == 0) {
      v12 = 56;
    }
    result = (_QWORD*)nn_mem_StandardAllocator_Free(v11 + v12);
  }
  v13 = v2[4];
  if (v13 != 0) {
    v14 = v2[5];
    if (v13 == v14) {
      goto LABEL_33;
    }
    do {
      v15 = v14;
      v16 = *(_QWORD*)(v14 - 8);
      if (v16 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v16 + 8),
                                       0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v16 + 16LL))(v16);
        result = (_QWORD*)std___1___shared_weak_count___release_weak(v16);
      }
      v14 = v15 - 40;
      if ((*(_BYTE*)(v15 - 40) & 1) != 0 && *(_QWORD*)(v15 - 24) != 0) {
        if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) != 0) {
          v17 = 128;
        }
        else {
          v17 = 56;
        }
        result = (_QWORD*)nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v17);
      }
    } while (v14 != v13);
    v18 = v2[4];
    v2[5] = v13;
    if (v18 != 0) {
    LABEL_33:
      v19 = 128;
      if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
        v19 = 56;
      }
      result = (_QWORD*)nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v19);
    }
  }
  v20 = v2[1];
  if (v20 != 0) {
    v21 = v2[2];
    if (v20 == v21) {
      goto LABEL_44;
    }
    do {
      v22 = *(_QWORD*)(v21 - 8);
      if (v22 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v22 + 8),
                                       0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v22 + 16LL))(v22);
        result = (_QWORD*)std___1___shared_weak_count___release_weak(v22);
      }
      v21 -= 16;
    } while (v21 != v20);
    v23 = v2[1];
    v2[2] = v20;
    if (v23 != 0) {
    LABEL_44:
      v24 = 128;
      if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
        v24 = 56;
      }
      result = (_QWORD*)nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v24);
    }
  }
  *v2 = GameData_1fdf640;
  if ((_QWORD*)GameData_220d620 == v2) {
    GameData_220d620 = 0;
    GameData_2213f50 = 0;
  }
  return result;
}

#pragma GCC visibility pop
