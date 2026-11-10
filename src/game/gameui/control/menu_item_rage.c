#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__attribute__((swiftcall)) void GameRoutine_15d4100(PSEUDO_X8, _QWORD, _QWORD);
__int64 Element_1885bc0(__int64, __int64*);
__int64 GameRoutine_18855c0(__int64 result, _QWORD*);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
__int64 MenuItemRage_18a1120(__int64 result, __int64* a2);

__int64 MenuItemRage_18a1120(__int64 result, __int64* a2)
{
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
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  _QWORD v22[2];
  __int64 v23;
  __int64 v24;

  if (*a2 != 0) {
    v3 = result;
    v22[0] = "L_MenuItem_Name";
    v22[1] = 15;
    GameRoutine_15d4100((void*)&v23, result + 88, v22);
    if (v24 != 0) {
      v4 = std___1___shared_weak_count_lock(v24);
      v5 = v23;
      if (v4 != 0) {
        v6 = v23;
      }
      else {
        v6 = 0;
      }
      if (v24 != 0) {
        std___1___shared_weak_count___release_weak(v24);
      }
      if (v6 != 0) {
        v7 = *(_QWORD*)(v5 + 320);
        if (v7 != 0) {
          v8 = *(_QWORD*)(v5 + 312);
          v9 = *(_QWORD*)(v5 + 320);
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v7 + 16), 1u,
                                    memory_order_relaxed);
          v10 = std___1___shared_weak_count_lock(v9);
          std___1___shared_weak_count___release_weak(v7);
          if (v10 != 0) {
            if (v8 != 0) {
              v23 = v6;
              v24 = v4;
              if (v4 != 0) {
                atomic_fetch_add_explicit((atomic_ullong* volatile)(v4 + 8), 1u,
                                          memory_order_relaxed);
                Element_1885bc0(v8, &v23);
                if (atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
                  (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
                  std___1___shared_weak_count___release_weak(v4);
                }
              }
              else {
                Element_1885bc0(v8, &v23);
              }
            }
            if (atomic_fetch_add((atomic_ullong* volatile)(v10 + 8),
                                 0xFFFFFFFFFFFFFFFFLL) == 0) {
              (*(void (**)(__int64))(*(_QWORD*)v10 + 16LL))(v10);
              std___1___shared_weak_count___release_weak(v10);
            }
          }
        }
        v11 = *a2;
        v23 = v6;
        v24 = v4;
        if (v4 != 0) {
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v4 + 8), 1u,
                                    memory_order_relaxed);
        }
        GameRoutine_18855c0(v11, &v23);
        v12 = v24;
        if (v24 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v24 + 8),
                                         0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v12 + 16LL))(v12);
          std___1___shared_weak_count___release_weak(v12);
        }
      }
      if (v4 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                                      0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
        std___1___shared_weak_count___release_weak(v4);
      }
    }
    v22[0] = "L_MorphRange";
    v22[1] = 12;
    GameRoutine_15d4100((void*)&v23, v3 + 88, v22);
    result = v24;
    if (v24 != 0) {
      v13 = std___1___shared_weak_count_lock(v24);
      v14 = v23;
      result = v24;
      if (v13 != 0) {
        v15 = v23;
      }
      else {
        v15 = 0;
      }
      if (v24 != 0) {
        result = std___1___shared_weak_count___release_weak(v24);
      }
      if (v15 != 0) {
        v16 = *(_QWORD*)(v14 + 320);
        if (v16 != 0) {
          v17 = *(_QWORD*)(v14 + 312);
          v18 = *(_QWORD*)(v14 + 320);
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v16 + 16), 1u,
                                    memory_order_relaxed);
          v19 = std___1___shared_weak_count_lock(v18);
          std___1___shared_weak_count___release_weak(v16);
          if (v19 != 0) {
            if (v17 != 0) {
              v23 = v15;
              v24 = v13;
              if (v13 != 0) {
                atomic_fetch_add_explicit((atomic_ullong* volatile)(v13 + 8),
                                          1u, memory_order_relaxed);
                Element_1885bc0(v17, &v23);
                if (atomic_fetch_add((atomic_ullong* volatile)(v13 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
                  (*(void (**)(__int64))(*(_QWORD*)v13 + 16LL))(v13);
                  std___1___shared_weak_count___release_weak(v13);
                }
              }
              else {
                Element_1885bc0(v17, &v23);
              }
            }
            if (atomic_fetch_add((atomic_ullong* volatile)(v19 + 8),
                                 0xFFFFFFFFFFFFFFFFLL) == 0) {
              (*(void (**)(__int64))(*(_QWORD*)v19 + 16LL))(v19);
              std___1___shared_weak_count___release_weak(v19);
            }
          }
        }
        v20 = *a2;
        v23 = v15;
        v24 = v13;
        if (v13 != 0) {
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v13 + 8), 1u,
                                    memory_order_relaxed);
        }
        result = GameRoutine_18855c0(v20, &v23);
        v21 = v24;
        if (v24 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v24 + 8),
                                         0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v21 + 16LL))(v21);
          result = std___1___shared_weak_count___release_weak(v21);
        }
      }
      if (v13 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v13 + 8),
                                       0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v13 + 16LL))(v13);
        return std___1___shared_weak_count___release_weak(v13);
      }
    }
  }
  return result;
}

#pragma GCC visibility pop
