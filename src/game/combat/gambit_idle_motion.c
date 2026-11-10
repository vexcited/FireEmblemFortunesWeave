#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_e51940(_QWORD, _QWORD);
extern __int64 (*GameData_1fe62f0[])();
__int64 game_combat_GambitIdleMotion_Run(__int64 a1);
__attribute__((swiftcall)) void GambitIdleMotion_Unknown3(PSEUDO_X8 x8_);

__int64 game_combat_GambitIdleMotion_Run(__int64 a1)
{
  __int64 result;
  __int64 v2;
  _QWORD v3[4];
  _QWORD* v4;

  v3[0] = GameData_1fe62f0;
  v4 = v3;
  GameRoutine_e51940(a1, v3);
  result = (__int64)v4;
  if (v4 == v3) {
    v2 = 32;
  }
  else {
    if (v4 == nullptr) {
      return result;
    }
    v2 = 40;
  }
  return (*(__int64 (**)(__int64))(*v4 + v2))((__int64)v4);
}

__attribute__((swiftcall)) void GambitIdleMotion_Unknown3(PSEUDO_X8 x8_)
{
  char* a1 = (char*)PSEUDO_X8_VALUE(x8_);
  strcpy(a1, " GambitIdleMotion");
}

#pragma GCC visibility pop
