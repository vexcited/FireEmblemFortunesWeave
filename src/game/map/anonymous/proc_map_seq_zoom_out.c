#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64* game_map_8235e0(__int64* result, __int64, float, float);
__int64 game_GameVariableTable_Find(_QWORD*, unsigned __int64*);
__int64 game_HashString(__int64 result);
extern _UNKNOWN GameData_1a98ad7;
extern __int64 (*GameData_1f9a6e0[])();
extern __int64* GameData_212cfc8[9];
extern __int64 GameData_21d96b8;
extern __int64 game_GameModeData_instance_;
void Camera_7c0d80(__int64);
__int64 game_map_anonymous_ProcMapSeqZoomOut_ZoomOutStart(__int64* a1);

__int64 game_map_anonymous_ProcMapSeqZoomOut_ZoomOutStart(__int64* a1)
{

#pragma clang fp contract(off)
  float v2;
  __int64 v3;
  __int64 result;
  __int64 v5;
  struct {
    __int64 (**v6)();
    __int64* v7;
    char gap16_[16];
    unsigned __int64* v8;
  } v6_;

  Camera_7c0d80(*(_QWORD*)(*GameData_212cfc8[0] + 432));
  if (*(_BYTE*)(GameData_21d96b8 + 14) != 0) {
    *(_BYTE*)(GameData_21d96b8 + 14) = 0;
  }
  v6_.v7 = (__int64*)&GameData_1a98ad7;
  v2 = 0x0.0p+0f;
  v6_.v6 = (__int64 (**)(void))game_HashString((__int64)&GameData_1a98ad7);
  if (game_GameModeData_instance_ != 0) {
    v3 = game_GameVariableTable_Find(
        *(_QWORD**)(game_GameModeData_instance_ + 48),
        (unsigned __int64*)&v6_.v6);
    if (v3 != 0) {
      v2 = (float)*(int*)(v3 + 32);
    }
  }
  v6_.v8 = (unsigned __int64*)&v6_.v6;
  v6_.v6 = GameData_1f9a6e0;
  v6_.v7 = a1;
  game_map_8235e0(a1, (__int64)&v6_.v6, 0x0.0p+0f, v2 / 0x1.f400000000000p+9f);
  result = (__int64)v6_.v8;
  if (v6_.v8 == (unsigned __int64*)&v6_.v6) {
    v5 = 32;
  }
  else {
    if (v6_.v8 == nullptr) {
      return result;
    }
    v5 = 40;
  }
  return (*(__int64 (**)(__int64))(*v6_.v8 + v5))((__int64)v6_.v8);
}

#pragma GCC visibility pop
