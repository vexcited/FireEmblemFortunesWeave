#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

extern __int64 GameData_21ed070;
__int64 ProcMapSeqZoomIn_7c64c0(__int64 result);
__int64* game_map_8235e0(__int64* result, __int64, float, float);
__int64 game_GameVariableTable_Find(_QWORD*, unsigned __int64*);
__int64 game_HashString(__int64 result);
extern _UNKNOWN GameData_1a98ad7;
extern __int64 (*GameData_1f9a580[])();
extern __int64* GameData_212fac8[2];
extern __int64 game_GameModeData_instance_;
__int64 game_map_anonymous_ProcMapSeqZoomIn_ZoomInStart(__int64* a1);
__int64 GameRoutine_758bc0(float);
__int64 Manager_d2ee80();
__int64 game_GameView_Update();
__int64 game_zview_ced840(_QWORD*);
extern _DWORD* GameData_212d168;
extern __int64* GameData_212eba8[8];
extern __int64 GameData_21d96b8;
void BattleUtil_7a96a0(float);
void game_map_anonymous_ProcMapSeqZoomIn_ZoomInStart_closure_Invoke(__int64 a1,
                                                                    float* a2);

__int64 game_map_anonymous_ProcMapSeqZoomIn_ZoomInStart(__int64* a1)
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

  if (*GameData_212fac8[0] != 0) {
    *(_BYTE*)(*GameData_212fac8[0] + 208) = 1;
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
  v6_.v6 = GameData_1f9a580;
  v6_.v7 = a1;
  game_map_8235e0(a1, (__int64)&v6_.v6, 0x1.0000000000000p+0f,
                  v2 / 0x1.f400000000000p+9f);
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

__int64 ProcMapSeqZoomIn_7c64c0(__int64 result)
{
  unsigned __int8* v1;
  unsigned int v2;
  bool v3;
  int v4;

  if (GameData_21ed070 == 0) {
    v1 = *(unsigned __int8**)(result + 16);
    if (v1 != nullptr) {
      v2 = *v1;
      v3 = v2 > 0x10;
      v4 = (1 << v2) & 0x1CE00;
      if (!v3 && v4 != 0) {
        *(_WORD*)(result + 136) |= 0x80u;
      }
    }
    *(_WORD*)(result + 136) |= 8u;
  }
  return result;
}

void game_map_anonymous_ProcMapSeqZoomIn_ZoomInStart_closure_Invoke(__int64 a1,
                                                                    float* a2)
{

#pragma clang fp contract(off)
  float v2;
  float v3;
  _DWORD* v4;
  int v5;
  _QWORD** v6;
  _QWORD** v7;

  v2 = *a2;
  v3 = 0x1.0000000000000p+0f;
  if (*a2 < 0x1.0000000000000p-1f) {
    v3 = *a2;
  }
  GameRoutine_758bc0(v3);
  v4 = (_DWORD*)GameData_212d168;
  v5 = *GameData_212d168;
  if (v2 >= 0x1.0000000000000p-1f) {
    if (v5 != 2) {
      *GameData_212d168 = 2;
      game_GameView_Update();
      if (GameData_21d96b8 != 0) {
        v6 = *(_QWORD***)(*GameData_212eba8[0] + 8);
        v7 = *(_QWORD***)(*GameData_212eba8[0] + 16);
        *(_BYTE*)(*GameData_212eba8[0] + 200) = 1;
        while (v6 != v7) {
          if ((*v6)[75] == 0) {
            game_zview_ced840(*v6);
          }
          v6 += 2;
        }
      }
    }
  }
  else if (v5 != 1) {
    if (GameData_21d96b8 == 0 || (Manager_d2ee80(), *(_DWORD*)v4 != 1)) {
      *(_DWORD*)v4 = 1;
      game_GameView_Update();
    }
  }
  BattleUtil_7a96a0(v2);
}

#pragma GCC visibility pop
