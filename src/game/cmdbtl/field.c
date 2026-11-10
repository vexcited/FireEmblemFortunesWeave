#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 Seq_a85600(_QWORD);
__int64 Shape_f64760(_QWORD);
__n128 nn_mem_StandardAllocator_Free(_QWORD);
__n128 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64 (*GameData_2001a98[])();
extern __int64 (*game_cmdbtl_Field_vtable[])();
extern __int64 GameData_212c7d8[6];
extern __int64 GameData_21c6978;
extern __int64 GameData_2219078;
extern __int64 fw_memory_g_heap_manager_ptr;
extern int GameData_2219070;
void Field_Destructor(__int64 a1, __n128 a2);
void Field_1012de0(__int64 a1);
__int64 Field_1012de0_alt1(_QWORD) __asm__("Field_1012de0");
__int64 Field_1012ce0(__int64 result);

void Field_Destructor(__int64 a1, __n128 a2)
{
  __int64 v3;
  __int64 v4;
  __int64 i;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;

  *(_QWORD*)a1 = game_cmdbtl_Field_vtable;
  if (*(int*)(a1 + 16) >= 1) {
    v3 = *(_QWORD*)(a1 + 72);
    v4 = *(_QWORD*)(v3 + 8);
    for (i = *(_QWORD*)(v3 + 16); i != v4; i -= 16) {
      v6 = *(_QWORD*)(i - 8);
      if (v6 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v6 + 8),
                                      0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
        std___1___shared_weak_count___release_weak(v6);
      }
    }
    *(_QWORD*)(v3 + 16) = v4;
    Seq_a85600(GameData_21c6978);
    Field_1012de0(a1);
  }
  v7 = *(_QWORD*)(a1 + 80);
  if (v7 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
    a2 = std___1___shared_weak_count___release_weak(v7);
  }
  v8 = *(_QWORD*)(a1 + 64);
  if (v8 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v8 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64, long double))(*(_QWORD*)v8 + 16LL))(
        v8, *(long double*)&a2);
    a2 = std___1___shared_weak_count___release_weak(v8);
  }
  v9 = *(_QWORD*)(a1 + 24);
  if (v9 != 0) {
    v10 = *(_QWORD*)(a1 + 32);
    if (v9 == v10) {
      goto LABEL_23;
    }
    do {
      v11 = *(_QWORD*)(v10 - 8);
      if (v11 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v11 + 8),
                                       0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64, long double))(*(_QWORD*)v11 + 16LL))(
            v11, *(long double*)&a2);
        a2 = std___1___shared_weak_count___release_weak(v11);
      }
      v10 -= 16;
    } while (v10 != v9);
    v12 = *(_QWORD*)(a1 + 24);
    *(_QWORD*)(a1 + 32) = v9;
    if (v12 != 0) {
    LABEL_23:
      v13 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v13 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                    v13);
    }
  }
  *(_QWORD*)a1 = GameData_2001a98;
  if (GameData_2219078 == a1) {
    GameData_2219078 = 0;
    GameData_2219070 = 0;
  }
}

__int64 Field_1012ce0(__int64 result)
{
  __int64 v1;
  int v2;
  __int64 v3;
  __int64 v4;
  __int64 i;
  __int64 v6;

  v1 = result;
  v2 = *(_DWORD*)(result + 16) - 1;
  *(_DWORD*)(result + 16) = v2;
  if (v2 != 0) {
    if (v2 > 0) {
      return result;
    }
  }
  else {
    result =
        (*(__int64 (**)(__int64))(*(_QWORD*)(result + 8) + 8LL))(result + 8);
    if (*(int*)(v1 + 16) > 0) {
      return result;
    }
  }
  v3 = *(_QWORD*)(v1 + 72);
  v4 = *(_QWORD*)(v3 + 8);
  for (i = *(_QWORD*)(v3 + 16); i != v4; i -= 16) {
    v6 = *(_QWORD*)(i - 8);
    if (v6 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v6 + 8),
                                    0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
      std___1___shared_weak_count___release_weak(v6);
    }
  }
  *(_QWORD*)(v3 + 16) = v4;
  Seq_a85600(GameData_21c6978);
  return Field_1012de0_alt1(v1);
}

void Field_1012de0(__int64 a1)
{
  __int64* v2;
  __int64* v3;
  __int64 v4;
  __int64 v5;
  atomic_ullong* v6;
  __int64 v7;
  _QWORD v8[2];

  *(_QWORD*)(*(_QWORD*)GameData_212c7d8[0] + 176LL) =
      *(_QWORD*)(*(_QWORD*)GameData_212c7d8[0] + 168LL);
  v2 = *(__int64**)(a1 + 24);
  v3 = *(__int64**)(a1 + 32);
  if (v2 != v3) {
    while (1) {
      v4 = *v2;
      v5 = v2[1];
      if (v5 != 0) {
        v6 = (atomic_ullong*)(v5 + 8);
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v5 + 8), 1u,
                                  memory_order_relaxed);
        v8[0] = v4;
        v8[1] = v5;
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v5 + 8), 1u,
                                  memory_order_relaxed);
        Shape_f64760(v8);
        if (atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                             0xFFFFFFFFFFFFFFFFLL) != 0) {
          if (atomic_fetch_add(v6, 0xFFFFFFFFFFFFFFFFLL) == 0) {
            goto LABEL_10;
          }
        }
        else {
          (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
          std___1___shared_weak_count___release_weak(v5);
          if (atomic_fetch_add(v6, 0xFFFFFFFFFFFFFFFFLL) == 0) {
          LABEL_10:
            (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
            std___1___shared_weak_count___release_weak(v5);
          }
        }
      }
      else {
        v8[0] = *v2;
        v8[1] = 0;
        Shape_f64760(v8);
      }
      v2 += 2;
      if (v2 == v3) {
        v2 = *(__int64**)(a1 + 24);
        v3 = *(__int64**)(a1 + 32);
        break;
      }
    }
  }
  while (v3 != v2) {
    v7 = *(v3 - 1);
    if (v7 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                                    0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
      std___1___shared_weak_count___release_weak(v7);
    }
    v3 -= 2;
  }
  *(_QWORD*)(a1 + 32) = v2;
}

#pragma GCC visibility pop
