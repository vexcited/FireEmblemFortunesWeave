#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_ea1560(_QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64 (*game_combat_CombatLegion_vtable[])();
extern __int64 GameData_22162a8;
extern __int64 fw_memory_g_heap_manager_ptr;
__int64 CombatLegion_Destructor(__int64 a1);

__int64 CombatLegion_Destructor(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
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
  __int64 result;
  _QWORD v21[2];

  *(_QWORD*)a1 = game_combat_CombatLegion_vtable;
  v2 = *(_QWORD*)(a1 + 48);
  if (v2 != 0) {
    v3 = *(_QWORD*)(v2 + 8);
    v4 = *(_QWORD*)(a1 + 56);
    if (v3 != -1 && v4 != 0) {
      *(_DWORD*)(*(_QWORD*)(v4 + 136) + 60LL) = 1065353216;
    }
  }
  v6 = *(_QWORD*)(a1 + 104);
  *(_QWORD*)(a1 + 104) = 0;
  if (v6 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v6 + 8LL))(v6);
  }
  v7 = *(_QWORD*)(a1 + 112);
  *(_QWORD*)(a1 + 112) = 0;
  if (v7 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v7 + 8LL))(v7);
  }
  v8 = *(_QWORD*)(a1 + 120);
  *(_QWORD*)(a1 + 120) = 0;
  if (v8 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v8 + 8LL))(v8);
  }
  v9 = *(_QWORD*)(a1 + 128);
  *(_QWORD*)(a1 + 128) = 0;
  if (v9 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v9 + 8LL))(v9);
  }
  v10 = GameData_22162a8;
  v11 = *(_QWORD*)(a1 + 144);
  v21[0] = *(_QWORD*)(a1 + 136);
  v21[1] = v11;
  if (v11 == 0) {
    GameRoutine_ea1560(GameData_22162a8, v21);
    if ((*(_BYTE*)(a1 + 152) & 1) == 0) {
      goto LABEL_25;
    }
    goto LABEL_21;
  }
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v11 + 8), 1u,
                            memory_order_relaxed);
  GameRoutine_ea1560(v10, v21);
  if (atomic_fetch_add((atomic_ullong* volatile)(v11 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v11 + 16LL))(v11);
    std___1___shared_weak_count___release_weak(v11);
  }
  if ((*(_BYTE*)(a1 + 152) & 1) != 0) {
  LABEL_21:
    if (*(_QWORD*)(a1 + 168) != 0) {
      v12 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v12 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                    v12);
    }
  }

LABEL_25:
  v13 = *(_QWORD*)(a1 + 144);
  if (v13 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v13 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v13 + 16LL))(v13);
    std___1___shared_weak_count___release_weak(v13);
  }
  v14 = *(_QWORD*)(a1 + 128);
  *(_QWORD*)(a1 + 128) = 0;
  if (v14 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v14 + 8LL))(v14);
  }
  v15 = *(_QWORD*)(a1 + 120);
  *(_QWORD*)(a1 + 120) = 0;
  if (v15 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v15 + 8LL))(v15);
  }
  v16 = *(_QWORD*)(a1 + 112);
  *(_QWORD*)(a1 + 112) = 0;
  if (v16 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v16 + 8LL))(v16);
  }
  v17 = *(_QWORD*)(a1 + 104);
  *(_QWORD*)(a1 + 104) = 0;
  if (v17 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v17 + 8LL))(v17);
  }
  v18 = *(_QWORD*)(a1 + 80);
  if (v18 != 0) {
    *(_QWORD*)(a1 + 88) = v18;
    v19 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v19 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v19);
  }
  result = *(_QWORD*)(a1 + 48);
  if (result != 0) {
    return std___1___shared_weak_count___release_weak(result);
  }
  return result;
}

#pragma GCC visibility pop
