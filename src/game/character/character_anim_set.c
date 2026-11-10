#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_7f7720(_QWORD);
__int64* game_character_CharacterAnimSet_LoadAsync_lambda0_Invoke(__int64 a1);

__int64* game_character_CharacterAnimSet_LoadAsync_lambda0_Invoke(__int64 a1)
{
  __int64* result;
  __int64 v2;

  result = *(__int64**)(a1 + 8);
  v2 = *result;
  *result = 0;
  if (v2 != 0) {
    return (__int64*)GameRoutine_7f7720(result);
  }
  return result;
}

#pragma GCC visibility pop
