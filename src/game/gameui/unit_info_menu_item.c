#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_1605f00(__int64);
__int64 GameRoutine_1606250(_QWORD);
__int64 game_gameui_Util_GetMorphRage(_QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
__int64 strlen(_QWORD);
extern __int64* GameData_212c880[5];
__int64 UnitInfoMenuItem_16061b0(__int64 a1, __int64 a2);
__int64 UnitInfoMenuItem_1606c80(__int64 result, __int64 a2, __int16 a3);

__int64 UnitInfoMenuItem_16061b0(__int64 a1, __int64 a2)
{
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;

  GameRoutine_1605f00(a1);
  v4 = *(_QWORD*)(a1 + 16);
  if (v4 != 0) {
    v5 = std___1___shared_weak_count_lock(v4);
    if (v5 != 0) {
      v6 = v5;
      v7 = *(_QWORD*)(a1 + 8);
      if (v7 != 0) {
        (*(void (**)(__int64, __int64))(*(_QWORD*)v7 + 40LL))(v7, 1);
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v6 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
        std___1___shared_weak_count___release_weak(v6);
      }
    }
  }
  *(_DWORD*)(a1 + 24) = 1;
  v8 = strlen(a2);
  *(_QWORD*)(a1 + 40) = a2;
  *(_QWORD*)(a1 + 48) = v8;
  return GameRoutine_1606250(a1);
}

__int64 UnitInfoMenuItem_1606c80(__int64 result, __int64 a2, __int16 a3)
{
  __int64 v3;
  int v4;
  __int64 v5;
  __int64 v6;

  *(_DWORD*)(result + 16) = 0;
  *(_QWORD*)result = 0;
  *(_QWORD*)(result + 8) = 0;
  v3 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c880[0] + 64) +
                             8LL * (a3 & 0xFFF)) +
                  592LL);
  if (v3 != 0) {
    v4 = *(unsigned __int16*)(v3 + 128);
    *(_QWORD*)result = v3;
    if (v4 != 0) {
      v5 = *(_QWORD*)(*(_QWORD*)(v3 + 136) + 8LL);
    }
    else {
      v5 = 0;
    }
    *(_QWORD*)(result + 8) = v5;
    v6 = result;
    result = game_gameui_Util_GetMorphRage(a2, v3);
    *(_DWORD*)(v6 + 16) = *(_DWORD*)result;
  }
  return result;
}

#pragma GCC visibility pop
