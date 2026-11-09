#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameManager_a360a0(_QWORD, _QWORD);
__int64 GameRoutine_1553220(_QWORD);
__int64 GameRoutine_155e140(_QWORD);
__int64 GameRoutine_1563f90(_QWORD, _QWORD);
__int64 GameRoutine_1564060(_QWORD);
__int64 GameRoutine_634d80(_QWORD, _QWORD);
__int64 GameRoutine_658c00(_QWORD);
__int64 game_ProcInst_Unregister(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
__int64 nn_oe_SetUserInactivityDetectionTimeExtendedUnsafe(_QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64 (*game_anonymous_ProcStaffRollSeq_vtable[])();
extern __int64 GameData_212c608[2];
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64* game_sound_g_game_sound_ptr[5];
__int64 ProcStaffRollSeq_Destructor(__int64 a1);

__int64 ProcStaffRollSeq_Destructor(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  _QWORD* v4;
  _QWORD* i;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  _QWORD* v12;
  _QWORD* v13;
  __int64 v14;
  __int64 v15;
  _QWORD* v16;
  __int64 v17;
  _QWORD* v18;
  _QWORD* v19;
  __int64 v20;
  __int64 v21;
  _QWORD* v22;
  __int64 v23;

  *(_QWORD*)a1 = game_anonymous_ProcStaffRollSeq_vtable;
  if (*(_BYTE*)(a1 + 396) == 1) {
    GameRoutine_1553220(*(unsigned int*)(a1 + 392));
    if (*(_BYTE*)(a1 + 396) == 1) {
      *(_BYTE*)(a1 + 396) = 0;
    }
  }
  if (*(_QWORD*)(a1 + 264) != 0) {
    GameRoutine_155e140(a1 + 280);
    v2 = *(_QWORD*)(a1 + 264);
    if (v2 != 0) {
      *(_BYTE*)(v2 + 2376) = 1;
    }
    v3 = *(_QWORD*)(a1 + 272);
    *(_QWORD*)(a1 + 264) = 0;
    *(_QWORD*)(a1 + 272) = 0;
    if (v3 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                                    0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
      std___1___shared_weak_count___release_weak(v3);
    }
  }
  v4 = *(_QWORD**)(a1 + 216);
  for (i = (_QWORD*)(a1 + 208); v4 != i; v4 = (_QWORD*)v4[1]) {
    v7 = v4[2];
    v6 = v4[3];
    if (v6 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v6 + 8), 1u,
                                memory_order_relaxed);
    }
    v8 = *(_QWORD*)(v7 + 16);
    if (v8 != 0) {
      GameRoutine_634d80(*(_QWORD*)(v8 + 8), v8);
      *(_QWORD*)(v7 + 16) = 0;
    }
    if (v6 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v6 + 8),
                                    0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
      std___1___shared_weak_count___release_weak(v6);
    }
  }
  GameManager_a360a0(*game_sound_g_game_sound_ptr[0], "BGM_SYS_ED3");
  nn_oe_SetUserInactivityDetectionTimeExtendedUnsafe(0);
  GameRoutine_155e140(a1 + 280);
  v9 = *(_QWORD*)(a1 + 376);
  if (v9 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v9 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v9 + 16LL))(v9);
    std___1___shared_weak_count___release_weak(v9);
  }
  GameRoutine_1564060(a1 + 328);
  GameRoutine_1563f90(a1 + 304, *(_QWORD*)(a1 + 312));
  v10 = *(_QWORD*)(a1 + 288);
  if (v10 != 0) {
    std___1___shared_weak_count___release_weak(v10);
  }
  v11 = *(_QWORD*)(a1 + 272);
  if (v11 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v11 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v11 + 16LL))(v11);
    std___1___shared_weak_count___release_weak(v11);
  }
  if (*(_QWORD*)(a1 + 224) != 0) {
    v12 = *(_QWORD**)(a1 + 216);
    v13 = *(_QWORD**)(*(_QWORD*)(a1 + 208) + 8LL);
    *(_QWORD*)(*v12 + 8LL) = v13;
    *v13 = *v12;
    *(_QWORD*)(a1 + 224) = 0;
    if (v12 != i) {
      v14 = fw_memory_g_heap_manager_ptr;
      do {
        v16 = (_QWORD*)v12[1];
        v17 = v12[3];
        if (v17 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v17 + 8),
                                         0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v17 + 16LL))(v17);
          std___1___shared_weak_count___release_weak(v17);
        }
        if (*(_QWORD*)(*(_QWORD*)v14 + 200LL) != 0) {
          v15 = 128;
        }
        else {
          v15 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)v14 + v15);
        v12 = v16;
      } while (v16 != i);
    }
  }
  if (*(_QWORD*)(a1 + 168) != 0) {
    v18 = *(_QWORD**)(a1 + 160);
    v19 = *(_QWORD**)(*(_QWORD*)(a1 + 152) + 8LL);
    *(_QWORD*)(*v18 + 8LL) = v19;
    *v19 = *v18;
    *(_QWORD*)(a1 + 168) = 0;
    if (v18 != (_QWORD*)(a1 + 152)) {
      v20 = fw_memory_g_heap_manager_ptr;
      do {
        v22 = (_QWORD*)v18[1];
        v23 = v18[3];
        if (v23 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v23 + 8),
                                         0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v23 + 16LL))(v23);
          std___1___shared_weak_count___release_weak(v23);
        }
        if (*(_QWORD*)(*(_QWORD*)v20 + 200LL) != 0) {
          v21 = 128;
        }
        else {
          v21 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)v20 + v21);
        v18 = v22;
      } while (v22 != (_QWORD*)(a1 + 152));
    }
  }
  *(_QWORD*)a1 = GameData_212c608[0] + 16;
  if ((*(_WORD*)(a1 + 136) & 0x100) != 0) {
    *(_WORD*)(a1 + 136) &= ~0x100u;
  }
  game_ProcInst_Unregister(a1);
  return GameRoutine_658c00(a1 + 88);
}

#pragma GCC visibility pop
