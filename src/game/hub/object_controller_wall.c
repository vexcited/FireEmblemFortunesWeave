#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

extern __int64 (*GameData_1fe28f8[])();
void GameRoutine_dfd280(__int64, __int64);
__int64 game_hub_ObjectControllerWall_InitializeImpl(__int64 a1);

__int64 game_hub_ObjectControllerWall_InitializeImpl(__int64 a1)
{
  __int64 v1;
  __int64 result;
  __int64 v3;
  _QWORD v4[4];
  _QWORD* v5;

  v1 = *(_QWORD*)(a1 + 8);
  v4[0] = GameData_1fe28f8;
  v4[1] = a1;
  v5 = v4;
  GameRoutine_dfd280(v1, (__int64)v4);
  result = (__int64)v5;
  if (v5 == v4) {
    v3 = 32;
  }
  else {
    if (v5 == nullptr) {
      return result;
    }
    v3 = 40;
  }
  return (*(__int64 (**)(__int64))(*v5 + v3))((__int64)v5);
}

#pragma GCC visibility pop
