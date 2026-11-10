#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_18863e0(__int64, _QWORD*, char);
__int64 GameRoutine_188bf10(__int64, __int64);
__int64 GameRoutine_189a700(__int64);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
__int64* GameRoutine_1899480(__int64, unsigned int, char, char);
__int64 MenuItemMorphRage_18bbd50(__int64 a1);
__int64 GameRoutine_18ab7b0(_QWORD);
extern __int64 GameData_21f1e08;
__attribute__((swiftcall)) void
MenuItemMorphRage_Unknown2(PSEUDO_X8 x8_, __int64 result, __int64 a2);

__int64 MenuItemMorphRage_18bbd50(__int64 a1)
{
  __int64 result;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  _QWORD v6[2];

  result = *(_QWORD*)(a1 + 16);
  if (result != 0) {
    result = std___1___shared_weak_count_lock(result);
    if (result != 0) {
      v3 = *(_QWORD*)(a1 + 8);
      v4 = result;
      if (v3 != 0) {
        GameRoutine_1899480(v3, 1u, 0, 0);
        GameRoutine_189a700(v3);
        GameRoutine_188bf10(v3, (__int64)"MID_Sys_Empty");
        v5 = *(_QWORD*)(v3 + 1032);
        if (v5 != 0) {
          *(_BYTE*)(v5 + 88) |= 1u;
        }
        v6[0] = "NumNone";
        v6[1] = 7;
        result = GameRoutine_18863e0(v3, v6, 1);
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
        return std___1___shared_weak_count___release_weak(v4);
      }
    }
  }
  return result;
}

__attribute__((swiftcall)) void

MenuItemMorphRage_Unknown2(PSEUDO_X8 x8_, __int64 result, __int64 a2)
{
  _DWORD* a3 = (_DWORD*)PSEUDO_X8_VALUE(x8_);
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  _DWORD* v7;
  __int64 v8;
  __int64 v9;

  if (*(_DWORD*)(a2 + 8) == 45 && GameData_21f1e08 != 0) {
    v3 = *(_QWORD*)(GameData_21f1e08 + 144);
    if (v3 != 0) {
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
        if (v4 != 0 && *(_QWORD*)(v5 + 24) != 0) {
          v9 = v5 + 40;
          if ((*(_WORD*)(v5 + 40) & 0xFFF) != 0) {
            result = GameRoutine_18ab7b0(v4);
            a3 = v7;
          }
        }
        if (atomic_fetch_add((atomic_ullong* volatile)(v8 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64, __int64))(*(_QWORD*)v8 + 16LL))(v8, v9);
          result = std___1___shared_weak_count___release_weak(v8);
          a3 = v7;
        }
      }
    }
  }
  *a3 = 0x8000;
  {
    result;
    return;
  }
}

#pragma GCC visibility pop
