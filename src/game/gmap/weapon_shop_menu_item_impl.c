#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_1703290(_QWORD, _QWORD);
__int64 GameRoutine_18659c0(_QWORD, _QWORD);
extern char GameData_2260e78;
extern char GameData_226b31c;
void __attribute__((noreturn)) GameRoutine_8a5530(_QWORD, _QWORD);
__int64 WeaponShopMenuItem_16a4570(__int64 a1, __int64 a2);
_QWORD* WeaponShopMenuItem_16a45b0(_QWORD* result);
__int64 WeaponShopMenuItem_16a4600(__int64 a1);

__int64 WeaponShopMenuItem_16a4570(__int64 a1, __int64 a2)
{
  __int64 v2;
  __int64 v3;
  __int64* v4;

  v2 = *(_QWORD*)(a1 + 152);
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

_QWORD* WeaponShopMenuItem_16a45b0(_QWORD* result)
{
  if (GameData_226b31c == 1) {
    GameData_2260e78 = 1;
  }
  if (*(_QWORD**)(result[1] + 336LL) == result) {
    return (_QWORD*)(*(__int64 (**)(_QWORD*, _QWORD))(*result + 64LL))(result,
                                                                       0);
  }
  return result;
}

__int64 WeaponShopMenuItem_16a4600(__int64 a1)
{
  __int64 v1;
  int v2;
  __int64 v4;
  __int64 v6;

  v1 = *(_QWORD*)(a1 + 8);
  v2 = *(unsigned __int8*)(a1 + 160);
  if (*(_QWORD*)(v1 + 152) != 0) {
    v4 = *(_QWORD*)(v1 + 152);
  }
  else {
    v4 = *(_QWORD*)(a1 + 8);
  }
  v6 = *(_QWORD*)(a1 + 152);
  if (v2 == 2) {
    GameRoutine_1703290(v4, &v6);
  }
  else {
    GameRoutine_18659c0(v4, &v6);
  }
  return 9;
}

#pragma GCC visibility pop
