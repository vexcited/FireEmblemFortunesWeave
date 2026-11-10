#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

extern __int64 GameData_2258178;
float game_Mouse_OnChangeMenuSenseConfig_lambda0_Invoke(__int64 a1, int* a2);

float game_Mouse_OnChangeMenuSenseConfig_lambda0_Invoke(__int64 a1, int* a2)
{
  float result;

  if (GameData_2258178 != 0) {
    result = *(float*)(a1 + 8);
    *(float*)(GameData_2258178 + 4LL * *a2 + 300) = result;
  }
  return result;
}

#pragma GCC visibility pop
