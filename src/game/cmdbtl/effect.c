#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_14a1390(_QWORD, _QWORD);
__int64 GameRoutine_9a4300(_QWORD);
__int64 GameRoutine_e1d240(_QWORD, _QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__n128 nn_mem_StandardAllocator_Free(_QWORD);
extern __int64 (*GameData_1ff57e8[])();
extern __int64 (*game_cmdbtl_Effect_vtable[])();
extern __int64 GameData_2219090;
extern __int64 fw_memory_g_heap_manager_ptr;
extern int GameData_22230f0;
void Effect_Destructor_f4e920(_QWORD* a1);

void Effect_Destructor_f4e920(_QWORD* a1)
{
  __int64** v2;
  __int64** v3;
  __int64 v4;
  __int64** v5;
  __int64* v7;
  __int64 v8;
  __int64* v9;
  __int64* v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;

  *a1 = game_cmdbtl_Effect_vtable;
  GameRoutine_9a4300(6);
  v2 = (__int64**)a1[1];
  v3 = (__int64**)a1[2];
  if (v2 != v3) {
    while (1) {
      v4 = **v2;
      if (v4 == 0 || *(_DWORD*)(v4 + 16) != *((_DWORD*)*v2 + 2)) {
        break;
      }
      v2 += 2;
      if (v2 == v3) {
        v2 = (__int64**)a1[2];
        goto LABEL_25;
      }
    }
  }
  v5 = v2 + 2;
  if (v2 != v3 && v5 != v3) {
    do {
      v7 = *v5;
      v8 = **v5;
      if (v8 != 0 && *(_DWORD*)(v8 + 16) == *((_DWORD*)v7 + 2)) {
        v9 = v5[1];
        if (v9 != nullptr) {
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v9 + 1), 1u,
                                    memory_order_relaxed);
        }
        v10 = v2[1];
        *v2 = v7;
        v2[1] = v9;
        if (v10 != nullptr) {
          if (atomic_fetch_add((atomic_ullong* volatile)(v10 + 1),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64*))(*v10 + 16))(v10);
            std___1___shared_weak_count___release_weak(v10);
          }
          v9 = v2[1];
        }
        if (v9 != nullptr) {
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v9 + 1), 1u,
                                    memory_order_relaxed);
          if (atomic_fetch_add((atomic_ullong* volatile)(v9 + 1),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64*))(*v9 + 16))(v9);
            std___1___shared_weak_count___release_weak(v9);
          }
        }
        v2 += 2;
      }
      v5 += 2;
    } while (v5 != v3);
    v3 = (__int64**)a1[2];
  }
LABEL_25:
  GameRoutine_e1d240(a1 + 1, v2, v3);
  v11 = a1[1];
  v12 = a1[2];
  if (v11 != v12) {
    do {
      GameRoutine_14a1390(v11, 1);
      v11 += 16;
    } while (v11 != v12);
    v11 = a1[1];
    v12 = a1[2];
  }
  v13 = v11;
  if (v11 != v12) {
    do {
      v14 = *(_QWORD*)(v12 - 8);
      if (v14 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v14 + 8),
                                       0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v14 + 16LL))(v14);
        std___1___shared_weak_count___release_weak(v14);
      }
      v12 -= 16;
    } while (v12 != v11);
    v13 = a1[1];
  }
  a1[2] = v11;
  if (v13 != 0) {
    if (v13 == v11) {
      a1[2] = v13;
    }
    else {
      do {
        v15 = *(_QWORD*)(v11 - 8);
        if (v15 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v15 + 8),
                                         0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v15 + 16LL))(v15);
          std___1___shared_weak_count___release_weak(v15);
        }
        v11 -= 16;
      } while (v11 != v13);
      v16 = a1[1];
      a1[2] = v13;
      if (v16 == 0) {
        goto LABEL_48;
      }
    }
    v17 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v17 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v17);
  }
LABEL_48:
  *a1 = GameData_1ff57e8;
  if ((_QWORD*)GameData_2219090 == a1) {
    GameData_2219090 = 0;
    GameData_22230f0 = 0;
  }
}

#pragma GCC visibility pop
