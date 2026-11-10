#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_155e140(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64 (*GameData_2109f98[])();
extern __int64 (*GameData_210a030[])();
extern __int64 (*game_map_MapChip_vtable[])();
extern __int64 (*game_map_MapMiniMap_vtable[])();
extern __int64 GameData_21cf838;
extern __int64 fw_memory_g_heap_manager_ptr;
extern int GameData_226b694;
__int64 MapMiniMap_Destructor(__int64 a1);
__int64 MapMiniMap_Unknown4(__int64 result);
__int64 MapMiniMap_18e99d0(__int64 result);
__int64 MapMiniMap_Unknown5(__int64 result);
__int64 MapMiniMap_DeletingDestructor(__int64 result);

__int64 MapMiniMap_Destructor(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 result;
  __int64 v5;
  __int64 v6;
  __int64 (***v7)(_QWORD);
  __int64 (***v8)(_QWORD);
  __int64 (***v9)(_QWORD);
  __int64 (***v10)(_QWORD);
  __int64 (**v11)(_QWORD);
  bool v12;
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
  __int64 v31;

  *(_QWORD*)a1 = game_map_MapMiniMap_vtable;
  *(_QWORD*)(a1 + 8) = GameData_2109f98;
  v2 = *(_QWORD*)(a1 + 24);
  if (v2 != 0) {
    *(_BYTE*)(v2 + 2376) = 1;
  }
  v3 = *(_QWORD*)(a1 + 32);
  *(_QWORD*)(a1 + 24) = 0;
  *(_QWORD*)(a1 + 32) = 0;
  if (v3 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
    std___1___shared_weak_count___release_weak(v3);
  }
  result = GameRoutine_155e140(*(_QWORD*)(a1 + 40));
  v5 = *(_QWORD*)(a1 + 48);
  *(_QWORD*)(a1 + 40) = 0;
  *(_QWORD*)(a1 + 48) = 0;
  if (v5 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
    result = std___1___shared_weak_count___release_weak(v5);
  }
  *(_QWORD*)(a1 + 152) = game_map_MapChip_vtable;
  if ((*(_BYTE*)(a1 + 160) & 1) != 0 && *(_QWORD*)(a1 + 176) != 0) {
    v6 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v6 = 56;
    }
    result = nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v6);
  }
  v7 = *(__int64 (****)(_QWORD))(a1 + 128);
  if (v7 != nullptr) {
    v8 = *(__int64 (****)(_QWORD))(a1 + 136);
    if (v7 == v8) {
      goto LABEL_20;
    }
    v9 = v8 - 5;
    v10 = v8 - 5;
    do {
      v11 = *v10;
      v10 -= 5;
      result = (*v11)(v9);
      v12 = v9 == v7;
      v9 = v10;
    } while (!v12);
    v13 = *(_QWORD*)(a1 + 128);
    *(_QWORD*)(a1 + 136) = v7;
    if (v13 != 0) {
    LABEL_20:
      v14 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v14 = 56;
      }
      result = nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v14);
    }
  }
  v15 = *(_QWORD*)(a1 + 104);
  if (v15 != 0) {
    v16 = *(_QWORD*)(a1 + 112);
    if (v15 == v16) {
      goto LABEL_31;
    }
    do {
      v17 = *(_QWORD*)(v16 - 8);
      if (v17 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v17 + 8),
                                       0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v17 + 16LL))(v17);
        result = std___1___shared_weak_count___release_weak(v17);
      }
      v16 -= 16;
    } while (v16 != v15);
    v18 = *(_QWORD*)(a1 + 104);
    *(_QWORD*)(a1 + 112) = v15;
    if (v18 != 0) {
    LABEL_31:
      v19 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v19 = 56;
      }
      result = nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v19);
    }
  }
  v20 = *(_QWORD*)(a1 + 80);
  if (v20 != 0) {
    v21 = *(_QWORD*)(a1 + 88);
    if (v20 == v21) {
      goto LABEL_42;
    }
    do {
      v22 = *(_QWORD*)(v21 - 8);
      if (v22 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v22 + 8),
                                       0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v22 + 16LL))(v22);
        result = std___1___shared_weak_count___release_weak(v22);
      }
      v21 -= 16;
    } while (v21 != v20);
    v23 = *(_QWORD*)(a1 + 80);
    *(_QWORD*)(a1 + 88) = v20;
    if (v23 != 0) {
    LABEL_42:
      v24 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v24 = 56;
      }
      result = nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v24);
    }
  }
  v25 = *(_QWORD*)(a1 + 56);
  if (v25 != 0) {
    v26 = *(_QWORD*)(a1 + 64);
    if (v25 == v26) {
      goto LABEL_53;
    }
    do {
      v27 = *(_QWORD*)(v26 - 8);
      if (v27 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v27 + 8),
                                       0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v27 + 16LL))(v27);
        result = std___1___shared_weak_count___release_weak(v27);
      }
      v26 -= 16;
    } while (v26 != v25);
    v28 = *(_QWORD*)(a1 + 56);
    *(_QWORD*)(a1 + 64) = v25;
    if (v28 != 0) {
    LABEL_53:
      v29 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v29 = 56;
      }
      result = nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v29);
    }
  }
  v30 = *(_QWORD*)(a1 + 48);
  if (v30 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v30 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v30 + 16LL))(v30);
    result = std___1___shared_weak_count___release_weak(v30);
  }
  v31 = *(_QWORD*)(a1 + 32);
  if (v31 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v31 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v31 + 16LL))(v31);
    result = std___1___shared_weak_count___release_weak(v31);
  }
  *(_QWORD*)a1 = GameData_210a030;
  if (GameData_21cf838 == a1) {
    GameData_21cf838 = 0;
    GameData_226b694 = 0;
  }
  return result;
}

__int64 MapMiniMap_Unknown4(__int64 result)
{
  if (*(_BYTE*)(result + 20) == 1) {
    *(_BYTE*)(result + 20) = 0;
  }
  return result;
}

__int64 MapMiniMap_18e99d0(__int64 result)
{
  if (*(_BYTE*)(result + 12) == 1) {
    *(_BYTE*)(result + 12) = 0;
  }
  return result;
}

__int64 MapMiniMap_Unknown5(__int64 result)
{
  if ((*(_BYTE*)(result + 20) & 1) == 0) {
    *(_BYTE*)(result + 20) = 1;
    *(_BYTE*)(result + 220) = 1;
  }
  return result;
}

__int64 MapMiniMap_DeletingDestructor(__int64 result)
{
  if ((*(_BYTE*)(result + 12) & 1) == 0) {
    *(_BYTE*)(result + 12) = 1;
    *(_BYTE*)(result + 212) = 1;
  }
  return result;
}

#pragma GCC visibility pop
