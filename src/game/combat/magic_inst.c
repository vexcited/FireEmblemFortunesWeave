#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_10a9ec0(_QWORD, long double);
__int64 GameRoutine_10ea2a0(long double, long double);
__int64 GameRoutine_658c00(_QWORD);
__int64 GameRoutine_e5d5a0(_QWORD, _QWORD);
__int64 game_ProcInst_Unregister(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
__n128 GameRoutine_1098db0(__int64);
__n128 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64 (*game_ProcInst_vtable[])();
extern __int64 (*game_combat_MagicInst_vtable[])();
extern __int64 GameData_212d270;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64* GameData_212d448[9];
__int64 MagicInst_Destructor(__int64 a1, __n128 a2);
void game_combat_MagicInst_MagicInst_lambda0_Invoke(__int64 a1, long double a2,
                                                    long double a3);

__int64 MagicInst_Destructor(__int64 a1, __n128 a2)
{
  __int64 v3;
  __int64 v4;
  __n128 v5;
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
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;

  *(_QWORD*)a1 = game_combat_MagicInst_vtable;
  v3 = *(_QWORD*)(a1 + 968);
  if (v3 != 0) {
    a2 = std___1___shared_weak_count___release_weak(v3);
  }
  v4 = *(_QWORD*)(a1 + 952);
  if (v4 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
    a2 = std___1___shared_weak_count___release_weak(v4);
  }
  GameRoutine_10a9ec0(a1 + 920, *(long double*)&a2);
  GameRoutine_1098db0(a1 + 864);
  v5 = GameRoutine_1098db0(a1 + 808);
  v6 = *(_QWORD*)(a1 + 720);
  v7 = fw_memory_g_heap_manager_ptr;
  if (v6 != 0) {
    v8 = *(_QWORD*)fw_memory_g_heap_manager_ptr;
    *(_QWORD*)(a1 + 728) = v6;
    v9 = 128;
    if (*(_QWORD*)(v8 + 200) == 0) {
      v9 = 56;
    }
    nn_mem_StandardAllocator_Free(v8 + v9);
  }
  v10 = *(_QWORD*)(a1 + 696);
  if (v10 != 0) {
    v5 = std___1___shared_weak_count___release_weak(v10);
  }
  v11 = *(_QWORD*)(a1 + 672);
  if (v11 != 0) {
    v5 = std___1___shared_weak_count___release_weak(v11);
  }
  v12 = *(_QWORD*)(a1 + 272);
  if (v12 != 0) {
    v13 = *(_QWORD*)(a1 + 280);
    if (v12 == v13) {
      goto LABEL_22;
    }
    do {
      v14 = *(_QWORD*)(v13 - 8);
      if (v14 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v14 + 8),
                                       0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64, long double))(*(_QWORD*)v14 + 16LL))(
            v14, *(long double*)&v5);
        v5 = std___1___shared_weak_count___release_weak(v14);
      }
      v13 -= 16;
    } while (v13 != v12);
    v15 = *(_QWORD*)(a1 + 272);
    *(_QWORD*)(a1 + 280) = v12;
    if (v15 != 0) {
    LABEL_22:
      v16 = 128;
      if (*(_QWORD*)(*(_QWORD*)v7 + 200LL) == 0) {
        v16 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v7 + v16);
    }
  }
  v17 = *(_QWORD*)(a1 + 248);
  if (v17 != 0) {
    v18 = *(_QWORD*)(a1 + 256);
    if (v17 == v18) {
      goto LABEL_33;
    }
    do {
      v19 = *(_QWORD*)(v18 - 8);
      if (v19 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v19 + 8),
                                       0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64, long double))(*(_QWORD*)v19 + 16LL))(
            v19, *(long double*)&v5);
        v5 = std___1___shared_weak_count___release_weak(v19);
      }
      v18 -= 16;
    } while (v18 != v17);
    v20 = *(_QWORD*)(a1 + 248);
    *(_QWORD*)(a1 + 256) = v17;
    if (v20 != 0) {
    LABEL_33:
      v21 = 128;
      if (*(_QWORD*)(*(_QWORD*)v7 + 200LL) == 0) {
        v21 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v7 + v21);
    }
  }
  v22 = *(_QWORD*)(a1 + 200);
  if (v22 != 0) {
    std___1___shared_weak_count___release_weak(v22);
  }
  v23 = *(_QWORD*)(a1 + 176);
  if (v23 != 0) {
    std___1___shared_weak_count___release_weak(v23);
  }
  *(_QWORD*)a1 = game_ProcInst_vtable;
  if ((*(_WORD*)(a1 + 136) & 0x100) != 0) {
    *(_WORD*)(a1 + 136) &= ~0x100u;
  }
  game_ProcInst_Unregister(a1);
  return GameRoutine_658c00(a1 + 88);
}

void game_combat_MagicInst_MagicInst_lambda0_Invoke(__int64 a1, long double a2,
                                                    long double a3)
{
  __int64 v3;
  _QWORD* v4;
  __int64 v5;
  __int64 v7;
  _QWORD* v8;
  _QWORD* v9;
  __int64 v10;
  _QWORD* v11;
  __int64 v12;
  __int64 v13;
  _QWORD* v14;
  _QWORD* v15;

  v4 = *(_QWORD**)(a1 + 8);
  v5 = v4[22];
  if (v5 != 0 && *(_QWORD*)(v5 + 8) != -1 && v4[23] != 0) {
    v7 = *GameData_212d448[0];
    if (*GameData_212d448[0] != 0) {
      v3 = *(_QWORD*)(v7 + 8);
      if (v3 != 0) {
        LODWORD(v3) = *(unsigned __int8*)(v3 + 113) >> 7;
      }
    }
    LODWORD(a3) = -1.0;
    *(float*)&a2 = -*(float*)(*(_QWORD*)GameData_212d270 + 464LL);
    if (((v7 != 0) & (unsigned __int8)v3) == 0) {
      *(float*)&a2 = -1.0;
    }
    GameRoutine_10ea2a0(a2, a3);
    v8 = v14;
    if (v14 != v15) {
      v9 = (_QWORD*)v4[35];
      do {
        if ((unsigned __int64)v9 >= v4[36]) {
          v9 = (_QWORD*)GameRoutine_e5d5a0(v4 + 34, v8);
        }
        else {
          *v9 = *v8;
          v10 = v8[1];
          v9[1] = v10;
          if (v10 != 0) {
            atomic_fetch_add_explicit((atomic_ullong* volatile)(v10 + 8), 1u,
                                      memory_order_relaxed);
          }
          v9 += 2;
        }
        v8 += 2;
        v4[35] = v9;
      } while (v8 != v15);
      v8 = v14;
    }
    if (v8 != nullptr) {
      v11 = v15;
      if (v8 == v15) {
        goto LABEL_28;
      }
      do {
        v12 = *(v11 - 1);
        if (v12 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v12 + 8),
                                         0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v12 + 16LL))(v12);
          std___1___shared_weak_count___release_weak(v12);
        }
        v11 -= 2;
      } while (v11 != v8);
      if (v14 != nullptr) {
      LABEL_28:
        v13 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v13 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                      v13);
      }
    }
  }
}

#pragma GCC visibility pop
