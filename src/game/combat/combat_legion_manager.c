#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_e2fd80(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_e2ff40(void);
__int64 GameRoutine_e305a0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_e30760(void);
__int64 GameRoutine_e4b940(_QWORD);
__int64 GameRoutine_ea1560(_QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64 (*game_combat_CombatLegionManager_vtable[])();
extern __int64 GameData_22162a8;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64* GameData_212d448[9];
extern int GameData_22162a4;
__int64 CombatLegionManager_Destructor(__int64 a1);

__int64 CombatLegionManager_Destructor(__int64 a1)
{
  __int64* v2;
  int v3;
  __int64 v4;
  char* v5;
  char* v6;
  __int64 v7;
  int v8;
  __int64 v9;
  char* v10;
  char* v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  _QWORD* v16;
  _QWORD* v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 result;
  _QWORD v35[2];

  *(_QWORD*)a1 = game_combat_CombatLegionManager_vtable;
  v2 = GameData_212d448[0];
  v3 = *(_DWORD*)(a1 + 92);
  if (v3 != 0) {
    v4 = *(_QWORD*)(*GameData_212d448[0] + 8);
    v5 = *(char**)(v4 + 80);
    v6 = *(char**)(v4 + 88);
    if (v5 != v6) {
      do {
        if (v3 == *(_DWORD*)v5) {
          *(_DWORD*)v5 = 0;
        }
        v5 += 80;
      } while (v5 != v6);
      v5 = *(char**)(v4 + 80);
      v6 = *(char**)(v4 + 88);
    }
    if (0xCCCCCCCCCCCCCCCDLL * ((v6 - v5) >> 4) >= 0x40) {
      v7 = GameRoutine_e2ff40();
      GameRoutine_e2fd80(v4 + 80, v7, *(_QWORD*)(v4 + 88));
    }
  }
  v8 = *(_DWORD*)(a1 + 96);
  if (v8 != 0) {
    v9 = *(_QWORD*)(*v2 + 128);
    v10 = *(char**)(v9 + 40);
    v11 = *(char**)(v9 + 48);
    if (v10 != v11) {
      do {
        if (v8 == *(_DWORD*)v10) {
          *(_DWORD*)v10 = 0;
        }
        v10 += 80;
      } while (v10 != v11);
      v10 = *(char**)(v9 + 40);
      v11 = *(char**)(v9 + 48);
    }
    if (0xCCCCCCCCCCCCCCCDLL * ((v11 - v10) >> 4) >= 0x40) {
      v12 = GameRoutine_e30760();
      GameRoutine_e305a0(v9 + 40, v12, *(_QWORD*)(v9 + 48));
    }
  }
  v13 = *(_QWORD*)(a1 + 16);
  *(_QWORD*)(a1 + 16) = 0;
  if (v13 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v13 + 8LL))(v13);
  }
  v14 = *(_QWORD*)(a1 + 24);
  *(_QWORD*)(a1 + 24) = 0;
  if (v14 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v14 + 8LL))(v14);
  }
  v15 = *(_QWORD*)(a1 + 32);
  *(_QWORD*)(a1 + 32) = 0;
  if (v15 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v15 + 8LL))(v15);
  }
  *(_BYTE*)(GameData_22162a8 + 114) = 0;
  v16 = *(_QWORD**)(a1 + 56);
  v17 = *(_QWORD**)(a1 + 64);
  if (v16 != v17) {
    do {
      v18 = GameData_22162a8;
      v19 = v16[1];
      v35[0] = *v16;
      v35[1] = v19;
      if (v19 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v19 + 8), 1u,
                                  memory_order_relaxed);
        GameRoutine_ea1560(v18, v35);
        if (atomic_fetch_add((atomic_ullong* volatile)(v19 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v19 + 16LL))(v19);
          std___1___shared_weak_count___release_weak(v19);
        }
      }
      else {
        GameRoutine_ea1560(GameData_22162a8, v35);
      }
      v16 += 2;
    } while (v16 != v17);
    v16 = *(_QWORD**)(a1 + 56);
    v17 = *(_QWORD**)(a1 + 64);
  }
  for (; v17 != v16; v17 -= 2) {
    v20 = *(v17 - 1);
    if (v20 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v20 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v20 + 16LL))(v20);
      std___1___shared_weak_count___release_weak(v20);
    }
  }
  v21 = GameData_22162a8;
  *(_QWORD*)(a1 + 64) = v16;
  if (v21 != 0 && GameData_22162a4-- <= 1) {
    (*(void (**)(__int64))(*(_QWORD*)v21 + 24LL))(v21);
    if (GameData_22162a8 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)GameData_22162a8 + 8LL))(
          GameData_22162a8);
    }
    GameData_22162a8 = 0;
  }
  v23 = *(_QWORD*)(a1 + 56);
  v24 = fw_memory_g_heap_manager_ptr;
  if (v23 != 0) {
    v25 = *(_QWORD*)(a1 + 64);
    if (v23 == v25) {
      goto LABEL_53;
    }
    do {
      v26 = *(_QWORD*)(v25 - 8);
      if (v26 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v26 + 8),
                                       0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v26 + 16LL))(v26);
        std___1___shared_weak_count___release_weak(v26);
      }
      v25 -= 16;
    } while (v25 != v23);
    v27 = *(_QWORD*)(a1 + 56);
    *(_QWORD*)(a1 + 64) = v23;
    if (v27 != 0) {
    LABEL_53:
      v28 = 128;
      if (*(_QWORD*)(*(_QWORD*)v24 + 200LL) == 0) {
        v28 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v24 + v28);
    }
  }
  v29 = *(_QWORD*)(a1 + 48);
  *(_QWORD*)(a1 + 48) = 0;
  if (v29 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v29 + 8LL))(v29);
  }
  v30 = *(_QWORD*)(a1 + 40);
  *(_QWORD*)(a1 + 40) = 0;
  if (v30 != 0) {
    GameRoutine_e4b940(v30);
    v31 = 128;
    if (*(_QWORD*)(*(_QWORD*)v24 + 200LL) == 0) {
      v31 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)v24 + v31);
  }
  v32 = *(_QWORD*)(a1 + 32);
  *(_QWORD*)(a1 + 32) = 0;
  if (v32 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v32 + 8LL))(v32);
  }
  v33 = *(_QWORD*)(a1 + 24);
  *(_QWORD*)(a1 + 24) = 0;
  if (v33 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v33 + 8LL))(v33);
  }
  result = *(_QWORD*)(a1 + 16);
  *(_QWORD*)(a1 + 16) = 0;
  if (result != 0) {
    return (*(__int64 (**)(__int64))(*(_QWORD*)result + 8LL))(result);
  }
  return result;
}

#pragma GCC visibility pop
