#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_658c00(_QWORD);
__int64 game_ProcInst_Unregister(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak();
extern __int64 (*game_ProcInst_vtable[])();
extern __int64 (*game_menu_UnitMakeCamera_vtable[])();
extern __int64 GameData_225d4f0;
extern __int64 GameData_2264528;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64* GameData_2131a88[7];
void GameRoutine_1798e70(__int64, __int64, __int64, __int64*, char);
void GameRoutine_17992d0(__int64, __int64, __int64, __int64*, char);
void GameRoutine_1799d90(__int64, __int64, __int64, __int64*, char);
void UnitMakeCamera_179bc80(_QWORD* a1);
void UnitMakeCamera_179bd40(__int64 a1);
void UnitMakeCamera_179be60(__int64 a1);
__int64 UnitMakeCamera_Destructor(__int64 a1);
__int64 UnitMakeCamera_DeletingDestructor(__int64 a1);

void UnitMakeCamera_179bc80(_QWORD* a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7[2];

  v2 = a1[4];
  v3 = a1[20];
  v4 = *GameData_2131a88[0];
  v7[0] = a1[19];
  v7[1] = v3;
  v5 = *(_QWORD*)(v4 + 720);
  v6 = *(_QWORD*)(v4 + 888);
  if (v3 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v3 + 8), 1u,
                              memory_order_relaxed);
    GameRoutine_17992d0(v2, v5, v6, v7, *(_BYTE*)(v4 + 276) == 1);
    if (atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
      std___1___shared_weak_count___release_weak();
    }
  }
  else {
    GameRoutine_17992d0(v2, v5, v6, v7, *(_BYTE*)(v4 + 276) == 1);
  }
}

void UnitMakeCamera_179bd40(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8[2];

  *(_BYTE*)(a1 + 216) = 0;
  v1 = GameData_2264528;
  if (GameData_2264528 != 0) {
    if (*(_BYTE*)(GameData_2264528 + 169) != 2) {
      goto LABEL_11;
    }
    v2 = *(_QWORD*)(GameData_2264528 + 8);
    if (v2 == 0) {
      goto LABEL_11;
    }
    while (*(_BYTE*)v2 != 2) {
      if (*(_BYTE*)v2 == 0) {
        goto LABEL_11;
      }
    LABEL_6:
      v2 += 64;
    }
    if (*(_DWORD*)(v2 + 32) != 0) {
      goto LABEL_6;
    }
    *(_QWORD*)(GameData_2264528 + 16) = v2;
    *(_WORD*)(v1 + 136) &= ~0x80u;
  }

LABEL_11:
  *(_BYTE*)(a1 + 208) = 0;
  *(_DWORD*)(a1 + 220) = 0;
  v3 = *(_QWORD*)(a1 + 32);
  v4 = *(_QWORD*)(a1 + 160);
  v5 = *GameData_2131a88[0];
  v8[0] = *(_QWORD*)(a1 + 152);
  v8[1] = v4;
  v6 = *(_QWORD*)(v5 + 720);
  v7 = *(_QWORD*)(v5 + 888);
  if (v4 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v4 + 8), 1u,
                              memory_order_relaxed);
    GameRoutine_1799d90(v3, v6, v7, v8, *(_BYTE*)(v5 + 276) == 1);
    if (atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
      std___1___shared_weak_count___release_weak();
    }
  }
  else {
    GameRoutine_1799d90(v3, v6, v7, v8, *(_BYTE*)(v5 + 276) == 1);
  }
}

void UnitMakeCamera_179be60(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6[2];

  v2 = *(_QWORD*)(a1 + 160);
  v3 = *GameData_2131a88[0];
  v6[0] = *(_QWORD*)(a1 + 152);
  v6[1] = v2;
  v4 = *(_QWORD*)(v3 + 720);
  v5 = *(_QWORD*)(v3 + 888);
  if (v2 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v2 + 8), 1u,
                              memory_order_relaxed);
    GameRoutine_1798e70(a1, v4, v5, v6, *(_BYTE*)(v3 + 276) == 1);
    if (atomic_fetch_add((atomic_ullong* volatile)(v2 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v2 + 16LL))(v2);
      std___1___shared_weak_count___release_weak();
    }
  }
  else {
    GameRoutine_1798e70(a1, v4, v5, v6, *(_BYTE*)(v3 + 276) == 1);
  }
  *(_BYTE*)(a1 + 168) = 1;
}

__int64 UnitMakeCamera_Destructor(__int64 a1)
{
  __int64 v1;

  v1 = *(_QWORD*)(a1 + 160);
  *(_QWORD*)a1 = game_menu_UnitMakeCamera_vtable;
  if (v1 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v1 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v1 + 16LL))(v1);
    std___1___shared_weak_count___release_weak();
  }
  GameData_225d4f0 = 0;
  *(_QWORD*)a1 = game_ProcInst_vtable;
  if ((*(_WORD*)(a1 + 136) & 0x100) != 0) {
    *(_WORD*)(a1 + 136) &= ~0x100u;
  }
  game_ProcInst_Unregister(a1);
  return GameRoutine_658c00(a1 + 88);
}

__int64 UnitMakeCamera_DeletingDestructor(__int64 a1)
{
  __int64 v1;
  __int64 v3;

  v1 = *(_QWORD*)(a1 + 160);
  *(_QWORD*)a1 = game_menu_UnitMakeCamera_vtable;
  if (v1 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v1 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v1 + 16LL))(v1);
    std___1___shared_weak_count___release_weak();
  }
  GameData_225d4f0 = 0;
  *(_QWORD*)a1 = game_ProcInst_vtable;
  if ((*(_WORD*)(a1 + 136) & 0x100) != 0) {
    *(_WORD*)(a1 + 136) &= ~0x100u;
  }
  game_ProcInst_Unregister(a1);
  GameRoutine_658c00(a1 + 88);
  v3 = 128;
  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
    v3 = 56;
  }
  return nn_mem_StandardAllocator_Free(
      *(_QWORD*)fw_memory_g_heap_manager_ptr + v3, a1);
}

#pragma GCC visibility pop
