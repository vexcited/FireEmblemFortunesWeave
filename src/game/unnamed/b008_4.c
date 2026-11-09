#include "decomp/pseudo_helpers.h"
#pragma GCC visibility push(hidden)

extern __int64 (*GameData_1fbf8f0[])();
extern __int64 (*GameData_1fbf9d8[])();
extern __int64 GameData_212bf68;
extern __int64 (*GameData_21fdd18)(__int64);
__int64 GameRoutine_1a0a4e0(_QWORD);
__int64 GameRoutine_6315e0(_QWORD);

__int64 GameHr_a53340(_QWORD* a1)
{
  __int64 v1;
  __int64 v3;
  __int64 v4;

  v1 = a1[100];
  *a1 = GameData_1fbf8f0;
  v3 = *(_QWORD*)(v1 + 24);
  if (v3 != 0) {
    GameData_21fdd18(v3);
  }
  GameData_21fdd18(v1);
  GameRoutine_6315e0(a1);
  v4 = 128;
  if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
    v4 = 56;
  }
  return GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v4);
}

__int64 GameHr_a53820(__int64 a1)
{
  __int64 v1;
  __int64 v3;
  __int64 v4;

  v1 = *(_QWORD*)(a1 + 800);
  *(_QWORD*)a1 = GameData_1fbf9d8;
  v3 = *(_QWORD*)(v1 + 24);
  if (v3 != 0) {
    GameData_21fdd18(v3);
  }
  GameData_21fdd18(v1);
  if ((*(_BYTE*)(a1 + 808) & 1) != 0 && *(_QWORD*)(a1 + 824) != 0) {
    v4 = 128;
    if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
      v4 = 56;
    }
    GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v4);
  }
  return GameRoutine_6315e0(a1);
}

__int64 GameHr_a538c0(__int64 a1)
{
  __int64 v1;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;

  v1 = *(_QWORD*)(a1 + 800);
  *(_QWORD*)a1 = GameData_1fbf9d8;
  v3 = *(_QWORD*)(v1 + 24);
  if (v3 != 0) {
    GameData_21fdd18(v3);
  }
  GameData_21fdd18(v1);
  v4 = GameData_212bf68;
  if ((*(_BYTE*)(a1 + 808) & 1) != 0 && *(_QWORD*)(a1 + 824) != 0) {
    v5 = 128;
    if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
      v5 = 56;
    }
    GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v5);
  }
  GameRoutine_6315e0(a1);
  v6 = 128;
  if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) == 0) {
    v6 = 56;
  }
  return GameRoutine_1a0a4e0(*(_QWORD*)v4 + v6);
}

#pragma GCC visibility pop
