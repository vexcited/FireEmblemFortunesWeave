#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_94bac0(void);
__int64 DivinationHostMenuItem_Unknown58();
extern __int64 GameData_226dcb0;
__int64 game_facility_anonymous_DivinationHostMenuItem_ACall_closure_Invoke();
__int64 GameRoutine_15e7650(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_16ee370(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_16ee520(_QWORD);
__int64 GameRoutine_94bac0_alt1(_QWORD) __asm__("GameRoutine_94bac0");
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
extern __int64* GameData_212dff0[12];
extern __int64* GameData_212e030[4];
__int64 DivinationHostMenuItem_Unknown73(__int64 a1);

__int64 DivinationHostMenuItem_Unknown58()
{
  GameRoutine_94bac0();
  return 0;
}

__int64 DivinationHostMenuItem_Unknown73(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  unsigned int v5;
  _QWORD v7[7];
  _BYTE v8[104];
  __int64 v9;
  char v10;

  v1 = *(_QWORD*)(a1 + 8);
  if (v1 != 0 && (v2 = __dynamic_cast(*(_QWORD*)(a1 + 8), GameData_212e030[0],
                                      GameData_212dff0[0], 0)) != 0) {
    v3 = (*(__int64 (**)(__int64))(*(_QWORD*)v2 + 1112LL))(v2);
  }
  else {
    v3 = v1 + 848;
  }
  v4 = GameRoutine_16ee370(v8, v3, "MID_DivinationMenu_Divination_Help");
  v5 = GameRoutine_94bac0_alt1(v4);
  v7[4] = 0;
  GameRoutine_15e7650(v8, v5, v7);
  v10 = 0;
  v9 = 0x100000006LL;
  return GameRoutine_16ee520(v8);
}

__int64 game_facility_anonymous_DivinationHostMenuItem_ACall_closure_Invoke()
{
  unsigned __int64 v0;
  unsigned __int64 v1;

  if (GameData_226dcb0 == 0) {
    return 4;
  }
  v1 = *(_QWORD*)(GameData_226dcb0 + 8);
  v0 = *(_QWORD*)(GameData_226dcb0 + 16);
  if (v1 > v0) {
    return 4;
  }
  while (*(_BYTE*)v0 != 2) {
    v0 -= 64LL;
    if (v1 > v0) {
      return 4;
    }
  }
  if (*(_DWORD*)(v0 + 32) != 1) {
    return 4;
  }
  *(_DWORD*)(GameData_226dcb0 + 152) = 2;
  return 4;
}

#pragma GCC visibility pop
