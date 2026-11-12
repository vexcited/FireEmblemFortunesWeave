#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__attribute__((swiftcall)) void GameRoutine_15d4100(PSEUDO_X8, _QWORD, _QWORD);
__int64 Element_1885bc0(__int64, __int64*);
__int64 GameRoutine_18855c0(__int64 result, _QWORD*);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
__int64 MenuItemRage_18a1120_alt1(__int64 result,
                                  __int64* a2) __asm__("MenuItemRage_18a1120");
__attribute__((swiftcall)) void
GameRoutine_15d4100_alt1(PSEUDO_X8, __int64*,
                         __int64*) __asm__("GameRoutine_15d4100");
__int64 std___1___shared_weak_count___release_weak_alt1(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
__int64 std___1___shared_weak_count_lock_alt1(__int64) __asm__(
    "std___1___shared_weak_count_lock");
void GameRoutine_18855c0_alt1(_QWORD*, _QWORD*) __asm__("GameRoutine_18855c0");
void MenuItemRage_18a1120(__int64 a1, _QWORD** a2);

void MenuItemRage_18a1120(__int64 a1, _QWORD** a2)
{
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  _QWORD* v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  _QWORD* v20;
  __int64 v21;
  __int64 v22[2];
  struct {
    __int64 v23;
    __int64 v24;
  } v23_;

  if (*a2 != nullptr) {
    v22[0] = (__int64)"L_MenuItem_Name";
    v22[1] = 15;
    GameRoutine_15d4100_alt1((void*)(&v23_.v23), (__int64*)(a1 + 88), v22);
    if (v23_.v24 != 0) {
      v4 = std___1___shared_weak_count_lock_alt1(v23_.v24);
      v5 = v23_.v23;
      if (v4 != 0) {
        v6 = v23_.v23;
      }
      else {
        v6 = 0;
      }
      if (v23_.v24 != 0) {
        std___1___shared_weak_count___release_weak_alt1(v23_.v24);
      }
      if (v6 != 0) {
        v7 = *(_QWORD*)(v5 + 320);
        if (v7 != 0) {
          v8 = *(_QWORD*)(v5 + 312);
          v9 = *(_QWORD*)(v5 + 320);
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v7 + 16), 1u,
                                    memory_order_relaxed);
          v10 = std___1___shared_weak_count_lock_alt1(v9);
          std___1___shared_weak_count___release_weak_alt1(v7);
          if (v10 != 0) {
            if (v8 != 0) {
              v23_.v23 = v6;
              v23_.v24 = v4;
              if (v4 != 0) {
                atomic_fetch_add_explicit((atomic_ullong* volatile)(v4 + 8), 1u,
                                          memory_order_relaxed);
                Element_1885bc0(v8, &v23_.v23);
                if (atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
                  (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
                  std___1___shared_weak_count___release_weak_alt1(v4);
                }
              }
              else {
                Element_1885bc0(v8, &v23_.v23);
              }
            }
            if (atomic_fetch_add((atomic_ullong* volatile)(v10 + 8),
                                 0xFFFFFFFFFFFFFFFFLL) == 0) {
              (*(void (**)(__int64))(*(_QWORD*)v10 + 16LL))(v10);
              std___1___shared_weak_count___release_weak_alt1(v10);
            }
          }
        }
        v11 = *a2;
        v23_.v23 = v6;
        v23_.v24 = v4;
        if (v4 != 0) {
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v4 + 8), 1u,
                                    memory_order_relaxed);
        }
        GameRoutine_18855c0_alt1(v11, &v23_.v23);
        v12 = v23_.v24;
        if (v23_.v24 != 0 &&
            atomic_fetch_add((atomic_ullong* volatile)(v23_.v24 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v12 + 16LL))(v12);
          std___1___shared_weak_count___release_weak_alt1(v12);
        }
      }
      if (v4 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                                      0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
        std___1___shared_weak_count___release_weak_alt1(v4);
      }
    }
    v22[0] = (__int64)"L_MorphRange";
    v22[1] = 12;
    GameRoutine_15d4100_alt1((void*)(&v23_.v23), (__int64*)(a1 + 88), v22);
    if (v23_.v24 != 0) {
      v13 = std___1___shared_weak_count_lock_alt1(v23_.v24);
      v14 = v23_.v23;
      if (v13 != 0) {
        v15 = v23_.v23;
      }
      else {
        v15 = 0;
      }
      if (v23_.v24 != 0) {
        std___1___shared_weak_count___release_weak_alt1(v23_.v24);
      }
      if (v15 != 0) {
        v16 = *(_QWORD*)(v14 + 320);
        if (v16 != 0) {
          v17 = *(_QWORD*)(v14 + 312);
          v18 = *(_QWORD*)(v14 + 320);
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v16 + 16), 1u,
                                    memory_order_relaxed);
          v19 = std___1___shared_weak_count_lock_alt1(v18);
          std___1___shared_weak_count___release_weak_alt1(v16);
          if (v19 != 0) {
            if (v17 != 0) {
              v23_.v23 = v15;
              v23_.v24 = v13;
              if (v13 != 0) {
                atomic_fetch_add_explicit((atomic_ullong* volatile)(v13 + 8),
                                          1u, memory_order_relaxed);
                Element_1885bc0(v17, &v23_.v23);
                if (atomic_fetch_add((atomic_ullong* volatile)(v13 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
                  (*(void (**)(__int64))(*(_QWORD*)v13 + 16LL))(v13);
                  std___1___shared_weak_count___release_weak_alt1(v13);
                }
              }
              else {
                Element_1885bc0(v17, &v23_.v23);
              }
            }
            if (atomic_fetch_add((atomic_ullong* volatile)(v19 + 8),
                                 0xFFFFFFFFFFFFFFFFLL) == 0) {
              (*(void (**)(__int64))(*(_QWORD*)v19 + 16LL))(v19);
              std___1___shared_weak_count___release_weak_alt1(v19);
            }
          }
        }
        v20 = *a2;
        v23_.v23 = v15;
        v23_.v24 = v13;
        if (v13 != 0) {
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v13 + 8), 1u,
                                    memory_order_relaxed);
        }
        GameRoutine_18855c0_alt1(v20, &v23_.v23);
        v21 = v23_.v24;
        if (v23_.v24 != 0 &&
            atomic_fetch_add((atomic_ullong* volatile)(v23_.v24 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v21 + 16LL))(v21);
          std___1___shared_weak_count___release_weak_alt1(v21);
        }
      }
      if (v13 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v13 + 8),
                                       0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v13 + 16LL))(v13);
        std___1___shared_weak_count___release_weak_alt1(v13);
      }
    }
  }
}

#pragma GCC visibility pop
