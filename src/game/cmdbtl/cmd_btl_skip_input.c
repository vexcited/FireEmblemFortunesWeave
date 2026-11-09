#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_1006910(void);
extern __int64 (*GameData_20008b8[])();
extern __int64 (*game_cmdbtl_CmdBtlSkipInput_vtable[])();
extern __int64 GameData_22190c0;
extern int GameData_22330fc;
__int64 CmdBtlSkipInput_Destructor(_QWORD* a1);
__int64 GameRoutine_1006e20(void);
__int64 GameRoutine_100b330(_QWORD);
__int64 GameRoutine_100b790(_QWORD);
__int64 GameRoutine_828800(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_ec1530(_QWORD);
__int64 GameRoutine_f82bc0(__int64, int);
__int64 game_HashString(_QWORD);
extern _UNKNOWN GameData_1abc9d5;
extern _UNKNOWN GameData_1acfb96;
extern __int64 GameData_212f518[5];
extern __int64 game_GameModeData_instance_;
extern __int64 game_ProcGameSkipView_instance_;
extern __int64* GameData_212dec0[4];
extern __int64* GameData_212f4e0[3];
__int64 CmdBtlSkipInput_1006910(__int64 result);

__int64 CmdBtlSkipInput_Destructor(_QWORD* a1)
{
  __int64 result;

  *a1 = game_cmdbtl_CmdBtlSkipInput_vtable;
  result = GameRoutine_1006910();
  *a1 = GameData_20008b8;
  if ((_QWORD*)GameData_22190c0 == a1) {
    GameData_22190c0 = 0;
    GameData_22330fc = 0;
  }
  return result;
}

__int64 CmdBtlSkipInput_1006910(__int64 result)
{
  __int64 v1;
  _QWORD* v2;
  __int64 v3;
  char v4;
  __int64* v5;
  __int64 v6;
  int v7;
  __int64 v8;
  void* v9;

  if ((*(_BYTE*)(result + 9) & 1) == 0) {
    v1 = result;
    GameRoutine_1006e20();
    v2 = (_QWORD*)GameData_212f518[0];
    if (*(_BYTE*)(v1 + 12) != 0) {
      v3 = *(_QWORD*)GameData_212f518[0];
      *(_BYTE*)(v1 + 12) = 0;
      GameRoutine_100b790(v3);
      if ((*(_BYTE*)(v1 + 11) & 1) == 0 && (*(_BYTE*)(*v2 + 10LL) & 1) == 0 &&
          (GameRoutine_ec1530(*GameData_212dec0[0]) & 1) == 0 &&
          game_ProcGameSkipView_instance_ != 0 &&
          *(_BYTE*)(game_ProcGameSkipView_instance_ + 152) != 0) {
        *(_DWORD*)(game_ProcGameSkipView_instance_ + 156) |= 2u;
      }
    }
    if (*(_BYTE*)(v1 + 11) == 1) {
      v4 = *(_BYTE*)(v1 + 20);
      *(_BYTE*)(v1 + 11) = 0;
      if ((v4 & 1) != 0) {
        GameRoutine_f82bc0(*GameData_212f4e0[0], *(_DWORD*)(v1 + 16));
      }
      else {
        v5 = GameData_212f4e0[0];
        v9 = &GameData_1acfb96;
        v6 = *GameData_212f4e0[0];
        v8 = game_HashString(&GameData_1acfb96);
        if (game_GameModeData_instance_ != 0) {
          GameRoutine_828800(game_GameModeData_instance_ + 40, &v8,
                             0xFFFFFFFFLL);
        }
        v9 = &GameData_1abc9d5;
        v8 = game_HashString(&GameData_1abc9d5);
        if (game_GameModeData_instance_ != 0) {
          GameRoutine_828800(game_GameModeData_instance_ + 40, &v8, 0);
        }
        v7 = *(unsigned __int8*)(v6 + 28);
        *(_BYTE*)(v6 + 13) = 0;
        if (v7 == 1) {
          *(_BYTE*)(v6 + 28) = 0;
        }
        if (*(_BYTE*)(*v5 + 20) == 1) {
          *(_BYTE*)(*v5 + 20) = 0;
        }
      }
    }
    result = GameRoutine_100b330(*v2);
    *(_BYTE*)(v1 + 9) = 1;
  }
  return result;
}

#pragma GCC visibility pop
