#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_1562cf0(_QWORD, _QWORD);
__int64 GameRoutine_18863e0(__int64, _QWORD*, char);
__int64 GameRoutine_188bf10(__int64, __int64);
__int64 GameRoutine_1899480(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_189a700(_QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
__int64 MenuItemAnimalSkill_1893870(_QWORD* a1);

__int64 MenuItemAnimalSkill_1893870(_QWORD* a1)
{
  __int64 result;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  _QWORD v6[2];

  result = a1[2];
  if (result != 0) {
    result = std___1___shared_weak_count_lock(result);
    if (result != 0) {
      v3 = a1[1];
      v4 = result;
      if (v3 != 0) {
        if ((*(_BYTE*)(v3 + 1080) & 1) == 0) {
          *(_BYTE*)(v3 + 1080) = 1;
        }
        *(_DWORD*)(v3 + 1076) = 0;
        *(_QWORD*)(v3 + 1096) = a1[3];
        GameRoutine_1899480(v3, 1, 0, 0);
        GameRoutine_189a700(v3);
        GameRoutine_188bf10(v3, (__int64)"MID_Sys_Empty");
        v5 = *(_QWORD*)(v3 + 1032);
        if (v5 != 0) {
          *(_BYTE*)(v5 + 88) |= 1u;
        }
        v6[0] = "NumNone";
        v6[1] = 7;
        GameRoutine_18863e0(v3, v6, 1);
        result = GameRoutine_1562cf0(v3 + 88, "RelianceOff");
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

#pragma GCC visibility pop
