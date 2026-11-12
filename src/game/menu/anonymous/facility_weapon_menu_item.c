#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_18659c0(_QWORD, _QWORD);
void __attribute__((noreturn)) GameRoutine_8a5530(_QWORD, _QWORD);
__int64 FacilityWeaponMenuItem_Unknown3(__int64 a1, __int64 a2);
__int64 FacilityWeaponMenuItem_ACall(__int64 a1);
void GameRoutine_18659c0_alt1(__int64, __int64*) __asm__("GameRoutine_18659c0");

__int64 FacilityWeaponMenuItem_Unknown3(__int64 a1, __int64 a2)
{
  __int64 v2;
  __int64 v3;
  __int64* v4;

  v2 = *(_QWORD*)(a1 + 144);
  if (v2 == 0) {
    return 0;
  }
  v4 = *(__int64**)(v2 + 40);
  v3 = *v4;
  if (v4[1] == *v4) {
    GameRoutine_8a5530(a1, a2);
  }
  return *(_QWORD*)(*(_QWORD*)v3 + 32LL);
}

__int64 FacilityWeaponMenuItem_ACall(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v5[3];

  if (*(_BYTE*)(a1 + 82) != 1) {
    return 1;
  }
  v5[1] = v1;
  v5[2] = v2;
  v3 = *(_QWORD*)(a1 + 8);
  if (*(_QWORD*)(v3 + 152) != 0) {
    v3 = *(_QWORD*)(v3 + 152);
  }
  v5[0] = *(_QWORD*)(a1 + 144);
  GameRoutine_18659c0_alt1(v3, v5);
  return 9;
}

#pragma GCC visibility pop
