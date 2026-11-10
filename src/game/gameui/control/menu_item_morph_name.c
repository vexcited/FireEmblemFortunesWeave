#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_18a7ae0(__int64, unsigned int*, __int64, char, int, __int64,
                            char);
__int64 GameRoutine_18ab530(_QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
extern __int64 GameData_21f1e08;
__attribute__((swiftcall)) void
MenuItemMorphName_Unknown2(PSEUDO_X8 x8_, __int64 result, __int64 a2);
__attribute__((swiftcall)) void

MenuItemMorphName_Unknown2(PSEUDO_X8 x8_, __int64 result, __int64 a2)
{
  _DWORD* a3 = (_DWORD*)PSEUDO_X8_VALUE(x8_);
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  _DWORD* v7;
  __int64 v8;
  __int64 v9;

  if (*(_DWORD*)(a2 + 8) != 45) {
    goto LABEL_14;
  }
  if (GameData_21f1e08 == 0) {
    goto LABEL_14;
  }
  v3 = *(_QWORD*)(GameData_21f1e08 + 144);
  if (v3 == 0) {
    goto LABEL_14;
  }
  v4 = *(_QWORD*)(GameData_21f1e08 + 136);
  v5 = result;
  v6 = *(_QWORD*)(GameData_21f1e08 + 144);
  v7 = a3;
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v3 + 16), 1u,
                            memory_order_relaxed);
  v8 = std___1___shared_weak_count_lock(v6);
  result = std___1___shared_weak_count___release_weak(v3);
  a3 = v7;
  if (v8 != 0) {
    if (v4 != 0) {
      if ((*(_WORD*)(v5 + 24) & 0xFFF) != 0 &&
          (v9 = *(_QWORD*)(v5 + 40)) != 0) {
        result =
            GameRoutine_18a7ae0(v4, (unsigned int*)(v5 + 24), v9, 0, 0, 0, 0);
      }
      else {
        if (*(_QWORD*)(v5 + 32) == 0) {
          goto LABEL_12;
        }
        result = GameRoutine_18ab530(v4);
      }
      a3 = v7;
    }
  LABEL_12:
    if (atomic_fetch_add((atomic_ullong* volatile)(v8 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8);
      result = std___1___shared_weak_count___release_weak(v8);
      a3 = v7;
    }
  }
LABEL_14:
  *a3 = 0x8000;
  {
    result;
    return;
  }
}

#pragma GCC visibility pop
