#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__n128 nn_mem_StandardAllocator_Free(_QWORD);
__n128 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64 (*GameData_1ff8638[])();
extern __int64 (*game_graphics_GameObserveInstant_vtable[])();
extern __int64 GameData_21c9710;
extern __int64 fw_memory_g_heap_manager_ptr;
extern int GameData_2227e00;
void GameObserveInstant_Destructor(_QWORD* a1);

void GameObserveInstant_Destructor(_QWORD* a1)
{
  __int64 v1;
  __int64 v2;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;

  v1 = a1[2];
  v2 = a1[3];
  *a1 = game_graphics_GameObserveInstant_vtable;
  v4 = v1;
  if (v1 == v2) {
    a1[3] = v1;
    if (v1 == 0) {
      goto LABEL_17;
    }
  }
  else {
    do {
      v5 = *(_QWORD*)(v2 - 8);
      if (v5 != 0) {
        std___1___shared_weak_count___release_weak(v5);
      }
      v2 -= 16;
    } while (v2 != v1);
    v4 = a1[2];
    a1[3] = v1;
    if (v4 == 0) {
      goto LABEL_17;
    }
  }
  if (v4 == v1) {
    a1[3] = v4;
  LABEL_14:
    v8 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v8 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v8);
    goto LABEL_17;
  }
  do {
    v6 = *(_QWORD*)(v1 - 8);
    if (v6 != 0) {
      std___1___shared_weak_count___release_weak(v6);
    }
    v1 -= 16;
  } while (v1 != v4);
  v7 = a1[2];
  a1[3] = v4;
  if (v7 != 0) {
    goto LABEL_14;
  }
LABEL_17:
  *a1 = GameData_1ff8638;
  if ((_QWORD*)GameData_21c9710 == a1) {
    GameData_21c9710 = 0;
    GameData_2227e00 = 0;
  }
}

#pragma GCC visibility pop
