#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 CharacterBuilder_1083e90(_QWORD*, __int64);
extern __int64 (*GameData_20ddde8[])();
_QWORD* game_cutscene_CharaLocalWindAccessor_Start(_QWORD** a1);

_QWORD* game_cutscene_CharaLocalWindAccessor_Start(_QWORD** a1)
{
  _QWORD* result;
  __int64 v2;
  struct {
    _QWORD v3[4];
    _QWORD* v4;
  } v3_;

  result = *a1;
  if (result != nullptr) {
    v3_.v3[0] = GameData_20ddde8;
    v3_.v4 = v3_.v3;
    CharacterBuilder_1083e90(result, (__int64)v3_.v3);
    result = v3_.v4;
    if (v3_.v4 == v3_.v3) {
      v2 = 32;
    }
    else {
      if (v3_.v4 == nullptr) {
        return result;
      }
      v2 = 40;
    }
    return (_QWORD*)(*(__int64 (**)(__int64))(*v3_.v4 + v2))((__int64)v3_.v4);
  }
  return result;
}

#pragma GCC visibility pop
