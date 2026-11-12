#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 std___1___shared_weak_count___release_weak(__int64);
__int64 std___1___shared_weak_count_lock(__int64);
extern __int64 (*GameData_2119030[])();
extern __int64 (*game_facility_SceneTimerManager_vtable[])();
extern __int64 GameData_2241740;
extern __int64 fw_memory_g_heap_manager_ptr;
extern int GameData_226bb94;
void nn_mem_StandardAllocator_Free(__int64, __int64);
void SceneTimerManager_Destructor(_QWORD* a1);

void SceneTimerManager_Destructor(_QWORD* a1)
{
  __int64 v1;
  __int64 v2;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;

  v1 = a1[1];
  v2 = a1[2];
  *a1 = game_facility_SceneTimerManager_vtable;
  if (v1 != v2) {
    do {
      v4 = *(_QWORD*)(v1 + 8);
      if (v4 != 0) {
        v5 = std___1___shared_weak_count_lock(v4);
        if (v5 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
          v6 = v5;
          (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
          std___1___shared_weak_count___release_weak(v6);
        }
      }
      v1 += 16;
    } while (v1 != v2);
    v1 = a1[1];
    v2 = a1[2];
  }
  v7 = v1;
  if (v1 == v2) {
    a1[2] = v1;
    if (v1 == 0) {
      goto LABEL_25;
    }
  }
  else {
    do {
      v8 = *(_QWORD*)(v2 - 8);
      if (v8 != 0) {
        std___1___shared_weak_count___release_weak(v8);
      }
      v2 -= 16;
    } while (v2 != v1);
    v7 = a1[1];
    a1[2] = v1;
    if (v7 == 0) {
      goto LABEL_25;
    }
  }
  if (v7 == v1) {
    a1[2] = v7;
  LABEL_22:
    v11 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v11 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v11,
                                  v7);
    goto LABEL_25;
  }
  do {
    v9 = *(_QWORD*)(v1 - 8);
    if (v9 != 0) {
      std___1___shared_weak_count___release_weak(v9);
    }
    v1 -= 16;
  } while (v1 != v7);
  v10 = a1[1];
  a1[2] = v7;
  v7 = v10;
  if (v10 != 0) {
    goto LABEL_22;
  }
LABEL_25:
  *a1 = GameData_2119030;
  if ((_QWORD*)GameData_2241740 == a1) {
    GameData_2241740 = 0;
    GameData_226bb94 = 0;
  }
}

#pragma GCC visibility pop
