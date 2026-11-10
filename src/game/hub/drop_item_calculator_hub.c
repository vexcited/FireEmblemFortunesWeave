#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__n128 nn_mem_StandardAllocator_Free(_QWORD);
__n128 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64 (*GameData_1ffd948[])();
extern __int64 (*game_hub_DropItemCalculatorHub_vtable[])();
extern __int64 GameData_22124f0;
extern __int64 fw_memory_g_heap_manager_ptr;
extern int GameData_222e198;
void DropItemCalculatorHub_Destructor(_QWORD* a1);

void DropItemCalculatorHub_Destructor(_QWORD* a1)
{
  __int64 v1;
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

  v1 = a1[7];
  *a1 = game_hub_DropItemCalculatorHub_vtable;
  v3 = fw_memory_g_heap_manager_ptr;
  if (v1 != 0) {
    v4 = a1[8];
    if (v1 == v4) {
      goto LABEL_8;
    }
    do {
      v5 = *(_QWORD*)(v4 - 8);
      if (v5 != 0) {
        std___1___shared_weak_count___release_weak(v5);
      }
      v4 -= 16;
    } while (v4 != v1);
    v6 = a1[7];
    a1[8] = v1;
    if (v6 != 0) {
    LABEL_8:
      v7 = 128;
      if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
        v7 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v7);
    }
  }
  v8 = a1[4];
  if (v8 != 0) {
    v9 = *(_QWORD*)v3;
    a1[5] = v8;
    v10 = 128;
    if (*(_QWORD*)(v9 + 200) == 0) {
      v10 = 56;
    }
    nn_mem_StandardAllocator_Free(v9 + v10);
  }
  v11 = a1[1];
  if (v11 != 0) {
    v12 = a1[2];
    if (v11 == v12) {
      goto LABEL_37;
    }
    do {
      v13 = *(_QWORD*)(v12 - 24);
      v14 = v12;
      if (v13 != 0) {
        *(_QWORD*)(v12 - 16) = v13;
        if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) != 0) {
          v15 = 128;
        }
        else {
          v15 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v15);
      }
      if ((*(_BYTE*)(v12 - 48) & 1) != 0 && *(_QWORD*)(v12 - 32) != 0) {
        if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) != 0) {
          v16 = 128;
        }
        else {
          v16 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v16);
      }
      v12 -= 72;
      if ((*(_BYTE*)(v14 - 72) & 1) != 0 && *(_QWORD*)(v14 - 56) != 0) {
        if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) != 0) {
          v17 = 128;
        }
        else {
          v17 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v17);
      }
    } while (v12 != v11);
    v18 = a1[1];
    a1[2] = v11;
    if (v18 != 0) {
    LABEL_37:
      v19 = 128;
      if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
        v19 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v19);
    }
  }
  *a1 = GameData_1ffd948;
  if ((_QWORD*)GameData_22124f0 == a1) {
    GameData_22124f0 = 0;
    GameData_222e198 = 0;
  }
}

#pragma GCC visibility pop
