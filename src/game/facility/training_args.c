#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 game_GameVariableTable_Find(_QWORD, _QWORD);
__int64 game_HashString(_QWORD);
extern _UNKNOWN GameData_1a92708;
extern _UNKNOWN GameData_1a9a429;
extern _UNKNOWN GameData_1ad432e;
extern _UNKNOWN GameData_1aeed47;
extern __int64 game_GameModeData_instance_;
__int64 TrainingArgs_14269e0(__int64 a1);

__int64 TrainingArgs_14269e0(__int64 a1)
{
  int v1;
  __int64 result;
  void* v3;
  _QWORD v4[2];

  v1 = *(unsigned __int8*)(a1 + 56);
  result = 0;
  if (v1 > 2) {
    if (v1 == 3) {
      v3 = &GameData_1ad432e;
    }
    else {
      if (v1 != 4) {
        return result;
      }
      v3 = &GameData_1a92708;
    }
  }
  else if (v1 == 1) {
    v3 = &GameData_1aeed47;
  }
  else {
    if (v1 != 2) {
      return result;
    }
    v3 = &GameData_1a9a429;
  }
  v4[1] = v3;
  v4[0] = game_HashString(v3);
  if (game_GameModeData_instance_ == 0) {
    return 0;
  }
  result = game_GameVariableTable_Find(
      *(_QWORD*)(game_GameModeData_instance_ + 48), v4);
  if (result != 0) {
    return *(unsigned int*)(result + 32);
  }
  return result;
}

#pragma GCC visibility pop
