#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_110b040(_QWORD, _QWORD, _QWORD);
extern __int64* GameData_212fed0;
__int64
game_character_CharacterAsset_LoadAsyncMulticore_lambda0_Invoke(__int64 a1);
__int64

game_character_CharacterAsset_LoadAsyncMulticore_lambda0_Invoke(__int64 a1)
{
  __int64 result;

  result = *GameData_212fed0;
  if (*GameData_212fed0 != 0) {
    return GameRoutine_110b040(result, *(_QWORD*)(a1 + 8) + 8LL,
                               *(_QWORD*)(a1 + 8) + 56LL);
  }
  return result;
}

#pragma GCC visibility pop
