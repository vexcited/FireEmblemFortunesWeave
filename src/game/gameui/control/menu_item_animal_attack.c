#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_18863e0(__int64, _QWORD*, char);
__int64 GameRoutine_188bf10(__int64, __int64);
__int64 GameRoutine_1899480(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_189a700(_QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
__int64 MenuItemAnimalAttack_1893370(_QWORD* a1);
__int64 MenuItemAnimalAttack_18934c0(__int64 a1);

__int64 MenuItemAnimalAttack_1893370(_QWORD* a1)
{
  __int64 result;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  _QWORD v10[2];

  result = a1[2];
  if (result != 0) {
    result = std___1___shared_weak_count_lock(result);
    if (result != 0) {
      v3 = a1[1];
      v4 = result;
      if (v3 != 0) {
        v5 = a1[2];
        a1[4] = 0;
        if (v5 != 0) {
          v6 = std___1___shared_weak_count_lock(v5);
          if (v6 != 0) {
            v7 = a1[1];
            if (v7 != 0) {
              *(_QWORD*)(v7 + 1088) = 0;
            }
            if (atomic_fetch_add((atomic_ullong* volatile)(v6 + 8),
                                 0xFFFFFFFFFFFFFFFFLL) == 0) {
              v8 = v6;
              (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
              std___1___shared_weak_count___release_weak(v8);
            }
          }
        }
        if ((*(_BYTE*)(v3 + 1080) & 1) == 0) {
          *(_BYTE*)(v3 + 1080) = 1;
        }
        *(_DWORD*)(v3 + 1076) = 0;
        *(_QWORD*)(v3 + 1096) = a1[3];
        GameRoutine_1899480(v3, 1, 0, 0);
        GameRoutine_189a700(v3);
        GameRoutine_188bf10(v3, (__int64)"MID_Sys_Empty");
        v9 = *(_QWORD*)(v3 + 1032);
        if (v9 != 0) {
          *(_BYTE*)(v9 + 88) |= 1u;
        }
        v10[0] = "NumNone";
        v10[1] = 7;
        result = GameRoutine_18863e0(v3, v10, 1);
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

__int64 MenuItemAnimalAttack_18934c0(__int64 a1)
{
  __int64 result;
  __int64 v3;

  result = *(_QWORD*)(a1 + 16);
  if (result != 0) {
    result = std___1___shared_weak_count_lock(result);
    if (result != 0) {
      v3 = result;
      result = *(_QWORD*)(a1 + 8);
      if (result != 0) {
        result = (*(__int64 (**)(__int64, _QWORD))(*(_QWORD*)result + 40LL))(
            result, 0);
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
        return std___1___shared_weak_count___release_weak(v3);
      }
    }
  }
  return result;
}

#pragma GCC visibility pop
