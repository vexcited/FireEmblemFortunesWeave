#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_e02040(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64 (*GameData_1fe21b0[])();
extern __int64 (*game_hub_ObjectManager_vtable[])();
extern __int64 GameData_220f950;
extern __int64 fw_memory_g_heap_manager_ptr;
extern int GameData_2213fb0;
__int64 ObjectManager_Destructor(_QWORD* a1);

__int64 ObjectManager_Destructor(_QWORD* a1)
{
  __int64 result;
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

  *a1 = game_hub_ObjectManager_vtable;
  result = GameRoutine_e02040(a1[13]);
  v3 = a1[8];
  if (v3 != 0) {
    v4 = a1[9];
    if (v3 == v4) {
      goto LABEL_9;
    }
    do {
      v5 = *(_QWORD*)(v4 - 8);
      if (v5 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                                      0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
        result = std___1___shared_weak_count___release_weak(v5);
      }
      v4 -= 16;
    } while (v4 != v3);
    v6 = a1[8];
    a1[9] = v3;
    if (v6 != 0) {
    LABEL_9:
      v7 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v7 = 56;
      }
      result = nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v7);
    }
  }
  v8 = a1[5];
  if (v8 != 0) {
    v9 = a1[6];
    if (v8 == v9) {
      goto LABEL_20;
    }
    do {
      v10 = *(_QWORD*)(v9 - 8);
      if (v10 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v10 + 8),
                                       0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v10 + 16LL))(v10);
        result = std___1___shared_weak_count___release_weak(v10);
      }
      v9 -= 16;
    } while (v9 != v8);
    v11 = a1[5];
    a1[6] = v8;
    if (v11 != 0) {
    LABEL_20:
      v12 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v12 = 56;
      }
      result = nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v12);
    }
  }
  v13 = a1[4];
  if (v13 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v13 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v13 + 16LL))(v13);
    result = std___1___shared_weak_count___release_weak(v13);
  }
  v14 = a1[2];
  if (v14 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v14 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v14 + 16LL))(v14);
    result = std___1___shared_weak_count___release_weak(v14);
  }
  *a1 = GameData_1fe21b0;
  if ((_QWORD*)GameData_220f950 == a1) {
    GameData_220f950 = 0;
    GameData_2213fb0 = 0;
  }
  return result;
}

#pragma GCC visibility pop
